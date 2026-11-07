// FUN_00a80aec @ 00a80aec size=4724 calls_out=14 calls_in=1
// strings: 

void FUN_00a80aec(int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 extraout_r2;
  undefined *puVar10;
  undefined1 uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int **ppiVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  int *local_37bc;
  int **local_37b4;
  int local_37a4;
  int *local_37a0;
  int local_379c;
  undefined4 local_3798;
  undefined4 local_3794;
  undefined4 local_3790;
  int *local_3788;
  undefined4 local_3784;
  int *local_3780;
  undefined4 local_377c;
  int *local_3778;
  uint local_3774;
  int *local_3770;
  undefined4 local_376c;
  int *local_3768;
  int **local_3764;
  int *local_3760;
  undefined1 local_3758;
  undefined1 local_3594;
  int **local_3590;
  undefined1 *local_358c;
  undefined1 local_357c;
  int **local_3578;
  undefined1 *local_3574;
  undefined1 local_2e80;
  int **local_2e78;
  undefined1 *local_2e74;
  undefined1 auStack_2e70 [2344];
  undefined1 local_2548 [520];
  undefined4 *local_2340;
  undefined4 *local_2328;
  undefined4 *local_1c28;
  int *local_1c20;
  int local_1c1c;
  int *local_1300;
  undefined1 *local_12fc;
  undefined **local_12f8;
  int *local_12e8;
  undefined4 local_12d8;
  undefined1 auStack_12d4 [524];
  undefined4 local_10c8;
  undefined4 local_10c4;
  undefined4 local_10c0;
  int local_10b8;
  int **local_10b4;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined4 local_10a8;
  int local_10a0;
  int *local_109c;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined4 local_9a8;
  int local_9a0;
  int local_99c;
  undefined1 local_970 [2344];
  int *local_48;
  undefined1 auStack_41 [29];
  
  piVar12 = *(int **)(param_1 + 0xe0);
  local_37b4 = &local_1300;
  puVar4 = (undefined4 *)((uint)local_37b4 | 0x10);
  do {
    iVar5 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034de3e,0x1c,&DAT_0186d918);
  }
  piVar18 = *(int **)(param_1 + 0x98);
  uVar17 = *(undefined4 *)(param_1 + 0x9c);
  do {
    iVar5 = *piVar18;
    bVar2 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar2);
  *piVar18 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar14 = piVar18 + 0x29;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar2);
  *piVar14 = *piVar14 + 1;
  piVar14 = *(int **)(param_1 + 0xa0);
  uVar6 = *(undefined4 *)(param_1 + 0xa4);
  do {
    iVar5 = *piVar14;
    bVar2 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar2);
  *piVar14 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar15 = piVar14 + 0x31;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = *piVar15 + 1;
  piVar15 = *(int **)(param_1 + 0xdc);
  do {
    iVar5 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  uVar9 = piVar15[0x2d];
  piVar16 = piVar15 + 0x2e;
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = *piVar16 + 1;
  uVar20 = *(undefined4 *)(param_1 + 0xac);
  piVar16 = *(int **)(param_1 + 0xa8);
  do {
    iVar5 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar7 = piVar16 + 0x3f;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = *piVar7 + 1;
  do {
    do {
      local_1c20 = DAT_018d9200;
      local_1c1c = DAT_018d9204;
      piVar7 = (int *)((int)DAT_018d9200 + 1);
      iVar5 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int *)0x0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = piVar7;
    DAT_018d9204 = iVar5;
  } while (bVar2 && bVar3);
  local_3798 = 0x3c;
  local_3574 = auStack_41;
  local_3578 = &local_1c20;
  local_3794 = 0;
  local_357c = 0;
  local_3760 = (int *)CONCAT31(local_3760._1_3_,1);
  local_3764 = (int **)&DAT_018d7c80;
  local_3784 = uVar17;
  local_3780 = piVar14;
  local_377c = uVar6;
  local_3778 = piVar15;
  local_3774 = uVar9 & 0xfffffffe;
  local_3770 = piVar16;
  local_376c = uVar20;
  local_3768 = piVar12;
  uVar21 = thunk_FUN_016de0ee(uVar17,0x40);
  puVar13 = (uint *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
  local_3790 = extraout_r2;
  local_3788 = piVar18;
  if ((char)puVar13[0xe] != '\x01') {
    if ((char)puVar13[0xe] != '\x02') {
      FUN_015e8e6c(puVar13,FUN_00a303f4);
      *(undefined1 *)(puVar13 + 0xe) = 1;
      goto LAB_00a80d9c;
    }
    uVar11 = 1;
    FUN_00a2a3bc(&local_3798);
LAB_00a80d34:
    puVar10 = &DAT_0186d928;
    local_2548[0] = uVar11;
    goto LAB_00a81360;
  }
LAB_00a80d9c:
  FUN_016dd1aa(auStack_2e70,&local_3798,0x228);
  if (0x7ffffffe < *puVar13) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00a81d18;
  }
  *puVar13 = *puVar13 + 1;
  uVar9 = puVar13[1];
  FUN_016dd1aa(local_2548,&local_3798,0x228);
  if (uVar9 == 2) {
    FUN_00a2a3bc(local_2548);
    uVar11 = 0;
    *puVar13 = *puVar13 - 1;
    goto LAB_00a80d34;
  }
  iVar5 = local_2328[1];
  piVar12 = (int *)*local_2328;
  if ((uVar9 & 1) == 0) {
    piVar14 = (int *)puVar13[2];
    do {
      iVar8 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00a81d18;
    piVar15 = (int *)piVar14[0x8e];
    if (piVar15 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar15;
        bVar2 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar2);
      *piVar15 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar14[0x8e];
      piVar18 = (int *)piVar14[0x8f];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_3798,0x220);
    puVar4[4] = piVar12;
    puVar4[5] = iVar5;
    local_12f8 = &PTR_LAB_0186bcf4;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar14;
    FUN_016dd1aa(auStack_12d4,local_970,0x224);
    local_10b0 = 0;
    local_10ac = 0;
    local_10a8 = 0;
    local_37a0 = (int *)0x0;
    local_10a0 = iVar8;
    local_109c = piVar18;
    iVar8 = FUN_016d51b0(&local_37a0,0x20,0x280);
    piVar18 = local_37a0;
    if ((iVar8 != 0) || (local_37a0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x280);
    }
    FUN_016dd1aa(local_37a0,&local_1300,0x280);
    iVar8 = FUN_00994b2c(piVar14 + 0x40,piVar18,piVar18);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar14[0x8c] != 0) {
      (**(code **)(piVar14[0x8d] + 0x14))
                (piVar14[0x8c] + (*(int *)(piVar14[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      FUN_01659ec0(puVar13[2],iVar8);
    }
  }
  else {
    piVar14 = (int *)puVar13[2];
    do {
      iVar8 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00a81d18;
    piVar18 = (int *)piVar14[0x5c];
    if (piVar18 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar18;
        bVar2 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar2);
      *piVar18 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar14[0x5c];
      local_37bc = (int *)piVar14[0x5d];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_3798,0x220);
    puVar4[4] = piVar12;
    puVar4[5] = iVar5;
    *puVar4 = 0;
    local_12f8 = &PTR_FUN_0186bbdc;
    puVar4[1] = 0;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar14;
    FUN_016dd1aa(auStack_12d4,local_970,0x224);
    local_109c = local_37bc;
    local_10b0 = 0;
    local_10ac = 0;
    local_10a8 = 0;
    local_37a0 = (int *)0x0;
    local_10a0 = iVar8;
    iVar8 = FUN_016d51b0(&local_37a0,0x20,0x280);
    piVar18 = local_37a0;
    if ((iVar8 != 0) || (local_37a0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x280);
    }
    FUN_016dd1aa(local_37a0,&local_1300,0x280);
    iVar8 = FUN_00994b2c(piVar14 + 0x14,piVar18,piVar18);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar14[0x5a] != 0) {
      (**(code **)(piVar14[0x5b] + 0x14))
                (piVar14[0x5a] + (*(int *)(piVar14[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      local_970[0] = 0;
      local_1300 = piVar14 + 2;
      local_12f8 = (undefined **)local_970;
      local_12fc = (undefined1 *)iVar8;
      FUN_0164511c(&local_1300);
    }
  }
  *puVar13 = *puVar13 - 1;
  if (*piVar18 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar18);
    if (!bVar2) goto LAB_00a81178;
    *piVar18 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00a81178:
    (**(code **)(piVar18[2] + 0x10))(piVar18);
  }
  piVar12 = *(int **)(param_1 + 0xe0);
  do {
    iVar5 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034de3e,0x1c,&DAT_0186d938);
  }
  piVar18 = *(int **)(param_1 + 0x98);
  uVar9 = *(uint *)(param_1 + 0x9c);
  do {
    iVar5 = *piVar18;
    bVar2 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar2);
  *piVar18 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar14 = piVar18 + 0x29;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar2);
  *piVar14 = *piVar14 + 1;
  uVar17 = *(undefined4 *)(param_1 + 0xa4);
  piVar14 = *(int **)(param_1 + 0xa0);
  do {
    iVar5 = *piVar14;
    bVar2 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar2);
  *piVar14 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar15 = piVar14 + 0x31;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = *piVar15 + 1;
  piVar15 = *(int **)(param_1 + 0xa8);
  ppiVar19 = *(int ***)(param_1 + 0xac);
  do {
    iVar5 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_00a81d18;
  piVar16 = piVar15 + 0x3f;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = *piVar16 + 1;
  do {
    do {
      local_1c20 = DAT_018d9200;
      local_1c1c = DAT_018d9204;
      piVar16 = (int *)((int)DAT_018d9200 + 1);
      iVar5 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int *)0x0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = piVar16;
    DAT_018d9204 = iVar5;
  } while (bVar2 && bVar3);
  local_3788 = (int *)&DAT_00000001;
  local_3758 = 1;
  local_3798 = 0x3c;
  local_358c = auStack_41;
  local_3590 = &local_1c20;
  local_3784 = 0;
  local_3794 = 0;
  local_3594 = 0;
  local_3780 = (int *)0x0;
  local_3790 = 0;
  local_3778 = piVar18;
  local_3774 = uVar9;
  local_3770 = piVar14;
  local_376c = uVar17;
  local_3768 = piVar15;
  local_3764 = ppiVar19;
  local_3760 = piVar12;
  if ((char)puVar13[0xe] != '\x01') {
    if ((char)puVar13[0xe] != '\x02') {
      FUN_015e8e6c(puVar13,FUN_00a303f4);
      *(undefined1 *)(puVar13 + 0xe) = 1;
      goto LAB_00a813e8;
    }
    uVar11 = 1;
    FUN_00a2ae58(&local_3798);
LAB_00a81338:
    puVar10 = &DAT_0186d948;
    local_2548[0] = uVar11;
LAB_00a81360:
    local_1300 = (int *)local_2548;
    local_12fc = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,local_37b4,puVar10);
  }
LAB_00a813e8:
  FUN_016dd1aa(auStack_2e70,&local_3798,0x210);
  if (0x7ffffffe < *puVar13) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00a81d18;
  }
  *puVar13 = *puVar13 + 1;
  uVar9 = puVar13[1];
  FUN_016dd1aa(local_2548,&local_3798,0x210);
  if (uVar9 == 2) {
    FUN_00a2ae58(local_2548);
    uVar11 = 0;
    *puVar13 = *puVar13 - 1;
    goto LAB_00a81338;
  }
  iVar5 = local_2340[1];
  piVar12 = (int *)*local_2340;
  if ((uVar9 & 1) == 0) {
    piVar18 = (int *)puVar13[2];
    do {
      iVar8 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00a81d18;
    piVar14 = (int *)piVar18[0x8e];
    if (piVar14 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar18[0x8e];
      ppiVar19 = (int **)piVar18[0x8f];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_3798,0x208);
    puVar4[4] = piVar12;
    puVar4[5] = iVar5;
    local_12f8 = &PTR_LAB_0186bc2c;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar18;
    FUN_016dd1aa(auStack_12d4,local_970,0x20c);
    local_10c8 = 0;
    local_10c4 = 0;
    local_10c0 = 0;
    local_37a0 = (int *)0x0;
    local_10b8 = iVar8;
    local_10b4 = ppiVar19;
    iVar8 = FUN_016d51b0(&local_37a0,0x20,0x260);
    piVar14 = local_37a0;
    if ((iVar8 != 0) || (local_37a0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x260);
    }
    FUN_016dd1aa(local_37a0,&local_1300,0x260);
    iVar8 = FUN_00994b2c(piVar18 + 0x40,piVar14,piVar14);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar18[0x8c] != 0) {
      (**(code **)(piVar18[0x8d] + 0x14))
                (piVar18[0x8c] + (*(int *)(piVar18[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      FUN_01659ec0(puVar13[2],iVar8);
    }
  }
  else {
    piVar18 = (int *)puVar13[2];
    do {
      iVar8 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00a81d18;
    piVar14 = (int *)piVar18[0x5c];
    if (piVar14 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar18[0x5c];
      local_37b4 = (int **)piVar18[0x5d];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_3798,0x208);
    puVar4[4] = piVar12;
    puVar4[5] = iVar5;
    *puVar4 = 0;
    local_12f8 = &PTR_LAB_0186bd94;
    puVar4[1] = 0;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar18;
    FUN_016dd1aa(auStack_12d4,local_970,0x20c);
    local_10b4 = local_37b4;
    local_10c8 = 0;
    local_10c4 = 0;
    local_10c0 = 0;
    local_37a0 = (int *)0x0;
    local_10b8 = iVar8;
    iVar8 = FUN_016d51b0(&local_37a0,0x20,0x260);
    piVar14 = local_37a0;
    if ((iVar8 != 0) || (local_37a0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x260);
    }
    FUN_016dd1aa(local_37a0,&local_1300,0x260);
    iVar8 = FUN_00994b2c(piVar18 + 0x14,piVar14,piVar14);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar18[0x5a] != 0) {
      (**(code **)(piVar18[0x5b] + 0x14))
                (piVar18[0x5a] + (*(int *)(piVar18[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      local_970[0] = 0;
      local_1300 = piVar18 + 2;
      local_12f8 = (undefined **)local_970;
      local_12fc = (undefined1 *)iVar8;
      FUN_0164511c(&local_1300);
    }
  }
  *puVar13 = *puVar13 - 1;
  if (*piVar14 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar14);
    if (!bVar2) goto LAB_00a817bc;
    *piVar14 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00a817bc:
    (**(code **)(piVar14[2] + 0x10))(piVar14);
  }
  do {
    do {
      local_37a0 = DAT_018d9200;
      local_379c = DAT_018d9204;
      piVar12 = (int *)((int)DAT_018d9200 + 1);
      iVar5 = DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int *)0x0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = piVar12;
    DAT_018d9204 = iVar5;
  } while (bVar2 && bVar3);
  FUN_016dd1aa(&local_3798,param_1,0x108);
  local_2e78 = &local_37a0;
  local_2e74 = auStack_41;
  local_2e80 = 0;
  if ((char)puVar13[0xe] != '\x01') {
    if ((char)puVar13[0xe] == '\x02') {
      FUN_00a751a0(&local_3798);
      local_2548[0] = 1;
      goto LAB_00a81840;
    }
    FUN_015e8e6c(puVar13,FUN_00a303f4);
    *(undefined1 *)(puVar13 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_2e70,&local_3798,0x928);
  if (0x7ffffffe < *puVar13) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00a81d18;
  }
  *puVar13 = *puVar13 + 1;
  uVar9 = puVar13[1];
  FUN_016dd1aa(local_2548,&local_3798,0x928);
  if (uVar9 == 2) {
    FUN_00a751a0(local_2548);
    *puVar13 = *puVar13 - 1;
    local_2548[0] = 0;
LAB_00a81840:
    local_1300 = (int *)local_2548;
    local_12fc = &LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_1300,&DAT_0186d958);
  }
  FUN_016dd1aa(&local_1c20,&local_3798,0x920);
  piVar12 = (int *)*local_1c28;
  iVar5 = local_1c28[1];
  if ((uVar9 & 1) == 0) {
    piVar18 = (int *)puVar13[2];
    do {
      iVar8 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_00a81d18;
    piVar14 = (int *)piVar18[0x8e];
    if (piVar14 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      do {
        iVar8 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar18[0x8e];
      param_1 = piVar18[0x8f];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_1c20,0x920);
    puVar4[4] = piVar12;
    puVar4[5] = iVar5;
    *puVar4 = 0;
    local_12f8 = &PTR_LAB_0186bca4;
    puVar4[1] = 0;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar18;
    FUN_016dd1aa(auStack_12d4,local_970,0x924);
    local_9b0 = 0;
    local_9ac = 0;
    local_9a8 = 0;
    local_48 = (int *)0x0;
    local_9a0 = iVar8;
    local_99c = param_1;
    iVar8 = FUN_016d51b0(&local_48,0x20,0x980);
    piVar14 = local_48;
    if ((iVar8 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x980);
    }
    FUN_016dd1aa(local_48,&local_1300,0x980);
    iVar8 = FUN_00994b2c(piVar18 + 0x40,piVar14,piVar14);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar18[0x8c] != 0) {
      (**(code **)(piVar18[0x8d] + 0x14))
                (piVar18[0x8c] + (*(int *)(piVar18[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      FUN_01659ec0(puVar13[2],iVar8);
    }
  }
  else {
    piVar18 = (int *)puVar13[2];
    do {
      iVar8 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar8 + 1;
    if (iVar8 < 0) {
LAB_00a81d18:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xa81d18);
      (*pcVar1)();
    }
    piVar14 = (int *)piVar18[0x5c];
    if (piVar14 == (int *)0x0) {
      iVar8 = 0;
      local_37a4 = param_1;
    }
    else {
      do {
        iVar8 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_00a81d18;
      iVar8 = piVar18[0x5c];
      local_37a4 = piVar18[0x5d];
    }
    FUN_016dd1aa((uint)local_970 | 4,&local_1c20,0x920);
    local_12f8 = &PTR_LAB_0186bb8c;
    puVar4[4] = piVar12;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = iVar5;
    local_12fc = (undefined1 *)0x0;
    local_1300 = (int *)0xcc;
    local_12d8 = 0;
    local_12e8 = piVar18;
    FUN_016dd1aa(auStack_12d4,local_970,0x924);
    local_99c = local_37a4;
    local_9b0 = 0;
    local_9ac = 0;
    local_9a8 = 0;
    local_48 = (int *)0x0;
    local_9a0 = iVar8;
    iVar8 = FUN_016d51b0(&local_48,0x20,0x980);
    piVar14 = local_48;
    if ((iVar8 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x980);
    }
    FUN_016dd1aa(local_48,&local_1300,0x980);
    iVar8 = FUN_00994b2c(piVar18 + 0x14,piVar14,piVar14);
    local_1300 = piVar12;
    local_12fc = (undefined1 *)iVar5;
    if (piVar18[0x5a] != 0) {
      (**(code **)(piVar18[0x5b] + 0x14))
                (piVar18[0x5a] + (*(int *)(piVar18[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_1300);
    }
    if (iVar8 != 0) {
      local_970[0] = 0;
      local_1300 = piVar18 + 2;
      local_12f8 = (undefined **)local_970;
      local_12fc = (undefined1 *)iVar8;
      FUN_0164511c(&local_1300);
    }
  }
  *puVar13 = *puVar13 - 1;
  if (*piVar14 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar14);
    if (bVar2) {
      *piVar14 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar14[2] + 0x10))(piVar14);
  return;
}

