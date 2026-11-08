// FUN_008cba68 @ 008cba68 size=168 calls_out=0 calls_in=0
// strings: 

int FUN_008cba68(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x79fc4588 && param_2[2] == -0xdb6a980) &&
      (param_2[1] == -0x2a9546a4 && param_2[3] == 0x4c155cad)) {
    iVar1 = param_1 + 0x28;
  }
  else {
    iVar1 = 0;
    if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
        (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
      return param_1 + 0x1c;
    }
  }
  return iVar1;
}

