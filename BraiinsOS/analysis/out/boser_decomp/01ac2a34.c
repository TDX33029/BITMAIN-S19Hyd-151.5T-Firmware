// FUN_01ac2a34 @ 01ac2a34 size=104 calls_out=2 calls_in=20
// strings: 

void FUN_01ac2a34(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((((param_2 & 1) == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_0197ac0c(), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    uVar4 = uVar2 + 0xc0000001;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4;
  if (uVar4 < 0x3fffffff || uVar2 == 0x7ffffffe) {
    return;
  }
  FUN_019a33c4(param_1);
  return;
}

