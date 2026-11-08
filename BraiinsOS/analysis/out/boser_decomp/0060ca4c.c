// FUN_0060ca4c @ 0060ca4c size=804 calls_out=10 calls_in=1
// strings: background task failed

void FUN_0060ca4c(undefined4 *param_1,int *param_2,undefined1 *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *extraout_r2;
  int iVar5;
  int *piVar6;
  undefined *local_148;
  int local_144;
  int *local_140;
  int local_138;
  undefined *local_134;
  undefined1 *local_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  uint local_108;
  int local_104;
  undefined *local_100;
  int *local_b0;
  undefined1 *local_ac;
  int local_98;
  undefined *local_94;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xe]) {
  case '\0':
    iVar4 = *(int *)(*param_2 + 0x14);
    iVar5 = *(int *)(*param_2 + 0x18);
    *(undefined1 *)(param_2 + 0xd) = 0;
    param_2[1] = iVar4;
    param_2[2] = iVar5;
LAB_0060cac4:
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[3] = iVar4;
    param_2[4] = iVar5;
LAB_0060cad4:
    param_2[5] = iVar4;
    param_2[6] = iVar5;
    FUN_019afae4(&local_128,iVar4,iVar5);
    param_2[7] = local_128;
    param_2[8] = iStack_124;
    param_2[9] = iStack_120;
    *(undefined1 *)(param_2 + 0xb) = 0;
switchD_0060cd14_caseD_0:
    local_118 = param_2[7];
    iStack_114 = param_2[8];
    iStack_110 = param_2[9];
    iVar4 = FUN_014b4910(&local_118,&DAT_01c230d0);
    param_2[10] = iVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(0x1c201e4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(0x1c201e4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xd]) {
    case '\0':
      iVar4 = param_2[1];
      iVar5 = param_2[2];
      goto LAB_0060cac4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c203b4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c203b4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xc]) {
    case '\0':
      iVar4 = param_2[3];
      iVar5 = param_2[4];
      goto LAB_0060cad4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c204bc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c204bc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb]) {
    case '\0':
      goto switchD_0060cd14_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case '\x03':
      iVar4 = param_2[10];
    }
  }
  local_140 = param_2 + 7;
  piVar6 = param_2 + 0xc;
  FUN_014b4d60(&local_98,iVar4,param_3);
  if (local_98 == 3) {
    uVar3 = 3;
    *(undefined1 *)(param_2 + 0xb) = 3;
    *(undefined1 *)piVar6 = 3;
    *(undefined1 *)(param_2 + 0xd) = 3;
    param_1[2] = 0x3b9aca01;
    goto LAB_0060ccec;
  }
  FUN_01bed4e2(&local_108,&local_98,0x70);
  piVar2 = (int *)param_2[10];
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar1) goto LAB_0060cbdc;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_0060cbdc:
    (**(code **)(piVar2[2] + 0x10))();
  }
  if (local_108 == 2) {
    FUN_019a18a8(&local_98,0x28,"background task failed",0x16);
    local_144 = local_98;
    local_148 = local_94;
    FUN_005f3e34(&local_108);
    local_b0 = piVar6;
    local_108 = 1;
  }
  else {
    local_144 = local_104;
    local_148 = local_100;
    param_3 = local_ac;
  }
  *(undefined1 *)(param_2 + 0xb) = 1;
  FUN_00b71be0(local_140);
  *(undefined1 *)piVar6 = 1;
  if ((local_108 & 1) == 0) {
    local_134 = &DAT_01d27958;
    if (&DAT_3b9ac9ff < param_3) {
      local_138 = 2;
      goto LAB_0060cccc;
    }
    iVar4 = (int)local_b0 >> 0x1f;
  }
  else {
    local_138 = local_144;
    local_134 = local_148;
LAB_0060cccc:
    local_130 = &DAT_3b9aca00;
    iVar4 = FUN_0183a528(&local_138);
    param_3 = &DAT_3b9aca00;
    local_b0 = extraout_r2;
  }
  param_1[2] = param_3;
  uVar3 = 1;
  *param_1 = local_b0;
  *(undefined1 *)(param_2 + 0xd) = 1;
  param_1[1] = iVar4;
LAB_0060ccec:
  *(undefined1 *)(param_2 + 0xe) = uVar3;
  return;
}

