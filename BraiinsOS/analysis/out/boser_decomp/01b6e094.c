// FUN_01b6e094 @ 01b6e094 size=208 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

undefined4 FUN_01b6e094(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_2 + param_3;
  while( true ) {
    puVar5 = (undefined4 *)*param_2;
    uVar1 = FUN_01afd684(param_1);
    if ((uVar1 == *(byte *)((int)puVar5 + 0xd)) &&
       ((uVar2 = FUN_01afd674(param_1), *(char *)((int)puVar5 + 0xd) == '\0' ||
        (iVar3 = FUN_01bed842(uVar2,puVar5 + 1), iVar3 == 0)))) break;
    param_2 = param_2 + 1;
    if (param_2 == puVar4) {
      FUN_01b053d4(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x5d);
      return 0;
    }
  }
  puVar4 = (undefined4 *)FUN_01b6e07c();
  *param_4 = (int)puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = *puVar5;
  return 1;
}

