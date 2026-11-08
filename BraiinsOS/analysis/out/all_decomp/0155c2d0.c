// FUN_0155c2d0 @ 0155c2d0 size=268 calls_out=4 calls_in=0
// strings: 

void FUN_0155c2d0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  iVar2 = *(int *)(param_2 + 4);
  FUN_01561fe8(&local_34,0x30,&DAT_0040c5b9,5,1,0);
  FUN_01561fe8(&local_28,3,&DAT_0041121f,1,iVar2 + 0xc,0x20);
  uVar1 = local_20;
  iVar2 = local_24;
  iVar3 = local_2c;
  if ((uint)(local_34 - local_2c) < local_20) {
    FUN_0154e5f8(&local_34,local_2c,local_20,1,1);
    iVar3 = local_2c;
  }
  FUN_016dd1aa(local_30 + iVar3,iVar2,uVar1);
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  FUN_01561fe8(&local_28,0x30,local_30,iVar3 + uVar1,1,0);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  return;
}

