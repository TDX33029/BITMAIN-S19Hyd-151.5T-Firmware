// FUN_017dc018 @ 017dc018 size=148 calls_out=5 calls_in=1
// strings: 

void FUN_017dc018(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_2 < 0) {
LAB_017dc02c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_2);
  }
  if (param_2 == 0) {
    iVar1 = 1;
    iVar4 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_2,1);
    iVar4 = param_2;
    if (iVar1 == 0) goto LAB_017dc02c;
  }
  FUN_01bed4e2(iVar1,param_1,param_2);
  piVar2 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar2 = iVar4;
  piVar2[1] = iVar1;
  piVar2[2] = param_2;
  return;
}

