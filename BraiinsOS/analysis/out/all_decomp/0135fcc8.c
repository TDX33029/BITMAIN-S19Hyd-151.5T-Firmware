// FUN_0135fcc8 @ 0135fcc8 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_0135fcc8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  
  uVar1 = param_3 - param_2;
  if (0x7ffffffc < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  uVar2 = 0;
  if (param_3 == param_2) {
    uStack_2c = 4;
    local_30 = 0;
  }
  else {
    uStack_2c = thunk_FUN_016d4a50(uVar1);
    local_30 = uVar1 >> 2;
    if (uStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  if (param_2 != param_3) {
    uVar2 = 0;
    do {
      *(undefined4 *)(uStack_2c + uVar2 * 4) = *(undefined4 *)(param_2 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar1 >> 2 != uVar2);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uVar2;
  return;
}

