// FUN_0129bd04 @ 0129bd04 size=448 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129bd04(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar3 = *(code **)(param_3 + 0xc);
  (*pcVar3)(&local_58);
  if (local_58 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    FUN_018f2d80(param_2,param_3);
  }
  else {
    pcVar4 = *(code **)(param_3 + 0x10);
    (*pcVar4)(local_30,param_2);
    piVar7 = (int *)&SUB_00000004;
    uVar6 = 0;
    uVar1 = local_30[0] + 1;
    if (local_30[0] == -1) {
      uVar1 = 0xffffffff;
    }
    uVar8 = 4;
    if (4 < uVar1) {
      uVar8 = uVar1;
    }
    iVar9 = uVar8 * 0x24;
    if (0x38e38e3 < uVar1) {
LAB_0129bdac:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar9);
    }
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar6 = 4;
      piVar7 = (int *)FUN_01298504(iVar9,4);
      if (piVar7 == (int *)0x0) goto LAB_0129bdac;
    }
    *piVar7 = local_58;
    piVar7[1] = iStack_54;
    piVar7[2] = iStack_50;
    piVar7[3] = iStack_4c;
    piVar7[4] = local_48;
    piVar7[5] = iStack_44;
    piVar7[6] = iStack_40;
    piVar7[7] = iStack_3c;
    piVar7[8] = iStack_38;
    iVar9 = 0x24;
    local_60 = 1;
    local_68 = uVar8;
    local_64 = piVar7;
    while (uVar1 = local_60, (*pcVar3)(&local_58,param_2), local_58 != -0x80000000) {
      if (uVar1 == local_68) {
        (*pcVar4)(local_30,param_2);
        iVar5 = local_30[0] + 1;
        if (local_30[0] == -1) {
          iVar5 = -1;
        }
        FUN_006520b4(&local_68,uVar1,iVar5,4,0x24);
        piVar7 = local_64;
      }
      piVar2 = (int *)((int)piVar7 + iVar9);
      local_60 = uVar1 + 1;
      iVar9 = iVar9 + 0x24;
      *piVar2 = local_58;
      piVar2[1] = iStack_54;
      piVar2[2] = iStack_50;
      piVar2[3] = iStack_4c;
      piVar2[4] = local_48;
      piVar2[5] = iStack_44;
      piVar2[6] = iStack_40;
      piVar2[7] = iStack_3c;
      piVar2[8] = iStack_38;
    }
    FUN_018f2d80(param_2,param_3);
    *param_1 = local_68;
    param_1[1] = (uint)local_64;
    param_1[2] = local_60;
  }
  return;
}

