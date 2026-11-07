// FUN_00616e00 @ 00616e00 size=564 calls_out=8 calls_in=2
// strings: background task failed

void FUN_00616e00(uint *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  int local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  int local_7c;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xc]) {
  case '\0':
    iVar3 = *param_2;
    param_2[2] = iVar3;
    param_2[3] = param_2[1];
    FUN_019afae4(&local_a8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    FUN_019afae4(&local_98,*(undefined4 *)(param_2[3] + 4),*(undefined4 *)(param_2[3] + 8));
    local_40 = local_a8;
    local_3c = uStack_a4;
    local_38 = iStack_a0;
    local_34 = local_98;
    uStack_30 = uStack_94;
    uStack_2c = uStack_90;
    local_88 = local_a8;
    uStack_84 = uStack_a4;
    iStack_80 = iStack_a0;
    local_7c = local_98;
    uStack_78 = uStack_94;
    uStack_74 = uStack_90;
    param_2[4] = local_a8;
    param_2[5] = uStack_a4;
    param_2[6] = iStack_a0;
    param_2[7] = local_98;
    param_2[8] = uStack_94;
    param_2[9] = uStack_90;
    param_2[10] = iStack_70;
    *(undefined1 *)(param_2 + 0xb) = 0;
switchD_00616ed8_caseD_0:
    local_68 = param_2[4];
    iStack_64 = param_2[5];
    iStack_60 = param_2[6];
    iStack_5c = param_2[7];
    iStack_58 = param_2[8];
    iStack_54 = param_2[9];
    iVar3 = FUN_00748514(&local_68,&DAT_01c230d0);
    param_2[10] = iVar3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c204ac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c204ac);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xb]) {
    case '\0':
      goto switchD_00616ed8_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case '\x03':
      iVar3 = param_2[10];
    }
  }
  FUN_014b4c40(&local_40,iVar3,param_3);
  if ((local_40 & 1) == 0) {
    local_50 = local_38;
    local_4c = local_34;
    local_48 = uStack_30;
    local_44 = uStack_2c;
    piVar4 = (int *)param_2[10];
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00616f88;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00616f88:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_50 == 0 && local_4c == 0) {
      uVar5 = local_48;
      uVar6 = local_44;
    }
    else {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      uVar6 = local_3c;
      uVar5 = local_40;
      FUN_005f3800(&local_50);
    }
    *param_1 = uVar5;
    *(undefined1 *)(param_2 + 0xb) = 1;
    param_1[1] = uVar6;
    if ((uVar5 & 0xff) != 5) {
      FUN_00b6bb40(param_2 + 4);
      uVar2 = 1;
      goto LAB_00617010;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xb) = 3;
  }
  *(undefined1 *)param_1 = 5;
  uVar2 = 3;
LAB_00617010:
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  return;
}

