// FUN_01656cb0 @ 01656cb0 size=124 calls_out=2 calls_in=162
// strings: 

void FUN_01656cb0(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(param_2);
      goto LAB_01656cdc;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_01656cdc:
  bVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bVar3 = FUN_0197ac0c();
    bVar3 = bVar3 ^ 1;
  }
  iVar2 = param_2[1];
  *(byte *)(param_1 + 2) = bVar3;
  *param_1 = (uint)((char)iVar2 != '\0');
  param_1[1] = (uint)param_2;
  return;
}

