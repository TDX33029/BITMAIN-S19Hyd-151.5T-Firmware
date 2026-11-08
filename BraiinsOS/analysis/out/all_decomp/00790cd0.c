// FUN_00790cd0 @ 00790cd0 size=352 calls_out=5 calls_in=96
// strings: 

void FUN_00790cd0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 != 0) {
    piVar5 = *(int **)(param_1 + 0x30);
    do {
      iVar9 = iVar9 + -1;
      iVar4 = 0;
      if (*piVar5 != 0) {
        iVar4 = piVar5[1];
      }
      if (*piVar5 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar5[2]);
      }
      piVar5 = piVar5 + 3;
    } while (iVar9 != 0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  iVar4 = *(int *)(param_1 + 0x48) + 1;
  iVar9 = *(int *)(param_1 + 0x44);
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_00648e64(iVar9);
    iVar9 = iVar9 + 0x10;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  FUN_0076bf34(param_1 + 0x4c);
  if (*(int *)(param_1 + 8) == 0) {
    piVar5 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(*(undefined4 *)(param_1 + 0xc));
    }
  }
  else {
    piVar5 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0xc));
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar9 + 8) + 0x10;
      iVar11 = iVar4 * uVar14 + iVar4 + -4;
      iVar4 = iVar13 + iVar11;
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
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar9 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar9 + 0x10);
        uVar7 = *(uint *)(iVar9 + 0xc) | uVar12;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar9,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

