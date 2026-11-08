// FUN_013a3cb0 @ 013a3cb0 size=2444 calls_out=11 calls_in=0
// strings: internal error: entered unreachable code: suffix match plus reverse match implies there must be a match | internal error: entered unreachable code: ReverseSuffix always has a DFA | internal error: entered unreachable code: ReverseSuffix always has a DFA

void FUN_013a3cb0(uint *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  code *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  byte **local_5c;
  code *local_58;
  byte *local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte **local_34;
  code *local_30;
  byte **local_2c;
  undefined1 *local_28;
  
  if (1 < *param_4 - 1U) {
    pcVar12 = *(code **)(param_2[0x305] + 0x10);
    pbVar14 = (byte *)param_4[2];
    pbVar15 = (byte *)param_4[3];
    iVar8 = param_2[0x304] + (*(int *)(param_2[0x305] + 8) - 1U & 0xfffffff8) + 8;
    pbVar11 = (byte *)param_4[4];
    pbVar13 = (byte *)param_4[5];
    (*pcVar12)(&local_5c,iVar8,pbVar14,pbVar15,pbVar11,pbVar13);
    if (local_5c == (byte **)0x1) {
      iVar5 = param_4[6];
      iVar6 = param_2[0x254];
      local_40 = pbVar11;
      if (iVar6 == 2) {
        if (*param_2 == 2 && param_2[1] == 0) {
          local_3c = local_54;
          bVar17 = local_54 + 1 <= pbVar11;
          bVar16 = pbVar11 == local_54 + 1;
          if (!bVar17 || bVar16) {
            bVar17 = pbVar15 <= local_54;
            bVar16 = local_54 == pbVar15;
          }
          if (!bVar17 || bVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",
                         0x91,&DAT_018933e8);
          }
          goto LAB_013a4108;
        }
        pbVar7 = (byte *)0x0;
        pbVar9 = pbVar11;
        do {
          pbVar4 = local_54;
          pcVar3 = local_58;
          local_3c = local_54;
          bVar17 = local_54 + 1 <= pbVar11;
          bVar16 = pbVar11 == local_54 + 1;
          if (!bVar17 || bVar16) {
            bVar17 = pbVar15 <= local_54;
            bVar16 = local_54 == pbVar15;
          }
          local_40 = pbVar11;
          if (bVar17 && !bVar16) goto LAB_013a4108;
          local_5c = (byte **)0x1;
          local_48 = local_54;
          if (*(int *)(param_3 + 0x248) == 2) {
            local_54 = pbVar14;
            local_50 = pbVar15;
            local_4c = pbVar11;
            local_44 = iVar5;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933f8);
          }
          local_54 = pbVar14;
          local_50 = pbVar15;
          local_4c = pbVar11;
          local_44 = iVar5;
          FUN_013b6db4(&local_34,param_2 + 0xa2,param_3 + 0x198,&local_5c,pbVar7);
          if (local_34 == (byte **)0x2) goto LAB_013a4098;
          if (((uint)local_34 & 1) != 0) goto LAB_013a40e8;
          if (pbVar13 <= pbVar9) break;
          pbVar9 = (byte *)(pcVar3 + 1);
          if ((byte *)0xfffffffe < pcVar3) goto LAB_013a4468;
          (*pcVar12)(&local_5c,iVar8,pbVar14,pbVar15,pbVar9,pbVar13);
          pbVar7 = pbVar4;
        } while (local_5c != (byte **)0x0);
      }
      else {
        pbVar7 = (byte *)0x0;
        pbVar9 = pbVar11;
        do {
          pbVar4 = local_54;
          pcVar3 = local_58;
          local_3c = local_54;
          bVar17 = local_54 + 1 <= pbVar11;
          bVar16 = pbVar11 == local_54 + 1;
          if (!bVar17 || bVar16) {
            bVar17 = pbVar15 <= local_54;
            bVar16 = local_54 == pbVar15;
          }
          local_40 = pbVar11;
          if (bVar17 && !bVar16) goto LAB_013a4108;
          local_5c = (byte **)0x1;
          local_48 = local_54;
          local_54 = pbVar14;
          local_50 = pbVar15;
          local_4c = pbVar11;
          local_44 = iVar5;
          FUN_013b65b8(&local_34,param_2 + 0x1f2,&local_5c,pbVar7);
          if (local_34 == (byte **)0x2) goto LAB_013a4098;
          if (((uint)local_34 & 1) != 0) goto LAB_013a40e8;
          if (pbVar13 <= pbVar9) break;
          pbVar9 = (byte *)(pcVar3 + 1);
          if ((byte *)0xfffffffe < pcVar3) {
LAB_013a4468:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933d8);
          }
          (*pcVar12)(&local_5c,iVar8,pbVar14,pbVar15,pbVar9,pbVar13);
          pbVar7 = pbVar4;
        } while (local_5c != (byte **)0x0);
      }
    }
    *param_1 = 0;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(&local_5c,param_2);
      goto joined_r0x013a431c;
    }
    if (*(int *)(param_3 + 0x248) == 2) goto LAB_013a4474;
    uVar10 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar10 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_0137a9fc(&local_5c,param_2,param_3 + 0xd8);
    if (local_5c == (byte **)0x2) {
      bVar2 = (byte)*local_58;
      local_30 = local_58;
    }
    else {
      if (((uint)local_5c & uVar10 & 1) == 0) goto LAB_013a4084;
      FUN_013b7ec0(&local_34,param_4,local_58,local_54,local_54,param_2,param_3 + 0xd8);
      if (local_34 != (byte **)0x2) {
        local_5c = local_34;
        local_58 = local_30;
        local_54 = (byte *)local_2c;
        goto LAB_013a4084;
      }
      bVar2 = (byte)*local_30;
    }
    if (1 < bVar2) {
      local_5c = &local_40;
      local_58 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
    thunk_FUN_016d3fb4(local_30);
  }
  else {
    iVar8 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_013ae3dc(&local_5c,param_2 + 0x144,param_4);
    if (local_5c == (byte **)0x2) {
      bVar2 = (byte)*local_58;
      local_30 = local_58;
    }
    else {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar8 == '\0' || cVar1 == '\0')) goto LAB_013a4060;
      FUN_013b7b18(&local_34,param_4,local_58,local_54,local_54,param_2 + 0x144);
      if (local_34 != (byte **)0x2) {
        local_5c = local_34;
        local_58 = local_30;
        local_54 = (byte *)local_2c;
        goto LAB_013a4060;
      }
      bVar2 = (byte)*local_30;
    }
    if (1 < bVar2) {
      local_5c = &local_40;
      local_58 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
    thunk_FUN_016d3fb4(local_30);
  }
  FUN_0139d778(&local_5c,param_2,param_3,param_4);
  goto joined_r0x013a431c;
