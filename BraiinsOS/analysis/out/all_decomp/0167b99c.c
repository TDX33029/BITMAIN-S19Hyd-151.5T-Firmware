// FUN_0167b99c @ 0167b99c size=360 calls_out=2 calls_in=4
// strings: 

void FUN_0167b99c(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  local_54 = *param_2;
  local_50 = param_2[1];
  uVar11 = *(undefined4 *)(param_3 + 8);
  iVar9 = *(int *)(param_3 + 0xc);
  FUN_0166ef68(&local_40,param_3);
  if (local_40 == 3) {
    local_58 = 3;
  }
  else {
    local_58 = local_40;
    local_54 = iStack_3c;
    local_50 = iStack_38;
    iStack_4c = iStack_34;
    local_48 = iStack_30;
    local_44 = puStack_2c;
    if (local_40 == 1) {
      *(undefined4 *)(param_3 + 8) = uVar11;
      *(int *)(param_3 + 0xc) = iVar9;
      if (iVar9 == 0) {
        iVar9 = param_2[2];
        iVar12 = param_2[3];
        *param_1 = 3;
        param_1[1] = iVar9;
        param_1[2] = iVar12;
        param_1[3] = 0;
        param_1[4] = 0;
        if (iStack_3c != 0) {
          thunk_FUN_016d3fb4(iStack_38);
        }
        if (iStack_30 != 0) {
          if ((code *)*puStack_2c != (code *)0x0) {
            (*(code *)*puStack_2c)(iStack_30);
          }
          if (puStack_2c[1] != 0) {
            if (iStack_30 == 0) {
              return;
            }
            iVar9 = FUN_016d3bc8();
            uVar13 = *(byte *)(iStack_30 + -3) & 0x1f;
            if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
               (uVar6 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar12 = uVar6 - 0x10, uVar6 == 0)) {
              iVar12 = (uint)*(ushort *)
                              (&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
            }
            uVar6 = (uint)(*(byte *)(iStack_30 + -3) >> 5);
            iVar10 = *(int *)(iVar9 + 8) + 0x10;
            iVar7 = iVar12 * uVar13 + iVar12 + -4;
            iVar12 = iVar10 + iVar7;
            if (4 < uVar6) {
              if (uVar6 != 5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar1)();
              }
              uVar6 = *(uint *)(iVar12 + -4);
              if (uVar6 < 5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar1)();
              }
              if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar1)();
              }
            }
            if ((uint)(iVar12 - iStack_30) < uVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar1)();
            }
            if (*(char *)(iVar12 - uVar6) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar1)();
            }
            if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar1)();
            }
            bVar2 = *(byte *)(iVar9 + 0x14);
            uVar6 = 1 << uVar13;
            *(undefined1 *)(iStack_30 + -3) = 0xff;
            *(undefined2 *)(iStack_30 + -2) = 0;
            do {
              uVar8 = *(uint *)(iVar9 + 0x10);
              uVar5 = *(uint *)(iVar9 + 0xc) | uVar8;
              if ((uVar6 & uVar5) != 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar1)();
              }
              if ((uVar8 == 0) || (uVar5 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&uStack_28,iVar9,uVar13);
                FUN_016dddc0(&DAT_018ddd48);
                if (unaff_r4 == 0) {
                  return;
                }
                puVar4 = (undefined4 *)FUN_016d2bc8();
                uVar11 = *puVar4;
                FUN_016d6ac4(uStack_28,unaff_r4);
                *puVar4 = uVar11;
                return;
              }
              if (DAT_018ddb0b == '\0') {
                *(uint *)(iVar9 + 0x10) = uVar6 + uVar8;
                return;
              }
              puVar14 = (uint *)(iVar9 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar14);
                uVar5 = *puVar14;
                if (uVar8 != uVar5) goto LAB_016d409c;
                bVar3 = (bool)hasExclusiveAccess(puVar14);
              } while (!bVar3);
              *puVar14 = uVar6 + uVar8;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar8 == uVar5) {
                return;
              }
            } while( true );
          }
        }
      }
      else {
        if (iStack_3c != 0) {
          thunk_FUN_016d3fb4(iStack_38);
        }
        if (iStack_30 != 0) {
          if ((code *)*puStack_2c != (code *)0x0) {
            (*(code *)*puStack_2c)(iStack_30);
          }
          if (puStack_2c[1] != 0) {
            thunk_FUN_016d3fb4(iStack_30);
          }
        }
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0;
      }
      return;
    }
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = iStack_4c;
  param_1[4] = local_48;
  param_1[5] = (int)local_44;
  return;
}

