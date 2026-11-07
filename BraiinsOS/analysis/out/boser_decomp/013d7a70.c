// FUN_013d7a70 @ 013d7a70 size=64 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_013d7a70(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined2 local_4c [2];
  uint local_48;
  
  if (param_2 < (uint)(param_4 + param_3)) {
    local_4c[0] = 0xe;
    local_48 = param_2;
    uVar1 = FUN_013e649c(local_4c);
  }
  else {
    FUN_01af7ce4(param_1,param_4 + param_3);
    uVar1 = 0;
  }
  return uVar1;
}

