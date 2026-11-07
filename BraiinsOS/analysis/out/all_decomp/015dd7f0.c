// FUN_015dd7f0 @ 015dd7f0 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_015dd7f0(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) != 2) {
    if (*(int *)(param_1 + 8) != 0) {
      return;
    }
    iVar12 = *(int *)(param_1 + 0x10);
    if (iVar12 != 0) {
      iVar8 = *(int *)(param_1 + 0xc);
      piVar14 = (int *)(iVar8 + 8);
      do {
        if (piVar14[-2] == 0) {
          if (*piVar14 != 0) {
            thunk_FUN_016d3fb4(piVar14[-1]);
          }
          if (piVar14[2] != 0) {
            thunk_FUN_016d3fb4(piVar14[1]);
          }
        }
        piVar14 = piVar14 + 10;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      thunk_FUN_016d3fb4(iVar8);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar12 = *(int *)(param_1 + 0x14);
      if (iVar12 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
      iVar13 = *(int *)(iVar8 + 8) + 0x10;
      iVar10 = iVar5 * uVar15 + iVar5 + -4;
      iVar5 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar5 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar8 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)(iVar12 + -3) = 0xff;
      *(undefined2 *)(iVar12 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar8 + 0x10);
        uVar6 = *(uint *)(iVar8 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar8,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar11;
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

