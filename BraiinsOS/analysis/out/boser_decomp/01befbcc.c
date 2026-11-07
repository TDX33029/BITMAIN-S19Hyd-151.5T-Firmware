// FUN_01befbcc @ 01befbcc size=64 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01befbcc(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    uVar4 = *param_1;
    if ((uVar4 & 0x7fffffff) == 0) {
      puVar2 = (undefined4 *)FUN_01be3244();
      *puVar2 = 0xb;
      return 0xffffffff;
    }
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      uVar3 = *param_1;
      if (uVar4 != uVar3) goto LAB_01befbd0;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar4 - 1;
LAB_01befbd0:
    DataMemoryBarrier(0x1b);
    if (uVar4 == uVar3) {
      return 0;
    }
  } while( true );
}

