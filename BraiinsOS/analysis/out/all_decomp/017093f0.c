// FUN_017093f0 @ 017093f0 size=232 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c

undefined8 FUN_017093f0(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0177a9c0(0x104);
  if (uVar2 != 0) {
    *(uint *)(param_1 + 0x14) = uVar2;
    uVar4 = *(uint *)(param_2 + 0x14);
    if (uVar4 != 0) {
      if (uVar2 < uVar4) {
        if (uVar4 < uVar2 + 0xff) goto LAB_01709498;
      }
      else if ((uVar4 < uVar2) && (uVar2 < uVar4 + 0xff)) {
LAB_01709498:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x1709498);
        (*pcVar1)();
      }
      iVar3 = FUN_016dd1aa(uVar2,uVar4,0xff);
      *(undefined4 *)(iVar3 + 0x100) = *(undefined4 *)(uVar4 + 0x100);
      return 1;
    }
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_ed25519ph.c",0x2c);
  }
  return 0;
}

