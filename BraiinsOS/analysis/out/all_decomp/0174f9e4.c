// FUN_0174f9e4 @ 0174f9e4 size=1164 calls_out=25 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_0174f9e4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_64;
  undefined4 local_60;
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [24];
  undefined1 local_30 [4];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x5bb);
  }
  else {
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
      if (*(int *)(param_1 + 0xc) == 0) {
        if ((((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) &&
            (*(int *)(param_1 + 0x18) == 0)) &&
           ((*(int *)(param_1 + 0x1c) == 0 && (*(int *)(param_1 + 0x20) == 0)))) {
          iVar7 = 0;
          goto LAB_0174fba4;
        }
      }
      else if (*(int *)(param_1 + 0x10) == 0) {
        if (((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0x18) == 0)) &&
           ((*(int *)(param_1 + 0x1c) == 0 && (*(int *)(param_1 + 0x20) == 0)))) {
          iVar7 = 1;
          goto LAB_0174fba4;
        }
      }
      else if (*(int *)(param_1 + 0x14) != 0) {
        if (*(int *)(param_1 + 0x18) == 0) {
          if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
            iVar7 = 2;
            goto LAB_0174fba4;
          }
        }
        else if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
          iVar7 = 3;
LAB_0174fba4:
          iVar1 = FUN_0174f320(param_1);
          if ((iVar1 == 0) || (iVar1 = FUN_017184a8(), iVar1 == 0)) goto LAB_0174faa0;
          FUN_01714208(auStack_5c);
          uVar2 = FUN_01714eb4(*(undefined4 *)(param_1 + 8));
          if ((uVar2 < 0x11) ||
             (((uVar2 = FUN_01714eb4(*(undefined4 *)(param_1 + 8)), 0x100 < uVar2 ||
               (iVar3 = FUN_017181d4(*(undefined4 *)(param_1 + 4)), iVar3 == 0)) ||
              (iVar3 = FUN_017181d4(*(undefined4 *)(param_1 + 8)), iVar3 == 0)))) {
LAB_0174fdbc:
            uVar5 = 0x5e7;
LAB_0174fd90:
            uVar6 = 0;
            FUN_016e9cd0(4,0,0x92,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar5);
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 4);
            FUN_01781ff4(&DAT_018de674,&LAB_01703ca8);
            iVar3 = FUN_0171f790(auStack_5c,uVar5,&DAT_018de678,iVar1);
            if ((iVar3 == 0) || (iVar3 = FUN_01718124(auStack_5c), iVar3 == 0)) goto LAB_0174fdbc;
            iVar3 = FUN_0174b384(&local_64,*(undefined4 *)(param_1 + 4),0,iVar1,0);
            if ((iVar3 == 0) || (local_64 != 2)) goto LAB_0174fdbc;
            if (iVar7 != 0) {
              local_30[0] = 0;
              local_60 = 0;
              FUN_0172aab0(auStack_48);
              uVar5 = FUN_0172b7d4();
              iVar7 = FUN_01739ea4();
              if ((iVar7 == 0) || (iVar3 = FUN_0174eca8(iVar7,param_1), iVar3 == 0)) {
                uVar5 = 0x579;
LAB_0174fe20:
                iVar3 = 0;
                FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar5);
LAB_0174fd6c:
                FUN_01739ee4(iVar7);
                FUN_0172abc4(auStack_48);
                FUN_0177aafc(iVar3);
              }
              else {
                iVar3 = FUN_0173e5f0(auStack_48,0,uVar5,0,iVar7);
                if (iVar3 == 0) {
LAB_0174fe3c:
                  uVar5 = 0x580;
                  goto LAB_0174fe20;
                }
                iVar3 = FUN_0173ee3c(auStack_48,0,&local_60,local_30,1);
                if (iVar3 == 0) goto LAB_0174fe3c;
                iVar3 = FUN_0177a6c0(local_60);
                if (iVar3 == 0) {
LAB_0174fe4c:
                  FUN_016e9cd0(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x587);
                  goto LAB_0174fd6c;
                }
                iVar4 = FUN_0173ee3c(auStack_48,iVar3,&local_60,local_30,1);
                if (iVar4 == 0) goto LAB_0174fe4c;
                iVar4 = FUN_0173e7c4(auStack_48,0,uVar5,0,iVar7);
                if (iVar4 == 0) goto LAB_0174fd6c;
                iVar4 = FUN_0173ce50(auStack_48,iVar3,local_60,local_30,1);
                FUN_01739ee4(iVar7);
                FUN_0172abc4(auStack_48);
                FUN_0177aafc(iVar3);
                if (iVar4 != 0) goto LAB_0174fe08;
              }
              uVar5 = 0x601;
              goto LAB_0174fd90;
            }
LAB_0174fe08:
            uVar6 = 1;
          }
          FUN_017046e0(auStack_5c);
          FUN_017184e8(iVar1);
          goto LAB_0174faa4;
        }
      }
    }
    FUN_016e9cd0(4,0,0x68,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x5c3);
  }
LAB_0174faa0:
  uVar6 = 0;
LAB_0174faa4:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar6;
}

