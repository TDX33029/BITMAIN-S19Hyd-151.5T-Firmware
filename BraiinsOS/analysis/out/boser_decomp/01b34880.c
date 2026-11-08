// FUN_01b34880 @ 01b34880 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_01b34880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_01d53560;
  uVar3 = FUN_01b34550(param_1,&local_18,param_2,param_3,param_4);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if (((int)uVar3 != 0) &&
     (uVar3 = FUN_01b339cc(param_1,param_1,local_18), uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20)
     , uVar1 = 0, (int)uVar3 != 0)) {
    uVar1 = 1;
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

