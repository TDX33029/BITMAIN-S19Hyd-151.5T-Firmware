// FUN_010bbdc4 @ 010bbdc4 size=120 calls_out=2 calls_in=6
// strings: 

void FUN_010bbdc4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    if (param_2 <= *param_1 - uVar2) {
      return;
    }
    if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,uVar2,&DAT_018af198);
    }
    param_1[2] = 0;
    if (uVar2 != uVar1) {
      FUN_016dd52c(param_1[1],param_1[1] + uVar1,uVar2 - uVar1);
      param_1[2] = uVar2 - uVar1;
    }
    param_1[3] = 0;
  }
  return;
}

