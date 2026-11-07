// FUN_01a6100c @ 01a6100c size=124 calls_out=3 calls_in=0
// strings: 

void FUN_01a6100c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_b0 [20];
  undefined1 auStack_60 [72];
  
  FUN_01a60d04(auStack_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  FUN_01a4b568(local_b0,param_2,auStack_60);
  if (local_b0[0] == -0x80000000) {
    puVar1 = (undefined4 *)((uint)local_b0 | 4);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_1 = 0x80000000;
  }
  else {
    FUN_01bed4e2(param_1,local_b0,0x50);
  }
  return;
}

