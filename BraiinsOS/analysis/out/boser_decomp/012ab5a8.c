// FUN_012ab5a8 @ 012ab5a8 size=1544 calls_out=5 calls_in=1
// strings: {n}Unknown argument or group id.  Make sure you are using the argument id and not the short or long flags 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012ab5a8(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
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
  FUN_01306b30(&local_68,param_2,param_3,
               "{n}Unknown argument or group id.  Make sure you are using the argument id and not the short or long flags\n"
               ,3);
  iVar16 = 0;
  local_a4 = local_5c;
  iVar4 = local_2c - 1;
  uVar12 = local_2c;
  if (local_2c < local_58) {
    uVar12 = local_58;
  }
  local_80 = local_44;
  iVar8 = 1;
  local_a8 = local_4c;
  uVar13 = 0;
  uVar14 = local_64;
LAB_012ab68c:
  if ((local_68 & 1) == 0) {
    if ((local_5c & 0x10000) == 0) {
      uVar5 = local_a4;
      do {
        if (uVar14 != 0) {
          if (uVar14 < local_34) {
            if (*(char *)(local_38 + uVar14) < -0x40) goto LAB_012abb78;
          }
          else if (uVar14 != local_34) {
LAB_012abb78:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,uVar14,local_34,&DAT_01d2e39c);
          }
        }
        if (uVar14 == local_34) {
          local_a4 = 0;
          uVar15 = local_34;
          uVar6 = local_34;
          uVar14 = local_34;
          if ((uVar5 & 1) == 0) break;
          goto LAB_012aba04;
        }
        pbVar9 = (byte *)(local_38 + uVar14);
        uVar15 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar15 < 0xe0) {
            uVar15 = pbVar9[1] & 0x3f | (uVar15 & 0x1f) << 6;
          }
          else {
            uVar6 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar15 < 0xf0) {
              uVar15 = uVar6 | (uVar15 & 0x1f) << 0xc;
            }
            else {
              uVar15 = pbVar9[3] & 0x3f | uVar6 << 6 | (uVar15 & 7) << 0x12;
            }
          }
        }
        if ((uVar5 & 1) != 0) goto LAB_012ab8e0;
        iVar10 = 1;
        if (0x7f < uVar15) {
          iVar10 = 2;
        }
        uVar5 = 1;
        if ((0x7ff < uVar15) && (iVar10 = 4, uVar15 < 0x10000)) {
          iVar10 = 3;
        }
        uVar14 = iVar10 + uVar14;
      } while( true );
    }
  }
  else {
    uVar5 = local_a8 + iVar4;
    if (local_80 == 0xffffffff) {
      if (uVar5 < local_34) {
        uVar15 = local_a4 & 0xff | local_5c & 0xffffff00;
LAB_012ab910:
        uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
        uVar5 = local_60 >> uVar6 | uVar15 << (0x20 - uVar6 & 0xff);
        if (-1 < (int)(uVar6 - 0x20)) {
          uVar5 = uVar15 >> (uVar6 - 0x20 & 0xff);
        }
        if ((uVar5 & 1) == 0) {
          uVar5 = local_2c;
          goto LAB_012ab9d4;
        }
        uVar5 = local_58;
        do {
          uVar6 = uVar5;
          if (uVar12 == uVar6) {
            uVar5 = local_58 - 1;
            goto LAB_012ab994;
          }
          if (local_34 <= local_a8 + uVar6) {
            uVar5 = local_a8 + local_58;
            goto LAB_012abb5c;
          }
          uVar5 = uVar6 + 1;
        } while (*(char *)(local_30 + uVar6) == *(char *)(local_38 + local_a8 + uVar6));
        local_a8 = (local_a8 - local_58) + uVar6 + 1;
        goto LAB_012ab9d8;
      }
    }
    else if (uVar5 < local_34) {
      uVar15 = local_a4 & 0xff | local_5c & 0xffffff00;
LAB_012ab6d0:
      uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
      uVar5 = local_60 >> uVar6 | uVar15 << (0x20 - uVar6 & 0xff);
      if (-1 < (int)(uVar6 - 0x20)) {
        uVar5 = uVar15 >> (uVar6 - 0x20 & 0xff);
      }
      if ((uVar5 & 1) == 0) {
        local_a8 = local_a8 + local_2c;
      }
      else {
        uVar5 = local_58;
        if (local_58 < local_80) {
          uVar5 = local_80;
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
            goto LAB_012ab78c;
          }
          if (local_34 <= local_a8 + uVar7) {
            uVar5 = local_a8 + uVar5;
LAB_012abb5c:
            puVar11 = &DAT_01d2e38c;
            if (uVar5 < local_34) {
              uVar5 = local_34;
            }
            goto LAB_012abbac;
          }
          uVar3 = uVar7 + 1;
        } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + local_a8 + uVar7));
        local_a8 = (local_a8 - local_58) + uVar7 + 1;
      }
      local_80 = 0;
      goto LAB_012ab76c;
    }
  }
