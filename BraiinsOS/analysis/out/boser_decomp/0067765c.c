// FUN_0067765c @ 0067765c size=484 calls_out=4 calls_in=0
// strings: 

void FUN_0067765c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_1c8 [136];
  int *local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined1 auStack_b0 [140];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x38)) {
  case 0:
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x14);
switchD_006776c8_caseD_0:
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    iVar3 = *(int *)(param_2 + 0x24);
    if (*(int *)(param_2 + 0x1c) != 0) {
      piVar5 = *(int **)(param_2 + 0x18);
      local_13c = *(int *)(param_2 + 0x1c) + -1;
      local_140 = piVar5 + 2;
      local_138 = uVar2;
      local_134 = iVar3;
      uVar6 = (**(code **)(piVar5[1] + 0xc))
                        (*piVar5 + (*(int *)(piVar5[1] + 8) - 1U & 0xfffffff8) + 8,
                         *(undefined4 *)(param_2 + 0x28),&local_140);
      *(undefined8 *)(param_2 + 0x30) = uVar6;
      goto LAB_0067774c;
    }
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(int *)(param_2 + 0x34) = iVar3;
LAB_006777a0:
    (**(code **)(iVar3 + 0xc))(&local_140,uVar2,param_3);
    iVar3 = local_13c;
    piVar5 = local_140;
    if (local_140 != (int *)&DAT_00000003 || local_13c != 0) {
      FUN_01bed4e2(auStack_b0,&local_138,0x88);
      goto LAB_006777f8;
    }
    uVar1 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c046f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c046f4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2c)) {
    case 0:
      goto switchD_006776c8_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1ac70);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1ac70);
    case 3:
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      break;
    case 4:
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      iVar3 = *(int *)(param_2 + 0x34);
      goto LAB_006777a0;
    }
LAB_0067774c:
    (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0xc))(&local_140,(int)uVar6,param_3);
    iVar3 = local_13c;
    piVar5 = local_140;
    if (local_140 != (int *)&DAT_00000003 || local_13c != 0) {
      FUN_01bed4e2(auStack_b0,&local_138,0x88);
      FUN_01139b38(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
LAB_006777f8:
      FUN_01bed4e2(auStack_1c8,auStack_b0,0x88);
      uVar4 = 1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *param_1 = piVar5;
      param_1[1] = iVar3;
      FUN_01bed4e2(param_1 + 2,auStack_1c8,0x88);
      goto LAB_00677828;
    }
    uVar1 = 3;
  }
  uVar4 = 3;
  *(undefined1 *)(param_2 + 0x2c) = uVar1;
  *param_1 = 3;
  param_1[1] = 0;
LAB_00677828:
  *(undefined1 *)(param_2 + 0x38) = uVar4;
  return;
}

