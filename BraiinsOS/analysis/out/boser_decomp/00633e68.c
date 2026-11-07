// FUN_00633e68 @ 00633e68 size=164 calls_out=0 calls_in=0
// strings: 

int FUN_00633e68(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x1e20f436 && param_2[2] == -0x63f3f8ae) &&
      (param_2[1] == -0x611cf3e9 && param_2[3] == -0x2877d20b)) {
    iVar1 = param_1 + 0x24;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
        (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
      iVar1 = param_1 + 0x1c;
    }
  }
  return iVar1;
}

