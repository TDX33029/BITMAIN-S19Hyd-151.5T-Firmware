// FUN_01b475d0 @ 01b475d0 size=332 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

uint FUN_01b475d0(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar1 = FUN_01b47374();
  if (param_2 == 0) {
    *param_3 = uVar1;
    return 1;
  }
  if (*param_3 < uVar1) {
    FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x16d);
  }
  else {
    if (*(int *)(iVar3 + 8) != 4) {
      uVar1 = FUN_01b6fa08(uVar4,param_3,param_2,*param_3,param_4,param_5,*(int *)(iVar3 + 8));
      return uVar1;
    }
    iVar2 = FUN_01b473c0(iVar3,param_1);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_01b6f49c(*(undefined4 *)(iVar3 + 0x1c),uVar1,param_4,param_5,
                             *(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24),
                             *(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10)), iVar2 != 0
       )) {
      iVar3 = FUN_01b6fa08(uVar4,param_3,param_2,*param_3,*(undefined4 *)(iVar3 + 0x1c),uVar1,3);
      return (uint)(iVar3 != 0);
    }
  }
  return 0;
}

