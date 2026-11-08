// FUN_009cbff0 @ 009cbff0 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_009cbff0(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x4c8d9ba6 && param_2[2] == -0x38ca6f30) &&
      (param_2[1] == -0xf9d7dc8 && param_2[3] == -0x6b6b94d)) {
    iVar1 = param_1 + 0x24;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
        (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
      return param_1 + 0x1c;
    }
  }
  return iVar1;
}

