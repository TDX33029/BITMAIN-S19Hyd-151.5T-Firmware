// FUN_0105aee4 @ 0105aee4 size=556 calls_out=4 calls_in=9
// strings: 

void FUN_0105aee4(int param_1)

{
  char cVar1;
  short sVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar8 = *(int **)(param_1 + 0xc);
  while (piVar8 != (int *)0x0) {
    piVar16 = (int *)piVar8[0x31];
    if (*piVar8 != -0x80000000) {
      FUN_010408b0(piVar8);
      sVar2 = (short)piVar8[0x1a];
      if (sVar2 != 2) {
        iVar5 = 0;
        if (sVar2 != 0) {
          iVar5 = piVar8[0x1b];
        }
        if (sVar2 != 0 && iVar5 != 0) {
          thunk_FUN_016d3fb4(piVar8[0x1c]);
        }
        bVar20 = (short)piVar8[0x23] != 0;
        iVar5 = 0;
        if (bVar20) {
          iVar5 = piVar8[0x24];
        }
        if (bVar20 && iVar5 != 0) {
          thunk_FUN_016d3fb4(piVar8[0x25]);
        }
      }
      iVar5 = piVar8[0x30];
      DataMemoryBarrier(0xb);
      pcVar6 = (char *)(iVar5 + 0x24);
      *(undefined1 *)(iVar5 + 0x34) = 1;
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar6;
        bVar20 = (bool)hasExclusiveAccess(pcVar6);
      } while (!bVar20);
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar10 = *(int *)(iVar5 + 0x1c);
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        if (iVar10 == 0) {
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar5 + 0x24) = 0;
          DataMemoryBarrier(0xb);
        }
        else {
          DataMemoryBarrier(0xb);
          *pcVar6 = '\0';
          DataMemoryBarrier(0xb);
          (**(code **)(iVar10 + 4))(*(undefined4 *)(iVar5 + 0x20));
        }
      }
      pcVar6 = (char *)(iVar5 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        cVar1 = *pcVar6;
        bVar20 = (bool)hasExclusiveAccess(pcVar6);
      } while (!bVar20);
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar1 == '\0') {
        iVar10 = *(int *)(iVar5 + 0x28);
        *(undefined4 *)(iVar5 + 0x28) = 0;
        if (iVar10 != 0) {
          (**(code **)(iVar10 + 0xc))(*(undefined4 *)(iVar5 + 0x2c));
        }
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar5 + 0x30) = 0;
        DataMemoryBarrier(0xb);
      }
      piVar7 = (int *)piVar8[0x30];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar20 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar20);
      *piVar7 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0105a70c(piVar8[0x30]);
      }
    }
    thunk_FUN_016d3fb4(piVar8);
    piVar8 = piVar16;
  }
  piVar8 = (int *)*(int *)(param_1 + 0x14);
  while (piVar8 != (int *)0x0) {
    iVar5 = *piVar8;
    piVar16 = (int *)piVar8[1];
    if (piVar16 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar16;
        bVar20 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar20);
      *piVar16 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar8[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar8);
    piVar8 = (int *)iVar5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  }
  if (param_1 != -1) {
    piVar8 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar8;
      bVar20 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar20);
    *piVar8 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar18 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar13 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar17 = *(int *)(iVar5 + 8) + 0x10;
      iVar14 = iVar10 * uVar18 + iVar10 + -4;
      iVar10 = iVar17 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar13 = *(uint *)(iVar10 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar10 - param_1) < uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar5 + 0x14);
      uVar13 = 1 << uVar18;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar15 = *(uint *)(iVar5 + 0x10);
        uVar11 = *(uint *)(iVar5 + 0xc) | uVar15;
        if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar18);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar12 = *puVar9;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar9 = uVar12;
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
          uVar11 = *puVar19;
          if (uVar15 != uVar11) goto LAB_016d409c;
          bVar20 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar20);
        *puVar19 = uVar13 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

