// FUN_01424824 @ 01424824 size=112 calls_out=2 calls_in=3
// strings: 

void FUN_01424824(int *param_1,uint param_2)

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
      FUN_012faff4(0,uVar1,uVar2,&DAT_01d2fe30);
    }
    param_1[2] = 0;
    if (uVar2 != uVar1) {
      FUN_01bed864(param_1[1],param_1[1] + uVar1,uVar2 - uVar1);
      param_1[2] = uVar2 - uVar1;
    }
    param_1[3] = 0;
  }
  return;
}

