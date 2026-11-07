// FUN_01b69004 @ 01b69004 size=144 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519.c

undefined4
FUN_01b69004(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_3 == 0x40) &&
     (iVar2 = FUN_01b68ff0(param_4,param_5,param_2,*(int *)(*(int *)(param_1 + 8) + 8) + 0x20),
     iVar2 != 0)) {
    uVar1 = 1;
  }
  else {
    FUN_01b053d4(6,0,0x83,"/aws-lc/crypto/fipsmodule/evp/p_ed25519.c",0x45);
    uVar1 = 0;
  }
  return uVar1;
}

