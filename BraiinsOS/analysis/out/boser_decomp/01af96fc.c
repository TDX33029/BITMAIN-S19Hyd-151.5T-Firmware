// FUN_01af96fc @ 01af96fc size=128 calls_out=2 calls_in=2
// strings: 

void FUN_01af96fc(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 local_1c;
  undefined2 local_1a;
  
  FUN_01afa9f8(param_2,*(undefined4 *)(param_2 + 8),param_4 + 4,1,1);
  local_1c = 0xa11e;
  FUN_01ac6cbc(param_2,&local_1c,2);
  local_1a = (undefined2)param_4;
  FUN_01ac6cbc(param_2,&local_1a,2);
  FUN_01ac6cbc(param_2,param_3,param_4);
  *param_1 = 0x80000007;
  return;
}

