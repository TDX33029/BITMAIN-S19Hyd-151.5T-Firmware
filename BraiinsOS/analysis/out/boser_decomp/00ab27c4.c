// FUN_00ab27c4 @ 00ab27c4 size=92 calls_out=1 calls_in=1
// strings: 

int FUN_00ab27c4(int param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x108);
  do {
    if (0x3f < uVar2) {
      FUN_01663d68(param_1 + 0x110,param_1 + 8);
      uVar2 = 0;
    }
    uVar3 = *(uint *)(param_1 + 8 + uVar2 * 4);
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0x108) = uVar2;
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar3;
  } while ((param_2 << LZCOUNT(param_2)) - 1 < (uint)lVar1);
  return (int)((ulonglong)lVar1 >> 0x20) + 1;
}

