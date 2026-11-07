// FUN_01829054 @ 01829054 size=1080 calls_out=6 calls_in=2
// strings: 

void FUN_01829054(undefined4 param_1,int *param_2,undefined4 param_3)

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
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 auStack_6c [44];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_01820f20(auStack_6c,param_3,&DAT_00563a64,0);
  local_a8 = local_38;
  local_a4 = local_34;
  local_a0 = local_30;
  local_ac = local_3c;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  FUN_01823fd8(&local_ac,local_40 >> 0x1f);
  FUN_01820f20(auStack_6c,param_3,&DAT_00563a44);
  local_88 = local_38;
  local_84 = local_34;
  local_80 = local_30;
  local_8c = local_3c;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  FUN_01823fd8(&local_8c,local_40 >> 0x1f);
  FUN_01820f20(auStack_6c,&local_ac,&DAT_00563a24);
  FUN_01820328(&local_ac,auStack_6c);
  uVar14 = local_90;
  uVar13 = local_94;
  uVar11 = local_98;
  uVar10 = local_9c;
  uVar5 = local_a0;
  uVar3 = local_a4;
  uVar2 = local_a8;
  uVar1 = local_ac;
  FUN_01820f20(auStack_6c,&local_8c,&DAT_00563a04);
  FUN_01820328(&local_8c,auStack_6c);
  uVar4 = uVar1 + local_8c;
  uVar1 = (uint)CARRY4(uVar1,local_8c);
  uVar7 = uVar2 + local_88;
  uVar8 = uVar7 + uVar1;
  uVar1 = (uint)CARRY4(uVar2,local_88) + (uint)CARRY4(uVar7,uVar1);
  uVar2 = uVar3 + local_84;
  uVar9 = uVar2 + uVar1;
  uVar1 = (uint)CARRY4(uVar3,local_84) + (uint)CARRY4(uVar2,uVar1);
  uVar2 = uVar5 + local_80;
  uVar7 = uVar2 + uVar1;
  uVar1 = (uint)CARRY4(uVar5,local_80) + (uint)CARRY4(uVar2,uVar1);
  uVar2 = uVar10 + local_7c;
  uVar6 = uVar2 + uVar1;
  uVar2 = (uint)CARRY4(uVar10,local_7c) + (uint)CARRY4(uVar2,uVar1);
  uVar1 = uVar11 + local_78;
  uVar12 = uVar1 + uVar2;
  uVar2 = (uint)CARRY4(uVar11,local_78) + (uint)CARRY4(uVar1,uVar2);
  uVar1 = uVar13 + local_74;
  uVar3 = uVar1 + uVar2;
  uVar2 = (uint)CARRY4(uVar13,local_74) + (uint)CARRY4(uVar1,uVar2);
  uVar10 = uVar14 + local_70;
  uVar11 = uVar10 + uVar2;
  uVar5 = (uint)((uVar12 & uVar3 & uVar11) != 0xffffffff || uVar6 < 0xfffffffe);
  uVar1 = (uint)(uVar6 == 0xffffffff) & ~uVar5;
  if (uVar7 < 0xbaaedce6) {
    uVar13 = ~uVar1 & 1;
  }
  else {
    uVar13 = 0;
  }
  uVar13 = uVar13 | uVar5;
  if (uVar7 < 0xbaaedce7) {
    uVar5 = 0;
  }
  else {
    uVar5 = ~uVar13 & 1;
  }
  uVar5 = uVar5 | uVar1;
  if (uVar9 < 0xaf48a03b) {
    uVar1 = ~uVar5 & 1;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = uVar1 | uVar13;
  if (uVar9 < 0xaf48a03c) {
    uVar13 = 0;
  }
  else {
    uVar13 = ~uVar1 & 1;
  }
  uVar13 = uVar13 | uVar5;
  if (uVar8 < 0xbfd25e8c) {
    uVar5 = ~uVar13 & 1;
  }
  else {
    uVar5 = 0;
  }
  bVar16 = 0xd036413f < uVar4;
  bVar15 = uVar4 == 0xd0364140;
  if (uVar4 < 0xd0364141) {
    bVar16 = 0xbfd25e8b < uVar8;
    bVar15 = uVar8 == 0xbfd25e8c;
  }
  uVar10 = (uVar13 | (uint)(bVar16 && !bVar15) & ~(uVar5 | uVar1)) +
           (uint)CARRY4(uVar14,local_70) + (uint)CARRY4(uVar10,uVar2);
  *param_2 = uVar10 * 0x2fc9bebf + uVar4;
  uVar1 = (uint)CARRY4(uVar10 * 0x2fc9bebf,uVar4);
  uVar5 = uVar10 * 0x402da173 + uVar8;
  uVar13 = (uint)CARRY4(uVar10 * 0x402da173,uVar8) + (uint)CARRY4(uVar5,uVar1);
  uVar2 = uVar9 + uVar10 * 0x50b75fc4;
  param_2[1] = uVar5 + uVar1;
  uVar1 = (uint)CARRY4(uVar9,uVar10 * 0x50b75fc4) + (uint)CARRY4(uVar2,uVar13);
  uVar14 = uVar7 + uVar10 * 0x45512319;
  uVar5 = (uint)CARRY4(uVar7,uVar10 * 0x45512319) + (uint)CARRY4(uVar14,uVar1);
  param_2[3] = uVar14 + uVar1;
  uVar1 = (uint)CARRY4(uVar6,uVar10) + (uint)CARRY4(uVar6 + uVar10,uVar5);
  param_2[5] = uVar12 + uVar1;
  uVar1 = (uint)CARRY4(uVar12,uVar1);
  param_2[2] = uVar2 + uVar13;
  param_2[6] = uVar3 + uVar1;
  param_2[7] = uVar11 + CARRY4(uVar3,uVar1);
  param_2[4] = uVar6 + uVar10 + uVar5;
  FUN_01820f20(auStack_6c,param_2,&DAT_00563be4);
  FUN_01820328(param_1,auStack_6c);
  FUN_01820018(param_1,param_1);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  FUN_01825594(param_1,param_1,param_3);
  return;
}

