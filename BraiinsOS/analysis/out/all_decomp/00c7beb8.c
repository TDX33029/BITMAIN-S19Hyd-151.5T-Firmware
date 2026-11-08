// FUN_00c7beb8 @ 00c7beb8 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00c7beb8(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0xf0a8b27 && param_2[2] == 0x270e4b95) &&
      (param_2[1] == 0x2389bde6 && param_2[3] == -0x565dfbe3)) {
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

