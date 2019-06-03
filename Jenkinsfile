pipeline {
    agent any

    stages {
        stage('Compile Source ") {
              dir("reverse_string"){
                    bat 'C:/qa_systems_OLD/cantata8.0.1/MinGW/bin/gcc.exe -c -o reverse_string.o reverse_string.c'
              }
         }
        stage("Generating Autotest Script") {
            environment {
                //PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;${env.PATH}"
                PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;$PATH"
            }
            steps {
                echo "Generating Autotest Script ..."
                	dir("reverse_string"){
                        bat 'ipg_comp --optfile ipg.cop --comp gcc -IC:/qa_systemsc/cantata/inc -O0 -g3 -Wall -c -fmessage-length=0 -o reverse_string.o reverse_string.c'
                        bat 'cantpp -application com.ipl.products.eclipse.cantpp.testscript.AutoTestGenerator -noSplash -data ../ sourceDirectory=.'
                }
            }
        }
        stage('Running Cantata Tests') {
            steps {
                echo 'Running Cantata Tests ...'
             //   dir("reverse_string/Cantata/tests"){
               //     bat 'make clean'
              //      bat 'set JENKINS_BUILD_ID=%BUILD_TAG%'
              //      bat 'echo %JENKINS_BUILD_ID%'
//                    bat 'make all EXECUTE=1 PUSH_TO_SERVER=1'
              //      bat 'make all EXECUTE=1'
            //    }
            }
        }
        stage('Generating Cantata Reports') {
            environment {
                PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;$PATH"
            }
            steps {
                echo 'Generating Cantata Reports ...'
           //     dir("reverse_string"){
          //          bat 'cantpp -application com.ipl.products.eclipse.cantpp.cdt.TestReportGenerator -noSplash -data .. . HTML_DETAILED_REPORT'
          //      }
            }
        }
//        stage('Auto-generate missing tests') {
//            steps {
//                echo 'Running Auto-generate missing tests ...'
//            }
//        }
//        stage('Requirements-Based tests') {
//            environment {
//                PATH = "D:\\SHARED\\Documents\\Jenkins\\Curl\\curl-7.64.1\\bin;${env.PATH}"
//            }
//            steps {
//                echo 'Running Requirements -Based tests ...'
//                bat 'curl http://192.168.2.87:8085/cantata/rest/1.2/trace/reqSets/831?releaseTag=version-1.0.05 application/json'
//            }
//        }
    }
}
