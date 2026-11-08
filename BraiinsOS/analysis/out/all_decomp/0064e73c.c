// FUN_0064e73c @ 0064e73c size=324 calls_out=3 calls_in=5
// strings: 

void FUN_0064e73c(int param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_014ed5dc();
  piVar16 = (int *)(param_1 + 0x10);
  FUN_006c0398(piVar16);
  piVar4 = (int *)*piVar16;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a582c(*piVar16);
    }
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x28) = 1;
    pcVar8 = (char *)(iVar6 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar8;
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar2);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar6 + 0x10);
      *(undefined4 *)(iVar6 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar6 + 0x14));
      }
    }
    pcVar8 = (char *)(iVar6 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar8;
      bVar2 = (bool)hasExclusiveAccess(pcVar8);
    } while (!bVar2);
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar6 + 0x1c);
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar6 + 0x20));
      }
      DataMemoryBarrier(0xb);
      *pcVar8 = '\0';
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      iVar6 = *(int *)(param_1 + 0x14);
      piVar4 = *(int **)(iVar6 + 8);
      if (piVar4 != (int *)0x0) {
        iVar5 = *piVar4;
        if (iVar5 != 0) {
          puVar12 = (undefined4 *)piVar4[1];
          pcVar7 = (code *)*puVar12;
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(iVar5);
          }
          if (puVar12[1] != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
        }
        thunk_FUN_016d3fb4(piVar4);
      }
      if (*(int *)(iVar6 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar6 + 0x10) + 0xc))(*(undefined4 *)(iVar6 + 0x14));
      }
      if (*(int *)(iVar6 + 0x1c) != 0) {
        (**(code **)(*(int *)(iVar6 + 0x1c) + 0xc))(*(undefined4 *)(iVar6 + 0x20));
      }
      if (iVar6 != -1) {
        piVar4 = (int *)(iVar6 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          if (iVar6 == 0) {
            return;
          }
          iVar5 = FUN_016d3bc8();
          uVar18 = *(byte *)(iVar6 + -3) & 0x1f;
          if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
             (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar9 = uVar13 - 0x10, uVar13 == 0)) {
            iVar9 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar13 = (uint)(*(byte *)(iVar6 + -3) >> 5);
          iVar17 = *(int *)(iVar5 + 8) + 0x10;
          iVar14 = iVar9 * uVar18 + iVar9 + -4;
          iVar9 = iVar17 + iVar14;
          if (4 < uVar13) {
            if (uVar13 != 5) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar7)();
            }
            uVar13 = *(uint *)(iVar9 + -4);
            if (uVar13 < 5) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar7)();
            }
            if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar7)();
            }
          }
          if ((uint)(iVar9 - iVar6) < uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar7)();
          }
          if (*(char *)(iVar9 - uVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar7)();
          }
          if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar7)();
          }
          bVar3 = *(byte *)(iVar5 + 0x14);
          uVar13 = 1 << uVar18;
          *(undefined1 *)(iVar6 + -3) = 0xff;
          *(undefined2 *)(iVar6 + -2) = 0;
          do {
            uVar15 = *(uint *)(iVar5 + 0x10);
            uVar10 = *(uint *)(iVar5 + 0xc) | uVar15;
            if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar7)();
            }
            if ((uVar15 == 0) || (uVar10 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar5,uVar18);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar12 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar12;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar12 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar5 + 0x10) = uVar13 + uVar15;
              return;
            }
            puVar19 = (uint *)(iVar5 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar19);
              uVar10 = *puVar19;
              if (uVar15 != uVar10) goto LAB_016d409c;
              bVar2 = (bool)hasExclusiveAccess(puVar19);
            } while (!bVar2);
            *puVar19 = uVar13 + uVar15;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar15 == uVar10) {
              return;
            }
          } while( true );
        }
      }
      return;
    }
  }
  return;
}

