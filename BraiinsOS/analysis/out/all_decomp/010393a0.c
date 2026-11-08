// FUN_010393a0 @ 010393a0 size=200 calls_out=5 calls_in=4
// strings: 

void FUN_010393a0(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  short local_78 [2];
  int local_74;
  undefined4 local_70;
  short local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_016dd606(local_78,0,0x41);
  FUN_0103947c(&local_30,param_2,local_78,0);
  if ((char)local_30 == '\a') {
    FUN_016dd1aa(param_1,local_78,0x44);
    return;
  }
  local_20 = local_30;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  uVar2 = FUN_0104f1e0(&local_20);
  *param_1 = 2;
  *(undefined4 *)(param_1 + 2) = uVar2;
  if (local_78[0] != 0 && local_74 != 0) {
    thunk_FUN_016d3fb4(local_70);
  }
  iVar1 = 0;
  if (local_54 != 0) {
    iVar1 = local_50;
  }
  if (local_54 != 0 && iVar1 != 0) {
    thunk_FUN_016d3fb4(local_4c);
    return;
  }
  return;
}

