// FUN_0173e488 @ 0173e488 size=344 calls_out=9 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c

void FUN_0173e488(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined1 auStack_44 [24];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar1 = FUN_0172a880(param_5,param_2,&PTR_018bc3f4,0);
  uVar1 = (uVar1 & 7) >> 2;
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    FUN_0172aab0(auStack_44);
    iVar2 = FUN_0173e2d8(auStack_44,param_5,param_6);
    if ((iVar2 != 0) && (iVar2 = FUN_0172af78(auStack_44,param_1,param_2), iVar2 != 0)) {
      uVar1 = FUN_0172a880(param_5);
      if ((uVar1 & 4) == 0) {
        uVar4 = FUN_0172b0dc(auStack_44,param_3,param_4);
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uVar1 = (uint)uVar4 & 1;
      }
      else {
        uVar4 = FUN_0172ac3c(auStack_44,param_3,*param_4);
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uVar1 = (uint)uVar4 & 1;
      }
      goto LAB_0173e538;
    }
    FUN_0172aae8(auStack_44);
    uVar3 = extraout_r1;
  }
  else {
    FUN_016e9cd0(0x1d,0,0x43,"/aws-lc/crypto/fipsmodule/digest/digest.c",0x114);
    uVar3 = extraout_r1_00;
  }
  uVar1 = 0;
LAB_0173e538:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

