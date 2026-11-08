// FUN_00869394 @ 00869394 size=484 calls_out=8 calls_in=4
// strings: 

longlong FUN_00869394(undefined8 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 unaff_r5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 local_31;
  undefined1 *local_30;
  code *local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x1e)) {
  case 0:
    iVar8 = *(int *)(param_1 + 3);
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    uVar1 = *(undefined1 *)((int)param_1 + 0x1c);
    piVar10 = *(int **)((int)param_1 + 0x14);
    local_31 = uVar1;
    if (*(int *)(iVar8 + 8) == 0) {
      local_30 = &local_31;
      local_2c = FUN_00facb58;
      uVar3 = FUN_00829628(&DAT_00388e14,&local_30);
      goto LAB_00869524;
    }
    iVar11 = 1;
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(1);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *puVar2 = uVar1;
    puVar6 = param_1 + 1;
    *(undefined4 *)puVar6 = 1;
    *(undefined1 **)((int)param_1 + 0xc) = puVar2;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
    *(undefined4 *)(param_1 + 2) = 1;
    uVar7 = *(undefined4 *)(iVar8 + 4);
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 != 0) {
      FUN_007f5a44(puVar6,1,iVar8,1,1);
      puVar2 = *(undefined1 **)((int)param_1 + 0xc);
      iVar11 = *(int *)(param_1 + 2);
    }
    FUN_016dd1aa(puVar2 + iVar11,uVar7,iVar8);
    *(int *)(param_1 + 2) = iVar11 + iVar8;
    iVar11 = *piVar10;
    iVar5 = *(int *)(piVar10[1] + 8);
    iVar8 = piVar10[2];
    pcVar4 = *(code **)(piVar10[1] + 0x14);
    local_30 = *(undefined1 **)puVar6;
    local_2c = *(code **)((int)param_1 + 0xc);
    unaff_r5 = *(undefined4 *)(param_1 + 2);
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    local_28 = unaff_r5;
    uVar12 = (*pcVar4)(iVar11 + (iVar5 - 1U & 0xfffffff8) + 8,(char)iVar8,&local_30);
    *param_1 = uVar12;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886118);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886118);
  case 3:
    uVar12 = *param_1;
  }
  uVar13 = (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))((int)uVar12,param_2);
  uVar3 = (uint)(uVar13 >> 0x20);
  if ((uVar13 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x1e) = 3;
    return CONCAT44(unaff_r5,1);
  }
  uVar7 = *(undefined4 *)param_1;
  puVar9 = *(undefined4 **)((int)param_1 + 4);
  pcVar4 = (code *)*puVar9;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar7);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
LAB_00869524:
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  return (ulonglong)uVar3 << 0x20;
}

