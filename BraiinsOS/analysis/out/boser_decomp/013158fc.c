// FUN_013158fc @ 013158fc size=1744 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013158fc(int *param_1,uint param_2,int param_3,undefined1 *param_4,uint param_5,
                 undefined1 *param_6,uint param_7)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_a8;
  uint local_a4;
  int local_98;
  undefined1 local_79;
  int local_78;
  int local_74;
  int local_70;
  uint local_68;
  uint local_64;
  undefined1 *local_60;
  int *local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  if (param_5 == 1 && param_7 == 1) {
    local_79 = *param_4;
    local_78 = CONCAT31(local_78._1_3_,*param_6);
    local_5c = &local_78;
    local_60 = &local_79;
    local_64 = param_2 + param_3;
    local_68 = param_2;
    FUN_01298968(param_1,&local_68);
    return;
  }
  iVar12 = param_3;
  if (param_7 < param_5) {
    iVar12 = 0;
  }
  uVar14 = 0;
  if (iVar12 < 0) {
LAB_01315940:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,iVar12);
  }
  if (iVar12 == 0) {
    local_98 = 1;
    iVar12 = 0;
  }
  else {
    uVar14 = 1;
    local_98 = FUN_01298504(iVar12,1);
    if (local_98 == 0) goto LAB_01315940;
  }
  local_70 = 0;
  local_78 = iVar12;
  local_74 = local_98;
  FUN_01306b30(&local_68,param_2,param_3,param_4,param_5);
  iVar12 = 0;
  local_a4 = (uint)local_5c;
  iVar4 = local_2c - 1;
  uVar11 = local_2c;
  if (local_2c < local_58) {
    uVar11 = local_58;
  }
  local_a8 = local_4c;
  uVar13 = local_44;
  uVar15 = local_64;
  uVar16 = 0;
LAB_01315a84:
  if ((local_68 & 1) == 0) {
    if (((uint)local_5c & 0x10000) == 0) {
      uVar5 = local_a4;
      do {
        if (uVar15 != 0) {
          if (uVar15 < local_34) {
            if (*(char *)(local_38 + uVar15) < -0x40) goto LAB_01315f94;
          }
          else if (uVar15 != local_34) {
LAB_01315f94:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,uVar15,local_34,&DAT_01d2e39c);
          }
        }
        if (uVar15 == local_34) {
          local_a4 = 0;
          uVar6 = local_34;
          uVar17 = local_34;
          uVar15 = local_34;
          if ((uVar5 & 1) != 0) goto LAB_01315df4;
          break;
        }
        pbVar8 = (byte *)(local_38 + uVar15);
        uVar6 = (uint)*pbVar8;
        if (0x7fffffff < (uint)(int)(char)*pbVar8) {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar8[1] & 0x3f | (uVar6 & 0x1f) << 6;
          }
          else {
            uVar17 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar17 | (uVar6 & 0x1f) << 0xc;
            }
            else {
              uVar6 = pbVar8[3] & 0x3f | uVar17 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        if ((uVar5 & 1) != 0) goto LAB_01315cd8;
        iVar9 = 1;
        if (0x7f < uVar6) {
          iVar9 = 2;
        }
        uVar5 = 1;
        if ((0x7ff < uVar6) && (iVar9 = 4, uVar6 < 0x10000)) {
          iVar9 = 3;
        }
        uVar15 = iVar9 + uVar15;
      } while( true );
    }
  }
  else {
    uVar5 = local_a8 + iVar4;
    if (uVar13 == 0xffffffff) {
      if (uVar5 < local_34) {
        uVar13 = local_a4 & 0xff | (uint)local_5c & 0xffffff00;
LAB_01315d08:
        uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
        uVar5 = (uint)local_60 >> uVar6 | uVar13 << (0x20 - uVar6 & 0xff);
        if (-1 < (int)(uVar6 - 0x20)) {
          uVar5 = uVar13 >> (uVar6 - 0x20 & 0xff);
        }
        if ((uVar5 & 1) == 0) {
          uVar5 = local_2c;
          goto LAB_01315dcc;
        }
        uVar5 = local_58;
        do {
          uVar6 = uVar5;
          if (uVar11 == uVar6) {
            uVar5 = local_58 - 1;
            goto LAB_01315d90;
          }
          if (local_34 <= local_a8 + uVar6) {
            uVar5 = local_a8 + local_58;
            goto LAB_01315f78;
          }
          uVar5 = uVar6 + 1;
        } while (*(char *)(local_30 + uVar6) == *(char *)(local_38 + local_a8 + uVar6));
        local_a8 = (local_a8 - local_58) + uVar6 + 1;
        goto LAB_01315dd0;
      }
    }
    else if (uVar5 < local_34) {
      uVar17 = local_a4 & 0xff | (uint)local_5c & 0xffffff00;
LAB_01315ac4:
      uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
      uVar5 = (uint)local_60 >> uVar6 | uVar17 << (0x20 - uVar6 & 0xff);
      if (-1 < (int)(uVar6 - 0x20)) {
        uVar5 = uVar17 >> (uVar6 - 0x20 & 0xff);
      }
      if ((uVar5 & 1) == 0) {
        uVar13 = 0;
        uVar5 = local_2c;
        goto LAB_01315bac;
      }
      uVar5 = local_58;
      if (local_58 < uVar13) {
        uVar5 = uVar13;
      }
      uVar6 = local_2c;
      if (local_2c < uVar5) {
        uVar6 = uVar5;
      }
      uVar3 = uVar5;
      do {
        uVar7 = uVar3;
        if (uVar6 == uVar7) {
          uVar5 = local_58;
          goto LAB_01315b70;
        }
        if (local_34 <= local_a8 + uVar7) {
          uVar5 = local_a8 + uVar5;
LAB_01315f78:
          puVar10 = &DAT_01d2e38c;
          if (uVar5 < local_34) {
            uVar5 = local_34;
          }
          goto LAB_01315fc8;
        }
        uVar3 = uVar7 + 1;
      } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + local_a8 + uVar7));
      uVar13 = 0;
      local_a8 = (local_a8 - local_58) + uVar7 + 1;
      goto LAB_01315bb0;
    }
  }
