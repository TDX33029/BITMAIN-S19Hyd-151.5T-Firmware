// FUN_01820018 @ 01820018 size=368 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_01820018(int *param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  
  uVar18 = *param_2;
  uVar16 = param_2[1];
  uVar14 = param_2[2];
  uVar13 = param_2[3];
  uVar12 = param_2[4];
  uVar20 = param_2[5];
  uVar10 = param_2[6];
  uVar21 = param_2[7];
  iVar19 = -0x2fc9bebf - uVar18;
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  *param_1 = iVar19;
  uVar17 = ~uVar16 + 0xbfd25e8c;
  iVar19 = uVar17 + (0x2fc9bebd < ~uVar18);
  uVar17 = (uint)(0x402da173 < ~uVar16) + (uint)CARRY4(uVar17,(uint)(0x2fc9bebd < ~uVar18));
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  uVar15 = ~uVar14 + 0xaf48a03b;
  param_1[1] = iVar19;
  iVar19 = uVar15 + uVar17;
  uVar17 = (uint)(0x50b75fc4 < ~uVar14) + (uint)CARRY4(uVar15,uVar17);
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  param_1[2] = iVar19;
  uVar15 = ~uVar13 + 0xbaaedce6;
  iVar19 = uVar15 + uVar17;
  uVar17 = (uint)(0x45512319 < ~uVar13) + (uint)CARRY4(uVar15,uVar17);
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  uVar15 = ~uVar12 - 2;
  param_1[3] = iVar19;
  iVar19 = uVar15 + uVar17;
  uVar17 = (uint)(1 < ~uVar12) + (uint)CARRY4(uVar15,uVar17);
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  uVar15 = ~uVar20 - 1;
  param_1[4] = iVar19;
  iVar19 = uVar15 + uVar17;
  uVar17 = (uint)(~uVar20 != 0) + (uint)CARRY4(uVar15,uVar17);
  if (((((((uVar16 == 0 && uVar18 == 0) && uVar14 == 0) && uVar13 == 0) && uVar12 == 0) &&
       uVar20 == 0) && uVar10 == 0) && uVar21 == 0) {
    iVar19 = 0;
  }
  uVar15 = ~uVar10 - 1;
  iVar9 = uVar15 + uVar17;
  bVar7 = uVar16 != 0;
  bVar8 = uVar18 != 0;
  bVar6 = uVar14 != 0;
  bVar5 = uVar13 != 0;
  bVar4 = uVar12 != 0;
  bVar3 = uVar20 != 0;
  bVar2 = uVar10 != 0;
  bVar1 = uVar21 != 0;
  iVar11 = ((uint)(~uVar10 != 0) + (uint)CARRY4(uVar15,uVar17)) - uVar21;
  if (((((((!bVar7 && !bVar8) && !bVar6) && !bVar5) && !bVar4) && !bVar3) && !bVar2) && !bVar1) {
    iVar9 = 0;
  }
  if (((((((bVar7 || bVar8) || bVar6) || bVar5) || bVar4) || bVar3) || bVar2) || bVar1) {
    iVar11 = iVar11 + -2;
  }
  if (((((((!bVar7 && !bVar8) && !bVar6) && !bVar5) && !bVar4) && !bVar3) && !bVar2) && !bVar1) {
    iVar11 = 0;
  }
  param_1[5] = iVar19;
  param_1[6] = iVar9;
  param_1[7] = iVar11;
  return 0;
}

