// FUN_005bc180 @ 005bc180 size=280 calls_out=4 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_005bc180(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *local_30 [4];
  
  puVar8 = (undefined4 *)((uint)local_30 | 4);
  do {
    piVar7 = (int *)param_2[1];
    puVar1 = (undefined4 *)piVar7[4];
    DataMemoryBarrier(0xb);
    if (puVar1 == (undefined4 *)0x0) {
      puVar6 = (undefined1 *)0x80000015;
      DataMemoryBarrier(0xb);
      if ((int *)*param_2 == piVar7) {
        puVar6 = (undefined1 *)0x80000014;
      }
      puVar3 = puVar6 + 0x7fffffed;
      if (puVar6 < &DAT_80000013) {
        puVar3 = (undefined1 *)0x0;
      }
    }
    else {
      param_2[1] = puVar1;
      if (*piVar7 != -0x7fffffec) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
      }
      puVar6 = (undefined1 *)*puVar1;
      if (puVar6 == (undefined1 *)0x80000014) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
      }
      *puVar1 = 0x80000014;
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      iVar2 = *piVar7;
      *puVar8 = puVar1[1];
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      local_30[0] = puVar6;
      if (iVar2 != -0x7fffffec) {
        FUN_005c5c5c(piVar7);
      }
      thunk_FUN_016d3fb4(piVar7);
      local_40 = *puVar8;
      uStack_3c = puVar8[1];
      uStack_38 = puVar8[2];
      puVar3 = puVar6 + 0x7fffffed;
      if (puVar6 < &DAT_80000013) {
        puVar3 = (undefined1 *)0x0;
      }
    }
    if (puVar3 != (undefined1 *)0x2) {
      if (puVar3 == (undefined1 *)0x0) {
        param_1[1] = local_40;
        param_1[2] = uStack_3c;
        param_1[3] = uStack_38;
        *param_1 = puVar6;
        return;
      }
      *param_1 = 0x80000014;
      return;
    }
    FUN_016da3a8();
  } while( true );
}

