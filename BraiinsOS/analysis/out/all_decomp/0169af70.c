// FUN_0169af70 @ 0169af70 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_0169af70(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 == 1) {
    puVar2 = (uint *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 - 1;
    if ((uVar4 - 1 & 0xbfffffff) != 0x80000000) {
      return;
    }
  }
  else {
    puVar2 = (uint *)param_1[1];
    if ((((char)param_1[2] == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
      *(undefined1 *)(puVar2 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 + 0xc0000001;
    if (uVar4 + 0xc0000001 < 0x40000000) {
      return;
    }
  }
  FUN_015e9814();
  return;
}

