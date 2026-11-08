// FUN_01978f88 @ 01978f88 size=60 calls_out=0 calls_in=1
// strings: 

void FUN_01978f88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  do {
    bVar3 = true;
    if (*(char *)(param_2 + iVar1) == '\0') {
      DataMemoryBarrier(0xb);
      bVar3 = *(int *)(param_1 + iVar1 * 4) == 0;
    }
    iVar2 = iVar1 + 1;
    *(bool *)(param_2 + iVar1) = bVar3;
    iVar1 = iVar2;
  } while (iVar2 != 2);
  return;
}

