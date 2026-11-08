// FUN_0123ab30 @ 0123ab30 size=336 calls_out=7 calls_in=64
// strings: 

undefined4 FUN_0123ab30(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_2c;
  int local_28;
  uint local_24;
  
  uVar4 = param_4 + param_2 + 1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  if (uVar4 == 0) {
    local_28 = 1;
    uVar4 = 0;
  }
  else {
    local_28 = thunk_FUN_016d4a50(uVar4);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar4);
    }
  }
  local_24 = 0;
  local_2c = uVar4;
  if (uVar4 < param_2) {
    FUN_011cf828(&local_2c,0,param_2,1,1);
  }
  uVar2 = local_24;
  iVar3 = local_28;
  uVar4 = local_2c;
  FUN_016dd1aa(local_28 + local_24,param_1 + 8,param_2);
  uVar2 = uVar2 + param_2;
  local_24 = uVar2;
  if (uVar4 == uVar2) {
    FUN_011cf828(&local_2c,uVar4,1,1,1);
    iVar3 = local_28;
  }
  *(undefined1 *)(iVar3 + local_24) = 0x2f;
  local_24 = uVar2 + 1;
  FUN_01238c50(&local_2c,param_3,param_4);
  iVar3 = local_28;
  uVar4 = local_2c;
  uVar1 = FUN_011e1508(local_28,local_24);
  if (uVar4 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  return uVar1;
}

