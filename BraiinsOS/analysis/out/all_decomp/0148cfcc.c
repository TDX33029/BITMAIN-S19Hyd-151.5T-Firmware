// FUN_0148cfcc @ 0148cfcc size=376 calls_out=4 calls_in=1
// strings: 

void FUN_0148cfcc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar4 = (undefined4 *)*param_2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *param_2 = puVar4;
    *puVar4 = &DAT_005674cc;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar5 = param_3[1];
  uVar3 = param_3[2];
  *puVar1 = *param_3;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  uVar6 = FUN_0148ccdc(puVar4,&DAT_00563f80,puVar1,&DAT_018a4f10);
  if ((int)uVar6 != 0) {
    uVar6 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x1c))();
    puVar2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    puVar1 = (undefined4 *)uVar6;
    (*(code *)puVar2[3])(&local_28,puVar1);
    puVar4 = puVar1;
    if ((local_28 != 0x4bb436eb || iStack_20 != 0x32240290) ||
        (iStack_24 != 0x77b0867d || iStack_1c != -0x30fcc18a)) {
      puVar4 = (undefined4 *)0x0;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(puVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(puVar1);
      }
    }
    if (puVar4 != (undefined4 *)0x0) {
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      *param_1 = *puVar1;
      param_1[1] = uVar3;
      param_1[2] = uVar5;
      thunk_FUN_016d3fb4(puVar4);
      return;
    }
  }
  *param_1 = 0x80000001;
  return;
}

