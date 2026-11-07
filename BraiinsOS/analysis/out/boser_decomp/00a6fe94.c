// FUN_00a6fe94 @ 00a6fe94 size=988 calls_out=11 calls_in=4
// strings: Bosminer.get_root_hub | internal error: entered unreachable code

void FUN_00a6fe94(uint *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_1468;
  undefined1 auStack_1438 [704];
  uint local_1178;
  uint uStack_1174;
  uint uStack_1170;
  uint uStack_116c;
  uint uStack_1168;
  uint uStack_1164;
  undefined1 auStack_ea0 [704];
  uint local_be0;
  uint uStack_bdc;
  uint uStack_bd8;
  uint uStack_bd4;
  uint uStack_bd0;
  uint uStack_bcc;
  uint local_bc8;
  uint uStack_bc4;
  uint uStack_bc0;
  uint uStack_bbc;
  uint uStack_bb8;
  uint uStack_bb4;
  undefined4 local_bb0;
  undefined4 uStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined1 auStack_b98 [8];
  undefined1 auStack_b90 [704];
  uint local_8d0;
  uint local_8cc;
  uint local_8c8;
  uint uStack_8c4;
  uint uStack_8c0;
  uint uStack_8bc;
  undefined1 auStack_8b8 [712];
  uint local_5f0;
  uint local_5ec;
  uint local_5e8;
  uint local_5e4;
  uint uStack_5e0;
  uint uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined1 auStack_310 [712];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5a4)) {
  case 0:
    *(undefined1 *)(param_2 + 0x59d) = 0;
    local_1468 = *(undefined4 *)(param_2 + 0x5a0);
    uVar1 = *(undefined1 *)(param_2 + 0x5a5);
    *(undefined1 *)(param_2 + 0x59e) = uVar1;
    *(undefined4 *)(param_2 + 0x598) = local_1468;
LAB_00a6ff24:
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5f0);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    local_bc8 = local_5f0;
    uStack_bc4 = local_5ec;
    uStack_bc0 = local_5e8;
    uStack_bbc = local_5e4;
    uStack_bb8 = uStack_5e0;
    uStack_bb4 = uStack_5dc;
    local_bb0 = local_5d8;
    uStack_bac = uStack_5d4;
    uStack_ba8 = uStack_5d0;
    uStack_ba4 = uStack_5cc;
    uStack_ba0 = uStack_5c8;
    uStack_b9c = uStack_5c4;
    *(char **)(param_2 + 0x58) = "Bosminer.get_root_hub";
    *(undefined4 *)(param_2 + 0x5c) = 0x15;
    *(undefined1 *)(param_2 + 0x24) = uVar1;
    *(undefined1 **)(param_2 + 0x20) = &DAT_80000004;
    *(uint *)(param_2 + 0x60) = local_5f0;
    *(uint *)(param_2 + 100) = local_5ec;
    *(uint *)(param_2 + 0x68) = local_5e8;
    *(uint *)(param_2 + 0x6c) = local_5e4;
    *(uint *)(param_2 + 0x70) = uStack_5e0;
    *(uint *)(param_2 + 0x74) = uStack_5dc;
    *(undefined4 *)(param_2 + 0x78) = local_5d8;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5d4;
    *(undefined4 *)(param_2 + 0x80) = uStack_5d0;
    *(undefined4 *)(param_2 + 0x84) = uStack_5cc;
    *(undefined4 *)(param_2 + 0x88) = uStack_5c8;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5c4;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = local_1468;
switchD_00a70078_caseD_0:
    FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
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
      local_1468 = *(undefined4 *)(param_2 + 0x598);
      goto LAB_00a6ff24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d6c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 0:
      goto switchD_00a70078_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  FUN_00a55b84(&local_5f0,param_2 + 0x2c8,param_3);
  uVar3 = local_5ec;
  uVar2 = local_5f0;
  if (local_5f0 == 0x1e && local_5ec == 0) {
    uVar1 = 3;
    *(undefined1 *)(param_2 + 0x590) = 3;
    *(undefined1 *)(param_2 + 0x59d) = 3;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00a70240;
  }
  local_48 = local_5e8;
  uStack_44 = local_5e4;
  uStack_40 = uStack_5e0;
  uStack_3c = uStack_5dc;
  FUN_01bed4e2(auStack_310,&local_5d8,0x2c8);
  FUN_00df9ef8(param_2 + 0x2c8);
  if (uVar2 == 0x1d && uVar3 == 0) {
    uVar3 = 0;
    uVar2 = 4;
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
  }
  else {
    FUN_01bed4e2(auStack_8b8,auStack_310,0x2c8);
    local_8c8 = local_48;
    uStack_8c4 = uStack_44;
    uStack_8c0 = uStack_40;
    uStack_8bc = uStack_3c;
    local_8cc = uVar3;
    local_8d0 = uVar2;
    if (uVar3 != 0 || uVar3 < (3 < uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
    }
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    FUN_01bed4e2(auStack_b98,auStack_310,0x2c8);
  }
  *(undefined1 *)(param_2 + 0x590) = 1;
  *(undefined2 *)(param_2 + 0x59c) = 0x100;
  local_1178 = local_38;
  uStack_1174 = uStack_34;
  uStack_1170 = uStack_30;
  uStack_116c = uStack_2c;
  FUN_01bed4e2(&uStack_1168,auStack_b98,0x2c8);
  FUN_00a7389c(param_2);
  if (uVar2 == 4 && uVar3 == 0) {
    FUN_00a98078(&local_5f0,1);
    FUN_00a55a24(&local_38);
    uVar3 = 0;
    uVar2 = 3;
LAB_00a701e0:
    local_be0 = local_5f0;
    uStack_bdc = local_5ec;
    uStack_bd8 = local_5e8;
    uStack_bd4 = local_5e4;
    uStack_bd0 = uStack_5e0;
    uStack_bcc = uStack_5dc;
  }
  else {
    FUN_01bed4e2(auStack_1438,auStack_b90,0x2c0);
    FUN_00a98078(&local_5f0,0);
    if (uVar2 == 3 && uVar3 == 0) goto LAB_00a701e0;
    local_be0 = local_1178;
    uStack_bdc = uStack_1174;
    uStack_bd8 = uStack_1170;
    uStack_bd4 = uStack_116c;
    uStack_bd0 = uStack_1168;
    uStack_bcc = uStack_1164;
    FUN_01bed4e2(auStack_ea0,auStack_b90,0x2c0);
    FUN_019bb7e0(local_5e8,local_5e4);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = local_be0;
  param_1[3] = uStack_bdc;
  param_1[4] = uStack_bd8;
  param_1[5] = uStack_bd4;
  param_1[6] = uStack_bd0;
  param_1[7] = uStack_bcc;
  FUN_01bed4e2(param_1 + 8,auStack_ea0,0x2c0);
  uVar1 = 1;
LAB_00a70240:
  *(undefined1 *)(param_2 + 0x5a4) = uVar1;
  return;
}

