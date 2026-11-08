// FUN_0172a708 @ 0172a708 size=364 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c | /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined8 FUN_0172a708(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x69);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x14);
    if (param_2 == 3) {
      if ((uVar4 != 0 && param_4 != (uint *)0x0) && (uVar5 = param_4[1], uVar5 < 0x100)) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = *param_4;
          if (uVar4 < uVar3) {
            if (uVar3 < uVar4 + uVar5) goto LAB_0172a870;
          }
          else if ((uVar3 < uVar4) && (uVar4 < uVar3 + uVar5)) {
LAB_0172a870:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0,0x172a870);
            (*pcVar1)();
          }
          FUN_016dd1aa(uVar4);
          uVar3 = param_4[1];
        }
        *(uint *)(uVar4 + 0x100) = uVar3;
        return 1;
      }
    }
    else if (param_2 == 4) {
      if (uVar4 != 0 && param_4 != (uint *)0x0) {
        uVar5 = *(uint *)(uVar4 + 0x100);
        param_4[1] = uVar5;
        if (uVar5 == 0) {
          *param_4 = 0;
          return 1;
        }
        *param_4 = uVar4;
        return 1;
      }
    }
    else {
      if (param_2 == 1) {
        iVar2 = FUN_0172a6f0(param_4);
        if (iVar2 == 0x2a2) {
          return 1;
        }
        uVar6 = 0x71;
      }
      else {
        uVar6 = 0x8e;
      }
      FUN_016e9cd0(6,0,0x65,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",uVar6);
    }
  }
  return 0;
}

