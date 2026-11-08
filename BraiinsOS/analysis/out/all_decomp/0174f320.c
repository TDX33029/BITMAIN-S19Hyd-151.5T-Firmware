// FUN_0174f320 @ 0174f320 size=1664 calls_out=15 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_0174f320(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_b4;
  undefined1 auStack_a4 [20];
  undefined1 auStack_90 [20];
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x4d2);
    goto LAB_0174f3d8;
  }
  if (*(int *)(param_1 + 4) == 0) {
LAB_0174f3b8:
    FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x4d6);
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) == 0)) goto LAB_0174f434;
      goto LAB_0174f3b8;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 0x10) != 0) goto LAB_0174f3b8;
LAB_0174f434:
      if ((((*(int *)(param_1 + 0x14) != 0) || (*(int *)(param_1 + 0x18) != 0)) ||
          (*(int *)(param_1 + 0x1c) != 0)) || (*(int *)(param_1 + 0x20) != 0)) goto LAB_0174f3b8;
      iVar1 = FUN_0174f108(param_1);
      if (iVar1 != 0) {
        uVar4 = 1;
        goto LAB_0174f3dc;
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) == 0) goto LAB_0174f434;
      if (*(int *)(param_1 + 0x14) == 0) goto LAB_0174f3b8;
      if (*(int *)(param_1 + 0x18) == 0) {
        if ((*(int *)(param_1 + 0x1c) != 0) || (*(int *)(param_1 + 0x20) != 0)) goto LAB_0174f3b8;
        local_b4 = 2;
      }
      else {
        if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x20) == 0)) goto LAB_0174f3b8;
        local_b4 = 3;
      }
      iVar1 = FUN_0174f108(param_1);
      if (iVar1 != 0) {
        iVar1 = FUN_017184a8();
        if (iVar1 != 0) {
          FUN_01714208(auStack_a4);
          FUN_01714208(auStack_90);
          FUN_01714208(auStack_7c);
          FUN_01714208(auStack_68);
          FUN_01714208(auStack_54);
          FUN_01714208(auStack_40);
          iVar2 = FUN_0171462c(*(undefined4 *)(param_1 + 0x10));
          if ((((iVar2 == 0) &&
               (iVar2 = FUN_01715760(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4)),
               iVar2 < 0)) && (iVar2 = FUN_0171462c(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0))
             && (iVar2 = FUN_01715760(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4)),
                iVar2 < 0)) {
            iVar2 = FUN_0171d5cc(auStack_a4,*(undefined4 *)(param_1 + 0x10),
                                 *(undefined4 *)(param_1 + 0x14),iVar1);
            if (iVar2 == 0) {
              FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x50c);
              goto LAB_0174f800;
            }
            iVar2 = FUN_01715760(auStack_a4,*(undefined4 *)(param_1 + 4));
            if (iVar2 != 0) {
              FUN_016e9cd0(4,0,0x84,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x510);
              goto LAB_0174f800;
            }
            uVar3 = *(undefined4 *)(param_1 + 0x10);
            uVar4 = FUN_01714250();
            iVar2 = FUN_0171a748(auStack_7c,uVar3,uVar4);
            if (iVar2 == 0) {
LAB_0174f858:
              FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x51a);
              goto LAB_0174f800;
            }
            uVar3 = *(undefined4 *)(param_1 + 0x14);
            uVar4 = FUN_01714250();
            iVar2 = FUN_0171a748(auStack_68,uVar3,uVar4);
            if (iVar2 == 0) goto LAB_0174f858;
            uVar4 = FUN_01714eb4(auStack_7c);
            uVar3 = FUN_01714eb4(auStack_68);
            iVar2 = FUN_0171d5cc(auStack_90,*(undefined4 *)(param_1 + 0xc),
                                 *(undefined4 *)(param_1 + 8),iVar1);
            if (((iVar2 == 0) ||
                (iVar2 = FUN_0171b1c8(0,auStack_a4,auStack_90,auStack_7c,uVar4,iVar1), iVar2 == 0))
               || (iVar2 = FUN_0171b1c8(0,auStack_90,auStack_90,auStack_68,uVar3,iVar1), iVar2 == 0)
               ) {
              FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x522);
              goto LAB_0174f800;
            }
            iVar2 = FUN_01718124(auStack_a4);
            if ((iVar2 == 0) || (iVar2 = FUN_01718124(auStack_90), iVar2 == 0)) {
              FUN_016e9cd0(4,0,0x77,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x528);
              goto LAB_0174f800;
            }
            if (local_b4 != 2) {
              iVar2 = FUN_0171b1c8(0,auStack_a4,*(undefined4 *)(param_1 + 0xc),auStack_7c,uVar4,
                                   iVar1);
              if ((iVar2 == 0) ||
                 (iVar2 = FUN_0171b1c8(0,auStack_90,*(undefined4 *)(param_1 + 0xc),auStack_68,uVar3,
                                       iVar1), iVar2 == 0)) {
                FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x53a);
              }
              else {
                iVar2 = FUN_01715760(auStack_a4,*(undefined4 *)(param_1 + 0x18));
                if ((iVar2 == 0) &&
                   (iVar2 = FUN_01715760(auStack_90,*(undefined4 *)(param_1 + 0x1c)), iVar2 == 0)) {
                  iVar2 = FUN_01715760(*(undefined4 *)(param_1 + 0x20),
                                       *(undefined4 *)(param_1 + 0x10));
                  if (iVar2 < 0) {
                    iVar2 = FUN_0171d5cc(auStack_a4,*(undefined4 *)(param_1 + 0x14),
                                         *(undefined4 *)(param_1 + 0x20),iVar1);
                    if ((iVar2 == 0) ||
                       (iVar2 = FUN_0171b1c8(0,auStack_a4,auStack_a4,*(undefined4 *)(param_1 + 0x10)
                                             ,uVar4,iVar1), iVar2 == 0)) {
                      FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x54d);
                    }
                    else {
                      uVar4 = FUN_01714250();
                      iVar2 = FUN_01715760(auStack_a4,uVar4);
                      if (iVar2 == 0) goto LAB_0174f7a0;
                      FUN_016e9cd0(4,0,0x6f,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x553);
                    }
                  }
                  else {
                    FUN_016e9cd0(4,0,0x6f,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x546);
                  }
                }
                else {
                  FUN_016e9cd0(4,0,0x6f,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x540);
                }
              }
              goto LAB_0174f800;
            }
LAB_0174f7a0:
            uVar4 = 1;
          }
          else {
            FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x508);
LAB_0174f800:
            uVar4 = 0;
          }
          FUN_017046e0(auStack_a4);
          FUN_017046e0(auStack_90);
          FUN_017046e0(auStack_7c);
          FUN_017046e0(auStack_68);
          FUN_017046e0(auStack_54);
          FUN_017046e0(auStack_40);
          FUN_017184e8(iVar1);
          goto LAB_0174f3dc;
        }
        FUN_016e9cd0(4,0,3,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x4f3);
      }
    }
  }
LAB_0174f3d8:
  uVar4 = 0;
LAB_0174f3dc:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}

