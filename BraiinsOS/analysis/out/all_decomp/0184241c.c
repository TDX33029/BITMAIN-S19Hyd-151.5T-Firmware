// FUN_0184241c @ 0184241c size=348 calls_out=10 calls_in=3
// strings: libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | c/io/util/write_all.rs | libunwind:  _backtrace: start_ip=0x%x; func=%s; lsda=0x%x; context=%p  | libunwind:  _backtrace: ended because callback returned %d  | libunwind: _Unwind_Backtrace(callback=%p) 

int FUN_0184241c(code *param_1,undefined4 param_2)

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
  
  local_2c = DAT_018ddaf8;
  FUN_018425c8(auStack_508,param_2,&PTR_018bc3f4,0);
  FUN_0184545c(auStack_3b8,auStack_508);
  iVar1 = FUN_01845188();
  if (iVar1 != 0) {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: _Unwind_Backtrace(callback=%p)\n",param_1);
    FUN_016daeb4(&DAT_018db5c0);
  }
  FUN_016dd606(auStack_558,0,0x50);
  local_560 = 0x474e4c43;
  pcStack_55c = "c/io/util/write_all.rs";
  do {
    iVar1 = FUN_01844df4(auStack_3b8,local_5b0);
    if (iVar1 != 0) {
LAB_01842534:
      iVar1 = 5;
      goto LAB_01842538;
    }
    local_518 = local_5b0[0];
    uStack_514 = local_590;
    local_510 = local_59c;
    if ((local_5a4 == (code *)0x0) || (iVar1 = (*local_5a4)(8,&local_560,auStack_3b8), iVar1 != 8))
    goto LAB_01842534;
    iVar1 = FUN_018451c8();
    if (iVar1 == 0) {
LAB_01842482:
      iVar1 = (*param_1)(auStack_3b8,param_2);
    }
    else {
      FUN_01844f98(auStack_3b8,auStack_22c,0x200,auStack_5b4);
      FUN_01844df4(auStack_3b8,local_588);
      iVar1 = FUN_018451c8();
      if (iVar1 == 0) goto LAB_01842482;
      FUN_016db0c6(&DAT_018db5c0,
                   "libunwind:  _backtrace: start_ip=0x%x, func=%s, lsda=0x%x, context=%p\n",
                   local_588[0],auStack_22c,local_580,auStack_3b8);
      FUN_016daeb4(&DAT_018db5c0);
      iVar1 = (*param_1)(auStack_3b8,param_2);
    }
  } while (iVar1 == 0);
  iVar2 = FUN_018451c8();
  if (iVar2 != 0) {
    FUN_016db0c6(&DAT_018db5c0,"libunwind:  _backtrace: ended because callback returned %d\n",iVar1)
    ;
    FUN_016daeb4(&DAT_018db5c0);
  }
LAB_01842538:
  if (DAT_018ddaf8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar1;
}

