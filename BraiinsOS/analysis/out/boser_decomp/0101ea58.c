// FUN_0101ea58 @ 0101ea58 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_0101ea58(undefined4 *param_1)

{
  int local_130;
  int iStack_12c;
  int local_a0;
  int local_9c;
  
  FUN_0119729c(&local_a0);
  if (local_a0 == 5 && local_9c == 0) {
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(&local_130,&local_a0,0x90);
    if (local_130 == 4 && iStack_12c == 0) {
      local_9c = 0;
      local_a0 = 3;
    }
    else {
      FUN_011df0b0(&local_a0,&local_130);
    }
    FUN_01bed4e2(param_1,&local_a0,0x90);
  }
  return;
}

