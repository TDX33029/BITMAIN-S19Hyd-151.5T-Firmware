// FUN_01beff14 @ 01beff14 size=150 calls_out=1 calls_in=1
// strings: __vdso_clock_gettime64 | LINUX_2.6 | __vdso_clock_gettime | LINUX_2.6 | LINUX_2.6 | __vdso_clock_gettime

undefined4 FUN_01beff14(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar2 = (code *)FUN_01be3b78("LINUX_2.6","__vdso_clock_gettime64");
  if ((pcVar2 == (code *)0x0) &&
     (iVar3 = FUN_01be3b78("LINUX_2.6","__vdso_clock_gettime"), pcVar2 = (code *)0x0, iVar3 != 0)) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(0x1d54080);
      if (DAT_01d54080 != 0) goto LAB_01beff98;
      bVar1 = (bool)hasExclusiveAccess(0x1d54080);
    } while (!bVar1);
    DAT_01d54080 = iVar3;
LAB_01beff98:
    DataMemoryBarrier(0x1b);
    pcVar2 = (code *)&UNK_01beffd1;
  }
  iVar3 = FUN_01be3b78("LINUX_2.6","__vdso_clock_gettime");
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE = pcVar2;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x1d5111c);
    if (DAT_01d5111c != FUN_01beff14 + 1) goto LAB_01beff60;
    bVar1 = (bool)hasExclusiveAccess(0x1d5111c);
  } while (!bVar1);
  DAT_01d5111c = UNRECOVERED_JUMPTABLE;
LAB_01beff60:
  DataMemoryBarrier(0x1b);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0xffffffda;
  }
                    /* WARNING: Could not recover jumptable at 0x01beff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}

