pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building ...'
                dir("D:/SHARED/Documents/git/CantataTest/reverse_string") {
                    sh """
                        ipg_comp --optfile ipg.cop --comp gcc -IC:/qa_systemsc/cantata/inc -O0 -g3 -Wall -c -fmessage-length=0 -o reverse_string.o reverse_string.c
                    """
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
