// FUN_0182bb58 @ 0182bb58 size=752 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_0182bb58(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar1 = (uint)param_2[9] >> 0x16;
  local_2c = DAT_018ddaf8;
  local_54 = uVar1 * 0x3d1 + *param_2;
  uVar10 = param_2[1] + uVar1 * 0x40 + (local_54 >> 0x1a);
  local_54 = local_54 & 0x3ffffff;
  uVar1 = param_2[2] + (uVar10 >> 0x1a);
  uVar10 = uVar10 & 0x3ffffff;
  uVar16 = param_2[3] + (uVar1 >> 0x1a);
  uVar15 = param_2[4] + (uVar16 >> 0x1a);
  uVar16 = uVar16 & 0x3ffffff;
  uVar3 = uVar15 & 0x3ffffff;
  uVar4 = param_2[5] + (uVar15 >> 0x1a);
  uVar2 = uVar1 & 0x3ffffff;
  uVar6 = param_2[6] + (uVar4 >> 0x1a);
  uVar5 = uVar4 & 0x3ffffff;
  uVar11 = param_2[7] + (uVar6 >> 0x1a);
  uVar7 = uVar6 & 0x3ffffff;
  uVar8 = param_2[8] + (uVar11 >> 0x1a);
  uVar12 = uVar11 & 0x3ffffff;
  uVar17 = (param_2[9] & 0x3fffffU) + (uVar8 >> 0x1a);
  uVar9 = uVar8 & 0x3ffffff;
  iVar13 = uVar10 + (local_54 + 0x3d1 >> 0x1a);
  uVar14 = iVar13 + 0x40;
  if ((0x3fffffe < uVar14 && iVar13 != 0x3ffffbf) &&
      (uVar17 == 0x3fffff && (uVar1 & uVar16 & uVar15 & uVar4 & uVar6 & uVar11 & uVar8) == 0x3ffffff
      ) || uVar17 >> 0x16 != 0) {
    uVar2 = uVar2 + (uVar14 >> 0x1a);
    uVar16 = uVar16 + (uVar2 >> 0x1a);
    local_54 = local_54 + 0x3d1 & 0x3ffffff;
    uVar2 = uVar2 & 0x3ffffff;
    uVar3 = uVar3 + (uVar16 >> 0x1a);
    uVar10 = uVar14 & 0x3ffffff;
    uVar16 = uVar16 & 0x3ffffff;
    uVar5 = uVar5 + (uVar3 >> 0x1a);
    uVar3 = uVar3 & 0x3ffffff;
    uVar7 = uVar7 + (uVar5 >> 0x1a);
    uVar5 = uVar5 & 0x3ffffff;
    uVar12 = uVar12 + (uVar7 >> 0x1a);
    uVar7 = uVar7 & 0x3ffffff;
    uVar1 = uVar9 + (uVar12 >> 0x1a);
    uVar12 = uVar12 & 0x3ffffff;
    uVar9 = uVar1 & 0x3ffffff;
    uVar17 = uVar17 + (uVar1 >> 0x1a) & 0x3fffff;
  }
  local_50 = local_54 | (uVar10 & 0xf) << 0x1a;
  local_44 = (uVar3 & 0xffff) << 0xe | uVar16 >> 0xc;
  local_3c = (uVar7 & 0xffffff) << 6 | uVar5 >> 0x14;
  local_4c = (uVar2 & 0xff) << 0x16 | uVar10 >> 4;
  local_48 = (uVar16 & 0xfff) << 0x12 | uVar2 >> 8;
  local_40 = (uVar5 & 0xfffff) << 10 | uVar3 >> 0x10;
  local_30 = uVar17 >> 6;
  local_34 = (uVar17 & 0x3f) << 0x18 | uVar9 >> 2;
  local_38 = (uVar9 & 3) << 0x1c | uVar12 << 2 | uVar7 >> 0x18;
  FUN_018245a4(&local_50,&DAT_00563c04);
  param_1[8] = (local_34 & 0xffffff) << 2 | local_38 >> 0x1c;
  param_1[9] = local_30 << 6 | local_34 >> 0x18;
  param_1[1] = (local_4c & 0x3fffff) << 4 | local_50 >> 0x1a;
  *param_1 = local_50 & 0x3ffffff;
  param_1[2] = (local_48 & 0x3ffff) << 8 | local_4c >> 0x16;
  param_1[3] = (local_44 & 0x3fff) << 0xc | local_48 >> 0x12;
  param_1[7] = (local_38 & 0xfffffff) >> 2;
  param_1[6] = (local_38 & 3) << 0x18 | local_3c >> 6;
  param_1[4] = (local_40 & 0x3ff) << 0x10 | local_44 >> 0xe;
  param_1[5] = (local_3c & 0x3f) << 0x14 | local_40 >> 10;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

