// FUN_018b81cc @ 018b81cc size=412 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018b81cc(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 *local_128;
  int local_124;
  int local_120;
  undefined2 local_ac;
  undefined1 *local_a8;
  int local_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  undefined1 local_3c;
  
  local_140 = *param_3;
  local_13c = param_3[1];
  local_12c = 0;
  if (local_140 == -0x80000000) {
    local_13c = 1;
  }
  local_134 = 0;
  local_138 = param_3[2];
  local_130 = 4;
  if (local_140 == -0x80000000) {
    local_140 = 0;
    local_138 = 0;
  }
  piVar2 = &local_140;
  if (param_2 != 0) {
    piVar2 = *(int **)(param_2 + 8);
  }
  if (param_2 != 0 && piVar2 != (int *)0x0) {
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = 0;
    iVar6 = 4;
    do {
      iVar1 = local_12c;
      iVar3 = iVar5 + iVar7;
      FUN_015e8ad4(&local_128,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      local_a8 = local_128;
      local_a4 = local_124;
      iStack_a0 = local_120;
      local_94 = 0;
      local_98 = 4;
      local_9c = 0;
      if (iVar1 == local_134) {
        FUN_015f5b18(&local_134);
        iVar6 = local_130;
      }
      piVar4 = (int *)(iVar6 + iVar7 * 2);
      local_12c = iVar1 + 1;
      iVar7 = iVar7 + 0xc;
      *piVar4 = (int)local_a8;
      piVar4[1] = local_a4;
      piVar4[2] = iStack_a0;
      piVar4[3] = local_9c;
      piVar4[4] = local_98;
      piVar4[5] = local_94;
    } while ((int)piVar2 * 0xc != iVar7);
  }
  local_a4 = local_140;
  iStack_a0 = local_13c;
  local_9c = local_138;
  local_98 = local_134;
  local_94 = local_130;
  iStack_90 = local_12c;
  local_a8 = &DAT_80000005;
  local_3c = 8;
  FUN_018e1c0c(&local_128);
  local_ac = 5;
  if (-1 < (int)local_128) {
    FUN_018dc0bc(param_1,local_124,local_120);
  }
  FUN_01bed4e2(&local_a8,&local_128,0x80);
  FUN_018e077c(param_4,&local_a8,1);
  return;
}

