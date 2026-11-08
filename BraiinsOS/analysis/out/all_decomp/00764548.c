// FUN_00764548 @ 00764548 size=248 calls_out=1 calls_in=1
// strings: 

void FUN_00764548(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_r4;
  undefined4 uVar10;
  undefined4 unaff_r5;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_0141b160(param_1 + 1);
  iVar11 = *param_1;
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar11 + 0x18);
  *(undefined1 *)(iVar11 + 0x28) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar11 + 0x10);
    *(undefined4 *)(iVar11 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar11 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar11 + 0x14));
    }
  }
  pcVar7 = (char *)(iVar11 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(iVar11 + 0x1c);
    *(undefined4 *)(iVar11 + 0x1c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar11 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar11 + 0x20));
    }
  }
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar11 + -1;
  if (iVar11 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar11 = *param_1;
  piVar5 = *(int **)(iVar11 + 8);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    if (iVar4 != 0) {
      puVar12 = (undefined4 *)piVar5[1];
      pcVar6 = (code *)*puVar12;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar4);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
    }
    thunk_FUN_016d3fb4(piVar5);
  }
  if (*(int *)(iVar11 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
  }
  if (*(int *)(iVar11 + 0x1c) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x1c) + 0xc))(*(undefined4 *)(iVar11 + 0x20));
  }
  uStack_1c = uStack_18;
  if (iVar11 != -1) {
    piVar5 = (int *)(iVar11 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (iVar11 == 0) {
        return;
      }
      uStack_18 = uStack_14;
      iVar4 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar13 = (uint)(*(byte *)(iVar11 + -3) >> 5);
      iVar16 = *(int *)(iVar4 + 8) + 0x10;
      iVar14 = iVar8 * uVar17 + iVar8 + -4;
      iVar8 = iVar16 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar6)();
        }
        uVar13 = *(uint *)(iVar8 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar6)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar6)();
        }
      }
      if ((uint)(iVar8 - iVar11) < uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar6)();
      }
      if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar6)();
      }
      if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar6 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar6)();
      }
      bVar3 = *(byte *)(iVar4 + 0x14);
      uVar13 = 1 << uVar17;
      *(undefined1 *)(iVar11 + -3) = 0xff;
      *(undefined2 *)(iVar11 + -2) = 0;
      do {
        uVar15 = *(uint *)(iVar4 + 0x10);
        uVar9 = *(uint *)(iVar4 + 0xc) | uVar15;
        if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar6)();
        }
        if ((uVar15 == 0) || (uVar9 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar12 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar12;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar12 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar13 + uVar15;
          return;
        }
        puVar18 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar9 = *puVar18;
          if (uVar15 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar2);
        *puVar18 = uVar13 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

