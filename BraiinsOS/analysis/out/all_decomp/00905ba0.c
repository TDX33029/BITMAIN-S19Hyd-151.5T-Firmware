// FUN_00905ba0 @ 00905ba0 size=2360 calls_out=20 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x009064d4) */

void FUN_00905ba0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined4 *local_3d0;
  undefined *local_3cc;
  undefined4 *local_3c8;
  undefined4 local_3c4;
  undefined4 *local_3c0;
  undefined **local_3bc;
  undefined4 local_3b8;
  undefined1 auStack_3b0 [184];
  undefined1 auStack_2f8 [88];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined **local_298;
  undefined4 *local_294;
  undefined4 *local_290;
  undefined1 auStack_28c [52];
  int local_258;
  undefined4 local_254;
  int local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_1e0;
  undefined4 *local_1dc;
  undefined4 *local_1d8;
  undefined1 auStack_1d4 [116];
  undefined1 auStack_160 [64];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_100;
  undefined1 local_fc;
  undefined **local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  undefined1 auStack_ec [52];
  int local_b8;
  undefined4 local_b4;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined *local_98;
  undefined4 *local_94;
  
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar7 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar8 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar7);
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar8 == 0x5b) {
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar7 + 1;
            local_fc = 1;
            local_100 = param_2;
            FUN_005e5d80(&local_1e0,&local_100);
            if ((char)local_1e0 == '\x01') {
              local_1d8 = local_1dc;
LAB_00905ed4:
              local_3d0 = local_1d8;
              puVar9 = (undefined4 *)0x0;
              ppuVar10 = (undefined **)&SUB_00000002;
            }
            else {
              if (local_1e0._1_1_ != '\x01') {
                local_1d8 = (undefined4 *)FUN_00f2c2f0(0,&DAT_018673f8,&DAT_018ab990);
                goto LAB_00905ed4;
              }
              FUN_0093cf48(&local_1e0,local_100);
              puVar6 = local_1d8;
              puVar9 = local_1dc;
              ppuVar10 = local_1e0;
              if (local_1e0 == (undefined **)&DAT_00000005 && local_1dc == (undefined4 *)0x0)
              goto LAB_00905ed4;
              FUN_016dd1aa(auStack_28c,auStack_1d4,0x54);
              local_294 = puVar9;
              local_298 = ppuVar10;
              local_290 = puVar6;
              FUN_005e5d80(&local_1e0,&local_100);
              if ((char)local_1e0 == '\x01') {
                local_3d0 = local_1dc;
LAB_009061e4:
                if (local_258 != 0) {
                  thunk_FUN_016d3fb4(local_254);
                }
                FUN_009539c8(local_248,local_244);
                puVar9 = (undefined4 *)0x0;
                ppuVar10 = (undefined **)&SUB_00000002;
                if (local_24c != 0) {
                  thunk_FUN_016d3fb4(local_248);
                }
              }
              else {
                if (local_1e0._1_1_ != '\x01') {
                  local_3d0 = (undefined4 *)FUN_00f2c2f0(1,&DAT_018673f8,&DAT_018ab990);
                  goto LAB_009061e4;
                }
                FUN_00907600(&local_1e0,local_100);
                local_3d0 = local_1d8;
                if (local_1e0 == (undefined **)&SUB_00000002 && local_1dc == (undefined4 *)0x0)
                goto LAB_009061e4;
                FUN_016dd1aa(&local_98,auStack_1d4,0x74);
                FUN_016dd1aa(auStack_2f8,&local_298,0x60);
                puVar9 = local_1dc;
                ppuVar10 = local_1e0;
              }
            }
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            local_1e0 = ppuVar10;
            local_1dc = puVar9;
            local_1d8 = local_3d0;
            FUN_016dd1aa(auStack_1d4,&local_98,0x74);
            FUN_016dd1aa(auStack_160,auStack_2f8,0x60);
            puVar6 = (undefined4 *)FUN_008fad50(param_2);
            FUN_016dd1aa(&local_298,auStack_1d4,0xb4);
            if (ppuVar10 == (undefined **)&SUB_00000002 && puVar9 == (undefined4 *)0x0) {
              if (puVar6 == (undefined4 *)0x0) goto LAB_00906454;
              FUN_005c3974(puVar6);
              goto LAB_009062cc;
            }
            local_3c8 = (undefined4 *)local_114;
            if (puVar6 == (undefined4 *)0x0) {
              local_3c4 = local_10c;
              local_3c0 = (undefined4 *)local_120;
              local_3bc = (undefined **)local_11c;
              FUN_016dd1aa(auStack_3b0,&local_298,0xb4);
              local_3b8 = local_2a0;
              goto LAB_00906384;
            }
            if (local_120 != 0) {
              thunk_FUN_016d3fb4(local_11c);
            }
            FUN_009539c8(local_110,local_10c);
            local_3d0 = puVar6;
            if (local_114 != 0) goto LAB_00906338;
            goto LAB_00906454;
          }
        }
        else {
          if (uVar8 != 0x7b) {
            local_3d0 = (undefined4 *)FUN_005b8238(param_2,&local_1e0,&DAT_018674b8);
            goto LAB_00906454;
          }
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar7 + 1;
            local_fc = 1;
            ppuVar10 = (undefined **)&SUB_00000002;
            local_3bc = (undefined **)&DAT_00000005;
            puVar9 = (undefined4 *)0x0;
            local_3cc = &DAT_003e8a15;
            local_3c0 = (undefined4 *)0x0;
            local_100 = param_2;
            goto LAB_00905c94;
          }
        }
        local_1e0 = (undefined **)0x18;
        goto LAB_00905bf8;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
    } while (*(uint *)(param_2 + 0x10) != uVar7);
  }
  local_1e0 = (undefined **)0x5;
