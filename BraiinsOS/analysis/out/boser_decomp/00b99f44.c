// FUN_00b99f44 @ 00b99f44 size=788 calls_out=7 calls_in=1
// strings: Bosminer.get_summary | internal error: entered unreachable code

void FUN_00b99f44(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_bc0 [240];
  int local_ad0;
  int iStack_acc;
  int iStack_ac8;
  int iStack_ac4;
  undefined1 auStack_ac0 [240];
  int local_9d0;
  int iStack_9cc;
  int iStack_9c8;
  int iStack_9c4;
  undefined1 auStack_9c0 [240];
  int local_8d0;
  int iStack_8cc;
  int iStack_8c8;
  int iStack_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8;
  int local_8b4;
  int local_8b0;
  int iStack_8ac;
  int iStack_8a8;
  int iStack_8a4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [704];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x59e)) {
  case 0:
    cVar5 = *(char *)(param_2 + 0x59d);
    uVar2 = *(undefined4 *)(param_2 + 0x598);
    *(undefined1 *)(param_2 + 0x59c) = 1;
    FUN_019cfcf0(&local_5e0);
    *(undefined1 *)(param_2 + 0x59c) = 0;
    if (cVar5 == '\x03') {
      cVar5 = '\x02';
    }
    *(char *)(param_2 + 0x24) = cVar5;
    *(char **)(param_2 + 0x58) = "Bosminer.get_summary";
    *(undefined4 *)(param_2 + 0x5c) = 0x14;
    *(undefined4 *)(param_2 + 0x20) = 0x80000003;
    *(int *)(param_2 + 0x60) = local_5e0;
    *(int *)(param_2 + 100) = local_5dc;
    *(int *)(param_2 + 0x68) = local_5d8;
    *(int *)(param_2 + 0x6c) = iStack_5d4;
    *(int *)(param_2 + 0x70) = iStack_5d0;
    *(int *)(param_2 + 0x74) = iStack_5cc;
    *(undefined4 *)(param_2 + 0x78) = local_5c8;
    *(undefined4 *)(param_2 + 0x7c) = uStack_5c4;
    *(undefined4 *)(param_2 + 0x80) = uStack_5c0;
    *(undefined4 *)(param_2 + 0x84) = uStack_5bc;
    *(undefined4 *)(param_2 + 0x88) = uStack_5b8;
    *(undefined4 *)(param_2 + 0x8c) = uStack_5b4;
    *(undefined1 *)(param_2 + 0x590) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
switchD_00b9a01c_caseD_0:
    FUN_01bed4e2(param_2 + 0x2c8,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19d5c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19d5c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x590)) {
    case 0:
      goto switchD_00b9a01c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
  }
  puVar3 = (undefined1 *)(param_2 + 0x590);
  FUN_00b9a97c(&local_5e0,param_2 + 0x2c8,param_3);
  if (local_5e0 == 0x1e && local_5dc == 0) {
    *puVar3 = 3;
LAB_00b9a074:
    *param_1 = 4;
    param_1[1] = 0;
    uVar1 = 3;
  }
  else {
    local_38 = local_5d8;
    iStack_34 = iStack_5d4;
    iStack_30 = iStack_5d0;
    iStack_2c = iStack_5cc;
    FUN_01bed4e2(auStack_300,&local_5c8,0x2c8);
    FUN_00b9a8cc(param_2 + 0x2c8);
    if (local_5e0 == 0x1d && local_5dc == 0) {
      local_ad0 = local_38;
      iStack_acc = iStack_34;
      iStack_ac8 = iStack_30;
      iStack_ac4 = iStack_2c;
      *puVar3 = 1;
      local_9d0 = local_38;
      iStack_9cc = iStack_34;
      iStack_9c8 = iStack_30;
      iStack_9c4 = iStack_2c;
LAB_00b9a0f8:
      iVar6 = 3;
      local_8d0 = local_9d0;
      iStack_8cc = iStack_9cc;
      iStack_8c8 = iStack_9c8;
      iStack_8c4 = iStack_9c4;
      iVar4 = 0;
    }
    else {
      FUN_01bed4e2(&iStack_8a8,auStack_300,0x2c8);
      iVar4 = iStack_34;
      iVar6 = local_38;
      local_8b8 = local_38;
      local_8b4 = iStack_34;
      local_8b0 = iStack_30;
      iStack_8ac = iStack_2c;
      local_8bc = local_5dc;
      local_8c0 = local_5e0;
      if (local_5e0 != 7 || local_5dc != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      local_ad0 = iStack_30;
      iStack_acc = iStack_2c;
      iStack_ac8 = iStack_8a8;
      iStack_ac4 = iStack_8a4;
      FUN_01bed4e2(auStack_bc0,auStack_2f8,0xf0);
      *puVar3 = 1;
      if (iVar6 == 4 && iVar4 == 0) goto LAB_00b9a074;
      local_9d0 = local_ad0;
      iStack_9cc = iStack_acc;
      iStack_9c8 = iStack_ac8;
      iStack_9c4 = iStack_ac4;
      FUN_01bed4e2(auStack_ac0,auStack_bc0,0xf0);
      if (iVar6 == 3 && iVar4 == 0) goto LAB_00b9a0f8;
      local_8d0 = local_9d0;
      iStack_8cc = iStack_9cc;
      iStack_8c8 = iStack_9c8;
      iStack_8c4 = iStack_9c4;
      FUN_01bed4e2(auStack_9c0,auStack_ac0,0xf0);
    }
    *(undefined1 *)(param_2 + 0x59c) = 0;
    *param_1 = iVar6;
    param_1[1] = iVar4;
    param_1[2] = local_8d0;
    param_1[3] = iStack_8cc;
    param_1[4] = iStack_8c8;
    param_1[5] = iStack_8c4;
    FUN_01bed4e2(param_1 + 6,auStack_9c0,0xf0);
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x59e) = uVar1;
  return;
}

