// FUN_0173a384 @ 0173a384 size=384 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

uint FUN_0173a384(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar1 = FUN_0173a338();
  if (param_2 == 0) {
    uVar2 = 1;
    *param_3 = uVar1;
  }
  else {
    if (*param_3 < uVar1) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0x16d);
      return 0;
    }
    if (*(int *)(iVar5 + 8) == 4) {
      iVar3 = *(int *)(iVar5 + 0x1c);
      if (iVar3 == 0) {
        FUN_0173a338(*(undefined4 *)(param_1 + 8));
        iVar3 = FUN_0177a6c0();
        *(int *)(iVar5 + 0x1c) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar3 = FUN_017803dc(iVar3,uVar1,param_4,param_5,*(undefined4 *)(iVar5 + 0x20),
                           *(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0xc),
                           *(undefined4 *)(iVar5 + 0x10));
      if (iVar3 == 0) {
        return 0;
      }
      iVar5 = FUN_01780f18(uVar4,param_3,param_2,*param_3,*(undefined4 *)(iVar5 + 0x1c),uVar1,3);
      uVar2 = (uint)(iVar5 != 0);
    }
    else {
      uVar2 = FUN_01780f18(uVar4,param_3,param_2,*param_3,param_4,param_5,*(int *)(iVar5 + 8));
    }
  }
  return uVar2;
}

