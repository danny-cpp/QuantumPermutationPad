pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'cd C++/'
        sh 'make'
      }
    }

  }
  parameters {
    choice(choices: '''stage
preprod
prod
''', description: 'Choose environment', name: 'ENV')
  }
}