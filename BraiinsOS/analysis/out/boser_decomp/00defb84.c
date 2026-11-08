// FUN_00defb84 @ 00defb84 size=428 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00defb84(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int local_68;
  int *local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar6 = *param_2;
  iVar8 = param_2[1];
  iVar10 = param_2[2];
  do {
    if (iVar6 == iVar8) goto LAB_00defbf8;
    uVar7 = *(undefined4 *)(iVar6 + 4);
    uVar4 = *(undefined4 *)(iVar6 + 8);
    iVar6 = iVar6 + 0x10;
    *param_2 = iVar6;
    iVar2 = FUN_006e59bc(iVar10,uVar7,uVar4);
  } while (iVar2 == 0);
  iVar2 = param_2[4];
  iVar5 = param_2[3];
  FUN_00be4a44(&local_58,iVar5,iVar2,uVar7,uVar4);
  if (local_58 == 3) {
LAB_00defbf8:
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    local_64 = (int *)thunk_FUN_01be5118(0x60);
    if (local_64 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x60);
    }
    *local_64 = local_58;
    local_64[1] = local_54;
    local_64[2] = local_50;
    local_64[3] = iStack_4c;
    local_64[4] = iStack_48;
    local_64[5] = iStack_44;
    local_68 = 4;
    local_60 = 1;
    iVar1 = local_60;
    piVar9 = local_64;
    while (iVar6 != iVar8) {
      uVar7 = *(undefined4 *)(iVar6 + 4);
      uVar4 = *(undefined4 *)(iVar6 + 8);
      iVar3 = FUN_006e59bc(iVar10,uVar7,uVar4);
      iVar6 = iVar6 + 0x10;
      if (iVar3 != 0) {
        FUN_00be4a44(&local_40,iVar5,iVar2,uVar7,uVar4);
        if (local_40 == 3) break;
        if (iVar1 == local_68) {
          FUN_0132b898(&local_68,iVar1,1,4,0x18);
          piVar9 = local_64;
        }
        local_60 = iVar1 + 1;
        piVar11 = piVar9 + iVar1 * 6;
        *piVar11 = local_40;
        piVar11[1] = local_3c;
        piVar11[2] = local_38;
        piVar11[3] = iStack_34;
        piVar11[4] = iStack_30;
        piVar11[5] = iStack_2c;
        iVar1 = local_60;
      }
    }
    *param_1 = local_68;
    param_1[1] = (int)local_64;
    param_1[2] = local_60;
  }
  return;
}

