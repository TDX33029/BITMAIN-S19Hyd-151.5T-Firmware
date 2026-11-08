// FUN_008696c8 @ 008696c8 size=604 calls_out=9 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x008698f4) */
/* WARNING: Removing unreachable block (ram,0x008698e0) */

longlong FUN_008696c8(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_68 [20];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x19]) {
  case '\0':
    iVar2 = param_1[0x18] + 0x70;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = iVar2;
LAB_00869710:
    param_1[0xe] = iVar2;
    *(undefined2 *)((int)param_1 + 0x3d) = 0x100;
    param_1[1] = iVar2;
switchD_00869750_caseD_3:
    uVar4 = FUN_00869acc(param_1 + 3,param_2);
    local_b0 = (int)(uVar4 >> 0x20);
    if ((uVar4 & 1) != 0) {
      uVar1 = 3;
      goto LAB_00869854;
    }
    FUN_00869a20(param_1 + 3);
    if (local_b0 != 0) {
      local_68[0] = 3;
      local_b4 = 0x22;
      local_b8 = &DAT_003442d5;
      uVar3 = FUN_0080807c(&local_b8,local_68);
      goto LAB_008698c0;
    }
    FUN_01656eb8(local_68,&DAT_018615ac,0,0,100000000,&DAT_018615ac);
    FUN_016dd1aa(&local_b8,local_68,0x50);
    FUN_016dd1aa(param_1 + 4,&local_b8,0x50);
switchD_00869750_caseD_4:
    iVar2 = FUN_01657fc4(param_1 + 4,*param_2);
    if (iVar2 != 0) {
      uVar1 = 4;
      goto LAB_00869854;
    }
    FUN_00a07b4c(param_1 + 4);
    *(undefined2 *)((int)param_1 + 0x3d) = 0;
    param_1[0xe] = param_1[1];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018611d8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018611d8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[2]) {
    case '\0':
      iVar2 = *param_1;
      goto LAB_00869710;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186159c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186159c);
    case '\x03':
      goto switchD_00869750_caseD_3;
    case '\x04':
      goto switchD_00869750_caseD_4;
    }
  }
  uVar4 = FUN_00869acc(param_1 + 3,param_2);
  local_b0 = (int)(uVar4 >> 0x20);
  if ((uVar4 & 1) == 0) {
    FUN_00869a20(param_1 + 3);
    if (local_b0 == 0) {
      uVar3 = 0;
    }
    else {
      local_68[0] = 3;
      local_b4 = 0x22;
      local_b8 = &DAT_003442d5;
      uVar3 = FUN_0080807c(&local_b8,local_68);
    }
LAB_008698c0:
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return (ulonglong)uVar3 << 0x20;
  }
  uVar1 = 5;
LAB_00869854:
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)(param_1 + 0x19) = 3;
  return CONCAT44(param_2,1);
}

