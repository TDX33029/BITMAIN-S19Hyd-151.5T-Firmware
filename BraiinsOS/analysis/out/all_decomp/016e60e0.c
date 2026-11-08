// FUN_016e60e0 @ 016e60e0 size=640 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c | /aws-lc/crypto/dh_extra/params.c

undefined4 FUN_016e60e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (9999 < param_2 - 1U) {
    FUN_016e9cd0(5,0,0x66,"/aws-lc/crypto/dh_extra/params.c",0x124);
    return 0;
  }
  iVar1 = FUN_017184a8();
  if (iVar1 == 0) {
    FUN_016e9cd0(5,0,3,"/aws-lc/crypto/dh_extra/params.c",0x176);
    return 0;
  }
  FUN_017185b4();
  iVar2 = FUN_017186b0(iVar1);
  iVar3 = FUN_017186b0(iVar1);
  if (iVar3 != 0 && iVar2 != 0) {
    if (*param_1 == 0) {
      iVar4 = FUN_017141d0();
      *param_1 = iVar4;
      if (iVar4 == 0) goto LAB_016e61dc;
    }
    if (param_1[1] == 0) {
      iVar4 = FUN_017141d0();
      param_1[1] = iVar4;
      if (iVar4 == 0) goto LAB_016e61dc;
    }
    if (param_3 < 2) {
      FUN_016e9cd0(5,0,100,"/aws-lc/crypto/dh_extra/params.c",0x146);
    }
    else if (param_3 == 2) {
      iVar4 = FUN_01714a30(iVar2,0x18);
      if (iVar4 != 0) {
        uVar5 = 0xb;
        goto LAB_016e6198;
      }
    }
    else if (param_3 == 5) {
      iVar4 = FUN_01714a30(iVar2,10);
      if (iVar4 != 0) {
        uVar5 = 3;
        goto LAB_016e6198;
      }
    }
    else {
      iVar4 = FUN_01714a30(iVar2,2);
      if (iVar4 != 0) {
        uVar5 = 1;
LAB_016e6198:
        iVar4 = FUN_01714a30(iVar3,uVar5);
        if ((((iVar4 != 0) &&
             (iVar2 = FUN_0174d7cc(*param_1,param_2,1,iVar2,iVar3,param_4), iVar2 != 0)) &&
            (iVar2 = FUN_0171e414(param_4,3,0), iVar2 != 0)) &&
           (iVar2 = FUN_01714a30(param_1[1],param_3), iVar2 != 0)) {
          uVar5 = 1;
          goto LAB_016e61f4;
        }
      }
    }
  }
LAB_016e61dc:
  uVar5 = 0;
  FUN_016e9cd0(5,0,3,"/aws-lc/crypto/dh_extra/params.c",0x176);
LAB_016e61f4:
  FUN_01718904(iVar1);
  FUN_017184e8(iVar1);
  return uVar5;
}

