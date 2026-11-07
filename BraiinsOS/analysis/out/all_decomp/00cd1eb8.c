// FUN_00cd1eb8 @ 00cd1eb8 size=2872 calls_out=18 calls_in=1
// strings: idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cd1eb8(int *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  code *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int *unaff_r10;
  undefined4 *puVar17;
  undefined8 unaff_d8;
  ulonglong uVar18;
  int local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int local_78;
  int iStack_74;
  char *local_6c;
  undefined1 local_68;
  int local_64;
  int *local_60;
  int local_5c;
  char *local_58;
  undefined1 local_54;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  int iStack_44;
  char *local_3c;
  undefined4 local_38;
  undefined1 uStack_31;
  
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar11 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar15 = *(byte *)(*(int *)(param_2 + 0xc) + uVar11) - 9;
      if ((0x17 < uVar15) || ((1 << (uVar15 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)(*(int *)(param_2 + 0xc) + uVar11) != 0x5b) {
          local_7c = (int *)FUN_00c7f220(param_2,&uStack_31,&DAT_01873db8);
          goto LAB_00cd2950;
        }
        cVar1 = param_2[0x24];
        param_2[0x24] = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          *(uint *)(param_2 + 0x14) = uVar11 + 1;
          local_68 = 1;
          local_7c = (int *)&DAT_00000008;
          local_5c = 0;
          local_60 = (int *)&DAT_00000008;
          local_64 = 0;
          local_6c = param_2;
          goto LAB_00cd1fd4;
        }
        local_50 = (char **)0x18;
        goto LAB_00cd1f18;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
    } while (*(uint *)(param_2 + 0x10) != uVar11);
  }
  local_50 = (char **)0x5;
LAB_00cd1f18:
  iVar8 = FUN_00c629ac(param_2,&local_50);
  goto LAB_00cd295c;
