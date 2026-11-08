// FUN_01b041e4 @ 01b041e4 size=1380 calls_out=22 calls_in=2
// strings: /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c | /aws-lc/crypto/ec_extra/ec_asn1.c

int FUN_01b041e4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
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
  
  local_2c = DAT_01d53560;
  if (param_2 == (undefined4 *)0x0) {
    uVar14 = 0x14d;
    uVar10 = 0x43;
    uVar1 = 0xe;
  }
  else {
    *param_2 = 0;
    iVar12 = FUN_01afdebc(param_1,0x20000010);
    if (iVar12 == 0) {
      iVar12 = FUN_01b03fc8(param_1);
      if (iVar12 != 0) {
        *param_2 = 1;
      }
      goto LAB_01b04280;
    }
    iVar12 = FUN_01afddc0(param_1,auStack_8c,0x20000010);
    if ((((iVar12 == 0) || (iVar12 = FUN_01afe3d0(auStack_8c,&local_98), iVar12 == 0)) ||
        (local_98 != 1 || local_94 != 0)) ||
       (((iVar12 = FUN_01afddc0(auStack_8c,auStack_84,0x20000010), iVar12 == 0 ||
         (iVar12 = FUN_01afddc0(auStack_84,auStack_7c,6), iVar12 == 0)) ||
        (iVar12 = FUN_01afd684(auStack_7c), iVar12 != 7)))) {
LAB_01b042c0:
      uVar14 = 0xf3;
LAB_01b042d0:
      uVar10 = 0x80;
    }
    else {
      uVar14 = FUN_01afd674(auStack_7c);
      iVar12 = FUN_01bed842(uVar14,&DAT_00539cd7,7);
      if (iVar12 != 0) goto LAB_01b042c0;
      iVar12 = FUN_01afddc0(auStack_84,auStack_5c,2);
      if ((((iVar12 == 0) || (iVar12 = FUN_01afe334(auStack_5c), iVar12 == 0)) ||
          ((((iVar12 = FUN_01afd684(auStack_84), iVar12 != 0 ||
             ((((iVar12 = FUN_01afddc0(auStack_8c,auStack_74,0x20000010), iVar12 == 0 ||
                (iVar12 = FUN_01afddc0(auStack_74,auStack_54,4), iVar12 == 0)) ||
               (iVar12 = FUN_01afddc0(auStack_74,auStack_4c,4), iVar12 == 0)) ||
              ((iVar12 = FUN_01afe054(auStack_74,0,0,3), iVar12 == 0 ||
               (iVar12 = FUN_01afd684(auStack_74), iVar12 != 0)))))) ||
            (iVar12 = FUN_01afddc0(auStack_8c,auStack_6c,4), iVar12 == 0)) ||
           ((iVar12 = FUN_01afddc0(auStack_8c,auStack_34,2), iVar12 == 0 ||
            (iVar12 = FUN_01afe334(auStack_34), iVar12 == 0)))))) ||
         ((iVar12 = FUN_01afe054(auStack_8c,auStack_64,&local_9c,2), iVar12 == 0 ||
          (iVar12 = FUN_01afd684(auStack_8c), iVar12 != 0)))) goto LAB_01b042c0;
      if ((local_9c == 0) ||
         ((iVar12 = FUN_01afd684(auStack_64), iVar12 == 1 &&
          (pcVar2 = (char *)FUN_01afd674(auStack_64), *pcVar2 == '\x01')))) {
        iVar12 = FUN_01afd780(auStack_6c,&local_9d);
        if ((iVar12 == 0) || (local_9d != '\x04')) {
          uVar14 = 0x102;
          uVar10 = 0x6f;
          goto LAB_01b042d4;
        }
        uVar3 = FUN_01afd684(auStack_6c);
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_01afd684(auStack_6c);
          uVar3 = uVar3 >> 1;
          uVar14 = FUN_01afd674(auStack_6c);
          FUN_01afd61c(auStack_44,uVar14,uVar3);
          iVar12 = FUN_01afd674(auStack_6c);
          FUN_01afd61c(auStack_3c,iVar12 + uVar3,uVar3);
          iVar4 = FUN_01b2adb8();
          iVar5 = FUN_01b2adb8();
          iVar6 = FUN_01b2adb8();
          iVar7 = FUN_01b2adb8();
          iVar8 = FUN_01b2adb8();
          if ((iVar5 != 0 && iVar4 != 0) && (iVar8 != 0 && (iVar7 != 0 && iVar6 != 0))) {
            puVar11 = &DAT_01d34e08;
            iVar13 = 0;
            do {
              iVar12 = (*(code *)*puVar11)();
              uVar14 = FUN_01b3d100();
              iVar9 = FUN_01b03eb0(auStack_34,uVar14);
              if (iVar9 != 0) {
                iVar13 = FUN_01b423c8(iVar12,iVar4,iVar5,iVar6,0);
                if (iVar13 == 0) goto LAB_01b045a0;
                iVar13 = FUN_01b03eb0(auStack_5c,iVar4);
                if (((iVar13 != 0) && (iVar13 = FUN_01b03eb0(auStack_54,iVar5), iVar13 != 0)) &&
                   (iVar13 = FUN_01b03eb0(auStack_4c,iVar6), iVar13 != 0)) {
                  uVar14 = FUN_01b3d0e0(iVar12);
                  iVar13 = FUN_01b44ebc(iVar12,uVar14,iVar7,iVar8,0);
                  if (iVar13 == 0) goto LAB_01b045a0;
                  iVar13 = FUN_01b03eb0(auStack_44,iVar7);
                  if (((iVar13 != 0) && (iVar13 = FUN_01b03eb0(auStack_3c,iVar8), iVar13 != 0)) &&
                     (*param_2 = 2, iVar12 != 0)) goto LAB_01b045a4;
                }
                break;
              }
              iVar13 = iVar13 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar13 != 5);
            FUN_01b053d4(0xf,0,0x7b,"/aws-lc/crypto/ec_extra/ec_asn1.c",0x184);
          }
LAB_01b045a0:
          iVar12 = 0;
LAB_01b045a4:
          FUN_01b1f904(iVar4);
          FUN_01b1f904(iVar5);
          FUN_01b1f904(iVar6);
          FUN_01b1f904(iVar7);
          FUN_01b1f904(iVar8);
          goto LAB_01b04280;
        }
        uVar14 = 0x107;
        goto LAB_01b042d0;
      }
      uVar14 = 0xfa;
      uVar10 = 0x7b;
    }
LAB_01b042d4:
    uVar1 = 0xf;
  }
  iVar12 = 0;
  FUN_01b053d4(uVar1,0,uVar10,"/aws-lc/crypto/ec_extra/ec_asn1.c",uVar14);
LAB_01b04280:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar12;
}

