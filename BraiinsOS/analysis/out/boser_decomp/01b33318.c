// FUN_01b33318 @ 01b33318 size=292 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_01b33318(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auStack_9c [136];
  int local_14;
  
  local_14 = DAT_01d53560;
  bVar2 = param_4 == 0x11;
  if (param_4 < 0x12) {
    bVar2 = param_4 * 2 == param_2;
  }
  if (!bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  if (param_4 == 4) {
    uVar1 = FUN_01b2fff8();
    return uVar1;
  }
  if (param_4 == 8) {
    uVar1 = FUN_01b2f9f4();
    return uVar1;
  }
  FUN_01b30464(param_1,param_3,param_4,auStack_9c);
  FUN_01b6b174(auStack_9c,param_4 << 3);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

