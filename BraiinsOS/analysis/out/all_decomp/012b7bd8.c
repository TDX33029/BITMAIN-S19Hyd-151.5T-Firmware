// FUN_012b7bd8 @ 012b7bd8 size=572 calls_out=5 calls_in=7
// strings: 

void FUN_012b7bd8(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = param_3 * 0x28;
  if (0x3333333 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_44 = 4;
    local_48 = 0;
  }
  else {
    local_44 = thunk_FUN_016d4a50(iVar1);
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_48 = param_3;
    if (param_3 != 0) {
      iVar9 = 0;
      uVar10 = 0;
      iVar2 = param_2;
      do {
        if (iVar1 == iVar9) break;
        iVar7 = 0;
        uVar5 = 0;
        local_50 = 1;
        local_4c = 1;
        if (*(char *)(iVar2 + 0xc) == '\x01') {
          uVar5 = 1;
          iVar7 = *(int *)(param_2 + iVar9 + 8);
          uVar11 = *(undefined4 *)(param_2 + iVar9 + 4);
          local_4c = 1;
          if ((iVar7 != 0) && (local_4c = thunk_FUN_016d4a50(iVar7), local_4c == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar7);
          }
          FUN_016dd1aa(local_4c,uVar11,iVar7);
        }
        local_54 = 0;
        iVar8 = 0;
        if (*(char *)(iVar2 + 0x1c) == '\x01') {
          iVar8 = *(int *)(param_2 + iVar9 + 0x18);
          uVar11 = *(undefined4 *)(param_2 + iVar9 + 0x14);
          local_50 = 1;
          local_54 = 1;
          if ((iVar8 != 0) && (local_50 = thunk_FUN_016d4a50(iVar8), local_50 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar8);
          }
          FUN_016dd1aa(local_50,uVar11,iVar8);
        }
        iVar6 = *(int *)(iVar2 + 0x20);
        if (iVar6 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
          if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          FUN_012c14a0(&local_38,iVar6);
          *puVar3 = local_38;
          puVar3[1] = uStack_34;
          puVar3[2] = uStack_30;
          puVar3[3] = uStack_2c;
        }
        iVar6 = *(int *)(iVar2 + 0x24);
        iVar2 = iVar2 + 0x28;
        uVar10 = uVar10 + 1;
        piVar4 = (int *)(local_44 + iVar9);
        *piVar4 = iVar7;
        iVar9 = iVar9 + 0x28;
        *(undefined1 *)(piVar4 + 7) = local_54;
        piVar4[5] = local_50;
        piVar4[8] = (int)puVar3;
        piVar4[9] = iVar6;
        *(undefined1 *)(piVar4 + 3) = uVar5;
        piVar4[1] = local_4c;
        piVar4[4] = iVar8;
        piVar4[6] = iVar8;
        piVar4[2] = iVar7;
      } while (param_3 != uVar10);
    }
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = param_3;
  return;
}

