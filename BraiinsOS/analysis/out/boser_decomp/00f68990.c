// FUN_00f68990 @ 00f68990 size=816 calls_out=10 calls_in=3
// strings: Bosminer.get_root_hub

void FUN_00f68990(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_1184;
  undefined1 auStack_1158 [704];
  uint local_e98;
  uint uStack_e94;
  uint uStack_e90;
  uint uStack_e8c;
  uint local_e88;
  uint uStack_e84;
  uint uStack_e80;
  uint uStack_e7c;
  uint uStack_e78;
  uint uStack_e74;
  undefined1 auStack_bb0 [704];
  uint local_8f0;
  uint uStack_8ec;
  uint uStack_8e8;
  uint uStack_8e4;
  uint uStack_8e0;
  uint uStack_8dc;
  uint local_8d8;
  uint uStack_8d4;
  uint uStack_8d0;
  uint uStack_8cc;
  uint uStack_8c8;
  uint uStack_8c4;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  uint local_8a8;
  uint local_8a4;
  uint local_8a0;
  uint local_89c;
  uint uStack_898;
  uint uStack_894;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined1 auStack_5c8 [712];
  uint local_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [708];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5a4)) {
  case 0:
    *(undefined1 *)(param_2 + 0x59d) = 0;
    uVar1 = *(undefined1 *)(param_2 + 0x5a5);
    local_1184 = *(undefined4 *)(param_2 + 0x5a0);
    *(undefined1 *)(param_2 + 0x59e) = uVar1;
    *(undefined4 *)(param_2 + 0x598) = local_1184;
LAB_00f68a28:
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_8a8);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    local_8d8 = local_8a8;
    uStack_8d4 = local_8a4;
    uStack_8d0 = local_8a0;
    uStack_8cc = local_89c;
    uStack_8c8 = uStack_898;
    uStack_8c4 = uStack_894;
    local_8c0 = local_890;
    uStack_8bc = uStack_88c;
    uStack_8b8 = uStack_888;
    uStack_8b4 = uStack_884;
    uStack_8b0 = uStack_880;
    uStack_8ac = uStack_87c;
    *(char **)(param_2 + 0x58) = "Bosminer.get_root_hub";
    *(undefined4 *)(param_2 + 0x5c) = 0x15;
    *(undefined1 *)(param_2 + 0x24) = uVar1;
    *(undefined1 **)(param_2 + 0x20) = &DAT_80000004;
    *(uint *)(param_2 + 0x60) = local_8a8;
    *(uint *)(param_2 + 100) = local_8a4;
    *(uint *)(param_2 + 0x68) = local_8a0;
    *(uint *)(param_2 + 0x6c) = local_89c;
    *(uint *)(param_2 + 0x70) = uStack_898;
    *(uint *)(param_2 + 0x74) = uStack_894;
    *(undefined4 *)(param_2 + 0x78) = local_890;
    *(undefined4 *)(param_2 + 0x7c) = uStack_88c;
    *(undefined4 *)(param_2 + 0x80) = uStack_888;
    *(undefined4 *)(param_2 + 0x84) = uStack_884;
    *(undefined4 *)(param_2 + 0x88) = uStack_880;
    *(undefined4 *)(param_2 + 0x8c) = uStack_87c;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = local_1184;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c199dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c199dc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x59d)) {
    case 0:
      uVar1 = *(undefined1 *)(param_2 + 0x59e);
      local_1184 = *(undefined4 *)(param_2 + 0x598);
      goto LAB_00f68a28;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d6c);
    }
  }
  FUN_00f68d9c(&local_8a8,param_2,param_3);
  uVar4 = local_8a4;
  uVar3 = local_8a8;
  if (local_8a8 == 5 && local_8a4 == 0) {
    uVar1 = 3;
    *(undefined1 *)(param_2 + 0x59d) = 3;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00f68ca0;
  }
  local_300 = local_8a0;
  uStack_2fc = local_89c;
  uStack_2f8 = uStack_898;
  uStack_2f4 = uStack_894;
  FUN_01bed4e2(auStack_5c8,&local_890,0x2c8);
  if (*(char *)(param_2 + 0x590) == '\x03') {
    iVar2 = param_2 + 0x2c8;
LAB_00f68b40:
    FUN_00b9a8cc(iVar2);
  }
  else {
    iVar2 = param_2;
    if (*(char *)(param_2 + 0x590) == '\0') goto LAB_00f68b40;
  }
  if ((uVar3 ^ 4) != 0 || uVar4 != 0) {
    FUN_01bed4e2(auStack_2f0,auStack_5c8,0x2c8);
  }
  *(undefined1 *)(param_2 + 0x59c) = 0;
  local_e98 = local_300;
  uStack_e94 = uStack_2fc;
  uStack_e90 = uStack_2f8;
  uStack_e8c = uStack_2f4;
  *(undefined1 *)(param_2 + 0x59d) = 1;
  local_e88 = local_300;
  uStack_e84 = uStack_2fc;
  uStack_e80 = uStack_2f8;
  uStack_e7c = uStack_2f4;
  FUN_01bed4e2(&uStack_e78,auStack_2f0,0x2c8);
  FUN_00f68940(param_2);
  if ((uVar3 ^ 4) == 0 && uVar4 == 0) {
    FUN_00a98078(&local_8a8,1);
    FUN_00f262b8(&local_e88);
    uVar4 = 0;
    uVar3 = 3;
    local_8f0 = local_8a8;
    uStack_8ec = local_8a4;
    uStack_8e8 = local_8a0;
    uStack_8e4 = local_89c;
    uStack_8e0 = uStack_898;
    uStack_8dc = uStack_894;
  }
  else {
    FUN_01bed4e2(auStack_1158,auStack_2e8,0x2c0);
    FUN_00a98078(&local_8a8,0);
    if (uVar3 == 3 && uVar4 == 0) {
      local_8f0 = local_8a8;
      uStack_8ec = local_8a4;
      uStack_8e8 = local_8a0;
      uStack_8e4 = local_89c;
      uStack_8e0 = uStack_898;
      uStack_8dc = uStack_894;
    }
    else {
      local_8f0 = local_e88;
      uStack_8ec = uStack_e84;
      uStack_8e8 = uStack_e80;
      uStack_8e4 = uStack_e7c;
      uStack_8e0 = uStack_e78;
      uStack_8dc = uStack_e74;
      FUN_01bed4e2(auStack_bb0,auStack_2e8,0x2c0);
      FUN_019bb7e0(local_8a0,local_89c);
    }
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = local_8f0;
  param_1[3] = uStack_8ec;
  param_1[4] = uStack_8e8;
  param_1[5] = uStack_8e4;
  param_1[6] = uStack_8e0;
  param_1[7] = uStack_8dc;
  FUN_01bed4e2(param_1 + 8,auStack_bb0,0x2c0);
  uVar1 = 1;
LAB_00f68ca0:
  *(undefined1 *)(param_2 + 0x5a4) = uVar1;
  return;
}

