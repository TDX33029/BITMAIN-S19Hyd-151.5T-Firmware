// FUN_005bbc78 @ 005bbc78 size=420 calls_out=2 calls_in=0
// strings: 

void FUN_005bbc78(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  uint local_28;
  
  iVar17 = param_2[3];
  uVar19 = 0xffffffff;
  uVar6 = iVar17 * 8;
  if (uVar6 < 0x40) {
    uVar13 = -1 << (uVar6 & 0xff);
    uVar15 = uVar6 - 0x20;
    if (-1 < (int)uVar15) {
      uVar13 = 0;
    }
    uVar13 = ~uVar13;
    uVar19 = 0xffffffffU >> (iVar17 * -8 + 0x20U & 0xff) | -1 << (uVar6 & 0xff);
    if (-1 < (int)uVar15) {
      uVar19 = -1 << (uVar15 & 0xff);
    }
    uVar19 = ~uVar19;
  }
  else {
    uVar13 = 0xffffffff;
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[4];
  uVar8 = param_2[6];
  uVar15 = param_2[5];
  iVar9 = thunk_FUN_016d4a50(0x2000);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_28 = local_28 & 0xff000000;
  iVar10 = thunk_FUN_016d4a50(0x2000);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  param_1[0xd] = iVar10;
  uVar12 = *param_3;
  uVar14 = param_3[1];
  uVar16 = param_3[2];
  uVar18 = param_3[3];
  param_1[0x10] = 0x11;
  param_1[8] = uVar7;
  param_1[10] = uVar8;
  *param_1 = uVar12;
  param_1[1] = uVar14;
  param_1[2] = uVar16;
  param_1[3] = uVar18;
  param_1[7] = iVar17;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[0xf] = 0x2000;
  param_1[0x11] = 0x2000;
  uVar1 = (int)uVar15 >> 0x1f;
  uVar2 = (uint)(CARRY4(uVar19,uVar1) || CARRY4(uVar19 + uVar1,(uint)CARRY4(uVar13,uVar15)));
  uVar3 = -uVar2;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[9] = uVar15;
  uVar11 = uVar13 + uVar15;
  uVar19 = uVar19 + uVar1 + (uint)CARRY4(uVar13,uVar15);
  if (uVar15 < 0x80000000 == uVar2) {
    uVar11 = uVar3;
    uVar19 = uVar3;
  }
  if (uVar19 != 0 || uVar19 < (uVar6 <= uVar11)) {
    uVar11 = uVar6;
  }
  param_1[6] = uVar11;
  param_1[0x12] = iVar9;
  param_1[0x13] = 0;
  param_1[0x14] = 0x2000;
  param_1[0x15] = 0x11;
  param_1[0x16] = local_28;
  return;
}

