// FUN_016734cc @ 016734cc size=3184 calls_out=28 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016734cc(uint *param_1,int param_2)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint extraout_r2;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  uint local_124;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint uStack_108;
  uint uStack_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f0;
  int local_ec;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  int local_a8;
  undefined1 local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar12 = *(uint *)(param_2 + 0x14);
  if (uVar12 < uVar6) {
    piVar16 = (int *)(param_2 + 0xc);
    do {
      uVar10 = (uint)*(byte *)(*piVar16 + uVar12);
      if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar10 < 0x66) {
          if (uVar10 == 0x22) {
            *(undefined4 *)(param_2 + 8) = 0;
            *(uint *)(param_2 + 0x14) = uVar12 + 1;
            FUN_01968828(&local_c8,piVar16,param_2);
            local_10c = local_c0;
            uVar6 = local_c4;
            if (local_c8 == 2) {
              param_1[1] = local_c4;
              goto LAB_016738fc;
            }
            uVar12 = 0;
            if ((int)local_c0 < 0) {
LAB_016739e4:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar12,local_10c);
            }
            if (local_c0 == 0) {
              uVar10 = 1;
            }
            else {
              uVar12 = 1;
              uVar10 = FUN_01298504(local_c0,1);
              if (uVar10 == 0) goto LAB_016739e4;
              uVar12 = local_10c;
            }
            FUN_01bed4e2(uVar10,uVar6,local_10c);
            uVar4 = 3;
            local_114 = uVar12;
            local_110 = uVar10;
            goto LAB_01673c4c;
          }
          if (uVar10 != 0x2d) {
            if (uVar10 != 0x5b) goto LAB_01673830;
            cVar9 = *(char *)(param_2 + 0x1c) + -1;
            *(char *)(param_2 + 0x1c) = cVar9;
            if (cVar9 == '\0') {
              local_c8 = 0x18;
              uVar6 = FUN_012c6b30(param_2,&local_c8);
              *(undefined1 *)param_1 = 6;
              param_1[1] = uVar6;
              return;
            }
            uVar12 = uVar12 + 1;
            bVar17 = true;
            *(uint *)(param_2 + 0x14) = uVar12;
            local_60 = 0;
            local_124 = 8;
            local_64 = 8;
            local_68 = 0;
            goto LAB_01673634;
          }
          *(uint *)(param_2 + 0x14) = uVar12 + 1;
          FUN_012c751c(&local_100,param_2,0);
          if (local_100 == 3 && local_fc == 0) {
            local_e8 = local_f8;
            goto LAB_016738f4;
          }
          piVar16 = &local_100;
        }
        else {
          if (uVar10 < 0x74) {
            if (uVar10 == 0x66) {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              uVar6 = FUN_012c6b8c(param_2,&DAT_0056efac,4);
              if (uVar6 == 0) {
                uVar5 = 1;
                goto LAB_016738bc;
              }
              goto LAB_01673540;
            }
            if (uVar10 == 0x6e) {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              uVar6 = FUN_012c6b8c(param_2,"ull",3);
              if (uVar6 != 0) goto LAB_01673540;
              local_118 = local_118 & 0xffffff00;
              goto LAB_01673c5c;
            }
          }
          else {
            if (uVar10 == 0x74) {
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              uVar6 = FUN_012c6b8c(param_2,"rue",3);
              if (uVar6 != 0) goto LAB_01673540;
              uVar5 = 0x101;
LAB_016738bc:
              local_118 = CONCAT22(local_118._2_2_,uVar5);
              goto LAB_01673c5c;
            }
            if (uVar10 == 0x7b) {
              cVar9 = *(char *)(param_2 + 0x1c) + -1;
              *(char *)(param_2 + 0x1c) = cVar9;
              if (cVar9 == '\0') {
                local_c8 = 0x18;
                goto LAB_01673530;
              }
              *(uint *)(param_2 + 0x14) = uVar12 + 1;
              local_a4 = 1;
              local_a8 = param_2;
              FUN_01278730(&local_c8,&local_a8);
              iVar2 = local_a8;
              if ((char)local_c8 != '\x01') {
                if (local_c8._1_1_ != '\x01') {
                  local_d4 = 0;
                  local_dc = 0;
                  uVar4 = 5;
                  goto LAB_01673acc;
                }
                piVar15 = (int *)(local_a8 + 0xc);
                *(undefined4 *)(local_a8 + 8) = 0;
                *(int *)(local_a8 + 0x14) = *(int *)(local_a8 + 0x14) + 1;
                FUN_01968828(&local_c8,piVar15,local_a8);
                if (local_c8 != 2) {
                  FUN_01969b9c(&local_90,local_c4,local_c0);
                  uVar12 = local_8c;
                  uVar6 = local_90;
                  if (local_90 != 0x80000001) {
                    if (local_90 == 0x80000000) {
                      local_dc = FUN_0167459c(iVar2);
                      if (local_dc != 0) goto LAB_01673ca4;
                      uVar6 = *(uint *)(iVar2 + 0x14);
                      if (*(uint *)(iVar2 + 0x10) <= uVar6) goto LAB_01673e60;
                      iVar11 = *piVar15;
                      goto LAB_01673e38;
                    }
                    if (local_90 != 0x80000002) {
                      local_98 = 0;
                      local_a0[0] = 0;
                      FUN_016746d8(&local_e0,&local_a8);
                      if ((char)local_e0 != '\x06') {
                        FUN_0196b484(&local_c8,local_a0,&local_90,&local_e0);
                        FUN_01670878(&local_c8);
                        puVar7 = (uint *)((uint)&local_90 | 4);
                        puVar8 = (uint *)((uint)&local_c8 | 4);
                        goto LAB_01673d58;
                      }
                      FUN_019bb7e0(uVar6,uVar12);
                      FUN_0196afa8(local_a0);
                      goto LAB_01673ad0;
                    }
                  }
                  local_c4 = local_8c;
                }
              }
              uVar4 = 6;
              local_dc = local_c4;
              goto LAB_01673acc;
            }
          }
LAB_01673830:
          if (9 < uVar10 - 0x30) {
            local_c8 = 10;
            uVar6 = FUN_012c6b30(param_2,&local_c8);
            goto LAB_01673fcc;
          }
          FUN_012c751c(&local_f0,param_2,1);
          if (local_f0 == 3 && local_ec == 0) goto LAB_016738f4;
          piVar16 = &local_f0;
        }
        FUN_01964e98(&local_118,piVar16);
        goto LAB_01673c50;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
    } while (uVar6 != uVar12);
  }
  local_c8 = 5;
