// FUN_00ff0df8 @ 00ff0df8 size=2516 calls_out=12 calls_in=0
// strings: 

void FUN_00ff0df8(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint extraout_r1;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
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
    *(uint *)(param_1[2] + 200) = uVar15;
    iVar14 = *param_1;
    goto joined_r0x00ff15d0;
  }
  if ((char)param_1[3] == '\0') {
    uVar17 = thunk_FUN_016de0ee(0,0x230);
    piVar4 = (int *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    iVar14 = param_1[2];
    if ((char)piVar4[1] == '\0') {
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18d912c);
      } while (!bVar1);
      if (DAT_018d912c == 0) {
        DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
      }
      iVar6 = DAT_018d912c + 1;
      *piVar4 = DAT_018d912c;
      DAT_018d912c = iVar6;
      *(undefined1 *)(piVar4 + 1) = 1;
      iVar6 = *(int *)(iVar14 + 0xd4);
    }
    else {
      iVar6 = *(int *)(iVar14 + 0xd4);
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7c58(&DAT_0188af58);
    }
    FUN_0184606c(*piVar4);
    piVar4 = (int *)(*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
    do {
      if (*piVar4 != 0) {
        ClearExclusiveLocal();
        local_2c = 1;
        local_24 = CONCAT31(local_24._1_3_,2);
        goto LAB_00ff0f68;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = 1;
    DataMemoryBarrier(0xb);
    uVar13 = 0;
    if ((DAT_018dd988 & 0x7fffffff) != 0) {
      uVar13 = FUN_015bf3f8();
      uVar13 = uVar13 ^ 1;
    }
    local_2c = (uint)*(byte *)(piVar4 + 1);
    local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
    local_28 = piVar4;
    if (local_2c != 0) {
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(piVar4 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar4,0x81,1);
      }
LAB_00ff0f68:
      uVar13 = *(uint *)(iVar14 + 0xd4);
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      piVar4 = (int *)(*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      do {
        if (*piVar4 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00ff1038;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar4 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar4;
      if (local_2c == 0) goto LAB_00ff14c0;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(piVar4 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar4,0x81,1);
      }
LAB_00ff1038:
      uVar13 = *(uint *)(iVar14 + 0xd4);
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      piVar4 = (int *)(*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      do {
        if (*piVar4 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00ff1108;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar4 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar4;
      if (local_2c == 0) goto LAB_00ff14c0;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(piVar4 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar4,0x81,1);
      }
LAB_00ff1108:
      uVar13 = *(uint *)(iVar14 + 0xd4);
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      piVar4 = (int *)(*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      do {
        if (*piVar4 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_00ff11d8;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 1;
      DataMemoryBarrier(0xb);
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar4 + 1);
      local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
      local_28 = piVar4;
      if (local_2c == 0) goto LAB_00ff14c0;
      local_2c = 1;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(piVar4 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar4,0x81,1);
      }
LAB_00ff11d8:
      uVar13 = *(uint *)(iVar14 + 0xd4);
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00ff14c0;
      if (uVar13 == 2) {
LAB_00ff1250:
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(piVar4 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 0;
        if (iVar6 != 2) goto LAB_00ff1250;
        FUN_016d6968(0xf0,piVar4,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00ff14c0;
      if (uVar13 == 2) {
LAB_00ff12c8:
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(piVar4 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 0;
        if (iVar6 != 2) goto LAB_00ff12c8;
        FUN_016d6968(0xf0,piVar4,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00ff14c0;
      if (uVar13 == 2) {
LAB_00ff1340:
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(piVar4 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 0;
        if (iVar6 != 2) goto LAB_00ff1340;
        FUN_016d6968(0xf0,piVar4,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00ff14c0;
      if (uVar13 == 2) {
LAB_00ff13b8:
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(piVar4 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 0;
        if (iVar6 != 2) goto LAB_00ff13b8;
        FUN_016d6968(0xf0,piVar4,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      if (uVar13 <= extraout_r1) goto LAB_00ff1784;
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c != 1) goto LAB_00ff14c0;
      if (uVar13 == 2) {
LAB_00ff1430:
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
          *(undefined1 *)(piVar4 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 0;
        if (iVar6 != 2) goto LAB_00ff1430;
        FUN_016d6968(0xf0,piVar4,0x81,1);
        uVar13 = *(uint *)(iVar14 + 0xd4);
      }
      if (uVar13 <= extraout_r1) {
LAB_00ff1784:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(extraout_r1,uVar13,&DAT_0188af68);
      }
      FUN_00c37a38(&local_2c,*(int *)(iVar14 + 0xd0) + extraout_r1 * 0x40);
      piVar4 = local_28;
      uVar13 = local_24 & 0xff;
      if (local_2c == 1) {
        if (uVar13 != 2) {
          if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
            *(undefined1 *)(piVar4 + 1) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = 0;
          if (iVar14 == 2) {
            FUN_016d6968(0xf0,piVar4,0x81,1);
          }
        }
        goto LAB_00ff0e50;
      }
    }
LAB_00ff14c0:
    piVar4 = local_28;
    iVar14 = local_28[4];
    if (iVar14 == local_28[2]) {
      FUN_010002b8();
    }
    *(uint *)(piVar4[3] + iVar14 * 4) = uVar15;
    piVar4[4] = iVar14 + 1;
    if ((((uVar13 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(piVar4 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar4,0x81,1);
      iVar14 = *param_1;
    }
    else {
      iVar14 = *param_1;
    }
  }
  else {
LAB_00ff0e50:
    FUN_00ff188c(uVar15);
    thunk_FUN_016d3fb4(uVar15);
    iVar14 = *param_1;
  }
joined_r0x00ff15d0:
  if (iVar14 != 0) {
    return;
  }
  iVar14 = param_1[1];
  FUN_00ff188c(iVar14);
  if (iVar14 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar13 - 0x10, uVar13 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar7 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - iVar14) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar15;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar13 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar15);
      uVar15 = local_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (uVar15 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,uVar15);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar13 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

