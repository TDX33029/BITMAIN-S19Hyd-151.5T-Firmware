// FUN_016f5324 @ 016f5324 size=588 calls_out=0 calls_in=0
// strings: 

undefined8 FUN_016f5324(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar16 = param_2[1] + param_3[1];
  uVar11 = *param_2 + *param_3;
  uVar4 = (uint)CARRY4(*param_2,*param_3);
  uVar17 = uVar16 + uVar4;
  uVar4 = (uint)CARRY4(param_2[1],param_3[1]) + (uint)CARRY4(uVar16,uVar4);
  uVar16 = param_2[2] + param_3[2];
  uVar15 = uVar16 + uVar4;
  uVar16 = (uint)CARRY4(param_2[2],param_3[2]) + (uint)CARRY4(uVar16,uVar4);
  uVar4 = param_2[3] + param_3[3];
  uVar1 = uVar4 + uVar16;
  uVar16 = (uint)CARRY4(param_2[3],param_3[3]) + (uint)CARRY4(uVar4,uVar16);
  uVar4 = param_2[4] + param_3[4];
  uVar12 = uVar4 + uVar16;
  uVar16 = (uint)CARRY4(param_2[4],param_3[4]) + (uint)CARRY4(uVar4,uVar16);
  uVar4 = param_2[5] + param_3[5];
  uVar2 = uVar4 + uVar16;
  uVar16 = (uint)CARRY4(param_2[5],param_3[5]) + (uint)CARRY4(uVar4,uVar16);
  uVar4 = param_2[6] + param_3[6];
  uVar3 = uVar4 + uVar16;
  uVar14 = (uint)CARRY4(param_2[6],param_3[6]) + (uint)CARRY4(uVar4,uVar16);
  uVar8 = param_2[7] + param_3[7];
  uVar9 = uVar8 + uVar14;
  iVar10 = -(uint)(uVar17 + 1 < (uint)(uVar11 != 0xffffffff)) - (uint)(uVar17 != 0xffffffff);
  uVar4 = -iVar10;
  iVar5 = -(((int)uVar4 >> 0x1f) + (uint)(uVar15 + 1 < uVar4)) - (uint)(uVar15 != 0xffffffff);
  uVar4 = -iVar5;
  uVar6 = (uint)(uVar1 < uVar4) + ((int)uVar4 >> 0x1f);
  uVar13 = (uint)(uVar12 < uVar6) + ((int)uVar6 >> 0x1f);
  uVar4 = ((int)uVar13 >> 0x1f) + (uint)(uVar2 < uVar13);
  iVar7 = -(((int)uVar4 >> 0x1f) + (uint)(uVar3 - 1 < uVar4)) - (uint)(uVar3 == 0);
  uVar16 = -iVar7;
  uVar16 = -(-(((int)uVar16 >> 0x1f) + (uint)(uVar9 + 1 < uVar16)) - (uint)(uVar9 != 0xffffffff));
  uVar16 = -(((int)uVar16 >> 0x1f) +
            (uint)((uint)CARRY4(param_2[7],param_3[7]) + (uint)CARRY4(uVar8,uVar14) < uVar16));
  uVar8 = ~uVar16;
  *param_1 = uVar11 + 1 & uVar8 | uVar11 & uVar16;
  param_1[1] = uVar17 & uVar16 | uVar8 & (uVar17 + 1) - (uint)(uVar11 != 0xffffffff);
  param_1[2] = uVar15 & uVar16 | uVar8 & uVar15 + 1 + iVar10;
  param_1[5] = uVar2 & uVar16 | uVar2 - uVar13 & uVar8;
  param_1[6] = uVar3 & uVar16 | (uVar3 - 1) - uVar4 & uVar8;
  param_1[3] = uVar16 & uVar1 | uVar8 & uVar1 + iVar5;
  param_1[4] = uVar16 & uVar12 | uVar8 & uVar12 - uVar6;
  param_1[7] = uVar16 & uVar9 | uVar8 & uVar9 + 1 + iVar7;
  return 0;
}

