// FUN_00f57eb4 @ 00f57eb4 size=160 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_00f57eb4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar3 = param_1[2];
  iVar4 = param_1[1];
  uVar1 = 0;
  if (iVar3 < 0) {
LAB_00f57ed4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,iVar3);
  }
  if (iVar3 == 0) {
    local_20 = 1;
    iVar2 = 0;
  }
  else {
    local_20 = thunk_FUN_016d4a50(iVar3);
    if (local_20 == 0) {
      uVar1 = 1;
      goto LAB_00f57ed4;
    }
    iVar2 = iVar3;
  }
  FUN_016dd1aa(local_20,iVar4,iVar3);
  local_24 = iVar2;
  local_1c = iVar3;
  uVar1 = FUN_0157ba88(&local_24);
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  return uVar1;
}

