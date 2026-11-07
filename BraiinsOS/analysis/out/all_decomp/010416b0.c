// FUN_010416b0 @ 010416b0 size=2000 calls_out=15 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_010416b0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_228 [112];
  int *local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  int *local_140;
  undefined4 local_13c;
  int ****local_130;
  int local_12c;
  int *local_c8;
  undefined1 local_c4 [112];
  undefined4 local_54;
  int ***local_4c;
  undefined4 local_48;
  int *local_44;
  int **local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined *local_34;
  int ***pppiStack_30;
  int **ppiStack_2c;
  code *pcStack_28;
  
  uVar10 = (uint)&local_1b8 | 4;
  local_1b8 = (int *)0x80000000;
  local_1b4 = param_2;
  if (*(byte *)(param_1 + 0x18) != 2) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
LAB_01041a2c:
      FUN_016dd1aa(&local_140,&local_1b8,0x74);
      piVar13 = local_140;
      uVar10 = *(uint *)(*(int *)(param_1 + 0x10) + 0x1c);
      puVar6 = (uint *)(*(int *)(param_1 + 0x10) + 0x1c);
      DataMemoryBarrier(0xb);
      while (0x7fffffff < uVar10) {
        if ((uVar10 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
        }
        uVar16 = *puVar6;
        if (*puVar6 == uVar10) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
            if (bVar2) {
              *puVar6 = uVar10 + 1 | 0x80000000;
              DataMemoryBarrier(0xb);
              iVar15 = *(int *)(param_1 + 0x10);
              if ((uVar10 & 0x7fffffff) < *(uint *)(iVar15 + 0x18)) goto LAB_01041bf4;
              iVar15 = *(int *)(param_1 + 0x14);
              piVar13 = (int *)(iVar15 + 8);
              goto LAB_01041ae4;
            }
            uVar16 = *puVar6;
          } while (*puVar6 == uVar10);
        }
        uVar10 = uVar16;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      FUN_016dd1aa(auStack_228,(uint)&local_140 | 4,0x70);
      goto LAB_01041ccc;
    }
    iVar15 = *(int *)(param_1 + 0x14);
    piVar13 = (int *)(iVar15 + 8);
    do {
      if (*piVar13 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar13,uVar10);
        goto LAB_01041754;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 1;
    DataMemoryBarrier(0xb);
LAB_01041754:
    uVar16 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar5 = *(char *)(iVar15 + 0xc);
    }
    else {
      uVar16 = FUN_015bf3f8(DAT_018dd988,uVar10);
      uVar16 = uVar16 ^ 1;
      cVar5 = *(char *)(iVar15 + 0xc);
    }
    if (cVar5 != '\0') {
      local_c4[0] = (undefined1)uVar16;
      local_c8 = piVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_01883388,&DAT_018a4b30);
    }
    if (*(char *)(iVar15 + 0x18) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar15 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = 0;
      if (iVar15 == 2) {
        FUN_016d6968(0xf0,piVar13,0x81,1);
      }
      goto LAB_01041a2c;
    }
    if (*(int *)(iVar15 + 0x10) != 0) {
      (**(code **)(*(int *)(iVar15 + 0x10) + 0xc))(*(undefined4 *)(iVar15 + 0x14),uVar10);
    }
    *(undefined4 *)(iVar15 + 0x10) = 0;
    if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(DAT_018dd988,uVar10), iVar9 == 0)) {
      *(undefined1 *)(iVar15 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = 0;
    if (iVar15 == 2) {
      FUN_016d6968(0xf0,piVar13,0x81,1);
    }
    piVar13 = local_1b8;
    FUN_016dd1aa(auStack_228,uVar10,0x70);
    bVar2 = false;
    piVar4 = local_c8;
    goto joined_r0x01041cd4;
  }
  FUN_016dd1aa(auStack_228,uVar10,0x70);
  local_c8 = (int *)0x80000000;
  FUN_016dd1aa(local_c4,auStack_228,0x70);
  local_54 = CONCAT31(local_54._1_3_,1);
  goto LAB_01041718;
  while (bVar2 = (bool)hasExclusiveAccess(piVar13), !bVar2) {
LAB_01041ae4:
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_01041b00;
    }
  }
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_01041b00:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar5 = *(char *)(iVar15 + 0xc);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar5 = *(char *)(iVar15 + 0xc);
  }
  if (cVar5 != '\0') {
    local_c4[0] = (undefined1)uVar10;
    local_c8 = piVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c8,&DAT_01883388,&DAT_018a4b50);
  }
  if (*(int *)(iVar15 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar15 + 0x10) + 0xc))(*(undefined4 *)(iVar15 + 0x14));
  }
  *(undefined1 *)(iVar15 + 0x18) = 1;
  *(undefined4 *)(iVar15 + 0x10) = 0;
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(iVar15 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = 0;
  if (iVar15 == 2) {
    FUN_016d6968(0xf0,piVar13,0x81,1);
  }
  piVar13 = *(int **)(param_1 + 0x14);
  do {
    iVar15 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar15 + 1;
  if (iVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1041e90);
    (*pcVar1)();
  }
  iVar9 = *(int *)(param_1 + 0x10);
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar7 = 0;
  puVar7[1] = piVar13;
  puVar12 = (undefined4 *)(iVar9 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar11 = (undefined4 *)*puVar12;
    bVar2 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar2);
  *puVar12 = puVar7;
  DataMemoryBarrier(0xb);
  *puVar11 = puVar7;
  DataMemoryBarrier(0xb);
  iVar15 = *(int *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x18) = (byte)((uint)*(undefined4 *)(iVar9 + 0x1c) >> 0x1f);
LAB_01041bf4:
  FUN_016dd1aa(&local_c8,&local_140,0x74);
  local_54 = 0;
  iVar9 = thunk_FUN_016d4a50(0x78);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x78);
  }
  FUN_016dd1aa(iVar9,&local_c8,0x78);
  piVar13 = (int *)(iVar15 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar9;
  DataMemoryBarrier(0xb);
  *(int *)(iVar8 + 0x74) = iVar9;
  puVar6 = (uint *)(iVar15 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar10 = *puVar6;
    bVar2 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar2);
  *puVar6 = uVar10 | 2;
  piVar13 = (int *)0x80000001;
  DataMemoryBarrier(0xb);
  if (uVar10 == 0) {
    iVar9 = *(int *)(iVar15 + 0x24);
    *(undefined4 *)(iVar15 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 4))(*(undefined4 *)(iVar15 + 0x28));
    }
  }
