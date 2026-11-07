// FUN_013d9bcc @ 013d9bcc size=364 calls_out=4 calls_in=1
// strings: 

void FUN_013d9bcc(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int unaff_r4;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int local_30;
  undefined4 *local_28;
  
  puVar18 = param_2 + 1;
  uVar17 = *param_2;
  uVar10 = uVar17 + 0x7ffffffe;
  if (uVar10 == 0) {
    uVar10 = param_2[2];
    uVar17 = param_2[3];
    uVar8 = param_2[4];
    param_1[1] = *puVar18;
    param_1[2] = uVar10;
    param_1[3] = uVar17;
    param_1[4] = uVar8;
    uVar10 = param_2[6];
    uVar17 = param_2[7];
    uVar8 = param_2[8];
    param_1[5] = param_2[5];
    param_1[6] = uVar10;
    param_1[7] = uVar17;
    param_1[8] = uVar8;
    *param_1 = 0x22;
  }
  else {
    uVar8 = uVar10;
    if (uVar17 < 0x80000002) {
      uVar8 = 4;
    }
    puVar4 = puVar18;
    if (2 < uVar8 - 1) {
      if (uVar8 == 0) {
        puVar4 = param_2 + 2;
      }
      else {
        puVar4 = param_2 + 7;
      }
    }
    if (param_4 < 0) {
      uVar5 = 0;
LAB_013d9c14:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,param_4);
    }
    local_28 = param_1;
    if (param_4 == 0) {
      iVar6 = 1;
      local_30 = 0;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(param_4);
      if (iVar6 == 0) {
        uVar5 = 1;
        goto LAB_013d9c14;
      }
      local_30 = param_4;
    }
    FUN_016dd1aa(iVar6,param_3,param_4);
    uVar8 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    uVar14 = puVar4[4];
    uVar16 = puVar4[5];
    local_28[10] = *puVar4;
    local_28[0xb] = uVar8;
    local_28[0xc] = uVar11;
    local_28[0xd] = uVar12;
    local_28[0xe] = uVar14;
    local_28[0xf] = uVar16;
    local_28[7] = local_30;
    local_28[8] = iVar6;
    local_28[9] = param_4;
    *local_28 = 3;
    if (3 < uVar10) {
      uVar10 = 2;
      if ((int)uVar17 < 0) {
        uVar10 = uVar17 ^ 0x80000000;
      }
      if (uVar10 != 0) {
        if (uVar10 != 1) {
          if (uVar17 != 0) {
            thunk_FUN_016d3fb4(*puVar18);
          }
          puVar18 = param_2 + 3;
        }
        if (*puVar18 != 0) {
          uVar10 = puVar18[1];
          if (uVar10 == 0) {
            return;
          }
          iVar6 = FUN_016d3bc8();
          uVar17 = *(byte *)(uVar10 - 3) & 0x1f;
          if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
             (uVar8 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar8 - 0x10, uVar8 == 0)) {
            iVar9 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar8 = (uint)(*(byte *)(uVar10 - 3) >> 5);
          iVar15 = *(int *)(iVar6 + 8) + 0x10;
          iVar13 = iVar9 * uVar17 + iVar9 + -4;
          iVar9 = iVar15 + iVar13;
          if (4 < uVar8) {
            if (uVar8 != 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar1)();
            }
            uVar8 = *(uint *)(iVar9 + -4);
            if (uVar8 < 5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar1)();
            }
            if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar1)();
            }
          }
          if (iVar9 - uVar10 < uVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar1)();
          }
          if (*(char *)(iVar9 - uVar8) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar1)();
          }
          if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar1)();
          }
          bVar2 = *(byte *)(iVar6 + 0x14);
          uVar8 = 1 << uVar17;
          *(undefined1 *)(uVar10 - 3) = 0xff;
          *(undefined2 *)(uVar10 - 2) = 0;
          do {
            uVar11 = *(uint *)(iVar6 + 0x10);
            uVar10 = *(uint *)(iVar6 + 0xc) | uVar11;
            if ((uVar8 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar1)();
            }
            if ((uVar11 == 0) || (uVar10 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&local_28,iVar6,uVar17);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar7 = (undefined4 *)FUN_016d2bc8();
              uVar5 = *puVar7;
              FUN_016d6ac4(local_28,unaff_r4);
              *puVar7 = uVar5;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar6 + 0x10) = uVar8 + uVar11;
              return;
            }
            puVar18 = (uint *)(iVar6 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar18);
              uVar10 = *puVar18;
              if (uVar11 != uVar10) goto LAB_016d409c;
              bVar3 = (bool)hasExclusiveAccess(puVar18);
            } while (!bVar3);
            *puVar18 = uVar8 + uVar11;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar11 == uVar10) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

