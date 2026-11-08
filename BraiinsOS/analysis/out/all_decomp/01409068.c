// FUN_01409068 @ 01409068 size=1396 calls_out=18 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_01409068(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 auStack_a40 [64];
  undefined1 auStack_a00 [44];
  char local_9d4;
  byte local_9bc;
  int local_9a8;
  int local_9a4;
  undefined1 *local_9a0;
  int iStack_99c;
  int iStack_998;
  int local_994;
  int iStack_990;
  undefined4 uStack_98c;
  int iStack_988;
  undefined1 auStack_940 [92];
  int **local_8e4;
  undefined4 local_8e0;
  int *local_8dc;
  undefined *local_8d8;
  undefined4 local_8d4;
  int *local_8d0;
  undefined **local_8cc;
  int ***local_8c8;
  int iStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  int local_8b8;
  int local_8b4;
  int *local_8b0;
  undefined **ppuStack_8ac;
  int ***local_8a8;
  int local_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 local_898;
  undefined2 local_870;
  int *local_85c;
  undefined *local_858;
  undefined1 auStack_820 [216];
  int *local_748;
  undefined **ppuStack_744;
  int ***pppiStack_740;
  int iStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined1 local_104;
  int local_100;
  int *local_fc;
  undefined **local_f8;
  int ***local_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x178)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a36bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a36bc);
  case 3:
    iVar7 = *(int *)(param_2 + 0x170);
    puVar5 = *(undefined **)(param_2 + 0x174);
    goto LAB_0140942c;
  }
  FUN_016dd1aa(auStack_a40,param_2,0x98);
  if (local_9bc - 2 < 2) {
LAB_014090c8:
    FUN_010c96f0(&local_100,auStack_a00,local_9d4 == '\a');
    if (local_100 == 1) {
      local_8b0 = local_fc;
      ppuStack_8ac = local_f8;
      local_8a8 = local_f4;
      local_8a4 = local_f0;
      uStack_8a0 = uStack_ec;
      uStack_89c = uStack_e8;
      local_898 = uStack_e4;
      local_8b4 = 0;
      local_8b8 = 3;
      iVar7 = thunk_FUN_016d4a50(0x68);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x68);
      }
