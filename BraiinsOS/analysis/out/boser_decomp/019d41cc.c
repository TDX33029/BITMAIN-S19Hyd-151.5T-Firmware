// FUN_019d41cc @ 019d41cc size=336 calls_out=2 calls_in=2
// strings: paceone_indexed24century

void FUN_019d41cc(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_24 [12];
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  if (iVar4 == 5) {
    iVar2 = 0;
    do {
      if (iVar2 == 5) {
        *param_1 = 7;
        uVar1 = 0;
        goto LAB_019d4310;
      }
      uVar6 = (uint)*(byte *)(iVar3 + iVar2);
      uVar5 = (uint)(byte)"s"[iVar2];
      iVar2 = iVar2 + 1;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
    } while (uVar6 == uVar5);
  }
  if (iVar4 == 4) {
    iVar4 = 0;
    do {
      if (iVar4 == 4) {
        *param_1 = 7;
        uVar1 = 1;
        goto LAB_019d4310;
      }
      uVar5 = (uint)*(byte *)(iVar3 + iVar4);
      uVar6 = (uint)(byte)(&DAT_0056cb88)[iVar4];
      iVar4 = iVar4 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
    } while (uVar5 == uVar6);
    iVar4 = 0;
    do {
      if (iVar4 == 4) {
        *param_1 = 7;
        uVar1 = 2;
LAB_019d4310:
        *(undefined1 *)(param_1 + 1) = uVar1;
        return;
      }
      uVar5 = (uint)*(byte *)(iVar3 + iVar4);
      uVar6 = (uint)(byte)(&DAT_0056d26c)[iVar4];
      iVar4 = iVar4 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 | 0x20;
      }
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
    } while (uVar5 == uVar6);
    iVar4 = 4;
  }
  FUN_006643f0(auStack_24,iVar3,iVar4);
  FUN_0160ec7c(param_1 + 2,auStack_24);
  iVar3 = param_2[2];
  *param_1 = 2;
  param_1[1] = iVar3;
  return;
}

