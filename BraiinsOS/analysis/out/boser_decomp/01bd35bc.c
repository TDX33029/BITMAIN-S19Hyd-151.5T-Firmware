// FUN_01bd35bc @ 01bd35bc size=748 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01bd35bc(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
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
  iVar8 = *param_2 + *param_3;
  uVar9 = (uint)CARRY4(*param_2,*param_3);
  iVar12 = uVar11 + uVar9;
  uVar11 = (uint)CARRY4(param_2[1],param_3[1]) + (uint)CARRY4(uVar11,uVar9);
  uVar9 = param_2[2] + param_3[2];
  iVar10 = uVar9 + uVar11;
  uVar11 = (uint)CARRY4(param_2[2],param_3[2]) + (uint)CARRY4(uVar9,uVar11);
  uVar9 = param_2[3] + param_3[3];
  uVar14 = uVar9 + uVar11;
  uVar9 = (uint)CARRY4(param_2[3],param_3[3]) + (uint)CARRY4(uVar9,uVar11);
  uVar11 = param_2[4] + param_3[4];
  uVar15 = uVar11 + uVar9;
  uVar11 = (uint)CARRY4(param_2[4],param_3[4]) + (uint)CARRY4(uVar11,uVar9);
  uVar9 = param_2[5] + param_3[5];
  uVar16 = uVar9 + uVar11;
  uVar9 = (uint)CARRY4(param_2[5],param_3[5]) + (uint)CARRY4(uVar9,uVar11);
  uVar11 = param_2[6] + param_3[6];
  iVar18 = uVar11 + uVar9;
  uVar17 = (uint)CARRY4(param_2[6],param_3[6]) + (uint)CARRY4(uVar11,uVar9);
  uVar1 = param_2[7] + param_3[7];
  iVar3 = uVar1 + uVar17;
  uVar4 = (uint)(iVar8 != -1);
  iVar2 = -(uint)(iVar12 + 1U < uVar4) - (uint)(iVar12 != -1);
  uVar9 = -iVar2;
  iVar5 = -(((int)uVar9 >> 0x1f) + (uint)(iVar10 + 1U < uVar9)) - (uint)(iVar10 != -1);
  uVar9 = -iVar5;
  uVar6 = (uint)(uVar14 < uVar9) + ((int)uVar9 >> 0x1f);
  uVar13 = (uint)(uVar15 < uVar6) + ((int)uVar6 >> 0x1f);
  uVar9 = ((int)uVar13 >> 0x1f) + (uint)(uVar16 < uVar13);
  iVar7 = -(((int)uVar9 >> 0x1f) + (uint)(iVar18 - 1U < uVar9)) - (uint)(iVar18 == 0);
  uVar11 = -iVar7;
  uVar11 = -(-(((int)uVar11 >> 0x1f) + (uint)(iVar3 + 1U < uVar11)) - (uint)(iVar3 != -1));
  uVar11 = (uint)((uint)CARRY4(param_2[7],param_3[7]) + (uint)CARRY4(uVar1,uVar17) < uVar11) +
           ((int)uVar11 >> 0x1f);
  FUN_01bd0bf4(&local_4c,uVar11 & 0xff,iVar8 + 1);
  FUN_01bd0bf4(&local_48,uVar11 & 0xff,(iVar12 + 1U) - uVar4,iVar12);
  FUN_01bd0bf4(&local_44,uVar11 & 0xff,iVar10 + 1U + iVar2,iVar10);
  FUN_01bd0bf4(&local_40,uVar11 & 0xff,uVar14 + iVar5,uVar14);
  FUN_01bd0bf4(&local_3c,uVar11 & 0xff,uVar15 - uVar6,uVar15);
  FUN_01bd0bf4(&local_38,uVar11 & 0xff,uVar16 - uVar13,uVar16);
  FUN_01bd0bf4(&local_34,uVar11 & 0xff,(iVar18 - 1U) - uVar9,iVar18);
  FUN_01bd0bf4(&local_30,uVar11 & 0xff,iVar3 + 1U + iVar7,iVar3);
  *param_1 = local_4c;
  param_1[1] = local_48;
  param_1[2] = local_44;
  param_1[3] = local_40;
  param_1[4] = local_3c;
  param_1[5] = local_38;
  param_1[6] = local_34;
  param_1[7] = local_30;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

