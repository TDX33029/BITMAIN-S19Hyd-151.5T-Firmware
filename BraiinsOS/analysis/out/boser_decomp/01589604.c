// FUN_01589604 @ 01589604 size=604 calls_out=9 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01589604(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_68;
  int *local_64;
  int local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int *local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_01589094(param_2,param_3,param_4,param_5);
  piVar2 = (int *)FUN_01596948();
  iVar6 = *piVar2;
  *piVar2 = 0;
  if (iVar6 != 0) {
    local_28 = iVar6;
    FUN_014fb894(&local_40,&local_28);
    FUN_014fb3a0(&local_28);
    local_58 = (int)local_3c;
    iStack_54 = local_38;
    iStack_50 = iStack_34;
    iStack_4c = iStack_30;
    iStack_48 = iStack_2c;
    if (local_40 != -0x80000000) {
      piVar7 = (int *)((uint)&local_40 | 4);
      *piVar7 = (int)local_3c;
      piVar7[1] = local_38;
      piVar7[2] = iStack_34;
      piVar7[3] = iStack_30;
      piVar7[4] = iStack_2c;
      piVar3 = (int *)FUN_01298504(0x60,4);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x60);
      }
      *piVar3 = local_40;
      piVar3[1] = (int)local_3c;
      piVar3[2] = local_38;
      piVar3[3] = iStack_34;
      piVar3[4] = iStack_30;
      piVar3[5] = iStack_2c;
      local_68 = 4;
      iVar6 = 0x18;
      local_60 = 1;
      local_64 = piVar3;
      while( true ) {
        iVar1 = local_60;
        iVar4 = *piVar2;
        *piVar2 = 0;
        if (iVar4 == 0) break;
        local_28 = iVar4;
        FUN_014fb894(&local_40,&local_28);
        FUN_014fb3a0(&local_28);
        local_58 = (int)local_3c;
        iStack_54 = local_38;
        iStack_50 = iStack_34;
        iStack_4c = iStack_30;
        iStack_48 = iStack_2c;
        if (local_40 == -0x80000000) break;
        *piVar7 = (int)local_3c;
        piVar7[1] = local_38;
        piVar7[2] = iStack_34;
        piVar7[3] = iStack_30;
        piVar7[4] = iStack_2c;
        if (iVar1 == local_68) {
          uVar8 = 2;
          if (*piVar2 == 0) {
            uVar8 = 1;
          }
          FUN_01af7b44(&local_68,iVar1,uVar8,4,0x18);
          piVar3 = local_64;
        }
        piVar5 = (int *)((int)piVar3 + iVar6);
        local_60 = iVar1 + 1;
        iVar6 = iVar6 + 0x18;
        *piVar5 = local_40;
        piVar5[1] = (int)local_3c;
        piVar5[2] = local_38;
        piVar5[3] = iStack_34;
        piVar5[4] = iStack_30;
        piVar5[5] = iStack_2c;
      }
      FUN_01139b38(piVar2,&DAT_01cfc1c0);
      local_40 = local_68;
      local_3c = local_64;
      local_38 = local_60;
      if (local_60 != 0) {
        *param_1 = local_68;
        param_1[1] = (int)local_64;
        param_1[2] = local_60;
        param_1[3] = 0;
        param_1[4] = 4;
        param_1[5] = 0;
        param_1[6] = 0;
        return;
      }
      goto LAB_015896a4;
    }
  }
  local_3c = (int *)&SUB_00000004;
  local_38 = 0;
  local_40 = 0;
  FUN_01139b38(piVar2,&DAT_01cfc1c0);
LAB_015896a4:
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = -0x80000000;
  FUN_0074dd34(&local_40);
  return;
}

