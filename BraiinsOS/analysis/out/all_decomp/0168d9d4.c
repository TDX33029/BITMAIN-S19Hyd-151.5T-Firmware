// FUN_0168d9d4 @ 0168d9d4 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_0168d9d4(undefined4 *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2 * 0x70;
  if (&UNK_01249249 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar1 == 0) {
    iVar2 = 8;
    param_2 = (undefined *)0x0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
  }
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = iVar2;
  param_1[3] = 0;
  return;
}

