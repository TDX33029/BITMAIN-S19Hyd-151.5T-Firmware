// FUN_00a61bc0 @ 00a61bc0 size=272 calls_out=1 calls_in=0
// strings: 

void FUN_00a61bc0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar15 = *param_1;
  if (iVar15 != 0) {
    puVar13 = (uint *)(param_1[1] + 0x10);
    for (iVar11 = ((uint)(param_1[3] - param_1[1]) >> 2) * 0x38e38e39; iVar11 != 0;
        iVar11 = iVar11 + -1) {
      if ((*puVar13 & 0x7fffffff) == 0) {
        uVar4 = puVar13[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar13[1]);
        uVar4 = puVar13[-3];
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(puVar13[-2]);
      }
      puVar13 = puVar13 + 9;
    }
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(iVar15);
    }
  }
  iVar15 = param_1[4];
  if (iVar15 != 0) {
    puVar14 = (undefined4 *)(param_1[5] + 4);
    for (iVar11 = ((uint)(param_1[7] - param_1[5]) >> 2) * -0x55555555; iVar11 != 0;
        iVar11 = iVar11 + -1) {
      if (puVar14[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar14);
      }
      puVar14 = puVar14 + 3;
    }
    if (param_1[6] != 0) {
      if (iVar15 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar4 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar12 = *(int *)(iVar11 + 8) + 0x10;
      iVar9 = iVar5 * uVar4 + iVar5 + -4;
      iVar5 = iVar12 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar5 + -4);
        if (uVar8 < 5) {
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
      if ((uint)(iVar5 - iVar15) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar8 = 1 << uVar4;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar11 + 0x10);
        uVar6 = *(uint *)(iVar11 + 0xc) | uVar10;
        if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar4);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar14 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar14;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar14 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar13 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar13);
          uVar6 = *puVar13;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar3);
        *puVar13 = uVar8 + uVar10;
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

