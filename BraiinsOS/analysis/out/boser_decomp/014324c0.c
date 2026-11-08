// FUN_014324c0 @ 014324c0 size=536 calls_out=5 calls_in=2
// strings: 

void FUN_014324c0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int **ppiVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *local_a8;
  undefined4 *local_a4;
  undefined1 local_a0;
  int *local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_34;
  undefined1 local_30;
  
  local_98 = 0;
  iVar3 = FUN_014382d0(&local_98);
  local_88 = FUN_013cec90(0);
  local_6c = 0;
  local_74 = 0;
  local_78 = 1;
  local_7c = -0x80000000;
  local_80 = 0;
  local_94 = 1;
  local_98 = 1;
  local_90 = iVar3;
  local_8c = iVar3;
  local_84 = local_88;
  piVar4 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *piVar4 = local_98;
  piVar4[1] = local_94;
  piVar4[2] = local_90;
  piVar4[3] = local_8c;
  piVar4[4] = local_88;
  piVar4[5] = local_84;
  piVar4[6] = local_80;
  piVar4[7] = local_7c;
  piVar4[8] = local_78;
  piVar4[9] = local_74;
  piVar4[10] = iStack_70;
  piVar4[0xb] = local_6c;
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + 1;
  if (-1 < iVar3) {
    local_a4 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (local_a4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    local_a4[6] = 0;
    *local_a4 = 1;
    local_a4[1] = 1;
    local_a4[2] = 0;
    local_a4[3] = 0;
    local_a4[4] = 0;
    local_90 = 3;
    local_a0 = 0;
    local_8c = 0;
    local_30 = 0;
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_94 = 1;
    local_98 = 1;
    local_a8 = piVar4;
    local_9c = piVar4;
    piVar5 = (int *)thunk_FUN_01be5118(0x70);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x70);
    }
    FUN_01bed4e2(piVar5,&local_98,0x70);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + 1;
    if (-1 < iVar3) {
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x18);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      uVar9 = 2;
      if (param_5 != 0) {
        uVar9 = 1;
      }
      puVar6[5] = 0;
      *puVar6 = 1;
      puVar6[1] = 1;
      puVar6[2] = uVar9;
      puVar6[3] = 0;
      do {
        piVar7 = (int *)*puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = (int *)((int)piVar7 + 1);
      piVar8 = piVar7;
      ppiVar2 = (int **)((int)piVar7 + 1);
      if (piVar7 < &DAT_80000000) {
        piVar8 = param_1 + 2;
        ppiVar2 = &local_a8;
      }
      if (-1 < (int)piVar7) {
        iVar3 = (int)ppiVar2[1];
        iVar10 = (int)ppiVar2[2];
        *piVar8 = (int)*ppiVar2;
        piVar8[1] = iVar3;
        piVar8[2] = iVar10;
        param_1[0xe] = 0;
        param_1[6] = 1;
        param_1[7] = (int)piVar4;
        param_1[8] = (int)puVar6;
        param_1[9] = (int)piVar5;
        param_1[10] = param_3;
        param_1[0xb] = param_4;
        *param_1 = (int)piVar5;
        param_1[1] = (int)puVar6;
        return;
      }
    }
  }
  software_udf(0xfdee,0x14326a4);
  return;
}

