// FUN_00f56780 @ 00f56780 size=156 calls_out=5 calls_in=67
// strings: 

void FUN_00f56780(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_24;
  int local_20;
  uint local_1c;
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(&local_24,param_1);
    FUN_0157ba88(&local_24);
    return;
  }
  uVar1 = param_2 >> 1;
  if (param_2 < 2) {
    iVar2 = 1;
    uVar3 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    uVar3 = uVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
  }
  FUN_016dd1aa(iVar2,param_1,uVar1);
  local_24 = uVar3;
  local_20 = iVar2;
  local_1c = uVar1;
  FUN_0157ba88(&local_24);
  return;
}

