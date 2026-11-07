// FUN_017db7a8 @ 017db7a8 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_017db7a8(undefined4 *param_1,int param_2)

{
  undefined2 local_a;
  
  local_a = *(undefined2 *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      FUN_012fcf18(&local_a);
    }
    else {
      FUN_012fa300(&local_a);
    }
  }
  else {
    FUN_012fd958(&local_a);
  }
  return;
}