LAB_00905bf8:
  uVar4 = FUN_008f9984(param_2,&local_1e0);
  goto LAB_00905c08;
LAB_00905c94:
  FUN_008fa450(&local_1e0,&local_100);
  iVar2 = local_100;
  if ((char)local_1e0 != '\x01') {
    if (local_1e0._1_1_ != '\x01') {
      local_f0 = local_3c8;
      local_f8 = local_3bc;
      local_f4 = local_3c0;
      if (local_3bc == (undefined **)&DAT_00000005 && local_3c0 == (undefined4 *)0x0) {
        local_1dc = &DAT_0157d360;
        local_1e0 = &local_98;
        local_94 = (undefined4 *)0x5;
        local_98 = &DAT_0035b9db;
        local_3d0 = (undefined4 *)FUN_00f56780(&DAT_0057a25d,&local_1e0);
        puVar9 = (undefined4 *)0x0;
        ppuVar10 = (undefined **)&SUB_00000002;
      }
      else if (ppuVar10 == (undefined **)&SUB_00000002 && puVar9 == (undefined4 *)0x0) {
        local_1dc = &DAT_0157d360;
        local_1e0 = &local_98;
        local_94 = (undefined4 *)0x6;
        local_98 = &DAT_003e8a15;
        local_3d0 = (undefined4 *)FUN_00f56780(&DAT_0057a25d,&local_1e0);
        puVar9 = (undefined4 *)0x0;
        FUN_008f99e0(&local_f8);
        ppuVar10 = (undefined **)&SUB_00000002;
      }
      else {
        FUN_016dd1aa(&local_98,&local_298,0x74);
        FUN_016dd1aa(auStack_2f8,&local_f8,0x60);
      }
      goto LAB_0090624c;
    }
    *(undefined4 *)(local_100 + 8) = 0;
    *(int *)(local_100 + 0x14) = *(int *)(local_100 + 0x14) + 1;
    FUN_0157e384(&local_1e0,local_100 + 0xc,local_100);
    puVar1 = local_1d8;
    puVar6 = local_1dc;
    if (local_1e0 == (undefined **)&SUB_00000002) goto LAB_00905ffc;
    if (local_1d8 == (undefined4 *)0x6) {
      iVar5 = thunk_FUN_016dd50a(local_1dc,&DAT_003e8a15,6);
      if (iVar5 == 0) {
        if (ppuVar10 != (undefined **)&SUB_00000002 || puVar9 != (undefined4 *)0x0)
        goto LAB_00906470;
        puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
        if (puVar6 != (undefined4 *)0x0) goto LAB_00905ffc;
        FUN_00907600(&local_1e0,iVar2);
        puVar9 = local_1dc;
        ppuVar10 = local_1e0;
        puVar6 = local_1d8;
        if (local_1e0 == (undefined **)&SUB_00000002 && local_1dc == (undefined4 *)0x0)
        goto LAB_00905ffc;
        local_3d0 = local_1d8;
        FUN_016dd1aa(&local_298,auStack_1d4,0x74);
        goto LAB_00905c94;
      }
    }
    else if ((local_1d8 == (undefined4 *)0x5) &&
            (iVar5 = thunk_FUN_016dd50a(local_1dc,&DAT_0035b9db,5), iVar5 == 0)) {
      if (local_3bc != (undefined **)&DAT_00000005 || local_3c0 != (undefined4 *)0x0) {
        local_3cc = &DAT_0035b9db;
LAB_00906470:
        local_f8 = local_3bc;
        local_f0 = local_3c8;
        local_1dc = &DAT_0157d360;
        local_1e0 = &local_98;
        local_f4 = local_3c0;
        local_94 = puVar1;
        local_98 = local_3cc;
        local_3d0 = (undefined4 *)FUN_00f56780(&DAT_00582dbd,&local_1e0);
        goto LAB_00906024;
      }
      puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_0093cf48(&local_1e0,iVar2);
        puVar6 = local_1d8;
        local_3bc = local_1e0;
        local_3c0 = local_1dc;
        if (local_1e0 != (undefined **)&DAT_00000005 || local_1dc != (undefined4 *)0x0) {
          FUN_016dd1aa(&local_98,auStack_1d4,0x54);
          FUN_016dd1aa(auStack_ec,&local_98,0x54);
          local_3c8 = puVar6;
          goto LAB_00905c94;
        }
      }
      puVar9 = (undefined4 *)0x0;
      local_f8 = (undefined **)&DAT_00000005;
      ppuVar10 = (undefined **)&SUB_00000002;
      local_f4 = (undefined4 *)0x0;
      local_f0 = local_3c8;
      local_3d0 = puVar6;
      goto LAB_0090624c;
    }
    puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
    if ((puVar6 != (undefined4 *)0x0) ||
       (puVar6 = (undefined4 *)FUN_008f9ac0(iVar2), puVar6 != (undefined4 *)0x0)) goto LAB_00905ffc;
    goto LAB_00905c94;
  }
  puVar6 = local_1dc;
