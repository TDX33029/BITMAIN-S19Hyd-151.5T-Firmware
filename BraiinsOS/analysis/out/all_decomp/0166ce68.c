// FUN_0166ce68 @ 0166ce68 size=2252 calls_out=5 calls_in=2
// strings: escape sequence | unicode 4-digit hex code | unicode 8-digit hex code

void FUN_0166ce68(int *param_1,undefined *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  char *local_b0;
  int local_ac;
  char *local_a8;
  int local_a4;
  char *local_a0;
  int local_9c;
  char *local_98;
  int local_94;
  char *local_90;
  int local_8c;
  char *local_88;
  int local_84;
  char *local_80;
  int local_7c;
  char *local_78;
  int local_74;
  char *local_70;
  int local_6c;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined *local_5c;
  char **local_58;
  undefined1 local_54;
  int local_50;
  byte *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined *local_28;
  
  iVar7 = *(int *)(param_2 + 0xc);
  if ((iVar7 == 0) || (pcVar9 = *(char **)(param_2 + 8), *pcVar9 != '\\')) {
LAB_0166d024:
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  *(char **)(param_2 + 8) = pcVar9 + 1;
  *(int *)(param_2 + 0xc) = iVar7 + -1;
  if (iVar7 + -1 == 0) goto LAB_0166d024;
  cVar1 = pcVar9[1];
  iVar7 = iVar7 + -2;
  pcVar9 = pcVar9 + 2;
  *(char **)(param_2 + 8) = pcVar9;
  *(int *)(param_2 + 0xc) = iVar7;
  local_70 = pcVar9;
  local_6c = iVar7;
  switch(cVar1) {
  case '\"':
    iVar7 = 0x22;
    break;
  default:
    local_60 = 0xf;
    local_64 = "escape sequence";
    *param_1 = 2;
    param_1[1] = 0;
    local_58 = &local_38;
    local_68 = 3;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    local_b0 = pcVar9;
    local_ac = iVar7;
    local_a8 = pcVar9;
    local_a4 = iVar7;
    local_a0 = pcVar9;
    local_9c = iVar7;
    local_98 = pcVar9;
    local_94 = iVar7;
    local_90 = pcVar9;
    local_8c = iVar7;
    local_88 = pcVar9;
    local_84 = iVar7;
    local_80 = pcVar9;
    local_7c = iVar7;
    local_78 = pcVar9;
    local_74 = iVar7;
    local_5c = param_2;
    local_38 = pcVar9;
    local_34 = iVar7;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_70;
    local_64 = (char *)0x62;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_78;
    local_64 = (char *)0x66;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_80;
    local_64 = (char *)0x6e;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_88;
    local_64 = (char *)0x72;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_90;
    local_64 = (char *)0x74;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_98;
    local_64 = (char *)0x75;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_a0;
    local_64 = (char *)0x55;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_a8;
    local_64 = (char *)0x5c;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    if (*param_1 == 3) {
      return;
    }
    local_58 = &local_b0;
    local_64 = (char *)0x22;
    local_68 = 0;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    return;
  case 'U':
    local_5c = &DAT_00393000;
    local_60 = 0;
    local_64 = (char *)0x8;
    local_68 = 1;
    piVar6 = &local_50;
    local_58 = (char **)0x61004641;
    local_54 = 0x66;
    FUN_01668f54(piVar6,param_2,8,&local_5c);
    if (local_50 == 3) {
      iVar4 = 0x166d0cc;
      if (local_48 == 8) {
        uVar16 = 0;
        pbVar8 = local_4c + 1;
        if (*local_4c != 0x2b) {
          pbVar8 = local_4c;
        }
        iVar5 = 8;
        if (*local_4c == 0x2b) {
          iVar5 = 7;
        }
        do {
          uVar14 = (uint)*pbVar8;
          uVar10 = uVar14 - 0x30;
          if (0x39 < uVar14) {
            uVar10 = (uVar14 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar10) {
            *(char **)(param_2 + 8) = pcVar9;
            local_50 = 1;
            *(int *)(param_2 + 0xc) = iVar7;
            local_48 = 4;
            local_40 = 0;
            local_44 = 0;
            local_4c = (byte *)0x0;
            goto LAB_0166d758;
          }
          uVar16 = uVar10 | uVar16 << 4;
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (0xffef07ff < (uVar16 ^ 0xd800) - 0x110000) {
LAB_0166d848:
          local_50 = -0x7fffffff;
          FUN_009464d4(&local_50);
          *param_1 = 3;
          param_1[1] = uVar16;
          return;
        }
        *(char **)(param_2 + 8) = pcVar9;
        *(int *)(param_2 + 0xc) = iVar7;
        local_2c = (undefined4 *)0x0;
        local_30 = 0;
        local_38 = (char *)0x0;
        local_50 = -0x7fffffff;
        local_34 = 4;
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        iVar7 = 2;
        *puVar3 = 0x80000001;
        local_2c = puVar3;
        local_28 = &DAT_018ad714;
        param_1[1] = (int)local_38;
        param_1[2] = local_34;
        param_1[3] = local_30;
        param_1[4] = (int)puVar3;
        param_1[5] = (int)&DAT_018ad714;
        local_50 = param_1[1];
        local_4c = (byte *)param_1[2];
        local_48 = param_1[3];
        local_44 = param_1[4];
        local_40 = param_1[5];
        local_64 = "unicode 8-digit hex code";
        goto LAB_0166d7f0;
      }
      local_50 = 1;
      local_48 = 4;
      local_44 = 0;
      local_4c = (byte *)0x0;
      *(char **)(param_2 + 8) = pcVar9;
      *(int *)(param_2 + 0xc) = iVar7;
      local_40 = 0;
    }
    else {
      iVar4 = local_3c;
    }
LAB_0166d758:
    piVar13 = param_1 + 1;
    *piVar13 = (int)local_4c;
    iVar7 = local_50;
    if (local_50 == 1) {
      iVar7 = 2;
    }
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = iVar4;
    piVar2 = piVar13;
    if (local_50 == 1) {
      piVar2 = piVar6;
    }
    piVar6 = piVar2;
    local_50 = *piVar13;
    local_4c = (byte *)param_1[2];
    local_48 = param_1[3];
    local_44 = param_1[4];
    local_40 = param_1[5];
    local_64 = "unicode 8-digit hex code";
    goto LAB_0166d7f0;
  case '\\':
    iVar7 = 0x5c;
    break;
  case 'b':
    iVar7 = 8;
    break;
  case 'f':
    iVar7 = 0xc;
    break;
  case 'n':
    iVar7 = 10;
    break;
  case 'r':
    iVar7 = 0xd;
    break;
  case 't':
    iVar7 = 9;
    break;
  case 'u':
    local_5c = &DAT_00393000;
    local_60 = 0;
    local_64 = (char *)0x4;
    local_68 = 1;
    local_58 = (char **)0x61004641;
    local_54 = 0x66;
    FUN_01668f54(&local_50,param_2,4,&local_5c);
    if (local_50 == 3) {
      iVar4 = 0x166d278;
      if (local_48 != 4) {
        local_50 = 1;
        local_48 = 4;
        local_44 = 0;
        local_4c = (byte *)0x0;
        *(char **)(param_2 + 8) = pcVar9;
        *(int *)(param_2 + 0xc) = iVar7;
        local_40 = 0;
        goto LAB_0166d7b4;
      }
      uVar16 = 0;
      pbVar8 = local_4c + 1;
      if (*local_4c != 0x2b) {
        pbVar8 = local_4c;
      }
      iVar5 = 4;
      if (*local_4c == 0x2b) {
        iVar5 = 3;
      }
      do {
        uVar14 = (uint)*pbVar8;
        uVar10 = uVar14 - 0x30;
        if (0x39 < uVar14) {
          uVar10 = (uVar14 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar10) {
          *(char **)(param_2 + 8) = pcVar9;
          local_50 = 1;
          *(int *)(param_2 + 0xc) = iVar7;
          local_48 = 4;
          local_40 = 0;
          local_44 = 0;
          local_4c = (byte *)0x0;
          goto LAB_0166d7b4;
        }
        uVar16 = uVar10 | uVar16 << 4;
        pbVar8 = pbVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (0xffef07ff < (uVar16 ^ 0xd800) - 0x110000) goto LAB_0166d848;
      *(char **)(param_2 + 8) = pcVar9;
      *(int *)(param_2 + 0xc) = iVar7;
      local_2c = (undefined4 *)0x0;
      local_30 = 0;
      local_38 = (char *)0x0;
      local_50 = -0x7fffffff;
      local_34 = 4;
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      iVar7 = 2;
      *puVar3 = 0x80000001;
      local_2c = puVar3;
      local_28 = &DAT_018ad714;
      param_1[1] = (int)local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      param_1[4] = (int)puVar3;
      param_1[5] = (int)&DAT_018ad714;
      local_50 = param_1[1];
      local_4c = (byte *)param_1[2];
      local_48 = param_1[3];
      local_44 = param_1[4];
      local_40 = param_1[5];
      piVar6 = &local_50;
    }
    else {
      iVar4 = local_3c;
LAB_0166d7b4:
      bVar17 = local_50 == 1;
      piVar6 = param_1 + 1;
      *piVar6 = (int)local_4c;
      param_1[2] = local_48;
      param_1[3] = local_44;
      iVar7 = local_50;
      if (bVar17) {
        iVar7 = 2;
      }
      param_1[4] = local_40;
      param_1[5] = iVar4;
      local_50 = *piVar6;
      local_4c = (byte *)param_1[2];
      local_48 = param_1[3];
      local_44 = param_1[4];
      local_40 = param_1[5];
      if (bVar17) {
        piVar6 = &local_50;
      }
    }
    local_64 = "unicode 4-digit hex code";
LAB_0166d7f0:
    iVar4 = *piVar6;
    iVar5 = piVar6[1];
    iVar11 = piVar6[2];
    iVar12 = piVar6[3];
    iVar15 = piVar6[4];
    *param_1 = iVar7;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
    param_1[3] = iVar11;
    param_1[4] = iVar12;
    param_1[5] = iVar15;
    local_58 = &local_70;
    local_60 = 0x18;
    local_68 = 3;
    local_5c = param_2;
    FUN_00953084(&local_50,param_1,&local_68);
    *param_1 = local_50;
    param_1[1] = (int)local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
    param_1[4] = local_40;
    param_1[5] = local_3c;
    return;
  }
  *param_1 = 3;
  param_1[1] = iVar7;
  return;
}

