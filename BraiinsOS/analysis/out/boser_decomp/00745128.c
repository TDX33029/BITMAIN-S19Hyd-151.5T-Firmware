// FUN_00745128 @ 00745128 size=128 calls_out=2 calls_in=0
// strings: LinkedList

void FUN_00745128(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  iVar2 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"LinkedList",10);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,&DAT_0056e2e0,4,iVar2,FUN_00744f64);
  FUN_01302c38(uVar1,&DAT_0056e0f8,4,iVar2 + 4,FUN_00744f64);
  FUN_01302e1c();
  return;
}

