// FUN_01b6e944 @ 01b6e944 size=284 calls_out=2 calls_in=0
// strings: /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c | /aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c

int FUN_01b6e944(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if ((param_2 == 0 || param_1 == (undefined4 *)0x0) ||
     (param_4 == (undefined4 *)0x0 || param_3 == 0)) {
    return 0;
  }
  iVar1 = FUN_01b6df8c(*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = *(undefined4 *)(param_1[1] + 4);
  }
  iVar1 = FUN_01b6df8c(uVar2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)param_1[2];
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = *puVar3;
    if ((int)puVar3[1] < 0) {
      uVar5 = 0x1eb;
      uVar2 = 0x1f5;
      goto LAB_01b6e9dc;
    }
  }
  piVar4 = (int *)param_1[3];
  *param_4 = uVar2;
  if (piVar4 == (int *)0x0) {
    return iVar1;
  }
  if (*piVar4 == 1 && piVar4[1] == 0) {
    return iVar1;
  }
  uVar5 = 500;
  uVar2 = 0x1f6;
LAB_01b6e9dc:
  FUN_01b053d4(4,0,uVar2,"/aws-lc/crypto/rsa_extra/rsassa_pss_asn1.c",uVar5);
  return 0;
}

