// FUN_0103b944 @ 0103b944 size=160 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0103b944(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  short local_54 [2];
  int local_50;
  undefined4 local_4c;
  short local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar1 = *(undefined1 *)(param_2 + 0x19);
  if (param_3 == 0) {
    uVar3 = FUN_01039bf4(param_1,param_2,uVar1);
    return uVar3;
  }
  FUN_0103b340(local_54,param_1);
  uVar3 = FUN_01039bf4(local_54,param_2,uVar1);
  iVar2 = 0;
  if (local_54[0] != 0) {
    iVar2 = local_50;
  }
  if (local_54[0] != 0 && iVar2 != 0) {
    thunk_FUN_016d3fb4(local_4c);
  }
  iVar2 = 0;
  if (local_30 != 0) {
    iVar2 = local_2c;
  }
  if (local_30 != 0 && iVar2 != 0) {
    thunk_FUN_016d3fb4(local_28);
    return uVar3;
  }
  return uVar3;
}

