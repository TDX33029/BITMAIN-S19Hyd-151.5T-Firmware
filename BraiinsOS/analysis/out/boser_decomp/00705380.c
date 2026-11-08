// FUN_00705380 @ 00705380 size=128 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_00705380(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r5;
  
  uVar4 = 0xc;
  if (param_2 == 0x10) {
    uVar1 = FUN_01b383b0();
    iVar2 = FUN_01b6ad8c(0x248);
    if (iVar2 != 0) {
      FUN_01b37aa8();
      iVar3 = FUN_01b37ac4(iVar2,uVar1,param_1,0x10,0x10,param_3);
      unaff_r5 = iVar2;
      if (iVar3 == 1) {
        uVar4 = 9;
      }
      else {
        FUN_01b37c50(iVar2);
      }
    }
  }
  return CONCAT44(unaff_r5,uVar4);
}

