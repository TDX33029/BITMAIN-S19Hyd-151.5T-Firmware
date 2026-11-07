// FUN_0080861c @ 0080861c size=168 calls_out=0 calls_in=0
// strings: 

int FUN_0080861c(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x64f47fa0 && param_2[2] == 0x3a0ca007) &&
      (param_2[1] == 0xc45e462 && param_2[3] == 0x6e2033e7)) {
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

