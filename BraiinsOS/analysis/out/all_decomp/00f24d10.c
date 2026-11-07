// FUN_00f24d10 @ 00f24d10 size=376 calls_out=1 calls_in=1
// strings: 

void FUN_00f24d10(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x2c) == -0x80000000 || *(int *)(param_1 + 0x2c) == 0) {
    if (*(int *)(param_1 + 0x38) != -0x80000000 && *(int *)(param_1 + 0x38) != 0) goto LAB_00f24e28;
LAB_00f24d4c:
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    if (*(int *)(param_1 + 0x38) == -0x80000000 || *(int *)(param_1 + 0x38) == 0) goto LAB_00f24d4c;
LAB_00f24e28:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x44) == -0x80000000 || *(int *)(param_1 + 0x44) == 0) {
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x50) == -0x80000000 || *(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0x5c) != -0x80000000 && *(int *)(param_1 + 0x5c) != 0) {
LAB_00f24e70:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
      iVar4 = *(int *)(param_1 + 0x68);
      goto joined_r0x00f24dac;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x5c) != -0x80000000 && *(int *)(param_1 + 0x5c) != 0) goto LAB_00f24e70;
  }
  iVar4 = *(int *)(param_1 + 0x68);
joined_r0x00f24dac:
  if (iVar4 != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x6c);
    puVar11 = (undefined4 *)(iVar6 + 0x10);
    for (iVar13 = *(int *)(param_1 + 0x70); iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar11[-4] != 0) {
        thunk_FUN_016d3fb4(puVar11[-3]);
      }
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 6;
    }
    if (iVar4 != 0) {
      if (iVar6 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar13 = uVar8 - 0x10, uVar8 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar12 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar13 * uVar14 + iVar13 + -4;
      iVar13 = iVar12 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar8 = *(uint *)(iVar13 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar13 - iVar6) < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar8 = 1 << uVar14;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar4 + 0x10);
        uVar5 = *(uint *)(iVar4 + 0xc) | uVar10;
        if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar11 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar11;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar11 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar10 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

