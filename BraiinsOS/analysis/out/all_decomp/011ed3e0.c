// FUN_011ed3e0 @ 011ed3e0 size=824 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011ed3e0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *local_70;
  uint local_6c;
  int *local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c [3];
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = FUN_011e37a8(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_00000001;
    puVar10 = (undefined4 *)&DAT_0188a364;
  }
  else {
    local_40 = iVar1;
    piVar2 = (int *)thunk_FUN_016d4a50(4);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *piVar2 = iVar1;
    puVar10 = &DAT_0188a348;
  }
  pcVar7 = (code *)puVar10[3];
  iVar1 = (*pcVar7)(piVar2);
  if (iVar1 != 0) {
    local_4c[0] = iVar1;
    FUN_011578ec(&local_40,local_4c);
    FUN_01157d7c(iVar1);
    thunk_FUN_016d3fb4(iVar1);
    local_60 = local_3c;
    iStack_5c = iStack_38;
    iStack_58 = iStack_34;
    iStack_54 = iStack_30;
    iStack_50 = iStack_2c;
    if (local_40 != -0x80000000) {
      piVar3 = (int *)((uint)&local_40 | 4);
      *piVar3 = local_3c;
      piVar3[1] = iStack_38;
      piVar3[2] = iStack_34;
      piVar3[3] = iStack_30;
      piVar3[4] = iStack_2c;
      pcVar8 = (code *)puVar10[4];
      (*pcVar8)(local_4c,piVar2);
      local_70 = (int *)&DAT_00000004;
      uVar9 = local_4c[0] + 1;
      if (local_4c[0] == -1) {
        uVar9 = 0xffffffff;
      }
      uVar11 = 4;
      if (4 < uVar9) {
        uVar11 = uVar9;
      }
      iVar1 = uVar11 * 0x18;
      uVar4 = 0;
      if (0x5555555 < uVar9) {
LAB_011ed55c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,iVar1);
      }
      if (iVar1 == 0) {
        uVar11 = 0;
      }
      else {
        local_70 = (int *)thunk_FUN_016d4a50(iVar1);
        if (local_70 == (int *)0x0) {
          uVar4 = 4;
          goto LAB_011ed55c;
        }
      }
      *local_70 = local_40;
      local_70[1] = local_3c;
      local_70[2] = iStack_38;
      local_70[3] = iStack_34;
      local_70[4] = iStack_30;
      local_70[5] = iStack_2c;
      iVar1 = 0x18;
      local_64 = 1;
      local_6c = uVar11;
      local_68 = local_70;
      while (uVar9 = local_64, iVar6 = (*pcVar7)(piVar2), iVar6 != 0) {
        local_4c[0] = iVar6;
        FUN_011578ec(&local_40,local_4c);
        FUN_01157d7c(iVar6);
        thunk_FUN_016d3fb4(iVar6);
        local_60 = local_3c;
        iStack_5c = iStack_38;
        iStack_58 = iStack_34;
        iStack_54 = iStack_30;
        iStack_50 = iStack_2c;
        if (local_40 == -0x80000000) break;
        *piVar3 = local_3c;
        piVar3[1] = iStack_38;
        piVar3[2] = iStack_34;
        piVar3[3] = iStack_30;
        piVar3[4] = iStack_2c;
        if (uVar9 == local_6c) {
          (*pcVar8)(local_4c,piVar2);
          iVar6 = local_4c[0] + 1;
          if (local_4c[0] == -1) {
            iVar6 = -1;
          }
          FUN_011cf828(&local_6c,uVar9,iVar6,4,0x18);
          local_70 = local_68;
        }
        piVar5 = (int *)((int)local_70 + iVar1);
        local_64 = uVar9 + 1;
        iVar1 = iVar1 + 0x18;
        *piVar5 = local_40;
        piVar5[1] = local_3c;
        piVar5[2] = iStack_38;
        piVar5[3] = iStack_34;
        piVar5[4] = iStack_30;
        piVar5[5] = iStack_2c;
      }
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(piVar2);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(piVar2);
      }
      *param_1 = local_6c;
      param_1[1] = (uint)local_70;
      param_1[2] = uVar9;
      param_1[3] = 0;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      return;
    }
  }
  if ((code *)*puVar10 != (code *)0x0) {
    (*(code *)*puVar10)(piVar2);
  }
  if (puVar10[1] != 0) {
    thunk_FUN_016d3fb4(piVar2);
  }
  *param_1 = 0x80000000;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

