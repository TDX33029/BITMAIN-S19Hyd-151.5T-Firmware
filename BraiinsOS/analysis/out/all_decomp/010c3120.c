// FUN_010c3120 @ 010c3120 size=408 calls_out=4 calls_in=2
// strings: 

void FUN_010c3120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar7 = (undefined4 *)*param_2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *param_2 = puVar7;
    *puVar7 = &DAT_005674cc;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x40);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  uVar5 = param_3[8];
  uVar6 = param_3[9];
  puVar1[5] = param_3[5];
  puVar1[6] = uVar3;
  puVar1[7] = uVar4;
  puVar1[8] = uVar5;
  puVar1[9] = uVar6;
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  uVar5 = param_3[0xd];
  uVar6 = param_3[0xe];
  uVar8 = param_3[0xf];
  puVar1[10] = param_3[10];
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar8;
  uVar9 = FUN_010b995c(puVar7,&DAT_00564e00,puVar1,&DAT_01884dac);
  if ((int)uVar9 != 0) {
    uVar9 = (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0x1c))();
    puVar2 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
    puVar1 = (undefined4 *)uVar9;
    (*(code *)puVar2[3])(&local_30,puVar1);
    puVar7 = puVar1;
    if ((local_30 != -0xe82c6b || iStack_28 != 0xb5b9404) ||
        (iStack_2c != -0x283c9909 || iStack_24 != 0x4048f489)) {
      puVar7 = (undefined4 *)0x0;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(puVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(puVar1);
      }
    }
    if (puVar7 != (undefined4 *)0x0) {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      *param_1 = *puVar1;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = uVar6;
      uVar3 = puVar1[6];
      uVar4 = puVar1[7];
      uVar5 = puVar1[8];
      uVar6 = puVar1[9];
      param_1[5] = puVar1[5];
      param_1[6] = uVar3;
      param_1[7] = uVar4;
      param_1[8] = uVar5;
      param_1[9] = uVar6;
      uVar3 = puVar1[0xb];
      uVar4 = puVar1[0xc];
      uVar5 = puVar1[0xd];
      uVar6 = puVar1[0xe];
      uVar8 = puVar1[0xf];
      param_1[10] = puVar1[10];
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar4;
      param_1[0xd] = uVar5;
      param_1[0xe] = uVar6;
      param_1[0xf] = uVar8;
      thunk_FUN_016d3fb4(puVar7);
      return;
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

