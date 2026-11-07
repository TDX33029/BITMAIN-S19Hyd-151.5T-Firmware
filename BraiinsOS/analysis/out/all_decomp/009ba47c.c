// FUN_009ba47c @ 009ba47c size=280 calls_out=1 calls_in=14
// strings: 

void FUN_009ba47c(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar10 = *(int *)(param_1 + 0x1c);
  if (iVar10 != 0) {
    piVar5 = *(int **)(param_1 + 0x18);
    do {
      iVar10 = iVar10 + -1;
      iVar4 = 0;
      if (*piVar5 != 0) {
        iVar4 = piVar5[1];
      }
      if (*piVar5 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar5[2]);
      }
      piVar5 = piVar5 + 3;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  if (1 < *(int *)(param_1 + 0x28) + 1U) {
    iVar10 = *(int *)(param_1 + 0x2c);
    piVar5 = (int *)(*(int *)(param_1 + 0x28) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      uVar7 = *(uint *)(iVar10 + 8);
      if (uVar7 < 5) {
        uVar7 = 4;
      }
      if ((*(int *)(iVar10 + 4) + uVar7 + 7 & -uVar7) != 0) {
        thunk_FUN_016d3fb4();
      }
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar7 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar4 = uVar11 - 0x10, uVar11 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar10 + 8) + 0x10;
      iVar12 = iVar4 * uVar7 + iVar4 + -4;
      iVar4 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar4 + -4);
        if (uVar11 < 5) {
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
      if ((uint)(iVar4 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar4 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar10 + 0x14);
      uVar11 = 1 << uVar7;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar10 + 0x10);
        uVar8 = *(uint *)(iVar10 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar15 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

