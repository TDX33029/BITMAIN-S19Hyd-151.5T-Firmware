// FUN_0065e544 @ 0065e544 size=4116 calls_out=31 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_0065e544(undefined4 ***param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *****pppppuVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  undefined4 ***pppuVar9;
  int *piVar10;
  undefined4 ***pppuVar11;
  undefined1 uVar12;
  char cVar13;
  code *pcVar14;
  undefined4 *puVar15;
  int extraout_r3;
  undefined1 uVar16;
  undefined4 **ppuVar17;
  undefined *puVar18;
  uint uVar19;
  undefined4 **ppuVar20;
  char *pcVar21;
  undefined4 ****ppppuVar22;
  uint *puVar23;
  undefined4 *puVar24;
  undefined4 *****pppppuVar25;
  char cVar26;
  int *piVar27;
  undefined8 uVar28;
  int local_4e0;
  int local_4dc;
  undefined4 ***local_4c0;
  undefined4 ***local_4bc;
  undefined *local_4b0;
  undefined4 ****local_4ac;
  undefined4 *****local_4a8;
  undefined4 local_4a4;
  undefined4 *local_4a0;
  undefined4 **local_3e8;
  undefined4 **local_3e4;
  undefined1 local_3e0;
  undefined **local_3d8;
  undefined1 *local_3d4;
  undefined4 ****local_3d0;
  undefined **local_3cc;
  undefined *local_3c8;
  undefined4 ***local_2f8;
  undefined4 ****local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 *local_228;
  undefined4 *****local_220;
  undefined4 ***local_21c;
  undefined4 *****local_218;
  undefined4 *local_214;
  undefined4 *****local_210;
  undefined4 *local_20c;
  int *local_208;
  undefined4 *puStack_204;
  undefined4 *local_200;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [212];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_110;
  int local_10c;
  undefined4 ***local_100;
  code *local_fc;
  undefined4 **local_2c;
  undefined1 uStack_25;
  
  puVar24 = (undefined4 *)((uint)&local_220 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 9)) {
  case 0:
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_016383ec(&local_220,*param_1,&DAT_0185842c);
    if (local_220 == (undefined4 *****)&DAT_00000001) {
      local_2f4 = local_218;
      local_2f8 = local_21c;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: failed hooking signal",0x1a,&local_2f8,&DAT_01857dbc,&DAT_0185843c);
    }
    param_1[9] = local_218;
    pppuVar8 = param_1 + 8;
    *pppuVar8 = local_21c;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[3] = pppuVar8;
LAB_0065e604:
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[5] = pppuVar8;
    param_1[4] = pppuVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185844c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185844c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 7)) {
    case 0:
      pppuVar8 = (undefined4 ***)param_1[3];
      goto LAB_0065e604;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01857e2c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01857e2c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 6)) {
      case 0:
        pppuVar8 = (undefined4 ***)param_1[4];
        param_1[5] = pppuVar8;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01857e3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01857e3c);
      case 3:
        pppuVar8 = (undefined4 ***)param_1[5];
      }
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 7)) {
    case 0:
      goto switchD_0065e878_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876cfc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876cfc);
    case 3:
      pppuVar8 = (undefined4 ***)param_1[10];
      goto LAB_0065ef60;
    case 4:
    }
    goto LAB_0065f124;
  }
  cVar4 = FUN_0165244c(pppuVar8,param_2);
  uVar12 = 1;
  uVar6 = 1;
  if (cVar4 == '\x02') {
    uVar12 = 3;
  }
  *(undefined1 *)(param_1 + 7) = uVar12;
  uVar16 = 3;
  *(undefined1 *)(param_1 + 6) = uVar12;
  if (cVar4 == '\x02') goto LAB_0065f3f4;
  ppuVar17 = param_1[8];
  ppuVar20 = param_1[9];
  pcVar14 = (code *)*ppuVar20;
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(ppuVar17);
  }
  if (ppuVar20[1] != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(ppuVar17);
  }
  if ((DAT_018d9130 < 3) && (DAT_018d92e4 != '\0')) {
    if (DAT_018d92e4 == '\x01') {
LAB_0065e6e0:
      DataMemoryBarrier(0xb);
      puVar18 = &DAT_018ae394;
      pcVar21 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar21 = DAT_018daa74;
        puVar18 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar21 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar7 = (**(code **)(puVar18 + 0x14))(pcVar21,DAT_018d92dc);
      if (iVar7 == 0) goto LAB_0065e8ac;
    }
    else if (DAT_018d92e4 != '\x02') {
      cVar4 = FUN_0169ac90(&DAT_018d92dc);
      if (cVar4 == '\0') goto LAB_0065e8ac;
      if (cVar4 != '\x02') goto LAB_0065e6e0;
    }
    local_20c = DAT_018d92dc;
    local_2f4 = (undefined4 ****)DAT_018d92dc[8];
    if (local_2f4 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185845c);
    }
    uStack_2f0 = DAT_018d92dc[9];
    uStack_2ec = DAT_018d92dc[10];
    local_3cc = &local_4b0;
    local_4a0 = DAT_018d92dc + 7;
    local_2f8 = (undefined4 ***)*local_4a0;
    local_3d0 = &local_2f8;
    local_4a8 = &local_3d0;
    uStack_2e8 = 0;
    local_4ac = &local_100;
    local_4a4 = 1;
    local_3c8 = &DAT_018abb78;
    local_4b0 = &DAT_0058a87a;
    local_fc = FUN_0065fe48;
    local_21c = (undefined4 ***)0x0;
    local_220 = (undefined4 *****)&DAT_00000001;
    local_210 = &local_4a8;
    DataMemoryBarrier(0xb);
    pcVar21 = s_SetGloba_00414c05;
    puVar18 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar21 = DAT_018daa74;
      puVar18 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar21 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_100 = param_1;
    iVar7 = (**(code **)(puVar18 + 0x28))(pcVar21,&local_220);
    if (iVar7 != 0) {
      (**(code **)(puVar18 + 0x2c))(pcVar21,&local_220);
    }
  }