LAB_00cd1fd4:
  iVar8 = local_5c;
  FUN_00c63a28(&local_50,&local_6c);
  pcVar6 = local_6c;
  if ((char)local_50 != '\x01') {
    if (local_50._1_1_ == '\x01') {
      uVar11 = *(uint *)(local_6c + 0x14);
      if (uVar11 < *(uint *)(local_6c + 0x10)) {
        while( true ) {
          uVar15 = (uint)*(byte *)(*(int *)(local_6c + 0xc) + uVar11);
          if ((0x17 < uVar15 - 9) || ((1 << (uVar15 - 9 & 0xff) & 0x800013U) == 0)) break;
          uVar11 = uVar11 + 1;
          *(uint *)(local_6c + 0x14) = uVar11;
          if (*(uint *)(local_6c + 0x10) == uVar11) goto LAB_00cd2714;
        }
        if (uVar15 != 0x5b) {
          if (uVar15 != 0x7b) {
            piVar10 = (int *)FUN_00c7f220(local_6c,&uStack_31,&DAT_01873e18);
            goto LAB_00cd286c;
          }
          cVar1 = local_6c[0x24];
          local_6c[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(local_6c + 0x14) = uVar11 + 1;
            local_54 = 1;
            bVar3 = false;
            bVar2 = false;
            local_58 = local_6c;
            bVar5 = false;
            bVar4 = false;
            iVar13 = 0;
LAB_00cd209c:
            FUN_011bd334(&local_50,&local_58);
            pcVar7 = local_58;
            if ((char)local_50 == '\x01') {
LAB_00cd236c:
              unaff_r10 = local_4c;
              goto LAB_00cd24cc;
            }
            if (local_50._1_1_ == '\x01') {
              iVar9 = *(int *)(local_58 + 0x14);
              local_58[8] = '\0';
              local_58[9] = '\0';
              local_58[10] = '\0';
              local_58[0xb] = '\0';
              *(int *)(local_58 + 0x14) = iVar9 + 1;
              FUN_0157e384(&local_50,local_58 + 0xc,local_58);
              unaff_r10 = local_4c;
              if (local_50 == (char **)&SUB_00000002) goto LAB_00cd24cc;
              if (local_48 == 0xb) {
                iVar9 = thunk_FUN_016dd50a(local_4c,&DAT_0035783e,0xb);
                if (iVar9 == 0) {
                  if (bVar5) {
                    local_38 = 0xb;
                    local_3c = &DAT_0035783e;
                    local_4c = &DAT_0157d360;
                    local_50 = &local_3c;
                    unaff_r10 = (int *)FUN_00f56780(&DAT_00582dbd,&local_50);
                    goto LAB_00cd24c4;
                  }
                  unaff_r10 = (int *)FUN_011be240(pcVar7);
                  if (unaff_r10 != (int *)0x0) goto LAB_00cd24cc;
                  FUN_00c7fde4(&local_50,pcVar7);
                  if (local_50 == (char **)&DAT_00000001) goto LAB_00cd236c;
                  local_88 = local_48;
                  bVar5 = true;
                  iVar13 = iStack_44;
                  goto LAB_00cd209c;
                }
LAB_00cd21e4:
                unaff_r10 = (int *)FUN_011be240(pcVar7);
                if (unaff_r10 != (int *)0x0) goto LAB_00cd24cc;
                unaff_r10 = (int *)FUN_00c64134(pcVar7);
                if (unaff_r10 != (int *)0x0) goto LAB_00cd24cc;
                goto LAB_00cd209c;
              }
              if (local_48 == 3) {
                iVar9 = thunk_FUN_016dd50a(local_4c,
                                           "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                                           ,3);
                if (iVar9 != 0) {
                  iVar9 = thunk_FUN_016dd50a(unaff_r10,"mcr",3);
                  if (iVar9 != 0) goto LAB_00cd21e4;
                  if (bVar3) {
                    local_38 = 3;
                    local_3c = "mcr";
                    local_4c = &DAT_0157d360;
                    local_50 = &local_3c;
                    unaff_r10 = (int *)FUN_00f56780(&DAT_00582dbd,&local_50);
                    goto LAB_00cd24c4;
                  }
                  unaff_r10 = (int *)FUN_011be240(pcVar7);
                  if (unaff_r10 != (int *)0x0) goto LAB_00cd24cc;
                  FUN_00c7fde4(&local_50,pcVar7);
                  if (local_50 == (char **)&DAT_00000001) goto LAB_00cd236c;
                  unaff_d8 = CONCAT44(iStack_44,local_48);
                  bVar3 = true;
                  goto LAB_00cd209c;
                }
                if (!bVar4) {
                  iVar9 = FUN_011be240(pcVar7);
                  if (iVar9 == 0) {
                    uVar18 = FUN_00c8031c(pcVar7);
                  }
                  else {
                    uVar18 = CONCAT44(iVar9,1);
                  }
                  local_84 = (int *)(uVar18 >> 0x20);
                  if ((uVar18 & 1) != 0) {
                    bVar2 = true;
                    iVar13 = 0;
                    unaff_r10 = local_84;
                    goto LAB_00cd24d0;
                  }
                  bVar4 = true;
                  goto LAB_00cd209c;
                }
                local_38 = 3;
                local_3c = 
                "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections";
                local_4c = &DAT_0157d360;
                local_50 = &local_3c;
                unaff_r10 = (int *)FUN_00f56780(&DAT_00582dbd,&local_50);
              }
              else {
                if ((local_48 != 2) || ((short)*local_4c != 0x6268)) goto LAB_00cd21e4;
                if (!bVar2) {
                  iVar9 = FUN_011be240(pcVar7);
                  if (iVar9 == 0) {
                    uVar18 = FUN_00c8031c(pcVar7);
                  }
                  else {
                    uVar18 = CONCAT44(iVar9,1);
                  }
                  local_80 = (int *)(uVar18 >> 0x20);
                  if ((uVar18 & 1) != 0) {
                    bVar2 = true;
                    iVar13 = 0;
                    unaff_r10 = local_80;
                    goto LAB_00cd24d0;
                  }
                  bVar2 = true;
                  goto LAB_00cd209c;
                }
                local_38 = 2;
                local_3c = &DAT_0035783c;
                local_4c = &DAT_0157d360;
                local_50 = &local_3c;
                unaff_r10 = (int *)FUN_00f56780(&DAT_00582dbd,&local_50);
              }
            }
            else if (bVar2) {
              if (bVar4) {
                if (bVar5) {
                  bVar2 = false;
                  if (bVar3) goto LAB_00cd24d0;
                  local_38 = 3;
                  local_3c = "mcr";
                  local_4c = &DAT_0157d360;
                  local_50 = &local_3c;
                  unaff_r10 = (int *)FUN_00f56780(&DAT_0057a25d,&local_50);
                }
                else {
                  local_38 = 0xb;
                  local_3c = &DAT_0035783e;
                  local_4c = &DAT_0157d360;
                  local_50 = &local_3c;
                  unaff_r10 = (int *)FUN_00f56780(&DAT_0057a25d,&local_50);
                }
              }
              else {
                local_38 = 3;
                local_3c = 
                "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections";
                local_4c = &DAT_0157d360;
                local_50 = &local_3c;
                unaff_r10 = (int *)FUN_00f56780(&DAT_0057a25d,&local_50);
              }
            }
            else {
              local_38 = 2;
              local_3c = &DAT_0035783c;
              local_4c = &DAT_0157d360;
              local_50 = &local_3c;
              unaff_r10 = (int *)FUN_00f56780(&DAT_0057a25d,&local_50);
            }
LAB_00cd24c4:
            goto LAB_00cd24cc;
          }
          local_50 = (char **)&DAT_00000018;
          local_7c = (int *)FUN_00c629ac(local_6c,&local_50);
          goto LAB_00cd2878;
        }
        cVar1 = local_6c[0x24];
        local_6c[0x24] = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_50 = (char **)&DAT_00000018;
          local_7c = (int *)FUN_00c629ac(local_6c,&local_50);
          goto LAB_00cd2878;
        }
        *(uint *)(local_6c + 0x14) = uVar11 + 1;
        local_3c = local_6c;
        local_38 = CONCAT31(local_38._1_3_,1);
        FUN_00c63a28(&local_50,&local_3c);
        if ((char)local_50 == '\x01') {
          bVar2 = true;
          local_80 = local_4c;
          iVar13 = 0;
        }
        else {
          iVar13 = 0;
          uVar16 = 0;
          if (local_50._1_1_ == '\x01') {
            uVar18 = FUN_00c8031c(local_3c);
            local_80 = (int *)(uVar18 >> 0x20);
            bVar2 = true;
            if ((uVar18 & 1) == 0) {
              FUN_00c63a28(&local_50,&local_3c);
              if ((char)local_50 != '\x01') {
                uVar16 = 1;
                if (local_50._1_1_ != '\x01') goto LAB_00cd25a0;
                uVar18 = FUN_00c8031c(local_3c);
                piVar10 = (int *)(uVar18 >> 0x20);
                bVar2 = true;
                if ((uVar18 & 1) != 0) {
                  local_84 = piVar10;
                  local_80 = piVar10;
                  goto LAB_00cd25bc;
                }
                FUN_00c63a28(&local_50,&local_3c);
                if ((char)local_50 != '\x01') {
                  uVar16 = 2;
                  if (local_50._1_1_ != '\x01') goto LAB_00cd25a0;
                  FUN_00c7fde4(&local_50,local_3c);
                  iVar9 = iStack_44;
                  if (local_50 != (char **)&DAT_00000001) {
                    local_88 = local_48;
                    FUN_00c63a28(&local_50,&local_3c);
                    if ((char)local_50 != '\x01') {
                      uVar16 = 3;
                      if (local_50._1_1_ != '\x01') goto LAB_00cd25a0;
                      FUN_00c7fde4(&local_50,local_3c);
                      if (local_50 != (char **)&DAT_00000001) {
                        bVar2 = false;
                        unaff_d8 = CONCAT44(iStack_44,local_48);
                        iVar13 = iVar9;
                        local_84 = piVar10;
                        goto LAB_00cd25bc;
                      }
                    }
                  }
                }
              }
              bVar2 = true;
              local_80 = local_4c;
            }
          }
          else {
LAB_00cd25a0:
            local_80 = (int *)FUN_00f2c2f0(uVar16,&DAT_01878064,&DAT_018ab990);
            bVar2 = true;
          }
        }
LAB_00cd25bc:
        pcVar6[0x24] = pcVar6[0x24] + '\x01';
        piVar10 = (int *)FUN_00c63be8(pcVar6);
        if (bVar2) {
          if (piVar10 == (int *)0x0) {
            piVar10 = local_80;
            goto LAB_00cd286c;
          }
          if (*piVar10 != 1) {
            if ((*piVar10 != 0) || (piVar10[2] == 0)) goto LAB_00cd2868;
            puVar14 = (undefined4 *)piVar10[1];
            goto LAB_00cd2850;
          }
          if ((char)piVar10[1] == '\x03') {
            puVar14 = (undefined4 *)piVar10[2];
            uVar16 = *puVar14;
            puVar17 = (undefined4 *)puVar14[1];
            pcVar12 = (code *)*puVar17;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar16);
            }
            if (puVar17[1] != 0) {
              thunk_FUN_016d3fb4(uVar16);
            }
            goto LAB_00cd2850;
          }
          goto LAB_00cd2868;
        }
        if (piVar10 != (int *)0x0) goto LAB_00cd286c;
        goto LAB_00cd25e8;
      }
