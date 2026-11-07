// FUN_00b37b14 @ 00b37b14 size=1608 calls_out=19 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined8 FUN_00b37b14(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *piVar24;
  char *pcVar25;
  undefined *puVar26;
  ulonglong uVar27;
  undefined1 auStack_7d8 [928];
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  int ****local_428;
  int local_424;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [72];
  int *local_98;
  code *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int ***local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  int **local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined *local_34;
  int **local_30;
  int *local_2c;
  code *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x77c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x77f) = 0x1010101;
    *(undefined2 *)(param_1 + 0x783) = 0x101;
    *(undefined1 *)(param_1 + 0x788) = 0;
    FUN_016dd1aa(param_1 + 0x3c8,param_1,0x398);
    *(undefined1 *)(param_1 + 0x77e) = 1;
    *(undefined1 *)(param_1 + 0x787) = 0;
    uVar8 = *(undefined4 *)(param_1 + 0x398);
    uVar12 = *(undefined4 *)(param_1 + 0x39c);
    uVar15 = *(undefined4 *)(param_1 + 0x3a0);
    uVar17 = *(undefined4 *)(param_1 + 0x3a4);
    uVar19 = *(undefined4 *)(param_1 + 0x3a8);
    uVar22 = *(undefined4 *)(param_1 + 0x3ac);
    uVar9 = *(undefined4 *)(param_1 + 0x3b0);
    uVar13 = *(undefined4 *)(param_1 + 0x3b4);
    uVar16 = *(undefined4 *)(param_1 + 0x3b8);
    uVar18 = *(undefined4 *)(param_1 + 0x3bc);
    uVar20 = *(undefined4 *)(param_1 + 0x3c0);
    uVar23 = *(undefined4 *)(param_1 + 0x3c4);
    uVar10 = *(undefined4 *)(param_1 + 0x764);
    uVar11 = *(undefined4 *)(param_1 + 0x768);
    uVar14 = *(undefined4 *)(param_1 + 0x76c);
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x760);
    piVar21 = *(int **)(param_1 + 0x6e8);
    *(undefined1 *)(param_1 + 0x77d) = 1;
    *(undefined1 *)(param_1 + 0x786) = 0;
    *(undefined1 *)(param_1 + 0x785) = 0;
    do {
      iVar6 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_00b38174;
    *(int **)(param_1 + 0x774) = piVar21;
    uVar4 = *(undefined4 *)(param_1 + 0x758);
    *(undefined1 *)(param_1 + 0x784) = 0;
    *(undefined1 *)(param_1 + 0x783) = 0;
    FUN_016dd1aa(&local_98,param_1 + 0x6f0,0x48);
    *(undefined1 *)(param_1 + 0x77d) = 0;
    piVar21 = *(int **)(*(int *)(param_1 + 0x770) + 0x50);
    do {
      iVar6 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_00b38174;
    *(undefined1 *)(param_1 + 0x77e) = 0;
    *(undefined1 *)(param_1 + 0x782) = 0;
    local_110 = uVar8;
    uStack_10c = uVar12;
    uStack_108 = uVar15;
    uStack_104 = uVar17;
    uStack_100 = uVar19;
    uStack_fc = uVar22;
    local_f8 = uVar9;
    uStack_f4 = uVar13;
    uStack_f0 = uVar16;
    uStack_ec = uVar18;
    uStack_e8 = uVar20;
    uStack_e4 = uVar23;
    FUN_016dd1aa(&local_438,param_1 + 0x3c8,0x328);
    uVar8 = *(undefined4 *)(param_1 + 0x738);
    uVar9 = *(undefined4 *)(param_1 + 0x750);
    uVar12 = *(undefined4 *)(param_1 + 0x754);
    *(undefined2 *)(param_1 + 0x77f) = 0;
    *(undefined1 *)(param_1 + 0x781) = 0;
    uVar13 = *(undefined4 *)(param_1 + 0x73c);
    FUN_016dd1aa(auStack_e0,&local_98,0x48);
    FUN_016dd1aa(auStack_7d8,&local_438,0x3a0);
    FUN_016dd1aa(param_1 + 0x790,auStack_7d8,0x3a0);
    *(undefined4 *)(param_1 + 0x1000) = uVar4;
    *(undefined4 *)(param_1 + 0x1004) = uVar10;
    *(int **)(param_1 + 0x1010) = piVar21;
    *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_1 + 0x740);
    *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_1 + 0x74c);
    *(undefined4 *)(param_1 + 0xb48) = uVar9;
    *(undefined4 *)(param_1 + 0x1008) = uVar11;
    *(undefined4 *)(param_1 + 0x100c) = uVar14;
    *(undefined4 *)(param_1 + 0xb4c) = uVar12;
    *(undefined4 *)(param_1 + 0xb30) = uVar8;
    *(undefined4 *)(param_1 + 0xb34) = uVar13;
    *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0x744);
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_1 + 0x748);
    *(undefined1 *)(param_1 + 0x1034) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870480);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870480);
  case 4:
    goto switchD_00b37b38_caseD_4;
  }
  piVar21 = (int *)(param_1 + 0x790);
  uVar27 = FUN_00b38fb8(piVar21,param_2);
  if ((uVar27 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x77c) = 3;
    return 1;
  }
  *(int *)(param_1 + 0x778) = (int)(uVar27 >> 0x20);
  FUN_00b3844c(piVar21);
  if (*(int *)(param_1 + 0x778) == 0) {
    piVar21 = *(int **)(param_1 + 0x774);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x774));
    }
    *(undefined1 *)(param_1 + 0x77d) = 0;
    piVar21 = *(int **)(param_1 + 0x770);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x770));
    }
    *(undefined4 *)(param_1 + 0x77f) = 0;
    *(undefined1 *)(param_1 + 0x77e) = 0;
    *(undefined2 *)(param_1 + 0x783) = 0;
    *(undefined1 *)(param_1 + 0x77c) = 1;
    return 0;
  }
  *piVar21 = *(int *)(param_1 + 0x778);
  if ((DAT_018d9130 < 5) && (DAT_018d9a94 != '\0')) {
    puVar26 = &DAT_018ae394;
    pcVar25 = s_SetGloba_00414c05;
    if (DAT_018d9a94 == '\x01') {
LAB_00b37e1c:
      DataMemoryBarrier(0xb);
      pcVar5 = pcVar25;
      if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar26 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar6 = (**(code **)(puVar26 + 0x14))(pcVar5,DAT_018d9a8c);
      if (iVar6 == 0) goto LAB_00b3804c;
    }
    else if (DAT_018d9a94 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d9a8c);
      if (cVar3 == '\0') goto LAB_00b3804c;
      if (cVar3 != '\x02') goto LAB_00b37e1c;
    }
    local_424 = DAT_018d9a8c;
    local_94 = *(code **)(DAT_018d9a8c + 0x20);
    if (local_94 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01870490);
    }
    local_3c = &local_34;
    local_8c = *(undefined4 *)(DAT_018d9a8c + 0x28);
    local_40 = &local_98;
    local_4c = &local_40;
    local_44 = (undefined4 *)(DAT_018d9a8c + 0x1c);
    local_98 = (int *)*local_44;
    local_88 = 0;
    local_90 = *(undefined4 *)(DAT_018d9a8c + 0x24);
    local_48 = 1;
    local_38 = &DAT_018abb78;
    local_30 = &local_2c;
    local_28 = FUN_00604528;
    local_438 = 1;
    local_428 = &local_4c;
    local_34 = &DAT_00414b9a;
    local_434 = 0;
    DataMemoryBarrier(0xb);
    puVar26 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar25 = DAT_018daa74, puVar26 = DAT_018daa78, DAT_018daa70 != 0))
    {
      pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_2c = piVar21;
    iVar6 = (**(code **)(puVar26 + 0x28))(pcVar25,&local_438);
    if (iVar6 != 0) {
      (**(code **)(puVar26 + 0x2c))(pcVar25,&local_438);
    }
  }
