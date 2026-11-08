// FUN_00ab1a14 @ 00ab1a14 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00ab1a14(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x24c37b61 && param_2[2] == -0x21efd5dc) &&
      (param_2[1] == 0x568fd026 && param_2[3] == -0x58bcb8c0)) {
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

