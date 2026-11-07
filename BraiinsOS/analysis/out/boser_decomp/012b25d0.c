// FUN_012b25d0 @ 012b25d0 size=1608 calls_out=6 calls_in=3
// strings: {n}Unknown argument or group id.  Make sure you are using the argument id and not the short or long flags 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012b25d0(uint *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_b0;
  uint local_ac;
  uint local_8c;
  int local_88;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint uStack_34;
  int iStack_30;
  uint local_2c;
  
  uVar7 = param_1[1];
  uVar9 = param_1[2];
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  FUN_01306b30(&local_68,uVar7,uVar9,
               "{n}Unknown argument or group id.  Make sure you are using the argument id and not the short or long flags\n"
               ,3);
  local_88 = 0;
  local_ac = local_5c;
  uVar10 = local_2c;
  if (local_2c < local_58) {
    uVar10 = local_58;
  }
  iVar8 = local_2c - 1;
  uVar11 = 1;
  local_b0 = local_4c;
  local_8c = 0;
  uVar15 = local_44;
  uVar16 = local_64;
LAB_012b26bc:
  if ((local_68 & 1) == 0) {
    if ((local_5c & 0x10000) == 0) {
      do {
        if (uVar16 != 0) {
          if (uVar16 < uStack_34) {
            if (*(char *)(local_38 + uVar16) < -0x40) goto LAB_012b2be0;
          }
          else if (uVar16 != uStack_34) {
LAB_012b2be0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,uStack_34,uVar16,uStack_34,&DAT_01d2e39c);
          }
        }
        if (uVar16 == uStack_34) {
          uVar4 = local_ac & 1;
          local_ac = 0;
          uVar5 = uStack_34;
          uVar17 = uStack_34;
          uVar16 = uStack_34;
          if (uVar4 == 0) break;
          goto LAB_012b2a1c;
        }
        pbVar12 = (byte *)(local_38 + uVar16);
        uVar4 = (uint)*pbVar12;
        if (0x7fffffff < (uint)(int)(char)*pbVar12) {
          if (uVar4 < 0xe0) {
            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
          }
          else {
            uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
            if (uVar4 < 0xf0) {
              uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
            }
            else {
              uVar4 = pbVar12[3] & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        if ((local_ac & 1) != 0) goto LAB_012b290c;
        iVar13 = 1;
        if (0x7f < uVar4) {
          iVar13 = 2;
        }
        local_ac = 1;
        if ((0x7ff < uVar4) && (iVar13 = 4, uVar4 < 0x10000)) {
          iVar13 = 3;
        }
        uVar16 = iVar13 + uVar16;
      } while( true );
    }
  }
  else {
    uVar4 = local_b0 + iVar8;
    if (uVar15 == 0xffffffff) {
      if (uVar4 < uStack_34) {
        uVar15 = local_ac & 0xff | local_5c & 0xffffff00;
LAB_012b293c:
        uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
        uVar4 = local_60 >> uVar5 | uVar15 << (0x20 - uVar5 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar4 = uVar15 >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar4 & 1) == 0) {
          local_b0 = local_b0 + local_2c;
        }
        else {
          uVar4 = local_58;
          do {
            uVar5 = uVar4;
            if (uVar10 == uVar5) {
              uVar4 = local_58 - 1;
              goto LAB_012b29c0;
            }
            if (uStack_34 <= local_b0 + uVar5) {
              uVar4 = local_b0 + local_58;
              goto LAB_012b2bc4;
            }
            uVar4 = uVar5 + 1;
          } while (*(char *)(iStack_30 + uVar5) == *(char *)(local_38 + local_b0 + uVar5));
          local_b0 = (local_b0 - local_58) + uVar5 + 1;
        }
        goto LAB_012b29fc;
      }
    }
    else if (uVar4 < uStack_34) {
      uVar17 = local_ac & 0xff | local_5c & 0xffffff00;
LAB_012b26fc:
      uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
      uVar4 = local_60 >> uVar5 | uVar17 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)(uVar5 - 0x20)) {
        uVar4 = uVar17 >> (uVar5 - 0x20 & 0xff);
      }
      if ((uVar4 & 1) == 0) {
        local_b0 = local_b0 + local_2c;
        uVar15 = 0;
      }
      else {
        uVar4 = local_58;
        if (local_58 < uVar15) {
          uVar4 = uVar15;
        }
        uVar5 = local_2c;
        if (local_2c < uVar4) {
          uVar5 = uVar4;
        }
        uVar3 = uVar4;
        do {
          uVar6 = uVar3;
          if (uVar5 == uVar6) {
            uVar4 = local_58;
            goto LAB_012b27b0;
          }
          if (uStack_34 <= local_b0 + uVar6) {
            uVar4 = local_b0 + uVar4;
LAB_012b2bc4:
            puVar14 = &DAT_01d2e38c;
            if (uVar4 < uStack_34) {
              uVar4 = uStack_34;
            }
            goto LAB_012b2c14;
          }
          uVar3 = uVar6 + 1;
        } while (*(char *)(iStack_30 + uVar6) == *(char *)(local_38 + local_b0 + uVar6));
        local_b0 = (local_b0 - local_58) + uVar6 + 1;
        uVar15 = 0;
      }
      goto LAB_012b27ec;
    }
  }
