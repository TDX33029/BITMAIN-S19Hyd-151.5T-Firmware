// FUN_00f996fc @ 00f996fc size=2268 calls_out=6 calls_in=3
// strings: 

void FUN_00f996fc(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_94;
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
  uint local_34;
  int local_30;
  uint local_2c;
  
  uVar8 = param_1[1];
  uVar13 = param_1[2];
  local_70 = 0;
  local_74 = 1;
  local_78 = 0;
  FUN_00fb6cfc(&local_68,uVar8,uVar13,"{n}",3);
  uVar14 = local_2c;
  if (local_2c < local_58) {
    uVar14 = local_58;
  }
  if ((local_68 & 1) != 0) {
    uVar17 = 0;
    uVar18 = 1;
    iVar4 = local_2c - 1;
    uVar5 = local_58 - 1;
    local_94 = 0;
    uVar15 = local_44;
joined_r0x00f997f0:
    uVar9 = local_4c + iVar4;
    uVar16 = local_4c;
    if (uVar15 == 0xffffffff) {
joined_r0x00f9990c:
      if (uVar9 < local_34) {
        uVar9 = *(byte *)(local_38 + uVar9) & 0x3f;
        uVar15 = local_60 >> uVar9 | local_5c << (0x20 - uVar9 & 0xff);
        if (-1 < (int)(uVar9 - 0x20)) {
          uVar15 = local_5c >> (uVar9 - 0x20 & 0xff);
        }
        if ((uVar15 & 1) == 0) {
          uVar16 = uVar16 + local_2c;
        }
        else {
          uVar15 = local_58;
          do {
            uVar9 = uVar15;
            if (uVar14 == uVar9) {
              if (local_2c <= uVar5) {
                uVar15 = 0xffffffff;
                if (local_58 != 0) {
                  uVar9 = uVar5;
LAB_00f99fc0:
                  puVar12 = &DAT_018aeb10;
                  local_34 = local_2c;
                  goto LAB_00f99fcc;
                }
                goto LAB_00f99a00;
              }
              uVar9 = uVar5 + uVar16;
              pcVar10 = (char *)(local_30 + uVar5);
              uVar15 = local_58;
              goto LAB_00f999c4;
            }
            if (local_34 <= uVar16 + uVar9) {
              uVar9 = uVar16 + local_58;
LAB_00f99f6c:
              puVar12 = &DAT_018aeb30;
              if (uVar9 < local_34) {
                uVar9 = local_34;
              }
              goto LAB_00f99fcc;
            }
            uVar15 = uVar9 + 1;
          } while (*(char *)(local_30 + uVar9) == *(char *)(local_38 + uVar16 + uVar9));
          uVar16 = (uVar16 - local_58) + uVar9 + 1;
        }
        goto LAB_00f9992c;
      }
      goto LAB_00f99b1c;
    }
    while (uVar9 < local_34) {
      while( true ) {
        uVar6 = *(byte *)(local_38 + uVar9) & 0x3f;
        uVar9 = local_60 >> uVar6 | local_5c << (0x20 - uVar6 & 0xff);
        if (-1 < (int)(uVar6 - 0x20)) {
          uVar9 = local_5c >> (uVar6 - 0x20 & 0xff);
        }
        if ((uVar9 & 1) == 0) break;
        uVar9 = local_58;
        if (local_58 < uVar15) {
          uVar9 = uVar15;
        }
        uVar6 = local_2c;
        if (local_2c < uVar9) {
          uVar6 = uVar9;
        }
        uVar3 = uVar9;
        while (uVar7 = uVar3, uVar6 != uVar7) {
          if (local_34 <= uVar16 + uVar7) {
            uVar9 = uVar16 + uVar9;
            goto LAB_00f99f6c;
          }
          uVar3 = uVar7 + 1;
          if (*(char *)(local_30 + uVar7) != *(char *)(local_38 + uVar16 + uVar7)) {
            uVar16 = (uVar16 - local_58) + uVar7 + 1;
            goto LAB_00f99890;
          }
        }
        uVar9 = local_58;
        do {
          if (uVar9 <= uVar15) {
            uVar15 = 0;
            goto LAB_00f99a00;
          }
          uVar9 = uVar9 - 1;
          if (local_2c <= uVar9) goto LAB_00f99fc0;
          uVar6 = uVar9 + uVar16;
          if (local_34 <= uVar6) {
            puVar12 = &DAT_018aeb20;
            uVar9 = uVar6;
            goto LAB_00f99fcc;
          }
        } while (*(char *)(local_30 + uVar9) == *(char *)(local_38 + uVar6));
        uVar16 = uVar16 + local_50;
        uVar9 = uVar16 + iVar4;
        uVar15 = local_2c - local_50;
        if (local_34 <= uVar9) goto LAB_00f99b1c;
      }
      uVar16 = uVar16 + local_2c;
LAB_00f99890:
      uVar15 = 0;
      uVar9 = uVar16 + iVar4;
    }
LAB_00f99b1c:
    goto LAB_00f99e4c;
  }
  uVar17 = 0;
  if ((local_5c & 0x10000) != 0) {
    local_94 = 0;
LAB_00f99e4c:
    uVar13 = uVar13 - local_94;
    if (local_78 - uVar17 < uVar13) {
      FUN_00f991dc(&local_78,uVar17,uVar13,1,1);
      uVar17 = local_70;
    }
    FUN_016dd1aa(local_74 + uVar17,uVar8 + local_94,uVar13);
    local_60 = uVar17 + uVar13;
    local_68 = local_78;
    local_64 = local_74;
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    *param_1 = local_68;
    param_1[1] = local_64;
    param_1[2] = local_60;
    return;
  }
  if (local_64 != 0) {
    if (local_64 < local_34) {
      if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00f99f98;
    }
    else if (local_64 != local_34) goto LAB_00f99f98;
  }
  uVar14 = local_64;
  if (local_64 == local_34) {
    local_94 = 0;
    if ((local_5c & 1) != 0) goto LAB_00f99c2c;
    goto LAB_00f99e4c;
  }
  pbVar11 = (byte *)(local_38 + local_64);
  uVar17 = (uint)*pbVar11;
  if ((char)*pbVar11 < '\0') {
    if (uVar17 < 0xe0) {
      uVar17 = pbVar11[1] & 0x3f | (uVar17 & 0x1f) << 6;
    }
    else {
      uVar18 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
      if (uVar17 < 0xf0) {
        uVar17 = uVar18 | (uVar17 & 0x1f) << 0xc;
      }
      else {
        uVar17 = pbVar11[3] & 0x3f | uVar18 << 6 | (uVar17 & 7) << 0x12;
      }
    }
  }
  if ((local_5c & 1) != 0) goto LAB_00f99c2c;
  iVar4 = 1;
  if (0x7f < uVar17) {
    iVar4 = 2;
  }
  if ((0x7ff < uVar17) && (iVar4 = 4, uVar17 < 0x10000)) {
    iVar4 = 3;
  }
  local_64 = iVar4 + local_64;
  if (local_64 != 0) {
    if (local_64 < local_34) {
      if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00f99fd8;
    }
    else if (local_64 != local_34) {
LAB_00f99fd8:
LAB_00f99f98:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(local_38,local_34,local_64,local_34,&DAT_018aeb58);
    }
  }
  uVar14 = local_34;
  if (local_64 != local_34) {
    uVar14 = local_64;
  }
LAB_00f99c2c:
  if (uVar14 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    uVar15 = 0;
  }
  else {
    FUN_00f991dc(&local_78,0,uVar14,1,1);
    uVar17 = local_74;
    uVar18 = local_78;
    uVar15 = local_70;
  }
  FUN_016dd1aa(uVar17 + uVar15,uVar8,uVar14);
  local_70 = uVar15 + uVar14;
  if (uVar18 == local_70) {
    FUN_00f991dc(&local_78,uVar18,1,1,1);
  }
  local_64 = uVar14;
LAB_00f99c68:
  uVar17 = local_70 + 1;
  *(undefined1 *)(local_74 + local_70) = 10;
  local_70 = uVar17;
  if (local_64 != 0) {
    if (local_64 < local_34) {
      if (*(char *)(local_38 + local_64) < -0x40) goto LAB_00f99f98;
    }
    else if (local_64 != local_34) goto LAB_00f99f98;
  }
  if (local_64 == local_34) {
    local_94 = local_34;
    goto LAB_00f99e4c;
  }
  pbVar11 = (byte *)(local_38 + local_64);
  iVar4 = 1;
  if (0x7fffffff < (uint)(int)(char)*pbVar11) {
    uVar14 = (uint)*pbVar11;
    if (uVar14 < 0xe0) {
      uVar18 = pbVar11[1] & 0x3f | (uVar14 & 0x1f) << 6;
      if (0x7f < uVar18) {
        iVar4 = 2;
      }
    }
    else {
      uVar18 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
      if (uVar14 < 0xf0) {
        uVar18 = uVar18 | (uVar14 & 0x1f) << 0xc;
        if (0x7f < uVar18) {
          iVar4 = 2;
        }
      }
      else {
        uVar18 = pbVar11[3] & 0x3f | uVar18 << 6 | (uVar14 & 7) << 0x12;
        if (0x7f < uVar18) {
          iVar4 = 2;
        }
      }
    }
    if ((0x7ff < uVar18) && (iVar4 = 4, uVar18 < 0x10000)) {
      iVar4 = 3;
    }
  }
  uVar14 = iVar4 + local_64;
  if (uVar14 != 0) {
    if (uVar14 < local_34) {
      if (*(char *)(local_38 + uVar14) < -0x40) goto LAB_00f99f94;
    }
    else if (uVar14 != local_34) goto LAB_00f99f94;
  }
  uVar18 = local_34;
  if (uVar14 != local_34) {
    uVar18 = uVar14;
  }
  uVar14 = uVar18 - local_64;
  if (local_78 - uVar17 < uVar14) {
    FUN_00f991dc(&local_78,uVar17,uVar14,1,1);
  }
  uVar15 = local_70;
  uVar17 = local_78;
  FUN_016dd1aa(local_74 + local_70,uVar8 + local_64,uVar14);
  local_70 = uVar15 + uVar14;
  local_64 = uVar18;
  if (uVar17 == local_70) {
    FUN_00f991dc(&local_78,uVar17,1,1,1);
  }
  goto LAB_00f99c68;
LAB_00f999c4:
  if (uVar15 != 0) {
    if (local_34 <= uVar9) {
      puVar12 = &DAT_018aeb20;
LAB_00f99fcc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar9,local_34,puVar12);
    }
    pcVar1 = (char *)(local_38 + uVar9);
    uVar15 = uVar15 - 1;
    cVar2 = *pcVar10;
    uVar9 = uVar9 - 1;
    pcVar10 = pcVar10 + -1;
    if (cVar2 != *pcVar1) goto code_r0x00f999ec;
    goto LAB_00f999c4;
  }
  uVar15 = 0xffffffff;
LAB_00f99a00:
  uVar9 = uVar16 - local_94;
  if (local_78 - uVar17 < uVar9) {
    FUN_00f991dc(&local_78,uVar17,uVar9,1,1);
    uVar17 = local_70;
    uVar18 = local_74;
  }
  uVar6 = local_78;
  FUN_016dd1aa(uVar18 + uVar17,uVar8 + local_94,uVar9);
  local_70 = uVar17 + uVar9;
  if (uVar6 == local_70) {
    FUN_00f991dc(&local_78,uVar6,1,1,1);
    uVar18 = local_74;
  }
  local_94 = uVar16 + local_2c;
  *(undefined1 *)(uVar18 + local_70) = 10;
  uVar17 = local_70 + 1;
  local_70 = uVar17;
  local_4c = local_94;
  goto joined_r0x00f997f0;
code_r0x00f999ec:
  uVar16 = uVar16 + local_50;
LAB_00f9992c:
  uVar9 = uVar16 + iVar4;
  goto joined_r0x00f9990c;
LAB_00f99f94:
  local_64 = uVar14;
  goto LAB_00f99f98;
}

