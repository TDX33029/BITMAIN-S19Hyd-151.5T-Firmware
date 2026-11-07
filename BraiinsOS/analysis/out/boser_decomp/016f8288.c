// FUN_016f8288 @ 016f8288 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_016f8288(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_d8 [2];
  undefined1 auStack_d0 [172];
  undefined2 local_24 [10];
  
  FUN_018fb788(local_d8,param_3,param_2 + 0x10,param_2);
  if (local_d8[0] == 2) {
    local_24[0] = 0;
    uVar1 = FUN_016f80f8(local_24,auStack_d0);
    *param_1 = 2;
    param_1[1] = uVar1;
  }
  else {
    FUN_01bed4e2(param_1,local_d8,0xb0);
  }
  return;
}

