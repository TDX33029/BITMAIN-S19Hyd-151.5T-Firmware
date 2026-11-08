// FUN_016a6218 @ 016a6218 size=108 calls_out=2 calls_in=3
// strings: 

void FUN_016a6218(uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_2 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 + 0xc0000001;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4;
  if (uVar4 < 0x3fffffff || uVar3 == 0x7ffffffe) {
    return;
  }
  FUN_015e9814();
  return;
}

