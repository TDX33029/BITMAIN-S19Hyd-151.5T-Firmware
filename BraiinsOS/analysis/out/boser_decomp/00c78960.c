// FUN_00c78960 @ 00c78960 size=664 calls_out=7 calls_in=1
// strings: Bosminer.get_client_groups | internal error: entered unreachable code

void FUN_00c78960(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined1 *local_8c8;
  undefined1 *puStack_8c4;
  undefined1 *puStack_8c0;
  undefined1 auStack_8a0 [712];
  int local_5d8;
  int local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined1 *puStack_5c8;
  undefined1 *puStack_5c4;
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
  switch(*(undefined1 *)(param_2 + 0x59e)) {
  case 0:
    cVar4 = *(char *)(param_2 + 0x59d);
    uVar2 = *(undefined4 *)(param_2 + 0x598);
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5d8);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    if (cVar4 == '\x03') {
      cVar4 = '\x01';
    }
    *(char **)(param_2 + 0x58) = "Bosminer.get_client_groups";
    *(undefined4 *)(param_2 + 0x20) = 0x80000002;
    *(undefined4 *)(param_2 + 0x5c) = 0x1a;
    *(char *)(param_2 + 0x24) = cVar4;
    *(int *)(param_2 + 0x60) = local_5d8;
    *(int *)(param_2 + 100) = local_5d4;
    *(undefined1 **)(param_2 + 0x68) = local_5d0;
    *(undefined1 **)(param_2 + 0x6c) = local_5cc;
    *(undefined1 **)(param_2 + 0x70) = puStack_5c8;
    *(undefined1 **)(param_2 + 0x74) = puStack_5c4;
    *(undefined4 *)(param_2 + 0x78) = local_5c0;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5bc;
    *(undefined4 *)(param_2 + 0x80) = uStack_5b8;
    *(undefined4 *)(param_2 + 0x84) = uStack_5b4;
    *(undefined4 *)(param_2 + 0x88) = uStack_5b0;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5ac;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
switchD_00c78a4c_caseD_0:
    FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19d8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19d8c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 0:
      goto switchD_00c78a4c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  puVar5 = (undefined1 *)(param_2 + 0x590);
  FUN_00c4306c(&local_5d8,param_2 + 0x2c8,param_3);
  if (local_5d8 == 0x1e && local_5d4 == 0) {
    *puVar5 = 3;
LAB_00c78aa4:
    *param_1 = 0x80000006;
    uVar1 = 3;
  }
  else {
    local_30 = local_5cc;
    puStack_2c = puStack_5c8;
    puStack_28 = puStack_5c4;
    FUN_01bed4e2(auStack_2f8,&local_5c0,0x2c8);
    FUN_00b9a8cc(param_2 + 0x2c8);
    if (local_5d8 == 0x1d && local_5d4 == 0) {
      *puVar5 = 1;
      if (local_5d0 == &DAT_80000005) goto LAB_00c78aa4;
      if (local_5d0 == &DAT_80000004) {
        local_5d0 = &DAT_80000005;
      }
      local_8c8 = local_30;
      puStack_8c4 = puStack_2c;
      puStack_8c0 = puStack_28;
      puVar3 = local_5d0;
    }
    else {
      FUN_01bed4e2(auStack_8a0,auStack_2f8,0x2c8);
      if (local_5d8 != 6 || local_5d4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      puVar3 = &DAT_80000005;
      *puVar5 = 1;
      local_8c8 = local_5d0;
      puStack_8c4 = local_30;
      puStack_8c0 = puStack_2c;
    }
    *param_1 = puVar3;
    *(undefined1 *)(param_2 + 0x59c) = 0;
    uVar1 = 1;
    param_1[1] = local_8c8;
    param_1[2] = puStack_8c4;
    param_1[3] = puStack_8c0;
  }
  *(undefined1 *)(param_2 + 0x59e) = uVar1;
  return;
}

