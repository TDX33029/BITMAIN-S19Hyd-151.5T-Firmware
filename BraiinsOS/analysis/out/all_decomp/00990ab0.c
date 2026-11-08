// FUN_00990ab0 @ 00990ab0 size=556 calls_out=3 calls_in=2
// strings: 

void FUN_00990ab0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined2 param_5
                 ,undefined2 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int extraout_r1;
  undefined4 uVar11;
  int extraout_r1_00;
  undefined4 uVar12;
  uint uVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  piVar4 = (int *)thunk_FUN_016d4a50(8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  iVar5 = *param_3;
  uVar10 = param_3[1];
  *piVar4 = iVar5;
  piVar4[1] = uVar10;
  uVar13 = *(uint *)(iVar5 + 8);
  if ((uVar10 & 0xffff) < (uVar13 & 0xffff)) {
    *(short *)((int)piVar4 + 6) = (short)uVar10;
    *(short *)(piVar4 + 1) = (short)uVar10 + (short)(uVar10 >> 0x10);
    uVar13 = uVar10;
  }
  (**(code **)(*(int *)(param_2 + 0x14) + 0x2c))
            (*(int *)(param_2 + 0x10) + (*(int *)(*(int *)(param_2 + 0x14) + 8) - 1U & 0xfffffff8) +
             8);
  puVar6 = (undefined4 *)(**(code **)(extraout_r1 + 0x30))();
  uVar7 = *puVar6;
  uVar11 = puVar6[1];
  ClearExclusiveLocal();
  FUN_015f3b0c(&local_38,1);
  (**(code **)(*(int *)(param_2 + 0x14) + 0x2c))
            (*(int *)(param_2 + 0x10) + (*(int *)(*(int *)(param_2 + 0x14) + 8) - 1U & 0xfffffff8) +
             8);
  puVar6 = (undefined4 *)(**(code **)(extraout_r1_00 + 0x34))();
  uVar8 = *puVar6;
  uVar12 = puVar6[1];
  ClearExclusiveLocal();
  FUN_015f3b0c(&local_38,1);
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = param_4;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)((int)puVar9 + 10) = param_6;
  *(undefined2 *)(puVar9 + 2) = param_5;
  *puVar9 = 1;
  puVar9[1] = 1;
  FUN_015f3b0c(&local_38,1);
  uVar3 = local_30;
  uVar2 = local_34;
  uVar1 = local_38;
  FUN_015f3b0c(&local_38,1);
  param_1[0xe] = uVar7;
  param_1[0x11] = uVar12;
  param_1[0xf] = uVar11;
  param_1[0x10] = uVar8;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[4] = local_38;
  param_1[5] = local_34;
  param_1[8] = piVar4;
  param_1[10] = puVar6;
  param_1[0x14] = param_2;
  *(undefined1 *)(param_1 + 0x16) = 1;
  param_1[0x15] = 0x1000a;
  *(short *)((int)param_1 + 0x4a) = (short)uVar13;
  *(undefined2 *)(param_1 + 0x12) = 1;
  param_1[9] = &DAT_01868c0c;
  param_1[0xb] = &DAT_01868c58;
  param_1[0xc] = puVar9;
  param_1[0xd] = &DAT_01868c70;
  *(short *)((int)param_1 + 0x4e) = (short)uVar13;
  *(undefined2 *)(param_1 + 0x13) = 1;
  param_1[2] = uVar3;
  param_1[6] = local_30;
  return;
}

