// FUN_00868b40 @ 00868b40 size=596 calls_out=7 calls_in=3
// strings: 

void FUN_00868b40(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int local_3c;
  code *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x12)) {
  case 0:
    piVar2 = (int *)param_2[3];
    uVar1 = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)((int)param_2 + 0x11) = uVar1;
    param_2[1] = piVar2;
    param_2[2] = *param_2;
    iVar7 = *piVar2;
    iVar10 = piVar2[1];
    iVar6 = piVar2[2];
    local_38 = (code *)thunk_FUN_016d4a50(1);
    if (local_38 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    iVar3 = *(int *)(iVar10 + 8);
    *local_38 = (code)uVar1;
    local_34 = (undefined4 *)0x1;
    local_3c = 1;
    uVar13 = (**(code **)(iVar10 + 0x14))
                       (iVar7 + (iVar3 - 1U & 0xfffffff8) + 8,(char)iVar6,&local_3c);
    *(undefined8 *)(param_2 + 5) = uVar13;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018861d4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018861d4);
  case 3:
    uVar13 = *(undefined8 *)(param_2 + 5);
    break;
  case 4:
    uVar13 = *(undefined8 *)(param_2 + 5);
    goto LAB_00868d00;
  }
  uVar12 = (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))((int)uVar13,param_3);
  iVar6 = (int)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    *param_1 = -0x7fffffff;
    *(undefined1 *)((int)param_2 + 0x12) = 3;
    return;
  }
  puVar11 = (undefined4 *)param_2[6];
  puVar8 = (undefined4 *)param_2[5];
  pcVar4 = (code *)*puVar11;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(puVar8);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (iVar6 == 0) {
    piVar2 = (int *)param_2[1];
    uVar13 = (**(code **)(piVar2[1] + 0x10))
                       (*piVar2 + (*(int *)(piVar2[1] + 8) - 1U & 0xfffffff8) + 8,(char)piVar2[2],
                        param_2[2]);
    *(undefined8 *)(param_2 + 5) = uVar13;
LAB_00868d00:
    (**(code **)((int)((ulonglong)uVar13 >> 0x20) + 0xc))(&local_3c,(int)uVar13,param_3);
    puVar8 = local_34;
    pcVar4 = local_38;
    iVar6 = local_3c;
    if (local_3c == -0x7fffffff) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)((int)param_2 + 0x12) = 4;
      return;
    }
    uVar9 = param_2[5];
    puVar11 = (undefined4 *)param_2[6];
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar9);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
  }
  else {
    local_34 = param_2 + 2;
    local_3c = (int)param_2 + 0x11;
    local_30 = &LAB_00fac484;
    local_38 = FUN_00facb58;
    FUN_00600d2c(&local_60,&DAT_00389050,&local_3c);
    local_3c = 3;
    local_50 = local_60;
    uStack_4c = uStack_5c;
    uStack_48 = uStack_58;
    iStack_44 = iVar6;
    pcVar4 = (code *)FUN_0080818c(&local_50,&local_3c);
    iVar6 = -0x80000000;
  }
  *param_1 = iVar6;
  param_1[1] = (int)pcVar4;
  param_1[2] = (int)puVar8;
  *(undefined1 *)((int)param_2 + 0x12) = 1;
  return;
}

