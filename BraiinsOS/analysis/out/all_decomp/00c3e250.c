// FUN_00c3e250 @ 00c3e250 size=140 calls_out=2 calls_in=0
// strings: 

uint FUN_00c3e250(int param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00ce3310(param_1 + 0x50);
  uVar4 = *(int *)(param_1 + 0xc) - (uint)(*(uint *)(param_1 + 8) < 5);
  bVar15 = 1 < *(uint *)(param_1 + 8) - 5;
  uVar3 = uVar4 - !bVar15;
  if (uVar4 != 0 || uVar4 < bVar15) {
    iVar11 = *(int *)(param_1 + 0x44);
    puVar8 = (undefined4 *)(iVar11 + 0x10);
    for (iVar13 = *(int *)(param_1 + 0x48); iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar8[-4] != 0) {
        thunk_FUN_016d3fb4(puVar8[-3]);
      }
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 6;
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      if (iVar11 == 0) {
        return 0;
      }
      iVar13 = FUN_016d3bc8();
      uVar3 = *(byte *)(iVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar4 - 0x10, uVar4 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar4 = (uint)(*(byte *)(iVar11 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar9 = iVar5 * uVar3 + iVar5 + -4;
      iVar5 = iVar12 + iVar9;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar4 = *(uint *)(iVar5 + -4);
        if (uVar4 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar5 - iVar11) < uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar4 = 1 << uVar3;
      *(undefined1 *)(iVar11 + -3) = 0xff;
      *(undefined2 *)(iVar11 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar13 + 0x10);
        uVar6 = *(uint *)(iVar13 + 0xc) | uVar10;
        if ((uVar4 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar3);
          uVar3 = FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return uVar3;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar8;
          uVar3 = FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar7;
          return uVar3;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar4 + uVar10;
          return uVar4;
        }
        puVar14 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar4 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return uVar4;
        }
      } while( true );
    }
  }
  return uVar3;
}

