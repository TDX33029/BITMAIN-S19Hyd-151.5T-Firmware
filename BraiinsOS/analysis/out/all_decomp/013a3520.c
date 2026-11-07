// FUN_013a3520 @ 013a3520 size=1816 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: ReverseSuffix always has a DFA | internal error: entered unreachable code: ReverseSuffix always has a DFA | internal error: entered unreachable code: suffix match plus reverse match implies there must be a match

void FUN_013a3520(int *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  byte *pbVar2;
  byte **ppbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  code *pcVar12;
  byte *pbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  int local_5c;
  byte *local_58;
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
    pbVar13 = (byte *)param_4[2];
    pbVar16 = (byte *)param_4[3];
    iVar7 = param_2[0x304] + (*(int *)(param_2[0x305] + 8) - 1U & 0xfffffff8) + 8;
    pbVar11 = (byte *)param_4[4];
    pbVar9 = (byte *)param_4[5];
    (*pcVar12)(&local_5c,iVar7,pbVar13,pbVar16,pbVar11,pbVar9);
    if (local_5c == 1) {
      iVar4 = param_4[6];
      iVar5 = param_2[0x254];
      local_40 = pbVar11;
      if (iVar5 == 2) {
        if (*param_2 == 2 && param_2[1] == 0) {
          local_3c = local_54;
          bVar18 = local_54 + 1 <= pbVar11;
          bVar17 = pbVar11 == local_54 + 1;
          if (!bVar18 || bVar17) {
            bVar18 = pbVar16 <= local_54;
            bVar17 = local_54 == pbVar16;
          }
          if (!bVar18 || bVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",
                         0x91,&DAT_018933e8);
          }
          goto LAB_013a38c0;
        }
        pbVar6 = (byte *)0x0;
        pbVar8 = pbVar11;
        do {
          ppbVar15 = (byte **)local_54;
          pbVar2 = local_58;
          local_3c = local_54;
          bVar18 = local_54 + 1 <= pbVar11;
          bVar17 = pbVar11 == local_54 + 1;
          if (!bVar18 || bVar17) {
            bVar18 = pbVar16 <= local_54;
            bVar17 = local_54 == pbVar16;
          }
          local_40 = pbVar11;
          if (bVar18 && !bVar17) goto LAB_013a38c0;
          local_5c = 1;
          local_48 = local_54;
          if (*(int *)(param_3 + 0x248) == 2) {
            local_54 = pbVar13;
            local_50 = pbVar16;
            local_4c = pbVar11;
            local_44 = iVar4;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933f8);
          }
          local_54 = pbVar13;
          local_50 = pbVar16;
          local_4c = pbVar11;
          local_44 = iVar4;
          FUN_013b6db4(&local_34,param_2 + 0xa2,param_3 + 0x198,&local_5c,pbVar6);
          if (local_34 == (byte **)0x2) goto LAB_013a3874;
          if (((uint)local_34 & 1) != 0) goto LAB_013a389c;
          if (pbVar9 <= pbVar8) break;
          pbVar8 = pbVar2 + 1;
          if ((byte *)0xfffffffe < pbVar2) goto LAB_013a3b10;
          (*pcVar12)(&local_5c,iVar7,pbVar13,pbVar16,pbVar8,pbVar9);
          pbVar6 = (byte *)ppbVar15;
        } while (local_5c != 0);
      }
      else {
        pbVar6 = (byte *)0x0;
        pbVar8 = pbVar11;
        do {
          ppbVar15 = (byte **)local_54;
          pbVar2 = local_58;
          local_3c = local_54;
          bVar18 = local_54 + 1 <= pbVar11;
          bVar17 = pbVar11 == local_54 + 1;
          if (!bVar18 || bVar17) {
            bVar18 = pbVar16 <= local_54;
            bVar17 = local_54 == pbVar16;
          }
          local_40 = pbVar11;
          if (bVar18 && !bVar17) goto LAB_013a38c0;
          local_5c = 1;
          local_48 = local_54;
          local_54 = pbVar13;
          local_50 = pbVar16;
          local_4c = pbVar11;
          local_44 = iVar4;
          FUN_013b65b8(&local_34,param_2 + 0x1f2,&local_5c,pbVar6);
          if (local_34 == (byte **)0x2) goto LAB_013a3874;
          if (((uint)local_34 & 1) != 0) goto LAB_013a389c;
          if (pbVar9 <= pbVar8) break;
          pbVar8 = pbVar2 + 1;
          if ((byte *)0xfffffffe < pbVar2) {
LAB_013a3b10:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933d8);
          }
          (*pcVar12)(&local_5c,iVar7,pbVar13,pbVar16,pbVar8,pbVar9);
          pbVar6 = (byte *)ppbVar15;
        } while (local_5c != 0);
      }
    }
    *param_1 = 0;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(param_1,param_2);
      return;
    }
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_013a3b1c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893548);
    }
    FUN_0139daac(&local_5c,param_2,param_3 + 0xd8);
    if (local_5c != 2) goto LAB_013a3a14;
    local_40 = local_58;
    if (1 < *local_58) {
      local_34 = &local_40;
      local_30 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
    }
  }
  else {
    FUN_0139d490(&local_5c,param_2 + 0x144,param_4);
    if (local_5c != 2) goto LAB_013a3a14;
    local_40 = local_58;
    if (1 < *local_58) {
      local_34 = &local_40;
      local_30 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_34,&DAT_01892790);
    }
  }
  thunk_FUN_016d3fb4();
  goto LAB_013a3794;
