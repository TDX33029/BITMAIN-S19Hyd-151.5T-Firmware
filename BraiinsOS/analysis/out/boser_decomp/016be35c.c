// FUN_016be35c @ 016be35c size=744 calls_out=9 calls_in=1
// strings: 

void FUN_016be35c(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_758;
  int iStack_754;
  int iStack_750;
  int iStack_74c;
  int iStack_748;
  int iStack_744;
  int local_740;
  int iStack_73c;
  int iStack_738;
  int iStack_734;
  int iStack_730;
  int iStack_72c;
  undefined1 auStack_728 [344];
  int local_5d0;
  int local_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 local_46c;
  undefined1 local_468;
  undefined2 local_467;
  undefined2 local_464;
  undefined1 auStack_460 [360];
  undefined4 local_2f8;
  int local_2f4;
  uint local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8;
  undefined4 local_2d4;
  undefined2 local_2d0;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (param_3 != 1) {
    uVar3 = param_3 - 1U & 0xfffffff;
    puVar1 = (uint *)(param_2 + 0x18);
    do {
      if (*puVar1 <= uVar2) {
        uVar2 = *puVar1;
      }
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 4;
    } while (uVar3 != 0);
  }
  local_2d0 = 2;
  local_2d4 = 0x2020100;
  local_2e0 = 0xffffffff;
  local_2dc = 0;
  local_2e4 = 0;
  local_2e8 = 4;
  local_2ec = 0;
  local_2f0 = 0;
  local_2f4 = 4;
  local_2f8 = 0;
  local_2d8 = 0;
  iVar4 = param_2;
  do {
    uVar3 = local_2f0;
    if (local_2d0._1_1_ == '\0') {
      if (local_2f0 < 0x80) {
        if (*(int *)(iVar4 + 8) != 0) {
          FUN_0065f4a8(&local_2f8,*(undefined4 *)(iVar4 + 4));
          goto LAB_016be494;
        }
        local_2d8 = 0;
        puVar5 = (undefined4 *)(local_2f4 + 4);
        local_2d0 = CONCAT11(1,(undefined1)local_2d0);
        local_2f0 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          FUN_0134bd64(puVar5[-1],*puVar5);
          puVar5 = puVar5 + 3;
        }
      }
      else {
        local_2d8 = 0;
        puVar5 = (undefined4 *)(local_2f4 + 4);
        local_2d0 = CONCAT11(1,(undefined1)local_2d0);
        local_2f0 = 0;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          FUN_0134bd64(puVar5[-1],*puVar5);
          puVar5 = puVar5 + 3;
        }
      }
      local_2e4 = 0;
      local_2e0 = 0xffffffff;
    }
LAB_016be494:
    iVar4 = iVar4 + 0x10;
    if (iVar4 == param_2 + param_3 * 0x10) {
      FUN_00660fa8(&local_190,&local_2f8);
      if (local_190 == -0x80000000) {
        *param_1 = -0x80000000;
        FUN_016be684(&local_2f8);
      }
      else {
        puVar5 = (undefined4 *)((uint)&local_758 | 4);
        *puVar5 = local_18c;
        puVar5[1] = local_188;
        puVar5[2] = uStack_184;
        puVar5[3] = uStack_180;
        puVar5[4] = uStack_17c;
        puVar5[5] = local_178;
        puVar5[6] = uStack_174;
        puVar5[7] = uStack_170;
        puVar5[8] = uStack_16c;
        puVar5[9] = uStack_168;
        puVar5[10] = uStack_164;
        local_758 = local_190;
        FUN_016be684(&local_2f8);
        local_46c = 3;
        local_467 = 0;
        local_464 = 0x102;
        local_468 = 1;
        FUN_016a8f48(&local_190,&local_46c,param_2,param_3);
        if (local_190 == 1) {
          puVar5 = (undefined4 *)((uint)&local_2f8 | 4);
          *puVar5 = local_188;
          puVar5[1] = uStack_184;
          puVar5[2] = uStack_180;
          puVar5[3] = uStack_17c;
          puVar5[4] = local_178;
          puVar5[5] = uStack_174;
          local_5c8 = *puVar5;
          uStack_5c4 = puVar5[1];
          uStack_5c0 = puVar5[2];
          uStack_5bc = puVar5[3];
          uStack_5b8 = puVar5[4];
          uStack_5b4 = puVar5[5];
        }
        else {
          FUN_01bed4e2(&local_2f8,(uint)&local_190 | 4,0x164);
          FUN_01bed4e2(auStack_460,&local_2f8,0x164);
          FUN_00657da0(&local_5d0,2,1,auStack_460);
          FUN_016a8eb0(auStack_460);
          if ((local_5d0 == 0) &&
             (FUN_01bed4e2(auStack_728,&local_5c8,0x158), local_5cc != -0x80000000)) {
            FUN_01bed4e2(param_1 + 0xd,auStack_728,0x158);
            *param_1 = local_758;
            param_1[1] = iStack_754;
            param_1[2] = iStack_750;
            param_1[3] = iStack_74c;
            param_1[4] = iStack_748;
            param_1[5] = iStack_744;
            param_1[6] = local_740;
            param_1[7] = iStack_73c;
            param_1[8] = iStack_738;
            param_1[9] = iStack_734;
            param_1[10] = iStack_730;
            param_1[0xb] = iStack_72c;
            param_1[99] = uVar2;
            param_1[0xc] = local_5cc;
            return;
          }
        }
        *param_1 = -0x80000000;
        FUN_016be284(&local_758);
      }
      return;
    }
  } while( true );
}

