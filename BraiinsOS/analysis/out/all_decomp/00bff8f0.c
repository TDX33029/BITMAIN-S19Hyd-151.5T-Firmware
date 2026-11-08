// FUN_00bff8f0 @ 00bff8f0 size=2448 calls_out=12 calls_in=2
// strings: 

void FUN_00bff8f0(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint local_2c;
  int *local_28;
  uint local_24;
  
  iVar14 = *param_1;
  uVar15 = param_1[1];
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar14 == 1) {
    local_2c = uVar15;
    if (uVar15 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,&local_2c,0);
    }
    DataMemoryBarrier(0xb);
    *(uint *)(param_1[2] + 0x2f8) = uVar15;
    iVar14 = *param_1;
    goto joined_r0x00c00074;
  }
  if ((char)param_1[3] == '\0') {
    uVar17 = thunk_FUN_016de0ee(0,0x230);
    puVar4 = (undefined4 *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    iVar14 = param_1[2];
    if (*(char *)(puVar4 + 1) == '\0') {
      puVar4 = (undefined4 *)FUN_00d47df0();
    }
    if (*(int *)(iVar14 + 0x304) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7c58(&DAT_0188af58);
    }
    FUN_0184606c(*puVar4);
    piVar11 = (int *)(*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
    do {
      if (*piVar11 != 0) {
        ClearExclusiveLocal();
        local_2c = 1;
        local_24 = CONCAT31(local_24._1_3_,2);
        goto LAB_00bffa60;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
    uVar13 = 0;
    if ((DAT_018dd988 & 0x7fffffff) != 0) {
      uVar13 = FUN_015bf3f8();
      uVar13 = uVar13 ^ 1;
    }
    local_2c = (uint)*(byte *)(piVar11 + 1);
    local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
    local_28 = piVar11;
    if (local_2c != 0) {
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
LAB_00bffa60:
      uVar13 = *(uint *)(iVar14 + 0x304);
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      piVar11 = (int *)(*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00bffb30;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar11 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar11;
      if (local_2c == 0) goto LAB_00bfffac;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
LAB_00bffb30:
      uVar13 = *(uint *)(iVar14 + 0x304);
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      piVar11 = (int *)(*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00bffc00;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar11 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar11;
      if (local_2c == 0) goto LAB_00bfffac;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
LAB_00bffc00:
      uVar13 = *(uint *)(iVar14 + 0x304);
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      piVar11 = (int *)(*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00bffcd0;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar11 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar11;
      if (local_2c == 0) goto LAB_00bfffac;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
LAB_00bffcd0:
      uVar13 = *(uint *)(iVar14 + 0x304);
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00bfffac;
      if (uVar13 == 2) {
LAB_00bffd48:
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        if (iVar5 != 2) goto LAB_00bffd48;
        FUN_016d6968(0xf0,piVar11,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00bfffac;
      if (uVar13 == 2) {
LAB_00bffdc0:
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        if (iVar5 != 2) goto LAB_00bffdc0;
        FUN_016d6968(0xf0,piVar11,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00bfffac;
      if (uVar13 == 2) {
LAB_00bffe38:
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        if (iVar5 != 2) goto LAB_00bffe38;
        FUN_016d6968(0xf0,piVar11,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00bfffac;
      if (uVar13 == 2) {
LAB_00bffeb0:
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        if (iVar5 != 2) goto LAB_00bffeb0;
        FUN_016d6968(0xf0,piVar11,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      if (uVar13 <= extraout_r1) goto LAB_00c00228;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00bfffac;
      if (uVar13 == 2) {
LAB_00bfff28:
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        if (iVar5 != 2) goto LAB_00bfff28;
        FUN_016d6968(0xf0,piVar11,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0x304);
      }
      if (uVar13 <= extraout_r1) {
LAB_00c00228:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(extraout_r1,uVar13,&DAT_0188af68);
      }
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0x300) + extraout_r1 * 0x40);
      piVar11 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c == 1) {
        if (uVar13 != 2) {
          if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
            *(undefined1 *)(piVar11 + 1) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar11;
            bVar1 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar1);
          *piVar11 = 0;
          if (iVar14 == 2) {
            FUN_016d6968(0xf0,piVar11,0x81,1);
          }
        }
        FUN_013a2414(uVar15);
        goto LAB_00bff950;
      }
    }
LAB_00bfffac:
    piVar11 = local_28;
    iVar14 = local_28[4];
    if (iVar14 == local_28[2]) {
      FUN_010002b8();
    }
    *(uint *)(piVar11[3] + iVar14 * 4) = uVar15;
    piVar11[4] = iVar14 + 1;
    if ((((uVar13 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(piVar11 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
      iVar14 = *param_1;
    }
    else {
      iVar14 = *param_1;
    }
  }
  else {
    FUN_013a2414(uVar15);
LAB_00bff950:
    thunk_FUN_016d3fb4(uVar15);
    iVar14 = *param_1;
  }
joined_r0x00c00074:
  if (iVar14 != 0) {
    return;
  }
  iVar14 = param_1[1];
  FUN_013a2414(iVar14);
  if (iVar14 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar13 - 0x10, uVar13 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar6 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - iVar14) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar13 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar13 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar15);
      uVar15 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (uVar15 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(local_28,uVar15);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar13 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar13 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

