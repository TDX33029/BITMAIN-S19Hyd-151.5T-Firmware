// FUN_01a54fec @ 01a54fec size=116 calls_out=3 calls_in=4
// strings: 

void FUN_01a54fec(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_a8 [20];
  undefined1 auStack_58 [72];
  
  FUN_01a60910(auStack_58,param_3);
  FUN_01a4b568(local_a8,param_2 + 8,auStack_58);
  if (local_a8[0] == -0x80000000) {
    puVar1 = (undefined4 *)((uint)local_a8 | 4);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_1 = 0x80000000;
  }
  else {
    FUN_01bed4e2(param_1,local_a8,0x50);
  }
  return;
}

