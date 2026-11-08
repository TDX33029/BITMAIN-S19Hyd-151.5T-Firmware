// FUN_0070a17c @ 0070a17c size=216 calls_out=2 calls_in=0
// strings: status | headers

void FUN_0070a17c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_14;
  undefined1 local_11;
  
  iVar2 = *param_1;
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570318,8);
  local_17 = 0;
  local_14 = *(undefined2 *)(iVar2 + 0x44);
  local_1c = param_2;
  uVar1 = FUN_01302c38(&local_1c,"status",6,&local_14,FUN_01414020);
  local_11 = *(undefined1 *)(iVar2 + 0x46);
  uVar1 = FUN_01302c38(uVar1,&DAT_00520eda,7,&local_11,&LAB_0141457c);
  uVar1 = FUN_01302c38(uVar1,"headers",7,iVar2,FUN_014147b4);
  FUN_01302c38(uVar1,&DAT_0056cbc4,4,iVar2 + 0x48,FUN_0070a278);
  FUN_01302e1c();
  return;
}

