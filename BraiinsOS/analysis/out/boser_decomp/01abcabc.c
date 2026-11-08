// FUN_01abcabc @ 01abcabc size=240 calls_out=2 calls_in=1
// strings: 

void FUN_01abcabc(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar4 = &local_40;
  iVar3 = *(int *)(param_1 + 400);
  iVar7 = *(int *)(param_1 + 0x194);
  piVar1 = (int *)(param_1 + 8);
  if (0x10 < *(uint *)(param_1 + 0x188)) {
    piVar1 = (int *)*(int *)(param_1 + 8);
  }
  puVar6 = piVar1 + iVar3 * 6;
  while( true ) {
    bVar8 = iVar7 != iVar3;
    if (bVar8) {
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 400) = iVar3;
      local_40 = *puVar6;
      uStack_3c = puVar6[1];
      uStack_38 = puVar6[2];
      uStack_34 = puVar6[3];
      uStack_30 = puVar6[4];
      puVar4 = (undefined4 *)puVar6[5];
    }
    if (!bVar8 || puVar4 == (undefined4 *)0x0) break;
    puVar4 = (undefined4 *)FUN_01ab4580(&uStack_38);
    puVar6 = puVar6 + 6;
  }
  uVar2 = *(uint *)(param_1 + 0x188);
  if (uVar2 < 0x11) {
    iVar7 = uVar2 + 1;
    iVar3 = param_1 + 0x10;
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_01ab4580(iVar3);
      iVar3 = iVar3 + 0x18;
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 4) + 1;
  iVar3 = iVar5 + 8;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01ab4580(iVar3);
    iVar3 = iVar3 + 0x18;
  }
  FUN_0134aee0(uVar2,iVar5,8,0x18);
  return;
}

