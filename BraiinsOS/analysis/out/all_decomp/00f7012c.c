// FUN_00f7012c @ 00f7012c size=496 calls_out=4 calls_in=0
// strings: 

void FUN_00f7012c(uint *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int unaff_r6;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint local_68;
  int *local_64;
  uint local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_30 [3];
  
  pcVar6 = (code *)param_3[3];
  (*pcVar6)(&local_58);
  if (local_58 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    pcVar6 = (code *)*param_3;
    param_1[2] = 0;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(param_2);
    }
    if (param_3[1] != 0) {
      thunk_FUN_016d3fb4(param_2);
      return;
    }
  }
  else {
    pcVar4 = (code *)param_3[4];
    (*pcVar4)(local_30,param_2);
    piVar9 = (int *)&DAT_00000004;
    uVar1 = local_30[0] + 1;
    if (local_30[0] == -1) {
      uVar1 = 0xffffffff;
    }
    uVar7 = 4;
    if (4 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x38e38e3 < uVar1) {
      uVar2 = 0;
LAB_00f701e4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,unaff_r6);
    }
    unaff_r6 = uVar7 * 0x24;
    if (unaff_r6 == 0) {
      uVar7 = 0;
    }
    else {
      piVar9 = (int *)thunk_FUN_016d4a50(unaff_r6);
      if (piVar9 == (int *)0x0) {
        uVar2 = 4;
        goto LAB_00f701e4;
      }
    }
    *piVar9 = local_58;
    piVar9[1] = iStack_54;
    piVar9[2] = iStack_50;
    piVar9[3] = iStack_4c;
    piVar9[4] = local_48;
    piVar9[5] = iStack_44;
    piVar9[6] = iStack_40;
    piVar9[7] = iStack_3c;
    piVar9[8] = iStack_38;
    iVar8 = 0x24;
    local_60 = 1;
    local_68 = uVar7;
    local_64 = piVar9;
    while( true ) {
      uVar1 = local_60;
      (*pcVar6)(&local_58,param_2);
      if (local_58 == -0x80000000) break;
      if (uVar1 == local_68) {
        (*pcVar4)(local_30,param_2);
        iVar5 = local_30[0] + 1;
        if (local_30[0] == -1) {
          iVar5 = -1;
        }
        FUN_00f991dc(&local_68,uVar1,iVar5,4,0x24);
        piVar9 = local_64;
      }
      piVar3 = (int *)((int)piVar9 + iVar8);
      local_60 = uVar1 + 1;
      iVar8 = iVar8 + 0x24;
      *piVar3 = local_58;
      piVar3[1] = iStack_54;
      piVar3[2] = iStack_50;
      piVar3[3] = iStack_4c;
      piVar3[4] = local_48;
      piVar3[5] = iStack_44;
      piVar3[6] = iStack_40;
      piVar3[7] = iStack_3c;
      piVar3[8] = iStack_38;
    }
    if ((code *)*param_3 != (code *)0x0) {
      (*(code *)*param_3)(param_2);
    }
    if (param_3[1] != 0) {
      thunk_FUN_016d3fb4(param_2);
    }
    *param_1 = local_68;
    param_1[1] = (uint)local_64;
    param_1[2] = local_60;
  }
  return;
}