LAB_013a40e8:
  bVar17 = pbVar13 + 1 <= local_2c;
  bVar16 = local_2c == (byte **)(pbVar13 + 1);
  if (!bVar17 || bVar16) {
    bVar17 = pbVar15 <= pbVar13;
    bVar16 = pbVar13 == pbVar15;
  }
  local_40 = (byte *)local_2c;
  local_3c = pbVar13;
  if (bVar17 && !bVar16) {
LAB_013a4108:
    local_30 = FUN_005ffff4;
    local_34 = &local_40;
    local_28 = &LAB_00fac484;
    local_2c = &local_38;
    local_38 = pbVar15;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
  }
  local_4c = (byte *)local_2c;
  local_58 = local_30;
  local_5c = (byte **)0x2;
  local_48 = pbVar13;
  if (iVar6 == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      local_54 = pbVar14;
      local_50 = pbVar15;
      local_44 = iVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",0x91,
                   &DAT_018933c8);
    }
    local_54 = pbVar14;
    local_50 = pbVar15;
    local_44 = iVar5;
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_013a4474:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    uVar10 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar10 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_0137a9fc(&local_34,param_2,param_3 + 0xd8,&local_5c);
    if (local_34 != (byte **)0x2) {
      if (((uint)local_34 & uVar10 & 1) != 0) {
        FUN_013b7ec0(&local_34,&local_5c,local_30,local_2c,local_2c,param_2,param_3 + 0xd8);
        goto LAB_013a45ec;
      }
      goto joined_r0x013a4414;
    }
  }
  else {
    iVar8 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    local_54 = pbVar14;
    local_50 = pbVar15;
    local_44 = iVar5;
    FUN_013ae3dc(&local_34,param_2 + 0x144,&local_5c);
    if (local_34 != (byte **)0x2) {
      if ((((uint)local_34 & 1) != 0) && ((char)iVar8 != '\0' && cVar1 != '\0')) {
        FUN_013b7b18(&local_34,&local_5c,local_30,local_2c,local_2c,param_2 + 0x144);
LAB_013a45ec:
        if (local_34 == (byte **)0x2) goto LAB_013a4360;
      }
joined_r0x013a4414:
      if (local_34 != (byte **)0x2) {
        if (((uint)local_34 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: suffix match plus reverse match implies there must be a match"
                       ,0xcf,&DAT_01893110);
        }
        *param_1 = 1;
        param_1[1] = (uint)local_30;
        param_1[2] = (uint)local_2c;
        return;
      }
      goto LAB_013a4418;
    }
  }
