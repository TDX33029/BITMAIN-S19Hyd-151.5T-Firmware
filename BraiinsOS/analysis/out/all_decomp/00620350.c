// FUN_00620350 @ 00620350 size=1464 calls_out=4 calls_in=1
// strings: 

void FUN_00620350(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_d0;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int *local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_2 == 0) {
    puVar12 = (uint *)param_3[8];
    puVar14 = (uint *)param_3[9];
    bVar2 = (byte)param_3[0xe];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar23 = param_3[2];
    uVar22 = param_3[3];
    uVar20 = param_3[0xc];
    uVar18 = param_3[0xd];
    uVar17 = *param_3;
    uVar8 = param_3[1];
    uVar3 = param_3[6];
    uVar4 = param_3[0x11];
    local_b0 = (int *)param_2[3];
    local_ac = param_2[4];
    local_c0 = param_2[6];
    local_d0 = param_2[9];
    local_bc = param_2[7];
    local_a8 = param_2[8];
    uVar13 = param_2[5];
    local_2c = local_a8;
    uVar15 = param_2[2];
    do {
      if ((uVar15 & 1) != 0) {
        uVar15 = 1;
        local_e4 = local_bc;
        local_e8 = local_ac;
        local_bc = local_c0;
        local_c4 = uVar13;
        goto LAB_00620688;
      }
      if (local_b0 != (int *)0x0) {
        iVar21 = *local_b0;
        iVar19 = local_b0[2];
        uVar15 = 4;
        uVar4 = local_b0[3];
        uVar3 = local_b0[1];
        local_28 = 0;
        local_2c = 4;
        local_30 = 0;
        goto LAB_00620784;
      }
      uVar15 = 0;
      local_2c = 0;
      if (local_ac != 2) {
        local_e4 = local_bc;
        local_e8 = local_ac;
        local_bc = local_c0;
        local_ec = local_d0;
        local_ac = 4;
        local_c4 = uVar13;
        goto LAB_00620688;
      }
      if (((bVar2 & 1) != 0) || (puVar12 == puVar14)) {
        local_ac = 3;
        goto LAB_00620688;
      }
      local_ac = 3;
      puVar9 = puVar12;
      while( true ) {
        local_2c = puVar9[5];
        puVar12 = puVar9 + 8;
        bVar1 = local_2c - uVar18 < (uint)(uVar20 <= puVar9[4]);
        bVar2 = uVar18 < local_2c || bVar1;
        if (uVar18 < local_2c || bVar1) break;
        local_2c = puVar9[3];
        if ((uVar22 <= local_2c && (uint)(puVar9[2] <= uVar23) <= uVar22 - local_2c) &&
           (local_2c = puVar9[1], local_2c <= uVar7 && (uint)(uVar6 <= *puVar9) <= local_2c - uVar7)
           ) {
          param_3[8] = (uint)puVar12;
          uVar11 = *(uint *)(uVar3 + 0xc);
          uVar13 = puVar9[6];
          if (uVar11 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar13,uVar11,&DAT_018579b8);
          }
          local_2c = *(uint *)(uVar3 + 8);
          local_30 = uVar13 * 0x160 + local_2c;
          puVar5 = &local_34;
          goto LAB_00620550;
        }
        puVar9 = puVar12;
        if (puVar12 == puVar14) {
          goto LAB_00620688;
        }
      }
      *(undefined1 *)(param_3 + 0xe) = 1;
      puVar9 = (uint *)0x0;
      param_3[8] = (uint)puVar12;
      puVar5 = &local_30;
LAB_00620550:
      *puVar5 = (uint)puVar9;
      if (local_30 == 0) goto LAB_00620688;
      FUN_0062c424(&local_a0,local_30,uVar17,uVar8,uVar4);
      local_e8 = local_a0;
      local_e4 = local_9c;
      local_b0 = local_94;
      local_ac = local_90;
      local_c4 = local_8c;
      local_c0 = local_88;
      local_bc = local_84;
      local_ec = uStack_78;
      local_f0 = local_74;
      local_f4 = local_70;
      local_d0 = uStack_7c;
      param_2[9] = uStack_7c;
      local_f8 = local_6c;
      local_a8 = local_80;
      param_2[8] = local_80;
      param_2[10] = uStack_78;
      param_2[1] = local_9c;
      param_2[2] = local_98;
      param_2[0xb] = local_74;
      param_2[3] = (uint)local_94;
      param_2[0xe] = local_68;
      param_2[0xf] = uStack_64;
      param_2[0xc] = local_70;
      param_2[4] = local_90;
      param_2[0xd] = local_6c;
      param_2[6] = local_88;
      *param_2 = local_a0;
      param_2[5] = local_8c;
      param_2[7] = local_84;
      uVar13 = local_8c;
      local_2c = local_84;
      uVar15 = local_98;
    } while (local_a0 == 0);
  }
  uVar13 = param_2[9];
  uVar15 = param_2[10];
  uVar17 = param_2[0xb];
  *param_1 = param_2[8];
  param_1[1] = uVar13;
  param_1[2] = uVar15;
  param_1[3] = uVar17;
  uVar13 = param_2[0xd];
  uVar15 = param_2[0xe];
  uVar17 = param_2[0xf];
  param_1[4] = param_2[0xc];
  param_1[5] = uVar13;
  param_1[6] = uVar15;
  param_1[7] = uVar17;
  local_a0 = *param_2;
  local_9c = param_2[1];
  local_98 = param_2[2];
  local_94 = (int *)param_2[3];
  local_90 = param_2[4];
  local_8c = param_2[5];
  local_88 = param_2[6];
  local_84 = param_2[7];
  FUN_016dd1aa(&local_80,param_3,0x48);
  FUN_016dd1aa(param_1 + 8,&local_a0,0x68);
  return;
