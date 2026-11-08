// FUN_01b3b340 @ 01b3b340 size=164 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01b3b340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01b2e788();
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_01b2e894();
    iVar2 = FUN_01b2e970(iVar1);
    if ((iVar2 == 0) || (iVar3 = FUN_01b3af48(param_3,iVar2,param_2,iVar1), iVar3 == 0)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = FUN_01b2bd64(iVar2,param_1);
    }
    FUN_01b2ebbc(iVar1);
    FUN_01b2e7c8(iVar1);
  }
  return uVar4;
}

