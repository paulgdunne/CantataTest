pipeline {
    agent any

    stages {
        stage('Build') {
            environment {
                PATH = "C:\\qa_systems\\cantata;C:\\qa_systems\\cantata\\MinGW\\msys\\1.0\\bin;${env.PATH}"
            }
            steps {
                echo 'Building ...'
                	dir("reverse_string"){
                        bat 'ipg_comp --optfile ipg.cop --comp gcc -IC:/qa_systemsc/cantata/inc -O0 -g3 -Wall -c -fmessage-length=0 -o reverse_string.o reverse_string.c'
                        bat 'cantpp -application com.ipl.products.eclipse.cantpp.testscript.AutoTestGenerator -noSplash -data=../ sourceDirectory=.'
                }
            }
        }
        stage('Static Metrics ') {
            steps {
                echo 'Running Static Metrics ...'
            }
        }
        stage('Impacted unit test') {
            steps {
                echo 'Running Impacted unit test ...'
              //  cantataRunTest appendToTopLevelLog: true, arguments: '', cantataExecDir: 'Cantata/tests', execute: true, outputToConsole: true, pushToServer: true
            }
        }
        stage('Auto-generate missing tests') {
            steps {
                echo 'Running Auto-generate missing tests ...'
            }
        }
        stage('Requirements-Based tests') {
            steps {
                echo 'Running Requirements -Based tests ...'
            }
        }
    }
}
