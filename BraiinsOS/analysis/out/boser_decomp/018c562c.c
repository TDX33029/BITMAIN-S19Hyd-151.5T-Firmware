// FUN_018c562c @ 018c562c size=252 calls_out=6 calls_in=1
// strings: 

void FUN_018c562c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_1c4 [68];
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [104];
  undefined1 local_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  
  local_40 = *(undefined4 *)(param_2 + 0xc0);
  local_3c = *(undefined4 *)(param_2 + 0xc4);
  local_38 = *(undefined4 *)(param_2 + 200);
  local_80 = *(undefined4 *)(param_2 + 0x80);
  uStack_7c = *(undefined4 *)(param_2 + 0x84);
  uStack_78 = *(undefined4 *)(param_2 + 0x88);
  uStack_74 = *(undefined4 *)(param_2 + 0x8c);
  uStack_70 = *(undefined4 *)(param_2 + 0x90);
  local_6c = *(undefined4 *)(param_2 + 0x94);
  uStack_68 = *(undefined4 *)(param_2 + 0x98);
  uStack_64 = *(undefined4 *)(param_2 + 0x9c);
  uStack_60 = *(undefined4 *)(param_2 + 0xa0);
  uStack_5c = *(undefined4 *)(param_2 + 0xa4);
  local_58 = *(undefined4 *)(param_2 + 0xa8);
  uStack_54 = *(undefined4 *)(param_2 + 0xac);
  uStack_50 = *(undefined4 *)(param_2 + 0xb0);
  uStack_4c = *(undefined4 *)(param_2 + 0xb4);
  uStack_48 = *(undefined4 *)(param_2 + 0xb8);
  uStack_44 = *(undefined4 *)(param_2 + 0xbc);
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  FUN_01bed4e2(&local_100,param_2,0x80);
  local_30 = uVar1;
  FUN_0189039c(auStack_1c4,&local_100);
  FUN_018d6178(auStack_fc,param_1,auStack_1c4,&DAT_005210ba);
  local_94 = 0xe;
  local_100 = 0x80000011;
  FUN_018e1c0c(&local_180,&local_100);
  local_104 = 4;
  if (-1 < local_180) {
    FUN_018dc0bc(param_2,local_17c,local_178);
  }
  FUN_01bed4e2(&local_100,&local_180,0x80);
  FUN_018e077c(param_3,&local_100,1);
  return;
}

