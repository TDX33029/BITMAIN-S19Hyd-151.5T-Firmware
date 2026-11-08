// FUN_0182ce5c @ 0182ce5c size=932 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_0182ce5c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined1 auStack_7c [40];
  undefined1 auStack_54 [40];
  int local_2c;
  
  uVar14 = param_2[0x1d];
  iVar12 = param_2[0x16];
  iVar3 = param_2[0x14];
  local_2c = DAT_018ddaf8;
  uVar5 = uVar14 >> 0x16;
  param_1[0x14] = param_2[0x1e];
  uVar4 = uVar5 * 0x3d1 + iVar3;
  uVar8 = param_2[0x15] + uVar5 * 0x40 + (uVar4 >> 0x1a);
  uVar4 = uVar4 & 0x3ffffff;
  uVar13 = iVar12 + (uVar8 >> 0x1a);
  uVar8 = uVar8 & 0x3ffffff;
  uVar5 = param_2[0x17] + (uVar13 >> 0x1a);
  uVar10 = uVar5 & 0x3ffffff;
  uVar11 = param_2[0x18] + (uVar5 >> 0x1a);
  uVar5 = param_2[0x19] + (uVar11 >> 0x1a);
  uVar16 = param_2[0x1a] + (uVar5 >> 0x1a);
  uVar6 = param_2[0x1b] + (uVar16 >> 0x1a);
  uVar1 = param_2[0x1c] + (uVar6 >> 0x1a);
  uVar15 = (uVar14 & 0x3fffff) + (uVar1 >> 0x1a);
  iVar3 = uVar8 + (uVar4 + 0x3d1 >> 0x1a);
  uVar14 = (uint)((0x3fffffe < iVar3 + 0x40U && iVar3 != 0x3ffffbf) &&
                 (uVar15 == 0x3fffff &&
                 (uVar13 & uVar10 & uVar11 & uVar5 & uVar16 & uVar6 & uVar1) == 0x3ffffff)) |
           uVar15 >> 0x16;
  uVar4 = (-uVar14 & 0x3d1) + uVar4;
  uVar8 = uVar8 + uVar14 * 0x40 + (uVar4 >> 0x1a);
  uVar14 = (uVar13 & 0x3ffffff) + (uVar8 >> 0x1a);
  local_a0 = uVar4 & 0x3ffffff | uVar8 * 0x4000000 & 0x3fffffff;
  local_9c = (uVar8 & 0x3ffffff) >> 4 | uVar14 * 0x400000 & 0x3fffffff;
  uVar10 = uVar10 + (uVar14 >> 0x1a);
  uVar4 = (uVar11 & 0x3ffffff) + (uVar10 >> 0x1a);
  local_98 = (uVar14 & 0x3ffffff) >> 8 | uVar10 * 0x40000 & 0x3fffffff;
  uVar5 = (uVar5 & 0x3ffffff) + (uVar4 >> 0x1a);
  local_94 = (uVar10 & 0x3ffffff) >> 0xc | uVar4 * 0x4000 & 0x3fffffff;
  uVar8 = (uVar16 & 0x3ffffff) + (uVar5 >> 0x1a);
  local_90 = (uVar4 & 0x3ffffff) >> 0x10 | uVar5 * 0x400 & 0x3fffffff;
  uVar4 = (uVar6 & 0x3ffffff) + (uVar8 >> 0x1a);
  local_8c = (uVar5 & 0x3ffffff) >> 0x14 | uVar8 * 0x40 & 0x3fffffff;
  uVar5 = (uVar1 & 0x3ffffff) + (uVar4 >> 0x1a);
  uVar15 = uVar15 + (uVar5 >> 0x1a);
  local_80 = (uVar15 & 0x3fffff) >> 6;
  local_88 = uVar4 * 4 & 0xffffffc | (uVar8 & 0x3ffffff) >> 0x18 | uVar5 * 0x10000000 & 0x3fffffff;
  local_84 = (uVar5 & 0x3ffffff) >> 2 | uVar15 * 0x1000000 & 0x3fffffff;
  FUN_01824f24(&local_a0,&DAT_00563c04);
  param_2[0x1c] = (local_84 & 0xffffff) << 2 | local_88 >> 0x1c;
  param_2[0x15] = (local_9c & 0x3fffff) << 4 | local_a0 >> 0x1a;
  param_2[0x14] = local_a0 & 0x3ffffff;
  param_2[0x16] = (local_98 & 0x3ffff) << 8 | local_9c >> 0x16;
  param_2[0x1d] = local_80 << 6 | local_84 >> 0x18;
  param_2[0x17] = (local_94 & 0x3fff) << 0xc | local_98 >> 0x12;
  param_2[0x18] = (local_90 & 0x3ff) << 0x10 | local_94 >> 0xe;
  param_2[0x19] = (local_8c & 0x3f) << 0x14 | local_90 >> 10;
  param_2[0x1b] = (local_88 & 0xfffffff) >> 2;
  param_2[0x1a] = (local_88 & 3) << 0x18 | local_8c >> 6;
  FUN_0181f914(auStack_7c,param_2 + 0x14);
  FUN_0181f130(auStack_54,param_2 + 0x14,auStack_7c);
  FUN_0181f130(param_2,param_2,auStack_7c);
  FUN_0181f130(param_2 + 10,param_2 + 10,auStack_54);
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 1;
  uVar2 = param_2[1];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  uVar2 = param_2[5];
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar7;
  param_1[7] = uVar9;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar9 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar9;
  uVar2 = param_2[0xf];
  uVar7 = param_2[0x10];
  uVar9 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar7;
  param_1[0x11] = uVar9;
  uVar2 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

