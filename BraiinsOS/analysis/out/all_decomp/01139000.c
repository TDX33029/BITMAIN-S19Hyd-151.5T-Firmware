// FUN_01139000 @ 01139000 size=104 calls_out=3 calls_in=6
// strings: 

undefined8 FUN_01139000(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (*param_1 <= uVar2) {
    return CONCAT44(uVar2,param_1[1]);
  }
  if (uVar2 == 0) {
    thunk_FUN_016d3fb4(param_1[1]);
    return 1;
  }
  iVar1 = thunk_FUN_016d4ea4(param_1[1],uVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar2);
  }
  return CONCAT44(uVar2,iVar1);
}

