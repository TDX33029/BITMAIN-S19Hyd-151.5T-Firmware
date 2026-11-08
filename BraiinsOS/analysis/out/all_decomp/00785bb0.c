// FUN_00785bb0 @ 00785bb0 size=740 calls_out=5 calls_in=0
// strings: 

void FUN_00785bb0(int param_1)

{
  short sVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined1 auStack_110 [8];
  undefined1 *local_108;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar15 = *(int *)(param_1 + 0x1f0);
  iVar12 = *(int *)(param_1 + 500);
  if (*(uint *)(param_1 + 0x1e8) < 3) {
    iVar8 = param_1 + iVar15 * 0xf0 + 8;
    while (iVar12 != iVar15) {
      iVar15 = iVar15 + 1;
      *(int *)(param_1 + 0x1f0) = iVar15;
      FUN_016dd1aa(auStack_110,iVar8,0xf0);
      if (local_108 == &DAT_3b9aca00) break;
      FUN_006b8bc4(iVar8);
      iVar8 = iVar8 + 0xf0;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8) + iVar15 * 0xf0;
    while (iVar12 != iVar15) {
      iVar15 = iVar15 + 1;
      *(int *)(param_1 + 0x1f0) = iVar15;
      FUN_016dd1aa(auStack_110,iVar8,0xf0);
      if (local_108 == &DAT_3b9aca00) break;
      FUN_006b8bc4(auStack_110);
      iVar8 = iVar8 + 0xf0;
    }
  }
  FUN_006b8a80(param_1);
  iVar15 = *(int *)(param_1 + 0x1fc);
  iVar12 = *(int *)(param_1 + 0x200);
  if (iVar12 != 0) {
    psVar9 = (short *)(iVar15 + 0x24);
    do {
      iVar8 = 0;
      if (psVar9[-0x12] != 0) {
        iVar8 = *(int *)(psVar9 + -0x10);
      }
      if (psVar9[-0x12] != 0 && iVar8 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar9 + -0xe));
      }
      iVar8 = 0;
      if (*psVar9 != 0) {
        iVar8 = *(int *)(psVar9 + 2);
      }
      if (*psVar9 != 0 && iVar8 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar9 + 4));
      }
      psVar9 = psVar9 + 0x26;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  iVar8 = *(int *)(param_1 + 0x208);
  iVar12 = *(int *)(param_1 + 0x20c) + 1;
  iVar15 = iVar8;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_007b5fa0(iVar15);
    iVar15 = iVar15 + 0xe8;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x214);
  iVar12 = *(int *)(param_1 + 0x218) + 1;
  iVar15 = iVar8;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_007b5fa0(iVar15);
    iVar15 = iVar15 + 0xe8;
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x220);
  iVar12 = *(int *)(param_1 + 0x224) + 1;
  iVar15 = iVar8;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_007b5fa0(iVar15);
    iVar15 = iVar15 + 0xe8;
  }
  if (*(int *)(param_1 + 0x21c) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x22c);
  iVar12 = *(int *)(param_1 + 0x230) + 1;
  iVar15 = iVar8;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_007b5fa0(iVar15);
    iVar15 = iVar15 + 0xe8;
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar15 = *(int *)(param_1 + 0x234);
  if (iVar15 != -0x80000000) {
    iVar12 = *(int *)(param_1 + 0x23c);
    iVar8 = *(int *)(param_1 + 0x238);
    if (iVar12 != 0) {
      piVar13 = (int *)(iVar8 + 8);
      do {
        bVar18 = (char)piVar13[-1] != '\0';
        iVar4 = 0;
        if (bVar18) {
          iVar4 = *piVar13;
        }
        if (bVar18 && iVar4 != 0) {
          thunk_FUN_016d3fb4(piVar13[1]);
        }
        piVar13 = piVar13 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (iVar15 != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
  }
  sVar1 = *(short *)(param_1 + 0x260);
  if (sVar1 != 2) {
    iVar15 = 0;
    if (sVar1 != 0) {
      iVar15 = *(int *)(param_1 + 0x264);
    }
    if (sVar1 != 0 && iVar15 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x268));
    }
    bVar18 = *(short *)(param_1 + 0x284) != 0;
    iVar15 = 0;
    if (bVar18) {
      iVar15 = *(int *)(param_1 + 0x288);
    }
    if (bVar18 && iVar15 != 0) {
      iVar15 = *(int *)(param_1 + 0x28c);
      if (iVar15 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar14 = *(int *)(iVar12 + 8) + 0x10;
      iVar4 = iVar8 * uVar16 + iVar8 + -4;
      iVar8 = iVar14 + iVar4;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar8 - iVar15) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar4) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar12 + 0x14);
      uVar10 = 1 << uVar16;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar12 + 0x10);
        uVar6 = *(uint *)(iVar12 + 0xc) | uVar11;
        if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar16);
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
          *(uint *)(iVar12 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar6 = *puVar17;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar18 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar18);
        *puVar17 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

