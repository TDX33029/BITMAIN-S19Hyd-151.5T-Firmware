// FUN_01434db4 @ 01434db4 size=80 calls_out=3 calls_in=9
// strings: 

void FUN_01434db4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = FUN_016dac50(*param_1);
    iVar2 = thunk_FUN_016dde14(6,uVar1,0,0,0,0,0);
    if (iVar2 == -4) {
      iVar2 = 0;
    }
    FUN_016d3496(iVar2);
    return;
  }
  if (*(char *)(param_1 + 6) != '\x03') {
    return;
  }
  FUN_005e6cdc(param_1 + 1);
  if (param_1[4] != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 1);
  return;
}

