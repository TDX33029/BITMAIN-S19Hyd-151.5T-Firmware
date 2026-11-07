// FUN_00c37a38 @ 00c37a38 size=148 calls_out=1 calls_in=6
// strings: 

void FUN_00c37a38(uint *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      *param_1 = 1;
      *(undefined1 *)(param_1 + 2) = 2;
      return;
    }
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
  bVar3 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    bVar3 = FUN_015bf3f8();
    bVar3 = bVar3 ^ 1;
  }
  iVar2 = param_2[1];
  param_1[1] = (uint)param_2;
  *param_1 = (uint)((char)iVar2 != '\0');
  *(byte *)(param_1 + 2) = bVar3;
  return;
}

