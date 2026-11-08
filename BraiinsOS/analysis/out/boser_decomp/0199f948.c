// FUN_0199f948 @ 0199f948 size=160 calls_out=7 calls_in=1
// strings: 

void FUN_0199f948(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_01be6884(param_2,0);
  if (iVar1 == 0) {
    piVar4 = (int *)FUN_01be3244();
    iVar1 = *piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = -0x80000000;
    param_1[2] = iVar1;
    return;
  }
  iVar2 = FUN_01bedbda();
  if (iVar2 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = FUN_01298504(iVar2,1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar2);
    }
  }
  FUN_01bed4e2(iVar3,iVar1,iVar2);
  thunk_FUN_01be4678(iVar1);
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  return;
}

