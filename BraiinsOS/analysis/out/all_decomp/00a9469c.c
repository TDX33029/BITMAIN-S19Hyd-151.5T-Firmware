// FUN_00a9469c @ 00a9469c size=116 calls_out=4 calls_in=1
// strings: 

void FUN_00a9469c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(param_1,&DAT_005a4e28);
    return;
  }
  uVar1 = param_2 >> 1;
  uVar2 = 1;
  if ((1 < param_2) && (uVar2 = thunk_FUN_016d4a50(uVar1), uVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar1);
  }
  FUN_016dd1aa(uVar2,&DAT_005a4e28,uVar1);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

