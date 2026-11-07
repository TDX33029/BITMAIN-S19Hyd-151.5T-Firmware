// FUN_014a67f8 @ 014a67f8 size=1952 calls_out=8 calls_in=1
// strings: {SIGNATURE}

void FUN_014a67f8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,int param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  int local_dc;
  uint local_ac;
  uint local_a8;
  uint local_9c;
  int local_94;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint uStack_34;
  int iStack_30;
  uint local_2c;
  
  iVar14 = param_2[0xe];
  uVar18 = 0;
  iVar15 = iVar14;
  if (param_6 < 0xb) {
    iVar15 = 0;
  }
  if (iVar15 < 0) {
LAB_014a6830:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,iVar15);
  }
  uVar5 = param_2[1];
  iVar6 = param_2[0xd];
  uVar3 = *(undefined1 *)(param_2 + 0xf);
  uVar22 = *param_2;
  if (iVar15 == 0) {
    local_94 = 1;
    iVar15 = 0;
  }
  else {
    uVar18 = 1;
    local_94 = FUN_01298504(iVar15,1);
    if (local_94 == 0) goto LAB_014a6830;
  }
  local_6c = 0;
  local_74 = iVar15;
  local_70 = local_94;
  FUN_01306b30(&local_68,iVar6,iVar14,"{SIGNATURE}",0xb);
  iVar15 = 0;
  local_dc = param_8;
  local_a8 = local_5c;
  uVar19 = local_2c;
  if (local_2c < local_58) {
    uVar19 = local_58;
  }
  iVar7 = local_2c - 1;
  local_ac = local_4c;
  local_9c = 0;
  uVar16 = local_44;
  uVar23 = local_64;
LAB_014a6974:
  if ((local_68 & 1) == 0) {
    if ((local_5c & 0x10000) == 0) {
      do {
        if (uVar23 != 0) {
          if (uVar23 < uStack_34) {
            if (*(char *)(local_38 + uVar23) < -0x40) goto LAB_014a6f60;
          }
          else if (uVar23 != uStack_34) {
LAB_014a6f60:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,uStack_34,uVar23,uStack_34,&DAT_01d2e39c);
          }
        }
        if (uVar23 == uStack_34) {
          uVar8 = local_a8 & 1;
          local_a8 = 0;
          uVar9 = uStack_34;
          uVar24 = uStack_34;
          uVar23 = uStack_34;
          if (uVar8 == 0) break;
          goto LAB_014a6ce0;
        }
        pbVar11 = (byte *)(local_38 + uVar23);
        uVar8 = (uint)*pbVar11;
        if (0x7fffffff < (uint)(int)(char)*pbVar11) {
          if (uVar8 < 0xe0) {
            uVar8 = pbVar11[1] & 0x3f | (uVar8 & 0x1f) << 6;
          }
          else {
            uVar9 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
            if (uVar8 < 0xf0) {
              uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
            }
            else {
              uVar8 = pbVar11[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
            }
          }
        }
        if ((local_a8 & 1) != 0) goto LAB_014a6bb8;
        iVar12 = 1;
        if (0x7f < uVar8) {
          iVar12 = 2;
        }
        local_a8 = 1;
        if ((0x7ff < uVar8) && (iVar12 = 4, uVar8 < 0x10000)) {
          iVar12 = 3;
        }
        uVar23 = iVar12 + uVar23;
      } while( true );
    }
  }
  else {
    uVar8 = local_ac + iVar7;
    if (uVar16 == 0xffffffff) {
      if (uVar8 < uStack_34) {
        uVar16 = local_a8 & 0xff | local_5c & 0xffffff00;
LAB_014a6be8:
        uVar9 = *(byte *)(local_38 + uVar8) & 0x3f;
        uVar8 = local_60 >> uVar9 | uVar16 << (0x20 - uVar9 & 0xff);
        if (-1 < (int)(uVar9 - 0x20)) {
          uVar8 = uVar16 >> (uVar9 - 0x20 & 0xff);
        }
        if ((uVar8 & 1) == 0) {
          uVar8 = local_2c;
          goto LAB_014a6cb8;
        }
        uVar8 = local_58;
        do {
          uVar9 = uVar8;
          if (uVar19 == uVar9) {
            uVar8 = local_58 - 1;
            goto LAB_014a6c74;
          }
          if (uStack_34 <= local_ac + uVar9) {
            uVar8 = local_ac + local_58;
            goto LAB_014a6f3c;
          }
          uVar8 = uVar9 + 1;
        } while (*(char *)(iStack_30 + uVar9) == *(char *)(local_38 + local_ac + uVar9));
        local_ac = (local_ac - local_58) + uVar9 + 1;
        goto LAB_014a6cbc;
      }
    }
    else if (uVar8 < uStack_34) {
      uVar24 = local_a8 & 0xff | local_5c & 0xffffff00;
LAB_014a69b0:
      uVar9 = *(byte *)(local_38 + uVar8) & 0x3f;
      uVar8 = local_60 >> uVar9 | uVar24 << (0x20 - uVar9 & 0xff);
      if (-1 < (int)(uVar9 - 0x20)) {
        uVar8 = uVar24 >> (uVar9 - 0x20 & 0xff);
      }
      if ((uVar8 & 1) == 0) {
        uVar16 = 0;
        uVar8 = local_2c;
        goto LAB_014a6a98;
      }
      uVar8 = local_58;
      if (local_58 < uVar16) {
        uVar8 = uVar16;
      }
      uVar9 = local_2c;
      if (local_2c < uVar8) {
        uVar9 = uVar8;
      }
      uVar4 = uVar8;
      do {
        uVar10 = uVar4;
        if (uVar9 == uVar10) {
          uVar8 = local_58;
          goto LAB_014a6a5c;
        }
        if (uStack_34 <= local_ac + uVar10) {
          uVar8 = local_ac + uVar8;
LAB_014a6f3c:
          puVar13 = &DAT_01d2e38c;
          if (uVar8 < uStack_34) {
            uVar8 = uStack_34;
          }
          goto LAB_014a6f9c;
        }
        uVar4 = uVar10 + 1;
      } while (*(char *)(iStack_30 + uVar10) == *(char *)(local_38 + local_ac + uVar10));
      uVar16 = 0;
      local_ac = (local_ac - local_58) + uVar10 + 1;
      goto LAB_014a6a9c;
    }
  }
