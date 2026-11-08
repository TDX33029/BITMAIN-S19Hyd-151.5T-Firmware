// FUN_006687d8 @ 006687d8 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_006687d8(int param_1)

{
  undefined4 extraout_r1;
  undefined4 local_810 [256];
  undefined4 local_410 [2];
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  
  local_810[0] = 2;
  FUN_0066a724(param_1,local_810);
  local_408 = *(undefined4 *)(param_1 + 8);
  local_404 = *(undefined4 *)(param_1 + 0xc);
  local_400 = 0;
  local_410[0] = 1;
  local_3fc = extraout_r1;
  FUN_0066a724(param_1,local_410);
  return;
}

