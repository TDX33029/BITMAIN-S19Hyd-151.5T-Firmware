// FUN_01805a98 @ 01805a98 size=104 calls_out=0 calls_in=1
// strings: 

int FUN_01805a98(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    iVar1 = ((param_2 & 3) >> 1) << 8;
  }
  else {
    iVar2 = **(int **)(param_1 + 4) + 1;
    uVar3 = 0x1f - LZCOUNT(iVar2);
    iVar1 = uVar3 * 0x100;
    if (param_2 != 0) {
      iVar1 = iVar1 + ((uint)(iVar2 * 0x100) >> (uVar3 & 0xff));
    }
    iVar1 = *(int *)(param_1 + 0x2c) - iVar1;
  }
  return iVar1;
}

