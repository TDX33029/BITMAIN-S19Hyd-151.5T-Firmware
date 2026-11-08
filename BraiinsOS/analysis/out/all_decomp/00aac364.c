// FUN_00aac364 @ 00aac364 size=220 calls_out=1 calls_in=13
// strings: 

void FUN_00aac364(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar11 = param_2[2];
  pcVar13 = (code *)*param_2;
  uVar8 = uVar11;
  if (uVar11 < 9) {
    uVar8 = 8;
  }
  iVar2 = param_1 + (uVar8 - 1 & 0xfffffff8);
  bVar15 = *(int *)(iVar2 + 8) != 0 || *(int *)(iVar2 + 0xc) != 0;
  iVar5 = 0;
  if (bVar15) {
    iVar5 = *(int *)(iVar2 + 0x18);
  }
  if (bVar15 && iVar5 != 3) {
    FUN_00b510e8();
  }
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(iVar2 + 8 + (uVar11 - 1 & 0xfffffed8) + 0x128);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = iVar5 + -1;
    if ((iVar5 == 1) &&
       (DataMemoryBarrier(0xb), (uVar8 + (uVar8 + param_2[1] + 0x127 & -uVar8) + 7 & -uVar8) != 0))
    {
      if (param_1 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar8 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar2 = uVar11 - 0x10, uVar11 == 0)) {
        iVar2 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar9 = iVar2 * uVar8 + iVar2 + -4;
      iVar2 = iVar12 + iVar9;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar13)();
        }
        uVar11 = *(uint *)(iVar2 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar13)();
        }
        if (*(char *)(iVar2 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar13)();
        }
      }
      if ((uint)(iVar2 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar13)();
      }
      if (*(char *)(iVar2 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar13)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar13)();
      }
      bVar1 = *(byte *)(iVar5 + 0x14);
      uVar11 = 1 << uVar8;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar5 + 0x10);
        uVar6 = *(uint *)(iVar5 + 0xc) | uVar10;
        if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar13)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar8);
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
          *(uint *)(iVar5 + 0x10) = uVar11 + uVar10;
          return;
        }
        puVar14 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar6 = *puVar14;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar11 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

