// FUN_01b1751c @ 01b1751c size=1080 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b1751c(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  uVar11 = param_2[1] + param_3[1];
  local_2c = DAT_01d53560;
  iVar9 = *param_2 + *param_3;
  uVar10 = (uint)CARRY4(*param_2,*param_3);
  uVar12 = uVar11 + uVar10;
  uVar10 = (uint)CARRY4(param_2[1],param_3[1]) + (uint)CARRY4(uVar11,uVar10);
  uVar11 = param_2[2] + param_3[2];
  uVar13 = uVar11 + uVar10;
  uVar11 = (uint)CARRY4(param_2[2],param_3[2]) + (uint)CARRY4(uVar11,uVar10);
  uVar10 = param_2[3] + param_3[3];
  iVar14 = uVar10 + uVar11;
  uVar10 = (uint)CARRY4(param_2[3],param_3[3]) + (uint)CARRY4(uVar10,uVar11);
  uVar11 = param_2[4] + param_3[4];
  uVar15 = uVar11 + uVar10;
  uVar11 = (uint)CARRY4(param_2[4],param_3[4]) + (uint)CARRY4(uVar11,uVar10);
  uVar10 = param_2[5] + param_3[5];
  iVar16 = uVar10 + uVar11;
  uVar10 = (uint)CARRY4(param_2[5],param_3[5]) + (uint)CARRY4(uVar10,uVar11);
  uVar11 = param_2[6] + param_3[6];
  iVar17 = uVar11 + uVar10;
  uVar11 = (uint)CARRY4(param_2[6],param_3[6]) + (uint)CARRY4(uVar11,uVar10);
  uVar10 = param_2[7] + param_3[7];
  iVar18 = uVar10 + uVar11;
  uVar10 = (uint)CARRY4(param_2[7],param_3[7]) + (uint)CARRY4(uVar10,uVar11);
  uVar11 = param_2[8] + param_3[8];
  iVar19 = uVar11 + uVar10;
  uVar11 = (uint)CARRY4(param_2[8],param_3[8]) + (uint)CARRY4(uVar11,uVar10);
  uVar10 = param_2[9] + param_3[9];
  iVar20 = uVar10 + uVar11;
  uVar10 = (uint)CARRY4(param_2[9],param_3[9]) + (uint)CARRY4(uVar10,uVar11);
  uVar11 = param_2[10] + param_3[10];
  iVar21 = uVar11 + uVar10;
  uVar26 = (uint)CARRY4(param_2[10],param_3[10]) + (uint)CARRY4(uVar11,uVar10);
  uVar11 = param_2[0xb] + param_3[0xb];
  iVar8 = uVar11 + uVar26;
  uVar1 = (uint)(iVar9 != -1);
  uVar2 = (uint)(uVar12 < uVar1);
  uVar3 = (uint)(uVar13 < uVar2);
  iVar22 = -(uint)(iVar14 + 1U < uVar3) - (uint)(iVar14 != -1);
  uVar10 = -iVar22;
  iVar4 = -(((int)uVar10 >> 0x1f) + (uint)(uVar15 + 2 < uVar10)) - (uint)(uVar15 < 0xfffffffe);
  uVar10 = -iVar4;
  iVar23 = -(((int)uVar10 >> 0x1f) + (uint)(iVar16 + 1U < uVar10)) - (uint)(iVar16 != -1);
  uVar10 = -iVar23;
  iVar24 = -(((int)uVar10 >> 0x1f) + (uint)(iVar17 + 1U < uVar10)) - (uint)(iVar17 != -1);
  uVar10 = -iVar24;
  iVar5 = -(((int)uVar10 >> 0x1f) + (uint)(iVar18 + 1U < uVar10)) - (uint)(iVar18 != -1);
  uVar10 = -iVar5;
  iVar25 = -(((int)uVar10 >> 0x1f) + (uint)(iVar19 + 1U < uVar10)) - (uint)(iVar19 != -1);
  uVar10 = -iVar25;
  iVar6 = -(((int)uVar10 >> 0x1f) + (uint)(iVar20 + 1U < uVar10)) - (uint)(iVar20 != -1);
  uVar10 = -iVar6;
  iVar7 = -(((int)uVar10 >> 0x1f) + (uint)(iVar21 + 1U < uVar10)) - (uint)(iVar21 != -1);
  uVar10 = -iVar7;
  uVar10 = -(-(((int)uVar10 >> 0x1f) + (uint)(iVar8 + 1U < uVar10)) - (uint)(iVar8 != -1));
  uVar10 = (uint)((uint)CARRY4(param_2[0xb],param_3[0xb]) + (uint)CARRY4(uVar11,uVar26) < uVar10) +
           ((int)uVar10 >> 0x1f);
  FUN_01b0cfb8(&local_5c,uVar10 & 0xff,iVar9 + 1);
  FUN_01b0cfb8(&local_58,uVar10 & 0xff,uVar12 - uVar1,uVar12);
  FUN_01b0cfb8(&local_54,uVar10 & 0xff,uVar13 - uVar2,uVar13);
  FUN_01b0cfb8(&local_50,uVar10 & 0xff,(iVar14 + 1U) - uVar3,iVar14);
  FUN_01b0cfb8(&local_4c,uVar10 & 0xff,uVar15 + 2 + iVar22,uVar15);
  FUN_01b0cfb8(&local_48,uVar10 & 0xff,iVar16 + 1U + iVar4,iVar16);
  FUN_01b0cfb8(&local_44,uVar10 & 0xff,iVar17 + 1U + iVar23,iVar17);
  FUN_01b0cfb8(&local_40,uVar10 & 0xff,iVar18 + 1U + iVar24,iVar18);
  FUN_01b0cfb8(&local_3c,uVar10 & 0xff,iVar19 + 1U + iVar5,iVar19);
  FUN_01b0cfb8(&local_38,uVar10 & 0xff,iVar20 + 1U + iVar25,iVar20);
  FUN_01b0cfb8(&local_34,uVar10 & 0xff,iVar21 + 1U + iVar6,iVar21);
  FUN_01b0cfb8(&local_30,uVar10 & 0xff,iVar8 + 1U + iVar7,iVar8);
  *param_1 = local_5c;
  param_1[1] = local_58;
  param_1[2] = local_54;
  param_1[3] = local_50;
  param_1[4] = local_4c;
  param_1[5] = local_48;
  param_1[6] = local_44;
  param_1[7] = local_40;
  param_1[8] = local_3c;
  param_1[9] = local_38;
  param_1[10] = local_34;
  param_1[0xb] = local_30;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

