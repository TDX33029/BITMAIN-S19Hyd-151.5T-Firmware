// FUN_010408b0 @ 010408b0 size=448 calls_out=2 calls_in=5
// strings: 

void FUN_010408b0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar11 = param_1[1];
  iVar14 = param_1[2];
  if (iVar14 != 0) {
    psVar8 = (short *)(iVar11 + 0x24);
    do {
      iVar3 = 0;
      if (psVar8[-0x12] != 0) {
        iVar3 = *(int *)(psVar8 + -0x10);
      }
      if (psVar8[-0x12] != 0 && iVar3 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + -0xe));
      }
      iVar3 = 0;
      if (*psVar8 != 0) {
        iVar3 = *(int *)(psVar8 + 2);
      }
      if (*psVar8 != 0 && iVar3 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar8 + 4));
      }
      psVar8 = psVar8 + 0x26;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  iVar3 = param_1[4];
  iVar14 = param_1[5] + 1;
  iVar11 = iVar3;
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_0105439c(iVar11);
    iVar11 = iVar11 + 0xe8;
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar3 = param_1[7];
  iVar14 = param_1[8] + 1;
  iVar11 = iVar3;
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_0105439c(iVar11);
    iVar11 = iVar11 + 0xe8;
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar3 = param_1[10];
  iVar14 = param_1[0xb] + 1;
  iVar11 = iVar3;
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_0105439c(iVar11);
    iVar11 = iVar11 + 0xe8;
  }
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar3 = param_1[0xd];
  iVar14 = param_1[0xe] + 1;
  iVar11 = iVar3;
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_0105439c(iVar11);
    iVar11 = iVar11 + 0xe8;
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  iVar11 = param_1[0xf];
  if (iVar11 != -0x80000000) {
    iVar3 = param_1[0x11];
    iVar14 = param_1[0x10];
    if (iVar3 != 0) {
      piVar12 = (int *)(iVar14 + 8);
      do {
        bVar17 = (char)piVar12[-1] != '\0';
        iVar4 = 0;
        if (bVar17) {
          iVar4 = *piVar12;
        }
        if (bVar17 && iVar4 != 0) {
          thunk_FUN_016d3fb4(piVar12[1]);
        }
        piVar12 = piVar12 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (iVar11 != 0) {
      if (iVar14 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar3 = uVar9 - 0x10, uVar9 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar13 = *(int *)(iVar11 + 8) + 0x10;
      iVar4 = iVar3 * uVar15 + iVar3 + -4;
      iVar3 = iVar13 + iVar4;
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
      if ((uint)(iVar3 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar11 + 0x10);
        uVar6 = *(uint *)(iVar11 + 0xc) | uVar10;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar15);
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
          *(uint *)(iVar11 + 0x10) = uVar9 + uVar10;
          return;
        }
        puVar16 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar17 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar17);
        *puVar16 = uVar9 + uVar10;
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

