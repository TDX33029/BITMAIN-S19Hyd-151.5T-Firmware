// FUN_0111b8a8 @ 0111b8a8 size=1524 calls_out=13 calls_in=1
// strings: error code must be an integer | error code | error code | error message | error message | error message must be a string

/* WARNING: Removing unreachable block (ram,0x0111be40) */
/* WARNING: Removing unreachable block (ram,0x0111be70) */
/* WARNING: Removing unreachable block (ram,0x0111be78) */

void FUN_0111b8a8(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  char **ppcVar4;
  undefined4 *extraout_r3;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 *local_94;
  byte *local_90;
  undefined4 *local_8c;
  char *local_7c;
  byte *local_78;
  char *local_74;
  char **local_70;
  undefined4 *local_6c;
  byte *local_68;
  int local_64;
  undefined2 local_5c;
  undefined1 local_5a;
  byte *local_58;
  byte *local_54;
  char **local_50;
  byte *local_4c;
  byte *pbStack_48;
  int iStack_44;
  byte local_40;
  undefined2 uStack_3f;
  byte bStack_3d;
  byte *local_3c;
  char **local_38;
  undefined4 *local_34;
  byte *local_30;
  int local_2c;
  undefined1 uStack_25;
  
  if (*param_2 != -0x7fffffec) {
    uVar3 = FUN_011173bc(param_2,&uStack_25,&DAT_01887518);
    *param_1 = 0x80000000;
    param_1[1] = uVar3;
    return;
  }
  pcVar10 = (char *)param_2[3];
  local_8c = (undefined4 *)param_2[2];
  pcVar8 = (char *)0xaaaa;
  if (pcVar10 < (char *)0xaaaa) {
    pcVar8 = pcVar10;
  }
  if (pcVar10 == (char *)0x0) {
    local_90 = &DAT_00000008;
    pcVar8 = (char *)0x0;
  }
  else {
    local_90 = (byte *)thunk_FUN_016d4a50((int)pcVar8 * 0x18);
    if (local_90 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,(int)pcVar8 * 0x18);
    }
  }
  local_74 = (char *)0x0;
  local_94 = (undefined4 *)0x0;
  local_7c = pcVar8;
  local_78 = local_90;
  for (iVar11 = (int)pcVar10 << 4; pcVar2 = local_74, pcVar8 = local_7c, iVar11 != 0;
      iVar11 = iVar11 + -0x10) {
    FUN_01115464(&local_40,local_8c);
    if (local_40 == 6) {
      FUN_01127284(local_90,pcVar2);
      if (local_7c != (char *)0x0) {
        thunk_FUN_016d3fb4(local_90);
        *param_1 = 0x80000000;
        param_1[1] = local_3c;
        return;
      }
      goto LAB_0111ba3c;
    }
    local_70 = local_38;
    local_5c = *(undefined2 *)((uint)&local_40 | 1);
    local_5a = *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1);
    *(undefined2 *)((uint)&local_58 | 1) = local_5c;
    *(undefined1 *)((undefined2 *)((uint)&local_58 | 1) + 1) = local_5a;
    local_6c = local_34;
    local_68 = local_30;
    local_64 = local_2c;
    local_58 = (byte *)CONCAT31(local_58._1_3_,local_40);
    local_50 = local_38;
    local_4c = (byte *)local_34;
    pbStack_48 = local_30;
    iStack_44 = local_2c;
    local_54 = local_3c;
    if (pcVar2 == local_7c) {
      FUN_0157eb1c(&local_7c);
      local_90 = local_78;
    }
    local_74 = pcVar2 + 1;
    local_8c = (undefined4 *)((int)local_8c + 0x10);
    pbVar13 = local_90 + (int)local_94;
    local_94 = local_94 + 6;
    *(byte **)pbVar13 = local_58;
    *(byte **)(pbVar13 + 4) = local_54;
    *(char ***)(pbVar13 + 8) = local_50;
    *(byte **)(pbVar13 + 0xc) = local_4c;
    *(byte **)(pbVar13 + 0x10) = pbStack_48;
    *(int *)(pbVar13 + 0x14) = iStack_44;
  }
  if (local_7c == (char *)0x80000000) {
    local_3c = local_90;
LAB_0111ba3c:
    *param_1 = 0x80000000;
    param_1[1] = local_3c;
    return;
  }
  local_50 = (char **)local_7c;
  pbVar13 = local_90 + (int)pcVar10 * 0x18;
  local_58 = local_90;
  local_54 = local_90;
  local_4c = pbVar13;
  if (pcVar10 == (char *)0x0) {
LAB_0111bb54:
    pbVar12 = local_54;
    local_6c = &DAT_0157d360;
    local_70 = &local_7c;
    local_78 = &DAT_0000000a;
    local_7c = "error code";
    uVar3 = FUN_00f56780(&DAT_0057a25d,&local_70);
LAB_0111bb90:
    *param_1 = 0x80000000;
    param_1[1] = uVar3;
  }
  else {
    pbVar12 = local_90 + 0x18;
    bVar1 = *local_90;
    local_54 = pbVar12;
    if (bVar1 == 6) goto LAB_0111bb54;
    uStack_3f = *(undefined2 *)(local_90 + 1);
    bStack_3d = local_90[3];
    local_38 = *(char ***)(local_90 + 8);
    local_34 = *(undefined4 **)(local_90 + 0xc);
    pbVar9 = *(byte **)(local_90 + 0x10);
    local_3c = *(byte **)(local_90 + 4);
    local_2c = *(int *)(local_90 + 0x14);
    local_40 = bVar1;
    local_30 = pbVar9;
    if (bVar1 == 2) {
      if (local_38 == (char **)0x0) {
        if (local_2c < 0) goto LAB_0111bb24;
      }
      else if (local_38 != (char **)&DAT_00000001) goto LAB_0111bb24;
      FUN_01111ad8(&local_40);
      if (pcVar10 != (char *)0x1) {
        bVar1 = local_90[0x18];
        pbVar12 = local_90 + 0x30;
        local_54 = pbVar12;
        if (bVar1 != 6) {
          bStack_3d = local_90[0x1b];
          local_30 = *(byte **)(local_90 + 0x28);
          local_3c = *(byte **)(local_90 + 0x1c);
          ppcVar4 = *(char ***)(local_90 + 0x20);
          puVar14 = *(undefined4 **)(local_90 + 0x24);
          local_2c = *(int *)(local_90 + 0x2c);
          uStack_3f = *(undefined2 *)(local_90 + 0x19);
          local_40 = bVar1;
          local_38 = ppcVar4;
          local_34 = puVar14;
          if (bVar1 == 3) {
            if ((int)puVar14 < 0) {
              uVar3 = 0;
LAB_0111bc98:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar3,puVar14);
            }
            if (puVar14 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
              iVar11 = 1;
            }
            else {
              iVar11 = thunk_FUN_016d4a50(puVar14);
              if (iVar11 == 0) {
                uVar3 = 1;
                goto LAB_0111bc98;
              }
              puVar7 = puVar14;
            }
            FUN_016dd1aa(iVar11,ppcVar4,puVar14);
            FUN_01111ad8(&local_40);
            local_8c = (undefined4 *)0x80000000;
            puVar5 = extraout_r3;
            pbVar6 = &local_40;
            if (pcVar10 != (char *)0x2) {
              pbVar12 = local_90 + 0x48;
              bVar1 = local_90[0x30];
              pbVar6 = (byte *)(uint)bVar1;
              local_54 = pbVar12;
              if (pbVar6 != &DAT_00000006) {
                FUN_016dd1aa((uint)&local_40 | 1,local_90 + 0x31,0x17);
                puVar5 = local_34;
                ppcVar4 = local_38;
                local_40 = bVar1;
                if (pbVar6 == (byte *)0x3) {
                  local_94 = local_34;
                  FUN_011200a0(&local_70,local_34,1,1);
                  pbVar6 = local_68;
                  local_8c = local_6c;
                  if (local_70 == (char **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(local_6c,local_68);
                  }
                  FUN_016dd1aa(local_68,ppcVar4,puVar5);
                }
                else {
                  local_8c = (undefined4 *)0x80000000;
                }
                FUN_01111ad8(&local_40);
                puVar5 = local_94;
              }
            }
            *param_1 = puVar7;
            param_1[1] = iVar11;
            param_1[2] = puVar14;
            param_1[3] = local_8c;
            param_1[4] = pbVar6;
            param_1[5] = puVar5;
            param_1[6] = pbVar9;
            FUN_01127284(pbVar12,((uint)((int)pbVar13 - (int)pbVar12) >> 3) * -0x55555555);
            goto joined_r0x0111bbbc;
          }
          uVar3 = FUN_01125b7c("error message must be a string",0x1e);
          *param_1 = 0x80000000;
          param_1[1] = uVar3;
          FUN_01111ad8(&local_40);
          goto LAB_0111bb9c;
        }
      }
      local_6c = &DAT_0157d360;
      local_70 = &local_7c;
      local_78 = &DAT_0000000d;
      local_7c = "error message";
      uVar3 = FUN_00f56780(&DAT_0057a25d,&local_70);
      goto LAB_0111bb90;
    }
LAB_0111bb24:
    uVar3 = FUN_01125b7c("error code must be an integer",0x1d);
    *param_1 = 0x80000000;
    param_1[1] = uVar3;
    FUN_01111ad8(&local_40);
  }
LAB_0111bb9c:
  FUN_01127284(pbVar12,((uint)((int)pbVar13 - (int)pbVar12) >> 3) * -0x55555555);
joined_r0x0111bbbc:
  if (pcVar8 != (char *)0x0) {
    thunk_FUN_016d3fb4(local_90);
  }
  return;
}

