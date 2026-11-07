// FUN_007478cc @ 007478cc size=216 calls_out=2 calls_in=2
// strings: 

void FUN_007478cc(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint local_3c [3];
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  puVar12 = (uint *)*param_1;
  iVar4 = 4;
  if (1 < *puVar12) {
    iVar4 = *puVar12 - 2;
  }
  if (3 < iVar4 - 1U) {
    if (iVar4 != 0) {
      if (iVar4 != 5) {
        uVar5 = puVar12[1];
        if (uVar5 == 0) {
          local_1c = 0;
        }
        else {
          local_1c = puVar12[3];
          local_30 = puVar12[2];
          local_28 = 0;
          local_3c[1] = 0;
          local_3c[2] = uVar5;
          local_24 = uVar5;
          local_20 = local_30;
        }
        local_3c[0] = (uint)(uVar5 != 0);
        local_2c = local_3c[0];
        FUN_00747784(local_3c);
        return;
      }
      iVar4 = puVar12[3] + 1;
      uVar5 = puVar12[2];
      while (iVar4 = iVar4 + -1, iVar4 != 0) {
        FUN_007b96d0(uVar5);
        uVar5 = uVar5 + 0x18;
      }
    }
    if (puVar12[1] != 0) {
      uVar5 = puVar12[2];
      if (uVar5 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(uVar5 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar5 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar10 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar7 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar7 - uVar5 < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(uVar5 - 3) = 0xff;
      *(undefined2 *)(uVar5 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar4 + 0x10);
        uVar5 = *(uint *)(iVar4 + 0xc) | uVar11;
        if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar6;
          FUN_016d6ac4(local_28,local_24);
          *puVar6 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar12 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar12);
          uVar5 = *puVar12;
          if (uVar11 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar3);
        *puVar12 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

