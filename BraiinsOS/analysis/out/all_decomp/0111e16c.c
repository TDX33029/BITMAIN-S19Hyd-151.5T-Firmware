// FUN_0111e16c @ 0111e16c size=1592 calls_out=6 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0111e5d8) */

uint FUN_0111e16c(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined *local_a8;
  undefined1 *local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  iVar17 = param_1[1];
  uVar11 = param_1[2];
  FUN_00fb6cfc(&local_68,iVar17,uVar11,"0x",2);
  uVar16 = uVar11;
  if (local_68 == (undefined1 *)0x1) {
    if (local_4c != local_34) {
      iVar18 = local_38 + local_4c;
      iVar8 = local_2c - 1;
      uVar4 = local_2c;
      if (local_2c < local_58) {
        uVar4 = local_58;
      }
      local_a8 = &DAT_018aeb20;
LAB_0111e39c:
      uVar9 = local_4c + iVar8;
      uVar16 = local_4c;
      if (uVar9 < local_34) {
        uVar5 = local_4c + local_2c;
        iVar6 = (local_4c - local_58) + 1;
        uVar7 = local_4c;
        if (local_44 != 0xffffffff) {
LAB_0111e3f4:
          if (local_4c == uVar7) {
            uVar7 = *(byte *)(local_38 + uVar9) & 0x3f;
            uVar9 = local_60 >> uVar7 | local_5c << (0x20 - uVar7 & 0xff);
            if (-1 < (int)(uVar7 - 0x20)) {
              uVar9 = local_5c >> (uVar7 - 0x20 & 0xff);
            }
            if ((uVar9 & 1) == 0) {
              local_44 = 0;
              uVar7 = uVar5;
            }
            else {
              uVar9 = local_58;
              if (local_58 < local_44) {
                uVar9 = local_44;
              }
              uVar7 = local_2c;
              uVar3 = uVar9;
              if (local_2c < uVar9) {
                uVar7 = uVar9;
              }
              do {
                uVar13 = uVar3;
                if (uVar7 == uVar13) {
                  uVar9 = local_58;
                  goto LAB_0111e484;
                }
                if (local_34 <= local_4c + uVar13) goto LAB_0111e73c;
                uVar3 = uVar13 + 1;
              } while (*(char *)(local_30 + uVar13) == *(char *)(iVar18 + uVar13));
              uVar7 = iVar6 + uVar13;
              local_44 = 0;
            }
            goto LAB_0111e3e4;
          }
          goto joined_r0x0111e714;
        }
LAB_0111e4dc:
        if (local_4c == uVar7) {
          uVar7 = *(byte *)(local_38 + uVar9) & 0x3f;
          uVar9 = local_60 >> uVar7 | local_5c << (0x20 - uVar7 & 0xff);
          if (-1 < (int)(uVar7 - 0x20)) {
            uVar9 = local_5c >> (uVar7 - 0x20 & 0xff);
          }
          uVar7 = uVar5;
          if ((uVar9 & 1) != 0) {
            iVar10 = -1;
            uVar9 = uVar4;
            iVar12 = local_30;
            iVar14 = iVar18;
            uVar7 = local_4c;
            do {
              if (local_58 == uVar9) {
                uVar9 = local_58 - 1;
                goto LAB_0111e56c;
              }
              if (local_34 <= local_58 + uVar7) {
                uVar9 = local_58;
LAB_0111e73c:
                uVar7 = uVar9 + local_4c;
                if (uVar9 + local_4c < local_34) {
                  uVar7 = local_34;
                }
                local_a8 = &DAT_018aeb30;
                goto LAB_0111e770;
              }
              pcVar1 = (char *)(iVar14 + local_58);
              iVar10 = iVar10 + 1;
              pcVar2 = (char *)(iVar12 + local_58);
              uVar9 = uVar9 - 1;
              uVar7 = uVar7 + 1;
              iVar14 = iVar14 + 1;
              iVar12 = iVar12 + 1;
            } while (*pcVar2 == *pcVar1);
            uVar7 = iVar6 + local_58 + iVar10;
          }
          goto LAB_0111e4cc;
        }
      }
    }
    goto joined_r0x0111e714;
  }
  if (local_5c._2_1_ != '\0') goto joined_r0x0111e714;
  if (local_64 == local_34) {
    if ((local_64 != 0) && (local_64 < local_34)) {
      cVar15 = *(char *)(local_38 + local_64);
      goto joined_r0x0111e27c;
    }
  }
  else if (local_64 == 0) {
    uVar16 = 0;
    if ((local_5c & 1) != 0) {
      uVar16 = local_64;
    }
  }
  else {
    if (local_34 <= local_64) goto LAB_0111e79c;
    cVar15 = *(char *)(local_38 + local_64);
    uVar16 = local_64;
joined_r0x0111e27c:
    if (cVar15 < -0x40) {
LAB_0111e79c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac();
    }
  }
joined_r0x0111e714:
  uVar4 = uVar11 - uVar16;
  uVar11 = uVar16;
  if ((uVar4 & 1) == 0) goto LAB_0111e2a4;
  local_64 = 0;
  local_60 = 1;
  uVar9 = uVar4;
LAB_0111e614:
  uVar16 = 0;
  local_68 = &DAT_80000008;
  local_5c = uVar9;
  FUN_0111dea8(&local_68);
  iVar8 = *param_1;
joined_r0x0111e660:
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(iVar17);
  }
  return uVar16;
  while( true ) {
    uVar9 = uVar9 - 1;
    if (local_2c <= uVar9) goto LAB_0111e760;
    uVar7 = uVar9 + local_4c;
    if (local_34 <= uVar7) goto LAB_0111e770;
    if (*(char *)(local_30 + uVar9) != *(char *)(local_38 + uVar7)) break;
LAB_0111e484:
    if (uVar9 <= local_44) {
      local_44 = 0;
      iVar18 = iVar18 + local_2c;
      local_4c = uVar5;
      if (uVar5 == local_34) goto LAB_0111e5b8;
      goto LAB_0111e39c;
    }
  }
  uVar7 = local_4c + local_50;
  local_44 = local_2c - local_50;