LAB_012abac0:
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
LAB_012ab8e0:
  local_a4 = 0;
  uVar15 = uVar14;
  uVar6 = uVar14;
LAB_012aba04:
  uVar15 = uVar15 - uVar13;
  if ((uint)(local_78 - iVar16) < uVar15) {
    FUN_006520b4(&local_78,iVar16,uVar15,1,1);
    iVar8 = local_74;
    iVar16 = local_70;
  }
  else {
  }
  iVar10 = local_78;
  FUN_01bed4e2(iVar8 + iVar16,param_2 + uVar13,uVar15);
  local_70 = iVar16 + uVar15;
  if (iVar10 == local_70) {
    FUN_006520b4(&local_78,iVar10,1,1,1);
    iVar8 = local_74;
  }
  iVar16 = local_70 + 1;
  *(undefined1 *)(iVar8 + local_70) = 10;
  uVar13 = uVar6;
  local_70 = iVar16;
  goto LAB_012ab68c;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_012abba0;
    uVar6 = local_a8 + uVar5;
    if (local_34 <= uVar6) goto LAB_012abb6c;
    pcVar1 = (char *)(local_38 + local_a8 + uVar5);
    pcVar2 = (char *)(local_30 + uVar5);
    uVar5 = uVar5 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_012ab994:
    if (uVar5 == 0xffffffff) {
      local_80 = 0xffffffff;
      goto LAB_012ab9fc;
    }
  }
  uVar5 = local_50;
LAB_012ab9d4:
  local_a8 = local_a8 + uVar5;
LAB_012ab9d8:
  uVar5 = local_a8 + iVar4;
  if (local_34 <= uVar5) goto LAB_012abac0;
  goto LAB_012ab910;
  while( true ) {
    uVar6 = uVar5 + local_a8;
    if (local_34 <= uVar6) goto LAB_012abb6c;
    if (*(char *)(local_30 + uVar5) != *(char *)(local_38 + uVar6)) break;
LAB_012ab78c:
    if (uVar5 <= local_80) {
      local_80 = 0;
LAB_012ab9fc:
      uVar15 = local_a8;
      uVar6 = local_a8 + local_2c;
      local_a8 = local_a8 + local_2c;
      goto LAB_012aba04;
    }
    uVar5 = uVar5 - 1;
    if (local_2c <= uVar5) goto LAB_012abba0;
  }
  local_a8 = local_a8 + local_50;
  local_80 = local_2c - local_50;
LAB_012ab76c:
  uVar5 = local_a8 + iVar4;
  if (local_34 <= uVar5) goto LAB_012abac0;
  goto LAB_012ab6d0;
LAB_012abba0:
  puVar11 = &DAT_01d2e36c;
  local_34 = local_2c;
  goto LAB_012abbac;
LAB_012abb6c:
  puVar11 = &DAT_01d2e37c;
  uVar5 = uVar6;
LAB_012abbac:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,local_34,puVar11);
}

