// FUN_00b5bc28 @ 00b5bc28 size=1616 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

longlong FUN_00b5bc28(uint *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 local_c0;
  uint local_bc;
  uint *local_b8;
  code *local_b4;
  uint ***local_a8;
  int local_a4;
  byte local_74;
  char local_73;
  uint local_70;
  uint **local_60;
  undefined4 local_5c;
  uint *local_58;
  uint *local_54;
  undefined **local_50;
  undefined *local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 **local_30;
  undefined4 *local_2c;
  undefined *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[9]) {
  case '\0':
    piVar5 = (int *)(param_1[2] + 0x2c);
    if (*piVar5 == 0) {
      uVar11 = FUN_00c70f88(&DAT_0034e635,0x2b);
      param_1[3] = 1;
      param_1[4] = uVar11;
      goto LAB_00b5c18c;
    }
    param_1[4] = (uint)piVar5;
    param_1[3] = 0;
    local_c0 = *param_1;
    local_bc = param_1[1];
    uVar11 = *piVar5 + 8;
    param_1[5] = local_c0;
    param_1[6] = local_bc;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[7] = uVar11;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018707c0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018707c0);
  case '\x03':
    if ((char)param_1[8] != '\0') {
      if ((char)param_1[8] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018701b0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018701b0);
    }
    local_c0 = param_1[5];
    local_bc = param_1[6];
    uVar11 = param_1[7];
  }
  puVar10 = (uint *)(uVar11 + 0x4e4);
  do {
    if (*puVar10 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar10);
      goto LAB_00b5bcd4;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar2);
  *puVar10 = 1;
  DataMemoryBarrier(0xb);
LAB_00b5bcd4:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar4 = *(char *)(uVar11 + 0x4e8);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar4 = *(char *)(uVar11 + 0x4e8);
  }
  if (cVar4 != '\0') {
    local_b4._1_3_ = (undefined3)((uint)local_b4 >> 8);
    local_b4 = (code *)CONCAT31(local_b4._1_3_,(char)uVar7);
    local_b8 = puVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: poisoned",0xd,&local_b8,&DAT_018703d8,&DAT_018702f0);
  }
  piVar5 = *(int **)(uVar11 + 0x4ec);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    do {
      iVar9 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb5c294);
      (*pcVar1)();
    }
    piVar5 = *(int **)(uVar11 + 0x4ec);
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(uVar11 + 0x4e8) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar11 = *puVar10;
    bVar2 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar2);
  *puVar10 = 0;
  if (uVar11 == 2) {
    FUN_016d6968(0xf0,puVar10,0x81,1);
    if (piVar5 != (int *)0x0) goto LAB_00b5bd78;
LAB_00b5c170:
    uVar11 = FUN_00c70f88(&DAT_0034f2ec,0x16);
  }
  else {
    if (piVar5 == (int *)0x0) goto LAB_00b5c170;
LAB_00b5bd78:
    FUN_009a7944(&local_b8,piVar5[2]);
    uVar7 = local_bc;
    uVar11 = local_c0;
    if (((uint)local_74 == (local_c0 & 0xff)) &&
       ((local_74 != 0 || ((local_73 == local_c0._1_1_ && (local_70 == local_bc)))))) {
      if ((DAT_018d9130 < 4) && (DAT_018d9a64 != '\0')) {
        if (DAT_018d9a64 == '\x01') {
LAB_00b5be08:
          DataMemoryBarrier(0xb);
          pcVar12 = s_SetGloba_00414c05;
          puVar3 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar12 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar9 = (**(code **)(puVar3 + 0x14))(pcVar12,DAT_018d9a5c);
          if (iVar9 == 0) goto LAB_00b5bf6c;
        }
        else if (DAT_018d9a64 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d9a5c);
          if (cVar4 == '\0') goto LAB_00b5bf6c;
          if (cVar4 != '\x02') goto LAB_00b5be08;
        }
        local_a4 = DAT_018d9a5c;
        local_44 = *(int *)(DAT_018d9a5c + 0x20);
        if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018701a0);
        }
        local_54 = &local_48;
        local_58 = (uint *)(DAT_018d9a5c + 0x1c);
        local_48 = *local_58;
        local_60 = &local_54;
        local_40 = *(undefined4 *)(DAT_018d9a5c + 0x24);
        local_50 = &local_34;
        local_3c = *(undefined4 *)(DAT_018d9a5c + 0x28);
        local_38 = 0;
        local_5c = 1;
        local_4c = &DAT_018abb78;
        local_30 = &local_2c;
        local_34 = &DAT_00584053;
        local_b8 = (uint *)&DAT_00000001;
        local_a8 = &local_60;
        local_28 = &DAT_00b5c3a4;
        local_2c = &local_c0;
        local_b4 = (code *)0x0;
        DataMemoryBarrier(0xb);
        pcVar12 = s_SetGloba_00414c05;
        puVar3 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar12 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar9 = (**(code **)(puVar3 + 0x28))(pcVar12,&local_b8);
        if (iVar9 != 0) {
          (**(code **)(puVar3 + 0x2c))(pcVar12,&local_b8);
        }
        uVar11 = 0;
      }
      else {
LAB_00b5bf6c:
        uVar11 = 0;
      }
LAB_00b5bfd8:
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(piVar5);
      }
    }
    else {
      if (((local_c0 & 0xff) == 0) && (local_48 = local_bc, 100 < local_bc)) {
        local_b8 = &local_48;
        local_b4 = FUN_00f5ce60;
        uVar11 = FUN_00b17e9c(&DAT_00578b4d,&local_b8);
        goto LAB_00b5bfd8;
      }
      iVar9 = piVar5[2];
      puVar10 = (uint *)(iVar9 + 8);
      do {
        if (*puVar10 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(puVar10);
          goto joined_r0x00b5c0e4;
        }
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = 1;
      DataMemoryBarrier(0xb);
joined_r0x00b5c0e4:
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        if (*(char *)(iVar9 + 0xc) != '\0') {
          uVar8 = 0;
LAB_00b5c1dc:
          local_b4 = (code *)CONCAT31(local_b4._1_3_,(char)uVar8);
          local_b8 = puVar10;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0035005e,0x1a,&local_b8,&DAT_0187264c,&DAT_01871408);
        }
        *(uint *)(iVar9 + 0x54) = uVar11;
        *(uint *)(iVar9 + 0x58) = uVar7;
LAB_00b5c058:
        if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(iVar9 + 0xc) = 1;
        }
      }
      else {
        uVar8 = FUN_015bf3f8();
        uVar8 = uVar8 ^ 1;
        if (*(char *)(iVar9 + 0xc) != '\0') goto LAB_00b5c1dc;
        *(uint *)(iVar9 + 0x54) = uVar11;
        *(uint *)(iVar9 + 0x58) = uVar7;
        if (uVar8 == 0) goto LAB_00b5c058;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar11 = *puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = 0;
      if (uVar11 == 2) {
        FUN_016d6968(0xf0,puVar10,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar9 + -1;
      uVar11 = 0;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(piVar5);
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
LAB_00b5c18c:
  *(undefined1 *)(param_1 + 9) = 1;
  return (ulonglong)uVar11 << 0x20;
}