LAB_013a4360:
  FUN_0136e7e8(local_30);
LAB_013a4418:
  FUN_0139d778(&local_34,param_2,param_3,param_4);
  if (local_34 == (byte **)0x1) {
    *param_1 = 1;
    param_1[1] = (uint)local_28;
    param_1[2] = (uint)local_2c;
    return;
  }
  *param_1 = 0;
  return;
LAB_013a4098:
  if (local_30 != (code *)0x0) {
    FUN_0139d778(&local_5c,param_2,param_3,param_4);
    if (local_5c == (byte **)0x1) {
      *param_1 = 1;
      param_1[1] = (uint)local_50;
      param_1[2] = (uint)local_54;
      return;
    }
    *param_1 = 0;
    return;
  }
  if (iVar6 == 2) {
    if (*param_2 != 2 || param_2[1] != 0) {
      if (*(int *)(param_3 + 0x248) == 2) goto LAB_013a4474;
      uVar10 = 0;
      if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
        uVar10 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
      }
      FUN_0137a9fc(&local_5c,param_2,param_3 + 0xd8,param_4);
      if (local_5c != (byte **)0x2) {
        if (((uint)local_5c & uVar10 & 1) == 0) {
LAB_013a4084:
          *param_1 = (uint)local_5c;
          param_1[1] = (uint)local_58;
          param_1[2] = (uint)local_54;
          return;
        }
        FUN_013b7ec0(&local_34,param_4,local_58,local_54,local_54,param_2,param_3 + 0xd8);
        if (local_34 != (byte **)0x2) {
          local_5c = local_34;
          local_58 = local_30;
          local_54 = (byte *)local_2c;
          goto LAB_013a4084;
        }
        goto LAB_013a43e0;
      }
      goto LAB_013a42f8;
    }
  }
  else {
    iVar8 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_013ae3dc(&local_5c,param_2 + 0x144,param_4);
    if (local_5c != (byte **)0x2) {
      if ((((uint)local_5c & 1) == 0) || ((char)iVar8 == '\0' || cVar1 == '\0')) {
LAB_013a4060:
        *param_1 = (uint)local_5c;
        param_1[1] = (uint)local_58;
        param_1[2] = (uint)local_54;
        return;
      }
      FUN_013b7b18(&local_34,param_4,local_58,local_54,local_54,param_2 + 0x144);
      if (local_34 != (byte **)0x2) {
        local_5c = local_34;
        local_58 = local_30;
        local_54 = (byte *)local_2c;
        goto LAB_013a4060;
      }
LAB_013a43e0:
      local_58 = local_30;
    }
LAB_013a42f8:
    FUN_0136e7e8(local_58);
  }
  FUN_0139d778(&local_5c,param_2,param_3,param_4);
joined_r0x013a431c:
  if (local_5c == (byte **)0x1) {
    *param_1 = 1;
    param_1[1] = (uint)local_50;
    param_1[2] = (uint)local_54;
    return;
  }
  *param_1 = 0;
  return;
}

