// FUN_009f87e4 @ 009f87e4 size=2516 calls_out=21 calls_in=2
// strings: Cannot get basepath parent | stream did not contain valid UTF-8failed to fill whole buffer | stream did not contain valid UTF-8failed to fill whole buffer

void FUN_009f87e4(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint unaff_r11;
  uint uVar18;
  undefined8 uVar19;
  char *local_e4;
  undefined4 *local_dc;
  int local_d8;
  char *local_d0;
  uint local_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  uint local_b8;
  char *local_b4;
  char *local_b0;
  char *local_98;
  uint local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_68;
  uint local_48;
  undefined1 *local_44;
  
  uVar14 = *(uint *)(param_2 + 8);
  iVar10 = 0;
  pcVar16 = *(char **)(param_2 + 4);
  local_7a = false;
  if (uVar14 != 0) {
    local_7a = *pcVar16 == '/';
  }
  local_90 = (undefined4 *)CONCAT31(local_90._1_3_,6);
  local_7c = 0x201;
  local_98 = pcVar16;
  local_94 = uVar14;
  FUN_015c7164(&local_b8,&local_98);
  if ((local_b8 & 0xff) - 7 < 3) {
    uVar19 = FUN_015c7664(&local_98);
    unaff_r11 = (uint)((ulonglong)uVar19 >> 0x20);
    iVar10 = (int)uVar19;
  }
  iVar1 = thunk_FUN_016d4a50(0x1a);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x1a);
  }
  FUN_016dd1aa(iVar1,"Cannot get basepath parent",0x1a);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar2 = 0x1a;
  puVar2[1] = iVar1;
  puVar2[2] = 0x1a;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar3 = puVar2;
  *(undefined1 *)(puVar3 + 2) = 0x28;
  puVar3[1] = &DAT_0186b6e0;
  if (iVar10 == 0) {
    *param_1 = 3;
    param_1[1] = (uint)puVar3;
    return;
  }
  FUN_009f5b6c(puVar2);
  thunk_FUN_016d3fb4(puVar2);
  thunk_FUN_016d3fb4(puVar3);
  FUN_015f5984(&local_98,iVar10,unaff_r11);
  puVar2 = local_90;
  if (local_98 == &DAT_00000001) {
    if ((char)local_94 == '\x03') {
      puVar3 = (undefined4 *)local_90[1];
      uVar17 = *local_90;
      pcVar8 = (code *)*puVar3;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar17);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar17);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
    local_94 = CONCAT31(local_94._1_3_,1);
    local_98 = (char *)0x1ff;
    FUN_015eb2b4(&local_b8,&local_98,iVar10,unaff_r11);
    if ((char)local_b8 != '\x04') {
      *param_1 = local_b8;
      param_1[1] = (uint)local_b4;
      return;
    }
    FUN_009f5080(&local_98,pcVar16,uVar14);
    uVar17 = local_8c;
    puVar2 = local_90;
    uVar11 = local_94;
    if (local_98 == (char *)0x0) {
      FUN_009f3df0((uint *)(param_2 + 0x48));
      *(undefined4 *)(param_2 + 0x50) = uVar17;
      *(uint *)(param_2 + 0x48) = uVar11;
      *(undefined4 **)(param_2 + 0x4c) = puVar2;
    }
    else if ((local_94 & 0xff) != 4) {
      *param_1 = local_94;
      param_1[1] = (uint)local_90;
      return;
    }
  }
  FUN_015f5984(&local_98,pcVar16,uVar14);
  puVar2 = local_90;
  if (local_98 == &DAT_00000001) {
    if ((char)local_94 == '\x03') {
      uVar17 = *local_90;
      puVar3 = (undefined4 *)local_90[1];
      pcVar8 = (code *)*puVar3;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar17);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar17);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
  }
  else if (*(int *)(param_2 + 0x2c) != -1) goto switchD_009f8a7c_caseD_4;
  local_dc = (undefined4 *)(param_2 + 0x2c);
  FUN_009fa10c(param_2);
  iVar10 = *(int *)(param_2 + 0x2c);
  if (iVar10 == -1) {
    *(undefined4 *)(param_2 + 0x40) = 0;
    goto switchD_009f8a7c_caseD_4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x24)) {
  default:
    FUN_016dd606(&local_98,0,0x68);
    iVar10 = FUN_016e03d2(iVar10,&local_98);
    if (iVar10 == -1) {
      FUN_016d2bc8();
      *(undefined4 *)(param_2 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x40) = local_68;
    }
    break;
  case 1:
    iVar10 = thunk_FUN_016d4a50(0x2000);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2000);
    }
    uVar11 = 0;
    uVar14 = 0;
    local_d8 = 0;
    do {
      local_b0 = (char *)0x0;
      local_b8 = 0;
      pcVar12 = (char *)0x0;
      local_b4 = &DAT_00000001;
      local_d0 = &DAT_00000001;
      pcVar4 = (char *)0x0;
LAB_009f8c4c:
      do {
        if (uVar14 < uVar11) {
LAB_009f8c94:
          pcVar5 = (char *)(iVar10 + uVar14);
          uVar18 = uVar11 - uVar14;
          if (uVar18 < 8) {
            if (uVar18 == 0) goto LAB_009f8e10;
            if (*pcVar5 == '\n') {
              uVar13 = 0;
            }
            else {
              if (uVar18 == 1) goto LAB_009f8e10;
              if (pcVar5[1] == '\n') {
                uVar13 = 1;
              }
              else {
                if (uVar18 == 2) goto LAB_009f8e10;
                if (pcVar5[2] == '\n') {
                  uVar13 = 2;
                }
                else {
                  if (uVar18 == 3) goto LAB_009f8e10;
                  if (pcVar5[3] == '\n') {
                    uVar13 = 3;
                  }
                  else {
                    if (uVar18 == 4) goto LAB_009f8e10;
                    if (pcVar5[4] == '\n') {
                      uVar13 = 4;
                    }
                    else {
                      if (uVar18 == 5) goto LAB_009f8e10;
                      if (pcVar5[5] == '\n') {
                        uVar13 = 5;
                      }
                      else {
                        if ((uVar18 == 6) || (pcVar5[6] != '\n')) goto LAB_009f8e10;
                        uVar13 = 6;
                      }
                    }
                  }
                }
              }
            }
LAB_009f8ea8:
            if (uVar18 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar13,uVar18,&DAT_0188bbe0);
            }
            iVar1 = uVar13 + 1;
            if (local_b8 - (int)pcVar12 <= uVar13) {
              FUN_009f4d18(&local_b8,pcVar12,iVar1,1,1);
              local_d0 = local_b4;
              pcVar12 = local_b0;
            }
            FUN_016dd1aa(local_d0 + (int)pcVar12,pcVar5,iVar1);
            uVar14 = uVar14 + iVar1;
            pcVar5 = pcVar4 + iVar1;
            pcVar12 = pcVar12 + iVar1;
            if (uVar11 < uVar14) {
              uVar14 = uVar11;
            }
          }
          else {
            uVar6 = ((uint)(pcVar5 + 3) & 0xfffffffc) - (int)pcVar5;
            if (uVar6 == 0) {
              uVar6 = 0;
              goto LAB_009f8d88;
            }
            uVar13 = 0;
            do {
              if (pcVar5[uVar13] == '\n') goto LAB_009f8ea8;
              uVar13 = uVar13 + 1;
            } while (uVar6 != uVar13);
            for (; uVar6 <= uVar18 - 8; uVar6 = uVar6 + 8) {
LAB_009f8d88:
              uVar9 = *(uint *)(pcVar5 + uVar6);
              uVar13 = *(uint *)((int)(pcVar5 + uVar6) + 4) ^ 0xa0a0a0a;
              if (((0x1010100 - (uVar9 ^ 0xa0a0a0a) | uVar9) & 0x80808080 &
                  (0x1010100 - uVar13 | uVar13)) != 0x80808080) break;
            }
            if (uVar18 != uVar6) {
              iVar1 = 0;
              do {
                if (pcVar5[iVar1 + uVar6] == '\n') {
                  uVar13 = iVar1 + uVar6;
                  goto LAB_009f8ea8;
                }
                iVar1 = iVar1 + 1;
              } while ((uVar11 - uVar6) - uVar14 != iVar1);
            }
LAB_009f8e10:
            if (local_b8 - (int)pcVar12 < uVar18) {
              FUN_009f4d18(&local_b8,pcVar12,uVar18,1,1);
              local_d0 = local_b4;
              pcVar12 = local_b0;
            }
            else {
            }
            FUN_016dd1aa(local_d0 + (int)pcVar12,pcVar5,uVar18);
            uVar14 = uVar14 + uVar18;
            pcVar12 = pcVar12 + uVar18;
            pcVar5 = pcVar4 + uVar18;
            if (uVar11 < uVar14) {
              uVar14 = uVar11;
            }
            pcVar4 = pcVar5;
            local_b0 = pcVar12;
            if (uVar18 != 0) goto LAB_009f8c4c;
          }
          uVar18 = 4;
          break;
        }
        uVar11 = FUN_016e0250(*local_dc,iVar10,0x2000);
        if (uVar11 != 0xffffffff) {
          uVar14 = 0;
          goto LAB_009f8c94;
        }
        puVar2 = (undefined4 *)FUN_016d2bc8();
        pcVar5 = (char *)*puVar2;
        uVar18 = unaff_r11 & 0xffffff00;
        uVar11 = 0;
        uVar14 = 0;
        unaff_r11 = uVar18;
      } while (pcVar5 == &DAT_00000004);
      pcVar4 = local_b4;
      FUN_00fab1e0(&local_98,local_b4,pcVar12);
      uVar6 = uVar18 & 0xff;
      if (local_98 != (char *)0x0) {
        pcVar12 = (char *)0x0;
        if (uVar6 == 4) {
          uVar18 = 0;
          uVar6 = 2;
          pcVar5 = (char *)&DAT_018aaa9c;
        }
      }
      if (uVar6 == 4) {
        if (pcVar5 == (char *)0x0) {
          uVar13 = 0x80000001;
          goto joined_r0x009f8fb4;
        }
        local_e4 = (char *)0x0;
        uVar13 = local_b8;
        pcVar5 = local_e4;
        pcVar16 = pcVar4;
        if ((pcVar12 != (char *)0x0) && (pcVar5 = pcVar12, (pcVar4 + (int)pcVar12)[-1] == '\n')) {
          pcVar7 = pcVar12 + -1;
          pcVar5 = local_e4;
          if ((pcVar7 != (char *)0x0) && (pcVar5 = pcVar7, (pcVar4 + (int)pcVar7)[-1] == '\r')) {
            pcVar5 = pcVar12 + -2;
          }
        }
      }
      else {
        uVar13 = 0x80000000;
        pcVar16 = (char *)(uVar18 & 0xffffff00 | uVar6);
        local_e4 = pcVar5;
joined_r0x009f8fb4:
        pcVar5 = local_e4;
        if (local_b8 != 0) {
          thunk_FUN_016d3fb4(pcVar4);
        }
      }
      local_e4 = pcVar5;
      if (uVar13 == 0x80000001) goto LAB_009f90d0;
      if (uVar13 == 0x80000000) {
        if (((uint)pcVar16 & 0xff) == 3) {
          uVar17 = *(undefined4 *)local_e4;
          puVar2 = *(undefined4 **)(local_e4 + 4);
          pcVar8 = (code *)*puVar2;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar17);
          }
          if (puVar2[1] != 0) {
            thunk_FUN_016d3fb4(uVar17);
          }
          pcVar4 = local_e4;
          goto LAB_009f8c14;
        }
      }
      else if (uVar13 != 0) {
        pcVar4 = pcVar16;
LAB_009f8c14:
        thunk_FUN_016d3fb4(pcVar4);
      }
      local_d8 = local_d8 + 1;
    } while( true );
  case 2:
    pcVar16 = (char *)0x0;
    FUN_016dd606(&local_98,0,0x68);
    iVar10 = FUN_016e03d2(iVar10,&local_98);
    if (iVar10 == -1) {
      FUN_016d2bc8();
    }
    else {
      puVar2 = (undefined4 *)&DAT_018aad2c;
      if (local_44 < (undefined1 *)0x3b9aca00) {
        puVar2 = (undefined4 *)((int)local_48 >> 0x1f);
        puVar15 = local_44;
      }
      else {
        local_48 = 2;
        puVar15 = &DAT_3b9aca00;
      }
      local_b8 = local_48;
      local_b4 = (char *)puVar2;
      local_b0 = puVar15;
      if (local_44 < &DAT_3b9aca00) {
        FUN_00f6f018(&local_98,local_44,local_48,puVar2,puVar15);
        pcVar16 = local_98;
        local_c8 = local_94;
        puStack_c4 = local_90;
        uStack_c0 = local_8c;
        if (puVar15 == &DAT_3b9aca00 && (local_48 & 0xff) == 3) {
          uVar17 = *puVar2;
          puVar3 = (undefined4 *)puVar2[1];
          pcVar8 = (code *)*puVar3;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar17);
          }
          iVar10 = puVar3[1];
          goto LAB_009f9148;
        }
      }
      else {
        pcVar16 = (char *)0x0;
        if (puVar15 == &DAT_3b9aca00 && (local_48 & 0xff) == 3) {
          uVar17 = *puVar2;
          puVar3 = (undefined4 *)puVar2[1];
          pcVar8 = (code *)*puVar3;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar17);
          }
          iVar10 = puVar3[1];
          pcVar16 = (char *)0x0;
LAB_009f9148:
          if (iVar10 != 0) {
            thunk_FUN_016d3fb4(uVar17);
          }
          thunk_FUN_016d3fb4(puVar2);
        }
      }
    }
    *(char **)(param_2 + 0x30) = pcVar16;
    *(uint *)(param_2 + 0x34) = local_c8;
    *(undefined4 **)(param_2 + 0x38) = puStack_c4;
    *(undefined4 *)(param_2 + 0x3c) = uStack_c0;
    break;
  case 4:
    break;
  }
switchD_009f8a7c_caseD_4:
  *(undefined1 *)param_1 = 4;
  return;
LAB_009f90d0:
  thunk_FUN_016d3fb4(iVar10);
  *(int *)(param_2 + 0x40) = local_d8;
  goto switchD_009f8a7c_caseD_4;
}

