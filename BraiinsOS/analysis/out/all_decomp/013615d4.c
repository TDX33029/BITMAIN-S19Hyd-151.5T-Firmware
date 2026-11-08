// FUN_013615d4 @ 013615d4 size=192 calls_out=2 calls_in=1
// strings: 

void FUN_013615d4(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint local_30;
  uint local_2c;
  
  uVar1 = param_3 * 0x10;
  bVar3 = 0xffffffe < param_3;
  bVar2 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar3 = 0x7ffffffb < uVar1;
    bVar2 = uVar1 == 0x7ffffffc;
  }
  if (bVar3 && !bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_30 = param_3;
    if ((param_3 != 0) && (uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0136165c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01361660 + *(int *)(&DAT_01361660 + *param_2 * 4)))();
      return;
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

