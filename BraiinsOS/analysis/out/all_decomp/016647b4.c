// FUN_016647b4 @ 016647b4 size=2252 calls_out=14 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016647b4(int *param_1,int param_2,int *param_3,byte param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  
  if (param_4 == 2) {
    iVar7 = param_1[4];
    piVar15 = (int *)param_1[3];
    local_38 = param_1[2];
    piVar12 = piVar15 + iVar7;
    param_1[2] = 0;
    param_1[3] = 4;
    param_1[4] = 0;
    local_40 = piVar15;
    local_3c = piVar15;
    local_34 = piVar12;
    if (iVar7 != 0) {
      do {
        piVar16 = piVar15 + 1;
        piVar15 = (int *)*piVar15;
        piVar9 = piVar15 + 6;
        do {
          local_3c = piVar16;
          local_30 = piVar15;
          if (*piVar9 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar9);
            goto LAB_0166484c;
          }
          bVar17 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar17);
        *piVar9 = 1;
        DataMemoryBarrier(0xb);
LAB_0166484c:
        uVar13 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar2 = (char)piVar15[7];
        }
        else {
          uVar13 = FUN_015bf3f8();
          uVar13 = uVar13 ^ 1;
          cVar2 = (char)piVar15[7];
        }
        if (cVar2 != '\0') {
          local_28 = (undefined1)uVar13;
          local_2c = piVar9;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad474);
        }
        piVar3 = (int *)piVar15[0xb];
        piVar15[0xc] = 0;
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar3;
            bVar17 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar17);
          *piVar3 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01665328(piVar15 + 0xb);
          }
        }
        piVar15[0xb] = 0;
        if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
          *(undefined1 *)(piVar15 + 7) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar9;
          bVar17 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar17);
        *piVar9 = 0;
        if (iVar7 == 2) {
          FUN_016d6968(0xf0,piVar9,0x81,1);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar15;
          bVar17 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar17);
        *piVar15 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(&local_30);
        }
        piVar15 = piVar16;
      } while (piVar16 != piVar12);
    }
    FUN_01665cb8(&local_40);
    if (((param_2 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *param_1;
      bVar17 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar17);
    *param_1 = 0;
    param_3 = param_1;
    goto LAB_01664f48;
  }
  piVar15 = param_3 + 2;
  uVar13 = param_1[4];
  if ((uint)(*piVar15 - param_3[4]) < uVar13) {
    FUN_01663a8c(piVar15,param_3[4],uVar13);
  }
  local_38 = param_1[2];
  piVar12 = (int *)param_1[3];
  param_1[3] = 4;
  piVar9 = piVar12 + uVar13;
  param_1[2] = 0;
  param_1[4] = 0;
  local_40 = piVar12;
  local_3c = piVar12;
  local_34 = piVar9;
  if (uVar13 != 0) {
    do {
      piVar3 = piVar12 + 1;
      piVar12 = (int *)*piVar12;
      piVar16 = piVar12 + 6;
      do {
        local_3c = piVar3;
        local_30 = piVar12;
        if (*piVar16 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar16);
          goto LAB_01664a28;
        }
        bVar17 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar17);
      *piVar16 = 1;
      DataMemoryBarrier(0xb);
LAB_01664a28:
      uVar13 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar2 = (char)piVar12[7];
      }
      else {
        uVar13 = FUN_015bf3f8();
        uVar13 = uVar13 ^ 1;
        cVar2 = (char)piVar12[7];
      }
      if (cVar2 != '\0') {
        local_28 = (undefined1)uVar13;
        local_2c = piVar16;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018ad534,&DAT_018ad484);
      }
      piVar14 = piVar12 + 0xb;
      piVar4 = (int *)*piVar14;
      piVar10 = (int *)param_1[5];
      if (piVar4 == (int *)0x0 || piVar10 == (int *)0x0) {
        if (piVar10 != (int *)0x0) {
          do {
            iVar7 = *piVar10;
            bVar17 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar17);
          *piVar10 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_01665094;
        }
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar17 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar17);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01665328(piVar14);
          }
        }
      }
      else {
        do {
          iVar7 = *piVar10;
          bVar17 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar17);
        *piVar10 = iVar7 + 1;
        if (iVar7 < 0) {
LAB_01665094:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1665094);
          (*pcVar1)();
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar17 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar17);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(piVar14);
        }
      }
      piVar12[0xb] = (int)piVar10;
      piVar12[0xc] = param_3[4];
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(piVar12 + 7) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar16;
        bVar17 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar17);
      *piVar16 = 0;
      if (iVar7 == 2) {
        FUN_016d6968(0xf0,piVar16,0x81,1);
      }
      iVar7 = param_3[4];
      local_2c = piVar12;
      if (iVar7 == param_3[2]) {
        FUN_016639b4(piVar15);
      }
      *(int **)(param_3[3] + iVar7 * 4) = piVar12;
      param_3[4] = iVar7 + 1;
      piVar12 = piVar3;
    } while (piVar3 != piVar9);
  }
  FUN_01665cb8(&local_40);
  piVar15 = (int *)param_1[5];
  uVar13 = param_1[6];
  if (piVar15 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar17 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar17);
    *piVar15 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328();
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if (((param_2 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
     ) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *param_1;
    bVar17 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar17);
  *param_1 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    iVar7 = param_3[4];
    if (iVar7 == uVar13 + 1) goto LAB_01664cc4;
LAB_01664dac:
    if (iVar7 == 0) {
      puVar6 = &DAT_018ad434;
LAB_01664fbc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar6);
    }
    piVar12 = *(int **)(param_3[3] + (iVar7 + -1) * 4);
    param_3[4] = iVar7 + -1;
    piVar15 = piVar12 + 6;
    do {
      local_2c = piVar12;
      if (*piVar15 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar15);
        goto LAB_01664dec;
      }
      bVar17 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar17);
    *piVar15 = 1;
    DataMemoryBarrier(0xb);
