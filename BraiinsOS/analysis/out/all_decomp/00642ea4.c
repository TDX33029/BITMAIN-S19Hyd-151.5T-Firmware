// FUN_00642ea4 @ 00642ea4 size=388 calls_out=5 calls_in=3
// strings: 

void FUN_00642ea4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x6ee) == '\0') {
    FUN_006430fc(param_1);
    if (*(int *)(param_1 + 0x1a8) != 0) {
      iVar8 = *(int *)(param_1 + 0x1ac);
      if (iVar8 == 0) {
        return;
      }
      iVar3 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar8 + -3) >> 5);
      iVar14 = *(int *)(iVar3 + 8) + 0x10;
      iVar10 = iVar6 * uVar16 + iVar6 + -4;
      iVar6 = iVar14 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar9 = *(uint *)(iVar6 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar6 - iVar8) < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar14 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar2 = *(byte *)(iVar3 + 0x14);
      uVar9 = 1 << uVar16;
      *(undefined1 *)(iVar8 + -3) = 0xff;
      *(undefined2 *)(iVar8 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar3 + 0x10);
        uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar3,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar15 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar15;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar15 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  else if (*(char *)(param_1 + 0x6ee) == '\x03') {
    if (*(char *)(param_1 + 0x6e5) == '\x03') {
      FUN_006446fc(param_1 + 0x370);
      iVar8 = *(int *)(param_1 + 0x448);
      if (iVar8 != 0) {
        psVar12 = (short *)(*(int *)(param_1 + 0x444) + 0x24);
        do {
          iVar3 = 0;
          if (psVar12[-0x12] != 0) {
            iVar3 = *(int *)(psVar12 + -0x10);
          }
          if (psVar12[-0x12] != 0 && iVar3 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar12 + -0xe));
          }
          iVar3 = 0;
          if (*psVar12 != 0) {
            iVar3 = *(int *)(psVar12 + 2);
          }
          if (*psVar12 != 0 && iVar3 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar12 + 4));
          }
          psVar12 = psVar12 + 0x22;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (*(int *)(param_1 + 0x440) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x444));
      }
      puVar15 = *(undefined4 **)(param_1 + 0x43c);
      uVar13 = *(undefined4 *)(param_1 + 0x438);
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar13);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      piVar4 = *(int **)(param_1 + 0x4f4);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007910a4(*(undefined4 *)(param_1 + 0x4f4));
      }
      FUN_00644ac8(param_1 + 0x44c);
      *(undefined1 *)(param_1 + 0x6e4) = 0;
    }
    else if ((*(char *)(param_1 + 0x6e5) == '\0') && (*(int *)(param_1 + 0x6d8) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6dc));
    }
    *(undefined1 *)(param_1 + 0x6ef) = 0;
    if (*(int *)(param_1 + 0x360) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x364));
    }
    FUN_006430fc(param_1 + 0x1b8);
    return;
  }
  return;
}

