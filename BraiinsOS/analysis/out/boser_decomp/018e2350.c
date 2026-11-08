// FUN_018e2350 @ 018e2350 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_018e2350(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar5 = param_1[2];
  uVar1 = ((uint)(iVar2 - iVar4) >> 2) * 0x38e38e39;
  if ((uint)(*param_1 - iVar5) < uVar1) {
    FUN_006520b4(param_1,iVar5,uVar1,4,0x24);
    iVar5 = param_1[2];
  }
  if (iVar4 != iVar2) {
    iVar3 = param_1[1] + iVar5 * 0x24;
    do {
      FUN_01bed864(iVar3,iVar4,0x24);
      iVar4 = iVar4 + 0x24;
      iVar3 = iVar3 + 0x24;
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar2);
    *(int *)(param_2 + 4) = iVar4;
  }
  param_1[2] = iVar5;
  return;
}