LAB_01673530:
  uVar6 = FUN_012c6b30(param_2,&local_c8);
LAB_01673540:
  param_1[1] = uVar6;
  *(undefined1 *)param_1 = 6;
  return;
LAB_01673634:
  uVar10 = local_60;
  if (uVar6 <= uVar12) goto LAB_01673904;
  while( true ) {
    uVar13 = (uint)*(byte *)(*piVar16 + uVar12);
    if ((0x17 < uVar13 - 9) || ((1 << (uVar13 - 9 & 0xff) & 0x800013U) == 0)) break;
    uVar12 = uVar12 + 1;
    *(uint *)(param_2 + 0x14) = uVar12;
    if (uVar6 == uVar12) goto LAB_01673904;
  }
  if (uVar13 == 0x5d) {
    cVar9 = '\x04';
    local_c0 = local_64;
    local_114 = local_68;
    local_bc = local_60;
    goto LAB_01673928;
  }
  if (!bVar17) {
    if (uVar13 != 0x2c) {
      local_c8 = 7;
      local_114 = FUN_012c6b30(param_2,&local_c8);
      goto LAB_01673918;
    }
    uVar12 = uVar12 + 1;
    *(uint *)(param_2 + 0x14) = uVar12;
    if (uVar6 <= uVar12) {
LAB_01673d00:
      local_c8 = 5;
      local_114 = FUN_012c6b30(param_2,&local_c8);
      goto LAB_01673918;
    }
    while( true ) {
      uVar13 = (uint)*(byte *)(*piVar16 + uVar12);
      uVar14 = uVar13 - 9;
      if ((0x17 < uVar14) || ((1 << (uVar14 & 0xff) & 0x800013U) == 0)) break;
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
      if (uVar6 == uVar12) goto LAB_01673d00;
    }
    if (uVar13 == 0x5d) {
      local_c8 = 0x15;
      local_114 = FUN_012c6b30(param_2,&local_c8);
      goto LAB_01673918;
    }
  }
  FUN_016734cc(&local_c8,param_2);
  if ((char)local_c8 == '\x06') {
    local_114 = local_c4;
    goto LAB_0167391c;
  }
  uVar1 = *(undefined3 *)((uint)&local_c8 | 1);
  local_4c = CONCAT13(local_4c._3_1_,uVar1);
  iVar2 = local_4c;
  local_40 = local_c0;
  local_4c._2_1_ = (undefined1)((uint3)uVar1 >> 0x10);
  local_4c._0_2_ = (undefined2)uVar1;
  local_90 = CONCAT31(local_90._1_3_,(char)local_c8);
  *(undefined1 *)((undefined2 *)((uint)&local_90 | 1) + 1) = local_4c._2_1_;
  *(undefined2 *)((uint)&local_90 | 1) = (undefined2)local_4c;
  local_8c = local_c4;
  local_88 = local_c0;
  local_84 = local_bc;
  uStack_80 = uStack_b8;
  uStack_7c = uStack_b4;
  local_4c = iVar2;
  if (uVar10 == local_68) {
    FUN_01969b6c(&local_68);
    local_124 = local_64;
  }
  puVar7 = (uint *)(local_124 + uVar10 * 0x18);
  *puVar7 = local_90;
  puVar7[1] = local_8c;
  puVar7[2] = local_88;
  puVar7[3] = local_84;
  puVar7[4] = uStack_80;
  puVar7[5] = uStack_7c;
  local_60 = uVar10 + 1;
  bVar17 = false;
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar12 = *(uint *)(param_2 + 0x14);
  goto LAB_01673634;
