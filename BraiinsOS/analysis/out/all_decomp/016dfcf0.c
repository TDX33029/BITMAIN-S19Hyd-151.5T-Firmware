// FUN_016dfcf0 @ 016dfcf0 size=150 calls_out=1 calls_in=1
// strings: __vdso_clock_gettime64 | LINUX_2.6 | __vdso_clock_gettime | LINUX_2.6 | LINUX_2.6 | __vdso_clock_gettime

undefined4 FUN_016dfcf0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  pcVar2 = (code *)FUN_016d34b4("LINUX_2.6","__vdso_clock_gettime64");
  if ((pcVar2 == (code *)0x0) &&
     (iVar3 = FUN_016d34b4("LINUX_2.6","__vdso_clock_gettime"), pcVar2 = (code *)0x0, iVar3 != 0)) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(0x18de618);
      if (DAT_018de618 != 0) goto LAB_016dfd74;
      bVar1 = (bool)hasExclusiveAccess(0x18de618);
    } while (!bVar1);
    DAT_018de618 = iVar3;
LAB_016dfd74:
    DataMemoryBarrier(0x1b);
    pcVar2 = (code *)&UNK_016dfdad;
  }
  iVar3 = FUN_016d34b4("LINUX_2.6","__vdso_clock_gettime");
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE = pcVar2;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(0x18db704);
    if (DAT_018db704 != FUN_016dfcf0 + 1) goto LAB_016dfd3c;
    bVar1 = (bool)hasExclusiveAccess(0x18db704);
  } while (!bVar1);
  DAT_018db704 = UNRECOVERED_JUMPTABLE;
LAB_016dfd3c:
  DataMemoryBarrier(0x1b);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0xffffffda;
  }
                    /* WARNING: Could not recover jumptable at 0x016dfd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar4;
}

