// FUN_01bd5500 @ 01bd5500 size=80 calls_out=0 calls_in=1
// strings: 

void FUN_01bd5500(int param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_1 + -4);
  uVar2 = 0;
  for (iVar3 = 0; iVar3 != param_4; iVar3 = iVar3 + 1) {
    puVar4 = puVar4 + 1;
    lVar1 = (ulonglong)param_3 * (ulonglong)*(uint *)(param_2 + iVar3 * 4) + (ulonglong)uVar2 +
            (ulonglong)*puVar4;
    *puVar4 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
  }
  return;
}

