// FUN_00618b80 @ 00618b80 size=772 calls_out=2 calls_in=1
// strings: 

void FUN_00618b80(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_r10;
  undefined2 uVar10;
  uint *puVar11;
  uint *extraout_r12;
  uint uVar12;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  char local_38;
  undefined2 local_37;
  undefined1 local_35;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar12 = *param_2 - 3;
  uVar1 = 2;
  if (2 < *param_2) {
    uVar1 = uVar12;
  }
  if (uVar1 == 0) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  if (uVar1 == 1) {
    uVar1 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    param_2[1] = 2;
    if ((1 < uVar12) && (param_2[0xb] != 0)) {
      thunk_FUN_016d3fb4(param_2[9]);
    }
    *param_2 = 3;
    param_1[3] = uVar1;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    param_1[8] = uVar9;
    *(undefined2 *)(param_1 + 9) = 2;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  puVar11 = &local_58;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uStack_48 = param_2[4];
  uStack_44 = param_2[5];
  uVar10 = 2;
  *param_2 = 2;
  if (param_2[10] == param_2[0xc]) {
    uVar1 = param_2[8];
    iVar3 = *(int *)(uVar1 + 0x14);
    if (iVar3 == 0) {
      uVar5 = *(uint *)(uVar1 + 0x10);
      uVar1 = param_2[0xb];
    }
    else {
      puVar11 = *(uint **)(uVar1 + 0x18);
      uVar10 = *(undefined2 *)(param_2[6] + 0x158);
      unaff_r10 = *(undefined2 *)(param_2[6] + 0x15a);
      uVar5 = *(uint *)(uVar1 + 0x10);
      uVar1 = param_2[0xb];
    }
    if (uVar1 != 0) {
      thunk_FUN_016d3fb4(param_2[9]);
    }
    *param_2 = 3;
    param_1[3] = local_58;
    param_1[4] = uStack_54;
    param_1[5] = uStack_50;
    param_1[6] = uStack_4c;
    param_1[7] = uStack_48;
    param_1[8] = uStack_44;
    *(undefined2 *)((int)param_1 + 0x26) = unaff_r10;
    param_1[10] = iVar3;
    param_1[1] = 1;
    param_1[0xb] = puVar11;
    *(undefined2 *)(param_1 + 9) = uVar10;
  }
  else {
    puVar2 = (undefined4 *)(param_2[0xc] - 4);
    puVar6 = (uint *)*puVar2;
    uVar1 = 0;
    param_2[0xc] = (uint)puVar2;
    uVar12 = puVar6[8];
    uVar4 = puVar6[7];
    if ((*puVar6 & 1) != 0) {
      uVar1 = param_2[6];
      puVar11 = *(uint **)(uVar1 + 0x14);
      if (*(int *)(uVar1 + 0x10) == 0x2f && puVar11 == (uint *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar5 = puVar6[2];
        FUN_0061a1fc(&local_38,uVar1 + 0x118,param_2[7],uVar1,(int *)(uVar1 + 0x10));
        if (local_38 != 'O') {
          *(char *)(param_1 + 2) = local_38;
          *(undefined1 *)((int)param_1 + 0xb) = local_35;
          *(undefined2 *)((int)param_1 + 9) = local_37;
          param_1[3] = local_34;
          param_1[4] = local_30;
          param_1[5] = local_2c;
          *param_1 = 1;
          return;
        }
        uVar1 = 0;
        puVar11 = extraout_r12;
        if (uVar5 < (uint)local_34[1]) {
          iVar3 = *local_34 + uVar5 * 0xc;
          uVar1 = *(uint *)(iVar3 + 4);
          puVar11 = *(uint **)(iVar3 + 8);
        }
      }
    }
    uVar7 = puVar6[4];
    uVar5 = puVar6[6];
    *param_2 = (uint)(uVar4 != 0);
    param_2[1] = uVar4;
    param_2[2] = (uint)(uVar12 != 0);
    param_2[3] = uVar12;
    param_2[4] = uVar1;
    param_2[5] = (uint)puVar11;
    if (uVar7 == 0) {
      uVar10 = 2;
    }
    else {
      uVar12 = puVar6[5];
      uVar10 = *(undefined2 *)(param_2[6] + 0x158);
      puVar11 = (uint *)(uint)*(ushort *)(param_2[6] + 0x15a);
    }
    param_1[3] = local_58;
    param_1[4] = uStack_54;
    param_1[5] = uStack_50;
    param_1[6] = uStack_4c;
    param_1[7] = uStack_48;
    param_1[8] = uStack_44;
    param_1[1] = 1;
    param_1[10] = uVar7;
    param_1[0xb] = uVar12;
    *(short *)((int)param_1 + 0x26) = (short)puVar11;
    *(undefined2 *)(param_1 + 9) = uVar10;
  }
  param_1[2] = uVar5;
  *param_1 = 0;
  return;
}

