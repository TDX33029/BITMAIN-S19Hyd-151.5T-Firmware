// FUN_016df5fe @ 016df5fe size=132 calls_out=0 calls_in=8
// strings: 

longlong FUN_016df5fe(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    uVar4 = *param_1;
    if ((uVar4 & 0x7fffffff) == 0x7fffffff || (uVar4 & 0x7fffffff) == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar4 - 1;
    }
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      uVar2 = *param_1;
      if (uVar4 != uVar2) goto LAB_016df60a;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar3;
LAB_016df60a:
    DataMemoryBarrier(0x1b);
    if (uVar4 == uVar2) {
      if ((uVar3 == 0) && (param_1[1] != 0 || (int)uVar4 < 0)) {
        uVar3 = (uint)(param_1[2] != 0x80) << 7 | 1;
        software_interrupt(0);
        if (param_1 == (uint *)0xffffffda) {
          uVar3 = 1;
          software_interrupt(0);
        }
      }
      return (ulonglong)uVar3 << 0x20;
    }
  } while( true );
}

