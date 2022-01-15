terraform {
  required_providers {
    aws = {
      source  = "hashicorp/aws"
      version = "~> 3.0"
    }
  }
}

# Configure the AWS Provider
provider "aws" {
  region  = "us-east-1"
  profile = "defalut"
}

#multiple providers
provider "aws" {
  region  = "us-west-1"
  profile = "defalut"
  alias = "us-west-1"
}
