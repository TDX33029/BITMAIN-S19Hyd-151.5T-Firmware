// FUN_00703a08 @ 00703a08 size=116 calls_out=4 calls_in=1
// strings: 

void FUN_00703a08(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b2b938(param_2);
  uVar4 = 0;
  if (iVar1 < 0) {
LAB_00703a2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = 1;
  }
  else {
    uVar4 = 1;
    iVar2 = FUN_01298504(iVar1,1);
    if (iVar2 == 0) goto LAB_00703a2c;
  }
  iVar3 = FUN_01b2bd64(param_2,iVar2);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  return;
}

