// FUN_01b49a18 @ 01b49a18 size=140 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b49a18(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_3 == 0 || param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar1 = FUN_01b6bc20(param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_01b6b1c4(*param_1);
    *param_1 = iVar1;
    param_1[1] = param_3;
  }
  return 1;
}

