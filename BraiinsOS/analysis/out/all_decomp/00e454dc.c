// FUN_00e454dc @ 00e454dc size=184 calls_out=1 calls_in=12
// strings: 

void FUN_00e454dc(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar12 = *(int *)(param_1 + 0xc);
  if (iVar12 != 0) {
    iVar9 = *(int *)(param_1 + 8);
    piVar14 = (int *)(iVar9 + 0x34);
    do {
      if (((1 < piVar14[-0xb] - 3U) && (iVar4 = *piVar14, iVar4 != 0)) &&
         (uVar6 = iVar4 * 0x11 & 0xfffffffc, uVar6 + iVar4 != -0x19)) {
        thunk_FUN_016d3fb4((piVar14[-1] - uVar6) + -0x14);
      }
      piVar14 = piVar14 + 0x1c;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    thunk_FUN_016d3fb4(iVar9);
  }
  if (param_1 != -1) {
    piVar14 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar14;
      bVar1 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar1);
    *piVar14 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar6 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar9 = uVar10 - 0x10, uVar10 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar12 + 8) + 0x10;
      iVar4 = iVar9 * uVar6 + iVar9 + -4;
      iVar9 = iVar13 + iVar4;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar9 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar9 - param_1) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar12 + 0x14);
      uVar10 = 1 << uVar6;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0xc) | uVar11;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