LAB_01041ccc:
  bVar2 = true;
  piVar4 = local_c8;
joined_r0x01041cd4:
  local_c8 = piVar13;
  if (local_c8 == (int *)0x80000001) goto LAB_01041cd8;
  FUN_016dd1aa(local_c4,auStack_228,0x70);
  local_54 = CONCAT31(local_54._1_3_,bVar2);
  if (((!bVar2) && (DAT_018d9130 < 4)) && (DAT_018da4c0 != '\0')) {
    if (DAT_018da4c0 == '\x01') {
LAB_01041890:
      DataMemoryBarrier(0xb);
      pcVar14 = s_SetGloba_00414c05;
      puVar3 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar14 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar14 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar15 = (**(code **)(puVar3 + 0x14))(pcVar14,DAT_018da4b8);
      if (iVar15 == 0) goto LAB_01041718;
    }
    else if (DAT_018da4c0 != '\x02') {
      cVar5 = FUN_0169ac90(&DAT_018da4b8);
      if (cVar5 == '\0') goto LAB_01041718;
      if (cVar5 != '\x02') goto LAB_01041890;
    }
    local_12c = DAT_018da4b8;
    if (*(int *)(DAT_018da4b8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018839e0);
    }
    local_1b4 = *(undefined4 *)(DAT_018da4b8 + 0x20);
    local_1b0 = *(undefined4 *)(DAT_018da4b8 + 0x24);
    local_1ac = *(undefined4 *)(DAT_018da4b8 + 0x28);
    local_3c = &local_34;
    local_44 = (int *)(DAT_018da4b8 + 0x1c);
    local_1b8 = (int *)*local_44;
    pppiStack_30 = &ppiStack_2c;
    local_34 = &DAT_00575f18;
    pcStack_28 = FUN_006bcf64;
    local_4c = &local_40;
    local_130 = &local_4c;
    local_1a8 = 0;
    local_38 = &DAT_018abb78;
    local_48 = 1;
    local_13c = 0;
    local_140 = (int *)0x1;
    DataMemoryBarrier(0xb);
    pcVar14 = s_SetGloba_00414c05;
    puVar3 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar14 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar14 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_40 = &local_1b8;
    ppiStack_2c = &local_c8;
    iVar15 = (**(code **)(puVar3 + 0x28))(pcVar14,&local_140);
    if (iVar15 != 0) {
      (**(code **)(puVar3 + 0x2c))(pcVar14,&local_140);
    }
  }
LAB_01041718:
  FUN_01059950(&local_c8);
  piVar4 = local_c8;
LAB_01041cd8:
  local_c8 = piVar4;
  FUN_01041fec(param_1);
  return;
}

