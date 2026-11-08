// FUN_013d7580 @ 013d7580 size=60 calls_out=2 calls_in=1
// strings: 

bool FUN_013d7580(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_013d2d20();
  if (iVar1 == 0) {
    return false;
  }
  FUN_013d2168(param_1);
  return *(int *)(*param_1 + 0x50) != param_1[2];
}

