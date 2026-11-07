// FUN_0172a8b0 @ 0172a8b0 size=464 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c | /aws-lc/crypto/fipsmodule/evp/p_hkdf.c

bool FUN_0172a8b0(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  
  puVar4 = *(uint **)(param_1 + 0x14);
  switch(param_2) {
  case 0x100e:
    if (param_3 < 3) {
      *puVar4 = param_3;
      return true;
    }
    uVar5 = 0x8a;
    break;
  case 0x100f:
    if ((param_4 != 0) && (iVar2 = FUN_0172a898(param_4), iVar2 != 0)) {
      uVar3 = FUN_0172a880(param_4);
      if ((uVar3 & 4) == 0) {
        puVar4[1] = param_4;
        return true;
      }
      uVar5 = 0x95;
      goto LAB_0172a9a4;
    }
    uVar5 = 0x91;
    break;
  case 0x1010:
    iVar2 = FUN_016e1e34(param_4,puVar4 + 2,puVar4 + 3);
    return iVar2 != 0;
  case 0x1011:
    iVar2 = FUN_016e1e34(param_4,puVar4 + 4,puVar4 + 5);
    return iVar2 != 0;
  case 0x1012:
    uVar5 = FUN_016e1e04(param_4);
    uVar1 = FUN_016e1e1c(param_4);
    iVar2 = FUN_016e1700(puVar4 + 6,uVar5,uVar1);
    return iVar2 != 0;
  default:
    uVar5 = 0xb2;
LAB_0172a9a4:
    FUN_016e9cd0(6,0,0x65,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",uVar5);
    return false;
  }
  FUN_016e9cd0(6,0,0x72,"/aws-lc/crypto/fipsmodule/evp/p_hkdf.c",uVar5);
  return false;
}

