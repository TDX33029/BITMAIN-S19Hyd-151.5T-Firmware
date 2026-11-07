// FUN_01371064 @ 01371064 size=1556 calls_out=10 calls_in=2
// strings: must call 'start_pattern' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state | must call 'start_pattern' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state

void FUN_01371064(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  int unaff_r9;
  undefined8 uVar13;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 1:
    if (param_3 != 0) goto switchD_0137108c_caseD_2;
    break;
  case 2:
switchD_0137108c_caseD_2:
    FUN_013717fc(param_1,param_2,param_6);
    return;
  }
  if (param_4 == 0) {
    piVar12 = (int *)0x0;
    iVar2 = *(int *)(param_2 + 0x20);
  }
  else {
    uVar13 = FUN_011e1508(param_4,param_5);
    unaff_r9 = (int)((ulonglong)uVar13 >> 0x20);
    piVar12 = (int *)uVar13;
    iVar2 = *(int *)(param_2 + 0x20);
  }
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018928f0);
  }
  piVar7 = (int *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("must call \'start_pattern\' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state"
                 ,0x1f,&DAT_01893870);
  }
  if (param_3 < 0x7fffffff) {
    uVar4 = *(uint *)(param_2 + 0x28);
    uVar11 = *(uint *)(param_2 + 0x54);
    if (uVar11 <= uVar4) {
      uVar8 = uVar4 - uVar11;
      iVar2 = uVar11 * 0xc;
      uVar9 = 0;
      do {
        local_60 = 0;
        local_68 = 0;
        local_64 = 4;
        if (uVar11 == *(uint *)(param_2 + 0x4c)) {
          FUN_013c402c((uint *)(param_2 + 0x4c));
        }
        uVar11 = uVar11 + 1;
        *(uint *)(param_2 + 0x54) = uVar11;
        piVar5 = (int *)(*(int *)(param_2 + 0x50) + iVar2);
        *piVar5 = local_68;
        piVar5[1] = local_64;
        piVar5[2] = local_60;
        if (uVar8 <= uVar9) break;
        uVar9 = uVar9 + (uVar9 < uVar8);
        iVar2 = iVar2 + 0xc;
      } while (uVar9 <= uVar8);
    }
    if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar11,&DAT_01893860);
    }
    iVar2 = *(int *)(param_2 + 0x50);
    puVar10 = (uint *)(iVar2 + uVar4 * 0xc);
    uVar11 = puVar10[2];
    if (param_3 < uVar11) {
      uVar11 = *(uint *)(param_2 + 0x3c);
      local_5c = 0;
      local_68 = 4;
      local_64 = uVar4;
      local_60 = param_3;
      if (uVar11 == *(uint *)(param_2 + 0x34)) {
        FUN_013c40f0();
      }
      *(uint *)(param_2 + 0x3c) = uVar11 + 1;
      puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + uVar11 * 0x10);
      *puVar6 = 4;
      iVar2 = 0x2a;
      puVar6[3] = 0;
      puVar6[1] = uVar4;
      puVar6[2] = param_3;
      if ((*(int *)(param_2 + 0x2c) == 1) &&
         (*(uint *)(param_2 + 0x30) < *(int *)(param_2 + 0x58) + (uVar11 + 1) * 0x10)) {
        iVar2 = 0x27;
        uVar11 = *(uint *)(param_2 + 0x30);
      }
      if (piVar12 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar12;
          bVar1 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar1);
        *piVar12 = iVar3 + -1;
        if (iVar3 == 1) goto LAB_013712a4;
      }
      goto LAB_013712b4;
    }
    while (param_3 != uVar11) {
      if (uVar11 == *puVar10) {
        FUN_013c3fcc(puVar10);
      }
      *(undefined4 *)(puVar10[1] + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
      puVar10[2] = uVar11;
    }
    puVar10 = (uint *)(iVar2 + uVar4 * 0xc);
    if (param_3 == *puVar10) {
      FUN_013c3fcc(puVar10);
    }
    uVar11 = *(uint *)(param_2 + 0x3c);
    piVar5 = (int *)(puVar10[1] + param_3 * 8);
    *piVar5 = (int)piVar12;
    piVar5[1] = unaff_r9;
    puVar10[2] = param_3 + 1;
    local_5c = 0;
    local_68 = 4;
    local_64 = uVar4;
    local_60 = param_3;
    if (uVar11 == *(uint *)(param_2 + 0x34)) {
      FUN_013c40f0();
    }
    *(uint *)(param_2 + 0x3c) = uVar11 + 1;
    puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + uVar11 * 0x10);
    *puVar6 = 4;
    puVar6[3] = 0;
    puVar6[1] = uVar4;
    puVar6[2] = param_3;
    if (*(int *)(param_2 + 0x2c) == 1) {
      iVar2 = 0x27;
      uVar4 = *(uint *)(param_2 + 0x30);
      if (uVar4 < *(int *)(param_2 + 0x58) + (uVar11 + 1) * 0x10) goto LAB_013713c4;
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  }
  else {
    if (piVar12 == (int *)0x0) {
      iVar2 = 0x28;
      iVar3 = 0;
      goto LAB_013713dc;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar3 + -1;
    iVar2 = 0x28;
    uVar11 = param_3;
    if (iVar3 != 1) {
      uVar4 = param_3;
LAB_013713c4:
      iVar3 = *(int *)(param_2 + 0x20) + 1;
      param_3 = uVar4;
LAB_013713dc:
      *(int *)(param_2 + 0x20) = iVar3;
      *param_1 = iVar2;
      param_1[1] = param_3;
      return;
    }
LAB_013712a4:
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar12,unaff_r9);
LAB_013712b4:
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    if (iVar2 != 0x2a) {
      *param_1 = iVar2;
      param_1[1] = uVar11;
      return;
    }
  }
  FUN_013717fc(&local_68,param_2,param_6);
  uVar9 = local_60;
  uVar4 = local_64;
  if (local_68 != 0x2a) {
    param_1[3] = local_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = local_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    return;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892870);
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*(int *)(param_2 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("must call \'start_pattern\' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state"
                 ,0x1f,&DAT_01893870);
  }
  if (0x7ffffffe < param_3) {
    *param_1 = 0x28;
    param_1[1] = param_3;
    *(undefined4 *)(param_2 + 0x20) = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 0x3c);
  local_5c = 0;
  local_68 = 5;
  local_64 = iVar2;
  local_60 = param_3;
  if (iVar3 == *(int *)(param_2 + 0x34)) {
    FUN_013c40f0((int *)(param_2 + 0x34));
  }
  *(int *)(param_2 + 0x3c) = iVar3 + 1;
  puVar6 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar3 * 0x10);
  *puVar6 = 5;
  puVar6[1] = iVar2;
  puVar6[2] = param_3;
  puVar6[3] = 0;
  if ((*(int *)(param_2 + 0x2c) == 1) &&
     (uVar8 = *(uint *)(param_2 + 0x30),
     uVar8 < (uint)(*(int *)(param_2 + 0x58) + (iVar3 + 1) * 0x10))) {
    iVar2 = *(int *)(param_2 + 0x20);
    *param_1 = 0x27;
    param_1[1] = uVar8;
    *(int *)(param_2 + 0x20) = iVar2 + 1;
    return;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  *(int *)(param_2 + 0x20) = iVar2 + 1;
  if (iVar2 != -1) {
LAB_01371670:
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892940);
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  FUN_013b6288(&local_68,piVar7,uVar11,uVar4);
  iVar2 = *(int *)(param_2 + 0x20) + 1;
  *(int *)(param_2 + 0x20) = iVar2;
  if (local_68 == 0x2a) {
    if (iVar2 != 0) goto LAB_01371670;
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_68,piVar7,uVar9,iVar3);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    if (local_68 == 0x2a) {
      *param_1 = 0x2a;
      param_1[1] = uVar11;
      param_1[2] = iVar3;
      return;
    }
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  param_1[3] = local_5c;
  param_1[4] = iStack_58;
  param_1[5] = local_54;
  param_1[6] = iStack_50;
  param_1[7] = local_4c;
  param_1[8] = iStack_48;
  param_1[9] = iStack_44;
  param_1[10] = local_40;
  param_1[0xb] = local_3c;
  param_1[0xc] = iStack_38;
  param_1[0xd] = iStack_34;
  param_1[0xe] = iStack_30;
  param_1[0xf] = iStack_2c;
  return;
}

