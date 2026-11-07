// FUN_00a882bc @ 00a882bc size=328 calls_out=2 calls_in=4
// strings: 

void FUN_00a882bc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[4];
  uVar4 = param_2[6];
  uVar10 = param_2[2];
  iVar15 = param_2[3];
  uVar14 = param_2[5];
  FUN_01a3d3d8(&local_50);
  FUN_01a3d418(&local_38);
  uVar11 = 0xffffffff;
  uVar5 = param_3[1];
  uVar8 = param_3[2];
  uVar12 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar5;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  uVar13 = iVar15 * 8 - 0x20;
  uVar6 = 0xffffffff;
  param_1[10] = uVar4;
  if (-1 < (int)uVar13) {
    uVar11 = -1 << (uVar13 & 0xff);
  }
  param_1[8] = uVar3;
  uVar9 = -1 << (iVar15 << 3 & 0xffU);
  if (-1 < (int)uVar13) {
    uVar9 = 0;
  }
  uVar13 = 0xffffffff;
  if ((uint)(iVar15 << 3) < 0x40) {
    uVar6 = ~uVar9;
    uVar13 = ~uVar11;
  }
  param_1[5] = uVar2;
  uVar11 = (int)uVar14 >> 0x1f;
  bVar16 = CARRY4(uVar13,uVar11) || CARRY4(uVar13 + uVar11,(uint)CARRY4(uVar6,uVar14));
  param_1[4] = uVar1;
  param_1[0xb] = 0;
  uVar9 = -(uint)bVar16;
  uVar7 = uVar6 + uVar14;
  uVar11 = uVar13 + uVar11 + (uint)CARRY4(uVar6,uVar14);
  if (uVar14 < 0x80000000 == bVar16) {
    uVar7 = uVar9;
    uVar11 = uVar9;
  }
  param_1[9] = uVar14;
  param_1[7] = iVar15;
  if (uVar11 != 0 || uVar11 < (uVar10 <= uVar7)) {
    uVar7 = uVar10;
  }
  param_1[6] = uVar7;
  param_1[0xd] = local_38;
  param_1[0xe] = uStack_34;
  param_1[0xf] = uStack_30;
  param_1[0x10] = uStack_2c;
  param_1[0x11] = uStack_28;
  param_1[0x12] = local_50;
  param_1[0x13] = uStack_4c;
  param_1[0x14] = uStack_48;
  param_1[0x15] = uStack_44;
  param_1[0x16] = uStack_40;
  return;
}