LAB_01315ed4:
  uVar11 = param_3 - uVar16;
  if ((uint)(local_78 - iVar12) < uVar11) {
    FUN_006520b4(&local_78,iVar12,uVar11,1,1);
    local_98 = local_74;
    iVar12 = local_70;
  }
  else {
  }
  FUN_01bed4e2(local_98 + iVar12,param_2 + uVar16,uVar11);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = iVar12 + uVar11;
  return;
LAB_01315cd8:
  local_a4 = 0;
  uVar6 = uVar15;
  uVar17 = uVar15;
LAB_01315df4:
  uVar6 = uVar6 - uVar16;
  if ((uint)(local_78 - iVar12) < uVar6) {
    FUN_006520b4(&local_78,iVar12,uVar6,1,1);
    local_98 = local_74;
    iVar12 = local_70;
  }
  else {
  }
  iVar9 = local_78;
  FUN_01bed4e2(local_98 + iVar12,param_2 + uVar16,uVar6);
  local_70 = iVar12 + uVar6;
  if ((uint)(iVar9 - local_70) < param_7) {
    FUN_006520b4(&local_78,local_70,param_7,1,1);
    local_98 = local_74;
  }
  iVar12 = local_70;
  FUN_01bed4e2(local_98 + local_70,param_6,param_7);
  iVar12 = iVar12 + param_7;
  uVar16 = uVar17;
  local_70 = iVar12;
  goto LAB_01315a84;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_01315fbc;
    uVar6 = local_a8 + uVar5;
    if (local_34 <= uVar6) goto LAB_01315f88;
    pcVar1 = (char *)(local_38 + local_a8 + uVar5);
    pcVar2 = (char *)(local_30 + uVar5);
    uVar5 = uVar5 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_01315d90:
    if (uVar5 == 0xffffffff) {
      uVar13 = 0xffffffff;
      goto LAB_01315dec;
    }
  }
  uVar5 = local_50;
LAB_01315dcc:
  local_a8 = local_a8 + uVar5;
LAB_01315dd0:
  uVar5 = local_a8 + iVar4;
  if (local_34 <= uVar5) goto LAB_01315ed4;
  goto LAB_01315d08;
  while( true ) {
    uVar6 = uVar5 + local_a8;
    if (local_34 <= uVar6) goto LAB_01315f88;
    if (*(char *)(local_30 + uVar5) != *(char *)(local_38 + uVar6)) break;
LAB_01315b70:
    if (uVar5 <= uVar13) {
      uVar13 = 0;
LAB_01315dec:
      uVar6 = local_a8;
      uVar17 = local_a8 + local_2c;
      local_a8 = local_a8 + local_2c;
      goto LAB_01315df4;
    }
    uVar5 = uVar5 - 1;
    if (local_2c <= uVar5) goto LAB_01315fbc;
  }
  uVar5 = local_50;
  uVar13 = local_2c - local_50;
LAB_01315bac:
  local_a8 = local_a8 + uVar5;
LAB_01315bb0:
  uVar5 = local_a8 + iVar4;
  if (local_34 <= uVar5) goto LAB_01315ed4;
  goto LAB_01315ac4;
LAB_01315fbc:
  puVar10 = &DAT_01d2e36c;
  local_34 = local_2c;
  goto LAB_01315fc8;
LAB_01315f88:
  puVar10 = &DAT_01d2e37c;
  uVar5 = uVar6;
LAB_01315fc8:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,local_34,puVar10);
}

