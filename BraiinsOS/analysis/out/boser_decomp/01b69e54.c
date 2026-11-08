// FUN_01b69e54 @ 01b69e54 size=284 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined4 FUN_01b69e54(int param_1,int param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(char *)(iVar3 + 0x40) == '\0') {
    uVar5 = 0x38;
    uVar4 = 0x82;
  }
  else {
    if (param_2 == 0) {
LAB_01b69ebc:
      *param_3 = 0x40;
      return 1;
    }
    if (*param_3 < 0x40) {
      uVar5 = 0x42;
    }
    else {
      if (0x3f < param_5) {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 != 0) {
          iVar3 = FUN_01b69e40(param_2,param_4,iVar3,iVar2,*(undefined4 *)(iVar2 + 0x100));
          if (iVar3 == 0) {
            return 0;
          }
          goto LAB_01b69ebc;
        }
        uVar5 = 0x4c;
        uVar4 = 0x43;
        uVar1 = 0xe;
        goto LAB_01b69ea8;
      }
      uVar5 = 0x47;
    }
    uVar4 = 100;
  }
  uVar1 = 6;
LAB_01b69ea8:
  FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar5);
  return 0;
}

