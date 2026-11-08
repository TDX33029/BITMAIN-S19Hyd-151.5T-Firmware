// FUN_00b75f58 @ 00b75f58 size=1664 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b75f58(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

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
  uint local_a0;
  uint local_9c;
  int local_94;
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
  
  uVar14 = 0;
  iVar12 = param_3;
  if (param_7 < param_5) {
    iVar12 = 0;
  }
  if (iVar12 < 0) {
LAB_00b75f88:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,iVar12);
  }
  if (iVar12 == 0) {
    local_94 = 1;
    iVar12 = 0;
  }
  else {
    uVar14 = 1;
    local_94 = FUN_01298504(iVar12,1);
    if (local_94 == 0) goto LAB_00b75f88;
  }
  local_70 = 0;
  local_78 = iVar12;
  local_74 = local_94;
  FUN_01306b30(&local_68,param_2,param_3,param_4,param_5);
  iVar12 = 0;
  local_9c = local_5c;
  iVar4 = local_2c - 1;
  uVar11 = local_2c;
  if (local_2c < local_58) {
    uVar11 = local_58;
  }
  local_a0 = local_4c;
  uVar13 = local_44;
  uVar15 = local_64;
  uVar16 = 0;
LAB_00b76090:
  if ((local_68 & 1) == 0) {
    if ((local_5c & 0x10000) == 0) {
      uVar5 = local_9c;
      do {
        if (uVar15 != 0) {
          if (uVar15 < local_34) {
            if (*(char *)(local_38 + uVar15) < -0x40) goto LAB_00b765a0;
          }
          else if (uVar15 != local_34) {
LAB_00b765a0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,uVar15,local_34,&DAT_01d2e39c);
          }
        }
        if (uVar15 == local_34) {
          local_9c = 0;
          uVar6 = local_34;
          uVar17 = local_34;
          uVar15 = local_34;
          if ((uVar5 & 1) == 0) break;
          goto LAB_00b76400;
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
        if ((uVar5 & 1) != 0) goto LAB_00b762e4;
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
    uVar5 = local_a0 + iVar4;
    if (uVar13 == 0xffffffff) {
      if (uVar5 < local_34) {
        uVar13 = local_9c & 0xff | local_5c & 0xffffff00;
LAB_00b76314:
        uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
        uVar5 = local_60 >> uVar6 | uVar13 << (0x20 - uVar6 & 0xff);
        if (-1 < (int)(uVar6 - 0x20)) {
          uVar5 = uVar13 >> (uVar6 - 0x20 & 0xff);
        }
        if ((uVar5 & 1) == 0) {
          uVar5 = local_2c;
          goto LAB_00b763d8;
        }
        uVar5 = local_58;
        do {
          uVar6 = uVar5;
          if (uVar11 == uVar6) {
            uVar5 = local_58 - 1;
            goto LAB_00b7639c;
          }
          if (local_34 <= local_a0 + uVar6) {
            uVar5 = local_a0 + local_58;
            goto LAB_00b76584;
          }
          uVar5 = uVar6 + 1;
        } while (*(char *)(local_30 + uVar6) == *(char *)(local_38 + local_a0 + uVar6));
        local_a0 = (local_a0 - local_58) + uVar6 + 1;
        goto LAB_00b763dc;
      }
    }
    else if (uVar5 < local_34) {
      uVar17 = local_9c & 0xff | local_5c & 0xffffff00;
LAB_00b760d0:
      uVar6 = *(byte *)(local_38 + uVar5) & 0x3f;
      uVar5 = local_60 >> uVar6 | uVar17 << (0x20 - uVar6 & 0xff);
      if (-1 < (int)(uVar6 - 0x20)) {
        uVar5 = uVar17 >> (uVar6 - 0x20 & 0xff);
      }
      if ((uVar5 & 1) == 0) {
        uVar13 = 0;
        uVar5 = local_2c;
        goto LAB_00b761b8;
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
          goto LAB_00b7617c;
        }
        if (local_34 <= local_a0 + uVar7) {
          uVar5 = local_a0 + uVar5;
LAB_00b76584:
          puVar10 = &DAT_01d2e38c;
          if (uVar5 < local_34) {
            uVar5 = local_34;
          }
          goto LAB_00b765d4;
        }
        uVar3 = uVar7 + 1;
      } while (*(char *)(local_30 + uVar7) == *(char *)(local_38 + local_a0 + uVar7));
      uVar13 = 0;
      local_a0 = (local_a0 - local_58) + uVar7 + 1;
      goto LAB_00b761bc;
    }
  }
LAB_00b764e0:
  uVar11 = param_3 - uVar16;
  if ((uint)(local_78 - iVar12) < uVar11) {
    FUN_0132b898(&local_78,iVar12,uVar11,1,1);
    local_94 = local_74;
    iVar12 = local_70;
  }
  else {
  }
  FUN_01bed4e2(local_94 + iVar12,param_2 + uVar16,uVar11);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = iVar12 + uVar11;
  return;
LAB_00b762e4:
  local_9c = 0;
  uVar6 = uVar15;
  uVar17 = uVar15;
LAB_00b76400:
  uVar6 = uVar6 - uVar16;
  if ((uint)(local_78 - iVar12) < uVar6) {
    FUN_0132b898(&local_78,iVar12,uVar6,1,1);
    local_94 = local_74;
    iVar12 = local_70;
  }
  else {
  }
  iVar9 = local_78;
  FUN_01bed4e2(local_94 + iVar12,param_2 + uVar16,uVar6);
  local_70 = iVar12 + uVar6;
  if ((uint)(iVar9 - local_70) < param_7) {
    FUN_0132b898(&local_78,local_70,param_7,1,1);
    local_94 = local_74;
  }
  iVar12 = local_70;
  FUN_01bed4e2(local_94 + local_70,param_6,param_7);
  iVar12 = iVar12 + param_7;
  uVar16 = uVar17;
  local_70 = iVar12;
  goto LAB_00b76090;
  while( true ) {
    if (local_2c <= local_58 - 1) goto LAB_00b765c8;
    uVar6 = local_a0 + uVar5;
    if (local_34 <= uVar6) goto LAB_00b76594;
    pcVar1 = (char *)(local_38 + local_a0 + uVar5);
    pcVar2 = (char *)(local_30 + uVar5);
    uVar5 = uVar5 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_00b7639c:
    if (uVar5 == 0xffffffff) {
      uVar13 = 0xffffffff;
      goto LAB_00b763f8;
    }
  }
  uVar5 = local_50;
LAB_00b763d8:
  local_a0 = local_a0 + uVar5;
LAB_00b763dc:
  uVar5 = local_a0 + iVar4;
  if (local_34 <= uVar5) goto LAB_00b764e0;
  goto LAB_00b76314;
  while( true ) {
    uVar6 = uVar5 + local_a0;
    if (local_34 <= uVar6) goto LAB_00b76594;
    if (*(char *)(local_30 + uVar5) != *(char *)(local_38 + uVar6)) break;
LAB_00b7617c:
    if (uVar5 <= uVar13) {
      uVar13 = 0;
LAB_00b763f8:
      uVar6 = local_a0;
      uVar17 = local_a0 + local_2c;
      local_a0 = local_a0 + local_2c;
      goto LAB_00b76400;
    }
    uVar5 = uVar5 - 1;
    if (local_2c <= uVar5) goto LAB_00b765c8;
  }
  uVar5 = local_50;
  uVar13 = local_2c - local_50;
LAB_00b761b8:
  local_a0 = local_a0 + uVar5;
LAB_00b761bc:
  uVar5 = local_a0 + iVar4;
  if (local_34 <= uVar5) goto LAB_00b764e0;
  goto LAB_00b760d0;
LAB_00b765c8:
  puVar10 = &DAT_01d2e36c;
  local_34 = local_2c;
  goto LAB_00b765d4;
LAB_00b76594:
  puVar10 = &DAT_01d2e37c;
  uVar5 = uVar6;
LAB_00b765d4:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,local_34,puVar10);
}

