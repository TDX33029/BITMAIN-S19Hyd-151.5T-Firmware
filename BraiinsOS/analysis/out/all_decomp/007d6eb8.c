// FUN_007d6eb8 @ 007d6eb8 size=488 calls_out=5 calls_in=3
// strings: 

longlong FUN_007d6eb8(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined4 unaff_r5;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_28;
  uint local_24;
  int iStack_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[0x25]) {
  case 0:
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    piVar4 = *(int **)(param_1 + 0x20);
    FUN_00835ea4(&local_38,*(int *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14));
    param_1[0x24] = 1;
    iVar5 = *(int *)(*piVar4 + 8);
    iVar7 = *(int *)(*piVar4 + 0xc);
    iVar9 = *(int *)(iVar7 + 8);
    FUN_007e5ad0(&local_28,0x20,*(undefined4 *)(param_1 + 0x1c));
    if ((char)local_28 != '\x01') {
      uVar1 = local_28._1_1_;
      unaff_r5 = 0;
      param_1[1] = local_28._1_1_;
      *param_1 = 0;
      pcVar2 = *(code **)(iVar7 + 0x18);
      param_1[0x24] = 0;
      local_28 = local_38;
      local_24 = local_34;
      iStack_20 = local_30;
      uVar10 = (*pcVar2)(iVar5 + (iVar9 - 1U & 0xfffffff8) + 8,uVar1,&local_28);
      *(undefined8 *)(param_1 + 8) = uVar10;
      goto LAB_007d6fb4;
    }
    *(uint *)(param_1 + 4) = local_24;
    *param_1 = 1;
    uVar3 = local_24;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185f9a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185f9a0);
  case 3:
    uVar10 = *(undefined8 *)(param_1 + 8);
LAB_007d6fb4:
    uVar11 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))((int)uVar10,param_2);
    uVar3 = (uint)(uVar11 >> 0x20);
    if ((uVar11 & 1) != 0) {
      param_1[0x25] = 3;
      return CONCAT44(unaff_r5,1);
    }
    uVar6 = *(undefined4 *)(param_1 + 8);
    puVar8 = *(undefined4 **)(param_1 + 0xc);
    pcVar2 = (code *)*puVar8;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar6);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    if (uVar3 == 0) {
      uVar3 = 0;
      param_1[0x24] = 0;
      goto LAB_007d7080;
    }
  }
  if (param_1[0x24] != '\0') {
    puVar8 = (undefined4 *)(local_34 + 4);
    for (iVar9 = local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    if (local_38 != 0) {
      thunk_FUN_016d3fb4(local_34);
    }
  }
  param_1[0x24] = 0;
LAB_007d7080:
  param_1[0x25] = 1;
  return (ulonglong)uVar3 << 0x20;
}

