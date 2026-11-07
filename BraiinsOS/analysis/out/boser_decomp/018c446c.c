// FUN_018c446c @ 018c446c size=80 calls_out=3 calls_in=3
// strings: 

void FUN_018c446c(int *param_1)

{
  if (*param_1 == -0x80000000) {
    return;
  }
  if (param_1[6] != -0x80000000) {
    FUN_018c4448(param_1 + 4);
  }
  FUN_018bc170();
  FUN_0134aee0(*param_1,param_1[1],8,0x40);
  return;
}

