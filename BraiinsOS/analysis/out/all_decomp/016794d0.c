// FUN_016794d0 @ 016794d0 size=168 calls_out=0 calls_in=2
// strings: 

void FUN_016794d0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  pbVar4 = *(byte **)(param_2 + 8);
  bVar1 = *pbVar4;
  uVar2 = (uint)bVar1;
  *(byte **)(param_2 + 8) = pbVar4 + 1;
  *(int *)(param_2 + 0xc) = iVar3 + -1;
  if (9 < uVar2 - 0x30) {
    uVar5 = uVar2 - 0x61;
    bVar7 = 5 < uVar5;
    bVar6 = uVar5 == 6;
    if (bVar7) {
      uVar5 = uVar2 - 0x41;
      bVar6 = uVar5 == 5;
    }
    if ((bVar7 && 4 < uVar5) && !bVar6) {
      *(byte **)(param_2 + 8) = pbVar4;
      *(int *)(param_2 + 0xc) = iVar3;
      param_1[1] = 0;
      param_1[2] = 4;
      *param_1 = 1;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 3;
  return;
}

