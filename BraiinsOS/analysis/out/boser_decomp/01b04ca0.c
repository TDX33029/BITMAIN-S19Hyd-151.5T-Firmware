// FUN_01b04ca0 @ 01b04ca0 size=620 calls_out=12 calls_in=0
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

void FUN_01b04ca0(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if (((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_2[2] == 0)) {
    uVar4 = 0x9f;
    uVar2 = 0x43;
  }
  else {
    uVar3 = FUN_01afd27c(param_1,auStack_84,0x20000010);
    if ((((int)uVar3 == 0) ||
        (iVar1 = FUN_01afd478(auStack_84,(int)((ulonglong)uVar3 >> 0x20),1,0), iVar1 == 0)) ||
       (iVar1 = FUN_01afd27c(auStack_84,auStack_6c,4), iVar1 == 0)) {
LAB_01b04d5c:
      uVar4 = 0xaa;
    }
    else {
      FUN_01b3d100(*param_2);
      uVar2 = FUN_01b2b938();
      uVar4 = FUN_01b3d648(param_2);
      iVar1 = FUN_01afc3d0(auStack_6c,uVar2,uVar4);
      if (iVar1 == 0) goto LAB_01b04d5c;
      if (((param_3 & 1) == 0) &&
         (((iVar1 = FUN_01afd27c(auStack_84,auStack_3c,0xa0000000), iVar1 == 0 ||
           (iVar1 = FUN_01b040e8(auStack_3c,*param_2), iVar1 == 0)) ||
          (iVar1 = FUN_01afca7c(auStack_84), iVar1 == 0)))) {
        uVar4 = 0xb3;
      }
      else {
        if ((((param_3 & 2) != 0) || (param_2[1] == 0)) ||
           (((iVar1 = FUN_01afd27c(auStack_84,auStack_54,0xa0000001), iVar1 != 0 &&
             (((iVar1 = FUN_01afd27c(auStack_54,auStack_3c,3), iVar1 != 0 &&
               (iVar1 = FUN_01afd168(auStack_3c,0), iVar1 != 0)) &&
              (iVar1 = FUN_01b04ba0(auStack_3c,*param_2,param_2[1],param_2[4],0), iVar1 != 0)))) &&
            (iVar1 = FUN_01afca7c(auStack_84), iVar1 != 0)))) {
          iVar1 = FUN_01afca7c(param_1);
          if (iVar1 != 0) {
            uVar2 = 1;
            goto LAB_01b04d1c;
          }
          uVar4 = 0xc9;
          uVar2 = 0x81;
          goto LAB_01b04d10;
        }
        uVar4 = 0xc3;
      }
    }
    uVar2 = 0x81;
  }
LAB_01b04d10:
  FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar4);
  uVar2 = 0;
  iVar1 = extraout_r1;
LAB_01b04d1c:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,iVar1,local_24 ^ DAT_01d53560,0);
  }
  return;
}

