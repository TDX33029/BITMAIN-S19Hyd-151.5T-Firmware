// FUN_01b6e168 @ 01b6e168 size=180 calls_out=2 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

undefined4 FUN_01b6e168(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar3 = 0;
  if (param_1 == 0x40) {
    *param_2 = 0;
LAB_01b6e1c8:
    uVar2 = 1;
  }
  else {
    puVar4 = &DAT_01d3b0fc;
    do {
      piVar5 = (int *)*puVar4;
      if (*piVar5 == param_1) {
        piVar1 = (int *)FUN_01b6e07c();
        *param_2 = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          *piVar1 = *piVar5;
          goto LAB_01b6e1c8;
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 5);
    FUN_01b053d4(4,0,0x80,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",0x134);
    uVar2 = 0;
  }
  return uVar2;
}

