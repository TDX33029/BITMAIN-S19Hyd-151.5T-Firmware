// FUN_0089e6a8 @ 0089e6a8 size=184 calls_out=1 calls_in=5
// strings: 

void FUN_0089e6a8(int param_1,undefined4 *param_2)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar12 = param_2[2];
  pcVar9 = (code *)*param_2;
  uVar7 = uVar12;
  if (uVar12 < 9) {
    uVar7 = 8;
  }
  iVar14 = param_1 + (uVar7 - 1 & 0xfffffff8) + 8;
  FUN_0089e510(iVar14);
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(iVar14 + (uVar12 - 1 & 0xffffffd0) + 0x30);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar14 + -1;
    if ((iVar14 == 1) &&
       (DataMemoryBarrier(0xb), (uVar7 + (uVar7 + param_2[1] + 0x2f & -uVar7) + 7 & -uVar7) != 0)) {
      if (param_1 == 0) {
        return;
      }
      iVar14 = FUN_016d3bc8();
      uVar7 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar5 = uVar12 - 0x10, uVar12 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar14 + 8) + 0x10;
      iVar10 = iVar5 * uVar7 + iVar5 + -4;
      iVar5 = iVar13 + iVar10;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar9)();
        }
        uVar12 = *(uint *)(iVar5 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar9)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar9)();
        }
      }
      if ((uint)(iVar5 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar9)();
      }
      if (*(char *)(iVar5 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar9)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar9)();
      }
      bVar2 = *(byte *)(iVar14 + 0x14);
      uVar12 = 1 << uVar7;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar14 + 0x10);
        uVar6 = *(uint *)(iVar14 + 0xc) | uVar11;
        if ((uVar12 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar9)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar14,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar14 + 0x10) = uVar12 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar14 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar12 + uVar11;
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

