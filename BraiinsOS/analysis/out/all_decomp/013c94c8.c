// FUN_013c94c8 @ 013c94c8 size=180 calls_out=1 calls_in=3
// strings: 

void FUN_013c94c8(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[0x5a] != 0) {
    thunk_FUN_016d3fb4(param_1[0x5b]);
  }
  if ((*param_1 & 0x7fffffff) == 0) {
    uVar10 = param_1[0x4f];
  }
  else {
    thunk_FUN_016d3fb4(param_1[1]);
    uVar10 = param_1[0x4f];
  }
  if (uVar10 != 0x80000000) {
    uVar13 = param_1[0x50];
    puVar7 = (undefined4 *)(uVar13 + 4);
    for (uVar12 = param_1[0x51]; uVar12 != 0; uVar12 = uVar12 - 1) {
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
    }
    if (uVar10 != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    if (param_1[0x52] != 0) {
      uVar10 = param_1[0x53];
      if (uVar10 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar12 = *(byte *)(uVar10 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar13 - 0x10, uVar13 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar13 = (uint)(*(byte *)(uVar10 - 3) >> 5);
      iVar11 = *(int *)(iVar4 + 8) + 0x10;
      iVar8 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar11 + iVar8;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar13 = *(uint *)(iVar5 + -4);
        if (uVar13 < 5) {
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
      if (iVar5 - uVar10 < uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar13 = 1 << uVar12;
      *(undefined1 *)(uVar10 - 3) = 0xff;
      *(undefined2 *)(uVar10 - 2) = 0;
      do {
        uVar9 = *(uint *)(iVar4 + 0x10);
        uVar10 = *(uint *)(iVar4 + 0xc) | uVar9;
        if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar9 == 0) || (uVar10 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar13 + uVar9;
          return;
        }
        puVar14 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar10 = *puVar14;
          if (uVar9 != uVar10) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar3);
        *puVar14 = uVar13 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

