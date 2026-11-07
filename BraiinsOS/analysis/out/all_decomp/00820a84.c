// FUN_00820a84 @ 00820a84 size=384 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_00820a84(undefined8 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined *puStack_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    iVar3 = *(int *)((int)param_1 + 0xc);
    uVar4 = 0;
    if (iVar3 < 0) {
LAB_00820ac0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,iVar3);
    }
    uVar4 = *(undefined4 *)(param_1 + 1);
    uVar1 = *(undefined1 *)((int)param_1 + 0x14);
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 2) + 4) + 8);
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 2) + 4) + 0xc);
    if (iVar3 == 0) {
      local_38 = 0;
      local_34 = 1;
    }
    else {
      local_34 = thunk_FUN_016d4a50(iVar3);
      local_38 = iVar3;
      if (local_34 == 0) {
        uVar4 = 1;
        goto LAB_00820ac0;
      }
    }
    FUN_016dd1aa(local_34,uVar4,iVar3);
    local_30 = iVar3;
    uVar8 = (**(code **)(iVar7 + 0x14))
                      (iVar6 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8,uVar1,&local_38);
    *param_1 = uVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861ec8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861ec8);
  case 3:
    uVar8 = *param_1;
  }
  uVar9 = (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))((int)uVar8,param_2);
  iVar3 = (int)(uVar9 >> 0x20);
  if ((uVar9 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x15) = 3;
    return 1;
  }
  uVar4 = *(undefined4 *)param_1;
  puVar5 = *(undefined4 **)((int)param_1 + 4);
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  if (iVar3 != 0) {
    local_38 = 3;
    puStack_44 = &DAT_00344a2a;
    uStack_40 = 0xf;
    local_3c = iVar3;
    FUN_0080807c(&puStack_44,&local_38);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return 0;
}

