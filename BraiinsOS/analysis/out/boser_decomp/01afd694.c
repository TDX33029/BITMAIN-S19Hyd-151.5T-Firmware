// FUN_01afd694 @ 01afd694 size=140 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01afd694(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_01b6b1c4(*param_2);
  *param_2 = 0;
  *param_3 = 0;
  if (param_1[1] != 0) {
    iVar1 = FUN_01b6bc20(*param_1);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    *param_3 = param_1[1];
  }
  return 1;
}

