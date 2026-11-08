// FUN_016df844 @ 016df844 size=142 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016df844(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    uVar5 = *param_1;
    if ((uVar5 & 0x7fffffff) == 0x7fffffff) {
      puVar2 = (undefined4 *)FUN_016d2bc8();
      *puVar2 = 0x4b;
      return 0xffffffff;
    }
    uVar3 = uVar5 + 1;
    if ((int)param_1[1] < 2) {
      uVar3 = uVar3 & 0x7fffffff;
    }
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      uVar4 = *param_1;
      if (uVar5 != uVar4) goto LAB_016df860;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar3;
LAB_016df860:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar4) {
      if (((int)uVar5 < 0) && (software_interrupt(0), param_1 == (uint *)0xffffffda)) {
        software_interrupt(0);
      }
      return 0;
    }
  } while( true );
}

