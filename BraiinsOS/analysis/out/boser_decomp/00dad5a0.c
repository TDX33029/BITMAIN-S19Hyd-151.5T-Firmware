// FUN_00dad5a0 @ 00dad5a0 size=120 calls_out=7 calls_in=0
// strings: 

void FUN_00dad5a0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 3) {
    if (*param_1 == 2) {
      iVar1 = param_1[2];
      FUN_00b92e1c(iVar1,param_1[3]);
      FUN_0132b958(param_1[1],iVar1,8,0xd8);
    }
    else {
      FUN_019de0e0(param_1);
      if (param_1[3] != -1) {
        FUN_01bf01d6();
      }
      FUN_0179995c(param_1);
      FUN_01139b38(param_1[4],param_1[5]);
    }
  }
  FUN_012840cc(param_1 + 7);
  return;
}

