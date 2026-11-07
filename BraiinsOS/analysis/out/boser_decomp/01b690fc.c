// FUN_01b690fc @ 01b690fc size=216 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined4 FUN_01b690fc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    uVar4 = 0x5c;
    uVar2 = 0x43;
    uVar1 = 0xe;
  }
  else {
    if ((param_3 == 0x40 && 0x3f < param_5) &&
       (iVar3 = FUN_01b690e8(param_4,param_2,*(int *)(*(int *)(param_1 + 8) + 8) + 0x20,iVar3,
                             *(undefined4 *)(iVar3 + 0x100)), iVar3 != 0)) {
      return 1;
    }
    uVar4 = 0x61;
    uVar2 = 0x83;
    uVar1 = 6;
  }
  FUN_01b053d4(uVar1,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar4);
  return 0;
}

