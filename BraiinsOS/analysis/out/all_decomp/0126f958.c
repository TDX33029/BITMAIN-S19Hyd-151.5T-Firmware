// FUN_0126f958 @ 0126f958 size=140 calls_out=5 calls_in=2
// strings: 

void FUN_0126f958(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(&uStack_1c,param_1);
    FUN_0157ba88(&uStack_1c);
    return;
  }
  uVar1 = param_2 >> 1;
  iVar2 = 1;
  if ((1 < param_2) && (iVar2 = thunk_FUN_016d4a50(uVar1), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar1);
  }
  FUN_016dd1aa(iVar2,param_1,uVar1);
  uStack_1c = uVar1;
  iStack_18 = iVar2;
  local_14 = uVar1;
  FUN_0157ba88(&uStack_1c);
  return;
}

