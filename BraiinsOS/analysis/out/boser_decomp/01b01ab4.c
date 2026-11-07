// FUN_01b01ab4 @ 01b01ab4 size=536 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c

undefined4 FUN_01b01ab4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 - 1U < 10000) {
    iVar1 = FUN_01b2e788();
    if (iVar1 == 0) {
LAB_01b01bc8:
      FUN_01b053d4(5,0,3,"/aws-lc/crypto/dh_extra/params.c",0x176);
      if (iVar1 == 0) goto LAB_01b01b04;
      uVar5 = 0;
    }
    else {
      FUN_01b2e894();
      iVar2 = FUN_01b2e970(iVar1);
      iVar3 = FUN_01b2e970(iVar1);
      if (iVar3 == 0 || iVar2 == 0) goto LAB_01b01bc8;
      if (*param_1 == 0) {
        iVar4 = FUN_01b2adb8();
        *param_1 = iVar4;
        if (iVar4 == 0) goto LAB_01b01bc8;
      }
      if (param_1[1] == 0) {
        iVar4 = FUN_01b2adb8();
        param_1[1] = iVar4;
        if (iVar4 == 0) goto LAB_01b01bc8;
      }
      if (param_3 < 2) {
        FUN_01b053d4(5,0,100,"/aws-lc/crypto/dh_extra/params.c",0x146);
        goto LAB_01b01bc8;
      }
      if (param_3 == 2) {
        iVar4 = FUN_01b2b4cc(iVar2,0x18);
        if (iVar4 != 0) {
          uVar5 = 0xb;
          goto LAB_01b01c18;
        }
        goto LAB_01b01bc8;
      }
      if (param_3 != 5) {
        iVar4 = FUN_01b2b4cc(iVar2,2);
        if (iVar4 != 0) {
          uVar5 = 1;
          goto LAB_01b01c18;
        }
        goto LAB_01b01bc8;
      }
      iVar4 = FUN_01b2b4cc(iVar2,10);
      if (iVar4 == 0) goto LAB_01b01bc8;
      uVar5 = 3;
LAB_01b01c18:
      iVar4 = FUN_01b2b4cc(iVar3,uVar5);
      if ((((iVar4 == 0) ||
           (iVar2 = FUN_01b54660(*param_1,param_2,1,iVar2,iVar3,param_4), iVar2 == 0)) ||
          (iVar2 = FUN_01b337a0(param_4,3,0), iVar2 == 0)) ||
         (iVar2 = FUN_01b2b4cc(param_1[1],param_3), iVar2 == 0)) goto LAB_01b01bc8;
      uVar5 = 1;
    }
    FUN_01b2ebbc(iVar1);
    FUN_01b2e7c8(iVar1);
  }
  else {
    FUN_01b053d4(5,0,0x66,"/aws-lc/crypto/dh_extra/params.c",0x124);
LAB_01b01b04:
    uVar5 = 0;
  }
  return uVar5;
}

