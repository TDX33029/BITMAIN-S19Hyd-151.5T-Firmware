// FUN_00f1d68c @ 00f1d68c size=236 calls_out=1 calls_in=1
// strings: 

void FUN_00f1d68c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  iVar12 = *(int *)(param_1 + 0x50);
  iVar14 = *(int *)(param_1 + 0x54);
  iVar9 = 0;
  do {
    if (iVar14 == 0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        return;
      }
      if (iVar12 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar4 = *(byte *)(iVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar12 + -3) >> 5);
      iVar13 = *(int *)(iVar9 + 8) + 0x10;
      iVar7 = iVar14 * uVar4 + iVar14 + -4;
      iVar14 = iVar13 + iVar7;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar14 + -4);
        if (uVar10 < 5) {
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
      if ((uint)(iVar14 - iVar12) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar9 + 0x14);
      uVar10 = 1 << uVar4;
      *(undefined1 *)(iVar12 + -3) = 0xff;
      *(undefined2 *)(iVar12 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar9 + 0x10);
        uVar6 = *(uint *)(iVar9 + 0xc) | uVar11;
        if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar9,uVar4);
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
          *(uint *)(iVar9 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
    iVar7 = iVar12 - iVar9;
    if (*(int *)(iVar7 + 8) == -0x80000000 || *(int *)(iVar7 + 8) == 0) {
      if (*(int *)(iVar7 + 0x14) == -0x80000000 || *(int *)(iVar7 + 0x14) == 0) goto LAB_00f1d6ec;
LAB_00f1d72c:
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x18));
      if (*(int *)(iVar7 + 0x20) != -0x80000000 && *(int *)(iVar7 + 0x20) != 0) goto LAB_00f1d744;
LAB_00f1d6fc:
      uVar4 = *(uint *)(iVar7 + 0x2c);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0xc));
      if (*(int *)(iVar7 + 0x14) != -0x80000000 && *(int *)(iVar7 + 0x14) != 0) goto LAB_00f1d72c;
LAB_00f1d6ec:
      if (*(int *)(iVar7 + 0x20) == -0x80000000 || *(int *)(iVar7 + 0x20) == 0) goto LAB_00f1d6fc;
LAB_00f1d744:
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x24));
      uVar4 = *(uint *)(iVar7 + 0x2c);
    }
    if ((uVar4 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x30));
    }
    iVar14 = iVar14 + -1;
    iVar9 = iVar9 + -0x48;
  } while( true );
}

