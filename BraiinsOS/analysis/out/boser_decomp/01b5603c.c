// FUN_01b5603c @ 01b5603c size=920 calls_out=26 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c | /aws-lc/crypto/fipsmodule/rsa/rsa.c

undefined4 FUN_01b5603c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uVar9;
  int local_64;
  undefined4 local_60;
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [24];
  undefined1 local_30 [4];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_1 == 0) {
    uVar9 = 0x5bb;
    uVar7 = 0x43;
    uVar1 = 0xe;
LAB_01b56094:
    FUN_01b053d4(uVar1,0,uVar7,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar9);
  }
  else {
    iVar2 = FUN_01b1ebbc();
    if (iVar2 - 4U < 2) {
      uVar9 = 0x5c3;
      uVar7 = 0x68;
      uVar1 = 4;
      goto LAB_01b56094;
    }
    iVar3 = FUN_01b55afc(param_1);
    if ((iVar3 != 0) && (iVar3 = FUN_01b2e788(), iVar3 != 0)) {
      FUN_01b2ae48(auStack_5c);
      uVar4 = FUN_01b2b8d0(*(undefined4 *)(param_1 + 8));
      if ((uVar4 < 0x11) ||
         (((uVar4 = FUN_01b2b8d0(*(undefined4 *)(param_1 + 8)), 0x100 < uVar4 ||
           (iVar5 = FUN_01b2e5fc(*(undefined4 *)(param_1 + 4)), iVar5 == 0)) ||
          (iVar5 = FUN_01b2e5fc(*(undefined4 *)(param_1 + 8)), iVar5 == 0)))) {
LAB_01b5612c:
        uVar1 = 0x5e7;
LAB_01b56144:
        uVar7 = 0;
        FUN_01b053d4(4,0,0x92,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar1);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 4);
        FUN_01b70810(&DAT_01d51b7c,FUN_01b22aa4);
        iVar5 = FUN_01b34880(auStack_5c,uVar1,&DAT_01d51b80,iVar3);
        if ((((iVar5 == 0) || (iVar5 = FUN_01b2e54c(auStack_5c), iVar5 == 0)) ||
            (iVar5 = FUN_01b526e0(&local_64,*(undefined4 *)(param_1 + 4),0,iVar3,0), iVar5 == 0)) ||
           (local_64 != 2)) goto LAB_01b5612c;
        if (iVar2 != 0) {
          local_30[0] = 0;
          local_60 = 0;
          FUN_01b3b838(auStack_48);
          uVar1 = FUN_01b3c354();
          iVar2 = FUN_01b46f98();
          if ((iVar2 == 0) || (iVar5 = FUN_01b5572c(iVar2,param_1), iVar5 == 0)) {
            uVar1 = 0x579;
LAB_01b56250:
            iVar5 = 0;
            FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",uVar1);
LAB_01b56264:
            bVar8 = false;
          }
          else {
            iVar5 = FUN_01b4aec0(auStack_48,0,uVar1,0,iVar2);
            if (iVar5 == 0) {
LAB_01b562d4:
              uVar1 = 0x580;
              goto LAB_01b56250;
            }
            iVar5 = FUN_01b4b350(auStack_48,0,&local_60,local_30,1);
            if (iVar5 == 0) goto LAB_01b562d4;
            iVar5 = FUN_01b6ad8c(local_60);
            if ((iVar5 == 0) ||
               (iVar6 = FUN_01b4b350(auStack_48,iVar5,&local_60,local_30,1), iVar6 == 0)) {
              FUN_01b053d4(4,0,0x44,"/aws-lc/crypto/fipsmodule/rsa/rsa.c",0x587);
              goto LAB_01b56264;
            }
            iVar6 = FUN_01b4af08(auStack_48,0,uVar1,0,iVar2);
            if (iVar6 == 0) goto LAB_01b56264;
            iVar6 = FUN_01b498d8(auStack_48,iVar5,local_60,local_30,1);
            bVar8 = iVar6 != 0;
          }
          FUN_01b46fd8(iVar2);
          FUN_01b3b8f8(auStack_48);
          FUN_01b6b1c4(iVar5);
          if (bVar8) goto LAB_01b56204;
          uVar1 = 0x601;
          goto LAB_01b56144;
        }
LAB_01b56204:
        uVar7 = 1;
      }
      FUN_01b1f904(auStack_5c);
      FUN_01b2e7c8(iVar3);
      goto LAB_01b5609c;
    }
  }
  uVar7 = 0;
LAB_01b5609c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar7;
}

