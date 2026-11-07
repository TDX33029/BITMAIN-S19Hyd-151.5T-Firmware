// FUN_016f83a4 @ 016f83a4 size=84 calls_out=2 calls_in=1
// strings: Parsed Url is not a valid Uri

void FUN_016f83a4(undefined4 param_1)

{
  int *piVar1;
  undefined2 local_24 [10];
  
  local_24[0] = 0;
  piVar1 = (int *)FUN_016f8410(local_24,"Parsed Url is not a valid Uri",0x1d);
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  FUN_01bed4e2(piVar1,param_1,0x48);
  return;
}

