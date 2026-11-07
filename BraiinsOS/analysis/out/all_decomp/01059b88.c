// FUN_01059b88 @ 01059b88 size=172 calls_out=2 calls_in=33
// strings: 

void FUN_01059b88(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = 0;
  for (param_2 = param_2 + 1; param_2 != 1; param_2 = param_2 + -1) {
    iVar8 = param_1 + iVar12;
    bVar15 = *(short *)(iVar8 + 8) != 0;
    iVar3 = 0;
    if (bVar15) {
      iVar3 = *(int *)(iVar8 + 0xc);
    }
    if (bVar15 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x10));
    }
    bVar15 = *(short *)(iVar8 + 0x2c) != 0;
    iVar3 = 0;
    if (bVar15) {
      iVar3 = *(int *)(iVar8 + 0x30);
    }
    if (bVar15 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + 0x34));
    }
    iVar12 = iVar12 + 0xe8;
    FUN_0108f884(iVar8 + 0x50);
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar4;
      bVar15 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar15);
    *piVar4 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar13 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar3 = uVar9 - 0x10, uVar9 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar11 = *(int *)(iVar12 + 8) + 0x10;
      iVar8 = iVar3 * uVar13 + iVar3 + -4;
      iVar3 = iVar11 + iVar8;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar3 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar3 - param_1) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar12 + 0x14);
      uVar9 = 1 << uVar13;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar12 + 0x10);
        uVar6 = *(uint *)(iVar12 + 0xc) | uVar10;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar9 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar9 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

