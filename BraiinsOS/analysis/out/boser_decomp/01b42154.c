// FUN_01b42154 @ 01b42154 size=572 calls_out=11 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

void FUN_01b42154(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_290 [68];
  undefined1 auStack_24c [68];
  undefined1 auStack_208 [68];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [204];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b3d638(param_4,param_2,&PTR_01d3b2b0,0);
  iVar2 = FUN_01b3d658(param_4);
  if (param_3 == (undefined4 *)0x0 || (iVar2 == 0 || iVar1 == 0)) {
    uVar5 = 0x6c;
    uVar4 = 0x65;
  }
  else {
    iVar3 = FUN_01b2e300(*param_3);
    if ((((iVar3 == 0) && (iVar3 = FUN_01b41ab0(iVar1,auStack_290,*param_3), iVar3 != 0)) &&
        (iVar3 = FUN_01b2e300(param_3[1]), iVar3 == 0)) &&
       (iVar3 = FUN_01b41ab0(iVar1,auStack_24c,param_3[1]), iVar3 != 0)) {
      iVar3 = FUN_01b41ef0(iVar1,auStack_180,auStack_24c);
      if (iVar3 == 0) {
        uVar5 = 0x7b;
        uVar4 = 0x44;
      }
      else {
        FUN_01b3d164(iVar1,auStack_13c,param_1,param_2);
        FUN_01b41dfc(iVar1,auStack_208,auStack_13c,auStack_180);
        FUN_01b41dfc(iVar1,auStack_1c4,auStack_290,auStack_180);
        iVar2 = FUN_01b3d464(iVar1,auStack_f8,auStack_208,iVar2 + 4,auStack_1c4);
        if (iVar2 == 0) {
          uVar5 = 0x8a;
          uVar4 = 0xf;
        }
        else {
          iVar1 = FUN_01b3d51c(iVar1,auStack_f8,auStack_290);
          if (iVar1 != 0) {
            uVar4 = 1;
            goto LAB_01b41fa8;
          }
          uVar5 = 0x8f;
          uVar4 = 0xcd;
        }
      }
    }
    else {
      uVar5 = 0x75;
      uVar4 = 100;
    }
  }
  FUN_01b053d4(0x1a,0,uVar4,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",uVar5);
  uVar4 = 0;
  iVar1 = extraout_r1;
LAB_01b41fa8:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar4,iVar1,local_2c ^ DAT_01d53560,0);
  }
  return;
}

