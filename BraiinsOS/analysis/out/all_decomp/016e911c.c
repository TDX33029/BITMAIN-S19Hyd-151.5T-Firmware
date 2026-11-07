// FUN_016e911c @ 016e911c size=1064 calls_out=20 calls_in=1
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_016e911c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  char local_55;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_1,auStack_44,0x20000010,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_016e2bf0(auStack_44,&local_50), iVar1 == 0)) ||
      (local_50 != 1 || local_4c != 0)) ||
     (iVar1 = FUN_016e24e4(auStack_44,auStack_3c,4), iVar1 == 0)) {
    FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x2a);
  }
  else {
    local_54 = 0;
    iVar1 = FUN_016e25e0(auStack_44,0xa0000000);
    if (iVar1 == 0) {
      iVar1 = param_2;
      if (param_2 == 0) {
        FUN_016e9cd0(0xf,0,0x72,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x4f);
        goto LAB_016e9424;
      }
LAB_016e91d0:
      iVar2 = FUN_0172cc2c();
      if (iVar2 == 0) goto LAB_016e9424;
      iVar3 = FUN_01737020(iVar2,iVar1);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        *(uint *)(iVar2 + 0x1c) = (uint)(local_54 == 2);
        uVar4 = FUN_016e1e04(auStack_3c);
        uVar5 = FUN_016e1e1c(auStack_3c);
        iVar3 = FUN_017150f4(uVar4,uVar5,0);
        iVar6 = FUN_01733c9c(iVar1);
        *(int *)(iVar2 + 4) = iVar6;
        if (((iVar3 != 0) && (iVar6 != 0)) && (iVar6 = FUN_01733388(iVar2,iVar3), iVar6 != 0)) {
          iVar6 = FUN_016e25e0(auStack_44,0xa0000001);
          if (iVar6 == 0) {
            iVar1 = FUN_01736458(iVar1,*(int *)(iVar2 + 4) + 4,*(int *)(iVar2 + 8) + 0x14);
            if (iVar1 != 0) {
              *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 2;
LAB_016e9468:
              iVar1 = FUN_016e1e1c(auStack_44);
              if (iVar1 != 0) {
                uVar4 = 0x8a;
                goto LAB_016e94a8;
              }
              iVar1 = FUN_017374c4(iVar2);
              if (iVar1 != 0) {
                FUN_017046e0(iVar3);
                goto LAB_016e935c;
              }
            }
          }
          else {
            iVar6 = FUN_016e24e4(auStack_44,auStack_34,0xa0000001);
            if ((((iVar6 != 0) && (iVar6 = FUN_016e24e4(auStack_34,auStack_2c,3), iVar6 != 0)) &&
                (iVar6 = FUN_016e1f3c(auStack_2c,&local_55), iVar6 != 0)) &&
               ((local_55 == '\0' && (iVar6 = FUN_016e1e1c(auStack_2c), iVar6 != 0)))) {
              uVar8 = *(undefined4 *)(iVar2 + 4);
              uVar4 = FUN_016e1e04(auStack_2c);
              uVar5 = FUN_016e1e1c(auStack_2c);
              iVar1 = FUN_0174d02c(iVar1,uVar8,uVar4,uVar5,0);
              if ((iVar1 != 0) && (iVar1 = FUN_016e1e1c(auStack_34), iVar1 == 0)) {
                pbVar7 = (byte *)FUN_016e1e04(auStack_2c);
                *(uint *)(iVar2 + 0x10) = *pbVar7 & 0xfffffffe;
                goto LAB_016e9468;
              }
            }
            uVar4 = 0x76;
LAB_016e94a8:
            FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar4);
          }
        }
      }
    }
    else {
      iVar1 = FUN_016e24e4(auStack_44,auStack_2c,0xa0000000);
      if (iVar1 == 0) {
        FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x3a);
      }
      else {
        iVar1 = FUN_016e8b3c(auStack_2c,&local_54);
        if ((iVar1 != 0) && (local_54 != 0)) {
          if (param_2 != 0) {
            iVar2 = FUN_01736960(param_2,iVar1,0);
            iVar1 = param_2;
            if (iVar2 != 0) {
              FUN_016e9cd0(0xf,0,0x82,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x45);
              goto LAB_016e9424;
            }
          }
          iVar2 = FUN_016e1e1c(auStack_2c);
          if (iVar2 == 0) goto LAB_016e91d0;
          FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x49);
        }
      }
LAB_016e9424:
      iVar3 = 0;
      iVar2 = 0;
    }
    FUN_0172c984(iVar2);
    FUN_017046e0(iVar3);
  }
  iVar2 = 0;
LAB_016e935c:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

