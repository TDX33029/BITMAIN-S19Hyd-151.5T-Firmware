// FUN_01b33884 @ 01b33884 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_01b33884(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 local_16;
  uint local_14;
  
  local_14 = DAT_01d53560;
  uVar3 = FUN_01b2ed74(&local_16,param_1,&PTR_01d3b2b0,0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  bVar1 = false;
  if ((int)uVar3 != 0) {
    uVar3 = FUN_01b2e5a4(param_1,local_16);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    bVar1 = (int)uVar3 == 0;
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

