// FUN_013ca338 @ 013ca338 size=848 calls_out=8 calls_in=1
// strings: 

void FUN_013ca338(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_5f0;
  int iStack_5ec;
  int iStack_5e8;
  int iStack_5e4;
  int iStack_5e0;
  int iStack_5dc;
  int local_5d8;
  int iStack_5d4;
  int iStack_5d0;
  int iStack_5cc;
  int iStack_5c8;
  int iStack_5c4;
  undefined1 auStack_5c0 [344];
  int local_468;
  int local_464;
  undefined1 auStack_460 [348];
  undefined4 local_304;
  undefined2 local_300;
  undefined1 local_2fe;
  undefined2 local_2fc;
  int local_2f8;
  int local_2f4;
  uint local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined4 local_2d4;
  undefined2 local_2d0;
  int local_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  
  uVar3 = *(uint *)(param_2 + 8);
  uVar1 = 0;
  do {
    iVar4 = uVar1 * 0x10;
    uVar1 = uVar1 + 1;
    uVar2 = *(uint *)(param_2 + iVar4 + 0x18);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
  } while (param_3 * 0x10 - 0x10U >> 4 != uVar1);
  local_2d0 = 2;
  local_2d4 = 0x2020100;
  local_2e0 = 0xffffffff;
  local_2d8 = 0;
  local_2dc = 0;
  local_2e4 = 0;
  local_2e8 = 4;
  local_2ec = 0;
  local_2f0 = 0;
  local_2f4 = 4;
  local_2f8 = 0;
  iVar4 = param_2;
  do {
    uVar1 = local_2f0;
    if (local_2d0._1_1_ == '\0') {
      if (local_2f0 < 0x80) {
        if (*(int *)(iVar4 + 8) != 0) {
          FUN_005fd0c0(&local_2f8,*(undefined4 *)(iVar4 + 4));
          goto LAB_013ca3e8;
        }
        bVar6 = local_2f0 != 0;
        local_2d8 = 0;
        local_2d0 = CONCAT11(1,(undefined1)local_2d0);
        local_2f0 = 0;
        if (bVar6) goto LAB_013ca41c;
      }
      else {
LAB_013ca41c:
        local_2d0 = CONCAT11(1,(undefined1)local_2d0);
        local_2d8 = 0;
        local_2f0 = 0;
        puVar5 = (undefined4 *)(local_2f4 + 4);
        do {
          if (puVar5[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          puVar5 = puVar5 + 3;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      local_2e4 = 0;
      local_2e0 = 0xffffffff;
    }
LAB_013ca3e8:
    iVar4 = iVar4 + 0x10;
    if (iVar4 == param_2 + param_3 * 0x10) {
      FUN_005fd574(&local_190,&local_2f8);
      iVar4 = local_2f4;
      if (local_190 == -0x80000000) {
        puVar5 = (undefined4 *)(local_2f4 + 4);
        *param_1 = -0x80000000;
        for (uVar3 = local_2f0; uVar3 != 0; uVar3 = uVar3 - 1) {
          if (puVar5[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          puVar5 = puVar5 + 3;
        }
        if (local_2f8 != 0) {
          thunk_FUN_016d3fb4(iVar4);
        }
        if (local_2ec != 0) {
          thunk_FUN_016d3fb4(local_2e8);
        }
        return;
      }
      local_5f0 = local_190;
      iStack_5ec = iStack_18c;
      iStack_5e8 = iStack_188;
      iStack_5e4 = iStack_184;
      iStack_5e0 = iStack_180;
      iStack_5dc = iStack_17c;
      local_5d8 = local_178;
      iStack_5d4 = iStack_174;
      iStack_5d0 = iStack_170;
      iStack_5cc = iStack_16c;
      iStack_5c8 = iStack_168;
      iStack_5c4 = iStack_164;
      puVar5 = (undefined4 *)(local_2f4 + 4);
      for (uVar1 = local_2f0; uVar1 != 0; uVar1 = uVar1 - 1) {
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 3;
      }
      if (local_2f8 != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
      if (local_2ec != 0) {
        thunk_FUN_016d3fb4(local_2e8);
      }
      local_2fe = 0;
      local_304 = 3;
      local_2fc = 0x102;
      local_300 = 1;
      FUN_013caa30(&local_190,&local_304,param_2,param_3);
      if (local_190 != 1) {
        FUN_016dd1aa(&local_2f8,(uint)&local_190 | 4,0x164);
        FUN_005ee774(&local_468,2,&local_2f8);
        FUN_013c957c(&local_2f8);
        if ((local_468 != 1) &&
           (FUN_016dd1aa(auStack_5c0,auStack_460,0x158), local_464 != -0x80000000)) {
          FUN_016dd1aa(param_1 + 0xd,auStack_5c0,0x158);
          *param_1 = local_5f0;
          param_1[1] = iStack_5ec;
          param_1[2] = iStack_5e8;
          param_1[3] = iStack_5e4;
          param_1[4] = iStack_5e0;
          param_1[5] = iStack_5dc;
          param_1[6] = local_5d8;
          param_1[7] = iStack_5d4;
          param_1[8] = iStack_5d0;
          param_1[9] = iStack_5cc;
          param_1[10] = iStack_5c8;
          param_1[0xb] = iStack_5c4;
          param_1[99] = uVar3;
          param_1[0xc] = local_464;
          return;
        }
      }
      *param_1 = -0x80000000;
      FUN_013a9ad8(&local_5f0);
      return;
    }
  } while( true );
}

