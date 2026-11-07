// FUN_0141f548 @ 0141f548 size=732 calls_out=3 calls_in=1
// strings: 

void FUN_0141f548(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_r4;
  undefined4 uVar13;
  undefined4 unaff_r5;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((char)param_1[3] != '\x02') {
    iVar4 = param_1[1];
    DataMemoryBarrier(0xb);
    piVar8 = (int *)(iVar4 + 0x20);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x1c)) {
        puVar6 = (uint *)(iVar4 + 0x1c);
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = *puVar6 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar6 = (uint *)(iVar4 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar6;
        bVar2 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar2);
      *puVar6 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar5 = *(int *)(iVar4 + 0x24);
        *(undefined4 *)(iVar4 + 0x24) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = *puVar6 & 0xfffffffd;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x28));
        }
      }
    }
    piVar8 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a582c(param_1[1]);
    }
    piVar8 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(param_1[2]);
    }
  }
  iVar4 = *param_1;
  DataMemoryBarrier(0xb);
  pcVar10 = (char *)(iVar4 + 0x18);
  *(undefined1 *)(iVar4 + 0x28) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar10;
    bVar2 = (bool)hasExclusiveAccess(pcVar10);
  } while (!bVar2);
  *pcVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar4 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar4 + 0x14));
    }
  }
  pcVar10 = (char *)(iVar4 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar10;
    bVar2 = (bool)hasExclusiveAccess(pcVar10);
  } while (!bVar2);
  *pcVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar4 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x20));
    }
  }
  piVar8 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = *param_1;
  piVar8 = *(int **)(iVar4 + 8);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (piVar8 != (int *)0x0) {
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      puVar14 = (undefined4 *)piVar8[1];
      pcVar7 = (code *)*puVar14;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar5);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
    }
    thunk_FUN_016d3fb4(piVar8);
  }
  if (*(int *)(iVar4 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar4 + 0x10) + 0xc))(*(undefined4 *)(iVar4 + 0x14));
  }
  if (*(int *)(iVar4 + 0x1c) != 0) {
    (**(code **)(*(int *)(iVar4 + 0x1c) + 0xc))(*(undefined4 *)(iVar4 + 0x20));
  }
  uStack_1c = uStack_18;
  if (iVar4 != -1) {
    piVar8 = (int *)(iVar4 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (iVar4 == 0) {
        return;
      }
      uStack_18 = uStack_14;
      iVar5 = FUN_016d3bc8();
      uVar9 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar15 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar15 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar18 = *(int *)(iVar5 + 8) + 0x10;
      iVar16 = iVar11 * uVar9 + iVar11 + -4;
      iVar11 = iVar18 + iVar16;
      if (4 < uVar15) {
        if (uVar15 != 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar7)();
        }
        uVar15 = *(uint *)(iVar11 + -4);
        if (uVar15 < 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar7)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar7)();
        }
      }
      if ((uint)(iVar11 - iVar4) < uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar7)();
      }
      if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar7)();
      }
      if (*(char *)(iVar18 + iVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar7)();
      }
      bVar3 = *(byte *)(iVar5 + 0x14);
      uVar15 = 1 << uVar9;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar17 = *(uint *)(iVar5 + 0x10);
        uVar12 = *(uint *)(iVar5 + 0xc) | uVar17;
        if ((uVar15 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar7)();
        }
        if ((uVar17 == 0) || (uVar12 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar14;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar14 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar15 + uVar17;
          return;
        }
        puVar6 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar6);
          uVar12 = *puVar6;
          if (uVar17 != uVar12) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar15 + uVar17;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar17 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  return;
}

