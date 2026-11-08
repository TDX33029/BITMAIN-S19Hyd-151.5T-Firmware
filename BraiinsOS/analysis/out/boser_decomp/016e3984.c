// FUN_016e3984 @ 016e3984 size=124 calls_out=3 calls_in=4
// strings: 

void FUN_016e3984(uint *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = param_3 * 2;
  uVar4 = 0;
  if ((int)(param_3 | param_3 << 1) < 0) {
LAB_016e399c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar4 = 1;
    uVar2 = FUN_01298504(iVar1,1);
    uVar3 = param_3;
    if (uVar2 == 0) goto LAB_016e399c;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  FUN_01bed4e2(uVar2,param_2,iVar1);
  param_1[2] = param_3;
  return;
}

