// FUN_01093af0 @ 01093af0 size=1000 calls_out=7 calls_in=2
// strings: 

void FUN_01093af0(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined2 uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_d0;
  uint local_cc;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_ac;
  int local_a8;
  int local_a4;
  undefined2 local_a0;
  undefined2 local_9e;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined2 local_7c;
  undefined2 local_7a;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  undefined1 local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined2 local_3a;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  undefined2 local_2a;
  
  uVar9 = param_2[5];
  uVar7 = param_3[5];
  uVar5 = uVar7 + uVar9;
  iVar3 = uVar5 * 0xe8;
  uVar1 = 0;
  if (0x8d3dcb < uVar5) {
LAB_01093b2c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar3);
  }
  if (iVar3 == 0) {
    local_a8 = 4;
    uVar5 = 0;
  }
  else {
    local_a8 = thunk_FUN_016d4a50(iVar3);
    if (local_a8 == 0) {
      uVar1 = 4;
      goto LAB_01093b2c;
    }
  }
  local_a4 = 0;
  local_ac = uVar5;
  FUN_0107fbd4(&local_ac,param_2[4] + 8,uVar9 * 0xe8 + param_2[4] + 8);
  piVar10 = (int *)param_3[4];
  FUN_0107fbd4(&local_ac,piVar10 + 2,piVar10 + 2 + uVar7 * 0x3a);
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar11 = 0;
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar9 = param_2[0x16];
  bVar12 = (int)(uVar4 - (uVar7 + (uVar2 < uVar5))) < 0 ==
           (SBORROW4(uVar4,uVar7) != SBORROW4(uVar4 - uVar7,(uint)(uVar2 < uVar5)));
  if (uVar2 == uVar5 && uVar4 == uVar7) {
    bVar12 = param_2[2] <= param_3[2];
  }
  uVar6 = param_2[2];
  if (!bVar12) {
    uVar6 = param_3[2];
    uVar5 = uVar2;
    uVar7 = uVar4;
  }
  if ((short)param_2[6] == 1) {
    local_bc = param_2[9];
    uVar1 = 0;
    if ((int)local_bc < 0) {
LAB_01093c14:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,local_bc);
    }
    uVar2 = param_2[8];
    if (local_bc == 0) {
      local_b8 = 0;
      local_b4 = 1;
    }
    else {
      local_b4 = thunk_FUN_016d4a50(local_bc);
      local_b8 = local_bc;
      if (local_b4 == 0) {
        uVar1 = 1;
        goto LAB_01093c14;
      }
    }
    FUN_016dd1aa(local_b4,uVar2);
    uVar11 = 1;
  }
  else {
    local_b8 = param_2[7];
    local_3a = *(undefined2 *)((int)param_2 + 0x1a);
    local_b4 = param_2[8];
    local_bc = param_2[9];
    local_50 = param_2[10];
    uStack_4c = param_2[0xb];
    uStack_48 = param_2[0xc];
    uStack_44 = param_2[0xd];
    uStack_40 = param_2[0xe];
  }
  if ((short)param_2[0xf] == 1) {
    uVar2 = param_2[0x12];
    uVar1 = 0;
    if ((int)uVar2 < 0) {
LAB_01093cd8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,uVar2);
    }
    uVar4 = param_2[0x11];
    if (uVar2 == 0) {
      local_d0 = 0;
      local_cc = 1;
    }
    else {
      local_cc = thunk_FUN_016d4a50(uVar2);
      local_d0 = uVar2;
      if (local_cc == 0) {
        uVar1 = 1;
        goto LAB_01093cd8;
      }
    }
    FUN_016dd1aa(local_cc,uVar4,uVar2);
    local_7c = 1;
  }
  else {
    local_d0 = param_2[0x10];
    local_cc = param_2[0x11];
    local_7c = 0;
    local_38 = param_2[0x13];
    uStack_34 = param_2[0x14];
    uStack_30 = param_2[0x15];
    local_2a = *(undefined2 *)((int)param_2 + 0x3e);
    uVar2 = param_2[0x12];
  }
  iVar3 = local_a8;
  uVar4 = local_ac;
  local_94 = local_bc;
  local_9e = local_3a;
  local_98 = local_b4;
  local_9c = local_b8;
  local_90 = local_50;
  uStack_8c = uStack_4c;
  uStack_88 = uStack_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  local_74 = local_cc;
  local_78 = local_d0;
  local_7a = local_2a;
  local_6c = local_38;
  uStack_68 = uStack_34;
  uStack_64 = uStack_30;
  local_5c = param_2[0x17];
  local_58 = param_2[0x18];
  iVar8 = local_a4 * 0xe8;
  local_a0 = uVar11;
  local_70 = uVar2;
  local_60 = (char)uVar9;
  uVar13 = FUN_0105acec(iVar8);
  FUN_016dd1aa((int)uVar13 + 8,iVar3,iVar8);
  if (uVar4 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_016dd1aa(param_1 + 6,&local_a0,0x4c);
  param_1[2] = uVar6;
  bVar12 = (short)param_3[6] != 0;
  *(undefined8 *)(param_1 + 4) = uVar13;
  uVar9 = 0;
  if (bVar12) {
    uVar9 = param_3[7];
  }
  *param_1 = uVar5;
  param_1[1] = uVar7;
  if (bVar12 && uVar9 != 0) {
    thunk_FUN_016d3fb4(param_3[8]);
  }
  bVar12 = (short)param_3[0xf] != 0;
  uVar5 = 0;
  if (bVar12) {
    uVar5 = param_3[0x10];
  }
  if (bVar12 && uVar5 != 0) {
    thunk_FUN_016d3fb4(param_3[0x11]);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar10;
    bVar12 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar12);
  *piVar10 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01059b88(param_3[4],param_3[5]);
  }
  return;
}

