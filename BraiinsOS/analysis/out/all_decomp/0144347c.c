// FUN_0144347c @ 0144347c size=132 calls_out=4 calls_in=2
// strings: 

void FUN_0144347c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint local_1c;
  int local_18;
  uint local_14;
  
  uVar1 = param_2 * 4;
  bVar3 = 0x3ffffffe < param_2;
  bVar2 = param_2 == 0x3fffffff;
  if (param_2 < 0x40000000) {
    bVar3 = 0x7ffffffd < uVar1;
    bVar2 = uVar1 == 0x7ffffffe;
  }
  if (bVar3 && !bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_1c = 0;
    local_18 = 2;
  }
  else {
    local_18 = thunk_FUN_016d4a50(uVar1);
    local_1c = param_2;
    if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar1);
    }
  }
  FUN_016dd1aa(local_18,param_1,uVar1);
  local_14 = param_2;
  FUN_00a5ee50(&local_1c);
  return;
}

