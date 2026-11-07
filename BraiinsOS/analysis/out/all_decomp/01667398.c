// FUN_01667398 @ 01667398 size=260 calls_out=4 calls_in=3
// strings: 

void FUN_01667398(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint local_44 [3];
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20 [3];
  
  iVar4 = *param_1 + param_1[2] * 0xc;
  puVar9 = (uint *)(*param_1 + param_1[2] * 0x18);
  if (*(int *)(iVar4 + 0x10c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x110));
  }
  iVar4 = 4;
  if (1 < *puVar9) {
    iVar4 = *puVar9 - 2;
  }
  if (3 < iVar4 - 1U) {
    if (iVar4 != 0) {
      if (iVar4 != 5) {
        uVar5 = puVar9[1];
        if (uVar5 == 0) {
          local_24 = 0;
        }
        else {
          local_24 = puVar9[3];
          local_38 = puVar9[2];
          local_30 = 0;
          local_44[1] = 0;
          local_44[2] = uVar5;
          local_2c = uVar5;
          local_28 = local_38;
        }
        local_44[0] = (uint)(uVar5 != 0);
        local_34 = local_44[0];
        while (FUN_00a40f64(local_20,local_44), local_20[0] != 0) {
          FUN_01667398(local_20);
        }
        return;
      }
      FUN_016672f0(puVar9[2],puVar9[3]);
    }
    if (puVar9[1] != 0) {
      uVar5 = puVar9[2];
      if (uVar5 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar14 = *(byte *)(uVar5 - 3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar5 - 3) >> 5);
      iVar13 = *(int *)(iVar4 + 8) + 0x10;
      iVar11 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar7 + -4);
        if (uVar10 < 5) {
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
      if (iVar7 - uVar5 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar4 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(uVar5 - 3) = 0xff;
      *(undefined2 *)(uVar5 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar4 + 0x10);
        uVar5 = *(uint *)(iVar4 + 0xc) | uVar12;
        if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar5 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
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
          *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar9 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar9);
          uVar5 = *puVar9;
          if (uVar12 != uVar5) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar3);
        *puVar9 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

