// FUN_01a2b0b0 @ 01a2b0b0 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_01a2b0b0(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_2 == 0) {
    iVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar4 = param_2[1];
    iVar2 = FUN_012920c0();
    lVar1 = (longlong)iVar2 * 0x15180 + (ulonglong)uVar4;
    uVar4 = (uint)lVar1;
    iVar2 = uVar4 + 0x886cb780;
    iVar3 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar4 < 0x77934880) + 0xe);
  }
  *(int *)(param_1 + 0x108) = iVar2;
  *(int *)(param_1 + 0x10c) = iVar3;
  return;
}

