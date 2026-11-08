// FUN_017785c4 @ 017785c4 size=316 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined8 FUN_017785c4(int param_1,int param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(char *)(iVar2 + 0x40) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x38);
  }
  else {
    if (param_2 == 0) {
LAB_01778644:
      *param_3 = 0x40;
      return 1;
    }
    if (*param_3 < 0x40) {
      uVar3 = 0x42;
    }
    else {
      if (0x3f < param_5) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x4c);
          return 0;
        }
        iVar2 = FUN_017785b0(param_2,param_4,iVar2,iVar1,*(undefined4 *)(iVar1 + 0x100));
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_01778644;
      }
      uVar3 = 0x47;
    }
    FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar3);
  }
  return 0;
}