LAB_01664dec:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if ((char)piVar12[7] != '\0') {
        uVar11 = 0;
LAB_01664fec:
        local_3c = (int *)CONCAT31(local_3c._1_3_,(char)uVar11);
        local_40 = piVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_018ad534,&DAT_018ad444);
      }
      piVar12[0xc] = uVar13;
LAB_01664e14:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(piVar12 + 7) = 1;
      }
    }
    else {
      uVar11 = FUN_015bf3f8();
      uVar11 = uVar11 ^ 1;
      if ((char)piVar12[7] != '\0') goto LAB_01664fec;
      piVar12[0xc] = uVar13;
      if (uVar11 == 0) goto LAB_01664e14;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar17 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar17);
    *piVar15 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
      uVar11 = param_3[4];
    }
    else {
      uVar11 = param_3[4];
    }
    local_40 = piVar12;
    if (uVar11 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,uVar11,&DAT_018ad454);
    }
    puVar8 = (undefined4 *)(param_3[3] + uVar13 * 4);
    piVar15 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar17 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar17);
    *piVar15 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar8);
    }
    *puVar8 = piVar12;
  }
  else {
    iVar7 = param_3[4];
    if (iVar7 != uVar13 + 1) goto LAB_01664dac;
LAB_01664cc4:
    if (iVar7 == 0) {
      puVar6 = &DAT_018ad464;
      goto LAB_01664fbc;
    }
    local_40 = *(int **)(param_3[3] + (iVar7 + -1) * 4);
    param_3[4] = iVar7 + -1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *local_40;
      bVar17 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar17);
    *local_40 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(&local_40);
    }
  }
  uVar11 = param_3[4];
  uVar5 = param_3[2];
  uVar13 = uVar11 * 4;
  bVar17 = false;
  if (uVar13 <= uVar5) {
    uVar13 = uVar11 * 2;
    bVar17 = uVar13 <= uVar5;
  }
  if (bVar17 && uVar5 != uVar13) {
    if (uVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594
                  );
    }
    if (uVar11 < uVar11 * 2) {
      uVar11 = uVar11 * 2;
    }
    if (uVar11 == 0) {
      thunk_FUN_016d3fb4(param_3[3]);
      param_3[2] = 0;
      param_3[3] = 4;
    }
    else {
      iVar7 = thunk_FUN_016d4ea4(param_3[3],uVar11 << 2);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar11 << 2);
      }
      param_3[2] = uVar11;
      param_3[3] = iVar7;
    }
  }
  if ((((param_4 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
    *(undefined1 *)(param_3 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *param_3;
    bVar17 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar17);
  *param_3 = 0;
LAB_01664f48:
  if (iVar7 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_3,0x81,1,param_5);
    return;
  }
  return;
}

