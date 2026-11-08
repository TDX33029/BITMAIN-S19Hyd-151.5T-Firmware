// FUN_0113ce68 @ 0113ce68 size=164 calls_out=6 calls_in=3
// strings: 

undefined4 FUN_0113ce68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2a [10];
  
  iVar1 = FUN_00fabc64(param_3,auStack_2a);
  iVar5 = 10 - iVar1;
  if (iVar1 == 10) {
    iVar3 = 1;
    iVar4 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar5);
    iVar4 = iVar5;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar3,auStack_2a + iVar1,iVar5);
  uVar2 = FUN_0113cf28(param_1,param_2,iVar3,iVar5);
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  return uVar2;
}

