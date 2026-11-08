// FUN_016f1504 @ 016f1504 size=284 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c

undefined8 FUN_016f1504(int param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 == 0x20) {
    puVar2 = (undefined4 *)FUN_0177a6c0(0x41);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2 < param_2) {
        if (param_2 < puVar2 + 8) goto LAB_016f161c;
      }
      else if ((param_2 < puVar2) && (puVar2 < param_2 + 8)) {
LAB_016f161c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16f161c);
        (*pcVar1)();
      }
      uVar5 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      puVar2[3] = param_2[3];
      *puVar2 = uVar5;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      uVar5 = param_2[4];
      uVar3 = param_2[5];
      uVar4 = param_2[6];
      puVar2[7] = param_2[7];
      puVar2[4] = uVar5;
      puVar2[6] = uVar4;
      *(undefined1 *)(puVar2 + 0x10) = 0;
      puVar2[5] = uVar3;
      FUN_0177aafc(*(undefined4 *)(param_1 + 8));
      *(undefined4 **)(param_1 + 8) = puVar2;
      return 1;
    }
  }
  else {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x37);
  }
  return 0;
}

