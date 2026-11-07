// FUN_011cee4c @ 011cee4c size=540 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_011cee4c(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int local_28;
  
  iVar18 = *param_1;
  iVar19 = param_1[1];
  local_28 = param_1[2];
  if (iVar19 != 0) {
    iVar13 = 0;
    do {
      iVar14 = iVar13 + 1;
      piVar8 = (int *)(iVar18 + iVar13 * 0xc);
      iVar13 = piVar8[2];
      if (iVar13 != 0) {
        iVar15 = piVar8[1];
        iVar16 = 0;
        do {
          piVar10 = *(int **)(iVar15 + iVar16 * 4);
          iVar16 = iVar16 + 1;
          if ((char)piVar10[0x16] != '\x06') {
            FUN_01157e90();
          }
          FUN_01157f54(piVar10 + 8);
          piVar4 = (int *)piVar10[0x1c];
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar10[0x1c],piVar10[0x1d]);
          }
          piVar4 = (int *)piVar10[0x1e];
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar10[0x1e],piVar10[0x1f]);
          }
          if (*piVar10 != 0) {
            if (*piVar10 == 1) {
              piVar4 = (int *)piVar10[1];
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar6 + -1;
            }
            else {
              piVar4 = (int *)piVar10[4];
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar6 + -1;
              if (iVar6 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0143daec(piVar10[4],piVar10[5]);
              }
              piVar4 = (int *)piVar10[6];
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar6 + -1;
              if (iVar6 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0143daec(piVar10[6],piVar10[7]);
              }
              if (piVar10[3] - 2U < 2) goto LAB_011ceeac;
              if (piVar10[3] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                             &DAT_018a9874);
              }
              piVar4 = (int *)piVar10[1];
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar4;
                bVar1 = (bool)hasExclusiveAccess(piVar4);
              } while (!bVar1);
              *piVar4 = iVar6 + -1;
            }
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar10[1],piVar10[2]);
            }
          }
LAB_011ceeac:
          thunk_FUN_016d3fb4(piVar10);
        } while (iVar16 != iVar13);
      }
      if (*piVar8 != 0) {
        thunk_FUN_016d3fb4(piVar8[1]);
      }
      iVar13 = iVar14;
    } while (iVar14 != iVar19);
  }
  if (local_28 == 0) {
    return;
  }
  if (iVar18 == 0) {
    return;
  }
  iVar19 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar18 + -3) & 0x1f;
  if (((*(byte *)(iVar19 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar19 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar19 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar18 + -3) >> 5);
  iVar15 = *(int *)(iVar19 + 8) + 0x10;
  iVar14 = iVar13 * uVar17 + iVar13 + -4;
  iVar13 = iVar15 + iVar14;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar13 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - iVar18) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar19 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar18 + -3) = 0xff;
  *(undefined2 *)(iVar18 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar19 + 0x10);
    uVar7 = *(uint *)(iVar19 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar19,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar19 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar20 = (uint *)(iVar19 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar7 = *puVar20;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar1);
    *puVar20 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

