// FUN_01aadda0 @ 01aadda0 size=124 calls_out=0 calls_in=0
// strings: 

void FUN_01aadda0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(iVar3 + 0x44);
  bVar5 = iVar4 == iVar2;
  if (bVar5) {
    iVar2 = *(int *)(iVar3 + 0x4c);
  }
  if (bVar5 && iVar1 == iVar2) {
    iVar1 = 0x24;
    iVar2 = 0x20;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x1c);
    bVar5 = iVar4 == iVar2;
    if (bVar5) {
      iVar2 = *(int *)(iVar3 + 0x24);
    }
    if (bVar5 && iVar1 == iVar2) {
      iVar1 = 0x14;
      iVar2 = 0x10;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x30);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        iVar2 = *(int *)(iVar3 + 0x38);
      }
      if (!bVar5 || iVar1 != iVar2) {
        return;
      }
      iVar1 = 0x1c;
      iVar2 = 0x18;
    }
  }
  *(undefined4 *)(param_1 + iVar2) = param_3;
  *(undefined4 *)(param_1 + iVar1) = param_4;
  return;
}

