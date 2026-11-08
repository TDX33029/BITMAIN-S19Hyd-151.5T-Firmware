// FUN_01b55afc @ 01b55afc size=1276 calls_out=16 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_01b55afc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a4 [20];
  undefined1 auStack_90 [20];
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_1 == 0) {
    uVar6 = 0x4d2;
    uVar5 = 0x43;
    uVar1 = 0xe;
LAB_01b55b54:
    FUN_01b053d4(uVar1,0,uVar5,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar6);
  }
  else {
    uVar2 = FUN_01b1ebbc();
    if (uVar2 == 5) {
      uVar6 = 0x4d6;
      uVar5 = 0x68;
LAB_01b55ba8:
      uVar1 = 4;
      goto LAB_01b55b54;
    }
    iVar3 = FUN_01b55940(param_1);
    if (iVar3 != 0) {
      if ((0x13U >> (uVar2 & 0xff) & 1) != 0) {
        uVar5 = 1;
        goto LAB_01b55b5c;
      }
      iVar3 = FUN_01b2e788();
      if (iVar3 == 0) {
        uVar6 = 0x4f3;
        uVar5 = 3;
        goto LAB_01b55ba8;
      }
      FUN_01b2ae48(auStack_a4);
      FUN_01b2ae48(auStack_90);
      FUN_01b2ae48(auStack_7c);
      FUN_01b2ae48(auStack_68);
      FUN_01b2ae48(auStack_54);
      FUN_01b2ae48(auStack_40);
      iVar4 = FUN_01b2b230(*(undefined4 *)(param_1 + 0x10));
      if ((((iVar4 == 0) &&
           (iVar4 = FUN_01b2be38(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4)),
           iVar4 < 0)) && (iVar4 = FUN_01b2b230(*(undefined4 *)(param_1 + 0x14)), iVar4 == 0)) &&
         (iVar4 = FUN_01b2be38(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4)),
         iVar4 < 0)) {
        iVar4 = FUN_01b32c9c(auStack_a4,*(undefined4 *)(param_1 + 0x10),
                             *(undefined4 *)(param_1 + 0x14),iVar3);
        if (iVar4 == 0) {
          uVar1 = 0x50c;
          goto LAB_01b55d10;
        }
        iVar4 = FUN_01b2be38(auStack_a4,*(undefined4 *)(param_1 + 4));
        if (iVar4 != 0) {
          uVar1 = 0x510;
          uVar6 = 0x84;
          goto LAB_01b55c50;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = FUN_01b2ae78();
        iVar4 = FUN_01b30698(auStack_7c,uVar6,uVar5);
        if (iVar4 == 0) {
LAB_01b55d68:
          uVar1 = 0x51a;
LAB_01b55d10:
          uVar6 = 3;
          goto LAB_01b55c50;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x14);
        uVar5 = FUN_01b2ae78();
        iVar4 = FUN_01b30698(auStack_68,uVar6,uVar5);
        if (iVar4 == 0) goto LAB_01b55d68;
        uVar5 = FUN_01b2b8d0(auStack_7c);
        uVar6 = FUN_01b2b8d0(auStack_68);
        iVar4 = FUN_01b32c9c(auStack_90,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                             iVar3);
        if (((iVar4 == 0) ||
            (iVar4 = FUN_01b30ff4(0,auStack_a4,auStack_90,auStack_7c,uVar5,iVar3), iVar4 == 0)) ||
           (iVar4 = FUN_01b30ff4(0,auStack_90,auStack_90,auStack_68,uVar6,iVar3), iVar4 == 0)) {
          uVar1 = 0x522;
          goto LAB_01b55d10;
        }
        iVar4 = FUN_01b2e54c(auStack_a4);
        if ((iVar4 == 0) || (iVar4 = FUN_01b2e54c(auStack_90), iVar4 == 0)) {
          uVar1 = 0x528;
          uVar6 = 0x77;
          goto LAB_01b55c50;
        }
        if (uVar2 != 2) {
          iVar4 = FUN_01b30ff4(0,auStack_a4,*(undefined4 *)(param_1 + 0xc),auStack_7c,uVar5,iVar3);
          if ((iVar4 != 0) &&
             (iVar4 = FUN_01b30ff4(0,auStack_90,*(undefined4 *)(param_1 + 0xc),auStack_68,uVar6,
                                   iVar3), iVar4 != 0)) {
            iVar4 = FUN_01b2be38(auStack_a4,*(undefined4 *)(param_1 + 0x18));
            if ((iVar4 == 0) &&
               (iVar4 = FUN_01b2be38(auStack_90,*(undefined4 *)(param_1 + 0x1c)), iVar4 == 0)) {
              iVar4 = FUN_01b2be38(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
              if (iVar4 < 0) {
                iVar4 = FUN_01b32c9c(auStack_a4,*(undefined4 *)(param_1 + 0x14),
                                     *(undefined4 *)(param_1 + 0x20),iVar3);
                if ((iVar4 == 0) ||
                   (iVar4 = FUN_01b30ff4(0,auStack_a4,auStack_a4,*(undefined4 *)(param_1 + 0x10),
                                         uVar5,iVar3), iVar4 == 0)) {
                  uVar1 = 0x54d;
                  goto LAB_01b55d10;
                }
                uVar5 = FUN_01b2ae78();
                iVar4 = FUN_01b2be38(auStack_a4,uVar5);
                if (iVar4 == 0) goto LAB_01b55e84;
                uVar1 = 0x553;
              }
              else {
                uVar1 = 0x546;
              }
            }
            else {
              uVar1 = 0x540;
            }
            uVar6 = 0x6f;
            goto LAB_01b55c50;
          }
          uVar1 = 0x53a;
          goto LAB_01b55d10;
        }
LAB_01b55e84:
        uVar5 = 1;
      }
      else {
        uVar1 = 0x508;
        uVar6 = 0x68;
LAB_01b55c50:
        uVar5 = 0;
        FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar1);
      }
      FUN_01b1f904(auStack_a4);
      FUN_01b1f904(auStack_90);
      FUN_01b1f904(auStack_7c);
      FUN_01b1f904(auStack_68);
      FUN_01b1f904(auStack_54);
      FUN_01b1f904(auStack_40);
      FUN_01b2e7c8(iVar3);
      goto LAB_01b55b5c;
    }
  }
  uVar5 = 0;
LAB_01b55b5c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar5;
}

