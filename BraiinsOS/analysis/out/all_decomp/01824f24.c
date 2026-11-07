// FUN_01824f24 @ 01824f24 size=1272 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_01824f24(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined1 auStack_4c [32];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(&local_74,0,0x24,0);
  FUN_016dd606(auStack_4c,0,0x20);
  local_90 = param_2[2];
  uVar10 = *param_2;
  local_50 = 1;
  local_8c = param_2[8];
  local_b0 = param_1[1];
  local_94 = param_2[1];
  local_84 = param_1[2];
  local_c0 = param_2[3];
  local_c4 = param_1[3];
  local_b8 = param_2[4];
  local_bc = param_1[4];
  local_a8 = param_2[5];
  local_a0 = param_1[5];
  local_ac = param_2[6];
  local_9c = param_1[6];
  local_b4 = param_2[7];
  local_98 = param_1[7];
  uVar9 = *param_1;
  local_a4 = param_1[8];
  local_cc = 0xffffffff;
  local_c8 = 0x14;
  do {
    uVar7 = 1;
    uVar8 = 0;
    iVar12 = 0x1e;
    uVar6 = 0;
    uVar11 = 1;
    uVar3 = uVar9;
    uVar14 = uVar10;
    do {
      uVar5 = (int)local_cc >> 0x1f;
      iVar12 = iVar12 + -1;
      uVar15 = -(uVar3 & 1);
      uVar8 = uVar8 + ((uVar11 ^ uVar5) - uVar5 & uVar15);
      uVar7 = uVar7 + ((uVar6 ^ uVar5) - uVar5 & uVar15);
      uVar4 = uVar5 & uVar15;
      uVar3 = ((uVar14 ^ uVar5) - uVar5 & uVar15) + uVar3;
      uVar11 = ((uVar8 & uVar4) + uVar11) * 2;
      local_cc = (local_cc ^ uVar4) - 1;
      uVar14 = uVar14 + (uVar4 & uVar3);
      uVar3 = uVar3 >> 1;
      uVar6 = ((uVar7 & uVar4) + uVar6) * 2;
    } while (iVar12 != 0);
    FUN_01824094(&local_74,&local_50,uVar11,uVar6,uVar8,uVar7,param_2);
    lVar1 = ((longlong)(int)uVar10 * (longlong)(int)uVar11 +
             (longlong)(int)uVar6 * (longlong)(int)uVar9 >> 0x1e) +
            (longlong)(int)uVar11 * (longlong)(int)local_94 +
            (longlong)(int)uVar6 * (longlong)(int)local_b0;
    uVar3 = (uint)lVar1;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = ((longlong)(int)uVar8 * (longlong)(int)uVar10 +
             (longlong)(int)uVar9 * (longlong)(int)uVar7 >> 0x1e) +
            (longlong)(int)uVar8 * (longlong)(int)local_94 +
            (longlong)(int)uVar7 * (longlong)(int)local_b0;
    uVar10 = (uint)lVar1;
    uVar9 = uVar10 & 0x3fffffff;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = uVar3 >> 0x1e | iVar12 * 4;
    uVar15 = uVar10 >> 0x1e | iVar13 * 4;
    uVar10 = uVar3 & 0x3fffffff;
    lVar1 = (longlong)(int)local_90 * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_84;
    uVar3 = (uint)lVar1;
    uVar14 = uVar3 + uVar5;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar3,uVar5);
    lVar1 = (longlong)(int)local_90 * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_84;
    uVar3 = (uint)lVar1;
    local_b0 = uVar3 + uVar15;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar3,uVar15);
    local_94 = uVar14 & 0x3fffffff;
    uVar3 = local_b0 >> 0x1e | iVar13 * 4;
    local_b0 = local_b0 & 0x3fffffff;
    uVar5 = uVar14 >> 0x1e | iVar12 * 4;
    lVar1 = (longlong)(int)local_c0 * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_c4;
    uVar14 = (uint)lVar1;
    uVar15 = uVar14 + uVar5;
    iVar16 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar14,uVar5);
    lVar1 = (longlong)(int)local_c0 * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_c4;
    uVar14 = (uint)lVar1;
    local_84 = uVar14 + uVar3;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar14,uVar3);
    local_90 = uVar15 & 0x3fffffff;
    uVar5 = local_84 >> 0x1e | iVar12 * 4;
    local_84 = local_84 & 0x3fffffff;
    uVar15 = uVar15 >> 0x1e | iVar16 * 4;
    lVar1 = (longlong)(int)local_b8 * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_bc;
    uVar3 = (uint)lVar1;
    uVar14 = uVar3 + uVar15;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20) + (iVar16 >> 0x1e) + (uint)CARRY4(uVar3,uVar15);
    lVar1 = (longlong)(int)local_b8 * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_bc;
    uVar3 = (uint)lVar1;
    local_c4 = uVar3 + uVar5;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar3,uVar5);
    uVar15 = local_c4 >> 0x1e | iVar12 * 4;
    local_c0 = uVar14 & 0x3fffffff;
    local_c4 = local_c4 & 0x3fffffff;
    uVar3 = uVar14 >> 0x1e | iVar13 * 4;
    lVar1 = (longlong)(int)local_a8 * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_a0;
    uVar14 = (uint)lVar1;
    uVar5 = uVar14 + uVar3;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar14,uVar3);
    lVar1 = (longlong)(int)local_a8 * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_a0;
    uVar3 = (uint)lVar1;
    local_bc = uVar3 + uVar15;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar3,uVar15);
    local_b8 = uVar5 & 0x3fffffff;
    uVar15 = local_bc >> 0x1e | iVar12 * 4;
    local_bc = local_bc & 0x3fffffff;
    uVar5 = uVar5 >> 0x1e | iVar13 * 4;
    lVar1 = (longlong)(int)local_ac * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_9c;
    uVar3 = (uint)lVar1;
    uVar14 = uVar3 + uVar5;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar3,uVar5);
    lVar1 = (longlong)(int)local_ac * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_9c;
    uVar3 = (uint)lVar1;
    uVar5 = uVar3 + uVar15;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar3,uVar15);
    local_a8 = uVar14 & 0x3fffffff;
    local_a0 = uVar5 & 0x3fffffff;
    uVar3 = uVar5 >> 0x1e | iVar12 * 4;
    uVar5 = uVar14 >> 0x1e | iVar13 * 4;
    lVar1 = (longlong)(int)local_b4 * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_98;
    uVar14 = (uint)lVar1;
    local_ac = uVar14 + uVar5;
    iVar13 = (int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar14,uVar5);
    lVar1 = (longlong)(int)local_b4 * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_98;
    uVar14 = (uint)lVar1;
    uVar5 = uVar14 + uVar3;
    iVar12 = (int)((ulonglong)lVar1 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar14,uVar3);
    lVar1 = (longlong)(int)local_8c * (longlong)(int)uVar11 +
            (longlong)(int)uVar6 * (longlong)(int)local_a4;
    uVar6 = (uint)lVar1;
    lVar2 = (longlong)(int)local_8c * (longlong)(int)uVar8 +
            (longlong)(int)uVar7 * (longlong)(int)local_a4;
    uVar3 = (uint)lVar2;
    uVar14 = local_ac >> 0x1e | iVar13 * 4;
    local_ac = local_ac & 0x3fffffff;
    local_b4 = uVar6 + uVar14;
    local_9c = uVar5 & 0x3fffffff;
    uVar11 = uVar5 >> 0x1e | iVar12 * 4;
    local_98 = uVar3 + uVar11;
    local_c8 = local_c8 + -1;
    local_8c = local_b4 >> 0x1e |
               ((int)((ulonglong)lVar1 >> 0x20) + (iVar13 >> 0x1e) + (uint)CARRY4(uVar6,uVar14)) * 4
    ;
    local_b4 = local_b4 & 0x3fffffff;
    local_a4 = local_98 >> 0x1e |
               ((int)((ulonglong)lVar2 >> 0x20) + (iVar12 >> 0x1e) + (uint)CARRY4(uVar3,uVar11)) * 4
    ;
    local_98 = local_98 & 0x3fffffff;
  } while (local_c8 != 0);
  FUN_0181e4fc(&local_74,local_8c,param_2);
  *param_1 = local_74;
  param_1[1] = uStack_70;
  param_1[2] = uStack_6c;
  param_1[3] = uStack_68;
  param_1[4] = local_64;
  param_1[5] = uStack_60;
  param_1[6] = uStack_5c;
  param_1[7] = uStack_58;
  param_1[8] = local_54;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

