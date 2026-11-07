// FUN_01aaa1b4 @ 01aaa1b4 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_01aaa1b4(int *param_1,int param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = *(undefined4 *)*param_1;
  uStack_c = ((undefined4 *)*param_1)[1];
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      FUN_012fd074(&local_10);
    }
    else {
      FUN_012fdc38(&local_10);
    }
  }
  else {
    FUN_012fda48(&local_10);
  }
  return;
}

