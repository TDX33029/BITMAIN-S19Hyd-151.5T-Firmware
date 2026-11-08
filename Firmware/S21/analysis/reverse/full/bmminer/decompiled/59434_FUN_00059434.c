// FUN_00059434 @ 00059434  size=356  callers=1
// program: bmminer


undefined4 FUN_00059434(void *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uStack_138;
  uint local_134 [7];
  uint local_118;
  uint local_114 [8];
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = &uStack_138;
  memset(local_134,0,0x20);
  memset(local_114,0,0x20);
  if (param_1 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    memcpy(auStack_64,param_1,0x54);
    FUN_0004cd1c(&local_50,0x40);
    local_f4 = local_50;
    uStack_f0 = uStack_4c;
    uStack_ec = uStack_48;
    uStack_e8 = uStack_44;
    local_e4 = local_40;
    uStack_e0 = uStack_3c;
    uStack_dc = uStack_38;
    uStack_d8 = uStack_34;
    local_d4 = local_30;
    uStack_d0 = uStack_2c;
    uStack_cc = uStack_28;
    uStack_c8 = uStack_24;
    local_c4 = local_20;
    uStack_c0 = uStack_1c;
    uStack_bc = uStack_18;
    uStack_b8 = uStack_14;
    FUN_0004d164(&local_50,&local_f4,0x40);
    FUN_0004cd1c(&local_5c,0xc);
    memset(&uStack_e8,0,0x34);
    local_f4 = local_5c;
    uStack_f0 = uStack_58;
    uStack_ec = uStack_54;
    FUN_0004d164(&local_5c,&local_f4,0xc);
    FUN_0004cd1c(&local_60,4);
    local_b4 = local_50;
    uStack_b0 = uStack_4c;
    uStack_ac = uStack_48;
    uStack_a8 = uStack_44;
    local_a4 = local_40;
    uStack_a0 = uStack_3c;
    uStack_9c = uStack_38;
    uStack_98 = uStack_34;
    local_94 = local_30;
    uStack_90 = uStack_2c;
    uStack_8c = uStack_28;
    uStack_88 = uStack_24;
    local_84 = local_20;
    uStack_80 = uStack_1c;
    uStack_7c = uStack_18;
    uStack_78 = uStack_14;
    local_74 = local_5c;
    uStack_70 = uStack_58;
    uStack_6c = uStack_54;
    local_68 = local_60;
    FUN_00033188(&local_b4,0x50,local_134);
    FUN_00033188(local_134,0x20,local_114);
    puVar3 = &local_118;
    do {
      puVar3 = puVar3 + 1;
      uVar4 = *puVar3;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18;
    } while (puVar3 != local_114 + 7);
    uVar1 = 0;
    if (local_118 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

