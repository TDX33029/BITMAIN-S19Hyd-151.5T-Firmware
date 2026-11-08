// FUN_00e3fde4 @ 00e3fde4 size=496 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00e3fde4(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    piVar2 = (int *)param_1[3];
    local_30 = *param_1;
    local_2c = param_1[1];
    local_28 = param_1[2];
    *(undefined1 *)((int)param_1 + 0x11) = 1;
    if (*piVar2 == 0) {
      iVar3 = piVar2[9];
      iVar9 = *(int *)(piVar2[10] + 8);
      pcVar6 = *(code **)(piVar2[10] + 0x18);
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      local_30 = *param_1;
      local_2c = param_1[1];
      local_28 = param_1[2];
      uVar10 = (*pcVar6)(iVar3 + (iVar9 - 1U & 0xfffffff8) + 8,&local_30);
      *(undefined8 *)(param_1 + 5) = uVar10;
      goto LAB_00e3ff64;
    }
    piVar5 = (int *)piVar2[1];
    iVar9 = piVar2[9];
    iVar3 = piVar2[10];
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xfdee,0xe3ffe4);
      (*pcVar6)();
    }
    iVar4 = *(int *)(iVar3 + 8);
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    uVar10 = (**(code **)(iVar3 + 0x1c))
                       (iVar9 + (iVar4 - 1U & 0xfffffff8) + 8,piVar5,&DAT_0187a5c0,&local_30);
    *(undefined8 *)(param_1 + 5) = uVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187a628);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a628);
  case 3:
    uVar10 = *(undefined8 *)(param_1 + 5);
LAB_00e3ff64:
    iVar3 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))((int)uVar10,param_2);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 4) = 3;
      return 1;
    }
    uVar7 = param_1[5];
    puVar8 = (undefined4 *)param_1[6];
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(uVar7);
    }
    goto LAB_00e3ffa0;
  case 4:
    uVar10 = *(undefined8 *)(param_1 + 5);
  }
  iVar3 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))((int)uVar10,param_2);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 4) = 4;
    return 1;
  }
  uVar7 = param_1[5];
  puVar8 = (undefined4 *)param_1[6];
  if ((code *)*puVar8 != (code *)0x0) {
    (*(code *)*puVar8)(uVar7);
  }
LAB_00e3ffa0:
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return 0;
}

