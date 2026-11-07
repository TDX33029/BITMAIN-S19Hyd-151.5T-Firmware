// FUN_0182f990 @ 0182f990 size=1164 calls_out=1 calls_in=5
// strings: 

undefined8 FUN_0182f990(uint *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  uint local_70 [7];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  int local_2c;
  
  iVar2 = DAT_018ddaf8;
  local_2c = DAT_018ddaf8;
  uVar8 = (uint)param_2[9] >> 0x16;
  uVar20 = uVar8 * 0x3d1 + *param_2;
  uVar9 = (uint)param_2[0x13] >> 0x16;
  uVar3 = uVar9 * 0x3d1 + param_2[10];
  uVar7 = uVar20 & 0x3ffffff;
  uVar20 = param_2[1] + uVar8 * 0x40 + (uVar20 >> 0x1a);
  uVar21 = uVar3 & 0x3ffffff;
  uVar19 = param_2[2] + (uVar20 >> 0x1a);
  uVar20 = uVar20 & 0x3ffffff;
  uVar8 = param_2[0xb] + uVar9 * 0x40 + (uVar3 >> 0x1a);
  uVar12 = uVar8 & 0x3ffffff;
  uVar22 = param_2[0xc] + (uVar8 >> 0x1a);
  uVar8 = param_2[3] + (uVar19 >> 0x1a);
  uVar9 = param_2[0xd] + (uVar22 >> 0x1a);
  uVar14 = uVar8 & 0x3ffffff;
  uVar16 = uVar9 & 0x3ffffff;
  uVar18 = param_2[4] + (uVar8 >> 0x1a);
  uVar17 = param_2[5] + (uVar18 >> 0x1a);
  uVar4 = param_2[0xe] + (uVar9 >> 0x1a);
  uVar15 = param_2[6] + (uVar17 >> 0x1a);
  uVar24 = param_2[0xf] + (uVar4 >> 0x1a);
  uVar13 = param_2[7] + (uVar15 >> 0x1a);
  uVar23 = param_2[0x10] + (uVar24 >> 0x1a);
  uVar9 = param_2[8] + (uVar13 >> 0x1a);
  uVar8 = param_2[0x11] + (uVar23 >> 0x1a);
  uVar11 = param_2[0x12] + (uVar8 >> 0x1a);
  uVar5 = (param_2[9] & 0x3fffffU) + (uVar9 >> 0x1a);
  uVar10 = (param_2[0x13] & 0x3fffffU) + (uVar11 >> 0x1a);
  iVar6 = uVar20 + (uVar7 + 0x3d1 >> 0x1a);
  uVar3 = (uint)((0x3fffffe < iVar6 + 0x40U && iVar6 != 0x3ffffbf) &&
                (uVar5 == 0x3fffff &&
                (uVar19 & uVar14 & uVar18 & uVar17 & uVar15 & uVar13 & uVar9) == 0x3ffffff)) |
          uVar5 >> 0x16;
  uVar7 = (-uVar3 & 0x3d1) + uVar7;
  uVar20 = uVar20 + uVar3 * 0x40 + (uVar7 >> 0x1a);
  uVar3 = (uVar19 & 0x3ffffff) + (uVar20 >> 0x1a);
  local_70[0] = uVar7 & 0x3ffffff | uVar20 * 0x4000000;
  uVar14 = uVar14 + (uVar3 >> 0x1a);
  local_70[1] = (uVar20 & 0x3ffffff) >> 6 | uVar3 * 0x100000;
  uVar7 = (uVar18 & 0x3ffffff) + (uVar14 >> 0x1a);
  local_70[2] = (uVar3 & 0x3ffffff) >> 0xc | uVar14 * 0x4000;
  uVar3 = (uVar17 & 0x3ffffff) + (uVar7 >> 0x1a);
  local_70[3] = (uVar14 & 0x3ffffff) >> 0x12 | uVar7 * 0x100;
  uVar20 = (uVar15 & 0x3ffffff) + (uVar3 >> 0x1a);
  uVar14 = (uVar13 & 0x3ffffff) + (uVar20 >> 0x1a);
  local_70[4] = uVar3 * 4 & 0xffffffc | (uVar7 & 0x3ffffff) >> 0x18 | uVar20 * 0x10000000;
  uVar9 = (uVar9 & 0x3ffffff) + (uVar14 >> 0x1a);
  local_70[5] = (uVar20 & 0x3ffffff) >> 4 | uVar14 * 0x400000;
  local_54 = (uVar9 & 0x3ffffff) >> 0x10 | (uVar5 + (uVar9 >> 0x1a)) * 0x400;
  local_70[6] = (uVar14 & 0x3ffffff) >> 10 | uVar9 * 0x10000;
  iVar6 = uVar12 + (uVar21 + 0x3d1 >> 0x1a);
  uVar9 = (uint)((0x3fffffe < iVar6 + 0x40U && iVar6 != 0x3ffffbf) &&
                (uVar10 == 0x3fffff &&
                (uVar22 & uVar16 & uVar4 & uVar24 & uVar23 & uVar8 & uVar11) == 0x3ffffff)) |
          uVar10 >> 0x16;
  uVar21 = (-uVar9 & 0x3d1) + uVar21;
  uVar3 = uVar12 + uVar9 * 0x40 + (uVar21 >> 0x1a);
  uVar9 = (uVar22 & 0x3ffffff) + (uVar3 >> 0x1a);
  local_50 = uVar21 & 0x3ffffff | uVar3 * 0x4000000;
  uVar16 = uVar16 + (uVar9 >> 0x1a);
  local_4c = (uVar3 & 0x3ffffff) >> 6 | uVar9 * 0x100000;
  uVar3 = (uVar4 & 0x3ffffff) + (uVar16 >> 0x1a);
  local_48 = (uVar9 & 0x3ffffff) >> 0xc | uVar16 * 0x4000;
  local_44 = (uVar16 & 0x3ffffff) >> 0x12 | uVar3 * 0x100;
  uVar9 = (uVar24 & 0x3ffffff) + (uVar3 >> 0x1a);
  uVar20 = (uVar23 & 0x3ffffff) + (uVar9 >> 0x1a);
  uVar4 = (uVar8 & 0x3ffffff) + (uVar20 >> 0x1a);
  uVar8 = (uVar11 & 0x3ffffff) + (uVar4 >> 0x1a);
  local_40 = uVar9 * 4 & 0xffffffc | (uVar3 & 0x3ffffff) >> 0x18 | uVar20 * 0x10000000;
  puVar25 = local_70;
  local_3c = (uVar20 & 0x3ffffff) >> 4 | uVar4 * 0x400000;
  local_38 = (uVar4 & 0x3ffffff) >> 10 | uVar8 * 0x10000;
  local_34 = (uVar8 & 0x3ffffff) >> 0x10 | (uVar10 + (uVar8 >> 0x1a)) * 0x400;
  if (((param_1 < puVar25) && (puVar25 < param_1 + 0x10)) ||
     (puVar25 < param_1 && param_1 < &uStack_30)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x182fe18);
    (*pcVar1)();
  }
  do {
    uVar8 = puVar25[1];
    uVar9 = puVar25[2];
    uVar3 = puVar25[3];
    puVar26 = puVar25 + 4;
    *param_1 = *puVar25;
    param_1[1] = uVar8;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1 = param_1 + 4;
    puVar25 = puVar25 + 4;
  } while (puVar26 != &uStack_30);
  if (iVar2 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