LAB_012b2afc:
  uVar9 = uVar9 - local_8c;
  if (local_78 - local_88 < uVar9) {
    FUN_006520b4(&local_78,local_88,uVar9,1,1);
    local_88 = local_70;
  }
  FUN_01bed4e2(local_74 + local_88,uVar7 + local_8c,uVar9);
  local_70 = local_88 + uVar9;
  local_68 = local_78;
  local_64 = local_74;
  local_60 = local_70;
  FUN_0134bd64(*param_1,param_1[1]);
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  return;
LAB_012b290c:
  local_ac = 0;
  uVar5 = uVar16;
  uVar17 = uVar16;
LAB_012b2a1c:
  uVar17 = uVar17 - local_8c;
  if (local_78 - local_88 < uVar17) {
    FUN_006520b4(&local_78,local_88,uVar17,1,1);
    local_88 = local_70;
    uVar11 = local_74;
  }
  else {
  }
  uVar4 = local_78;
  FUN_01bed4e2(uVar11 + local_88,uVar7 + local_8c,uVar17);
  local_70 = local_88 + uVar17;
  if (uVar4 == local_70) {
    FUN_006520b4(&local_78,uVar4,1,1,1);
    uVar11 = local_74;
  }
  *(undefined1 *)(uVar11 + local_70) = 10;
  local_88 = local_70 + 1;
  local_8c = uVar5;
  local_70 = local_88;
  goto LAB_012b26bc;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_012b2c08;
    uVar5 = local_b0 + uVar4;
    if (uStack_34 <= uVar5) goto LAB_012b2bd4;
    pcVar1 = (char *)(local_38 + local_b0 + uVar4);
    pcVar2 = (char *)(iStack_30 + uVar4);
    uVar4 = uVar4 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_012b29c0:
    if (uVar4 == 0xffffffff) {
      uVar15 = 0xffffffff;
      goto LAB_012b2a18;
    }
  }
  local_b0 = local_b0 + local_50;
LAB_012b29fc:
  uVar4 = local_b0 + iVar8;
  if (uStack_34 <= uVar4) goto LAB_012b2afc;
  goto LAB_012b293c;
  while( true ) {
    uVar5 = uVar4 + local_b0;
    if (uStack_34 <= uVar5) goto LAB_012b2bd4;
    if (*(char *)(iStack_30 + uVar4) != *(char *)(local_38 + uVar5)) break;
LAB_012b27b0:
    if (uVar4 <= uVar15) {
      uVar15 = 0;
LAB_012b2a18:
      uVar5 = local_b0 + local_2c;
      uVar17 = local_b0;
      local_b0 = local_b0 + local_2c;
      goto LAB_012b2a1c;
    }
    uVar4 = uVar4 - 1;
    if (local_2c <= uVar4) goto LAB_012b2c08;
  }
  local_b0 = local_b0 + local_50;
  uVar15 = local_2c - local_50;
LAB_012b27ec:
  uVar4 = local_b0 + iVar8;
  if (uStack_34 <= uVar4) goto LAB_012b2afc;
  goto LAB_012b26fc;
LAB_012b2c08:
  puVar14 = &DAT_01d2e36c;
  uStack_34 = local_2c;
  goto LAB_012b2c14;
LAB_012b2bd4:
  puVar14 = &DAT_01d2e37c;
  uVar4 = uVar5;
LAB_012b2c14:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar4,uStack_34,puVar14);
}

