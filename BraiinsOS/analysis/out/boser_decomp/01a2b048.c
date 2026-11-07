// FUN_01a2b048 @ 01a2b048 size=104 calls_out=1 calls_in=0
// strings: 

void FUN_01a2b048(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar4 = param_1;
  }
  else {
    uVar5 = param_2[1];
    iVar3 = FUN_012920c0();
    lVar1 = (longlong)iVar3 * 0x15180 + (ulonglong)uVar5;
    uVar5 = (uint)lVar1;
    iVar3 = uVar5 + 0x886cb780;
    iVar4 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar5 < 0x77934880) + 0xe);
  }
  *(uint *)(param_1 + 0x28) = (uint)(iVar2 != 0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x30) = iVar3;
  *(int *)(param_1 + 0x34) = iVar4;
  return;
}