LAB_01673904:
  local_c8 = 2;
  local_114 = FUN_012c6b30(param_2,&local_c8);
LAB_01673918:
LAB_0167391c:
  FUN_00949b70(&local_68);
  cVar9 = '\x06';
  local_c0 = extraout_r2;
  local_bc = 1;
LAB_01673928:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar12 = *(uint *)(param_2 + 0x14);
  local_90 = CONCAT31(local_90._1_3_,cVar9);
  local_8c = local_114;
  local_88 = local_c0;
  local_84 = local_bc;
  if (uVar12 < uVar6) {
    do {
      uVar10 = (uint)*(byte *)(*piVar16 + uVar12);
      if (uVar10 < 0xd) {
        if (1 < uVar10 - 9) goto LAB_0167408c;
      }
      else if (uVar10 < 0x20) {
        if (uVar10 != 0xd) goto LAB_0167408c;
      }
      else if (uVar10 != 0x20) {
        if (uVar10 != 0x5d) {
          if (uVar10 == 0x2c) {
            uVar12 = uVar12 + 1;
            *(uint *)(param_2 + 0x14) = uVar12;
            if (uVar12 < uVar6) goto LAB_01674048;
            goto LAB_016740f8;
          }
LAB_0167408c:
          local_40 = 0x16;
          local_b0 = FUN_012c6b30(param_2,&local_40);
          goto LAB_016739b8;
        }
        *(uint *)(param_2 + 0x14) = uVar12 + 1;
        local_c8 = local_90;
        uStack_b8 = uStack_80;
        uStack_b4 = uStack_7c;
        local_c4 = local_114;
        if (cVar9 == '\x06') goto LAB_01673bc8;
        local_118 = local_c8;
        local_110 = local_c0;
        local_10c = local_bc;
        uStack_108 = uStack_b8;
        uStack_104 = uStack_b4;
        goto LAB_01673c50;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(param_2 + 0x14) = uVar12;
    } while (uVar6 != uVar12);
  }
  local_40 = 2;
  local_b0 = FUN_012c6b30(param_2,&local_40);
  goto LAB_016739b8;
  while( true ) {
    uVar12 = uVar12 + 1;
    *(uint *)(param_2 + 0x14) = uVar12;
    if (uVar6 == uVar12) break;
LAB_01674048:
    uVar13 = (uint)*(byte *)(*piVar16 + uVar12);
    uVar10 = uVar13 - 9;
    if ((0x17 < uVar10) || ((1 << (uVar10 & 0xff) & 0x800013U) == 0)) {
      if (uVar13 == 0x5d) {
        local_40 = 0x15;
        local_b0 = FUN_012c6b30(param_2,&local_40);
        goto LAB_016739b8;
      }
      break;
    }
  }
LAB_016740f8:
  local_40 = 0x16;
  local_b0 = FUN_012c6b30(param_2,&local_40);
LAB_016739b8:
  local_c8 = local_90;
  local_c4 = local_8c;
  local_c0 = local_88;
  local_bc = local_84;
  uStack_b8 = uStack_80;
  uStack_b4 = uStack_7c;
  goto LAB_01673b58;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(iVar2 + 0x14) = uVar6;
    if (*(uint *)(iVar2 + 0x10) == uVar6) break;
LAB_01673e38:
    uVar12 = *(byte *)(iVar11 + uVar6) - 9;
    if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar11 + uVar6) == 0x22) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(uint *)(iVar2 + 0x14) = uVar6 + 1;
        FUN_01968828(&local_c8,piVar15,iVar2);
        local_dc = local_c4;
        if (local_c8 == 2) goto LAB_01673ca4;
        FUN_0196ad08(&local_90,local_c4,local_c0);
        uVar12 = local_8c;
        uVar6 = local_90;
        if (local_90 != 0) {
          FUN_019664a4(&local_c8,local_90,local_8c);
          if ((char)local_c8 == '\x06') {
            local_dc = FUN_019677a8(local_c4);
            local_e0 = CONCAT31(local_e0._1_3_,6);
          }
          else {
            local_e0 = local_c8;
            local_dc = local_c4;
            uStack_d8 = local_c0;
            local_d4 = local_bc;
            uStack_d0 = uStack_b8;
            uStack_cc = uStack_b4;
          }
          if (uVar12 != 0) {
            thunk_FUN_01be4678(uVar6);
          }
          goto LAB_01673ad0;
        }
        uVar6 = local_8c;
      }
      else {
        uVar6 = FUN_0167432c(iVar2,&local_40);
      }
      local_dc = FUN_0127dee8(uVar6,iVar2);
      goto LAB_01673e74;
    }
  }
