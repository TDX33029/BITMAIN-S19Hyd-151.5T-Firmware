// FUN_00bb1984 @ 00bb1984 size=196 calls_out=1 calls_in=2
// strings: 

void FUN_00bb1984(int param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int unaff_r4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r6;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  
  iVar11 = *(int *)(param_1 + 0x14);
  iVar13 = *(int *)(param_1 + 0x10);
  if (iVar11 != 0) {
    iVar5 = 0;
    do {
      iVar11 = iVar11 + -1;
      bVar15 = *(int *)(iVar13 - iVar5) != 0;
      iVar2 = 0;
      if (bVar15) {
        unaff_r6 = iVar13 - iVar5;
        iVar2 = *(int *)(unaff_r6 + 4);
      }
      if (bVar15 && iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar5 = iVar5 + -0xc;
    } while (iVar11 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x24);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar11);
    }
    if (puVar6[1] != 0) {
      if (iVar11 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar12 = *(byte *)(iVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar8 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar8 - 0x10, uVar8 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar8 = (uint)(*(byte *)(iVar11 + -3) >> 5);
      iVar10 = *(int *)(iVar13 + 8) + 0x10;
      iVar2 = iVar5 * uVar12 + iVar5 + -4;
      iVar5 = iVar10 + iVar2;
      if (4 < uVar8) {
        if (uVar8 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar8 = *(uint *)(iVar5 + -4);
        if (uVar8 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar5 - iVar11) < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar5 - uVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar10 + iVar2) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar13 + 0x14);
      uVar8 = 1 << uVar12;
      *(undefined1 *)(iVar11 + -3) = 0xff;
      *(undefined2 *)(iVar11 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar13 + 0x10);
        uVar4 = *(uint *)(iVar13 + 0xc) | uVar9;
        if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar9 == 0) || (uVar4 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar8 + uVar9;
          return;
        }
        puVar14 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar4 = *puVar14;
          if (uVar9 != uVar4) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar8 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
}

