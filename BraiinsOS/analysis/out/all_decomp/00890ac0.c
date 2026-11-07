// FUN_00890ac0 @ 00890ac0 size=332 calls_out=5 calls_in=1
// strings: 

void FUN_00890ac0(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int extraout_r2;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *unaff_r8;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  iVar3 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  iVar3 = iVar3 + extraout_r2;
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    uVar9 = 0;
    uVar10 = 0;
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      iVar4 = *(int *)(param_1 + 0x18);
      goto joined_r0x00890b74;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
    unaff_r8 = (undefined4 *)(param_1 + 0x10);
  }
  uVar9 = *(undefined4 *)(iVar3 + 0x18);
  uVar10 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar3 + 0x18) = uVar6;
  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
  iVar4 = *(int *)(param_1 + 0x18);
joined_r0x00890b74:
  if (iVar4 == 1) {
    bVar1 = *(int *)(param_1 + 0x20) == 0;
    bVar2 = *(int *)(param_1 + 0x24) == 0;
    bVar11 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      unaff_r8 = *(undefined4 **)(param_1 + 0x28);
      bVar11 = unaff_r8 == (undefined4 *)0x0;
    }
    if (!bVar11) {
      puVar7 = *(undefined4 **)(param_1 + 0x2c);
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(unaff_r8);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r8);
      }
    }
  }
  else if ((iVar4 == 0) && (*(int *)(param_1 + 0x20) != 2 || *(int *)(param_1 + 0x24) != 0)) {
    FUN_007bea04();
  }
  FUN_016dd1aa(param_1 + 0x18,param_2,0x3e0);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(undefined4 *)(iVar3 + 0x18) = uVar9;
  *(undefined4 *)(iVar3 + 0x1c) = uVar10;
  return;
}

