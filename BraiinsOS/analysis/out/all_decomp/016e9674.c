// FUN_016e9674 @ 016e9674 size=652 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

void FUN_016e9674(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_2[2] == 0)) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x9f);
    iVar1 = extraout_r1_00;
  }
  else {
    uVar4 = FUN_016e1884(param_1,auStack_84,0x20000010);
    if ((((int)uVar4 == 0) ||
        (iVar1 = FUN_016e1c54(auStack_84,(int)((ulonglong)uVar4 >> 0x20),1,0), iVar1 == 0)) ||
       (iVar1 = FUN_016e1884(auStack_84,auStack_6c,4), iVar1 == 0)) {
LAB_016e9700:
      uVar3 = 0xaa;
    }
    else {
      FUN_0172c608(*param_2);
      uVar3 = FUN_01714f1c();
      uVar2 = FUN_0172caa4(param_2);
      iVar1 = FUN_016e0748(auStack_6c,uVar3,uVar2);
      if (iVar1 == 0) goto LAB_016e9700;
      if ((param_3 & 1) != 0) {
LAB_016e97d8:
        if (((param_3 & 2) == 0) && (param_2[1] != 0)) {
          iVar1 = FUN_016e1884(auStack_84,auStack_54,0xa0000001);
          if (((iVar1 == 0) ||
              (((iVar1 = FUN_016e1884(auStack_54,auStack_3c,3), iVar1 == 0 ||
                (iVar1 = FUN_016e17e0(auStack_3c,0), iVar1 == 0)) ||
               (iVar1 = FUN_016e956c(auStack_3c,*param_2,param_2[1],param_2[4],0), iVar1 == 0)))) ||
             (iVar1 = FUN_016e1048(auStack_84), iVar1 == 0)) {
            uVar3 = 0xc3;
            goto LAB_016e970c;
          }
        }
        iVar1 = FUN_016e1048(param_1);
        if (iVar1 != 0) {
          uVar3 = 1;
          goto LAB_016e9724;
        }
        FUN_016e9cd0(0xf,0,0x81,"/aws-lc/crypto/ec_extra/ec_asn1.c",0xc9);
        iVar1 = extraout_r1_01;
        goto LAB_016e9720;
      }
      iVar1 = FUN_016e1884(auStack_84,auStack_3c,0xa0000000);
      if (((iVar1 != 0) && (iVar1 = FUN_016e8a34(auStack_3c,*param_2), iVar1 != 0)) &&
         (iVar1 = FUN_016e1048(auStack_84), iVar1 != 0)) goto LAB_016e97d8;
      uVar3 = 0xb3;
    }
LAB_016e970c:
    FUN_016e9cd0(0xf,0,0x81,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar3);
    iVar1 = extraout_r1;
  }
LAB_016e9720:
  uVar3 = 0;
LAB_016e9724:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,iVar1,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

