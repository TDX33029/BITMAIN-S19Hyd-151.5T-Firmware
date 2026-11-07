// FUN_018c3be0 @ 018c3be0 size=124 calls_out=1 calls_in=9
// strings: 

undefined4 FUN_018c3be0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  if (param_4 != 0) {
    do {
      puStack_28 = &LAB_0161d65c;
      iStack_30 = param_3;
      puStack_2c = (undefined1 *)&iStack_30;
      iVar1 = FUN_012fa178(param_1,param_2,&DAT_0056ff60,&puStack_2c);
      if (iVar1 != 0) {
        return 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 0;
}