LAB_014a6dc0:
  uVar19 = iVar14 - local_9c;
  if ((uint)(local_74 - iVar15) < uVar19) {
    FUN_0132b898(&local_74,iVar15,uVar19,1,1);
    local_94 = local_70;
    iVar15 = local_6c;
  }
  else {
  }
  iVar14 = local_74;
  FUN_01bed4e2(local_94 + iVar15,iVar6 + local_9c,uVar19);
  uVar18 = 0;
  if (param_8 < 0) {
LAB_014a6e10:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,param_8);
  }
  if (param_8 == 0) {
    iVar7 = 1;
    local_7c = 0;
  }
  else {
    uVar18 = 1;
    iVar7 = FUN_01298504(param_8,1);
    if (iVar7 == 0) goto LAB_014a6e10;
    local_7c = local_dc;
  }
  FUN_01bed4e2(iVar7,param_7,param_8);
  param_1[4] = iVar14;
  param_1[6] = iVar15 + uVar19;
  param_1[5] = local_94;
  uVar18 = param_2[3];
  uVar17 = param_2[4];
  uVar20 = param_2[5];
  uVar21 = param_2[6];
  param_1[0xc] = param_2[2];
  param_1[0xd] = uVar18;
  param_1[0xe] = uVar17;
  param_1[0xf] = uVar20;
  param_1[0x10] = uVar21;
  uVar18 = param_2[8];
  uVar17 = param_2[9];
  uVar20 = param_2[10];
  uVar21 = param_2[0xb];
  param_1[0x11] = param_2[7];
  param_1[0x12] = uVar18;
  param_1[0x13] = uVar17;
  param_1[0x14] = uVar20;
  param_1[0x15] = uVar21;
  param_1[3] = param_4;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 10) = uVar3;
  param_1[7] = local_7c;
  param_1[1] = uVar5;
  *param_1 = uVar22;
  param_1[8] = iVar7;
  param_1[9] = param_8;
  FUN_019bb7e0(param_2[0xc],iVar6);
  return;
LAB_014a6bb8:
  local_a8 = 0;
  uVar9 = uVar23;
  uVar24 = uVar23;
LAB_014a6ce0:
  uVar24 = uVar24 - local_9c;
  if ((uint)(local_74 - iVar15) < uVar24) {
    FUN_0132b898(&local_74,iVar15,uVar24,1,1);
    local_94 = local_70;
    iVar15 = local_6c;
  }
  else {
  }
  iVar12 = local_74;
  FUN_01bed4e2(local_94 + iVar15,iVar6 + local_9c,uVar24);
  local_6c = iVar15 + uVar24;
  if ((uint)(iVar12 - local_6c) < param_6) {
    FUN_0132b898(&local_74,local_6c,param_6,1,1);
    local_94 = local_70;
  }
  iVar15 = local_6c;
  FUN_01bed4e2(local_94 + local_6c,param_5,param_6);
  iVar15 = iVar15 + param_6;
  local_9c = uVar9;
  local_6c = iVar15;
  goto LAB_014a6974;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_014a6f8c;
    uVar9 = local_ac + uVar8;
    if (uStack_34 <= uVar9) goto LAB_014a6f50;
    pcVar1 = (char *)(local_38 + local_ac + uVar8);
    pcVar2 = (char *)(iStack_30 + uVar8);
    uVar8 = uVar8 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_014a6c74:
    if (uVar8 == 0xffffffff) {
      uVar16 = 0xffffffff;
      goto LAB_014a6cd8;
    }
  }
  uVar8 = local_50;
LAB_014a6cb8:
  local_ac = local_ac + uVar8;
LAB_014a6cbc:
  uVar8 = local_ac + iVar7;
  if (uStack_34 <= uVar8) goto LAB_014a6dc0;
  goto LAB_014a6be8;
  while( true ) {
    uVar9 = uVar8 + local_ac;
    if (uStack_34 <= uVar9) goto LAB_014a6f50;
    if (*(char *)(iStack_30 + uVar8) != *(char *)(local_38 + uVar9)) break;
LAB_014a6a5c:
    if (uVar8 <= uVar16) {
      uVar16 = 0;
LAB_014a6cd8:
      uVar9 = local_ac + local_2c;
      uVar24 = local_ac;
      local_ac = local_ac + local_2c;
      goto LAB_014a6ce0;
    }
    uVar8 = uVar8 - 1;
    if (local_2c <= uVar8) goto LAB_014a6f8c;
  }
  uVar8 = local_50;
  uVar16 = local_2c - local_50;
LAB_014a6a98:
  local_ac = local_ac + uVar8;
LAB_014a6a9c:
  uVar8 = local_ac + iVar7;
  if (uStack_34 <= uVar8) goto LAB_014a6dc0;
  goto LAB_014a69b0;
LAB_014a6f8c:
  puVar13 = &DAT_01d2e36c;
  uStack_34 = local_2c;
  goto LAB_014a6f9c;
LAB_014a6f50:
  puVar13 = &DAT_01d2e37c;
  uVar8 = uVar9;
LAB_014a6f9c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar8,uStack_34,puVar13);
}

