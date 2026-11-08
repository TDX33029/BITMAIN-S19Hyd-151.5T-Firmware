// FUN_016ee2ec @ 016ee2ec size=280 calls_out=3 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_ed25519_asn1.c

undefined8 FUN_016ee2ec(int param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_3 == 0x20) {
    iVar2 = FUN_0177a6c0(0x41);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + 0x20);
      if (puVar4 < param_2) {
        if (param_2 < (undefined4 *)(iVar2 + 0x40U)) goto LAB_016ee400;
      }
      else if ((param_2 < puVar4) && (puVar4 < param_2 + 8)) {
LAB_016ee400:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x16ee400);
        (*pcVar1)();
      }
      uVar6 = param_2[1];
      uVar3 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)(iVar2 + 0x20) = *param_2;
      *(undefined4 *)(iVar2 + 0x24) = uVar6;
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
      *(undefined4 *)(iVar2 + 0x2c) = uVar5;
      uVar3 = param_2[6];
      uVar6 = param_2[4];
      uVar5 = param_2[5];
      *(undefined4 *)(iVar2 + 0x3c) = param_2[7];
      *(undefined4 *)(iVar2 + 0x30) = uVar6;
      *(undefined4 *)(iVar2 + 0x34) = uVar5;
      *(undefined4 *)(iVar2 + 0x38) = uVar3;
      *(undefined1 *)(iVar2 + 0x40) = 0;
      FUN_0177aafc(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = iVar2;
      return 1;
    }
  }
  else {
    FUN_016e9cd0(6,0,0x66,"/aws-lc/crypto/evp_extra/p_ed25519_asn1.c",0x3b);
  }
  return 0;
}

