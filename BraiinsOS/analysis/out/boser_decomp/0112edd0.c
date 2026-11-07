// FUN_0112edd0 @ 0112edd0 size=788 calls_out=10 calls_in=1
// strings: background task failed

void FUN_0112edd0(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int local_13c;
  int *local_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  uint local_108;
  int local_104;
  undefined *local_100;
  int local_b0;
  int *local_ac;
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
LAB_0112ee48:
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[3] = iVar4;
    param_2[4] = iVar5;
LAB_0112ee58:
    param_2[5] = iVar4;
    param_2[6] = iVar5;
    FUN_019afae4(&local_128,iVar4,iVar5);
    param_2[7] = local_128;
    param_2[8] = iStack_124;
    param_2[9] = iStack_120;
    *(undefined1 *)(param_2 + 0xb) = 0;
switchD_0112f078_caseD_0:
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
      goto LAB_0112ee48;
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
      goto LAB_0112ee58;
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
      goto switchD_0112f078_caseD_0;
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
  local_130 = param_2 + 0xb;
  piVar7 = param_2 + 0xd;
  FUN_014b4d60(&local_98,iVar4,param_3);
  if (local_98 == 3) {
    uVar2 = 3;
    *(undefined1 *)(param_2 + 0xc) = 3;
    *(undefined1 *)local_130 = 3;
    *(undefined1 *)piVar7 = 3;
    param_1[2] = 0x3b9aca01;
    goto LAB_0112f054;
  }
  FUN_01bed4e2(&local_108,&local_98,0x70);
  piVar3 = (int *)param_2[10];
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar1) goto LAB_0112ef74;
    *piVar3 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_0112ef74:
    (**(code **)(piVar3[2] + 0x10))();
  }
  if (local_108 == 2) {
    FUN_019a18a8(&local_98,0x28,"background task failed",0x16);
    FUN_00bd34ac(&local_108);
    iVar4 = local_98;
    puVar6 = local_94;
    local_ac = piVar7;
    local_108 = 1;
  }
  else {
    local_13c = local_b0;
    iVar4 = local_104;
    puVar6 = local_100;
  }
  *(undefined1 *)local_130 = 1;
  FUN_00b71be0(param_2 + 7);
  *(undefined1 *)(param_2 + 0xc) = 1;
  if ((local_108 & 1) == 0) {
    puVar6 = &DAT_01d27958;
    if (&DAT_3b9ac9ff < local_ac) {
      iVar4 = 2;
      goto LAB_0112f02c;
    }
    puVar6 = (undefined *)(local_13c >> 0x1f);
    iVar4 = local_13c;
  }
  else {
LAB_0112f02c:
    FUN_00b9391c(iVar4,puVar6);
    local_ac = (int *)&DAT_3b9aca00;
  }
  uVar2 = 1;
  *param_1 = iVar4;
  param_1[2] = (int)local_ac;
  *(undefined1 *)piVar7 = 1;
  param_1[1] = (int)puVar6;
LAB_0112f054:
  *(undefined1 *)(param_2 + 0xe) = uVar2;
  return;
}