LAB_0065e8ac:
  *(undefined1 *)(param_1 + 2) = 0;
  ppuVar20 = param_1[1];
  local_2f4 = (undefined4 ****)FUN_0065fe48;
  local_2f8 = param_1;
  FUN_00600d2c(&local_220,&DAT_00590063,&local_2f8);
  pppuVar8 = local_21c;
  pppppuVar25 = local_220;
  ppuVar17 = (undefined4 **)thunk_FUN_016d4a50(0x14);
  if (ppuVar17 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  ppuVar17[3] = pppuVar8;
  ppuVar17[1] = (undefined4 *)0x1;
  ppuVar17[2] = pppppuVar25;
  *ppuVar17 = (undefined4 *)0x1;
  param_1[3] = ppuVar17;
  ppuVar17[4] = local_218;
  param_1[5] = ppuVar20;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
switchD_0065e878_caseD_0:
  ppuVar17 = param_1[5];
  pppppuVar25 = (undefined4 *****)param_1[3];
  *(undefined4 *)((int)param_1 + 0x1d) = 0x1010000;
  uVar12 = *(undefined1 *)(param_1 + 4);
  local_218 = (undefined4 *****)thunk_FUN_016d4a50(8);
  if (local_218 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *(undefined1 *)(local_218 + 1) = 0;
  *local_218 = (undefined4 ****)0x0;
  local_200 = (undefined4 *)0x0;
  local_208 = (undefined4 *)0x0;
  local_20c = (undefined4 *)&DAT_00000001;
  local_210 = (undefined4 *****)&DAT_80000000;
  local_21c = (undefined4 ***)0x1;
  local_220 = (undefined4 *****)0x1;
  local_214 = local_218;
  ppuVar20 = (undefined4 **)thunk_FUN_016d4a50(0x24);
  if (ppuVar20 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  *ppuVar20 = local_220;
  ppuVar20[1] = local_21c;
  ppuVar20[2] = local_218;
  ppuVar20[3] = local_214;
  ppuVar20[4] = local_210;
  ppuVar20[5] = local_20c;
  ppuVar20[6] = local_208;
  ppuVar20[7] = puStack_204;
  ppuVar20[8] = local_200;
  do {
    puVar15 = *ppuVar20;
    bVar1 = (bool)hasExclusiveAccess(ppuVar20);
  } while (!bVar1);
  *ppuVar20 = (undefined4 *)((int)puVar15 + 1);
  if ((int)puVar15 < 0) {
LAB_0065f5e4:
                    /* WARNING: Does not return */
    pcVar14 = (code *)software_udf(0xfdee,0x65f5e4);
    (*pcVar14)();
  }
  pppuVar8 = param_1 + 6;
  *pppuVar8 = ppuVar20;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  do {
    do {
      local_4b0 = DAT_018d9200;
      local_4ac = DAT_018d9204;
      puVar18 = DAT_018d9200 + 1;
      ppppuVar22 = (undefined4 ****)
                   ((int)DAT_018d9204 + (uint)((undefined *)0xfffffffe < DAT_018d9200));
      bVar1 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar1);
    bVar1 = DAT_018d9200 == (undefined *)0x0;
    bVar2 = DAT_018d9204 == (undefined4 ****)0x0;
    DAT_018d9200 = puVar18;
    DAT_018d9204 = ppppuVar22;
  } while (bVar1 && bVar2);
  local_3d4 = &uStack_25;
  local_3d8 = &local_4b0;
  local_3e0 = 0;
  local_3e8 = ppuVar17;
  local_3e4 = ppuVar20;
  uVar28 = thunk_FUN_016de0ee(ppuVar20,0x40);
  puVar23 = (uint *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
  local_4a4 = CONCAT31(local_4a4._1_3_,uVar12);
  local_4a8 = pppppuVar25;
  if ((char)puVar23[0xe] != '\x01') {
    if ((char)puVar23[0xe] == '\x02') {
      uVar12 = 1;
      FUN_00767244(&local_4a8);
      goto LAB_0065ea88;
    }
    FUN_015e8e6c(puVar23,FUN_009948a0);
    *(undefined1 *)(puVar23 + 0xe) = 1;
  }
  FUN_016dd1aa(&local_3d0,&local_4a8,0xd8);
  if (0x7ffffffe < *puVar23) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_0065f5e4;
  }
  *puVar23 = *puVar23 + 1;
  uVar19 = puVar23[1];
  FUN_016dd1aa(&local_2f8,&local_4a8,0xd8);
  if (uVar19 == 2) {
    FUN_00767244(&local_2f8);
    uVar12 = 0;
    *puVar23 = *puVar23 - 1;
LAB_0065ea88:
    local_2f8 = (undefined4 ***)CONCAT31(local_2f8._1_3_,uVar12);
    local_21c = (undefined4 ***)&LAB_0164eda0;
    local_220 = (undefined4 *****)&local_2f8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_220,&DAT_01876cec);
  }
  ppppuVar22 = (undefined4 ****)*local_228;
  pppuVar9 = (undefined4 ***)local_228[1];
  if ((uVar19 & 1) == 0) {
    piVar27 = (int *)puVar23[2];
    do {
      iVar7 = *piVar27;
      bVar1 = (bool)hasExclusiveAccess(piVar27);
    } while (!bVar1);
    *piVar27 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_0065f5e4;
    piVar10 = (int *)piVar27[0x8e];
    if (piVar10 == (int *)0x0) {
      local_4dc = 0;
    }
    else {
      do {
        iVar7 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_0065f5e4;
      local_4dc = piVar27[0x8e];
      local_4e0 = piVar27[0x8f];
    }
    FUN_016dd1aa((uint)&local_100 | 4,&local_4a8,0xd0);
    local_218 = (undefined4 *****)&PTR_LAB_0185811c;
    local_220 = (undefined4 *****)0xcc;
    puVar24[4] = ppppuVar22;
    puVar24[5] = pppuVar9;
    *puVar24 = 0;
    puVar24[1] = 0;
    local_21c = (undefined4 ***)0x0;
    local_1f8 = 0;
    local_208 = piVar27;
    FUN_016dd1aa(auStack_1f4,&local_100,0xd4);
    local_10c = local_4e0;
    local_110 = local_4dc;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_2c = (undefined4 **)0x0;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0x120);
    ppuVar17 = local_2c;
    if ((iVar7 != 0) || (local_2c == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x120);
    }
    FUN_016dd1aa(local_2c,&local_220,0x120);
    iVar7 = FUN_0072c788(piVar27 + 0x40,ppuVar17,ppuVar17);
    local_220 = (undefined4 *****)ppppuVar22;
    local_21c = pppuVar9;
    if (piVar27[0x8c] != 0) {
      (**(code **)(piVar27[0x8d] + 0x14))
                (piVar27[0x8c] + (*(int *)(piVar27[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_220);
    }
    if (iVar7 != 0) {
      FUN_01659ec0(puVar23[2],iVar7);
    }
  }
  else {
    piVar27 = (int *)puVar23[2];
    do {
      iVar7 = *piVar27;
      bVar1 = (bool)hasExclusiveAccess(piVar27);
    } while (!bVar1);
    *piVar27 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_0065f5e4;
    piVar10 = (int *)piVar27[0x5c];
    if (piVar10 == (int *)0x0) {
      local_4dc = 0;
    }
    else {
      do {
        iVar7 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_0065f5e4;
      local_4dc = piVar27[0x5c];
      local_4e0 = piVar27[0x5d];
    }
    FUN_016dd1aa((uint)&local_100 | 4,&local_4a8,0xd0);
    local_218 = (undefined4 *****)&PTR_LAB_018581e4;
    local_220 = (undefined4 *****)0xcc;
    puVar24[4] = ppppuVar22;
    puVar24[5] = pppuVar9;
    *puVar24 = 0;
    puVar24[1] = 0;
    local_21c = (undefined4 ***)0x0;
    local_1f8 = 0;
    local_208 = piVar27;
    FUN_016dd1aa(auStack_1f4,&local_100,0xd4);
    local_10c = local_4e0;
    local_110 = local_4dc;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_2c = (undefined4 **)0x0;
    iVar7 = FUN_016d51b0(&local_2c,0x20,0x120);
    ppuVar17 = local_2c;
    if ((iVar7 != 0) || (local_2c == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x120);
    }
    FUN_016dd1aa(local_2c,&local_220,0x120);
    pppuVar11 = (undefined4 ***)FUN_0072c788(piVar27 + 0x14,ppuVar17,ppuVar17);
    local_220 = (undefined4 *****)ppppuVar22;
    local_21c = pppuVar9;
    if (piVar27[0x5a] != 0) {
      (**(code **)(piVar27[0x5b] + 0x14))
                (piVar27[0x5a] + (*(int *)(piVar27[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_220);
    }
    if (pppuVar11 != (undefined4 ***)0x0) {
      local_100 = (undefined4 ***)((uint)local_100 & 0xffffff00);
      local_218 = (undefined4 *****)&local_100;
      local_220 = (undefined4 *****)(piVar27 + 2);
      local_21c = pppuVar11;
      FUN_0164511c(&local_220);
    }
  }
  uVar19 = *puVar23;
  param_1[9] = ppuVar17;
  *puVar23 = uVar19 - 1;
  param_1[10] = pppuVar8;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
LAB_0065ef60:
  piVar27 = (int *)*param_2;
  bVar5 = FUN_00cefe20();
  if (bVar5 == 2) {
    ppuVar17 = *pppuVar8;
    if (ppuVar17 == (undefined4 **)0x0) {
      puVar18 = &DAT_0187be18;
      goto LAB_0065f4c4;
    }
    ppuVar20 = ppuVar17 + 8;
    do {
      puVar24 = *ppuVar20;
      if (puVar24 != (undefined4 *)0x0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (puVar24 != (undefined4 *)0x2) goto LAB_0065efb4;
        puVar15 = (undefined4 *)piVar27[1];
        puVar24 = (undefined4 *)(*piVar27 + 8);
        goto LAB_0065f0f0;
      }
      bVar1 = (bool)hasExclusiveAccess(ppuVar20);
    } while (!bVar1);
    *ppuVar20 = (undefined4 *)0x1;
    DataMemoryBarrier(0xb);
LAB_0065efb4:
    if (puVar24 == (undefined4 *)0x0) {
      if (ppuVar17[6] == (undefined4 *)0x0) {
        puVar24 = (undefined4 *)piVar27[1];
LAB_0065f058:
        uVar28 = (**(code **)*piVar27)(puVar24);
        if (ppuVar17[6] != (undefined4 *)0x0) {
          (*(code *)ppuVar17[6][3])(ppuVar17[7]);
        }
        *(undefined8 *)(ppuVar17 + 6) = uVar28;
      }
      else {
        puVar24 = (undefined4 *)piVar27[1];
        if (ppuVar17[7] != puVar24 || ppuVar17[6] != (undefined4 *)*piVar27) goto LAB_0065f058;
      }
      if (*ppuVar20 == (undefined4 *)0x1) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(ppuVar20);
          if (bVar1) {
            *ppuVar20 = (undefined4 *)0x0;
            DataMemoryBarrier(0xb);
            goto LAB_0065f0fc;
          }
        } while (*ppuVar20 == (undefined4 *)0x1);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      puVar24 = ppuVar17[6];
      puVar15 = ppuVar17[7];
      ppuVar17[6] = (undefined4 *)0x0;
      if (puVar24 == (undefined4 *)0x0) {
        puVar18 = &DAT_01882284;
LAB_0065f4c4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar18);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(ppuVar20);
      } while (!bVar1);
      *ppuVar20 = (undefined4 *)0x0;
      puVar24 = puVar24 + 1;
      DataMemoryBarrier(0xb);
LAB_0065f0f0:
      (*(code *)*puVar24)(puVar15);
    }
LAB_0065f0fc:
    cVar4 = FUN_00cefe20(pppuVar8);
    if (cVar4 == '\x02') {
      uVar12 = 3;
      goto LAB_0065f2b4;
    }
  }
  else if ((bVar5 & 1) == 0) {
    ppuVar17 = *pppuVar8;
    if (ppuVar17 != (undefined4 **)0x0) {
      DataMemoryBarrier(0xb);
      do {
        puVar24 = *ppuVar17;
        bVar1 = (bool)hasExclusiveAccess(ppuVar17);
      } while (!bVar1);
      *ppuVar17 = (undefined4 *)((int)puVar24 + -1);
      if (puVar24 == (undefined4 *)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*pppuVar8);
      }
    }
    *pppuVar8 = (undefined4 **)0x0;
  }
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
LAB_0065f124:
  local_4c0 = param_1 + 3;
  iVar7 = thunk_FUN_016de0ee();
  iVar7 = iVar7 + extraout_r3;
  param_2 = (undefined4 *)*param_2;
  cVar4 = '\0';
  ppuVar17 = param_1[9];
  local_21c = (undefined4 ***)0x0;
  local_220 = (undefined4 *****)0x1;
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_0065f18c:
    cVar26 = *(char *)(iVar7 + 0x31);
    cVar4 = *(char *)(iVar7 + 0x30);
    cVar13 = cVar26;
    if (cVar4 != '\x01') {
LAB_0065f1ac:
      *(char *)(iVar7 + 0x31) = cVar13;
      goto LAB_0065f1b0;
    }
    if (cVar26 != '\0') {
      cVar13 = cVar26 + -1;
      goto LAB_0065f1ac;
    }
    FUN_016455a4(*param_2,param_2[1]);
    puVar24 = local_20c;
    pppppuVar25 = local_210;
    if (local_220 == (undefined4 *****)0x0 && local_21c == (undefined4 ***)0x0) {
      if (local_218 == (undefined4 *****)0x0 && local_214 == (undefined4 *)0x0) {
        if (local_210 != (undefined4 *****)0x0) {
          (*(code *)**local_210)(local_210);
        }
      }
      else if (local_210 != (undefined4 *****)0x0) {
        if ((code *)*local_20c != (code *)0x0) {
          (*(code *)*local_20c)(local_210);
        }
        if (puVar24[1] != 0) {
          thunk_FUN_016d3fb4(pppppuVar25);
        }
      }
    }
  }
  else {
    cVar26 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_009948a0);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_0065f18c;
    }
LAB_0065f1b0:
    (*(code *)ppuVar17[2][3])(ppuVar17,&local_220);
    puVar15 = local_20c;
    pppppuVar3 = local_210;
    puVar24 = local_214;
    pppppuVar25 = local_218;
    if (local_220 == (undefined4 *****)0x0 && local_21c == (undefined4 ***)0x0) {
      ppuVar17 = param_1[9];
      if (*ppuVar17 == (undefined4 *)0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(ppuVar17);
        if (!bVar1) goto LAB_0065f24c;
        *ppuVar17 = (undefined4 *)0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_0065f24c:
        (*(code *)ppuVar17[2][4])();
      }
      if (pppppuVar25 != (undefined4 *****)0x0 || puVar24 != (undefined4 *)0x0) {
        local_220 = pppppuVar25;
        local_21c = (undefined4 ***)puVar24;
        local_218 = pppppuVar3;
        local_214 = puVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: halt task has panicked",0x1b,&local_220,&DAT_01857ddc,&DAT_01876d0c);
      }
      pppuVar8 = param_1 + 6;
      ppuVar17 = *pppuVar8;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      if (ppuVar17 != (undefined4 **)0x0) {
        DataMemoryBarrier(0xb);
        if ((int)ppuVar17[4] < 0) {
          ppuVar17 = ppuVar17 + 4;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(ppuVar17);
          } while (!bVar1);
          *ppuVar17 = (undefined4 *)((uint)*ppuVar17 & 0x7fffffff);
          DataMemoryBarrier(0xb);
          ppuVar17 = *pppuVar8;
        }
        else {
          ppuVar17 = *pppuVar8;
        }
        if (ppuVar17 != (undefined4 **)0x0) {
          do {
            while (bVar5 = FUN_00cefe20(pppuVar8), bVar5 == 2) {
              if (*pppuVar8 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_0187bde8);
              }
              DataMemoryBarrier(0xb);
              if ((*pppuVar8)[4] == (undefined4 *)0x0) goto LAB_0065f34c;
              FUN_016da3a8();
            }
          } while ((bVar5 & 1) != 0);
LAB_0065f34c:
          ppuVar17 = *pppuVar8;
          if (ppuVar17 != (undefined4 **)0x0) {
            DataMemoryBarrier(0xb);
            do {
              puVar24 = *ppuVar17;
              bVar1 = (bool)hasExclusiveAccess(ppuVar17);
            } while (!bVar1);
            *ppuVar17 = (undefined4 *)((int)puVar24 + -1);
            if (puVar24 == (undefined4 *)0x1) {
              DataMemoryBarrier(0xb);
              FUN_0078cf4c(*pppuVar8);
            }
          }
        }
      }
      *(undefined1 *)((int)param_1 + 0x1e) = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined2 *)((int)param_1 + 0x1f) = 0;
      FUN_00654988(local_4c0);
      if (pppppuVar3 != (undefined4 *****)0x0) {
        local_220 = pppppuVar3;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: halt failed",0x10,&local_220,&DAT_01857dac,&DAT_0185846c);
      }
      uVar6 = 0;
      uVar16 = 1;
      if (*(char *)(param_1 + 2) != '\0') {
        ppuVar17 = param_1[1];
        DataMemoryBarrier(0xb);
        do {
          puVar24 = *ppuVar17;
          bVar1 = (bool)hasExclusiveAccess(ppuVar17);
        } while (!bVar1);
        *ppuVar17 = (undefined4 *)((int)puVar24 + -1);
        if (puVar24 == (undefined4 *)0x1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(param_1[1]);
          uVar6 = 0;
        }
      }
LAB_0065f3f4:
      *(undefined1 *)((int)param_1 + 9) = uVar16;
      return uVar6;
    }
    if (cVar4 != '\0') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0065f2b0;
        FUN_015e8e6c(iVar7,FUN_01655ec4);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar26;
      *(undefined1 *)(iVar7 + 0x30) = 1;
    }
  }
LAB_0065f2b0:
  uVar12 = 4;
LAB_0065f2b4:
  local_4bc = param_1 + 7;
  *(undefined1 *)local_4bc = uVar12;
  *(undefined1 *)((int)param_1 + 9) = 4;
  return 1;
}

