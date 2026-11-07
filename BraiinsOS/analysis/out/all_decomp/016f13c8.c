// FUN_016f13c8 @ 016f13c8 size=308 calls_out=1 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c

undefined8 FUN_016f13c8(int param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 0x40) == '\0') {
    FUN_016e9cd0(6,0,0x82,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x4c);
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    *param_3 = 0x20;
  }
  else {
    if (*param_3 < 0x20) {
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",0x56);
      return 0;
    }
    puVar4 = (undefined4 *)(iVar2 + 0x20);
    if (param_2 < puVar4) {
      if (puVar4 < param_2 + 8) {
LAB_016f14d4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16f14d4);
        (*pcVar1)();
      }
    }
    else if ((puVar4 < param_2) && (param_2 < (undefined4 *)(iVar2 + 0x40U))) goto LAB_016f14d4;
    uVar6 = *(undefined4 *)(iVar2 + 0x20);
    uVar5 = *(undefined4 *)(iVar2 + 0x24);
    uVar3 = *(undefined4 *)(iVar2 + 0x28);
    param_2[3] = *(undefined4 *)(iVar2 + 0x2c);
    *param_2 = uVar6;
    param_2[1] = uVar5;
    param_2[2] = uVar3;
    uVar6 = *(undefined4 *)(iVar2 + 0x30);
    uVar5 = *(undefined4 *)(iVar2 + 0x34);
    uVar3 = *(undefined4 *)(iVar2 + 0x38);
    param_2[7] = *(undefined4 *)(iVar2 + 0x3c);
    param_2[4] = uVar6;
    param_2[5] = uVar5;
    param_2[6] = uVar3;
    *param_3 = 0x20;
  }
  return 1;
}

