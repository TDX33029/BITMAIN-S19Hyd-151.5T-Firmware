// FUN_0145dcf4 @ 0145dcf4 size=1396 calls_out=19 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_0145dcf4(int *param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 auStack_ab8 [64];
  undefined1 auStack_a78 [44];
  char local_a4c;
  byte local_a34;
  int local_a20;
  int local_a1c;
  undefined1 *local_a18;
  int iStack_a14;
  int iStack_a10;
  int local_a0c;
  int iStack_a08;
  undefined4 uStack_a04;
  int iStack_a00;
  undefined1 auStack_9b8 [92];
  int **local_95c;
  undefined4 local_958;
  int *local_954;
  undefined *local_950;
  undefined4 local_94c;
  int *local_948;
  undefined **local_944;
  int ***local_940;
  int iStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  int local_930;
  int local_92c;
  int *local_928;
  undefined **ppuStack_924;
  int ***local_920;
  int local_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined2 local_8e8;
  int *local_8d4;
  undefined *local_8d0;
  undefined1 auStack_898 [240];
  int *local_7a8;
  undefined **ppuStack_7a4;
  int ***pppiStack_7a0;
  int iStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined1 local_11c;
  int local_118;
  int *local_114;
  undefined **local_110;
  int ***local_10c;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 400)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a449c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a449c);
  case 3:
    iVar7 = *(int *)(param_2 + 0x188);
    puVar6 = *(undefined4 **)(param_2 + 0x18c);
    goto LAB_0145e0b8;
  }
  FUN_016dd1aa(auStack_ab8,param_2,0x98);
  if (local_a34 - 2 < 2) {
LAB_0145dd54:
    FUN_010c96f0(&local_118,auStack_a78,local_a4c == '\a');
    if (local_118 == 1) {
      local_928 = local_114;
      ppuStack_924 = local_110;
      local_920 = local_10c;
      local_91c = local_108;
      uStack_918 = uStack_104;
      uStack_914 = uStack_100;
      local_910 = uStack_fc;
      local_92c = 0;
      local_930 = 3;
      iVar7 = thunk_FUN_016d4a50(0x68);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x68);
      }
LAB_0145e090:
      FUN_016dd1aa(iVar7,&local_930,0x68);
      puVar6 = &DAT_018a4ae0;
      goto LAB_0145e0a8;
    }
    local_948 = local_114;
    local_944 = local_110;
    local_940 = local_10c;
    iStack_93c = local_108;
    uStack_938 = uStack_104;
    uStack_934 = uStack_100;
    FUN_01475d88(&local_118,param_2 + 0x98);
    FUN_016dd1aa(&local_930,auStack_ab8,0x98);
    local_7a8 = local_948;
    ppuStack_7a4 = local_944;
    pppiStack_7a0 = local_940;
    iStack_79c = iStack_93c;
    uStack_798 = uStack_938;
    uStack_794 = uStack_934;
    FUN_016dd1aa(auStack_898,&local_118,0xf0);
    local_11c = 0;
    iVar7 = thunk_FUN_016d4a50(0x818);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x818);
    }
    FUN_016dd1aa(iVar7,&local_930,0x818);
    puVar6 = (undefined4 *)&DAT_018a4af0;
  }
  else {
    if (local_a34 == 1) {
      if (local_a4c != '\a') goto LAB_0145dd54;
      if ((DAT_018d9130 < 4) && (DAT_018da910 != '\0')) {
        if (DAT_018da910 == '\x01') {
LAB_0145de54:
          DataMemoryBarrier(0xb);
          pcVar10 = s_SetGloba_00414c05;
          puVar1 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar10 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar7 = (**(code **)(puVar1 + 0x14))(pcVar10,DAT_018da908);
          if (iVar7 == 0) goto LAB_0145e060;
        }
        else if (DAT_018da910 != '\x02') {
          cVar2 = FUN_0169ac90(&DAT_018da908);
          if (cVar2 == '\0') goto LAB_0145e060;
          if (cVar2 != '\x02') goto LAB_0145de54;
        }
        local_91c = DAT_018da908;
        if (*(int *)(DAT_018da908 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a4ad0);
        }
        local_944 = &local_950;
        local_114 = *(int **)(DAT_018da908 + 0x20);
        local_110 = *(undefined ***)(DAT_018da908 + 0x24);
        local_10c = *(int ****)(DAT_018da908 + 0x28);
        local_954 = (int *)(DAT_018da908 + 0x1c);
        local_118 = *local_954;
        local_948 = &local_118;
        local_95c = &local_948;
        local_920 = &local_95c;
        local_108 = 0;
        local_958 = 1;
        local_940 = (int ***)&DAT_018abb78;
        local_94c = 0x47;
        local_950 = &DAT_00408868;
        local_92c = 0;
        local_930 = 1;
        DataMemoryBarrier(0xb);
        pcVar10 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar10 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar7 = (**(code **)(puVar1 + 0x28))(pcVar10,&local_930);
        if (iVar7 != 0) {
          (**(code **)(puVar1 + 0x2c))(pcVar10,&local_930);
        }
      }
LAB_0145e060:
      local_92c = 0;
      local_928 = (int *)0x0;
      local_930 = 3;
      local_910 = CONCAT31(local_910._1_3_,3);
      uStack_914._0_2_ = CONCAT11(2,(undefined1)uStack_914);
      iVar7 = thunk_FUN_016d4a50(0x68);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x68);
      }
      goto LAB_0145e090;
    }
    iVar7 = FUN_010c8790();
    puVar6 = (undefined4 *)&UNK_01885148;
LAB_0145e0a8:
    FUN_01475c70(auStack_ab8);
  }
  *(int *)(param_2 + 0x188) = iVar7;
  *(undefined4 **)(param_2 + 0x18c) = puVar6;
LAB_0145e0b8:
  (*(code *)puVar6[3])(&local_930,iVar7,param_3);
  if (local_930 == 4 && local_92c == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 400) = 3;
    return;
  }
  FUN_016dd1aa(&local_a20,&local_930,0x68);
  puVar6 = *(undefined4 **)(param_2 + 0x18c);
  uVar8 = *(undefined4 *)(param_2 + 0x188);
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar8);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  if (local_a20 == 3 && local_a1c == 0) {
    local_8d4 = (int *)0x0;
    if (uStack_a04._1_1_ != '\x03') {
      local_8d4 = (int *)thunk_FUN_016d4a50(0x1c);
      if (local_8d4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x1c);
      }
      *local_8d4 = (int)local_a18;
      local_8d4[1] = iStack_a14;
      local_8d4[2] = iStack_a10;
      local_8d4[3] = local_a0c;
      local_8d4[4] = iStack_a08;
      local_8d4[5] = uStack_a04;
      local_8d4[6] = iStack_a00;
    }
    local_8e8 = 1;
    local_930 = 2;
    local_8d0 = &DAT_018a50cc;
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(100);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
    piVar5 = &local_930;
    uVar8 = 100;
    puVar9 = puVar3;
  }
  else {
    piVar5 = &iStack_a14;
    puVar3 = auStack_9b8;
    uVar8 = 0x5c;
    puVar9 = local_a18;
  }
  FUN_016dd1aa(puVar3,piVar5,uVar8);
  FUN_0145cd58(param_2 + 0x98);
  *param_1 = local_a20;
  param_1[1] = local_a1c;
  param_1[2] = (int)puVar9;
  FUN_016dd1aa(param_1 + 3,auStack_9b8,0x5c);
  *(undefined1 *)(param_2 + 400) = 1;
  return;
}

