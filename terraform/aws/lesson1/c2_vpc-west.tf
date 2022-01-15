resource "aws_vpc" "vpc-west-1" {
  cidr_block = "10.0.0.0/16"
  provider   = aws.us-west-1
  tags = {
    "Name" = "myvpc"
  }
}