LAB_00cd2714:
      local_50 = (char **)&DAT_00000005;
      local_7c = (int *)FUN_00c629ac(local_6c,&local_50);
      goto LAB_00cd2878;
    }
    iVar13 = local_64;
    goto LAB_00cd2894;
  }
  goto LAB_00cd272c;
LAB_00cd24cc:
  bVar2 = true;
  iVar13 = 0;
LAB_00cd24d0:
  pcVar6[0x24] = pcVar6[0x24] + '\x01';
  piVar10 = (int *)FUN_00c63e14(pcVar6);
  if (!bVar2) {
    if (piVar10 == (int *)0x0) {
LAB_00cd25e8:
      if (iVar8 == local_64) {
        FUN_00d64d60(&local_64);
        local_7c = local_60;
      }
      local_5c = iVar8 + 1;
      local_78 = (int)unaff_d8;
      iStack_74 = (int)((ulonglong)unaff_d8 >> 0x20);
      piVar10 = local_7c + iVar8 * 6;
      *piVar10 = local_88;
      piVar10[1] = iVar13;
      piVar10[2] = local_78;
      piVar10[3] = iStack_74;
      piVar10[4] = (int)local_80;
      piVar10[5] = (int)local_84;
      goto LAB_00cd1fd4;
    }
    goto LAB_00cd286c;
  }
  if (piVar10 == (int *)0x0) {
    piVar10 = unaff_r10;
    goto LAB_00cd286c;
  }
  local_80 = unaff_r10;
  if (*piVar10 == 1) {
    if ((char)piVar10[1] == '\x03') {
      puVar14 = (undefined4 *)piVar10[2];
      uVar16 = *puVar14;
      puVar17 = (undefined4 *)puVar14[1];
      pcVar12 = (code *)*puVar17;
      if (pcVar12 != (code *)0x0) {
        (*pcVar12)(uVar16);
      }
      if (puVar17[1] != 0) {
        thunk_FUN_016d3fb4(uVar16);
      }
      goto LAB_00cd2850;
    }
  }
  else if ((*piVar10 == 0) && (piVar10[2] != 0)) {
    puVar14 = (undefined4 *)piVar10[1];
LAB_00cd2850:
    thunk_FUN_016d3fb4(puVar14);
  }