LAB_013a389c:
  ppbVar3 = local_2c;
  pcVar12 = local_30;
  bVar18 = pbVar16 <= pbVar9;
  bVar17 = pbVar9 == pbVar16;
  if (!bVar18 || bVar17) {
    bVar18 = pbVar9 + 1 <= local_2c;
    bVar17 = local_2c == (byte **)(pbVar9 + 1);
  }
  local_40 = (byte *)local_2c;
  local_3c = pbVar9;
  if (bVar18 && !bVar17) {
LAB_013a38c0:
    local_30 = FUN_005ffff4;
    local_34 = &local_40;
    local_28 = &LAB_00fac484;
    local_2c = &local_38;
    local_38 = pbVar16;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
  }
  local_58 = (byte *)local_30;
  local_5c = 2;
  local_4c = (byte *)local_2c;
  local_48 = pbVar9;
  if (iVar5 == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      local_54 = pbVar13;
      local_50 = pbVar16;
      local_44 = iVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",0x91,
                   &DAT_018933c8);
    }
    if (*(int *)(param_3 + 0x248) == 2) {
      local_54 = pbVar13;
      local_50 = pbVar16;
      local_44 = iVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    uVar10 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar10 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    local_54 = pbVar13;
    local_50 = pbVar16;
    local_44 = iVar4;
    FUN_0137a9fc(&local_34,param_2,param_3 + 0xd8,&local_5c);
    ppbVar14 = local_2c;
    if (local_34 == (byte **)0x2) {
      ppbVar14 = ppbVar15;
    }
    else if ((((uint)local_34 & uVar10 & 1) == 0) ||
            (FUN_013b7ec0(&local_34,&local_5c,local_30,local_2c,local_2c,param_2,param_3 + 0xd8),
            local_34 != (byte **)0x2)) goto LAB_013a3ab0;
    FUN_0136e7e8(local_30);
    local_34 = (byte **)0x2;
    local_2c = ppbVar14;
  }
  else {
    iVar7 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    local_54 = pbVar13;
    local_50 = pbVar16;
    local_44 = iVar4;
    FUN_013ae3dc(&local_34,param_2 + 0x144,&local_5c);
    ppbVar14 = local_2c;
    if (local_34 != (byte **)0x2) {
      if (((((uint)local_34 & 1) == 0) || ((char)iVar7 == '\0' || cVar1 == '\0')) ||
         (FUN_013b7b18(&local_34,&local_5c,local_30,local_2c,local_2c,param_2 + 0x144),
         local_34 != (byte **)0x2)) goto LAB_013a3ab0;
      ppbVar15 = ppbVar14;
    }
    FUN_0136e7e8(local_30);
    local_34 = (byte **)0x2;
    local_2c = ppbVar15;
  }
LAB_013a3ab0:
  if (local_34 == (byte **)0x2) {
    FUN_0139d778(param_1,param_2,param_3,param_4);
    return;
  }
  if (((uint)local_34 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: suffix match plus reverse match implies there must be a match"
                 ,0xcf,&DAT_01893120);
  }
  if (local_2c < ppbVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
  }
  *param_1 = 1;
  param_1[1] = (int)ppbVar3;
  param_1[2] = (int)local_2c;
  param_1[3] = (int)pcVar12;
  return;
LAB_013a3874:
  if (local_30 != (code *)0x0) {
    FUN_0139d778(param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar5 == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_013a3794;
    if (*(int *)(param_3 + 0x248) == 2) goto LAB_013a3b1c;
    FUN_0139daac(&local_5c,param_2,param_3 + 0xd8,param_4);
  }
  else {
    FUN_0139d490(&local_5c,param_2 + 0x144,param_4);
  }
  if (local_5c != 2) {
LAB_013a3a14:
    param_1[2] = (int)local_54;
    *param_1 = local_5c;
    param_1[1] = (int)local_58;
    param_1[3] = (int)local_50;
    return;
  }
  FUN_0136e7e8(local_58);
LAB_013a3794:
  FUN_0139d778(param_1,param_2,param_3,param_4);
  return;
}

