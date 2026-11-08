// FUN_0124fe58 @ 0124fe58 size=552 calls_out=5 calls_in=3
// strings: internal error: entered unreachable code: invalid Once state

void FUN_0124fe58(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int *local_28;
  
  iVar19 = param_1[1];
  iVar4 = param_1[3];
  iVar14 = 0;
  local_28 = param_1;
  while (iVar14 != ((uint)(iVar4 - iVar19) >> 2) * -0x55555555) {
    iVar9 = iVar14 + 1;
    piVar15 = (int *)(iVar19 + iVar14 * 0xc);
    iVar14 = piVar15[2];
    if (iVar14 != 0) {
      iVar16 = piVar15[1];
      iVar17 = 0;
      do {
        piVar11 = *(int **)(iVar16 + iVar17 * 4);
        iVar17 = iVar17 + 1;
        if ((char)piVar11[0x16] != '\x06') {
          FUN_01157e90();
        }
        FUN_01157f54(piVar11 + 8);
        piVar5 = (int *)piVar11[0x1c];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar11[0x1c],piVar11[0x1d]);
        }
        piVar5 = (int *)piVar11[0x1e];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar11[0x1e],piVar11[0x1f]);
        }
        if (*piVar11 != 0) {
          if (*piVar11 == 1) {
            piVar5 = (int *)piVar11[1];
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar7 + -1;
          }
          else {
            piVar5 = (int *)piVar11[4];
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar11[4],piVar11[5]);
            }
            piVar5 = (int *)piVar11[6];
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar11[6],piVar11[7]);
            }
            if (piVar11[3] - 2U < 2) goto LAB_0124fec0;
            if (piVar11[3] != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                           &DAT_018a9874);
            }
            piVar5 = (int *)piVar11[1];
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar7 + -1;
          }
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar11[1],piVar11[2]);
          }
        }
LAB_0124fec0:
        thunk_FUN_016d3fb4(piVar11);
      } while (iVar17 != iVar14);
    }
    iVar14 = iVar9;
    if (*piVar15 != 0) {
      thunk_FUN_016d3fb4(piVar15[1]);
    }
  }
  if (local_28[2] == 0) {
    return;
  }
  iVar14 = *local_28;
  if (iVar14 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar19 = uVar12 - 0x10, uVar12 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar16 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar19 * uVar18 + iVar19 + -4;
  iVar19 = iVar16 + iVar9;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar19 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar19 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar19 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar18;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar20 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar8 = *puVar20;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar1);
    *puVar20 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

