// FUN_00808bbc @ 00808bbc size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00808bbc(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == -0x602730e7 && param_2[2] == -0x16d9f986) &&
      (param_2[1] == -0x76e16ccd && param_2[3] == 0x15c9f347)) {
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

