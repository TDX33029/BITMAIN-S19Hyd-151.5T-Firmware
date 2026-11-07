// FUN_018fe844 @ 018fe844 size=192 calls_out=0 calls_in=2
// strings: res binder | tls13 

void FUN_018fe844(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  code *pcVar4;
  ushort local_54;
  char local_52;
  undefined1 local_51;
  ushort *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  puVar3 = (&PTR_s_res_binder_01d33efc)[param_4 & 0xff];
  uVar2 = *(undefined4 *)(&DAT_00538ad4 + (param_4 & 0xff) * 4);
  uVar1 = (**(code **)(param_3 + 0x14))(param_2);
  local_54 = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  local_52 = (char)uVar2 + '\x06';
  local_28 = param_5;
  local_30 = &local_51;
  local_51 = (undefined1)param_6;
  local_24 = param_6;
  uStack_44 = 1;
  pcStack_40 = "tls13 ";
  uStack_3c = 6;
  local_2c = 1;
  local_48 = &local_52;
  local_4c = 2;
  local_50 = &local_54;
  local_38 = puVar3;
  local_34 = uVar2;
  (*pcVar4)(param_1,param_2,&local_50,6);
  return;
}

