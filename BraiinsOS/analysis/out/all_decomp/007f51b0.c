// FUN_007f51b0 @ 007f51b0 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_007f51b0(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x1702c96a && param_2[2] == 0x7188dcf1) &&
      (param_2[1] == -0x377ace8e && param_2[3] == 0x6c1bb0cb)) {
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

