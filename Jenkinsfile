pipeline {
    agent any

    stages {
        stage('Dev') {
            steps {
                echo 'Development Stage'
                bat 'git clone https://github.com/NooBRahul/Travelling-Salesman-Problem.git'
            }
        }
        stage('QA') {
            steps {
                echo 'QA Stage'
            }
        }
        stage('UAT') {
            steps {
                echo 'UAT Stage'
            }
        }
        stage('Pre-Prod') {
            steps {
                echo 'Pre Prod Stage'
            }
        }
        stage('Prod') {
            steps {
                echo 'Prod Stage'
            }
        }
    }
}