LAB_00b3804c:
  piVar24 = *(int **)(param_1 + 0x774);
  do {
    iVar6 = *piVar24;
    bVar2 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar2);
  *piVar24 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_00b38174:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xb38174);
    (*pcVar1)();
  }
  local_94 = FUN_00604528;
  local_98 = piVar21;
  FUN_00600d2c(&local_438,&DAT_00414b9a,&local_98);
  uVar9 = local_434;
  uVar8 = local_438;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  puVar7[4] = local_430;
  *puVar7 = 1;
  puVar7[1] = 1;
  puVar7[2] = uVar8;
  puVar7[3] = uVar9;
  *(undefined1 *)(param_1 + 0x7a4) = 0;
  *(int **)(param_1 + 0x79c) = piVar24;
  *(undefined1 *)(param_1 + 0x798) = 0;
  *(undefined4 **)(param_1 + 0x794) = puVar7;
switchD_00b37b38_caseD_4:
  uVar27 = FUN_00aef5ec(param_1 + 0x794,*param_2);
  if ((uVar27 & 1) == 0) {
    FUN_00654988(param_1 + 0x794);
    FUN_00b40190((int)(uVar27 >> 0x20));
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018704b0);
  }
  *(undefined1 *)(param_1 + 0x77c) = 4;
  return 1;
}

