// FUN_01429a64 @ 01429a64 size=376 calls_out=4 calls_in=1
// strings: 

longlong FUN_01429a64(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *param_1 = puVar3;
    *puVar3 = &DAT_005674cc;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar1 = param_2;
  uVar4 = FUN_0148ccdc(puVar3,&DAT_005655c0,puVar1,&DAT_018a3ba0);
  if ((int)uVar4 != 0) {
    uVar4 = (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x1c))();
    puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    param_2 = (undefined4 *)uVar4;
    (*(code *)puVar1[3])(&local_28,param_2);
    puVar3 = param_2;
    if ((local_28 != 0x52a9580b || iStack_20 != 0x33c65144) ||
        (iStack_24 != 0x4139696f || iStack_1c != -0x482ff7b5)) {
      puVar3 = (undefined4 *)0x0;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_2);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_016d3fb4(param_2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = *param_2;
      thunk_FUN_016d3fb4(puVar3);
      return CONCAT44(uVar2,1);
    }
  }
  return ZEXT48(param_2) << 0x20;
}

