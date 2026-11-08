// FUN_0197b3e8 @ 0197b3e8 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_0197b3e8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  bool bVar1;
  int iVar2;
  
  if ((((param_2 & 1) == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
     (iVar2 = FUN_0197ac0c(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_01be3b5a(param_1,0x81,1,param_5);
    return;
  }
  return;
}

