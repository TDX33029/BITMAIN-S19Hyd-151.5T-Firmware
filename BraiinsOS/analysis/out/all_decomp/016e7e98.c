// FUN_016e7e98 @ 016e7e98 size=300 calls_out=5 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa_asn1.c | /aws-lc/crypto/dsa/dsa_asn1.c

void FUN_016e7e98(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [24];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_34,0x20000010,0);
  if (iVar1 != 0) {
    if (*param_2 == 0) {
LAB_016e7f9c:
      FUN_016e9cd0(10,0,0x43,"/aws-lc/crypto/dsa/dsa_asn1.c",0x5e);
    }
    else {
      iVar1 = FUN_016e05ec(auStack_34);
      if (iVar1 != 0) {
        if (param_2[1] == 0) goto LAB_016e7f9c;
        iVar1 = FUN_016e05ec(auStack_34);
        if ((iVar1 != 0) &&
           (uVar4 = FUN_016e1048(param_1), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
           (int)uVar4 != 0)) {
          uVar2 = 1;
          goto LAB_016e7f5c;
        }
      }
    }
  }
  FUN_016e9cd0(10,0,0x6a,"/aws-lc/crypto/dsa/dsa_asn1.c",0x7b);
  uVar2 = 0;
  uVar3 = extraout_r1;
LAB_016e7f5c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

