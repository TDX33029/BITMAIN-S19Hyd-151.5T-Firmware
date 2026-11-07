// FUN_00c7b76c @ 00c7b76c size=168 calls_out=0 calls_in=0
// strings: 

int FUN_00c7b76c(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x610959cf && param_2[2] == 0x46e8bb48) &&
      (param_2[1] == -0x6fe78eef && param_2[3] == -0x1aa8179b)) {
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

