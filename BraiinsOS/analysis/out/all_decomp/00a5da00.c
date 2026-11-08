// FUN_00a5da00 @ 00a5da00 size=364 calls_out=1 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00a5da00(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    iVar5 = *(int *)(param_1 + 0x14);
  }
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) == 0) {
    iVar5 = *(int *)(param_1 + 0x20);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
    iVar5 = *(int *)(param_1 + 0x20);
  }
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if ((*(uint *)(param_1 + 0x50) & 0x7fffffff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x5c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    uVar4 = *(uint *)(param_1 + 0x5c);
  }
  if ((uVar4 & 0x7fffffff) == 0) {
    iVar5 = *(int *)(param_1 + 0x68);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    iVar5 = *(int *)(param_1 + 0x68);
  }
  if (iVar5 != -0x80000000) {
    iVar7 = *(int *)(param_1 + 0x6c);
    puVar12 = (undefined4 *)(iVar7 + 0x10);
    for (iVar14 = *(int *)(param_1 + 0x70); iVar14 != 0; iVar14 = iVar14 + -1) {
      if (puVar12[-4] != 0) {
        thunk_FUN_016d3fb4(puVar12[-3]);
      }
      if (puVar12[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar12);
      }
      puVar12 = puVar12 + 6;
    }
    if (iVar5 != 0) {
      if (iVar7 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar4 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar14 * uVar4 + iVar14 + -4;
      iVar14 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar14 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar14 - iVar7) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar4;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar6 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar4);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar12 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar12;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar12 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar9 + uVar11;
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

