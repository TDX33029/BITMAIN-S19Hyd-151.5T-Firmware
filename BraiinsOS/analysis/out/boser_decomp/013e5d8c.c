// FUN_013e5d8c @ 013e5d8c size=128 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_013e5d8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_30;
  undefined1 *puStack_2c;
  code *pcStack_28;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0xe8;
    do {
      pcStack_28 = FUN_013cbe24;
      iStack_30 = param_1;
      puStack_2c = (undefined1 *)&iStack_30;
      iVar1 = FUN_012fa178(param_3,param_4,&DAT_00582d7f,&puStack_2c);
      if (iVar1 != 0) {
        return 1;
      }
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -0xe8;
    } while (param_2 != 0);
  }
  return 0;
}

