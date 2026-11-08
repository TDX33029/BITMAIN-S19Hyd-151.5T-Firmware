// FUN_011ccb74 @ 011ccb74 size=696 calls_out=9 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011ccb74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  iVar2 = FUN_011cc42c(param_2,param_3,param_4,param_5);
  local_40 = iVar2;
  piVar3 = (int *)thunk_FUN_016d4a50(4);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piVar3 = 0;
  local_28 = iVar2;
  FUN_011578ec(&local_40,&local_28);
  FUN_01157d7c(iVar2);
  thunk_FUN_016d3fb4(iVar2);
  local_58 = local_3c;
  iStack_54 = iStack_38;
  iStack_50 = iStack_34;
  iStack_4c = iStack_30;
  iStack_48 = iStack_2c;
  if (local_40 == -0x80000000) {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      FUN_011efa6c(iVar2);
      thunk_FUN_016d3fb4(iVar2);
    }
    thunk_FUN_016d3fb4(piVar3);
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  piVar6 = (int *)((uint)&local_40 | 4);
  *piVar6 = local_3c;
  piVar6[1] = iStack_38;
  piVar6[2] = iStack_34;
  piVar6[3] = iStack_30;
  piVar6[4] = iStack_2c;
  iVar2 = *piVar3;
  piVar4 = (int *)thunk_FUN_016d4a50(0x60);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x60);
  }
  iVar8 = 0x18;
  *piVar4 = local_40;
  piVar4[1] = local_3c;
  piVar4[2] = iStack_38;
  piVar4[3] = iStack_34;
  piVar4[4] = iStack_30;
  piVar4[5] = iStack_2c;
  local_5c = 1;
  local_64 = 4;
  local_60 = piVar4;
  do {
    iVar1 = local_5c;
    *piVar3 = 0;
    if (iVar2 == 0) {
LAB_011ccda8:
      thunk_FUN_016d3fb4(piVar3);
      if (local_5c == 0) {
        *param_1 = -0x80000000;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0;
        if (local_64 != 0) {
          thunk_FUN_016d3fb4();
          return;
        }
      }
      else {
        *param_1 = local_64;
        param_1[1] = (int)local_60;
        param_1[2] = local_5c;
        param_1[3] = 0;
        param_1[4] = 4;
        param_1[5] = 0;
        param_1[6] = 0;
      }
      return;
    }
    local_28 = iVar2;
    FUN_011578ec(&local_40,&local_28);
    FUN_01157d7c(iVar2);
    thunk_FUN_016d3fb4(iVar2);
    local_58 = local_3c;
    iStack_54 = iStack_38;
    iStack_50 = iStack_34;
    iStack_4c = iStack_30;
    iStack_48 = iStack_2c;
    if (local_40 == -0x80000000) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        FUN_011efa6c(iVar2);
        thunk_FUN_016d3fb4(iVar2);
      }
      goto LAB_011ccda8;
    }
    *piVar6 = local_3c;
    piVar6[1] = iStack_38;
    piVar6[2] = iStack_34;
    piVar6[3] = iStack_30;
    piVar6[4] = iStack_2c;
    iVar2 = *piVar3;
    if (iVar1 == local_64) {
      uVar7 = 2;
      if (iVar2 == 0) {
        uVar7 = 1;
      }
      FUN_011cf828(&local_64,iVar1,uVar7,4,0x18);
      iVar2 = *piVar3;
      piVar4 = local_60;
    }
    piVar5 = (int *)((int)piVar4 + iVar8);
    local_5c = iVar1 + 1;
    iVar8 = iVar8 + 0x18;
    *piVar5 = local_40;
    piVar5[1] = local_3c;
    piVar5[2] = iStack_38;
    piVar5[3] = iStack_34;
    piVar5[4] = iStack_30;
    piVar5[5] = iStack_2c;
  } while( true );
}

