// FUN_01a8da38 @ 01a8da38 size=132 calls_out=4 calls_in=34
// strings: 

void FUN_01a8da38(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 & 1) == 0) {
    FUN_00664898(param_1,param_2);
    return;
  }
  uVar1 = param_3 >> 1;
  if (param_3 < 2) {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_01298504(uVar1,1);
    uVar3 = uVar1;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar1);
    }
  }
  FUN_01bed4e2(uVar2,param_2,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

