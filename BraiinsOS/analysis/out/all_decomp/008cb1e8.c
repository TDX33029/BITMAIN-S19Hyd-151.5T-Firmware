// FUN_008cb1e8 @ 008cb1e8 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_008cb1e8(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x38ef545b && param_2[2] == -0x1442c892) &&
      (param_2[1] == 0x42e05e4f && param_2[3] == -0x31afb367)) {
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

