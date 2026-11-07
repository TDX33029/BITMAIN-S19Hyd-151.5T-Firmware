// FUN_00aab134 @ 00aab134 size=340 calls_out=2 calls_in=31
// strings: 

void FUN_00aab134(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar11 = (int *)(param_1 + 0x34);
  if ((*piVar11 != -0x80000000) && (FUN_00aa433c(piVar11), *piVar11 != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
  }
  uVar6 = *(uint *)(param_1 + 0x1c);
  iVar10 = 0;
  if (uVar6 == 0) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar4 = uVar7 - uVar5;
    if (uVar7 < uVar5) {
      uVar4 = uVar7;
    }
    if (uVar5 - uVar4 < uVar6) {
      iVar10 = uVar6 - (uVar5 - uVar4);
    }
    else {
      uVar5 = uVar4 + uVar6;
    }
  }
  iVar12 = *(int *)(param_1 + 0x14);
  puVar8 = (undefined4 *)(iVar12 + uVar4 * 0xc + 4);
  for (iVar14 = uVar5 - uVar4; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  puVar8 = (undefined4 *)(iVar12 + 4);
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar8[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar8);
    }
    puVar8 = puVar8 + 3;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_00aa433c((int *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (param_1 != -1) {
    piVar11 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar11;
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar6 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar12 = uVar4 - 0x10, uVar4 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar4 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar10 + 8) + 0x10;
      iVar14 = iVar12 * uVar6 + iVar12 + -4;
      iVar12 = iVar13 + iVar14;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar4 = *(uint *)(iVar12 + -4);
        if (uVar4 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar12 - param_1) < uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar12 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar10 + 0x14);
      uVar4 = 1 << uVar6;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar7 = *(uint *)(iVar10 + 0x10);
        uVar5 = *(uint *)(iVar10 + 0xc) | uVar7;
        if ((uVar4 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar7 == 0) || (uVar5 + uVar4 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar4 + uVar7;
          return;
        }
        puVar15 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar7 != uVar5) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar4 + uVar7;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar7 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

