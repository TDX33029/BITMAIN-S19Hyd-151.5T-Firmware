// FUN_019afb44 @ 019afb44 size=456 calls_out=3 calls_in=3
// strings: 

bool FUN_019afb44(byte *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  uint local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  char *local_e0;
  int local_dc;
  undefined1 local_d8;
  undefined2 local_c4;
  undefined1 local_c2;
  byte *local_c0;
  int local_bc;
  char local_b8;
  undefined1 auStack_b7 [19];
  undefined1 local_a4;
  undefined1 local_a3;
  byte local_a2;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  bVar6 = param_2 != 0;
  uVar3 = 0;
  local_fc = 0;
  local_c2 = false;
  if (bVar6) {
    uVar3 = (uint)*param_1;
  }
  if (bVar6) {
    uVar3 = uVar3 - 0x2f;
  }
  if (bVar6) {
    uVar3 = LZCOUNT(uVar3);
  }
  local_d8 = 6;
  if (bVar6) {
    local_fc = uVar3 >> 5;
  }
  if (param_4 != 0) {
    local_c2 = *param_3 == '/';
  }
  local_c4 = 0x201;
  uVar5 = 2;
  uVar4 = 1;
  local_e0 = param_3;
  local_dc = param_4;
  local_b8 = '\x06';
  do {
    local_c0 = param_1;
    local_bc = param_2;
    FUN_01bed4e2(auStack_b7,&local_a0,0x13);
    local_a2 = (byte)local_fc;
    local_a4 = uVar4;
    local_a3 = uVar5;
    FUN_0199f1dc(&local_68,&local_c0);
    FUN_0199f1dc(&local_48,&local_e0);
    local_a0 = local_68;
    uStack_9c = uStack_64;
    uStack_98 = uStack_60;
    local_94 = local_5c;
    local_90 = uStack_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    local_84 = local_48;
    uStack_80 = uStack_44;
    uStack_7c = uStack_40;
    local_78 = local_3c;
    uStack_74 = uStack_38;
    uStack_70 = uStack_34;
    uStack_6c = uStack_30;
    if ((local_68 & 0xff) == 10) {
      if ((local_48 & 0xff) != 10) {
        local_fc = 2;
      }
LAB_019afcf4:
      return (local_fc & 0xff) != 2;
    }
    if ((local_48 & 0xff) == 10) goto LAB_019afcf4;
    iVar2 = FUN_0199f550(&local_a0);
    cVar1 = local_b8;
    param_2 = local_bc;
    param_1 = local_c0;
    if (iVar2 == 0) {
      local_fc = 2;
      goto LAB_019afcf4;
    }
    FUN_01bed4e2(&local_f8,auStack_b7,0x13);
    local_fc = (uint)local_a2;
    uVar5 = local_a3;
    uVar4 = local_a4;
    local_b8 = cVar1;
    if (cVar1 != '\x06') {
      local_a0 = local_f8;
      uStack_9c = uStack_f4;
      uStack_98 = uStack_f0;
      local_94 = uStack_ec;
      local_90._0_3_ = CONCAT12(local_e6,local_e8);
    }
  } while( true );
}

