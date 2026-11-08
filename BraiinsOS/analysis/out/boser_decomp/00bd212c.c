// FUN_00bd212c @ 00bd212c size=368 calls_out=7 calls_in=1
// strings: BUG: config conversion ta

void FUN_00bd212c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_374 [84];
  int local_320;
  int local_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  undefined1 auStack_308 [360];
  undefined1 auStack_1a0 [360];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
    FUN_00bd2cf0(auStack_374,*param_2);
    uVar3 = FUN_00631738(auStack_374,&DAT_01c1f1d0);
    param_2[1] = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f1e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f1e0);
  }
  piVar5 = param_2 + 1;
  FUN_00f610ac(&local_320,piVar5,param_3);
  if (local_320 == 4 && local_31c == 0) {
    local_31c = 0;
    local_320 = 3;
    uVar2 = 3;
    goto LAB_00bd2250;
  }
  local_38 = local_318;
  iStack_34 = iStack_314;
  iStack_30 = iStack_310;
  iStack_2c = iStack_30c;
  FUN_01bed4e2(auStack_1a0,auStack_308,0x168);
  piVar4 = (int *)*piVar5;
  if (*piVar4 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar1) goto LAB_00bd2214;
    *piVar4 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00bd2214:
    (**(code **)(*(int *)(*piVar5 + 8) + 0x10))();
  }
  if (local_320 == 3 && local_31c == 0) {
    local_320 = local_38;
    local_31c = iStack_34;
    local_318 = iStack_30;
    iStack_314 = iStack_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: config conversion ta",0x28,&local_320,&DAT_01c1409c,&DAT_01c1f1f0);
  }
  param_1[2] = local_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = iStack_2c;
  FUN_01bed4e2(param_1 + 6,auStack_1a0,0x168);
  uVar2 = 1;
LAB_00bd2250:
  *(undefined1 *)(param_2 + 2) = uVar2;
  *param_1 = local_320;
  param_1[1] = local_31c;
  return;
}

