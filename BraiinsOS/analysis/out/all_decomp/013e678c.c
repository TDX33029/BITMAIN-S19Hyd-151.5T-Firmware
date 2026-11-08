// FUN_013e678c @ 013e678c size=100 calls_out=3 calls_in=1
// strings: 

uint FUN_013e678c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (*param_1 <= uVar2) {
    return param_1[1];
  }
  if (uVar2 == 0) {
    thunk_FUN_016d3fb4(param_1[1]);
    return 1;
  }
  uVar1 = thunk_FUN_016d4ea4(param_1[1],uVar2);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar2);
  }
  return uVar1;
}

