// FUN_00cb1674 @ 00cb1674 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_00cb1674(int *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    FUN_00c8aa64(param_1 + 2);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  bVar14 = param_1[2] == 0 && param_1[3] == 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    unaff_r4 = param_1[4];
    bVar14 = unaff_r4 == 0;
  }
  if (!bVar14) {
    puVar10 = (undefined4 *)param_1[5];
    pcVar3 = (code *)*puVar10;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_r4);
    }
    if (puVar10[1] != 0) {
      if (unaff_r4 == 0) {
        return;
      }
      iVar2 = FUN_016d3bc8();
      uVar12 = *(byte *)(unaff_r4 + -3) & 0x1f;
      if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar4 = uVar7 - 0x10, uVar7 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar7 = (uint)(*(byte *)(unaff_r4 + -3) >> 5);
      iVar11 = *(int *)(iVar2 + 8) + 0x10;
      iVar8 = iVar4 * uVar12 + iVar4 + -4;
      iVar4 = iVar11 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar7 = *(uint *)(iVar4 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar4 - unaff_r4) < uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar4 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar2 + 0x14);
      uVar7 = 1 << uVar12;
      *(undefined1 *)(unaff_r4 + -3) = 0xff;
      *(undefined2 *)(unaff_r4 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar2 + 0x10);
        uVar5 = *(uint *)(iVar2 + 0xc) | uVar9;
        if ((uVar7 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar9 == 0) || (uVar5 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar2,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar10 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar10;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar10 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar2 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar13 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar13);
          uVar5 = *puVar13;
          if (uVar9 != uVar5) goto LAB_016d409c;
          bVar14 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar14);
        *puVar13 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

