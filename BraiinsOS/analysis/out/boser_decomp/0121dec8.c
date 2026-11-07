// FUN_0121dec8 @ 0121dec8 size=744 calls_out=10 calls_in=2
// strings: 

void FUN_0121dec8(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  uint local_170;
  int iStack_16c;
  uint uStack_168;
  uint local_160;
  int iStack_15c;
  uint uStack_158;
  undefined1 *local_150;
  uint local_14c;
  int iStack_148;
  uint uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  int local_134;
  uint local_130;
  uint local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_104;
  undefined1 **local_100;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_e8 [18];
  uint local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 **ppuStack_78;
  int local_70 [19];
  
  FUN_019cad28(&local_a0);
  iVar4 = local_9c;
  puVar6 = param_1 + 1;
  if (((char)local_a0 == '\x04') || ((local_a0 & 0xff) == 4)) {
    local_180 = local_9c;
    local_174 = 0;
    local_178 = 1;
    local_17c = 0;
    FUN_01980288(&local_a0,&local_180,&local_17c);
    iVar1 = local_178;
    if (((char)local_a0 == '\x04') || ((local_a0 & 0xff) == 4)) {
      local_100 = &local_150;
      local_150 = &DAT_80000016;
      local_110 = CONCAT31(local_110._1_3_,1);
      local_104 = local_104 & 0xffff0000;
      local_108 = local_174;
      local_10c = 0;
      local_114 = 10;
      local_118 = local_174;
      local_11c = 0;
      local_120 = local_174;
      local_124 = local_178;
      local_128 = 10;
      FUN_0121d44c(local_e8,&local_128);
      if (local_e8[0] == 2) {
        local_130 = 0;
        local_134 = 4;
        local_138 = 0;
      }
      else {
        iVar5 = thunk_FUN_01be5118(0x120);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x120);
        }
        FUN_01bed4e2(iVar5,local_e8,0x48);
        local_f8 = 4;
        local_f0 = 1;
        local_a0 = local_128;
        local_9c = local_124;
        uStack_98 = local_120;
        uStack_94 = local_11c;
        uStack_90 = local_118;
        iVar7 = 0x48;
        local_8c = local_114;
        uStack_88 = local_110;
        uStack_84 = local_10c;
        uStack_80 = local_108;
        uStack_7c = local_104;
        ppuStack_78 = local_100;
        local_f4 = iVar5;
        while (uVar3 = local_f0, FUN_0121d44c(local_70,&local_a0), local_70[0] != 2) {
          if (uVar3 == local_f8) {
            FUN_0132b898(&local_f8,uVar3,1,4,0x48);
            iVar5 = local_f4;
          }
          FUN_01bed4e2(iVar5 + iVar7,local_70,0x48);
          local_f0 = uVar3 + 1;
          iVar7 = iVar7 + 0x48;
        }
        local_138 = local_f8;
        local_134 = local_f4;
        local_130 = local_f0;
      }
      puVar2 = local_150;
      if (local_150 == &DAT_80000016) {
        local_160 = local_138;
        iStack_15c = local_134;
        uStack_158 = local_130;
        local_170 = local_138;
        iStack_16c = local_134;
        uStack_168 = local_130;
        *puVar6 = local_138;
        param_1[2] = local_134;
        param_1[3] = local_130;
        *param_1 = &DAT_80000016;
      }
      else {
        local_160 = local_14c;
        iStack_15c = iStack_148;
        uStack_158 = uStack_144;
        FUN_00b6baf0(&local_138);
        local_170 = local_160;
        iStack_16c = iStack_15c;
        uStack_168 = uStack_158;
        *puVar6 = local_160;
        param_1[2] = iStack_15c;
        param_1[3] = uStack_158;
        param_1[4] = local_140;
        param_1[5] = local_13c;
        *param_1 = puVar2;
      }
    }
    else {
      *param_1 = 0x80000002;
      *puVar6 = local_a0;
      param_1[2] = local_9c;
    }
    FUN_019bb7e0(local_17c,iVar1);
    FUN_01bf01d6(iVar4);
  }
  else {
    *puVar6 = local_a0;
    param_1[2] = local_9c;
    *param_1 = 0x80000002;
  }
  return;
}

