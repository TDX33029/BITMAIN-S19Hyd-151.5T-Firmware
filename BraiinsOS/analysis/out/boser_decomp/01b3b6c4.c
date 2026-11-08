// FUN_01b3b6c4 @ 01b3b6c4 size=332 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c

bool FUN_01b3b6c4(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  puVar5 = *(uint **)(param_1 + 0x14);
  switch(param_2) {
  case 0x100e:
    if (param_3 < 3) {
      *puVar5 = param_3;
      return true;
    }
    uVar6 = 0x8a;
    break;
  case 0x100f:
    if ((param_4 != 0) && (iVar2 = FUN_01b3b6b4(param_4), iVar2 != 0)) {
      uVar1 = FUN_01b3b6a4(param_4);
      if ((uVar1 & 4) == 0) {
        puVar5[1] = param_4;
        return true;
      }
      uVar6 = 0x95;
      goto LAB_01b3b7a0;
    }
    uVar6 = 0x91;
    break;
  case 0x1010:
    puVar4 = puVar5 + 3;
    puVar5 = puVar5 + 2;
    goto LAB_01b3b7b0;
  case 0x1011:
    puVar4 = puVar5 + 5;
    puVar5 = puVar5 + 4;
LAB_01b3b7b0:
    iVar2 = FUN_01afd694(param_4,puVar5,puVar4);
LAB_01b3b7b8:
    return iVar2 != 0;
  case 0x1012:
    uVar6 = FUN_01afd674(param_4);
    uVar3 = FUN_01afd684(param_4);
    iVar2 = FUN_01afcfcc(puVar5 + 6,uVar6,uVar3);
    goto LAB_01b3b7b8;
  default:
    uVar6 = 0xb2;
LAB_01b3b7a0:
    uVar3 = 0x65;
    goto LAB_01b3b728;
  }
  uVar3 = 0x72;
LAB_01b3b728:
  FUN_01b053d4(6,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",uVar6);
  return false;
}