LAB_00cd2868:
  thunk_FUN_016d3fb4(piVar10);
  piVar10 = local_80;
LAB_00cd286c:
  local_7c = (int *)FUN_011da0d4(piVar10,pcVar6);
LAB_00cd2878:
  iVar13 = -0x80000000;
  if (local_64 != 0) goto LAB_00cd288c;
  goto LAB_00cd2894;
LAB_00cd272c:
  iVar13 = -0x80000000;
  local_7c = local_4c;
  if (local_64 != 0) {
LAB_00cd288c:
    thunk_FUN_016d3fb4(local_60);
    iVar13 = -0x80000000;
  }
LAB_00cd2894:
  param_2[0x24] = param_2[0x24] + '\x01';
  piVar10 = (int *)FUN_00c63be8();
  if (iVar13 == -0x80000000) {
    if (piVar10 != (int *)0x0) {
      if (*piVar10 == 1) {
        FUN_009b8520(piVar10 + 1);
      }
      else if ((*piVar10 == 0) && (piVar10[2] != 0)) {
        thunk_FUN_016d3fb4(piVar10[1]);
      }
      thunk_FUN_016d3fb4(piVar10);
    }
  }
  else {
    if (piVar10 == (int *)0x0) {
      *param_1 = iVar13;
      param_1[1] = (int)local_7c;
      param_1[2] = iVar8;
      return;
    }
    if (iVar13 == 0) {
      local_7c = piVar10;
    }
    else {
      thunk_FUN_016d3fb4(local_7c);
      local_7c = piVar10;
    }
  }
LAB_00cd2950:
  iVar8 = FUN_011da0d4(local_7c,param_2);
LAB_00cd295c:
  *param_1 = -0x80000000;
  param_1[1] = iVar8;
  return;
}

