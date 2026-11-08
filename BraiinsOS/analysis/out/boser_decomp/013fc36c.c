// FUN_013fc36c @ 013fc36c size=128 calls_out=2 calls_in=0
// strings: 

void FUN_013fc36c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  iVar2 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00475dcc,7);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,&DAT_0056f57c,4,iVar2 + 4,FUN_00744f64);
  FUN_01302c38(uVar1,&DAT_0056d968,4,iVar2 + 8,FUN_00744f64);
  FUN_01302e1c();
  return;
}

