// FUN_008f2598 @ 008f2598 size=220 calls_out=1 calls_in=1
// strings: 

void FUN_008f2598(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
  }
  iVar14 = *(int *)(param_1 + 0xd0);
  iVar8 = 0;
  iVar13 = *(int *)(param_1 + 0xd4);
  do {
    if (iVar13 == 0) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        return;
      }
      if (iVar14 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar4 = *(byte *)(iVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar13 = uVar9 - 0x10, uVar9 == 0)) {
        iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar14 + -3) >> 5);
      iVar12 = *(int *)(iVar8 + 8) + 0x10;
      iVar11 = iVar13 * uVar4 + iVar13 + -4;
      iVar13 = iVar12 + iVar11;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar13 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar13 - iVar14) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar8 + 0x14);
      uVar9 = 1 << uVar4;
      *(undefined1 *)(iVar14 + -3) = 0xff;
      *(undefined2 *)(iVar14 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar8 + 0x10);
        uVar6 = *(uint *)(iVar8 + 0xc) | uVar10;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar8,uVar4);
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
          *(uint *)(iVar8 + 0x10) = uVar9 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar9 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
    iVar11 = iVar14 - iVar8;
    if ((*(uint *)(iVar11 + 8) & 0x7fffffff) == 0) {
      if ((*(uint *)(iVar11 + 0x14) & 0x7fffffff) == 0) goto LAB_008f25f4;
LAB_008f2624:
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x18));
      if ((*(uint *)(iVar11 + 0x20) & 0x7fffffff) != 0) goto LAB_008f2638;
LAB_008f2600:
      uVar4 = *(uint *)(iVar11 + 0x2c);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0xc));
      if ((*(uint *)(iVar11 + 0x14) & 0x7fffffff) != 0) goto LAB_008f2624;
LAB_008f25f4:
      if ((*(uint *)(iVar11 + 0x20) & 0x7fffffff) == 0) goto LAB_008f2600;
LAB_008f2638:
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x24));
      uVar4 = *(uint *)(iVar11 + 0x2c);
    }
    if ((uVar4 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x30));
    }
    iVar13 = iVar13 + -1;
    iVar8 = iVar8 + -0x48;
  } while( true );
}

