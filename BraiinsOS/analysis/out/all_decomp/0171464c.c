// FUN_0171464c @ 0171464c size=344 calls_out=4 calls_in=33
// strings: /aws-lc/crypto/fipsmodule/bn/bn.c | /aws-lc/crypto/fipsmodule/bn/bn.c

undefined8 FUN_0171464c(uint *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 <= param_1[2]) {
    return 1;
  }
  if (param_2 < 0x1000000) {
    if ((param_1[4] & 2) == 0) {
      uVar3 = FUN_0177aa28(param_2,4);
      if (uVar3 != 0) {
        uVar4 = *param_1;
        iVar1 = param_1[1] * 4;
        if (iVar1 != 0) {
          if (uVar3 < uVar4) {
            if (uVar4 < uVar3 + iVar1) {
LAB_017147a0:
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0,0x17147a0);
              (*pcVar2)();
            }
          }
          else if ((uVar4 < uVar3) && (uVar3 < uVar4 + iVar1)) goto LAB_017147a0;
          FUN_016dd1aa(uVar3,uVar4);
          uVar4 = *param_1;
        }
        FUN_0177aafc(uVar4);
        *param_1 = uVar3;
        param_1[2] = param_2;
        return 1;
      }
    }
    else {
      FUN_016e9cd0(3,0,0x6a,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x13c);
    }
  }
  else {
    FUN_016e9cd0(3,0,0x66,"/aws-lc/crypto/fipsmodule/bn/bn.c",0x137);
  }
  return 0;
}

