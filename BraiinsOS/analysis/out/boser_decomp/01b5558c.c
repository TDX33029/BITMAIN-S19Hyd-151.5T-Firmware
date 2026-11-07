// FUN_01b5558c @ 01b5558c size=360 calls_out=8 calls_in=4
// strings: 

undefined4
FUN_01b5558c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_88 [24];
  uint local_70;
  undefined1 auStack_6c [64];
  int local_2c;
  
  uVar4 = 0;
  local_2c = DAT_01d53560;
  FUN_01b3b838(auStack_88,param_2,&PTR_01d3b2b0,0);
  uVar1 = FUN_01b3b6b4(param_5);
  do {
    if (param_2 == 0) {
LAB_01b55698:
      uVar3 = 1;
LAB_01b556a4:
      FUN_01b3b854(auStack_88);
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return uVar3;
    }
    local_70 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
    iVar2 = FUN_01b4aa54(auStack_88,param_5,0);
    if (((iVar2 == 0) || (iVar2 = FUN_01b3bc2c(auStack_88,param_3,param_4), iVar2 == 0)) ||
       (iVar2 = FUN_01b3bc2c(auStack_88,&local_70,4), iVar2 == 0)) {
LAB_01b556a0:
      uVar3 = 0;
      goto LAB_01b556a4;
    }
    if (param_2 < uVar1) {
      iVar2 = FUN_01b3bc6c(auStack_88,auStack_6c,0);
      if (iVar2 == 0) goto LAB_01b556a0;
      FUN_01b26974(param_1,auStack_6c,param_2);
      goto LAB_01b55698;
    }
    iVar2 = FUN_01b3bc6c(auStack_88,param_1,0);
    if (iVar2 == 0) goto LAB_01b556a0;
    param_1 = param_1 + uVar1;
    param_2 = param_2 - uVar1;
    uVar4 = uVar4 + 1;
  } while( true );
}