LAB_00620784:
  uVar6 = local_28;
  iVar16 = 0;
  if (uVar4 != 1) {
    if (uVar4 == 0) goto LAB_0062086c;
    uVar7 = uVar4;
    do {
      iVar10 = iVar16 + (uVar7 >> 1);
      puVar12 = (uint *)(iVar19 + iVar10 * 0x18);
      if (puVar12[4] <= local_28) {
        if (puVar12[4] < local_28) {
          iVar16 = iVar10;
        }
        else if (puVar12[1] < uVar8 || uVar8 - puVar12[1] < (uint)(*puVar12 <= uVar17)) {
          iVar16 = iVar10;
        }
      }
      uVar7 = uVar7 - (uVar7 >> 1);
    } while (1 < uVar7);
  }
  puVar12 = (uint *)(iVar19 + iVar16 * 0x18);
  if (((local_28 < puVar12[4]) || (puVar12[4] < local_28)) ||
     (uVar8 <= puVar12[1] && (uint)(*puVar12 <= uVar17) <= uVar8 - puVar12[1])) {
LAB_0062086c:
    uVar15 = 0;
    local_f4 = local_30;
    local_ec = param_3[0x10];
    local_f0 = local_2c + local_28 * 4;
    local_f8 = *(int *)param_3[0x11] + 8;
    local_c4 = local_c0;
    local_e4 = local_a8;
    local_a8 = local_d0;
    local_e8 = uVar13;
LAB_00620688:
    param_1[8] = local_f8;
    param_1[9] = (uint)local_b0;
    param_1[0xc] = local_f4;
    param_1[0xd] = local_f0;
    param_1[2] = local_e8;
    param_1[3] = local_c4;
    param_1[4] = local_bc;
    param_1[5] = local_e4;
    *(undefined1 *)(param_1 + 0x1e) = 2;
    param_1[6] = local_a8;
    param_1[10] = local_2c;
    param_1[0xb] = local_2c;
    *param_1 = uVar15;
    param_1[1] = local_ac;
    param_1[7] = local_ec;
    return;
  }
  uVar7 = puVar12[3];
  if (uVar7 < uVar8 || uVar8 - uVar7 < (uint)(puVar12[2] <= uVar17)) goto LAB_0062086c;
  uVar18 = puVar12[5];
  if (uVar3 <= uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar18,uVar3,&DAT_01857978);
  }
  if (local_28 == local_30) {
    FUN_0061ca08(&local_30,local_30,uVar8 - (uVar7 + (puVar12[2] > uVar17)));
    uVar15 = local_2c;
  }
  *(uint *)(uVar15 + uVar6 * 4) = iVar21 + uVar18 * 0x28;
  uVar4 = uVar4 - (iVar16 + 1);
  local_28 = uVar6 + 1;
  iVar19 = iVar19 + (iVar16 + 1) * 0x18;
  goto LAB_00620784;
}

