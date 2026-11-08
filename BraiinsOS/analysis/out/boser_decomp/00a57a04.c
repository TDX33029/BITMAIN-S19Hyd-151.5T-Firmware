// FUN_00a57a04 @ 00a57a04 size=140 calls_out=4 calls_in=0
// strings: 

void FUN_00a57a04(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 & 1) == 0) {
    FUN_00664898(param_1,&DAT_005bfbd8);
    return;
  }
  uVar1 = param_2 >> 1;
  if (param_2 < 2) {
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
  FUN_01bed4e2(uVar2,&DAT_005bfbd8,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

