// FUN_016df592 @ 016df592 size=74 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016df592(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    uVar3 = *param_1;
    if ((uVar3 & 0x7fffffff) == 0x7fffffff) {
      return 0x10;
    }
    if ((uVar3 & 0x7fffffff) == 0x7ffffffe) {
      return 0xb;
    }
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      uVar2 = *param_1;
      if (uVar3 != uVar2) goto LAB_016df5a2;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar3 + 1;
LAB_016df5a2:
    DataMemoryBarrier(0x1b);
    if (uVar3 == uVar2) {
      return 0;
    }
  } while( true );
}

