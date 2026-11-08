// FUN_00d926d4 @ 00d926d4 size=420 calls_out=3 calls_in=1
// strings: 

void FUN_00d926d4(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x519) == '\0') {
    puVar12 = (undefined4 *)(*(int *)(param_1 + 0x510) + 0x10);
    for (iVar8 = *(int *)(param_1 + 0x514); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar12[-4] != 0) {
        thunk_FUN_016d3fb4(puVar12[-3]);
      }
      if (puVar12[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar12);
      }
      puVar12 = puVar12 + 6;
    }
    if (*(int *)(param_1 + 0x50c) != 0) {
      iVar8 = *(int *)(param_1 + 0x510);
      if (iVar8 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar8 + -3) >> 5);
      iVar13 = *(int *)(iVar9 + 8) + 0x10;
      iVar5 = iVar14 * uVar15 + iVar14 + -4;
      iVar14 = iVar13 + iVar5;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar14 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar14 - iVar8) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar9 + 0x14);
      uVar10 = 1 << uVar15;
      *(undefined1 *)(iVar8 + -3) = 0xff;
      *(undefined2 *)(iVar8 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar9 + 0x10);
        uVar6 = *(uint *)(iVar9 + 0xc) | uVar11;
        if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar9,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar12 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar12;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar12 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  else if (*(char *)(param_1 + 0x519) == '\x03') {
    FUN_00d929f8(param_1);
    if (*(int *)(param_1 + 0x4e8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4ec));
    }
    if (*(int *)(param_1 + 0x4f4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4f8));
    }
    puVar12 = (undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x10);
    for (iVar8 = ((uint)(*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c4)) >> 3) * -0x55555555;
        iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar12[-4] != 0) {
        thunk_FUN_016d3fb4(puVar12[-3]);
      }
      if (puVar12[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar12);
      }
      puVar12 = puVar12 + 6;
    }
    if (*(int *)(param_1 + 0x4c8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c0));
    }
    iVar8 = *(int *)(param_1 + 0x508);
    if (iVar8 != 0) {
      iVar14 = *(int *)(param_1 + 0x504);
      iVar9 = 0;
      do {
        puVar12 = (undefined4 *)(iVar14 + iVar9 * 8);
        piVar4 = (int *)*puVar12;
        iVar9 = iVar9 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*puVar12,puVar12[1]);
        }
      } while (iVar9 != iVar8);
    }
    if (*(int *)(param_1 + 0x500) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x504));
    }
    *(undefined1 *)(param_1 + 0x518) = 0;
    return;
  }
  return;
}

