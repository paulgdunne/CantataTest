pipeline {
    agent any

    stages {
        stage('Generating Autotest Script') {
            environment {
                PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;${env.PATH}"
            }
            steps {
                echo 'Generating Autotest Script ...'
                	dir("reverse_string"){
                        bat 'ipg_comp --optfile ipg.cop --comp gcc -IC:/qa_systemsc/cantata/inc -O0 -g3 -Wall -c -fmessage-length=0 -o reverse_string.o reverse_string.c'
                        bat 'cantpp -application com.ipl.products.eclipse.cantpp.testscript.AutoTestGenerator -noSplash -data=../ sourceDirectory=.'
                }
            }
        }
        stage('Running Cantata Tests') {
            steps {
                echo 'Running Cantata Tests ...'
                dir("reverse_string/Cantata/tests"){
                    bat 'make all EXECUTE=1'
                }
            }
        }
        stage('Generating Cantata Reports') {
            environment {
                PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;${env.PATH}"
            }
            steps {
                echo 'Generating Cantata Reports ...'
                dir("reverse_string"){
                    bat 'cantpp -application com.ipl.products.eclipse.cantpp.cdt.TestReportGenerator -noSplash -data .. . HTML_DETAILED_REPORT'
                }
            }
        }
//        stage('Auto-generate missing tests') {
//            steps {
//                echo 'Running Auto-generate missing tests ...'
//            }
//        }
//        stage('Requirements-Based tests') {
//            steps {
//                echo 'Running Requirements -Based tests ...'
//            }
//        }
    }
}
