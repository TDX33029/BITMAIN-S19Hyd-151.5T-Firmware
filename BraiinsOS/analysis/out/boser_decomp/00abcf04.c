// FUN_00abcf04 @ 00abcf04 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_00abcf04(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 local_188 [94];
  
  if (*param_3 == 2) {
    local_188[0] = 8;
  }
  else {
    FUN_01adbaa4(local_188,param_3);
  }
  if (*param_2 != 8) {
    FUN_00abaea0(param_2);
  }
  FUN_01bed4e2(param_2,local_188,0x178);
  FUN_01bed4e2(param_1,param_2,0x1c8);
  return;
}

