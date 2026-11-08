// FUN_01089bbc @ 01089bbc size=708 calls_out=14 calls_in=6
// strings: 

void FUN_01089bbc(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  int local_1c;
  
  iVar13 = 0x80;
  do {
    iVar4 = FUN_0106fc6c();
    local_1c = iVar4;
    FUN_00fbbe08(&local_1c);
    if ((iVar4 != 0) &&
       (iVar5 = *(int *)(iVar4 + 0x40c) + -1, *(int *)(iVar4 + 0x40c) = iVar5, iVar5 == 0)) {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar4 + 0x420) = 0;
      if (*(int *)(iVar4 + 0x410) == 0) {
        FUN_00fbb698(iVar4);
      }
    }
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  if ((*(uint *)(param_1 + 0x138) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x13c));
  }
  FUN_01087110(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 100) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
  }
  FUN_010712cc(param_1 + 0x144);
  FUN_01089504(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 200));
  }
  FUN_010879fc(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x18) == 4) {
    piVar6 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
LAB_01089cdc:
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else if (*(int *)(param_1 + 0x18) == 3) {
    piVar6 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    goto LAB_01089cdc;
  }
  FUN_01087ea8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x20) == 4) {
    piVar6 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 3) goto LAB_01089d5c;
    piVar6 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
  }
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x24));
  }
LAB_01089d5c:
  piVar6 = *(int **)(param_1 + 0x38);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
  }
  piVar6 = *(int **)(param_1 + 0xe8);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
    }
  }
  piVar6 = *(int **)(param_1 + 0x1a8);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    }
  }
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (FUN_010877dc(*(int *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4)),
     *(int *)(param_1 + 0xf4) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
  }
  FUN_01071488(param_1 + 0x110);
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar5 = iVar4 * uVar14 + iVar4 + -4;
      iVar4 = iVar12 + iVar5;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar4 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar4 - param_1) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar12 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar13 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar13 + 0x10);
        uVar8 = *(uint *)(iVar13 + 0xc) | uVar11;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar11 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

