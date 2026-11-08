// FUN_01667540 @ 01667540 size=340 calls_out=5 calls_in=0
// strings: 

void FUN_01667540(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_4c [3];
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int iStack_24;
  uint *local_1c;
  
  puVar12 = (uint *)*param_1;
  iVar5 = 4;
  if (1 < *puVar12) {
    iVar5 = *puVar12 - 2;
  }
  if (3 < iVar5 - 1U) {
    if (iVar5 != 0) {
      if (iVar5 != 5) {
        uVar14 = puVar12[1];
        if (uVar14 == 0) {
          local_2c = 0;
        }
        else {
          local_2c = puVar12[3];
          local_40 = puVar12[2];
          local_38 = 0;
          local_4c[1] = 0;
          local_4c[2] = uVar14;
          local_34 = uVar14;
          local_30 = local_40;
        }
        local_4c[0] = (uint)(uVar14 != 0);
        local_3c = local_4c[0];
        while (FUN_00a40f64(&local_28,local_4c), local_28 != 0) {
          local_1c = local_4c;
          FUN_01667398(&local_28);
        }
        return;
      }
      uVar14 = puVar12[3];
      if (uVar14 != 0) {
        puVar4 = (uint *)puVar12[2];
        do {
          iVar5 = 4;
          if (1 < *puVar4) {
            iVar5 = *puVar4 - 2;
          }
          if (3 < iVar5 - 1U) {
            if (iVar5 == 0) {
              if (puVar4[1] != 0) {
                thunk_FUN_016d3fb4(puVar4[2]);
              }
            }
            else if (iVar5 == 5) {
              FUN_0166700c(puVar4 + 1);
            }
            else {
              FUN_016676ec(puVar4 + 1);
            }
          }
          uVar14 = uVar14 - 1;
          puVar4 = puVar4 + 6;
        } while (uVar14 != 0);
      }
    }
    if (puVar12[1] != 0) {
      uVar14 = puVar12[2];
      if (uVar14 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar15 = *(byte *)(uVar14 - 3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(uVar14 - 3) >> 5);
      iVar13 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar7 * uVar15 + iVar7 + -4;
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
      if (iVar7 - uVar14 < uVar9) {
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
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar15;
      *(undefined1 *)(uVar14 - 3) = 0xff;
      *(undefined2 *)(uVar14 - 2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar14 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar14) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar14 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar5,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar6;
          FUN_016d6ac4(local_28,iStack_24);
          *puVar6 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar12 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar12);
          uVar14 = *puVar12;
          if (uVar11 != uVar14) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar3);
        *puVar12 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar14) {
          return;
        }
      } while( true );
    }
  }
  return;
}

