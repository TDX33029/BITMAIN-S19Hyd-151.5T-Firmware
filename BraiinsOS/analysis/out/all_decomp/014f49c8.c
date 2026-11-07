// FUN_014f49c8 @ 014f49c8 size=1000 calls_out=9 calls_in=1
// strings: assertion failed: num_pending <= pending.len()

/* WARNING: Removing unreachable block (ram,0x014f4a20) */

void FUN_014f49c8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_270 [128];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined4 *local_1a8;
  uint local_1a0 [2];
  undefined1 auStack_198 [200];
  int local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd92c != 0) {
                    /* WARNING: Could not recover jumptable at 0x014f4aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_014f4aac + *(int *)(&DAT_014f4aac + DAT_018dd92c * 4)))();
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar9 = (bool)hasExclusiveAccess(0x18dd92c);
  } while (!bVar9);
  DAT_018dd92c = 1;
  DataMemoryBarrier(0xb);
  uVar2 = FUN_016d636c(0x10);
  if ((uVar2 & 0x1000) != 0) {
    uVar2 = FUN_016d636c(0x1a);
    uVar5 = 5;
    if ((uVar2 & 1) == 0) {
      uVar5 = 1;
    }
    DAT_018dd928 = (uVar2 & 8) << 1 | (uVar2 & 2) << 4 | uVar5;
  }
  DAT_018dd930 = 1;
  DataMemoryBarrier(0xb);
  DAT_018dd92c = 2;
  DataMemoryBarrier(0xb);
  FUN_016dd606(auStack_270,0,0x80);
  local_1f0 = 0x6a09e667;
  uStack_1ec = 0xbb67ae85;
  uStack_1e8 = 0x3c6ef372;
  uStack_1e4 = 0xa54ff53a;
  uStack_1e0 = 0x510e527f;
  local_1dc = 0x9b05688c;
  uStack_1d8 = 0x1f83d9ab;
  uStack_1d4 = 0x5be0cd19;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uVar2 = param_3 >> 6;
  local_1ac = 0;
  local_1b0 = 0;
  local_1a0[0] = 0;
  local_1a8 = &DAT_018a7008;
  if (uVar2 == 0) {
    FUN_016dd1aa(auStack_270,param_2,param_3);
    local_1a0[0] = local_1a0[0] + param_3;
  }
  else {
    FUN_01840720(&local_1f0,param_2,uVar2);
    uVar5 = local_1b0 + uVar2;
    uVar3 = local_1ac + CARRY4(local_1b0,uVar2);
    if (CARRY4(local_1ac,(uint)CARRY4(local_1b0,uVar2))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a6fe4);
    }
    uVar2 = param_3 & 0x3f;
    local_1b0 = uVar5;
    local_1ac = uVar3;
    if (uVar2 != 0) {
      FUN_016dd1aa(auStack_270,param_2 + (param_3 & 0x40),uVar2);
      local_1a0[0] = uVar2;
    }
  }
  FUN_016dd1aa(auStack_198,auStack_270,0xd8);
  uVar2 = *(uint *)(local_d0 + 0x50);
  FUN_016dd1aa(&local_c0,&local_1f0,0x50);
  iVar1 = local_78;
  if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x80,&DAT_018a6ff4);
  }
  local_70 = *(uint *)(local_78 + 0x50);
  local_6c = uVar2;
  if (uVar2 != local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_6c,&local_70,0);
  }
  if (uVar2 < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: num_pending <= pending.len()",0x2e,&DAT_018a6f84);
  }
  if (uVar2 <= local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(local_c8,uVar2,&DAT_018a6f94);
  }
  iVar4 = *(int *)(local_78 + 0x54);
  auStack_198[local_c8] = 0x80;
  uVar5 = local_c8 + 1;
  if (uVar2 - iVar4 <= local_c8) {
    if (uVar5 != uVar2) {
      FUN_016dd606(auStack_198 + uVar5,0,uVar2 + ~local_c8);
    }
    (**(code **)(iVar1 + 0x40))(&local_c0,auStack_198,1);
    uVar5 = 0;
  }
  uVar3 = uVar2 - 8;
  bVar9 = uVar3 == 0;
  if (uVar2 >= 8) {
    bVar9 = uVar3 == uVar5;
  }
  if (uVar2 < 8 || uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar3,uVar2,&DAT_018a6fd4);
  }
  if (!bVar9) {
    FUN_016dd606(auStack_198 + uVar5,0,uVar3 - uVar5);
  }
  uVar6 = (uint)((ulonglong)uVar2 * (ulonglong)local_7c);
  uVar5 = (uint)((ulonglong)uVar2 * (ulonglong)local_80);
  uVar8 = (uint)((ulonglong)uVar2 * (ulonglong)local_80 >> 0x20);
  uVar7 = uVar8 + uVar6;
  if ((int)((ulonglong)uVar2 * (ulonglong)local_7c >> 0x20) != 0 || CARRY4(uVar8,uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6fc4);
  }
  uVar6 = uVar5 + local_c8;
  uVar8 = uVar7 + CARRY4(uVar5,local_c8);
  if (CARRY4(uVar7,(uint)CARRY4(uVar5,local_c8))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6fb4);
  }
  if (0x1fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6fa4);
  }
  *(uint *)(auStack_198 + uVar3) =
       (uVar8 * 8 & 0xff | uVar6 >> 0x1d) << 0x18 | ((uVar8 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar8 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar8 & 0x1fffffff) >> 0x15;
  *(uint *)((int)local_1a0 + uVar2 + 4) =
       uVar6 * 0x8000000 | ((uVar6 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar6 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar6 & 0x1fffffff) >> 0x15;
  (**(code **)(local_78 + 0x40))(&local_c0,auStack_198,1);
  local_68 = local_c0;
  uStack_64 = uStack_bc;
  uStack_60 = uStack_b8;
  uStack_5c = uStack_b4;
  uStack_58 = uStack_b0;
  local_54 = local_ac;
  uStack_50 = uStack_a8;
  uStack_4c = uStack_a4;
  uStack_48 = uStack_a0;
  uStack_44 = uStack_9c;
  local_40 = local_98;
  uStack_3c = uStack_94;
  uStack_38 = uStack_90;
  uStack_34 = uStack_8c;
  uStack_30 = uStack_88;
  uStack_2c = uStack_84;
  (**(code **)(local_78 + 0x44))(param_1);
  *(int *)(param_1 + 0x40) = local_78;
  return;
}