LAB_01409404:
      FUN_016dd1aa(iVar7,&local_8b8,0x68);
      puVar5 = &DAT_018a3c88;
      goto LAB_0140941c;
    }
    local_8d0 = local_fc;
    local_8cc = local_f8;
    local_8c8 = local_f4;
    iStack_8c4 = local_f0;
    uStack_8c0 = uStack_ec;
    uStack_8bc = uStack_e8;
    FUN_0142c098(&local_100,param_2 + 0x98);
    FUN_016dd1aa(&local_8b8,auStack_a40,0x98);
    local_748 = local_8d0;
    ppuStack_744 = local_8cc;
    pppiStack_740 = local_8c8;
    iStack_73c = iStack_8c4;
    uStack_738 = uStack_8c0;
    uStack_734 = uStack_8bc;
    FUN_016dd1aa(auStack_820,&local_100,0xd8);
    local_104 = 0;
    iVar7 = thunk_FUN_016d4a50(0x7b8);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x7b8);
    }
    FUN_016dd1aa(iVar7,&local_8b8,0x7b8);
    puVar5 = &DAT_018a3c98;
  }
  else {
    if (local_9bc == 1) {
      if (local_9d4 != '\a') goto LAB_014090c8;
      if ((DAT_018d9130 < 4) && (DAT_018da910 != '\0')) {
        if (DAT_018da910 == '\x01') {
LAB_014091c8:
          DataMemoryBarrier(0xb);
          pcVar10 = s_SetGloba_00414c05;
          puVar5 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar10 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar7 = (**(code **)(puVar5 + 0x14))(pcVar10,DAT_018da908);
          if (iVar7 == 0) goto LAB_014093d4;
        }
        else if (DAT_018da910 != '\x02') {
          cVar1 = FUN_0169ac90(&DAT_018da908);
          if (cVar1 == '\0') goto LAB_014093d4;
          if (cVar1 != '\x02') goto LAB_014091c8;
        }
        local_8a4 = DAT_018da908;
        if (*(int *)(DAT_018da908 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a4ad0);
        }
        local_8cc = &local_8d8;
        local_fc = *(int **)(DAT_018da908 + 0x20);
        local_f8 = *(undefined ***)(DAT_018da908 + 0x24);
        local_f4 = *(int ****)(DAT_018da908 + 0x28);
        local_8dc = (int *)(DAT_018da908 + 0x1c);
        local_100 = *local_8dc;
        local_8d0 = &local_100;
        local_8e4 = &local_8d0;
        local_8a8 = &local_8e4;
        local_f0 = 0;
        local_8e0 = 1;
        local_8c8 = (int ***)&DAT_018abb78;
        local_8d4 = 0x47;
        local_8d8 = &DAT_00408868;
        local_8b4 = 0;
        local_8b8 = 1;
        DataMemoryBarrier(0xb);
        pcVar10 = s_SetGloba_00414c05;
        puVar5 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar10 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar7 = (**(code **)(puVar5 + 0x28))(pcVar10,&local_8b8);
        if (iVar7 != 0) {
          (**(code **)(puVar5 + 0x2c))(pcVar10,&local_8b8);
        }
      }
LAB_014093d4:
      local_8b4 = 0;
      local_8b0 = (int *)0x0;
      local_8b8 = 3;
      local_898 = CONCAT31(local_898._1_3_,3);
      uStack_89c._0_2_ = CONCAT11(2,(undefined1)uStack_89c);
      iVar7 = thunk_FUN_016d4a50(0x68);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x68);
      }
      goto LAB_01409404;
    }
    iVar7 = FUN_010c8790();
    puVar5 = &UNK_01885148;
LAB_0140941c:
    FUN_0142bf80(auStack_a40);
  }
  *(int *)(param_2 + 0x170) = iVar7;
  *(undefined **)(param_2 + 0x174) = puVar5;
LAB_0140942c:
  (**(code **)(puVar5 + 0xc))(&local_8b8,iVar7,param_3);
  if (local_8b8 == 4 && local_8b4 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 0x178) = 3;
    return;
  }
  FUN_016dd1aa(&local_9a8,&local_8b8,0x68);
  puVar6 = *(undefined4 **)(param_2 + 0x174);
  uVar8 = *(undefined4 *)(param_2 + 0x170);
  pcVar3 = (code *)*puVar6;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar8);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (local_9a8 == 3 && local_9a4 == 0) {
    local_85c = (int *)0x0;
    if (uStack_98c._1_1_ != '\x03') {
      local_85c = (int *)thunk_FUN_016d4a50(0x1c);
      if (local_85c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x1c);
      }
      *local_85c = (int)local_9a0;
      local_85c[1] = iStack_99c;
      local_85c[2] = iStack_998;
      local_85c[3] = local_994;
      local_85c[4] = iStack_990;
      local_85c[5] = uStack_98c;
      local_85c[6] = iStack_988;
    }
    local_870 = 1;
    local_8b8 = 2;
    local_858 = &DAT_018a404c;
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(100);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
    piVar4 = &local_8b8;
    uVar8 = 100;
    puVar9 = puVar2;
  }
  else {
    piVar4 = &iStack_99c;
    puVar2 = auStack_940;
    uVar8 = 0x5c;
    puVar9 = local_9a0;
  }
  FUN_016dd1aa(puVar2,piVar4,uVar8);
  FUN_014084a0(param_2 + 0x98);
  *param_1 = local_9a8;
  param_1[1] = local_9a4;
  param_1[2] = (int)puVar9;
  FUN_016dd1aa(param_1 + 3,auStack_940,0x5c);
  *(undefined1 *)(param_2 + 0x178) = 1;
  return;
}

