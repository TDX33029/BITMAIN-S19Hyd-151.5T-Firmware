// FUN_016f1624 @ 016f1624 size=392 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c | /aws-lc/crypto/evp_extra/p_x25519_asn1.c

undefined8 FUN_016f1624(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 == 0x20) {
    if (param_4 == 0 || param_5 == 0x20) {
      iVar2 = FUN_0177a6c0(0x41);
      if (iVar2 == 0) {
        return 0;
      }
      puVar5 = (undefined4 *)(iVar2 + 0x20);
      if (puVar5 < param_2) {
        if (param_2 < (undefined4 *)(iVar2 + 0x40U)) goto LAB_016f1790;
      }
      else if ((param_2 < puVar5) && (puVar5 < param_2 + 8)) {
LAB_016f1790:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16f1790);
        (*pcVar1)();
      }
      uVar7 = param_2[1];
      uVar6 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(iVar2 + 0x20) = *param_2;
      *(undefined4 *)(iVar2 + 0x2c) = uVar3;
      *(undefined4 *)(iVar2 + 0x24) = uVar7;
      *(undefined4 *)(iVar2 + 0x28) = uVar6;
      uVar3 = param_2[4];
      uVar7 = param_2[5];
      uVar6 = param_2[6];
      *(undefined4 *)(iVar2 + 0x3c) = param_2[7];
      *(undefined4 *)(iVar2 + 0x30) = uVar3;
      *(undefined4 *)(iVar2 + 0x34) = uVar7;
      *(undefined4 *)(iVar2 + 0x38) = uVar6;
      FUN_01729acc(iVar2);
      *(undefined1 *)(iVar2 + 0x40) = 1;
      if ((param_5 == 0 || param_4 == 0) ||
         (iVar4 = FUN_016dd50a(iVar2,param_4,param_5), iVar4 == 0)) {
        FUN_0177aafc(*(undefined4 *)(param_1 + 8));
        *(int *)(param_1 + 8) = iVar2;
        return 1;
      }
      FUN_0177aafc(iVar2);
      uVar3 = 0x2c;
    }
    else {
      uVar3 = 0x1c;
    }
  }
  else {
    uVar3 = 0x17;
  }
  FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_x25519_asn1.c",uVar3);
  return 0;
}

