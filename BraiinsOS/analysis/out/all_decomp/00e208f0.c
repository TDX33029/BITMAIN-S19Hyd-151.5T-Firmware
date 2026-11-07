// FUN_00e208f0 @ 00e208f0 size=304 calls_out=5 calls_in=2
// strings: 

void FUN_00e208f0(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = thunk_FUN_016de0ee(param_1,0x40);
  iVar6 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  iVar8 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    uVar9 = 0;
    uVar10 = 0;
    if (*(char *)(iVar6 + 0x38) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x10);
      goto joined_r0x00e20988;
    }
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  uVar9 = *(undefined4 *)(iVar6 + 0x18);
  uVar10 = *(undefined4 *)(iVar6 + 0x1c);
  *(int *)(iVar6 + 0x18) = iVar8;
  *(undefined4 *)(iVar6 + 0x1c) = uVar5;
  iVar3 = *(int *)(param_1 + 0x10);
joined_r0x00e20988:
  if (iVar3 == 1) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
    bVar2 = *(int *)(param_1 + 0x1c) == 0;
    bVar11 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      iVar8 = *(int *)(param_1 + 0x20);
      bVar11 = iVar8 == 0;
    }
    if (!bVar11) {
      puVar7 = *(undefined4 **)(param_1 + 0x24);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar8);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
  }
  else if (iVar3 == 0) {
    FUN_005c77c4(param_1 + 0x18);
  }
  FUN_016dd1aa(param_1 + 0x10,param_2,200);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    if (*(char *)(iVar6 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  *(undefined4 *)(iVar6 + 0x18) = uVar9;
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  return;
}

