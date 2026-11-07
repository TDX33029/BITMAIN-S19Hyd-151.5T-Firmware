// FUN_011484e8 @ 011484e8 size=268 calls_out=4 calls_in=2
// strings: 

void FUN_011484e8(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
        iVar4 = *(int *)(param_1 + 8);
LAB_014b47f4:
        if (iVar4 == 0) {
          return;
        }
        iVar6 = FUN_016d3bc8();
        uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
        if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
        iVar13 = *(int *)(iVar6 + 8) + 0x10;
        iVar11 = iVar5 * uVar14 + iVar5 + -4;
        iVar5 = iVar13 + iVar11;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar10 = *(uint *)(iVar5 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar5 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar6 + 0x14);
        uVar10 = 1 << uVar14;
        *(undefined1 *)(iVar4 + -3) = 0xff;
        *(undefined2 *)(iVar4 + -2) = 0;
        do {
          uVar12 = *(uint *)(iVar6 + 0x10);
          uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
          if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar6,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar7;
            FUN_016d6ac4(local_28,iStack_24);
            *puVar7 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
            return;
          }
          puVar15 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar8 = *puVar15;
            if (uVar12 != uVar8) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar10 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar8) {
            return;
          }
        } while( true );
      }
    }
    else if (bVar1 == 4) {
      FUN_01150b1c(param_1 + 4);
      if (*(int *)(param_1 + 4) != 0) {
        iVar4 = *(int *)(param_1 + 8);
        goto LAB_014b47f4;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        local_2c = 0;
      }
      else {
        local_40 = *(undefined4 *)(param_1 + 8);
        local_2c = *(undefined4 *)(param_1 + 0xc);
        local_38 = 0;
        local_4c[1] = 0;
        local_4c[2] = iVar4;
        local_34 = iVar4;
        local_30 = local_40;
      }
      local_4c[0] = (uint)(iVar4 != 0);
      local_3c = local_4c[0];
      while (FUN_00a40f64(&local_28,local_4c), iVar6 = local_20, iVar4 = local_28, local_28 != 0) {
        iVar5 = local_28 + local_20 * 0xc;
        local_1c = local_4c;
        if (*(int *)(iVar5 + 0x10c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0x110));
        }
        FUN_011484e8(iVar4 + iVar6 * 0x18);
      }
    }
  }
  return;
}

