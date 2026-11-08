// FUN_00f3cb2c @ 00f3cb2c size=288 calls_out=4 calls_in=0
// strings: 

void FUN_00f3cb2c(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint local_4c [3];
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  uint *local_1c;
  
  iVar7 = 4;
  if (1 < *param_1) {
    iVar7 = *param_1 - 2;
  }
  if (3 < iVar7 - 1U) {
    if (iVar7 == 0) {
      if (param_1[1] != 0) {
        uVar4 = param_1[2];
LAB_014b47f4:
        if (uVar4 == 0) {
          return;
        }
        iVar7 = FUN_016d3bc8();
        uVar13 = *(byte *)(uVar4 - 3) & 0x1f;
        if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
          iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(uVar4 - 3) >> 5);
        iVar12 = *(int *)(iVar7 + 8) + 0x10;
        iVar5 = iVar8 * uVar13 + iVar8 + -4;
        iVar8 = iVar12 + iVar5;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar10 = *(uint *)(iVar8 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if (iVar8 - uVar4 < uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + iVar5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar7 + 0x14);
        uVar10 = 1 << uVar13;
        *(undefined1 *)(uVar4 - 3) = 0xff;
        *(undefined2 *)(uVar4 - 2) = 0;
        do {
          uVar11 = *(uint *)(iVar7 + 0x10);
          uVar4 = *(uint *)(iVar7 + 0xc) | uVar11;
          if ((uVar10 & uVar4) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar11 == 0) || (uVar4 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar7,uVar13);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar6 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar6;
            FUN_016d6ac4(local_28,iStack_24);
            *puVar6 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar7 + 0x10) = uVar10 + uVar11;
            return;
          }
          puVar14 = (uint *)(iVar7 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar14);
            uVar4 = *puVar14;
            if (uVar11 != uVar4) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar3);
          *puVar14 = uVar10 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar4) {
            return;
          }
        } while( true );
      }
    }
    else if (iVar7 == 5) {
      FUN_00f3c818(param_1 + 1);
      if (param_1[1] != 0) {
        uVar4 = param_1[2];
        goto LAB_014b47f4;
      }
    }
    else {
      uVar4 = param_1[1];
      if (uVar4 == 0) {
        local_2c = 0;
      }
      else {
        local_40 = param_1[2];
        local_2c = param_1[3];
        local_38 = 0;
        local_4c[1] = 0;
        local_4c[2] = uVar4;
        local_34 = uVar4;
        local_30 = local_40;
      }
      local_4c[0] = (uint)(uVar4 != 0);
      local_3c = local_4c[0];
      while (FUN_0157d138(&local_28,local_4c), iVar8 = local_20, iVar7 = local_28, local_28 != 0) {
        iVar5 = local_28 + local_20 * 0xc;
        local_1c = local_4c;
        if (*(int *)(iVar5 + 0x10c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0x110));
        }
        FUN_00f46ad4(iVar7 + iVar8 * 0x18);
      }
    }
  }
  return;
}