LAB_01673e60:
  local_c8 = 5;
  local_dc = FUN_012c6b30(iVar2,&local_c8);
LAB_01673e74:
LAB_01673ca4:
  uVar4 = 6;
LAB_01673acc:
  local_e0 = CONCAT31(local_e0._1_3_,uVar4);
  goto LAB_01673ad0;
LAB_01673d58:
  FUN_01674624(&local_4c,&local_a8);
  uVar3 = local_44;
  uVar6 = local_48;
  iVar2 = local_4c;
  if (local_4c == -0x7fffffff) goto LAB_01673f44;
  if (local_4c == -0x80000000) {
LAB_01673f10:
    FUN_01bed4e2((uint)&local_c8 | 3,local_a0,0xc);
    local_e0 = CONCAT31(local_e0._1_3_,5);
    FUN_01bed4e2((uint)&local_e0 | 1,&local_c8,0xf);
    goto LAB_01673ad0;
  }
  FUN_016746d8(&local_40,&local_a8);
  if ((char)local_40 == '\x06') {
    FUN_019bb7e0(iVar2,uVar6);
    goto LAB_01673f70;
  }
  *puVar8 = local_40;
  puVar8[1] = local_3c;
  puVar8[2] = uStack_38;
  puVar8[3] = uStack_34;
  puVar8[4] = uStack_30;
  puVar8[5] = uStack_2c;
  local_90 = local_c8;
  local_8c = local_c4;
  local_88 = local_c0;
  local_84 = local_bc;
  uStack_80 = uStack_b8;
  uStack_7c = uStack_b4;
  uStack_78 = local_b0;
  if (iVar2 == -0x80000000) goto LAB_01673f10;
  if (iVar2 == -0x7fffffff) {
    local_3c = uVar6;
    goto LAB_01673f70;
  }
  local_6c = uVar3;
  local_70 = uVar6;
  local_74 = iVar2;
  local_68 = *puVar7;
  local_64 = puVar7[1];
  local_60 = puVar7[2];
  uStack_5c = puVar7[3];
  uStack_58 = puVar7[4];
  uStack_54 = puVar7[5];
  FUN_0196b484(&local_c8,local_a0,&local_74);
  FUN_01670878(&local_c8);
  goto LAB_01673d58;
