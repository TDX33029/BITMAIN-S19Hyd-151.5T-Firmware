// FUN_007d359c @ 007d359c size=768 calls_out=7 calls_in=0
// strings: a Display implementation returned an error unexpectedly

void FUN_007d359c(int *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int local_58;
  undefined2 *local_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined2 *local_3c;
  int local_38;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 9)) {
  case 0:
    piVar3 = (int *)param_2[1];
    *param_2 = (int)piVar3;
    *(char *)(param_2 + 2) = *(char *)((int)param_2 + 10);
    if (*(char *)((int)param_2 + 10) != '\0') {
      local_58 = -0x80000000;
      goto LAB_007d3838;
    }
    uVar10 = (**(code **)(piVar3[1] + 0xc))
                       (*piVar3 + (*(int *)(piVar3[1] + 8) - 1U & 0xfffffff8) + 8,(char)piVar3[2]);
    *(undefined8 *)(param_2 + 3) = uVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e42c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e42c);
  case 3:
    uVar10 = *(undefined8 *)(param_2 + 3);
    break;
  case 4:
    uVar10 = *(undefined8 *)(param_2 + 3);
    goto LAB_007d36e8;
  }
  uVar9 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))((int)uVar10,param_3);
  iVar5 = (int)(uVar9 >> 0x20);
  if ((uVar9 & 1) != 0) {
    *param_1 = -0x7ffffffa;
    *(undefined1 *)((int)param_2 + 9) = 3;
    return;
  }
  iVar4 = param_2[3];
  puVar8 = (undefined4 *)param_2[4];
  pcVar6 = (code *)*puVar8;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(iVar4);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (iVar5 == 0) {
    piVar3 = (int *)*param_2;
    uVar10 = (**(code **)(piVar3[1] + 0x10))
                       (*piVar3 + (*(int *)(piVar3[1] + 8) - 1U & 0xfffffff8) + 8,(char)piVar3[2],2)
    ;
    *(undefined8 *)(param_2 + 3) = uVar10;
LAB_007d36e8:
    (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))(&local_40,(int)uVar10,param_3);
    iVar4 = local_38;
    puVar2 = local_3c;
    iVar5 = local_40;
    if (local_40 == -0x7fffffff) {
      *param_1 = -0x7ffffffa;
      *(undefined1 *)((int)param_2 + 9) = 4;
      return;
    }
    iVar7 = param_2[3];
    puVar8 = (undefined4 *)param_2[4];
    pcVar6 = (code *)*puVar8;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    if (iVar5 == -0x80000000) {
      FUN_010f4fd4(&local_58,puVar2);
    }
    else {
      if (iVar4 == 2) {
        bVar1 = (byte)((ushort)*puVar2 >> 8);
        local_4c = CONCAT13(local_4c._3_1_,CONCAT12(bVar1,*puVar2)) & 0xff7f00ff;
        local_4c._0_2_ = CONCAT11(bVar1 >> 7,(undefined1)local_4c);
        FUN_010f319c(&local_40,&local_4c);
        if (local_40 == 1) {
          FUN_010f4fd4(&local_58,local_3c);
        }
        else {
          local_58 = -0x7ffffffb;
          local_54 = local_3c;
        }
      }
      else {
        local_48 = 2;
        local_28 = &LAB_0127ca5c;
        local_2c = &local_30;
        local_44 = iVar4;
        local_4c = 6;
        local_38 = 0;
        local_40 = 0;
        local_30 = &local_4c;
        local_3c = (undefined2 *)&DAT_00000001;
        iVar4 = FUN_00fa948c(&local_40,&DAT_0185eb10,&DAT_00590e71,&local_2c);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_2c,
                       &DAT_0185eb38,&DAT_018af130);
        }
        local_58 = local_40;
        local_54 = local_3c;
        iStack_50 = local_38;
      }
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(puVar2);
      }
    }
  }
  else {
    FUN_010f4fd4(&local_58,iVar5);
  }
LAB_007d3838:
  *param_1 = local_58;
  param_1[1] = (int)local_54;
  param_1[2] = iStack_50;
  *(undefined1 *)((int)param_2 + 9) = 1;
  return;
}

