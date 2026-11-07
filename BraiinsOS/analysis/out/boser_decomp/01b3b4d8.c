// FUN_01b3b4d8 @ 01b3b4d8 size=284 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined4 FUN_01b3b4d8(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar5 = 0x69;
    uVar2 = 0x43;
    uVar1 = 0xe;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    if (param_2 == 3) {
      if (iVar4 == 0 || param_4 == (int *)0x0) {
        return 0;
      }
      if ((uint)param_4[1] < 0x100) {
        FUN_01b26974(iVar4,*param_4);
        *(int *)(iVar4 + 0x100) = param_4[1];
        return 1;
      }
      return 0;
    }
    if (param_2 == 4) {
      if (iVar4 == 0 || param_4 == (int *)0x0) {
        return 0;
      }
      iVar3 = *(int *)(iVar4 + 0x100);
      param_4[1] = iVar3;
      if (iVar3 == 0) {
        *param_4 = 0;
        return 1;
      }
      *param_4 = iVar4;
      return 1;
    }
    if (param_2 == 1) {
      iVar4 = FUN_01b3b4c8(param_4);
      if (iVar4 == 0x2a2) {
        return 1;
      }
      uVar5 = 0x71;
    }
    else {
      uVar5 = 0x8e;
    }
    uVar2 = 0x65;
    uVar1 = 6;
  }
  FUN_01b053d4(uVar1,0,uVar2,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar5);
  return 0;
}

