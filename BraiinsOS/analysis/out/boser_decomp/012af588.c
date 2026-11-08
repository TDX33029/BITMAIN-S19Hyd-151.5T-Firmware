// FUN_012af588 @ 012af588 size=1244 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012af588(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char **local_98;
  char *local_94;
  char **local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_60;
  int *local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  char ***local_34;
  undefined *local_30;
  int *local_2c;
  code *local_28;
  
  local_98 = &local_94;
  local_94 = (char *)(param_2 + 0x62);
  local_90 = &local_8c;
  local_8c = (char *)(param_2 + 0x70);
  if (*(char *)(param_2 + 0x70) == '\x04') {
    local_8c = local_94;
  }
  local_34 = &local_98;
  local_30 = &DAT_012b59c8;
  FUN_00664898(&local_88,&DAT_0041faec,&local_34);
  piVar4 = *(int **)(param_3 + 0x30);
  iVar7 = *(int *)(param_3 + 0x34);
  local_74 = 0;
  local_7c = 0;
  iVar1 = iVar7 << 3;
  local_78 = 4;
  piVar2 = piVar4;
  do {
    piVar5 = piVar2;
    if (iVar1 == 0) goto LAB_012af784;
    iVar1 = iVar1 + -8;
    piVar2 = piVar5 + 2;
  } while ((char)piVar5[1] != '\x01');
  local_40 = *piVar5;
  local_34 = &local_90;
  local_2c = &local_40;
  local_28 = FUN_012fbb84;
  local_30 = &DAT_012b59c8;
  FUN_00664898(&local_50,&DAT_0041fe2d,&local_34);
  if (local_50 == -0x80000000) {
LAB_012af784:
    local_68 = 0;
    local_6c = (int *)&SUB_00000004;
    local_70 = 0;
  }
  else {
    piVar2 = (int *)thunk_FUN_01be5118(0x30);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *piVar2 = local_50;
    piVar2[1] = local_4c;
    piVar2[2] = local_48;
    local_60 = 4;
    local_58 = 1;
    piVar5 = piVar5 + 2;
    iVar1 = 1;
    local_5c = piVar2;
    while( true ) {
      piVar6 = piVar5;
      if (piVar6 == piVar4 + iVar7 * 2) break;
      piVar5 = piVar6 + 2;
      if ((char)piVar6[1] == '\x01') {
        local_70 = *piVar6;
        local_28 = FUN_012fbb84;
        local_30 = &DAT_012b59c8;
        local_34 = &local_90;
        local_2c = &local_70;
        FUN_00664898(&local_40,&DAT_0041fe2d,&local_34);
        if (local_40 == -0x80000000) break;
        if (iVar1 == local_60) {
          FUN_006520b4(&local_60,iVar1,1,4,0xc);
          piVar2 = local_5c;
        }
        local_58 = iVar1 + 1;
        piVar3 = piVar2 + iVar1 * 3;
        *piVar3 = local_40;
        piVar3[1] = local_3c;
        piVar3[2] = local_38;
        iVar1 = local_58;
      }
    }
    local_70 = local_60;
    local_6c = local_5c;
    local_68 = local_58;
  }
  piVar2 = (int *)(*(int *)(param_3 + 0x3c) + 4);
  for (iVar1 = *(int *)(param_3 + 0x40) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
    if ((char)piVar2[1] != '\0') {
      local_50 = piVar2[-1];
      local_4c = *piVar2;
      local_28 = (code *)&LAB_018a13b8;
      local_2c = &local_50;
      local_30 = &DAT_012b59c8;
      local_34 = &local_90;
      FUN_00664898(&local_40,&DAT_0041fe20,&local_34);
      iVar7 = local_68;
      if (local_40 == -0x80000000) break;
      if (local_68 == local_70) {
        FUN_006520b4(&local_70,local_68,1,4,0xc);
      }
      piVar4 = local_6c + iVar7 * 3;
      *piVar4 = local_40;
      piVar4[1] = local_3c;
      piVar4[2] = local_38;
      local_68 = iVar7 + 1;
    }
    piVar2 = piVar2 + 3;
  }
  piVar2 = (int *)(*(int *)(param_3 + 0x24) + 4);
  for (iVar1 = *(int *)(param_3 + 0x28) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
    if ((char)piVar2[1] != '\0') {
      local_50 = piVar2[-1];
      local_4c = *piVar2;
      local_28 = (code *)&LAB_018a13b8;
      local_2c = &local_50;
      local_30 = &DAT_012b59c8;
      local_34 = &local_90;
      FUN_00664898(&local_40,&DAT_004200d0,&local_34);
      iVar7 = local_68;
      if (local_40 == -0x80000000) break;
      if (local_68 == local_70) {
        FUN_006520b4(&local_70,local_68,1,4,0xc);
      }
      piVar4 = local_6c + iVar7 * 3;
      *piVar4 = local_40;
      piVar4[1] = local_3c;
      piVar4[2] = local_38;
      local_68 = iVar7 + 1;
    }
    piVar2 = piVar2 + 3;
  }
  FUN_012b345c(&local_50,local_6c,local_68,local_84,local_80);
  if (local_48 != 0) {
    local_28 = (code *)&LAB_00632348;
    local_30 = &DAT_012b59c8;
    local_34 = &local_98;
    local_2c = &local_50;
    FUN_00664898(&local_40,&DAT_0041faf8,&local_34);
    iVar7 = local_40;
    iVar1 = local_74;
    if (local_74 == local_7c) {
      FUN_019abd3c(&local_7c);
    }
    piVar2 = (int *)(local_78 + iVar1 * 0xc);
    *piVar2 = iVar7;
    piVar2[1] = local_3c;
    piVar2[2] = local_38;
    local_74 = iVar1 + 1;
  }
  FUN_012b345c(param_1,local_78,local_74,&DAT_005319c3,1);
  FUN_0134bd64(local_50,local_4c);
  FUN_006a41c0(&local_70);
  FUN_006a41c0(&local_7c);
  FUN_0134bd64(local_88,local_84);
  return;
}

