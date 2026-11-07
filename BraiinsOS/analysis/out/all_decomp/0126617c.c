// FUN_0126617c @ 0126617c size=2644 calls_out=10 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0126617c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint extraout_r1;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_2c;
  int *local_28;
  undefined4 local_24;
  
  uVar16 = thunk_FUN_016de0ee(param_1,0x230);
  piVar3 = (int *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)piVar3[1] == '\0') {
    do {
      bVar15 = (bool)hasExclusiveAccess(0x18d912c);
    } while (!bVar15);
    if (DAT_018d912c == 0) {
      DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
    }
    iVar5 = DAT_018d912c + 1;
    *piVar3 = DAT_018d912c;
    DAT_018d912c = iVar5;
    *(undefined1 *)(piVar3 + 1) = 1;
    iVar5 = *(int *)(param_1 + 0x304);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x304);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_0188af58);
  }
  FUN_0184606c(*piVar3);
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_01266284;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_01266284:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_0126635c;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_0126635c:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_01266434;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_01266434:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_0126650c;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_0126650c:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_012665e4;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_012665e4:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  piVar3 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      local_2c = 1;
      local_24 = CONCAT31(local_24._1_3_,2);
      goto LAB_012666bc;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_24 = CONCAT31(local_24._1_3_,(char)uVar13);
  bVar15 = (char)piVar3[1] == '\0';
  local_2c = (uint)!bVar15;
  local_28 = piVar3;
  if (bVar15) goto LAB_012668b4;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar15 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar15);
  *piVar3 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar3,0x81,1);
  }
LAB_012666bc:
  uVar13 = *(uint *)(param_1 + 0x304);
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  FUN_00c37a38(&local_2c,*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  piVar3 = local_28;
  uVar13 = local_24 & 0xff;
  if (local_2c != 1) goto LAB_012668b4;
  if (uVar13 == 2) {
LAB_01266738:
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  else {
    if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = 0;
    if (iVar5 != 2) goto LAB_01266738;
    FUN_016d6968(0xf0,piVar3,0x81,1);
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  FUN_00c37a38(&local_2c,*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  piVar3 = local_28;
  uVar13 = local_24 & 0xff;
  if (local_2c != 1) goto LAB_012668b4;
  if (uVar13 == 2) {
LAB_012667b0:
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  else {
    if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = 0;
    if (iVar5 != 2) goto LAB_012667b0;
    FUN_016d6968(0xf0,piVar3,0x81,1);
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  if (uVar13 <= extraout_r1) goto LAB_01266b64;
  FUN_00c37a38(&local_2c,*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
  piVar3 = local_28;
  uVar13 = local_24 & 0xff;
  if (local_2c != 1) goto LAB_012668b4;
  if (uVar13 == 2) {
LAB_01266828:
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  else {
    if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = 0;
    if (iVar5 != 2) goto LAB_01266828;
    FUN_016d6968(0xf0,piVar3,0x81,1);
    uVar13 = *(uint *)(param_1 + 0x304);
  }
  if (extraout_r1 < uVar13) {
    FUN_00c37a38(&local_2c,*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
    piVar3 = local_28;
    uVar13 = local_24 & 0xff;
    if (local_2c == 1) {
      if (uVar13 != 2) {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)(piVar3 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar15 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar15);
        *piVar3 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar3,0x81,1);
        }
      }
      FUN_012632b4(param_2);
      if (param_2 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar13 = *(byte *)(param_2 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(param_2 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar6 * uVar13 + iVar6 + -4;
      iVar6 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar6 - param_2) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar13;
      *(undefined1 *)(param_2 + -3) = 0xff;
      *(undefined2 *)(param_2 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar5,uVar13);
          uVar13 = local_24;
          FUN_016dddc0(&DAT_018ddd48);
          if (uVar13 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(local_28,uVar13);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar14 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar7 = *puVar14;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
LAB_012668b4:
    piVar3 = local_28;
    iVar5 = local_28[4];
    if (iVar5 == local_28[2]) {
      FUN_010002b8();
    }
    *(int *)(piVar3[3] + iVar5 * 4) = param_2;
    piVar3[4] = iVar5 + 1;
    if ((((uVar13 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = 0;
    if (iVar5 == 2) {
      local_24 = (int)register0x00000054 + -0xc;
      software_interrupt(0);
      FUN_016d3496(piVar3,0x81,1,param_5);
      return;
    }
    return;
  }
LAB_01266b64:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(extraout_r1,uVar13,&DAT_0188af68);
}

