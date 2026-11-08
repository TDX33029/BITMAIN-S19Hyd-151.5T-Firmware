// FUN_0166ac58 @ 0166ac58 size=492 calls_out=4 calls_in=2
// strings: literal string

void FUN_0166ac58(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  char *local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  undefined *local_40;
  int iStack_3c;
  int local_38;
  char *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  
  pcVar6 = *(char **)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0xc);
  iVar2 = 1;
  local_58 = pcVar6;
  iStack_54 = iVar7;
  if ((iVar7 != 0) && (*pcVar6 == '\'')) {
    iVar9 = iVar7 + -1;
    pcVar8 = pcVar6 + 1;
    *(char **)(param_2 + 8) = pcVar8;
    *(int *)(param_2 + 0xc) = iVar9;
    if (iVar9 == 0) {
      iVar7 = 0;
    }
    else {
      do {
        bVar1 = pcVar6[iVar2];
        if (bVar1 != 9) {
          uVar4 = bVar1 - 0x20;
          bVar11 = 6 < uVar4;
          if (bVar11) {
            uVar4 = bVar1 - 0x28;
          }
          if ((bVar11 && 0x56 < uVar4) && (-1 < (char)bVar1)) {
            iVar5 = iVar2 + -1;
            iVar2 = 2;
            iVar9 = iVar9 - iVar5;
            pcVar10 = pcVar8 + iVar5;
            *(char **)(param_2 + 8) = pcVar10;
            *(int *)(param_2 + 0xc) = iVar9;
            if ((iVar9 == 0) || (*pcVar10 != '\'')) goto LAB_0166adbc;
            *(char **)(param_2 + 8) = pcVar10 + 1;
            *(int *)(param_2 + 0xc) = iVar9 + -1;
            FUN_00fab1e0(&local_38,pcVar8);
            if (local_38 == 0) {
              *param_1 = 3;
              param_1[1] = (int)local_34;
              param_1[2] = local_30;
              return;
            }
            *(char **)(param_2 + 8) = pcVar6;
            *(int *)(param_2 + 0xc) = iVar7;
            local_44 = (int *)0x0;
            local_48 = 0;
            local_50 = 0;
            local_4c = 4;
            piVar3 = (int *)thunk_FUN_016d4a50(8);
            if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,8);
            }
            *piVar3 = (int)local_34;
            local_40 = &DAT_018ad740;
            piVar3[1] = local_30;
            param_1[1] = local_50;
            param_1[2] = local_4c;
            param_1[3] = local_48;
            param_1[4] = (int)piVar3;
            param_1[5] = (int)&DAT_018ad740;
            *param_1 = 1;
            local_44 = piVar3;
            goto LAB_0166add0;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar7 != iVar2);
      iVar7 = iVar9;
    }
    iVar2 = 2;
    *(char **)(param_2 + 8) = pcVar8 + iVar7;
    *(int *)(param_2 + 0xc) = iVar9 - iVar7;
  }
LAB_0166adbc:
  *param_1 = iVar2;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
LAB_0166add0:
  local_34 = "literal string";
  local_30 = 0xe;
  local_38 = 3;
  local_2c = param_2;
  local_28 = (undefined1 *)&local_58;
  FUN_00953084(&local_50,param_1,&local_38);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = (int)local_44;
  param_1[4] = (int)local_40;
  param_1[5] = iStack_3c;
  return;
}

