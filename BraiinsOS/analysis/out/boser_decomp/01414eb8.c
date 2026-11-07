// FUN_01414eb8 @ 01414eb8 size=52 calls_out=1 calls_in=5
// strings: 

void FUN_01414eb8(byte param_1,int *param_2)

{
  if (param_1 < 2) {
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
  thunk_FUN_01be4678(param_2);
  return;
}

