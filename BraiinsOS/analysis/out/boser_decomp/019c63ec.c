// FUN_019c63ec @ 019c63ec size=1536 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019c63ec(int *param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint local_a8;
  uint local_a4;
  uint local_80;
  int local_78;
  int local_74;
  int local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  uVar17 = 4;
  FUN_01306b30(&local_68);
  iVar16 = 0;
  local_a4 = local_5c;
  iVar3 = local_2c - 1;
  uVar12 = local_2c;
  if (local_2c < local_58) {
    uVar12 = local_58;
  }
  local_80 = local_44;
  iVar7 = 1;
  local_a8 = local_4c;
  uVar13 = 0;
  uVar14 = local_64;
LAB_019c64c8:
  if ((local_68 & 1) == 0) {
    if ((local_5c & 0x10000) == 0) {
      uVar4 = local_a4;
      do {
        if (uVar14 != 0) {
          if (uVar14 < local_34) {
            if (*(char *)(local_38 + uVar14) < -0x40) goto LAB_019c69b4;
          }
          else if (uVar14 != local_34) {
LAB_019c69b4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,uVar14,local_34,&DAT_01d2e39c);
          }
        }
        if (uVar14 == local_34) {
          local_a4 = 0;
          uVar15 = local_34;
          uVar5 = local_34;
          uVar14 = local_34;
          if ((uVar4 & 1) == 0) break;
          goto LAB_019c6840;
        }
        pbVar9 = (byte *)(local_38 + uVar14);
        uVar15 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar15 < 0xe0) {
            uVar15 = pbVar9[1] & 0x3f | (uVar15 & 0x1f) << 6;
          }
          else {
            uVar5 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar15 < 0xf0) {
              uVar15 = uVar5 | (uVar15 & 0x1f) << 0xc;
            }
            else {
              uVar15 = pbVar9[3] & 0x3f | uVar5 << 6 | (uVar15 & 7) << 0x12;
            }
          }
        }
        if ((uVar4 & 1) != 0) goto LAB_019c671c;
        iVar10 = 1;
        if (0x7f < uVar15) {
          iVar10 = 2;
        }
        uVar4 = 1;
        if ((0x7ff < uVar15) && (iVar10 = 4, uVar15 < 0x10000)) {
          iVar10 = 3;
        }
        uVar14 = iVar10 + uVar14;
      } while( true );
    }
  }
  else {
    uVar4 = local_a8 + iVar3;
    if (local_80 == 0xffffffff) {
      if (uVar4 < local_34) {
        uVar15 = local_a4 & 0xff | local_5c & 0xffffff00;
LAB_019c674c:
        uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
        uVar4 = local_60 >> uVar5 | uVar15 << (0x20 - uVar5 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar4 = uVar15 >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar4 & 1) == 0) {
          uVar4 = local_2c;
          goto LAB_019c6810;
        }
        uVar4 = local_38 + local_a8;
        uVar5 = local_58;
        do {
          uVar8 = uVar5;
          if (uVar12 == uVar8) {
            uVar5 = local_58 - 1;
            goto LAB_019c67d0;
          }
          if (local_34 <= local_a8 + uVar8) {
            uVar5 = local_a8 + local_58;
            goto LAB_019c6998;
          }
          uVar5 = uVar8 + 1;
        } while (*(char *)(local_30 + uVar8) == *(char *)(uVar4 + uVar8));
        local_a8 = (local_a8 - local_58) + uVar8 + 1;
        goto LAB_019c6814;
      }
    }
    else if (uVar4 < local_34) {
      uVar15 = local_a4 & 0xff | local_5c & 0xffffff00;
LAB_019c650c:
      uVar5 = *(byte *)(local_38 + uVar4) & 0x3f;
      uVar4 = local_60 >> uVar5 | uVar15 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)(uVar5 - 0x20)) {
        uVar4 = uVar15 >> (uVar5 - 0x20 & 0xff);
      }
      if ((uVar4 & 1) == 0) {
        local_a8 = local_a8 + local_2c;
      }
      else {
        uVar5 = local_58;
        if (local_58 < local_80) {
          uVar5 = local_80;
        }
        uVar4 = local_2c;
        if (local_2c < uVar5) {
          uVar4 = uVar5;
        }
        uVar8 = uVar5;
        do {
          uVar6 = uVar8;
          if (uVar4 == uVar6) {
            uVar5 = local_58;
            goto LAB_019c65c8;
          }
          if (local_34 <= local_a8 + uVar6) {
            uVar5 = local_a8 + uVar5;
LAB_019c6998:
            puVar11 = &DAT_01d2e38c;
            if (uVar5 < local_34) {
              uVar5 = local_34;
            }
            goto LAB_019c69e8;
          }
          uVar8 = uVar6 + 1;
        } while (*(char *)(local_30 + uVar6) == *(char *)(local_38 + local_a8 + uVar6));
        local_a8 = (local_a8 - local_58) + uVar6 + 1;
      }
      local_80 = 0;
      goto LAB_019c65a8;
    }
  }
