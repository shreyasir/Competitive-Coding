resource "aws_vpc" "vpc-east-1" {
  cidr_block = "10.0.0.0/16"
  tags = {
    "Name" = "myvpc"
  }
}
