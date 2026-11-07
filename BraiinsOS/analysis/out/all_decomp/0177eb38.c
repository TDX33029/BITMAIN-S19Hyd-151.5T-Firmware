// FUN_0177eb38 @ 0177eb38 size=240 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

undefined8 FUN_0177eb38(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_2 + param_3;
  do {
    puVar5 = (undefined4 *)*param_2;
    uVar1 = FUN_016e1e1c(param_1);
    if (uVar1 == *(byte *)((int)puVar5 + 0xd)) {
      uVar2 = FUN_016e1e04(param_1);
      if ((*(char *)((int)puVar5 + 0xd) == '\0') ||
         (iVar3 = FUN_016dd50a(uVar2,puVar5 + 1), iVar3 == 0)) {
        puVar4 = (undefined4 *)FUN_0177eb20();
        *param_4 = (int)puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        *puVar4 = *puVar5;
        return 1;
      }
    }
    param_2 = param_2 + 1;
    if (param_2 == puVar4) {
      FUN_016e9cd0(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x5d);
      return 0;
    }
  } while( true );
}

