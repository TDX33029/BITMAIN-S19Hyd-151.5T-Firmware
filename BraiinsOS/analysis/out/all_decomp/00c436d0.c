// FUN_00c436d0 @ 00c436d0 size=272 calls_out=4 calls_in=21
// strings: 

void FUN_00c436d0(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint local_4c [3];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  uint *local_1c;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(int *)(param_1 + 4) != 0) {
        iVar12 = *(int *)(param_1 + 8);
LAB_014b47f4:
        if (iVar12 == 0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar14 = *(byte *)(iVar12 + -3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar4 = uVar9 - 0x10, uVar9 == 0)) {
          iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
        iVar13 = *(int *)(iVar5 + 8) + 0x10;
        iVar10 = iVar4 * uVar14 + iVar4 + -4;
        iVar4 = iVar13 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar9 = *(uint *)(iVar4 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar4 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar4 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar5 + 0x14);
        uVar9 = 1 << uVar14;
        *(undefined1 *)(iVar12 + -3) = 0xff;
        *(undefined2 *)(iVar12 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar5 + 0x10);
          uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
          if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar5,uVar14);
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
          puVar15 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar7 = *puVar15;
            if (uVar11 != uVar7) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar7) {
            return;
          }
        } while( true );
      }
    }
    else if (bVar1 == 4) {
      iVar12 = *(int *)(param_1 + 8);
      FUN_00ce0380(iVar12,*(undefined4 *)(param_1 + 0xc));
      if (*(int *)(param_1 + 4) != 0) goto LAB_014b47f4;
    }
    else {
      iVar12 = *(int *)(param_1 + 4);
      if (iVar12 == 0) {
        local_2c = 0;
      }
      else {
        local_40 = *(undefined4 *)(param_1 + 8);
        local_2c = *(undefined4 *)(param_1 + 0xc);
        local_38 = 0;
        local_4c[1] = 0;
        local_4c[2] = iVar12;
        local_34 = iVar12;
        local_30 = local_40;
      }
      local_4c[0] = (uint)(iVar12 != 0);
      local_3c = local_4c[0];
      while( true ) {
        FUN_00c3b8fc(&local_28,local_4c);
        iVar5 = local_20;
        iVar12 = local_28;
        if (local_28 == 0) break;
        iVar4 = local_28 + local_20 * 0xc;
        local_1c = local_4c;
        if (*(int *)(iVar4 + 0x10c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x110));
        }
        FUN_00c436d0(iVar12 + iVar5 * 0x18);
      }
    }
  }
  return;
}

