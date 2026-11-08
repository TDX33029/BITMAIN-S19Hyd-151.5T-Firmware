// FUN_01a46d5c @ 01a46d5c size=544 calls_out=5 calls_in=2
// strings: literal string

void FUN_01a46d5c(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  char *local_70;
  int iStack_6c;
  int local_68 [4];
  undefined4 *local_58;
  undefined *puStack_54;
  undefined4 local_50;
  undefined4 *puStack_4c;
  undefined *puStack_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  
  pcVar6 = *(char **)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0xc);
  local_68[0] = 1;
  local_70 = pcVar6;
  iStack_6c = iVar7;
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
        bVar1 = pcVar6[local_68[0]];
        if (bVar1 != 9) {
          uVar5 = bVar1 - 0x20;
          bVar10 = 6 < uVar5;
          if (bVar10) {
            uVar5 = bVar1 - 0x28;
          }
          if ((bVar10 && 0x56 < uVar5) && ((uint)(int)(char)bVar1 < 0x80000000)) {
            iVar3 = local_68[0] + -1;
            local_68[0] = 2;
            iVar9 = iVar9 - iVar3;
            pcVar4 = pcVar8 + iVar3;
            *(char **)(param_2 + 8) = pcVar4;
            *(int *)(param_2 + 0xc) = iVar9;
            if ((iVar9 == 0) || (*pcVar4 != '\'')) goto LAB_01a46dfc;
            *(char **)(param_2 + 8) = pcVar4 + 1;
            *(int *)(param_2 + 0xc) = iVar9 + -1;
            FUN_012fbd94(&local_44,pcVar8);
            if (local_44 == 0) {
              *param_1 = 3;
              param_1[1] = local_40;
              param_1[2] = local_3c;
              return;
            }
            *(char **)(param_2 + 8) = pcVar6;
            *(int *)(param_2 + 0xc) = iVar7;
            local_2c = 0;
            local_30 = 0;
            local_38 = 0;
            local_34 = (char *)0x4;
            puVar2 = (undefined4 *)thunk_FUN_01be5118(8);
            if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,8);
            }
            *puVar2 = local_40;
            puVar2[1] = local_3c;
            FUN_012d40d0(0);
            local_50 = local_30;
            puStack_48 = &DAT_01d2bfec;
            local_68[0] = 1;
            local_68[3] = local_30;
            puStack_54 = &DAT_01d2bfec;
            local_58 = puVar2;
            puStack_4c = puVar2;
            goto LAB_01a46e14;
          }
        }
        local_68[0] = local_68[0] + 1;
      } while (iVar7 != local_68[0]);
      iVar7 = iVar9;
    }
    *(char **)(param_2 + 8) = pcVar8 + iVar7;
    *(int *)(param_2 + 0xc) = iVar9 - iVar7;
    local_68[0] = 2;
  }
LAB_01a46dfc:
  local_58 = (undefined4 *)0x0;
  local_68[3] = 0;
LAB_01a46e14:
  local_68[2] = 4;
  local_68[1] = 0;
  local_30 = 0xe;
  local_38 = 3;
  local_34 = "literal string";
  local_2c = param_2;
  local_28 = (undefined1 *)&local_70;
  FUN_01a5cbd0(param_1,local_68,&local_38);
  return;
}

