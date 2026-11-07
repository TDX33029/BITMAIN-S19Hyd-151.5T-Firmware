// FUN_013d901c @ 013d901c size=200 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013d901c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte local_49;
  int local_48;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  byte *local_30;
  code *local_2c;
  int *local_28;
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  
  iVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  local_49 = *(byte *)(iVar1 + 0x75) & 0x7f | *(char *)(iVar1 + 0x74) << 7;
  FUN_006643f0(&local_48,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  FUN_006643f0(&local_3c,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
  local_30 = &local_49;
  local_1c = &LAB_012b97d8;
  local_24 = &LAB_012b97d8;
  local_2c = FUN_012fcc70;
  local_28 = &local_48;
  local_20 = &local_3c;
  uVar2 = FUN_012fa178(uVar2,uVar3,&DAT_00580b8e,&local_30);
  if (local_3c != -0x80000000) {
    FUN_019bb7e0(local_3c,local_38);
  }
  if (local_48 != -0x80000000) {
    FUN_019bb7e0(local_48,local_44);
  }
  return uVar2;
}

