// FUN_00a210f8 @ 00a210f8 size=704 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a210f8(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_1a8 [88];
  int local_150;
  int iStack_14c;
  int iStack_148;
  int local_140;
  int local_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined1 auStack_12c [84];
  int local_d8;
  int *local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int *local_c0;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int *piStack_70;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  
  iVar3 = *param_2;
  iVar4 = param_2[1];
  if (iVar3 == 2 && iVar4 == 0) {
    iVar3 = 0;
    iVar4 = 0;
    iVar6 = 0;
  }
  else {
    unaff_d8 = *(double *)(param_2 + 2) * 1000000.0;
    if ((param_2[4] & 1U) == 0) {
      iVar6 = 0;
    }
    else {
      unaff_d9 = *(undefined8 *)(param_2 + 6);
      iVar6 = 1;
    }
  }
  local_13c = 0;
  local_140 = 3;
  local_c0 = &local_140;
  local_c4 = param_3 + param_4 * 0x30;
  local_c8 = param_3;
  FUN_00b14bc0(&local_a8,&local_c8);
  if (local_a8 == 2 && local_a4 == 0) {
    local_d0 = 0;
    local_d4 = (int *)&DAT_00000008;
    local_d8 = 0;
  }
  else {
    piVar1 = (int *)thunk_FUN_01be5118(0xc0);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0xc0);
    }
    *piVar1 = local_a8;
    piVar1[1] = local_a4;
    piVar1[2] = iStack_a0;
    piVar1[3] = iStack_9c;
    piVar1[4] = iStack_98;
    piVar1[5] = iStack_94;
    piVar1[6] = local_90;
    piVar1[7] = iStack_8c;
    piVar1[8] = local_88;
    piVar1[9] = local_84;
    piVar1[10] = iStack_80;
    piVar1[0xb] = iStack_7c;
    local_b8 = 4;
    local_b0 = 1;
    iVar5 = 0x30;
    local_78 = local_c8;
    iStack_74 = local_c4;
    piStack_70 = local_c0;
    local_b4 = piVar1;
    while (iVar7 = local_b0, FUN_00b14bc0(&local_68,&local_78), local_68 != 2 || local_64 != 0) {
      if (iVar7 == local_b8) {
        FUN_0132b898(&local_b8,iVar7,1,8,0x30);
        piVar1 = local_b4;
      }
      piVar2 = (int *)((int)piVar1 + iVar5);
      local_b0 = iVar7 + 1;
      iVar5 = iVar5 + 0x30;
      *piVar2 = local_68;
      piVar2[1] = local_64;
      piVar2[2] = iStack_60;
      piVar2[3] = iStack_5c;
      piVar2[4] = iStack_58;
      piVar2[5] = iStack_54;
      piVar2[6] = local_50;
      piVar2[7] = iStack_4c;
      piVar2[8] = local_48;
      piVar2[9] = local_44;
      piVar2[10] = iStack_40;
      piVar2[0xb] = iStack_3c;
    }
    local_d8 = local_b8;
    local_d4 = local_b4;
    local_d0 = local_b0;
  }
  iVar7 = local_13c;
  iVar5 = local_140;
  if (local_140 == 3 && local_13c == 0) {
    iVar5 = 3;
    param_1[10] = local_d8;
    param_1[0xb] = (int)local_d4;
    param_1[0xc] = local_d0;
    iVar7 = 0;
    *(double *)(param_1 + 4) = unaff_d8;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[6] = iVar6;
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 8) = unaff_d9;
  }
  else {
    local_150 = local_138;
    iStack_14c = iStack_134;
    iStack_148 = iStack_130;
    FUN_01bed4e2(auStack_1a8,auStack_12c,0x54);
    FUN_00b1620c(&local_d8);
    local_68 = local_150;
    local_64 = iStack_14c;
    iStack_60 = iStack_148;
    FUN_01bed4e2(param_1 + 5,auStack_1a8,0x54);
    param_1[2] = local_68;
    param_1[3] = local_64;
    param_1[4] = iStack_60;
  }
  *param_1 = iVar5;
  param_1[1] = iVar7;
  return;
}

