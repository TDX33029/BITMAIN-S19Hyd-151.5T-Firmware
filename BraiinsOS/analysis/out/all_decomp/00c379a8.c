// FUN_00c379a8 @ 00c379a8 size=140 calls_out=2 calls_in=3
// strings: 

void FUN_00c379a8(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_00c379d0;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_00c379d0:
  bVar3 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    bVar3 = FUN_015bf3f8();
    bVar3 = bVar3 ^ 1;
  }
  iVar2 = param_2[1];
  *(byte *)(param_1 + 2) = bVar3;
  *param_1 = (uint)((char)iVar2 != '\0');
  param_1[1] = (uint)param_2;
  return;
}