LAB_019c68fc:
  uVar12 = param_3 - uVar13;
  if ((uint)(local_78 - iVar16) < uVar12) {
    FUN_006520b4(&local_78,iVar16,uVar12,1,1);
    iVar16 = local_70;
  }
  else {
  }
  FUN_01bed4e2(local_74 + iVar16,param_2 + uVar13,uVar12);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = iVar16 + uVar12;
  return;
LAB_019c671c:
  local_a4 = 0;
  uVar15 = uVar14;
  uVar5 = uVar14;
LAB_019c6840:
  uVar15 = uVar15 - uVar13;
  if ((uint)(local_78 - iVar16) < uVar15) {
    uVar17 = 1;
    FUN_006520b4(&local_78,iVar16,uVar15,1,1);
    iVar7 = local_74;
    iVar16 = local_70;
  }
  else {
  }
  iVar10 = local_78;
  FUN_01bed4e2(iVar7 + iVar16,param_2 + uVar13,uVar15);
  local_70 = iVar16 + uVar15;
  if (iVar10 == local_70) {
    uVar17 = 1;
    FUN_006520b4(&local_78,iVar10,1,1,1);
    iVar7 = local_74;
  }
  iVar16 = local_70 + 1;
  *(undefined1 *)(iVar7 + local_70) = param_5;
  uVar13 = uVar5;
  local_70 = iVar16;
  goto LAB_019c64c8;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_019c69dc;
    uVar8 = local_a8 + uVar5;
    if (local_34 <= uVar8) goto LAB_019c69a8;
    pcVar1 = (char *)(uVar4 + uVar5);
    pcVar2 = (char *)(local_30 + uVar5);
    uVar5 = uVar5 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_019c67d0:
    if (uVar5 == 0xffffffff) {
      local_80 = 0xffffffff;
      goto LAB_019c6838;
    }
  }
  uVar4 = local_50;
LAB_019c6810:
  local_a8 = local_a8 + uVar4;
LAB_019c6814:
  uVar4 = local_a8 + iVar3;
  if (local_34 <= uVar4) goto LAB_019c68fc;
  goto LAB_019c674c;
  while( true ) {
    uVar8 = uVar5 + local_a8;
    if (local_34 <= uVar8) goto LAB_019c69a8;
    uVar4 = (uint)*(byte *)(local_30 + uVar5);
    if (uVar4 != *(byte *)(local_38 + uVar8)) break;
LAB_019c65c8:
    if (uVar5 <= local_80) {
      local_80 = 0;
LAB_019c6838:
      uVar15 = local_a8;
      uVar5 = local_a8 + local_2c;
      local_a8 = local_a8 + local_2c;
      goto LAB_019c6840;
    }
    uVar5 = uVar5 - 1;
    if (local_2c <= uVar5) goto LAB_019c69dc;
  }
  local_a8 = local_a8 + local_50;
  local_80 = local_2c - local_50;
LAB_019c65a8:
  uVar4 = local_a8 + iVar3;
  if (local_34 <= uVar4) goto LAB_019c68fc;
  goto LAB_019c650c;
LAB_019c69dc:
  puVar11 = &DAT_01d2e36c;
  local_34 = local_2c;
  goto LAB_019c69e8;
LAB_019c69a8:
  puVar11 = &DAT_01d2e37c;
  uVar5 = uVar8;
LAB_019c69e8:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,local_34,puVar11,uVar4,uVar17);
}

