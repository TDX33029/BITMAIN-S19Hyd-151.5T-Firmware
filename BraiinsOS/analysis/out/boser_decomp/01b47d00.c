// FUN_01b47d00 @ 01b47d00 size=232 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c

int FUN_01b47d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3b5) {
    iVar2 = 0x40;
  }
  else if (param_1 == 0x3e5) {
    iVar2 = 0x44;
  }
  else {
    if (param_1 != 0x3b4) {
      FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp.c",0x242);
      return 0;
    }
    iVar2 = 0x5c;
  }
  uVar3 = *(undefined4 *)((int)&PTR_01d3b2b0 + iVar2);
  iVar2 = FUN_01b46f98();
  if (iVar2 != 0) {
    FUN_01b4777c(iVar2,uVar3);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0xc) + 0x34))(iVar2,param_3,param_4);
    if (iVar1 != 0) {
      return iVar2;
    }
  }
  FUN_01b46fd8(iVar2);
  return 0;
}

