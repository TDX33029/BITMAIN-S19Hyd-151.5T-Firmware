// FUN_00b238a0 @ 00b238a0 size=132 calls_out=4 calls_in=1
// strings: 

void FUN_00b238a0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(param_1,&DAT_005a4e50);
    return;
  }
  uVar1 = param_2 >> 1;
  if (param_2 < 2) {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(uVar1);
    uVar3 = uVar1;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
  }
  FUN_016dd1aa(uVar2,&DAT_005a4e50,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

