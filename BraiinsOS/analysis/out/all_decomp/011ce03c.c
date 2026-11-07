// FUN_011ce03c @ 011ce03c size=768 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011ce03c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
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
  
  uVar12 = FUN_011c3db0(param_2,param_3,param_4,param_5);
  puVar6 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
  uVar1 = (undefined4)uVar12;
  pcVar7 = (code *)puVar6[3];
  iVar2 = (*pcVar7)();
  if (iVar2 != 0) {
    local_4c[0] = iVar2;
    FUN_011578ec(&local_40,local_4c);
    FUN_01157d7c(iVar2);
    thunk_FUN_016d3fb4(iVar2);
    local_60 = local_3c;
    iStack_5c = iStack_38;
    iStack_58 = iStack_34;
    iStack_54 = iStack_30;
    iStack_50 = iStack_2c;
    if (local_40 != -0x80000000) {
      piVar8 = (int *)((uint)&local_40 | 4);
      *piVar8 = local_3c;
      piVar8[1] = iStack_38;
      piVar8[2] = iStack_34;
      piVar8[3] = iStack_30;
      piVar8[4] = iStack_2c;
      pcVar9 = (code *)puVar6[4];
      (*pcVar9)(local_4c,uVar1);
      local_70 = (int *)&DAT_00000004;
      uVar10 = local_4c[0] + 1;
      if (local_4c[0] == -1) {
        uVar10 = 0xffffffff;
      }
      uVar11 = 4;
      if (4 < uVar10) {
        uVar11 = uVar10;
      }
      iVar2 = uVar11 * 0x18;
      uVar3 = 0;
      if (0x5555555 < uVar10) {
LAB_011ce184:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,iVar2);
      }
      if (iVar2 == 0) {
        uVar11 = 0;
      }
      else {
        local_70 = (int *)thunk_FUN_016d4a50(iVar2);
        if (local_70 == (int *)0x0) {
          uVar3 = 4;
          goto LAB_011ce184;
        }
      }
      *local_70 = local_40;
      local_70[1] = local_3c;
      local_70[2] = iStack_38;
      local_70[3] = iStack_34;
      local_70[4] = iStack_30;
      local_70[5] = iStack_2c;
      iVar2 = 0x18;
      local_64 = 1;
      local_6c = uVar11;
      local_68 = local_70;
      while( true ) {
        uVar10 = local_64;
        iVar5 = (*pcVar7)(uVar1);
        if (iVar5 == 0) break;
        local_4c[0] = iVar5;
        FUN_011578ec(&local_40,local_4c);
        FUN_01157d7c(iVar5);
        thunk_FUN_016d3fb4(iVar5);
        local_60 = local_3c;
        iStack_5c = iStack_38;
        iStack_58 = iStack_34;
        iStack_54 = iStack_30;
        iStack_50 = iStack_2c;
        if (local_40 == -0x80000000) break;
        *piVar8 = local_3c;
        piVar8[1] = iStack_38;
        piVar8[2] = iStack_34;
        piVar8[3] = iStack_30;
        piVar8[4] = iStack_2c;
        if (uVar10 == local_6c) {
          (*pcVar9)(local_4c,uVar1);
          iVar5 = local_4c[0] + 1;
          if (local_4c[0] == -1) {
            iVar5 = -1;
          }
          FUN_011cf828(&local_6c,uVar10,iVar5,4,0x18);
          local_70 = local_68;
        }
        piVar4 = (int *)((int)local_70 + iVar2);
        local_64 = uVar10 + 1;
        iVar2 = iVar2 + 0x18;
        *piVar4 = local_40;
        piVar4[1] = local_3c;
        piVar4[2] = iStack_38;
        piVar4[3] = iStack_34;
        piVar4[4] = iStack_30;
        piVar4[5] = iStack_2c;
      }
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar1);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar1);
      }
      *param_1 = local_6c;
      param_1[3] = 0;
      param_1[1] = (uint)local_70;
      param_1[2] = uVar10;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      return;
    }
  }
  if ((code *)*puVar6 != (code *)0x0) {
    (*(code *)*puVar6)(uVar1);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  *param_1 = 0x80000000;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

