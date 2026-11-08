// FUN_01b04778 @ 01b04778 size=1020 calls_out=20 calls_in=1
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_01b04778(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char local_5d;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_1,auStack_4c,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_01afe3d0(auStack_4c,&local_58), iVar1 == 0)) ||
      (local_58 != 1 || local_54 != 0)) ||
     (iVar1 = FUN_01afddc0(auStack_4c,auStack_44,4), iVar1 == 0)) {
    FUN_01b053d4(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x2a);
  }
  else {
    local_5c = 0;
    iVar1 = FUN_01afdebc(auStack_4c,0xa0000000);
    if (iVar1 == 0) {
      iVar1 = param_2;
      if (param_2 == 0) {
        uVar8 = 0x4f;
        uVar4 = 0x72;
        goto LAB_01b04874;
      }
LAB_01b04934:
      iVar5 = FUN_01b3d7ac();
      if (iVar5 == 0) goto LAB_01b0487c;
      iVar2 = FUN_01b451a8(iVar5,iVar1);
      iVar6 = 0;
      if (iVar2 != 0) {
        *(uint *)(iVar5 + 0x1c) = (uint)(local_5c == 2);
        uVar4 = FUN_01afd674(auStack_44);
        uVar8 = FUN_01afd684(auStack_44);
        iVar6 = FUN_01b2ba40(uVar4,uVar8,0);
        iVar2 = FUN_01b42428(iVar1);
        *(int *)(iVar5 + 4) = iVar2;
        if (((iVar6 != 0) && (iVar2 != 0)) && (iVar2 = FUN_01b41bdc(iVar5,iVar6), iVar2 != 0)) {
          iVar2 = FUN_01afdebc(auStack_4c,0xa0000001);
          if (iVar2 == 0) {
            iVar1 = FUN_01b446c0(iVar1,*(int *)(iVar5 + 4) + 4,*(int *)(iVar5 + 8) + 0x14);
            if (iVar1 != 0) {
              *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 2;
LAB_01b04ac4:
              iVar1 = FUN_01afd684(auStack_4c);
              if (iVar1 != 0) {
                uVar4 = 0x8a;
                goto LAB_01b049f8;
              }
              iVar1 = FUN_01b455d0(iVar5);
              if (iVar1 != 0) {
                FUN_01b1f904(iVar6);
                goto LAB_01b04b2c;
              }
            }
          }
          else {
            iVar2 = FUN_01afddc0(auStack_4c,auStack_3c,0xa0000001);
            if ((((iVar2 != 0) && (iVar2 = FUN_01afddc0(auStack_3c,auStack_34,3), iVar2 != 0)) &&
                (iVar2 = FUN_01afd780(auStack_34,&local_5d), iVar2 != 0)) &&
               ((local_5d == '\0' && (iVar2 = FUN_01afd684(auStack_34), iVar2 != 0)))) {
              uVar7 = *(undefined4 *)(iVar5 + 4);
              uVar4 = FUN_01afd674(auStack_34);
              uVar8 = FUN_01afd684(auStack_34);
              iVar1 = FUN_01b53fb8(iVar1,uVar7,uVar4,uVar8,0);
              if ((iVar1 != 0) && (iVar1 = FUN_01afd684(auStack_3c), iVar1 == 0)) {
                pbVar3 = (byte *)FUN_01afd674(auStack_34);
                *(uint *)(iVar5 + 0x10) = *pbVar3 & 0xfffffffe;
                goto LAB_01b04ac4;
              }
            }
            uVar4 = 0x76;
LAB_01b049f8:
            FUN_01b053d4(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar4);
          }
        }
      }
    }
    else {
      iVar1 = FUN_01afddc0(auStack_4c,auStack_34,0xa0000000);
      if (iVar1 == 0) {
        uVar8 = 0x3a;
        uVar4 = 0x80;
      }
      else {
        iVar1 = FUN_01b041e4(auStack_34,&local_5c);
        if ((iVar1 == 0) || (local_5c == 0)) goto LAB_01b0487c;
        if ((param_2 == 0) || (iVar5 = FUN_01b44b4c(param_2,iVar1,0), iVar1 = param_2, iVar5 == 0))
        {
          iVar5 = FUN_01afd684(auStack_34);
          if (iVar5 == 0) goto LAB_01b04934;
          uVar8 = 0x49;
          uVar4 = 0x80;
        }
        else {
          uVar8 = 0x45;
          uVar4 = 0x82;
        }
      }
LAB_01b04874:
      FUN_01b053d4(0xf,0,uVar4,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar8);
LAB_01b0487c:
      iVar6 = 0;
      iVar5 = 0;
    }
    FUN_01b3d538(iVar5);
    FUN_01b1f904(iVar6);
  }
  iVar5 = 0;
LAB_01b04b2c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar5;
}

