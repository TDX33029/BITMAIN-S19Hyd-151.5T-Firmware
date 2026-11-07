// FUN_00616738 @ 00616738 size=400 calls_out=9 calls_in=4
// strings: 

undefined4 FUN_00616738(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    iVar2 = param_1[4];
    uVar5 = 0;
    uVar4 = *param_1;
    iVar6 = param_1[1];
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[2] = iVar2;
    FUN_019afae4(&local_60,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    iVar2 = 1;
    *(undefined1 *)(param_1 + 5) = 1;
    if (iVar6 < 0) {
LAB_006167a4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar6);
    }
    iVar7 = 0;
    if (iVar6 != 0) {
      uVar5 = 1;
      iVar2 = FUN_01298504(iVar6,1);
      if (iVar2 == 0) goto LAB_006167a4;
      iVar7 = iVar6;
    }
    FUN_01bed4e2(iVar2,uVar4,iVar6);
    *(undefined1 *)(param_1 + 5) = 0;
    local_50 = local_60;
    uStack_4c = uStack_5c;
    local_48 = uStack_58;
    local_44 = iVar7;
    local_40 = iVar2;
    local_3c = iVar6;
    uVar4 = FUN_00631a34(&local_50,&DAT_01c20394);
    param_1[3] = uVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c203a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c203a4);
  }
  FUN_00f6119c(&local_50,param_1 + 3,param_2);
  if ((local_50 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x15) = 3;
    return 1;
  }
  local_38 = local_48;
  iStack_34 = local_44;
  iStack_30 = local_40;
  iStack_2c = local_3c;
  piVar3 = (int *)param_1[3];
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *piVar3 = 0x84;
      goto LAB_006168a0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar3[2] + 0x10))();
LAB_006168a0:
  FUN_00ead84c(&local_38,&DAT_00400ddb);
  *(undefined2 *)(param_1 + 5) = 0x100;
  return 0;
}

