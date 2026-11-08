// FUN_016e8b3c @ 016e8b3c size=1460 calls_out=22 calls_in=2
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_016e8b3c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  char local_9d;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == (undefined4 *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x14d);
    goto LAB_016e8bfc;
  }
  *param_2 = 0;
  iVar1 = FUN_016e25e0(param_1,0x20000010);
  if (iVar1 == 0) {
    iVar1 = FUN_016e8910(param_1);
    if (iVar1 != 0) {
      *param_2 = 1;
    }
    goto LAB_016e8c00;
  }
  iVar1 = FUN_016e24e4(param_1,auStack_8c,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_016e2bf0(auStack_8c,&local_98), iVar1 == 0)) ||
      (local_98 != 1 || local_94 != 0)) ||
     (((iVar1 = FUN_016e24e4(auStack_8c,auStack_84,0x20000010), iVar1 == 0 ||
       (iVar1 = FUN_016e24e4(auStack_84,auStack_7c,6), iVar1 == 0)) ||
      (iVar1 = FUN_016e1e1c(auStack_7c), iVar1 != 7)))) {
LAB_016e8bdc:
    uVar11 = 0xf3;
LAB_016e8be8:
    FUN_016e9cd0(0xf,0,0x80,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar11);
  }
  else {
    uVar11 = FUN_016e1e04(auStack_7c);
    iVar1 = FUN_016dd50a(uVar11,&DAT_004280b4,7);
    if (iVar1 != 0) goto LAB_016e8bdc;
    iVar1 = FUN_016e24e4(auStack_84,auStack_5c,2);
    if (((iVar1 == 0) || (iVar1 = FUN_016e2b54(auStack_5c), iVar1 == 0)) ||
       ((iVar1 = FUN_016e1e1c(auStack_84), iVar1 != 0 ||
        (iVar1 = FUN_016e24e4(auStack_8c,auStack_74,0x20000010), iVar1 == 0)))) goto LAB_016e8bdc;
    iVar1 = FUN_016e24e4(auStack_74,auStack_54,4);
    if (iVar1 == 0) goto LAB_016e8bdc;
    iVar1 = FUN_016e24e4(auStack_74,auStack_4c,4);
    if (((iVar1 == 0) || (iVar1 = FUN_016e2814(auStack_74,0,0,3), iVar1 == 0)) ||
       (iVar1 = FUN_016e1e1c(auStack_74), iVar1 != 0)) goto LAB_016e8bdc;
    iVar1 = FUN_016e24e4(auStack_8c,auStack_6c,4);
    if (iVar1 == 0) goto LAB_016e8bdc;
    iVar1 = FUN_016e24e4(auStack_8c,auStack_34,2);
    if (((iVar1 == 0) || (iVar1 = FUN_016e2b54(auStack_34), iVar1 == 0)) ||
       ((iVar1 = FUN_016e2814(auStack_8c,auStack_64,&local_9c,2), iVar1 == 0 ||
        (iVar1 = FUN_016e1e1c(auStack_8c), iVar1 != 0)))) goto LAB_016e8bdc;
    if ((local_9c == 0) ||
       ((iVar1 = FUN_016e1e1c(auStack_64), iVar1 == 1 &&
        (pcVar2 = (char *)FUN_016e1e04(auStack_64), *pcVar2 == '\x01')))) {
      iVar1 = FUN_016e1f3c(auStack_6c,&local_9d);
      if ((iVar1 == 0) || (local_9d != '\x04')) {
        FUN_016e9cd0(0xf,0,0x6f,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x102);
        goto LAB_016e8bfc;
      }
      uVar3 = FUN_016e1e1c(auStack_6c);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_016e1e1c(auStack_6c);
        uVar11 = FUN_016e1e04(auStack_6c);
        FUN_016e1d94(auStack_44,uVar11,uVar3 >> 1);
        iVar1 = FUN_016e1e04(auStack_6c);
        FUN_016e1d94(auStack_3c,iVar1 + (uVar3 >> 1));
        iVar4 = FUN_017141d0();
        iVar5 = FUN_017141d0();
        iVar6 = FUN_017141d0();
        iVar7 = FUN_017141d0();
        iVar8 = FUN_017141d0();
        if ((iVar5 != 0 && iVar4 != 0) && (iVar8 != 0 && (iVar7 != 0 && iVar6 != 0))) {
          puVar10 = &DAT_018b5df0;
          do {
            iVar1 = (*(code *)*puVar10)();
            uVar11 = FUN_0172c608();
            iVar9 = FUN_016e87f4(auStack_34,uVar11);
            if (iVar9 != 0) {
              iVar9 = FUN_01733c3c(iVar1,iVar4,iVar5,iVar6,0);
              if (iVar9 == 0) goto LAB_016e8fe0;
              iVar9 = FUN_016e87f4(auStack_5c,iVar4);
              if (((iVar9 != 0) && (iVar9 = FUN_016e87f4(auStack_54,iVar5), iVar9 != 0)) &&
                 (iVar9 = FUN_016e87f4(auStack_4c,iVar6), iVar9 != 0)) {
                uVar11 = FUN_0172c5e0(iVar1);
                iVar9 = FUN_01736d28(iVar1,uVar11,iVar7,iVar8,0);
                if (iVar9 == 0) goto LAB_016e8fe0;
                iVar9 = FUN_016e87f4(auStack_44,iVar7);
                if (((iVar9 != 0) && (iVar9 = FUN_016e87f4(auStack_3c,iVar8), iVar9 != 0)) &&
                   (*param_2 = 2, iVar1 != 0)) goto LAB_016e8fe4;
              }
              break;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 != (undefined4 *)&UNK_018b5e04);
          FUN_016e9cd0(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x184);
        }
LAB_016e8fe0:
        iVar1 = 0;
LAB_016e8fe4:
        FUN_017046e0(iVar4);
        FUN_017046e0(iVar5);
        FUN_017046e0(iVar6);
        FUN_017046e0(iVar7);
        FUN_017046e0(iVar8);
        goto LAB_016e8c00;
      }
      uVar11 = 0x107;
      goto LAB_016e8be8;
    }
    FUN_016e9cd0(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0xfa);
  }
LAB_016e8bfc:
  iVar1 = 0;
LAB_016e8c00:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar1;
}

