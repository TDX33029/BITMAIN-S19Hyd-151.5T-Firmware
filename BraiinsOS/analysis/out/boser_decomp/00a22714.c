// FUN_00a22714 @ 00a22714 size=9008 calls_out=27 calls_in=1
// strings: Settings validation failedstruct StorageDatastruct PublicStorage | type.googleapis.com/google.rpc.RetryInfo | type.googleapis.com/google.rpc.DebugInfo | type.googleapis.com/google.rpc.QuotaFailure | type.googleapis.com/google.rpc.ErrorInfo | type.googleapis.com/google.rpc.PreconditionFailure

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a22714(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  char cVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  undefined4 *local_d0;
  uint *local_c8;
  uint *local_c0;
  undefined4 *local_bc;
  uint *local_b8;
  uint *local_b0;
  undefined1 *local_ac;
  uint *local_a8;
  undefined4 *local_a4;
  uint *local_a0;
  uint uStack_9c;
  uint *local_98;
  uint local_94;
  uint local_90;
  uint *local_8c;
  undefined4 *local_88;
  uint *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined1 *local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  
  iVar2 = thunk_FUN_01be5118(0x1a);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x1a);
  }
  FUN_01bed4e2(iVar2,"Settings validation failedstruct StorageDatastruct PublicStorage",0x1a);
  local_d0 = (undefined4 *)thunk_FUN_01be5118(0xf0);
  if (local_d0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0xf0);
  }
  puVar11 = (undefined1 *)param_2[2];
  local_c0 = (uint *)0xa;
  local_c8 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  local_bc = local_d0;
  if (puVar11 != (undefined1 *)0x3b9aca01) {
    uVar22 = *param_2;
    uVar24 = param_2[1];
    puVar17 = puVar11;
    if ((int)uVar24 < 0) {
      uVar22 = 0x79cb9e00;
      puVar17 = &DAT_3b9ac9ff;
      uVar24 = 0x49;
    }
    uVar3 = thunk_FUN_01be5118(0x28);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x28);
    }
    FUN_01bed4e2(uVar3,"type.googleapis.com/google.rpc.RetryInfo",0x28);
    if (puVar11 == &DAT_3b9aca00) {
      local_a8 = (uint *)0x0;
      local_ac = (undefined1 *)0x1;
      local_b0 = (uint *)0x0;
    }
    else {
      if (uVar22 == 0 && uVar24 == 0) {
        iVar5 = 2;
      }
      else {
        uVar9 = LZCOUNT(uVar22 | 1) | 0x20;
        if (uVar24 != 0) {
          uVar9 = LZCOUNT(uVar24);
        }
        iVar5 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
      }
      if (puVar17 == (undefined1 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (((LZCOUNT((uint)puVar17 | 1) | 0x20U) ^ 0x3f) * 9 + 0x49 >> 6) + 1;
      }
      puVar15 = (uint *)(iVar7 + iVar5);
      local_ac = (undefined1 *)FUN_01298504(puVar15,1);
      if (local_ac == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,puVar15);
      }
      cVar13 = '\0';
      local_a8 = (uint *)0x0;
      uVar9 = (uint)local_98 >> 8;
      local_b0 = puVar15;
      FUN_01ac6cbc(&local_b0,&local_98,1);
      if (uVar22 != 0 || uVar24 != 0) {
        uVar4 = LZCOUNT(uVar22 | 1) | 0x20;
        if (uVar24 != 0) {
          uVar4 = LZCOUNT(uVar24);
        }
        cVar13 = (char)((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      if (puVar17 == (undefined1 *)0x0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = (char)(((LZCOUNT((uint)puVar17 | 1) | 0x20U) ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      local_98._0_1_ = cVar1 + cVar13;
      local_98._1_3_ = (int3)uVar9;
      FUN_01ac6cbc(&local_b0,&local_98,1);
      if (uVar22 != 0 || uVar24 != 0) {
        local_98._0_1_ = 8;
        FUN_01ac6cbc(&local_b0,&local_98,1);
        iVar5 = 10;
        do {
          local_98._0_1_ = (byte)uVar22;
          if (uVar24 == 0 && (0x7f < uVar22) <= uVar24) {
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98._0_1_ = (byte)local_98 | 0x80;
          FUN_01ac6cbc(&local_b0,&local_98,1);
          uVar22 = uVar22 >> 7 | uVar24 << 0x19;
          iVar5 = iVar5 + -1;
          uVar24 = uVar24 >> 7;
        } while (iVar5 != 0);
      }
      if (puVar17 != (undefined1 *)0x0) {
        local_98 = (uint *)CONCAT31(local_98._1_3_,0x10);
        FUN_01ac6cbc(&local_b0,&local_98,1);
        iVar5 = 10;
        do {
          if (puVar17 < (undefined1 *)0x80) {
            local_98 = (uint *)CONCAT31(local_98._1_3_,(char)puVar17);
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98 = (uint *)(CONCAT31(local_98._1_3_,(char)puVar17) | 0x80);
          FUN_01ac6cbc(&local_b0,&local_98,1);
          puVar17 = (undefined1 *)((uint)puVar17 >> 7);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    local_8c = local_b0;
    local_88 = (undefined4 *)local_ac;
    local_84 = local_a8;
    local_90 = 0x28;
    local_98 = (uint *)&DAT_00000028;
    *local_d0 = 0x28;
    local_d0[1] = uVar3;
    local_d0[2] = 0x28;
    local_d0[3] = local_b0;
    local_d0[4] = local_ac;
    local_d0[5] = local_a8;
    local_c8 = (uint *)0x1;
    local_b8 = (uint *)0x1;
    local_94 = uVar3;
  }
  if (param_2[4] != 0x80000000) {
    local_8c = (uint *)param_2[7];
    local_88 = (undefined4 *)param_2[8];
    local_84 = (uint *)param_2[9];
    local_98 = (uint *)param_2[4];
    local_94 = param_2[5];
    local_90 = param_2[6];
    uVar24 = thunk_FUN_01be5118(0x28);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x28);
    }
    FUN_01bed4e2(uVar24,"type.googleapis.com/google.rpc.DebugInfo",0x28);
    puVar15 = local_84;
    uVar3 = local_90;
    uVar22 = local_94;
    iVar5 = 0;
    iVar7 = 0;
    if (local_90 != 0) {
      puVar6 = (uint *)(local_94 + 8);
      uVar9 = local_90;
      do {
        uVar9 = uVar9 - 1;
        iVar7 = *puVar6 + iVar7 + ((LZCOUNT(*puVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
        puVar6 = puVar6 + 3;
      } while (uVar9 != 0);
    }
    if (local_84 != (uint *)0x0) {
      iVar5 = (int)local_84 + ((LZCOUNT((uint)local_84 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar18 = 0;
    puVar14 = (undefined4 *)(iVar7 + local_90 + iVar5);
    if ((int)puVar14 < 0) {
LAB_00a22b5c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar14);
    }
    if (puVar14 == (undefined4 *)0x0) {
      local_3c = (uint *)&DAT_00000001;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = 1;
      local_3c = (uint *)FUN_01298504(puVar14,1);
      if (local_3c == (uint *)0x0) goto LAB_00a22b5c;
    }
    local_38 = 0;
    local_40 = puVar14;
    if (uVar3 != 0) {
      puVar14 = (undefined4 *)(uVar22 + 4);
      iVar5 = uVar3 * 0xc;
      do {
        FUN_01aa4654(1,*puVar14,puVar14[1],&local_40);
        puVar14 = puVar14 + 3;
        iVar5 = iVar5 + -0xc;
      } while (iVar5 != 0);
    }
    if (puVar15 != (uint *)0x0) {
      FUN_01aa4654(2,local_88,puVar15,&local_40);
    }
    local_a4 = local_40;
    local_a0 = local_3c;
    uStack_9c = local_38;
    local_a8 = (uint *)0x28;
    local_b0 = (uint *)0x28;
    local_ac = (undefined1 *)uVar24;
    FUN_01aa47a4(&local_98);
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar15 = local_d0 + (int)local_c8 * 6;
    *puVar15 = (uint)local_b0;
    puVar15[1] = (uint)local_ac;
    puVar15[2] = (uint)local_a8;
    puVar15[3] = (uint)local_a4;
    puVar15[4] = (uint)local_a0;
    puVar15[5] = uStack_9c;
    local_c8 = local_b8;
  }
  puVar14 = (undefined4 *)param_2[0x30];
  if (puVar14 != (undefined4 *)0x80000000) {
    uVar24 = param_2[0x32];
    puVar16 = (uint *)param_2[0x31];
    puVar15 = puVar16;
    puVar6 = puVar16;
    if (uVar24 != 0) {
      iVar5 = uVar24 * 0x18;
      do {
        iVar5 = iVar5 + -0x18;
        local_88 = (undefined4 *)puVar15[4];
        local_84 = (uint *)puVar15[5];
        puVar6 = puVar15 + 6;
        *puVar15 = *puVar15;
        puVar15[1] = puVar15[1];
        puVar15[2] = puVar15[2];
        puVar15[3] = puVar15[3];
        puVar15[4] = (uint)local_88;
        puVar15[5] = (uint)local_84;
        puVar15 = puVar6;
      } while (iVar5 != 0);
      puVar15 = puVar16 + uVar24 * 6;
    }
    local_8c = (uint *)0x4;
    local_94 = 4;
    local_98 = (uint *)0x4;
    local_90 = 0;
    FUN_01aa372c(puVar15,((uint)((int)(puVar16 + uVar24 * 6) - (int)puVar15) >> 3) * -0x55555555);
    uVar24 = (uint)((int)puVar6 - (int)puVar16) / 0x18;
    local_40 = puVar14;
    local_3c = puVar16;
    local_38 = uVar24;
    FUN_01aa3760(&local_98);
    uVar22 = thunk_FUN_01be5118(0x2b);
    if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2b);
    }
    FUN_01bed4e2(uVar22,"type.googleapis.com/google.rpc.QuotaFailure",0x2b);
    uVar18 = 0;
    iVar5 = 0;
    if (puVar6 != puVar16) {
      puVar15 = puVar16 + 5;
      uVar3 = uVar24;
      do {
        uVar9 = puVar15[-3];
        iVar7 = 0;
        if (uVar9 != 0) {
          iVar7 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar9 = *puVar15;
        if (uVar9 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        puVar15 = puVar15 + 6;
        uVar3 = uVar3 - 1;
        iVar5 = iVar19 + iVar7 + iVar5 + ((LZCOUNT(iVar19 + iVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      } while (uVar3 != 0);
    }
    puVar15 = (uint *)(iVar5 + uVar24);
    if ((int)puVar15 < 0) {
LAB_00a22e3c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar15);
    }
    if (puVar15 == (uint *)0x0) {
      uVar24 = 1;
      puVar15 = (uint *)0x0;
    }
    else {
      uVar18 = 1;
      uVar24 = FUN_01298504(puVar15,1);
      if (uVar24 == 0) goto LAB_00a22e3c;
    }
    local_a8 = (uint *)0x0;
    local_b0 = puVar15;
    local_ac = (undefined1 *)uVar24;
    if (puVar6 != puVar16) {
      do {
        local_98 = (uint *)CONCAT31(local_98._1_3_,10);
        FUN_01ac6cbc(&local_b0,&local_98,1);
        uVar24 = puVar16[2];
        iVar5 = 0;
        iVar7 = 0;
        if (uVar24 != 0) {
          iVar7 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = puVar16[5];
        if (uVar24 != 0) {
          iVar5 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = iVar5 + iVar7;
        iVar5 = 10;
        do {
          if (uVar24 < 0x80) {
            local_98 = (uint *)CONCAT31(local_98._1_3_,(char)uVar24);
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98 = (uint *)(CONCAT31(local_98._1_3_,(char)uVar24) | 0x80);
          FUN_01ac6cbc(&local_b0,&local_98,1);
          uVar24 = uVar24 >> 7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (puVar16[2] != 0) {
          FUN_01aa4654(1,puVar16[1],puVar16[2],&local_b0);
        }
        if (puVar16[5] != 0) {
          FUN_01aa4654(2,puVar16[4],puVar16[5],&local_b0);
        }
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar6);
    }
    local_8c = local_b0;
    local_88 = (undefined4 *)local_ac;
    local_84 = local_a8;
    local_90 = 0x2b;
    local_98 = (uint *)&DAT_0000002b;
    local_94 = uVar22;
    FUN_01aa45e4(&local_40);
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar14 = local_d0 + (int)local_c8 * 6;
    *puVar14 = local_98;
    puVar14[1] = local_94;
    puVar14[2] = local_90;
    puVar14[3] = local_8c;
    puVar14[4] = local_88;
    puVar14[5] = local_84;
    local_c8 = local_b8;
  }
  if (param_2[0x2d] != 0x80000000) {
    local_78 = param_2[0x2a];
    local_74 = param_2[0x2b];
    local_70 = param_2[0x2c];
    local_6c = param_2[0x2d];
    local_68 = param_2[0x2e];
    local_64 = param_2[0x2f];
    local_98 = (uint *)param_2[0x22];
    local_94 = param_2[0x23];
    local_90 = param_2[0x24];
    local_8c = (uint *)param_2[0x25];
    local_88 = (undefined4 *)param_2[0x26];
    local_84 = (uint *)param_2[0x27];
    local_80 = param_2[0x28];
    local_7c = param_2[0x29];
    uVar24 = thunk_FUN_01be5118(0x28);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x28);
    }
    FUN_01bed4e2(uVar24,"type.googleapis.com/google.rpc.ErrorInfo",0x28);
    uVar3 = local_64;
    uVar22 = local_70;
    iVar5 = 0;
    iVar7 = 0;
    if (local_70 != 0) {
      iVar7 = local_70 + ((LZCOUNT(local_70 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (local_64 != 0) {
      iVar5 = local_64 + ((LZCOUNT(local_64 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar19 = FUN_01aa487c(3,&local_98);
    uVar18 = 0;
    puVar14 = (undefined4 *)(iVar5 + iVar7 + iVar19);
    if ((int)puVar14 < 0) {
LAB_00a230f0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar14);
    }
    if (puVar14 == (undefined4 *)0x0) {
      puVar15 = (uint *)&DAT_00000001;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = 1;
      puVar15 = (uint *)FUN_01298504(puVar14,1);
      if (puVar15 == (uint *)0x0) goto LAB_00a230f0;
    }
    local_38 = 0;
    local_40 = puVar14;
    local_3c = puVar15;
    if (uVar22 != 0) {
      FUN_01aa4654(1,local_74,uVar22,&local_40);
    }
    if (uVar3 != 0) {
      FUN_01aa4654(2,local_68,uVar3,&local_40);
    }
    local_a0 = local_8c;
    local_a8 = local_98 + 1;
    local_b0 = local_98;
    local_a4 = (undefined4 *)((int)local_98 + local_94 + 1);
    local_ac = (undefined1 *)(~*local_98 & 0x80808080);
    while( true ) {
      uVar26 = FUN_0165afa8(&local_b0);
      iVar7 = (int)((ulonglong)uVar26 >> 0x20);
      iVar5 = (int)uVar26;
      if (iVar5 == 0) break;
      uVar22 = *(uint *)(iVar5 + 8);
      iVar23 = 0;
      iVar19 = 0;
      if (uVar22 != 0) {
        iVar19 = uVar22 + ((LZCOUNT(uVar22 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar3 = *(uint *)(iVar7 + 8);
      if (uVar3 != 0) {
        iVar23 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      local_5c = (undefined1 *)CONCAT31(local_5c._1_3_,0x1a);
      FUN_01ac6cbc(&local_40,&local_5c,1);
      uVar9 = iVar23 + iVar19;
      iVar19 = 10;
      do {
        if (uVar9 < 0x80) {
          local_5c = (undefined1 *)CONCAT31(local_5c._1_3_,(char)uVar9);
          FUN_01ac6cbc(&local_40,&local_5c,1);
          break;
        }
        local_5c = (undefined1 *)(CONCAT31(local_5c._1_3_,(char)uVar9) | 0x80);
        FUN_01ac6cbc(&local_40,&local_5c,1);
        uVar9 = uVar9 >> 7;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      if (uVar22 != 0) {
        FUN_01aa4654(1,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),&local_40);
      }
      if (uVar3 != 0) {
        FUN_01aa4654(2,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),&local_40);
      }
    }
    local_a4 = local_40;
    local_a0 = local_3c;
    uStack_9c = local_38;
    local_a8 = (uint *)0x28;
    local_b0 = (uint *)0x28;
    local_ac = (undefined1 *)uVar24;
    FUN_01aa4630(&local_98);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
      local_d0 = local_bc;
    }
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar15 = local_d0 + (int)local_c8 * 6;
    *puVar15 = (uint)local_b0;
    puVar15[1] = (uint)local_ac;
    puVar15[2] = (uint)local_a8;
    puVar15[3] = (uint)local_a4;
    puVar15[4] = (uint)local_a0;
    puVar15[5] = uStack_9c;
    local_c8 = local_b8;
  }
  puVar14 = (undefined4 *)param_2[0x33];
  if (puVar14 != (undefined4 *)0x80000000) {
    puVar16 = (uint *)param_2[0x34];
    uVar24 = param_2[0x35];
    puVar15 = puVar16;
    puVar6 = puVar16;
    if (uVar24 != 0) {
      iVar5 = uVar24 * 0x24;
      do {
        iVar5 = iVar5 + -0x24;
        local_88 = (undefined4 *)puVar15[4];
        local_84 = (uint *)puVar15[5];
        local_80 = puVar15[6];
        local_7c = puVar15[7];
        local_78 = puVar15[8];
        puVar6 = puVar15 + 9;
        *puVar15 = *puVar15;
        puVar15[1] = puVar15[1];
        puVar15[2] = puVar15[2];
        puVar15[3] = puVar15[3];
        puVar15[4] = (uint)local_88;
        puVar15[5] = (uint)local_84;
        puVar15[6] = local_80;
        puVar15[7] = local_7c;
        puVar15[8] = local_78;
        puVar15 = puVar6;
      } while (iVar5 != 0);
      puVar15 = puVar16 + uVar24 * 9;
    }
    local_90 = 0;
    local_8c = (uint *)0x4;
    local_94 = 4;
    local_98 = (uint *)0x4;
    uVar22 = (uint)((int)puVar6 - (int)puVar16) / 0x24;
    local_b0 = puVar16;
    local_ac = (undefined1 *)uVar22;
    local_a8 = puVar14;
    FUN_01aa3700(puVar15,((uint)((int)(puVar16 + uVar24 * 9) - (int)puVar15) >> 2) * 0x38e38e39);
    local_40 = puVar14;
    local_3c = puVar16;
    local_38 = uVar22;
    FUN_00963210();
    uVar24 = thunk_FUN_01be5118(0x32);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x32);
    }
    FUN_01bed4e2(uVar24,"type.googleapis.com/google.rpc.PreconditionFailure",0x32);
    uVar18 = 0;
    iVar5 = 0;
    if (puVar6 != puVar16) {
      puVar15 = puVar16 + 8;
      uVar3 = uVar22;
      do {
        uVar9 = puVar15[-6];
        iVar7 = 0;
        if (uVar9 != 0) {
          iVar7 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar9 = puVar15[-3];
        iVar19 = 0;
        iVar23 = 0;
        if (uVar9 != 0) {
          iVar23 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar9 = *puVar15;
        if (uVar9 != 0) {
          iVar19 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        puVar15 = puVar15 + 9;
        uVar9 = iVar23 + iVar7 + iVar19;
        uVar3 = uVar3 - 1;
        iVar5 = uVar9 + iVar5 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      } while (uVar3 != 0);
    }
    puVar15 = (uint *)(iVar5 + uVar22);
    if ((int)puVar15 < 0) {
LAB_00a2359c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar15);
    }
    if (puVar15 == (uint *)0x0) {
      uVar22 = 1;
      puVar15 = (uint *)0x0;
    }
    else {
      uVar18 = 1;
      uVar22 = FUN_01298504(puVar15,1);
      if (uVar22 == 0) goto LAB_00a2359c;
    }
    local_a8 = (uint *)0x0;
    local_b0 = puVar15;
    local_ac = (undefined1 *)uVar22;
    if (puVar6 != puVar16) {
      do {
        local_98 = (uint *)CONCAT31(local_98._1_3_,10);
        FUN_01ac6cbc(&local_b0,&local_98,1);
        uVar22 = puVar16[2];
        iVar5 = 0;
        iVar7 = 0;
        if (uVar22 != 0) {
          iVar7 = uVar22 + ((LZCOUNT(uVar22 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar22 = puVar16[5];
        if (uVar22 != 0) {
          iVar5 = uVar22 + ((LZCOUNT(uVar22 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar22 = puVar16[8];
        iVar19 = 0;
        if (uVar22 != 0) {
          iVar19 = uVar22 + ((LZCOUNT(uVar22 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        iVar23 = 10;
        uVar22 = iVar5 + iVar7 + iVar19;
        do {
          if (uVar22 < 0x80) {
            local_98 = (uint *)CONCAT31(local_98._1_3_,(char)uVar22);
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98 = (uint *)(CONCAT31(local_98._1_3_,(char)uVar22) | 0x80);
          FUN_01ac6cbc(&local_b0,&local_98,1);
          uVar22 = uVar22 >> 7;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        if (puVar16[2] != 0) {
          FUN_01aa4654(1,puVar16[1],puVar16[2],&local_b0);
        }
        if (puVar16[5] != 0) {
          FUN_01aa4654(2,puVar16[4],puVar16[5],&local_b0);
        }
        if (puVar16[8] != 0) {
          FUN_01aa4654(3,puVar16[7],puVar16[8],&local_b0);
        }
        puVar16 = puVar16 + 9;
      } while (puVar16 != puVar6);
    }
    local_8c = local_b0;
    local_88 = (undefined4 *)local_ac;
    local_84 = local_a8;
    local_90 = 0x32;
    local_98 = (uint *)&DAT_00000032;
    local_94 = uVar24;
    FUN_01aa480c(&local_40);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
    }
    local_d0 = local_bc;
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar14 = local_bc + (int)local_c8 * 6;
    *puVar14 = local_98;
    puVar14[1] = local_94;
    puVar14[2] = local_90;
    puVar14[3] = local_8c;
    puVar14[4] = local_88;
    puVar14[5] = local_84;
    local_c8 = local_b8;
  }
  puVar14 = (undefined4 *)param_2[0x36];
  if (puVar14 != (undefined4 *)0x80000000) {
    uVar24 = param_2[0x38];
    puVar16 = (uint *)param_2[0x37];
    puVar15 = puVar16;
    puVar6 = puVar16;
    if (uVar24 != 0) {
      iVar5 = uVar24 * 0x18;
      do {
        iVar5 = iVar5 + -0x18;
        local_88 = (undefined4 *)puVar15[4];
        local_84 = (uint *)puVar15[5];
        puVar6 = puVar15 + 6;
        *puVar15 = *puVar15;
        puVar15[1] = puVar15[1];
        puVar15[2] = puVar15[2];
        puVar15[3] = puVar15[3];
        puVar15[4] = (uint)local_88;
        puVar15[5] = (uint)local_84;
        puVar15 = puVar6;
      } while (iVar5 != 0);
      puVar15 = puVar16 + uVar24 * 6;
    }
    local_8c = (uint *)0x4;
    local_94 = 4;
    local_98 = (uint *)0x4;
    local_90 = 0;
    FUN_01aa372c(puVar15,((uint)((int)(puVar16 + uVar24 * 6) - (int)puVar15) >> 3) * -0x55555555);
    uVar24 = (uint)((int)puVar6 - (int)puVar16) / 0x18;
    local_40 = puVar14;
    local_3c = puVar16;
    local_38 = uVar24;
    FUN_01aa3760();
    uVar22 = thunk_FUN_01be5118(0x29);
    if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x29);
    }
    FUN_01bed4e2(uVar22,"type.googleapis.com/google.rpc.BadRequest",0x29);
    uVar18 = 0;
    iVar5 = 0;
    if (puVar6 != puVar16) {
      puVar15 = puVar16 + 5;
      uVar3 = uVar24;
      do {
        uVar9 = puVar15[-3];
        iVar7 = 0;
        if (uVar9 != 0) {
          iVar7 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar9 = *puVar15;
        if (uVar9 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        puVar15 = puVar15 + 6;
        uVar3 = uVar3 - 1;
        iVar5 = iVar19 + iVar7 + iVar5 + ((LZCOUNT(iVar19 + iVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      } while (uVar3 != 0);
    }
    puVar15 = (uint *)(iVar5 + uVar24);
    if ((int)puVar15 < 0) {
LAB_00a239c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar15);
    }
    if (puVar15 == (uint *)0x0) {
      uVar24 = 1;
      puVar15 = (uint *)0x0;
    }
    else {
      uVar18 = 1;
      uVar24 = FUN_01298504(puVar15,1);
      if (uVar24 == 0) goto LAB_00a239c0;
    }
    local_a8 = (uint *)0x0;
    local_b0 = puVar15;
    local_ac = (undefined1 *)uVar24;
    if (puVar6 != puVar16) {
      do {
        local_98 = (uint *)CONCAT31(local_98._1_3_,10);
        FUN_01ac6cbc(&local_b0,&local_98,1);
        uVar24 = puVar16[2];
        iVar5 = 0;
        iVar7 = 0;
        if (uVar24 != 0) {
          iVar7 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = puVar16[5];
        if (uVar24 != 0) {
          iVar5 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = iVar5 + iVar7;
        iVar5 = 10;
        do {
          if (uVar24 < 0x80) {
            local_98 = (uint *)CONCAT31(local_98._1_3_,(char)uVar24);
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98 = (uint *)(CONCAT31(local_98._1_3_,(char)uVar24) | 0x80);
          FUN_01ac6cbc(&local_b0,&local_98,1);
          uVar24 = uVar24 >> 7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (puVar16[2] != 0) {
          FUN_01aa4654(1,puVar16[1],puVar16[2],&local_b0);
        }
        if (puVar16[5] != 0) {
          FUN_01aa4654(2,puVar16[4],puVar16[5],&local_b0);
        }
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar6);
    }
    local_8c = local_b0;
    local_88 = (undefined4 *)local_ac;
    local_84 = local_a8;
    local_90 = 0x29;
    local_98 = (uint *)&DAT_00000029;
    local_94 = uVar22;
    FUN_01aa45e4(&local_40);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
      local_d0 = local_bc;
    }
    local_b8 = (uint *)((int)local_c8 + 1);
    local_d0 = local_d0 + (int)local_c8 * 6;
    *local_d0 = local_98;
    local_d0[1] = local_94;
    local_d0[2] = local_90;
    local_d0[3] = local_8c;
    local_d0[4] = local_88;
    local_d0[5] = local_84;
    local_c8 = local_b8;
  }
  if (param_2[10] != 0x80000000) {
    local_8c = (uint *)param_2[0xd];
    local_88 = (undefined4 *)param_2[0xe];
    local_84 = (uint *)param_2[0xf];
    local_98 = (uint *)param_2[10];
    local_94 = param_2[0xb];
    local_90 = param_2[0xc];
    uVar24 = thunk_FUN_01be5118(0x2a);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2a);
    }
    FUN_01bed4e2(uVar24,"type.googleapis.com/google.rpc.RequestInfo",0x2a);
    puVar15 = local_84;
    uVar22 = local_90;
    iVar5 = 0;
    iVar7 = 0;
    if (local_90 != 0) {
      iVar7 = local_90 + ((LZCOUNT(local_90 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (local_84 != (uint *)0x0) {
      iVar5 = (int)local_84 + ((LZCOUNT((uint)local_84 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar14 = (undefined4 *)(iVar5 + iVar7);
    uVar18 = 0;
    if ((int)puVar14 < 0) {
LAB_00a23c74:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar14);
    }
    if (puVar14 == (undefined4 *)0x0) {
      puVar6 = (uint *)&DAT_00000001;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = 1;
      puVar6 = (uint *)FUN_01298504(puVar14,1);
      if (puVar6 == (uint *)0x0) goto LAB_00a23c74;
    }
    local_38 = 0;
    local_40 = puVar14;
    local_3c = puVar6;
    if (uVar22 != 0) {
      FUN_01aa4654(1,local_94,uVar22,&local_40);
    }
    puVar14 = local_88;
    if (puVar15 != (uint *)0x0) {
      FUN_01aa4654(2,local_88,puVar15,&local_40);
    }
    local_a4 = local_40;
    local_a0 = local_3c;
    uStack_9c = local_38;
    local_a8 = (uint *)0x2a;
    local_b0 = (uint *)0x2a;
    local_ac = (undefined1 *)uVar24;
    FUN_019bb7e0(local_98,local_94);
    FUN_019bb7e0(local_8c,puVar14);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
    }
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar15 = local_bc + (int)local_c8 * 6;
    *puVar15 = (uint)local_b0;
    puVar15[1] = (uint)local_ac;
    puVar15[2] = (uint)local_a8;
    puVar15[3] = (uint)local_a4;
    puVar15[4] = (uint)local_a0;
    puVar15[5] = uStack_9c;
    local_c8 = local_b8;
  }
  if (param_2[0x10] != 0x80000000) {
    local_8c = (uint *)param_2[0x13];
    local_88 = (undefined4 *)param_2[0x14];
    local_84 = (uint *)param_2[0x15];
    local_80 = param_2[0x16];
    local_7c = param_2[0x17];
    local_78 = param_2[0x18];
    local_74 = param_2[0x19];
    local_70 = param_2[0x1a];
    local_6c = param_2[0x1b];
    local_98 = (uint *)param_2[0x10];
    local_94 = param_2[0x11];
    local_90 = param_2[0x12];
    uVar24 = thunk_FUN_01be5118(0x2b);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2b);
    }
    FUN_01bed4e2(uVar24,&DAT_00530c50,0x2b);
    uVar9 = local_6c;
    uVar3 = local_78;
    puVar15 = local_84;
    uVar22 = local_90;
    iVar5 = 0;
    iVar7 = 0;
    if (local_90 != 0) {
      iVar7 = local_90 + ((LZCOUNT(local_90 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (local_84 != (uint *)0x0) {
      iVar5 = (int)local_84 + ((LZCOUNT((uint)local_84 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    iVar19 = 0;
    iVar23 = 0;
    if (local_78 != 0) {
      iVar23 = local_78 + ((LZCOUNT(local_78 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (local_6c != 0) {
      iVar19 = local_6c + ((LZCOUNT(local_6c | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    uVar18 = 0;
    puVar14 = (undefined4 *)(iVar5 + iVar7 + iVar23 + iVar19);
    if ((int)puVar14 < 0) {
LAB_00a23ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar14);
    }
    if (puVar14 == (undefined4 *)0x0) {
      puVar6 = (uint *)&DAT_00000001;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = 1;
      puVar6 = (uint *)FUN_01298504(puVar14,1);
      if (puVar6 == (uint *)0x0) goto LAB_00a23ec0;
    }
    local_38 = 0;
    local_40 = puVar14;
    local_3c = puVar6;
    if (uVar22 != 0) {
      FUN_01aa4654(1,local_94,uVar22,&local_40);
    }
    if (puVar15 != (uint *)0x0) {
      FUN_01aa4654(2,local_88,puVar15,&local_40);
    }
    if (uVar3 != 0) {
      FUN_01aa4654(3,local_7c,uVar3,&local_40);
    }
    if (uVar9 != 0) {
      FUN_01aa4654(4,local_70,uVar9,&local_40);
    }
    local_a4 = local_40;
    local_a0 = local_3c;
    uStack_9c = local_38;
    local_a8 = (uint *)0x2b;
    local_b0 = (uint *)0x2b;
    local_ac = (undefined1 *)uVar24;
    FUN_01aa4850(&local_98);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
    }
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar15 = local_bc + (int)local_c8 * 6;
    *puVar15 = (uint)local_b0;
    puVar15[1] = (uint)local_ac;
    puVar15[2] = (uint)local_a8;
    puVar15[3] = (uint)local_a4;
    puVar15[4] = (uint)local_a0;
    puVar15[5] = uStack_9c;
    local_c8 = local_b8;
  }
  puVar14 = (undefined4 *)param_2[0x39];
  if (puVar14 != (undefined4 *)0x80000000) {
    uVar24 = param_2[0x3b];
    puVar16 = (uint *)param_2[0x3a];
    puVar15 = puVar16;
    puVar6 = puVar16;
    if (uVar24 != 0) {
      iVar5 = uVar24 * 0x18;
      do {
        iVar5 = iVar5 + -0x18;
        local_88 = (undefined4 *)puVar15[4];
        local_84 = (uint *)puVar15[5];
        puVar6 = puVar15 + 6;
        *puVar15 = *puVar15;
        puVar15[1] = puVar15[1];
        puVar15[2] = puVar15[2];
        puVar15[3] = puVar15[3];
        puVar15[4] = (uint)local_88;
        puVar15[5] = (uint)local_84;
        puVar15 = puVar6;
      } while (iVar5 != 0);
      puVar15 = puVar16 + uVar24 * 6;
    }
    local_8c = (uint *)0x4;
    local_94 = 4;
    local_98 = (uint *)0x4;
    local_90 = 0;
    FUN_01aa372c(puVar15,((uint)((int)(puVar16 + uVar24 * 6) - (int)puVar15) >> 3) * -0x55555555);
    uVar24 = (uint)((int)puVar6 - (int)puVar16) / 0x18;
    local_40 = puVar14;
    local_3c = puVar16;
    local_38 = uVar24;
    FUN_01aa3760(&local_98);
    uVar22 = thunk_FUN_01be5118(0x23);
    if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x23);
    }
    FUN_01bed4e2(uVar22,"type.googleapis.com/google.rpc.Help",0x23);
    uVar18 = 0;
    iVar5 = 0;
    if (puVar6 != puVar16) {
      puVar15 = puVar16 + 5;
      uVar3 = uVar24;
      do {
        uVar9 = puVar15[-3];
        iVar7 = 0;
        if (uVar9 != 0) {
          iVar7 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar9 = *puVar15;
        if (uVar9 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = uVar9 + ((LZCOUNT(uVar9 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        puVar15 = puVar15 + 6;
        uVar3 = uVar3 - 1;
        iVar5 = iVar19 + iVar7 + iVar5 + ((LZCOUNT(iVar19 + iVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
      } while (uVar3 != 0);
    }
    puVar15 = (uint *)(iVar5 + uVar24);
    if ((int)puVar15 < 0) {
LAB_00a241bc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar15);
    }
    if (puVar15 == (uint *)0x0) {
      uVar24 = 1;
      puVar15 = (uint *)0x0;
    }
    else {
      uVar18 = 1;
      uVar24 = FUN_01298504(puVar15,1);
      if (uVar24 == 0) goto LAB_00a241bc;
    }
    local_a8 = (uint *)0x0;
    local_b0 = puVar15;
    local_ac = (undefined1 *)uVar24;
    if (puVar6 != puVar16) {
      do {
        local_98 = (uint *)CONCAT31(local_98._1_3_,10);
        FUN_01ac6cbc(&local_b0,&local_98,1);
        uVar24 = puVar16[2];
        iVar5 = 0;
        iVar7 = 0;
        if (uVar24 != 0) {
          iVar7 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = puVar16[5];
        if (uVar24 != 0) {
          iVar5 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        uVar24 = iVar5 + iVar7;
        iVar5 = 10;
        do {
          if (uVar24 < 0x80) {
            local_98 = (uint *)CONCAT31(local_98._1_3_,(char)uVar24);
            FUN_01ac6cbc(&local_b0,&local_98,1);
            break;
          }
          local_98 = (uint *)(CONCAT31(local_98._1_3_,(char)uVar24) | 0x80);
          FUN_01ac6cbc(&local_b0,&local_98,1);
          uVar24 = uVar24 >> 7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (puVar16[2] != 0) {
          FUN_01aa4654(1,puVar16[1],puVar16[2],&local_b0);
        }
        if (puVar16[5] != 0) {
          FUN_01aa4654(2,puVar16[4],puVar16[5],&local_b0);
        }
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar6);
    }
    local_8c = local_b0;
    local_88 = (undefined4 *)local_ac;
    local_84 = local_a8;
    local_90 = 0x23;
    local_98 = (uint *)&DAT_00000023;
    local_94 = uVar22;
    FUN_01aa45e4(&local_40);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
    }
    local_b8 = (uint *)((int)local_c8 + 1);
    puVar14 = local_bc + (int)local_c8 * 6;
    *puVar14 = local_98;
    puVar14[1] = local_94;
    puVar14[2] = local_90;
    puVar14[3] = local_8c;
    puVar14[4] = local_88;
    puVar14[5] = local_84;
    local_c8 = local_b8;
  }
  if (param_2[0x1c] != 0x80000000) {
    local_8c = (uint *)param_2[0x1f];
    local_88 = (undefined4 *)param_2[0x20];
    local_84 = (uint *)param_2[0x21];
    local_98 = (uint *)param_2[0x1c];
    local_94 = param_2[0x1d];
    local_90 = param_2[0x1e];
    uVar24 = thunk_FUN_01be5118(0x2f);
    if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2f);
    }
    FUN_01bed4e2(uVar24,"type.googleapis.com/google.rpc.LocalizedMessage",0x2f);
    puVar15 = local_84;
    uVar22 = local_90;
    iVar5 = 0;
    iVar7 = 0;
    if (local_90 != 0) {
      iVar7 = local_90 + ((LZCOUNT(local_90 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if (local_84 != (uint *)0x0) {
      iVar5 = (int)local_84 + ((LZCOUNT((uint)local_84 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    puVar14 = (undefined4 *)(iVar5 + iVar7);
    uVar18 = 0;
    if ((int)puVar14 < 0) {
LAB_00a24460:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,puVar14);
    }
    if (puVar14 == (undefined4 *)0x0) {
      puVar6 = (uint *)&DAT_00000001;
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar18 = 1;
      puVar6 = (uint *)FUN_01298504(puVar14,1);
      if (puVar6 == (uint *)0x0) goto LAB_00a24460;
    }
    local_38 = 0;
    local_40 = puVar14;
    local_3c = puVar6;
    if (uVar22 != 0) {
      FUN_01aa4654(1,local_94,uVar22,&local_40);
    }
    puVar14 = local_88;
    if (puVar15 != (uint *)0x0) {
      FUN_01aa4654(2,local_88,puVar15,&local_40);
    }
    local_a4 = local_40;
    local_a0 = local_3c;
    uStack_9c = local_38;
    local_a8 = (uint *)0x2f;
    local_b0 = (uint *)0x2f;
    local_ac = (undefined1 *)uVar24;
    FUN_019bb7e0(local_98,local_94);
    FUN_019bb7e0(local_8c,puVar14);
    if (local_c8 == local_c0) {
      FUN_014f8acc(&local_c0);
    }
    puVar15 = local_bc + (int)local_c8 * 6;
    *puVar15 = (uint)local_b0;
    puVar15[1] = (uint)local_ac;
    puVar15[2] = (uint)local_a8;
    puVar15[3] = (uint)local_a4;
    puVar15[4] = (uint)local_a0;
    puVar15[5] = uStack_9c;
    local_b8 = (uint *)((int)local_c8 + 1);
  }
  iVar5 = thunk_FUN_01be5118(0x1a);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x1a);
  }
  FUN_01bed4e2(iVar5,iVar2,0x1a);
  puVar15 = local_b8;
  puVar14 = local_bc;
  local_8c = local_c0;
  local_88 = local_bc;
  local_84 = local_b8;
  local_80 = 3;
  local_90 = 0x1a;
  puVar8 = local_bc + (int)local_b8 * 6;
  local_98 = (uint *)0x1a;
  local_94 = iVar5;
  iVar7 = FUN_01aa3648(local_bc);
  uVar18 = 0;
  uVar24 = (int)puVar15 + iVar7 + 0x1e;
  if ((int)uVar24 < 0) {
LAB_00a245fc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,uVar24);
  }
  puVar11 = (undefined1 *)0x1;
  local_54 = 0;
  if (uVar24 != 0) {
    uVar18 = 1;
    puVar11 = (undefined1 *)FUN_01298504(uVar24,1);
    if (puVar11 == (undefined1 *)0x0) goto LAB_00a245fc;
    local_54 = uVar24;
  }
  uVar24 = 0x20 - LZCOUNT(local_54 >> 10);
  local_58 = 0;
  if (6 < uVar24) {
    uVar24 = 7;
  }
  local_50 = uVar24 << 2 | 1;
  local_5c = puVar11;
  iVar7 = FUN_01aa3648(puVar14,puVar8);
  puVar6 = (uint *)((int)puVar15 + iVar7 + 0x1e);
  if ((int)puVar6 < 0) {
    local_ac = (undefined1 *)0x7fffffff;
    local_b0 = puVar6;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_b0,&DAT_01d2e1fc,&DAT_01d2e1ec);
  }
  FUN_01284394(&local_5c,&local_b0,1);
  local_b0 = (uint *)CONCAT31((int3)((uint)local_b0 >> 8),3);
  FUN_01284394(&local_5c,&local_b0,1);
  FUN_01aa46fc(2,iVar5,0x1a,&local_5c);
  if (puVar15 != (uint *)0x0) {
    do {
      local_b0 = (uint *)CONCAT31(local_b0._1_3_,0x1a);
      FUN_01284394(&local_5c,&local_b0,1);
      uVar24 = puVar14[2];
      iVar7 = 0;
      iVar19 = 0;
      if (uVar24 != 0) {
        iVar19 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar24 = puVar14[5];
      if (uVar24 != 0) {
        iVar7 = uVar24 + ((LZCOUNT(uVar24 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar25 = puVar14 + 6;
      uVar24 = iVar7 + iVar19;
      iVar7 = 10;
      do {
        if (uVar24 < 0x80) {
          local_b0 = (uint *)CONCAT31(local_b0._1_3_,(char)uVar24);
          FUN_01284394(&local_5c,&local_b0,1);
          break;
        }
        local_b0 = (uint *)(CONCAT31(local_b0._1_3_,(char)uVar24) | 0x80);
        FUN_01284394(&local_5c,&local_b0,1);
        uVar24 = uVar24 >> 7;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (puVar14[2] != 0) {
        FUN_01aa46fc(1,puVar14[1],puVar14[2],&local_5c);
      }
      uVar24 = puVar14[5];
      if (uVar24 != 0) {
        uVar18 = puVar14[4];
        local_b0 = (uint *)CONCAT31(local_b0._1_3_,0x12);
        FUN_01284394(&local_5c,&local_b0,1);
        iVar7 = 10;
        uVar22 = uVar24;
        do {
          if (uVar22 < 0x80) {
            local_b0 = (uint *)CONCAT31(local_b0._1_3_,(char)uVar22);
            FUN_01284394(&local_5c,&local_b0,1);
            break;
          }
          local_b0 = (uint *)(CONCAT31(local_b0._1_3_,(char)uVar22) | 0x80);
          FUN_01284394(&local_5c,&local_b0,1);
          uVar22 = uVar22 >> 7;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        FUN_01aa40b4(&local_5c,uVar18,uVar24);
      }
      puVar14 = puVar25;
    } while (puVar25 != puVar8);
  }
  uVar24 = local_50;
  if ((local_50 & 1) == 0) {
    puVar14 = &DAT_01d2e520;
    puVar11 = local_5c;
    iVar7 = local_58;
  }
  else {
    local_44 = local_58 + (local_50 >> 5);
    local_48 = (int)local_5c - (local_50 >> 5);
    local_4c = local_54 + (local_50 >> 5);
    FUN_01283524(&local_40,&local_4c);
    local_2c = uVar24 >> 5;
    if (local_38 < local_2c) {
      local_a8 = &local_28;
      local_28 = local_38;
      local_a4 = (undefined4 *)&LAB_01a6a304;
      local_ac = &LAB_01a6a304;
      local_b0 = &local_2c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_b0,&DAT_01d2e534);
    }
    iVar7 = local_38 - local_2c;
    puVar11 = (undefined1 *)((int)local_3c + local_2c);
    uVar24 = local_34;
    puVar14 = local_40;
  }
  FUN_019bb7e0(0x1a,iVar5);
  FUN_00a25338(&local_8c);
  param_1[0x16] = 0x1a;
  param_1[0x17] = iVar2;
  param_1[0x18] = 0x1a;
  uVar18 = param_3[1];
  uVar10 = param_3[2];
  uVar12 = param_3[3];
  uVar20 = param_3[4];
  *param_1 = *param_3;
  param_1[1] = uVar18;
  param_1[2] = uVar10;
  param_1[3] = uVar12;
  param_1[4] = uVar20;
  uVar18 = param_3[6];
  uVar10 = param_3[7];
  uVar12 = param_3[8];
  uVar20 = param_3[9];
  param_1[5] = param_3[5];
  param_1[6] = uVar18;
  param_1[7] = uVar10;
  param_1[8] = uVar12;
  param_1[9] = uVar20;
  uVar18 = param_3[0xb];
  uVar10 = param_3[0xc];
  uVar12 = param_3[0xd];
  uVar20 = param_3[0xe];
  uVar21 = param_3[0xf];
  param_1[10] = param_3[10];
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar20;
  param_1[0xf] = uVar21;
  *(undefined1 *)(param_1 + 0x19) = 3;
  param_1[0x10] = puVar14;
  param_1[0x11] = puVar11;
  param_1[0x12] = iVar7;
  param_1[0x13] = uVar24;
  param_1[0x14] = 0;
  return;
}

