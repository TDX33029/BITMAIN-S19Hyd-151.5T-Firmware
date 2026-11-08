// FUN_00fca484 @ 00fca484 size=488 calls_out=0 calls_in=1
// strings: 

void FUN_00fca484(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  
  iVar5 = param_3[3];
  uVar15 = (param_2[5] - param_3[5]) + 0x1ffffff0;
  uVar11 = (param_2[4] - param_3[4]) + 0x3ffffff0;
  uVar9 = uVar11 >> 0x1a;
  uVar16 = uVar15 + uVar9;
  iVar6 = param_3[9];
  uVar9 = uVar16 >> 0x19 | (uint)CARRY4(uVar15,uVar9) << 7;
  iVar3 = param_3[2];
  uVar17 = (param_2[6] - param_3[6]) + 0x3ffffff0;
  iVar7 = param_2[3];
  uVar15 = uVar9 + uVar17;
  iVar4 = param_3[8];
  iVar12 = *param_3;
  iVar22 = param_3[1];
  iVar8 = param_2[9];
  iVar2 = param_3[7];
  iVar23 = *param_2;
  iVar25 = param_2[1];
  iVar21 = param_2[2];
  iVar20 = param_2[8];
  iVar1 = param_2[7];
  param_1[6] = uVar15 & 0x3ffffff;
  uVar15 = uVar15 >> 0x1a | (uint)CARRY4(uVar9,uVar17) << 6;
  uVar9 = (iVar1 - iVar2) + 0x1ffffff0;
  uVar17 = uVar15 + uVar9;
  uVar18 = uVar17 >> 0x19 | (uint)CARRY4(uVar15,uVar9) << 7;
  uVar10 = (iVar23 - iVar12) + 0x3ffffed0;
  uVar15 = (iVar25 - iVar22) + 0x1ffffff0;
  uVar9 = uVar10 >> 0x1a;
  uVar24 = uVar15 + uVar9;
  uVar13 = (iVar21 - iVar3) + 0x3ffffff0;
  param_1[7] = uVar17 & 0x1ffffff;
  uVar9 = uVar24 >> 0x19 | (uint)CARRY4(uVar15,uVar9) << 7;
  uVar17 = (iVar20 - iVar4) + 0x3ffffff0;
  uVar19 = uVar18 + uVar17;
  uVar15 = uVar9 + uVar13;
  param_1[2] = uVar15 & 0x3ffffff;
  uVar17 = uVar19 >> 0x1a | (uint)CARRY4(uVar18,uVar17) << 6;
  uVar9 = uVar15 >> 0x1a | (uint)CARRY4(uVar9,uVar13) << 6;
  uVar14 = (iVar7 - iVar5) + 0x1ffffff0;
  param_1[8] = uVar19 & 0x3ffffff;
  uVar18 = (iVar8 - iVar6) + 0x1ffffff0;
  uVar13 = uVar17 + uVar18;
  uVar15 = uVar9 + uVar14;
  param_1[3] = uVar15 & 0x1ffffff;
  uVar9 = (uVar15 >> 0x19 | (uint)CARRY4(uVar9,uVar14) << 7) + (uVar11 & 0x3ffffff);
  uVar15 = (short)((ushort)(uVar13 >> 0x19) | (ushort)CARRY4(uVar17,uVar18) << 7) * 0x13 +
           (uVar10 & 0x3ffffff);
  param_1[4] = uVar9 & 0x3ffffff;
  param_1[5] = (uVar16 & 0x1ffffff) + (uVar9 >> 0x1a);
  param_1[9] = uVar13 & 0x1ffffff;
  *param_1 = uVar15 & 0x3ffffff;
  param_1[1] = (uVar24 & 0x1ffffff) + (uVar15 >> 0x1a);
  return;
}

