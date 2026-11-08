// FUN_01bdf9c8 @ 01bdf9c8 size=348 calls_out=10 calls_in=3
// strings: libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | 0/untrusted-0.9.0/src/reader.rs | libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | libunwind:  _backtrace: ended because callback returned %d  | libunwind: _Unwind_Backtrace(callback=%p) 

int FUN_01bdf9c8(code *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_5b4 [4];
  undefined4 local_5b0 [3];
  code *local_5a4;
  undefined4 local_59c;
  undefined4 local_590;
  undefined4 local_588 [2];
  undefined4 local_580;
  undefined4 local_560;
  char *pcStack_55c;
  undefined1 auStack_558 [64];
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined1 auStack_508 [336];
  undefined1 auStack_3b8 [396];
  undefined1 auStack_22c [512];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bdfb74(auStack_508,param_2,&PTR_01d3b2b0,0);
  FUN_01be2a08(auStack_3b8,auStack_508);
  iVar1 = FUN_01be2734();
  if (iVar1 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: _Unwind_Backtrace(callback=%p)\n",param_1);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  FUN_01bed93e(auStack_558,0,0x50);
  local_560 = 0x474e4c43;
  pcStack_55c = "0/untrusted-0.9.0/src/reader.rs";
  do {
    iVar1 = FUN_01be23a0(auStack_3b8,local_5b0);
    if (iVar1 != 0) {
LAB_01bdfae0:
      iVar1 = 5;
      goto LAB_01bdfae4;
    }
    local_518 = local_5b0[0];
    uStack_514 = local_590;
    local_510 = local_59c;
    if ((local_5a4 == (code *)0x0) || (iVar1 = (*local_5a4)(8,&local_560,auStack_3b8), iVar1 != 8))
    goto LAB_01bdfae0;
    iVar1 = FUN_01be2774();
    if (iVar1 == 0) {
LAB_01bdfa2e:
      iVar1 = (*param_1)(auStack_3b8,param_2);
    }
    else {
      FUN_01be2544(auStack_3b8,auStack_22c,0x200,auStack_5b4);
      FUN_01be23a0(auStack_3b8,local_588);
      iVar1 = FUN_01be2774();
      if (iVar1 == 0) goto LAB_01bdfa2e;
      FUN_01beb3de(&DAT_01d50fd8,
                   "libunwind:  _backtrace: start_ip=0x%x, func=%s, lsda=0x%x, context=%p\n",
                   local_588[0],auStack_22c,local_580,auStack_3b8);
      FUN_01beb1cc(&DAT_01d50fd8);
      iVar1 = (*param_1)(auStack_3b8,param_2);
    }
  } while (iVar1 == 0);
  iVar2 = FUN_01be2774();
  if (iVar2 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind:  _backtrace: ended because callback returned %d\n",iVar1)
    ;
    FUN_01beb1cc(&DAT_01d50fd8);
  }
LAB_01bdfae4:
  if (DAT_01d53560 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1;
}

