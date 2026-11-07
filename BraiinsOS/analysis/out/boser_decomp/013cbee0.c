// FUN_013cbee0 @ 013cbee0 size=280 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013cbee0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *local_80;
  int local_7c;
  undefined4 local_78;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  int local_50;
  code *local_4c;
  int local_48;
  code *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  int **local_38;
  undefined1 *local_34;
  int **local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 *local_24;
  
  iVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_006643f0(&local_7c,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  local_80 = &local_7c;
  FUN_006643f0(&local_6c,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50));
  local_70 = &local_6c;
  FUN_006643f0(&local_5c,*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  local_48 = iVar1 + 0x5e;
  local_50 = iVar1 + 0x5c;
  local_24 = &LAB_013cad1c;
  local_30 = &local_60;
  local_38 = &local_70;
  local_2c = &LAB_0193a90c;
  local_34 = &LAB_0193a90c;
  local_3c = &LAB_0193a90c;
  local_44 = FUN_012fcf18;
  local_4c = FUN_012fcf18;
  local_60 = &local_5c;
  local_40 = (undefined1 *)&local_80;
  local_28 = iVar1;
  uVar2 = FUN_012fa178(uVar2,uVar3,&DAT_00571318,&local_50);
  if (local_5c != -0x80000000) {
    FUN_019bb7e0(local_5c,local_58);
  }
  if (local_6c != -0x80000000) {
    FUN_019bb7e0(local_6c,local_68);
  }
  if (local_7c != -0x80000000) {
    FUN_019bb7e0(local_7c,local_78);
  }
  return uVar2;
}

