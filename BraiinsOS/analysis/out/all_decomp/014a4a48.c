// FUN_014a4a48 @ 014a4a48 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_014a4a48(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar11 = *(undefined4 *)(param_1 + 0xc);
    puVar13 = *(undefined4 **)(param_1 + 0x10);
    pcVar4 = (code *)*puVar13;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar11);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar8 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar9 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar12 + iVar9;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar8 = *(uint *)(iVar6 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if ((uint)(iVar6 - param_1) < uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar8 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar10;
        if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar13 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar13;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar13 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar10 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar8 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

