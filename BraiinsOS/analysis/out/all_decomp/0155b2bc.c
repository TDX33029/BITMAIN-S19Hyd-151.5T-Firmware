// FUN_0155b2bc @ 0155b2bc size=264 calls_out=4 calls_in=0
// strings: 

void FUN_0155b2bc(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  uVar3 = *(undefined4 *)(*param_2 + 8);
  uVar5 = *(undefined4 *)(*param_2 + 0xc);
  FUN_01561fe8(&local_34,0x30,&DAT_0056c1d2,0xd,1,0);
  FUN_01561fe8(&local_28,3,&DAT_0041121f,1,uVar3,uVar5);
  uVar2 = local_20;
  iVar1 = local_24;
  iVar4 = local_2c;
  if ((uint)(local_34 - local_2c) < local_20) {
    FUN_0154e5f8(&local_34,local_2c,local_20,1,1);
    iVar4 = local_2c;
  }
  FUN_016dd1aa(local_30 + iVar4,iVar1,uVar2);
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  FUN_01561fe8(&local_28,0x30,local_30,iVar4 + uVar2,1,0);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  return;
}