LAB_00905ffc:
  local_f8 = local_3bc;
  local_f0 = local_3c8;
  local_f4 = local_3c0;
  local_3d0 = puVar6;
LAB_00906024:
  ppuVar10 = (undefined **)&SUB_00000002;
  puVar9 = (undefined4 *)0x0;
  if (local_3bc != (undefined **)&DAT_00000005 || local_3c0 != (undefined4 *)0x0) {
    if (local_b8 != 0) {
      thunk_FUN_016d3fb4(local_b4);
    }
    FUN_009539c8(local_a8,local_a4);
    if (local_ac != 0) {
      thunk_FUN_016d3fb4(local_a8);
    }
  }
LAB_0090624c:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_1e0 = ppuVar10;
  local_1dc = puVar9;
  local_1d8 = local_3d0;
  FUN_016dd1aa(auStack_1d4,&local_98,0x74);
  FUN_016dd1aa(auStack_160,auStack_2f8,0x60);
  puVar6 = (undefined4 *)FUN_008fb5ec(param_2);
  FUN_016dd1aa(&local_298,auStack_1d4,0xb4);
  if (ppuVar10 == (undefined **)&SUB_00000002 && puVar9 == (undefined4 *)0x0) {
    if (puVar6 != (undefined4 *)0x0) {
      FUN_005c3974(puVar6);
LAB_009062cc:
      thunk_FUN_016d3fb4(puVar6);
    }
  }
  else {
    local_3c8 = (undefined4 *)local_114;
    if (puVar6 == (undefined4 *)0x0) {
      local_3c4 = local_10c;
      local_3bc = (undefined **)local_11c;
      local_3c0 = (undefined4 *)local_120;
      FUN_016dd1aa(auStack_3b0,&local_298,0xb4);
      local_3b8 = local_2a0;
LAB_00906384:
      if (ppuVar10 != (undefined **)&SUB_00000002 || puVar9 != (undefined4 *)0x0) {
        FUN_016dd1aa(param_1 + 3,auStack_3b0,0xb4);
        param_1[0x30] = local_3c0;
        param_1[0x31] = local_3bc;
        *param_1 = ppuVar10;
        param_1[1] = puVar9;
        param_1[2] = local_3d0;
        param_1[0x32] = local_118;
        param_1[0x33] = local_3c8;
        param_1[0x34] = local_110;
        param_1[0x35] = local_3c4;
        param_1[0x36] = local_3b8;
        param_1[0x37] = uStack_29c;
        return;
      }
    }
    else {
      if (local_120 != 0) {
        thunk_FUN_016d3fb4();
      }
      FUN_009539c8(local_110,local_10c);
      local_3d0 = puVar6;
      if (local_114 != 0) {
LAB_00906338:
        thunk_FUN_016d3fb4(local_110);
        local_3d0 = puVar6;
      }
    }
  }
LAB_00906454:
  uVar4 = FUN_00e959bc(local_3d0,param_2);
LAB_00905c08:
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
}

