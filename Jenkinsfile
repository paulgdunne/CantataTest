pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building ...'
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
