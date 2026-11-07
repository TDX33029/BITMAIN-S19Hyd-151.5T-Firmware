// FUN_007b8414 @ 007b8414 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_007b8414(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_2c = 0;
  local_28 = 1;
  FUN_00f991dc(&local_2c,0,param_4,1,1);
  iVar3 = local_24;
  FUN_016dd1aa(local_28 + local_24,param_3,param_4);
  iVar2 = local_28;
  uVar1 = local_2c;
  iVar3 = iVar3 + param_4;
  local_24 = iVar3;
  if ((*(uint *)(param_2 + 0xa4) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xa8));
  }
  *(undefined4 *)(param_2 + 0xa4) = uVar1;
  *(int *)(param_2 + 0xa8) = iVar2;
  *(int *)(param_2 + 0xac) = iVar3;
  FUN_016dd1aa(param_1,param_2,0x16c);
  return;
}

