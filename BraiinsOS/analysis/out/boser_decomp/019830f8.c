// FUN_019830f8 @ 019830f8 size=600 calls_out=4 calls_in=5
// strings: 

undefined4 FUN_019830f8(byte *param_1,int param_2,char *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  int local_120;
  byte *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 local_100;
  undefined1 local_fe;
  byte *local_f8;
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
  char local_a2;
  byte *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined1 uStack_83;
  char cStack_82;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *local_68;
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
  
  bVar8 = param_2 != 0;
  uVar5 = 0;
  if (bVar8) {
    uVar5 = (uint)*param_1;
  }
  local_c2 = false;
  cVar7 = '\x06';
  if (bVar8) {
    uVar5 = uVar5 - 0x2f;
  }
  local_d8 = 6;
  if (param_4 != 0) {
    local_c2 = *param_3 == '/';
  }
  local_c4 = 0x201;
  local_120 = param_2;
  local_e0 = param_3;
  local_dc = param_4;
  uVar1 = 2;
  uVar2 = 1;
  cVar6 = bVar8 && uVar5 == 0;
  while( true ) {
    local_bc = local_120;
    local_c0 = param_1;
    local_b8 = cVar7;
    FUN_01bed4e2(auStack_b7,&local_a0,0x13);
    local_a4 = uVar2;
    local_a3 = uVar1;
    local_a2 = cVar6;
    FUN_0199f1dc(&local_68,&local_c0);
    FUN_0199f1dc(&local_48,&local_e0);
    local_a0 = local_68;
    local_9c = uStack_64;
    local_98 = uStack_60;
    local_94 = local_5c;
    local_90 = uStack_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    uStack_80 = uStack_44;
    uStack_7c = uStack_40;
    local_78 = local_3c;
    uStack_74 = uStack_38;
    uStack_70 = uStack_34;
    uStack_6c = uStack_30;
    if ((char)local_68 == '\n') break;
    if ((local_48 & 0xff) == 10) goto LAB_019832c4;
    iVar3 = FUN_0199f550(&local_a0,&local_84);
    cVar7 = local_b8;
    param_1 = local_c0;
    if (iVar3 == 0) {
      return 0;
    }
    local_120 = local_bc;
    FUN_01bed4e2(&local_f8,auStack_b7,0x13);
    uVar1 = local_a3;
    uVar2 = local_a4;
    cVar6 = local_a2;
    if (cVar7 != '\x06') {
      local_a0 = local_f8;
      local_9c = uStack_f4;
      local_98 = uStack_f0;
      local_94 = uStack_ec;
      local_90._0_3_ = CONCAT12(local_e6,local_e8);
    }
  }
  if ((local_48 & 0xff) == 10) {
LAB_019832c4:
    local_110 = local_f8;
    uStack_10c = uStack_f4;
    uStack_108 = uStack_f0;
    uStack_104 = uStack_ec;
    local_100 = local_e8;
    local_fe = local_e6;
    if (cVar6 != '\x02') {
      FUN_01bed4e2((int)&local_98 + 1,&local_110,0x13);
      local_98 = CONCAT31(local_98._1_3_,cVar7);
      local_9c = local_120;
      local_a0 = param_1;
      local_84 = uVar2;
      uStack_83 = uVar1;
      cStack_82 = cVar6;
      uVar4 = FUN_0198294c(&local_a0);
      return uVar4;
    }
  }
  return 0;
}

