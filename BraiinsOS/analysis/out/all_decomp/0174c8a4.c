// FUN_0174c8a4 @ 0174c8a4 size=1048 calls_out=22 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

bool FUN_0174c8a4(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_38;
  
  iVar1 = FUN_01736960(param_1,*param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0171462c(param_3);
    if ((iVar1 == 0) && (iVar1 = FUN_01715760(param_3,param_1 + 0x118), iVar1 < 0)) {
      uVar2 = FUN_016e9bf0();
      if (param_5 == 0) {
        param_5 = FUN_017184a8(uVar2);
        if (param_5 == 0) {
          return false;
        }
        local_38 = param_5;
      }
      else {
        local_38 = 0;
      }
      FUN_017185b4(param_5);
      uVar2 = FUN_017186b0(param_5);
      uVar3 = FUN_017186b0(param_5);
      uVar4 = FUN_017186b0(param_5);
      uVar5 = FUN_017186b0(param_5);
      iVar1 = FUN_017186b0(param_5);
      bVar8 = false;
      if ((((iVar1 != 0) && (iVar6 = FUN_01733c3c(param_1,0,uVar4,uVar5,param_5), iVar6 != 0)) &&
          (iVar6 = FUN_0171f104(uVar3,param_3,param_1 + 0x118,param_5), iVar6 != 0)) &&
         (iVar6 = FUN_0171f040(uVar2,uVar3,param_3,param_1 + 0x118,param_5), iVar6 != 0)) {
        if (*(int *)(param_1 + 0x1d0) == 0) {
          iVar6 = FUN_0171f040(uVar3,uVar4,param_3,param_1 + 0x118,param_5);
          if (iVar6 == 0) goto LAB_0174ca14;
          iVar6 = FUN_0171af5c(uVar2,uVar2,uVar3,param_1 + 0x118,param_5);
        }
        else {
          iVar6 = FUN_0171b06c(uVar3,param_3,param_1 + 0x118,param_5);
          if ((iVar6 == 0) ||
             (iVar6 = FUN_0171af5c(uVar3,uVar3,param_3,param_1 + 0x118,param_5), iVar6 == 0))
          goto LAB_0174ca14;
          iVar6 = FUN_0171b5e8(uVar2,uVar2,uVar3,param_1 + 0x118,param_5);
        }
        if ((iVar6 != 0) &&
           (iVar6 = FUN_0171af5c(uVar2,uVar2,uVar5,param_1 + 0x118,param_5), iVar6 != 0)) {
          iVar6 = FUN_0174bf60(iVar1,uVar2,param_1 + 0x118,param_5);
          if (iVar6 == 0) {
            uVar7 = FUN_016e9b3c();
            if ((uVar7 & 0xff000fff) == 0x300006e) {
              FUN_016e9bf0(uVar7,0);
              FUN_016e9cd0(0xf,0,0x6b,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x13e);
            }
            else {
              FUN_016e9cd0(0xf,0,3,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x140);
            }
          }
          else {
            uVar7 = FUN_017181d4(iVar1);
            if (uVar7 != (param_4 != 0)) {
              iVar6 = FUN_01717e5c(iVar1);
              if (iVar6 != 0) {
                FUN_016e9cd0(0xf,0,0x6c,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x147);
                goto LAB_0174ca14;
              }
              iVar6 = FUN_0171a8e0(iVar1,param_1 + 0x118);
              if (iVar6 == 0) goto LAB_0174ca14;
            }
            uVar7 = FUN_017181d4(iVar1);
            if (uVar7 == (param_4 != 0)) {
              iVar1 = FUN_01736ea8(param_1,param_2,param_3,iVar1,param_5);
              bVar8 = iVar1 != 0;
            }
            else {
              FUN_016e9cd0(0xf,0,0x44,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x14f);
            }
          }
        }
      }
LAB_0174ca14:
      FUN_01718904(param_5);
      FUN_017184e8(local_38);
      return bVar8;
    }
    FUN_016e9cd0(0xf,0,0x6b,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xff);
  }
  else {
    FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/oct.c",0xf9);
  }
  return false;
}

