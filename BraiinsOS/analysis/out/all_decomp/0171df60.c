// FUN_0171df60 @ 0171df60 size=316 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_0171df60(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_9c [136];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  bVar1 = param_4 == 0x11;
  if (param_4 < 0x12) {
    bVar1 = param_4 * 2 == param_2;
  }
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  if (param_4 == 4) {
    uVar2 = FUN_01719eb8(param_1,param_3,0,0);
    return uVar2;
  }
  if (param_4 == 8) {
    uVar2 = FUN_017198a8(param_1,param_3,0,0);
    return uVar2;
  }
  if (param_4 != 0) {
    FUN_0171a460(param_1,param_3,param_4);
  }
  FUN_0177aaa0(auStack_9c,param_4 << 3);
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

