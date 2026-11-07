// FUN_00d984f0 @ 00d984f0 size=608 calls_out=3 calls_in=0
// strings: 

void FUN_00d984f0(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 100);
  if (cVar1 == '\0') {
    puVar5 = *(undefined1 **)(param_1 + 0x5c);
    iVar8 = *(int *)(param_1 + 0x60);
    if (iVar8 != 0) {
      do {
        *puVar5 = 0;
        iVar8 = iVar8 + -1;
        puVar5 = puVar5 + 1;
      } while (iVar8 != 0);
      puVar5 = *(undefined1 **)(param_1 + 0x5c);
    }
    iVar8 = *(int *)(param_1 + 0x58);
    piVar4 = (int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = 0;
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    goto LAB_00d986c4;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xcd) == '\x03') {
      cVar1 = *(char *)(param_1 + 200);
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = *(char *)(param_1 + 0xc5);
      }
      if (bVar19 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xbc) == '\x03') {
          piVar4 = *(int **)(param_1 + 0xb8);
          if (*piVar4 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar19 = (bool)hasExclusiveAccess(piVar4);
            if (bVar19) {
              *piVar4 = 0x84;
              goto LAB_00d98744;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar4[2] + 0x10))();
        }
        else if ((*(char *)(param_1 + 0xbc) == '\0') && (*(int *)(param_1 + 0x9c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
        }
LAB_00d98744:
        *(undefined1 *)(param_1 + 0xc4) = 0;
      }
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    piVar4 = *(int **)(param_1 + 0xbc);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar19 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar19);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016592f4(*(undefined4 *)(param_1 + 0xbc));
    }
    iVar8 = *(int *)(param_1 + 0x98);
    if (iVar8 != -0x80000000) {
      if (iVar8 == -0x7fffffff) {
        piVar4 = *(int **)(param_1 + 0x9c);
        if (*piVar4 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar19 = (bool)hasExclusiveAccess(piVar4);
          if (bVar19) {
            *piVar4 = 0x84;
            goto LAB_00d98618;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar4[2] + 0x10))();
      }
      else if (iVar8 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
      }
    }
LAB_00d98618:
    if (*(int *)(param_1 + 0x3c) == 0) {
      FUN_00d99490(param_1);
    }
  }
  puVar5 = *(undefined1 **)(param_1 + 0x50);
  iVar8 = *(int *)(param_1 + 0x54);
  if (iVar8 != 0) {
    puVar9 = puVar5;
    do {
      *puVar9 = 0;
      iVar8 = iVar8 + -1;
      puVar9 = puVar9 + 1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
  }
  puVar5 = *(undefined1 **)(param_1 + 0x44);
  iVar8 = *(int *)(param_1 + 0x48);
  if (iVar8 != 0) {
    do {
      *puVar5 = 0;
      iVar8 = iVar8 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar8 != 0);
    puVar5 = *(undefined1 **)(param_1 + 0x44);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  piVar4 = (int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = 0;
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00d986c4:
  if (*piVar4 == 0) {
    return;
  }
  iVar8 = piVar4[1];
  if (iVar8 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar16 = *(int *)(iVar6 + 8) + 0x10;
  iVar14 = iVar10 * uVar17 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar10 - iVar8) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar17;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar6 + 0x10);
    uVar11 = *(uint *)(iVar6 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar18 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar11 = *puVar18;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar19 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar19);
    *puVar18 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

