// FUN_0069e2f4 @ 0069e2f4 size=128 calls_out=1 calls_in=13
// strings: 

void FUN_0069e2f4(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      uVar4 = 1;
      bVar3 = 2;
      goto LAB_0069e35c;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
  bVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bVar3 = FUN_0197ac0c();
    bVar3 = bVar3 ^ 1;
  }
  iVar2 = param_2[1];
  param_1[1] = (uint)param_2;
  uVar4 = (uint)((char)iVar2 != '\0');
LAB_0069e35c:
  *param_1 = uVar4;
  *(byte *)(param_1 + 2) = bVar3;
  return;
}

