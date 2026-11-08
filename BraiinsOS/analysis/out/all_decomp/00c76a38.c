// FUN_00c76a38 @ 00c76a38 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00c76a38(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x65fc0b7b && param_2[2] == -0x4c03720a) &&
      (param_2[1] == -0x2c3e9a34 && param_2[3] == 0x1372d217)) {
    iVar1 = param_1 + 0x28;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
        (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
      return param_1 + 0x20;
    }
  }
  return iVar1;
}