LAB_01673f44:
  local_3c = local_48;
LAB_01673f70:
  local_e0 = CONCAT31(local_e0._1_3_,6);
  local_dc = local_3c;
  FUN_0196afa8(local_a0);
LAB_01673ad0:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar12 = (uint)*(byte *)(*piVar16 + uVar6);
      if (uVar12 < 0xd) {
        if (1 < uVar12 - 9) goto LAB_01674074;
      }
      else if (uVar12 < 0x20) {
        if (uVar12 != 0xd) goto LAB_01674074;
      }
      else if (uVar12 != 0x20) {
        if (uVar12 != 0x7d) {
          if (uVar12 == 0x2c) {
            local_90 = 0x15;
            local_b0 = FUN_012c6b30(param_2,&local_90);
          }
          else {
LAB_01674074:
            local_90 = 0x16;
            local_b0 = FUN_012c6b30(param_2,&local_90);
          }
          goto LAB_01673b48;
        }
        *(uint *)(param_2 + 0x14) = uVar6 + 1;
        local_c8 = local_e0;
        uVar6 = local_c8;
        local_c4 = local_dc;
        local_c0 = uStack_d8;
        local_bc = local_d4;
        uStack_b8 = uStack_d0;
        uStack_b4 = uStack_cc;
        local_c8._0_1_ = (char)local_e0;
        bVar17 = (char)local_c8 == '\x06';
        local_c8 = uVar6;
        if (bVar17) {
LAB_01673bc8:
          local_114 = local_c4;
          uVar4 = 6;
LAB_01673c4c:
          local_118 = CONCAT31(local_118._1_3_,uVar4);
        }
        else {
          local_118 = local_e0;
          local_114 = local_dc;
          local_110 = uStack_d8;
          local_10c = local_d4;
          uStack_108 = uStack_d0;
          uStack_104 = uStack_cc;
        }
        goto LAB_01673c50;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (*(uint *)(param_2 + 0x10) != uVar6);
  }
  local_90 = 3;
  local_b0 = FUN_012c6b30(param_2,&local_90);
LAB_01673b48:
  local_c8 = local_e0;
  local_c4 = local_dc;
  local_c0 = uStack_d8;
  local_bc = local_d4;
  uStack_b8 = uStack_d0;
  uStack_b4 = uStack_cc;
LAB_01673b58:
  if ((char)local_c8 == '\x06') {
    local_114 = local_c4;
    local_118 = CONCAT31(local_118._1_3_,6);
    FUN_01674208();
  }
  else {
    local_118 = CONCAT31(local_118._1_3_,6);
    local_114 = local_b0;
    FUN_00db4764(&local_c8);
  }
LAB_01673c50:
  if ((char)local_118 == '\x06') {
    uVar6 = local_114;
LAB_01673fcc:
    local_e8 = FUN_0127dee8(uVar6,param_2);
LAB_016738f4:
    param_1[1] = local_e8;
LAB_016738fc:
    *(undefined1 *)param_1 = 6;
  }
  else {
LAB_01673c5c:
    *param_1 = local_118;
    param_1[1] = local_114;
    param_1[2] = local_110;
    param_1[3] = local_10c;
    param_1[4] = uStack_108;
    param_1[5] = uStack_104;
  }
  return;
}

