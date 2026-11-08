// FUN_00a70fd4 @ 00a70fd4 size=892 calls_out=10 calls_in=7
// strings: Bosminer.get_client_groups | internal error: entered unreachable code

void FUN_00a70fd4(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *local_918;
  undefined1 *puStack_914;
  undefined1 *puStack_910;
  undefined1 *local_8c8;
  undefined1 *puStack_8c4;
  undefined1 *puStack_8c0;
  undefined1 *local_8b8;
  undefined1 *local_8b4;
  undefined1 *local_8b0;
  undefined1 *local_8ac;
  undefined1 *puStack_8a8;
  undefined1 *puStack_8a4;
  undefined1 auStack_8a0 [712];
  undefined1 *local_5d8;
  undefined1 *local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined1 *local_5c8;
  undefined1 *local_5c4;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 auStack_2f8 [712];
  undefined1 *local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5a4)) {
  case 0:
    *(undefined1 *)(param_2 + 0x59d) = 0;
    uVar5 = *(undefined1 *)(param_2 + 0x5a5);
    uVar4 = *(undefined4 *)(param_2 + 0x5a0);
    *(undefined1 *)(param_2 + 0x59e) = uVar5;
    *(undefined4 *)(param_2 + 0x598) = uVar4;
LAB_00a7105c:
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5d8);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    *(char **)(param_2 + 0x58) = "Bosminer.get_client_groups";
    *(undefined4 *)(param_2 + 0x5c) = 0x1a;
    *(undefined1 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x20) = 0x80000002;
    *(undefined1 **)(param_2 + 0x60) = local_5d8;
    *(undefined1 **)(param_2 + 100) = local_5d4;
    *(undefined1 **)(param_2 + 0x68) = local_5d0;
    *(undefined1 **)(param_2 + 0x6c) = local_5cc;
    *(undefined1 **)(param_2 + 0x70) = local_5c8;
    *(undefined1 **)(param_2 + 0x74) = local_5c4;
    *(undefined4 *)(param_2 + 0x78) = local_5c0;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5bc;
    *(undefined4 *)(param_2 + 0x80) = uStack_5b8;
    *(undefined4 *)(param_2 + 0x84) = uStack_5b4;
    *(undefined4 *)(param_2 + 0x88) = uStack_5b0;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5ac;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar4;
switchD_00a711f0_caseD_0:
    FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0eef0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0eef0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x59d)) {
    case 0:
      uVar5 = *(undefined1 *)(param_2 + 0x59e);
      uVar4 = *(undefined4 *)(param_2 + 0x598);
      goto LAB_00a7105c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19d8c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19d8c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 0:
      goto switchD_00a711f0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  puVar6 = (undefined1 *)(param_2 + 0x590);
  FUN_00a55b84(&local_5d8,param_2 + 0x2c8,param_3);
  puVar3 = local_5d0;
  puVar2 = local_5d4;
  puVar1 = local_5d8;
  if (local_5d8 == (undefined1 *)0x1e && local_5d4 == (undefined1 *)0x0) {
    *puVar6 = 3;
LAB_00a7112c:
    *(undefined1 *)(param_2 + 0x59d) = 3;
  }
  else {
    local_30 = local_5cc;
    puStack_2c = local_5c8;
    puStack_28 = local_5c4;
    FUN_01bed4e2(auStack_2f8,&local_5c0,0x2c8);
    FUN_00df9ef8(param_2 + 0x2c8);
    if (puVar1 != (undefined1 *)0x1d || puVar2 != (undefined1 *)0x0) {
      FUN_01bed4e2(auStack_8a0,auStack_2f8,0x2c8);
      local_8ac = local_30;
      puStack_8a8 = puStack_2c;
      puStack_8a4 = puStack_28;
      local_8b0 = puVar3;
      local_8b4 = puVar2;
      local_8b8 = puVar1;
      if (puVar1 != (undefined1 *)0x6 || puVar2 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      *puVar6 = 1;
      local_8c8 = puVar3;
      puStack_8c4 = local_30;
      puStack_8c0 = puStack_2c;
LAB_00a71280:
      *(undefined2 *)(param_2 + 0x59c) = 0x100;
      puVar3 = &DAT_80000005;
LAB_00a71290:
      FUN_00a7389c(param_2);
      if (puVar3 == &DAT_80000005) {
        local_5d8 = (undefined1 *)0x2;
        local_918 = local_8c8;
        puStack_914 = puStack_8c4;
        puStack_910 = puStack_8c0;
      }
      else {
        local_8b4 = local_8c8;
        local_8b0 = puStack_8c4;
        local_8ac = puStack_8c0;
        local_8b8 = puVar3;
        FUN_00a98078(&local_5d8,1);
        FUN_00a55a24(&local_8b8);
        local_918 = local_5d4;
        puStack_914 = local_5d0;
        puStack_910 = local_5cc;
        local_8c8 = local_5c8;
        puStack_8c4 = local_5c4;
      }
      *param_1 = (int)local_5d8;
      param_1[1] = (int)local_918;
      param_1[2] = (int)puStack_914;
      param_1[3] = (int)puStack_910;
      uVar5 = 1;
      param_1[4] = (int)local_8c8;
      param_1[5] = (int)puStack_8c4;
      goto LAB_00a71320;
    }
    *puVar6 = 1;
    if (puVar3 == &DAT_80000005) goto LAB_00a7112c;
    local_8c8 = local_30;
    puStack_8c4 = puStack_2c;
    puStack_8c0 = puStack_28;
    if (puVar3 == &DAT_80000004) goto LAB_00a71280;
    *(undefined2 *)(param_2 + 0x59c) = 0x100;
    if (puVar3 != (undefined1 *)0x80000006) goto LAB_00a71290;
  }
  uVar5 = 3;
  *param_1 = 3;
LAB_00a71320:
  *(undefined1 *)(param_2 + 0x5a4) = uVar5;
  return;
}