LAB_0111e3e4:
  uVar9 = uVar7 + iVar8;
  if (local_34 <= uVar9) goto joined_r0x0111e714;
  goto LAB_0111e3f4;
LAB_0111e56c:
  if (uVar9 != 0xffffffff) {
    if (local_2c <= local_58 - 1) {
LAB_0111e760:
      local_a8 = &DAT_018aeb10;
      local_34 = local_2c;
      uVar7 = uVar9;
LAB_0111e770:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,local_34,local_a8);
    }
    uVar7 = local_4c + uVar9;
    if (local_34 <= uVar7) goto LAB_0111e770;
    pcVar1 = (char *)(iVar18 + uVar9);
    pcVar2 = (char *)(local_30 + uVar9);
    uVar9 = uVar9 - 1;
    if (*pcVar2 != *pcVar1) goto code_r0x0111e59c;
    goto LAB_0111e56c;
  }
  local_44 = 0xffffffff;
  iVar18 = iVar18 + local_2c;
  local_4c = uVar5;
  if (uVar5 != local_34) goto LAB_0111e39c;
LAB_0111e5b8:
  uVar4 = 0;
LAB_0111e2a4:
  if (uVar4 == 8) {
    iVar8 = 0;
    local_68 = (undefined1 *)0x0;
    uVar16 = 0;
    do {
      if (iVar8 + 1 == 8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00383924,0x2d,&DAT_01883238);
      }
      uVar4 = (uint)*(byte *)(iVar17 + uVar11 + iVar8);
      uVar9 = uVar4 - 0x30;
      if (0x39 < uVar4) {
        uVar9 = (uVar4 - 0x41 & 0xffffffdf) + 10;
      }
      cVar15 = '\0';
      if (uVar9 < 0x10) {
        uVar4 = (uint)*(byte *)(iVar17 + uVar11 + iVar8 + 1);
        uVar7 = uVar4 - 0x30;
        if (0x39 < uVar4) {
          uVar7 = (uVar4 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar7 < 0x10) {
          uVar4 = uVar7 | uVar9 << 4;
          cVar15 = '\x02';
        }
      }
      uVar9 = uVar4 >> 0x18;
      iVar8 = iVar8 + 2;
      if (cVar15 == '\x03') break;
      if (cVar15 != '\x02') {
        local_64 = 0;
        local_60 = CONCAT22((short)(uVar4 >> 8),CONCAT11((char)uVar4,cVar15));
        goto LAB_0111e614;
      }
      if (3 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,4,&DAT_018873d4);
      }
      *(char *)((int)&local_68 + uVar16) = (char)uVar4;
      uVar16 = uVar16 + 1;
    } while (iVar8 != 8);
    uVar16 = (int)local_68 << 0x18 | ((uint)local_68 >> 8 & 0xff) << 0x10 |
             ((uint)local_68 >> 0x10 & 0xff) << 8 | (uint)local_68 >> 0x18;
    iVar8 = *param_1;
    goto joined_r0x0111e660;
  }
  local_64 = 1;
  uVar9 = 8;
  local_60 = uVar4;
  goto LAB_0111e614;
code_r0x0111e59c:
  uVar7 = local_4c + local_50;
LAB_0111e4cc:
  uVar9 = uVar7 + iVar8;
  if (local_34 <= uVar9) goto joined_r0x0111e714;
  goto LAB_0111e4dc;
}

