// FUN_00f1399c @ 00f1399c size=756 calls_out=7 calls_in=1
// strings: 

void FUN_00f1399c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r5;
  undefined4 *puVar3;
  undefined4 *unaff_r7;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r11;
  undefined4 local_3c8;
  undefined4 *local_3c4;
  undefined4 *local_3c0;
  undefined4 local_3bc;
  undefined1 auStack_3b8 [224];
  undefined1 auStack_2d8 [224];
  undefined4 *local_1f8;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  undefined1 auStack_1ec [84];
  int local_198;
  undefined4 local_194;
  int local_170;
  undefined4 local_16c;
  int local_148;
  undefined4 local_144;
  int local_120;
  undefined4 local_11c;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 local_104 [56];
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  puVar3 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar3[1] == 0) {
    local_108 = (undefined4 *)&DAT_00000001;
    local_10c = (undefined4 *)0x2501;
    local_110 = (undefined4 *)0x80000000;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00f13b24:
    *puVar2 = local_110;
    puVar2[1] = local_10c;
    puVar2[2] = local_108;
    goto LAB_00f13b3c;
  }
  puVar3[1] = puVar3[1] + -1;
  uVar1 = (uint)*(byte *)*puVar3;
  *puVar3 = (byte *)*puVar3 + 1;
  if (uVar1 == 0) {
    puVar4 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)&SUB_00000002;
LAB_00f13ab8:
    FUN_016dd1aa(param_1 + 3,auStack_3b8,0xdc);
    param_1[0x3c] = local_3c0;
    param_1[0x3a] = unaff_r11;
    param_1[0x3d] = local_3c8;
    param_1[0x3e] = puVar3;
    param_1[0x3f] = local_3c4;
    param_1[0x3b] = local_3bc;
    param_1[0x40] = unaff_r7;
    *param_1 = puVar5;
    param_1[1] = puVar4;
    param_1[2] = unaff_r5;
    return;
  }
  if (uVar1 != 1) {
    local_110 = (undefined4 *)&DAT_80000004;
    local_10c = (undefined4 *)uVar1;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    goto LAB_00f13b24;
  }
  FUN_00e72308(&local_110,puVar3);
  unaff_r5 = local_108;
  puVar4 = local_10c;
  puVar5 = local_110;
  puVar2 = local_108;
  if (local_110 == (undefined4 *)&SUB_00000002 && local_10c == (undefined4 *)0x0) goto LAB_00f13b3c;
  FUN_016dd1aa(auStack_1ec,local_104,0xdc);
  local_1f4 = puVar4;
  local_1f8 = puVar5;
  local_1f0 = unaff_r5;
  FUN_00eaa488(&local_110,puVar3);
  unaff_r7 = local_108;
  local_3c4 = local_10c;
  puVar2 = local_110;
  if (local_108 == (undefined4 *)0x3b9aca01) {
  }
  else {
    FUN_00efbe38(&local_110,puVar3);
    unaff_r11 = local_108;
    if (local_110 != (undefined4 *)&DAT_00000001) {
      local_3bc = local_104[0];
      FUN_00efbe38(&local_110,puVar3);
      if (local_110 != (undefined4 *)&DAT_00000001) {
        local_3c0 = local_108;
        local_3c8 = local_104[0];
        FUN_016dd1aa(auStack_2d8,auStack_1ec,0xdc);
        FUN_016dd1aa(auStack_3b8,auStack_2d8,0xdc);
        puVar3 = puVar2;
        goto LAB_00f13ab8;
      }
    }
    puVar2 = local_10c;
  }
  if (local_198 == -0x80000000 || local_198 == 0) {
    if (local_170 == -0x80000000 || local_170 == 0) goto LAB_00f13bc8;
LAB_00f13c0c:
    thunk_FUN_016d3fb4(local_16c);
    if (local_148 != -0x80000000 && local_148 != 0) goto LAB_00f13c24;
LAB_00f13bd8:
    if (local_120 == -0x80000000 || local_120 == 0) goto LAB_00f13b3c;
  }
  else {
    thunk_FUN_016d3fb4(local_194);
    if (local_170 != -0x80000000 && local_170 != 0) goto LAB_00f13c0c;
LAB_00f13bc8:
    if (local_148 == -0x80000000 || local_148 == 0) goto LAB_00f13bd8;
LAB_00f13c24:
    thunk_FUN_016d3fb4(local_144);
    if (local_120 == -0x80000000 || local_120 == 0) goto LAB_00f13b3c;
  }
  thunk_FUN_016d3fb4(local_11c);
LAB_00f13b3c:
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = puVar2;
  return;
}

