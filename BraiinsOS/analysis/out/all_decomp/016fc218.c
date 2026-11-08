// FUN_016fc218 @ 016fc218 size=908 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_016fc218(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
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
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  
  uVar19 = param_2[1] + param_3[1];
  uVar14 = *param_2 + *param_3;
  uVar11 = (uint)CARRY4(*param_2,*param_3);
  uVar16 = uVar19 + uVar11;
  uVar11 = (uint)CARRY4(param_2[1],param_3[1]) + (uint)CARRY4(uVar19,uVar11);
  uVar19 = param_2[2] + param_3[2];
  uVar24 = uVar19 + uVar11;
  uVar11 = (uint)CARRY4(param_2[2],param_3[2]) + (uint)CARRY4(uVar19,uVar11);
  uVar19 = param_2[3] + param_3[3];
  uVar20 = uVar19 + uVar11;
  uVar11 = (uint)CARRY4(param_2[3],param_3[3]) + (uint)CARRY4(uVar19,uVar11);
  uVar19 = param_2[4] + param_3[4];
  uVar13 = uVar19 + uVar11;
  uVar11 = (uint)CARRY4(param_2[4],param_3[4]) + (uint)CARRY4(uVar19,uVar11);
  uVar19 = param_2[5] + param_3[5];
  uVar12 = uVar19 + uVar11;
  uVar19 = (uint)CARRY4(param_2[5],param_3[5]) + (uint)CARRY4(uVar19,uVar11);
  uVar11 = param_2[6] + param_3[6];
  uVar15 = uVar11 + uVar19;
  uVar11 = (uint)CARRY4(param_2[6],param_3[6]) + (uint)CARRY4(uVar11,uVar19);
  uVar19 = param_2[7] + param_3[7];
  uVar8 = uVar19 + uVar11;
  uVar19 = (uint)CARRY4(param_2[7],param_3[7]) + (uint)CARRY4(uVar19,uVar11);
  uVar11 = param_2[8] + param_3[8];
  uVar18 = uVar11 + uVar19;
  uVar11 = (uint)CARRY4(param_2[8],param_3[8]) + (uint)CARRY4(uVar11,uVar19);
  uVar19 = param_2[9] + param_3[9];
  uVar9 = uVar19 + uVar11;
  uVar19 = (uint)CARRY4(param_2[9],param_3[9]) + (uint)CARRY4(uVar19,uVar11);
  uVar11 = param_2[10] + param_3[10];
  uVar25 = uVar11 + uVar19;
  uVar10 = (uint)CARRY4(param_2[10],param_3[10]) + (uint)CARRY4(uVar11,uVar19);
  uVar6 = param_2[0xb] + param_3[0xb];
  uVar7 = uVar6 + uVar10;
  uVar19 = (uint)(uVar16 < (uVar14 != 0xffffffff));
  uVar1 = (uint)(uVar24 < uVar19);
  iVar21 = -(uint)(uVar20 + 1 < uVar1) - (uint)(uVar20 != 0xffffffff);
  uVar11 = -iVar21;
  iVar2 = -(((int)uVar11 >> 0x1f) + (uint)(uVar13 + 2 < uVar11)) - (uint)(uVar13 < 0xfffffffe);
  uVar11 = -iVar2;
  iVar22 = -(((int)uVar11 >> 0x1f) + (uint)(uVar12 + 1 < uVar11)) - (uint)(uVar12 != 0xffffffff);
  uVar11 = -iVar22;
  iVar3 = -(((int)uVar11 >> 0x1f) + (uint)(uVar15 + 1 < uVar11)) - (uint)(uVar15 != 0xffffffff);
  uVar11 = -iVar3;
  iVar23 = -(((int)uVar11 >> 0x1f) + (uint)(uVar8 + 1 < uVar11)) - (uint)(uVar8 != 0xffffffff);
  uVar11 = -iVar23;
  iVar4 = -(((int)uVar11 >> 0x1f) + (uint)(uVar18 + 1 < uVar11)) - (uint)(uVar18 != 0xffffffff);
  uVar11 = -iVar4;
  iVar17 = -(((int)uVar11 >> 0x1f) + (uint)(uVar9 + 1 < uVar11)) - (uint)(uVar9 != 0xffffffff);
  uVar11 = -iVar17;
  iVar5 = -(((int)uVar11 >> 0x1f) + (uint)(uVar25 + 1 < uVar11)) - (uint)(uVar25 != 0xffffffff);
  uVar11 = -iVar5;
  uVar11 = -(-(((int)uVar11 >> 0x1f) + (uint)(uVar7 + 1 < uVar11)) - (uint)(uVar7 != 0xffffffff));
  uVar11 = -(((int)uVar11 >> 0x1f) +
            (uint)((uint)CARRY4(param_2[0xb],param_3[0xb]) + (uint)CARRY4(uVar6,uVar10) < uVar11));
  uVar6 = ~uVar11;
  *param_1 = uVar14 + 1 & uVar6 | uVar14 & uVar11;
  param_1[1] = uVar11 & uVar16 | uVar6 & uVar16 - (uVar14 != 0xffffffff);
  param_1[2] = uVar11 & uVar24 | uVar6 & uVar24 - uVar19;
  param_1[3] = uVar11 & uVar20 | uVar6 & (uVar20 + 1) - uVar1;
  param_1[4] = uVar11 & uVar13 | uVar6 & uVar13 + 2 + iVar21;
  param_1[5] = uVar11 & uVar12 | uVar6 & uVar12 + 1 + iVar2;
  param_1[6] = uVar11 & uVar15 | uVar15 + 1 + iVar22 & uVar6;
  param_1[7] = uVar11 & uVar8 | uVar8 + 1 + iVar3 & uVar6;
  param_1[8] = uVar11 & uVar18 | uVar18 + 1 + iVar23 & uVar6;
  param_1[9] = uVar11 & uVar9 | uVar9 + 1 + iVar4 & uVar6;
  param_1[10] = uVar11 & uVar25 | uVar25 + 1 + iVar17 & uVar6;
  param_1[0xb] = uVar11 & uVar7 | uVar6 & uVar7 + 1 + iVar5;
  return 0;
}

