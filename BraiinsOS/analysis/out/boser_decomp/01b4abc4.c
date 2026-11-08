// FUN_01b4abc4 @ 01b4abc4 size=336 calls_out=9 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/digest/digest.c

void FUN_01b4abc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_44 [24];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b3b6a4(param_5,param_2,&PTR_01d3b2b0,0);
  uVar1 = (uVar1 & 7) >> 2;
  if (param_4 != (undefined4 *)0x0) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    FUN_01b3b838(auStack_44);
    iVar2 = FUN_01b4aa54(auStack_44,param_5,param_6);
    if ((iVar2 != 0) && (iVar2 = FUN_01b3bc2c(auStack_44,param_1,param_2), iVar2 != 0)) {
      uVar1 = FUN_01b3b6a4(param_5);
      if ((uVar1 & 4) == 0) {
        uVar4 = FUN_01b3bd78(auStack_44,param_3,param_4);
      }
      else {
        uVar4 = FUN_01b3b968(auStack_44,param_3,*param_4);
      }
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar1 = (uint)uVar4 & 1;
      goto LAB_01b4ac50;
    }
    FUN_01b3b854(auStack_44);
    uVar3 = extraout_r1_00;
  }
  else {
    FUN_01b053d4(0x1d,0,0x43,"/aws-lc/crypto/fipsmodule/digest/digest.c",0x114);
    uVar3 = extraout_r1;
  }
  uVar1 = 0;
LAB_01b4ac50:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

