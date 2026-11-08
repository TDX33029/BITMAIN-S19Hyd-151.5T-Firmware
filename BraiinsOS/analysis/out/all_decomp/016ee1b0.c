// FUN_016ee1b0 @ 016ee1b0 size=308 calls_out=1 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c | /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

undefined8 FUN_016ee1b0(int param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (*(char *)(puVar3 + 0x10) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0x50);
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    *param_3 = 0x20;
  }
  else {
    if (*param_3 < 0x20) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0x5a);
      return 0;
    }
    if (param_2 < puVar3) {
      if (puVar3 < param_2 + 8) {
LAB_016ee2bc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16ee2bc);
        (*pcVar1)();
      }
    }
    else if ((puVar3 < param_2) && (param_2 < puVar3 + 8)) goto LAB_016ee2bc;
    uVar5 = *puVar3;
    uVar4 = puVar3[1];
    uVar2 = puVar3[2];
    param_2[3] = puVar3[3];
    *param_2 = uVar5;
    param_2[1] = uVar4;
    param_2[2] = uVar2;
    uVar5 = puVar3[4];
    uVar4 = puVar3[5];
    uVar2 = puVar3[6];
    param_2[7] = puVar3[7];
    param_2[4] = uVar5;
    param_2[5] = uVar4;
    param_2[6] = uVar2;
    *param_3 = 0x20;
  }
  return 1;
}

