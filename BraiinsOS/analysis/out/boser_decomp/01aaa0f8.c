// FUN_01aaa0f8 @ 01aaa0f8 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_01aaa0f8(undefined4 *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      FUN_012fd7a4(*param_1,param_1[1],param_1[2],param_1[3],param_2);
    }
    else {
      FUN_012fde00(*param_1,param_1[1],param_1[2],param_1[3],param_2);
    }
  }
  else {
    FUN_012fdcbc(*param_1,param_1[1],param_1[2],param_1[3],param_2);
  }
  return;
}

