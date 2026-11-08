// FUN_014b700c @ 014b700c size=164 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_014b700c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2a [10];
  
  iVar1 = FUN_012fc81c(param_3,auStack_2a);
  iVar4 = 10 - iVar1;
  if (iVar1 == 10) {
    iVar5 = 1;
    iVar3 = 0;
  }
  else {
    iVar5 = FUN_01298504(iVar4,1);
    iVar3 = iVar4;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar4);
    }
  }
  FUN_01bed4e2(iVar5,auStack_2a + iVar1,iVar4);
  uVar2 = FUN_014b70c8(param_1,param_2,iVar5,iVar4);
  FUN_0134bd64(iVar3,iVar5);
  return uVar2;
}

