// FUN_01527730 @ 01527730 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_01527730(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int local_28;
  int local_24;
  int local_20;
  
  FUN_0153fa40(&local_28);
  iVar4 = local_24;
  if (local_20 == 0) {
    if (local_28 != 0) {
      if (local_24 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar8 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar11 = uVar9 - 0x10, uVar9 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar15 = *(int *)(iVar6 + 8) + 0x10;
      iVar14 = iVar11 * uVar8 + iVar11 + -4;
      iVar11 = iVar15 + iVar14;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar11 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar11 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar11 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar9 = 1 << uVar8;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar5 = *(uint *)(iVar6 + 0x10);
        uVar12 = *(uint *)(iVar6 + 0xc) | uVar5;
        if ((uVar9 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar5 == 0) || (uVar12 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar6,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar7;
          FUN_016d6ac4(local_28,local_24);
          *puVar7 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar9 + uVar5;
          return;
        }
        puVar16 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar12 = *puVar16;
          if (uVar5 != uVar12) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar5;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar5 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x1e0);
    uVar9 = *(uint *)(param_1 + 0x1ec);
    if (uVar9 == uVar8) {
      FUN_01561020();
      uVar8 = *(uint *)(param_1 + 0x1e0);
      uVar9 = *(uint *)(param_1 + 0x1ec);
    }
    uVar5 = *(int *)(param_1 + 0x1e8) + uVar9;
    uVar12 = uVar5 - uVar8;
    if (uVar5 < uVar8) {
      uVar12 = uVar5;
    }
    *(uint *)(param_1 + 0x1ec) = uVar9 + 1;
    piVar10 = (int *)(*(int *)(param_1 + 0x1e4) + uVar12 * 0xc);
    *piVar10 = local_28;
    piVar10[1] = local_24;
    piVar10[2] = local_20;
  }
  return;
}

