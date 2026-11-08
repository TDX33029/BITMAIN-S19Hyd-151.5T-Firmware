// FUN_00bd30b0 @ 00bd30b0 size=676 calls_out=10 calls_in=1
// strings: background task failed

void FUN_00bd30b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *unaff_r6;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_118;
  undefined1 *puStack_114;
  undefined4 uStack_110;
  uint local_108;
  undefined4 *local_104;
  undefined *local_100;
  undefined4 *local_b0;
  undefined1 *local_ac;
  undefined4 *local_98;
  undefined *local_94;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    uVar4 = *param_2;
    uVar5 = param_2[1];
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *(undefined1 *)(param_2 + 0xb) = 0;
LAB_00bd3124:
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    FUN_019afae4(&local_128,uVar4,uVar5);
    param_2[6] = local_128;
    param_2[7] = uStack_124;
    param_2[8] = uStack_120;
    *(undefined1 *)(param_2 + 10) = 0;
switchD_00bd3218_caseD_0:
    local_118 = param_2[6];
    unaff_r6 = (undefined1 *)param_2[7];
    uStack_110 = param_2[8];
    puStack_114 = unaff_r6;
    uVar4 = FUN_014b4910(&local_118,&DAT_01c230d0);
    param_2[9] = uVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c203b4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c203b4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      goto LAB_00bd3124;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c204bc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c204bc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 10)) {
    case 0:
      goto switchD_00bd3218_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar4 = param_2[9];
    }
  }
  local_12c = param_2 + 10;
  puVar7 = param_2 + 0xb;
  FUN_014b4d60(&local_98,uVar4,param_3);
  if (local_98 == (undefined4 *)&DAT_00000003) {
    uVar2 = 3;
    *(undefined1 *)puVar7 = 3;
    *(undefined1 *)local_12c = 3;
    local_ac = (undefined1 *)0x3b9aca01;
    goto LAB_00bd330c;
  }
  FUN_01bed4e2(&local_108,&local_98,0x70);
  piVar3 = (int *)param_2[9];
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (!bVar1) goto LAB_00bd3238;
    *piVar3 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00bd3238:
    (**(code **)(piVar3[2] + 0x10))();
  }
  if (local_108 == 2) {
    FUN_019a18a8(&local_98,0x28,"background task failed",0x16);
    FUN_00bd34ac(&local_108);
    local_ac = unaff_r6;
    puVar6 = local_94;
    local_b0 = puVar7;
    local_108 = 1;
    puVar8 = local_98;
  }
  else {
    puVar6 = local_100;
    puVar8 = local_104;
  }
  *(undefined1 *)local_12c = 1;
  FUN_00b71be0(param_2 + 6);
  *(undefined1 *)puVar7 = 1;
  if ((local_108 & 1) == 0) {
    puVar6 = &DAT_01d27958;
    if (&DAT_3b9ac9ff < local_ac) {
      puVar8 = (undefined4 *)0x2;
      goto LAB_00bd32ec;
    }
    puVar6 = (undefined *)((int)local_b0 >> 0x1f);
    puVar8 = local_b0;
  }
  else {
LAB_00bd32ec:
    FUN_00b9391c(puVar8,puVar6);
    local_ac = &DAT_3b9aca00;
  }
  uVar2 = 1;
  *param_1 = puVar8;
  param_1[1] = puVar6;
LAB_00bd330c:
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  param_1[2] = local_ac;
  return;
}

