// FUN_017339c0 @ 017339c0 size=724 calls_out=15 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

void FUN_017339c0(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  uint uVar7;
  undefined1 auStack_290 [68];
  undefined1 auStack_24c [68];
  undefined1 auStack_208 [68];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [204];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar1 = FUN_0172ca8c(param_4,&PTR_018bc3f4,0);
  iVar2 = FUN_0172cabc(param_4);
  if (param_3 == (undefined4 *)0x0 || (iVar2 == 0 || iVar1 == 0)) {
    FUN_016e9cd0(0x1a,0,0x65,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x6c);
    iVar1 = extraout_r1_00;
  }
  else {
    iVar3 = FUN_01717e5c(*param_3);
    if ((((iVar3 == 0) && (iVar3 = FUN_017330f0(iVar1,auStack_290,*param_3), iVar3 != 0)) &&
        (iVar3 = FUN_01717e5c(param_3[1]), iVar3 == 0)) &&
       (iVar3 = FUN_017330f0(iVar1,auStack_24c,param_3[1]), iVar3 != 0)) {
      iVar3 = FUN_017336c4(iVar1,auStack_180,auStack_24c);
      if (iVar3 == 0) {
        FUN_016e9cd0(0x1a,0,0x44,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x7b);
        iVar1 = extraout_r1_02;
      }
      else {
        puVar5 = (undefined4 *)FUN_0172c608(iVar1);
        uVar6 = FUN_01714eb4();
        uVar7 = uVar6 + 7 >> 3;
        if (param_2 <= uVar7) {
          uVar7 = param_2;
        }
        FUN_01714f80(auStack_13c,puVar5[1],param_1);
        if (uVar6 < uVar7 << 3) {
          FUN_0171e8ec(auStack_13c,auStack_13c,8 - (uVar6 & 7),puVar5[1]);
        }
        FUN_0171ae58(auStack_13c,0,*puVar5,auStack_f8,puVar5[1]);
        FUN_017335e0(iVar1,auStack_208,auStack_13c,auStack_180);
        FUN_017335e0(iVar1,auStack_1c4,auStack_290,auStack_180);
        iVar2 = FUN_0172c878(iVar1,auStack_f8,auStack_208,iVar2 + 4,auStack_1c4);
        if (iVar2 == 0) {
          FUN_016e9cd0(0x1a,0,0xf,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x8a);
          iVar1 = extraout_r1_03;
        }
        else {
          iVar1 = FUN_0172c968(iVar1,auStack_f8,auStack_290);
          if (iVar1 != 0) {
            uVar4 = 1;
            goto LAB_017337a8;
          }
          FUN_016e9cd0(0x1a,0,0xcd,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x8f);
          iVar1 = extraout_r1_01;
        }
      }
    }
    else {
      FUN_016e9cd0(0x1a,0,100,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x75);
      iVar1 = extraout_r1;
    }
  }
  uVar4 = 0;
LAB_017337a8:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,iVar1,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

