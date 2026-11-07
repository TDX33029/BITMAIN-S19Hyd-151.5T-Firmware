// FUN_00fe3f54 @ 00fe3f54 size=184 calls_out=0 calls_in=2
// strings: 

int FUN_00fe3f54(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 0x14);
    uVar2 = (uint)(param_2 - param_1) / 0x18;
    do {
      uVar3 = puVar1[-3];
      iVar5 = 0;
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      uVar3 = *puVar1;
      if (uVar3 != 0) {
        iVar5 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
      }
      puVar1 = puVar1 + 6;
      uVar2 = uVar2 - 1;
      param_3 = iVar5 + iVar4 + param_3 + ((LZCOUNT(iVar5 + iVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
    } while (uVar2 != 0);
  }
  return param_3;
}

