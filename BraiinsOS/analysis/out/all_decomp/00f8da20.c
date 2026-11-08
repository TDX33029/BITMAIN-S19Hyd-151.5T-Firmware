// FUN_00f8da20 @ 00f8da20 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_00f8da20(undefined4 param_1,int param_2)

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
  FUN_00f991dc(&local_2c,0,0x39,1,1);
  iVar3 = local_24;
  FUN_016dd1aa(local_28 + local_24,&DAT_0035da00,0x39);
  iVar2 = local_28;
  uVar1 = local_2c;
  iVar3 = iVar3 + 0x39;
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

