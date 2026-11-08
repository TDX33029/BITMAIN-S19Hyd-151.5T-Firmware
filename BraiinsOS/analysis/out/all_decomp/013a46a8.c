// FUN_013a46a8 @ 013a46a8 size=1252 calls_out=10 calls_in=0
// strings: internal error: entered unreachable code: ReverseSuffix always has a DFA

uint FUN_013a46a8(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  code *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  byte **local_5c;
  code *local_58;
  uint local_54;
  uint local_50;
  byte *local_4c;
  uint local_48;
  int local_44;
  byte *local_40;
  uint local_3c;
  uint local_38;
  byte **local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (1 < *param_3 - 1U) {
    uVar5 = param_3[3];
    uVar13 = param_3[2];
    pbVar11 = (byte *)param_3[4];
    pbVar12 = (byte *)param_3[5];
    pcVar10 = *(code **)(param_1[0x305] + 0x10);
    iVar7 = param_1[0x304] + (*(int *)(param_1[0x305] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar10)(&local_5c,iVar7,uVar13,uVar5,pbVar11,pbVar12);
    if (local_5c == (byte **)0x1) {
      iVar8 = param_3[6];
      if (param_1[0x254] == 2) {
        if (*param_1 == 2 && param_1[1] == 0) {
          local_3c = local_54;
          bVar15 = (byte *)(local_54 + 1) <= pbVar11;
          bVar14 = pbVar11 == (byte *)(local_54 + 1);
          if (!bVar15 || bVar14) {
            bVar15 = uVar5 <= local_54;
            bVar14 = local_54 == uVar5;
          }
          if (!bVar15 || bVar14) {
            local_40 = pbVar11;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseSuffix always has a DFA",
                         0x91,&DAT_018933e8);
          }
LAB_013a4abc:
          local_30 = FUN_005ffff4;
          local_34 = &local_40;
          local_28 = &LAB_00fac484;
          local_2c = &local_38;
          local_54 = local_3c;
          local_40 = pbVar11;
          local_38 = uVar5;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
        }
        uVar6 = 0;
        pbVar9 = pbVar11;
        do {
          uVar4 = local_54;
          pcVar3 = local_58;
          local_3c = local_54;
          bVar15 = (byte *)(local_54 + 1) <= pbVar11;
          bVar14 = pbVar11 == (byte *)(local_54 + 1);
          if (!bVar15 || bVar14) {
            bVar15 = uVar5 <= local_54;
            bVar14 = local_54 == uVar5;
          }
          if (bVar15 && !bVar14) goto LAB_013a4abc;
          local_48 = local_54;
          local_5c = (byte **)0x1;
          if (*(int *)(param_2 + 0x248) == 2) {
            local_54 = uVar13;
            local_50 = uVar5;
            local_4c = pbVar11;
            local_44 = iVar8;
            local_40 = pbVar11;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933f8);
          }
          local_54 = uVar13;
          local_50 = uVar5;
          local_4c = pbVar11;
          local_44 = iVar8;
          local_40 = pbVar11;
          FUN_013b6db4(&local_34,param_1 + 0xa2,param_2 + 0x198,&local_5c,uVar6);
          if (local_34 == (byte **)0x2) {
LAB_013a4a70:
            uVar5 = FUN_0139e540(param_1,param_2,param_3);
            return uVar5;
          }
          if (((uint)local_34 & 1) != 0) {
            return 1;
          }
          if (pbVar12 <= pbVar9) {
            return 0;
          }
          pbVar9 = (byte *)(pcVar3 + 1);
          if ((byte *)0xfffffffe < pcVar3) {
LAB_013a4a94:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933d8);
          }
          (*pcVar10)(&local_5c,iVar7,uVar13,uVar5,pbVar9,pbVar12);
          uVar6 = uVar4;
        } while (local_5c != (byte **)0x0);
      }
      else {
        uVar6 = 0;
        pbVar9 = pbVar11;
        do {
          uVar4 = local_54;
          pcVar3 = local_58;
          local_3c = local_54;
          bVar15 = (byte *)(local_54 + 1) <= pbVar11;
          bVar14 = pbVar11 == (byte *)(local_54 + 1);
          if (!bVar15 || bVar14) {
            bVar15 = uVar5 <= local_54;
            bVar14 = local_54 == uVar5;
          }
          if (bVar15 && !bVar14) goto LAB_013a4abc;
          local_5c = (byte **)0x1;
          local_48 = local_54;
          local_54 = uVar13;
          local_50 = uVar5;
          local_4c = pbVar11;
          local_44 = iVar8;
          local_40 = pbVar11;
          FUN_013b65b8(&local_34,param_1 + 0x1f2,&local_5c,uVar6);
          if (local_34 == (byte **)0x2) goto LAB_013a4a70;
          if (((uint)local_34 & 1) != 0) {
            return 1;
          }
          if (pbVar12 <= pbVar9) {
            return 0;
          }
          pbVar9 = (byte *)(pcVar3 + 1);
          if ((byte *)0xfffffffe < pcVar3) goto LAB_013a4a94;
          (*pcVar10)(&local_5c,iVar7,uVar13,uVar5,pbVar9,pbVar12);
          uVar6 = uVar4;
        } while (local_5c != (byte **)0x0);
      }
    }
    return 0;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) {
      uVar5 = FUN_0139e540(param_1,param_2);
      return uVar5;
    }
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    uVar5 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar5 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_0137a9fc(&local_5c,param_1,param_2 + 0xd8,param_3);
    if (local_5c == (byte **)0x2) {
      bVar2 = (byte)*local_58;
      local_40 = (byte *)local_58;
    }
    else {
      if ((((uint)local_5c & uVar5 & 1) == 0) ||
         (FUN_013b7ec0(&local_34,param_3,local_58,local_54,local_54,param_1,param_2 + 0xd8),
         local_5c = local_34, local_34 != (byte **)0x2)) {
LAB_013a4a5c:
        return (uint)(local_5c == (byte **)0x1);
      }
      bVar2 = (byte)*local_30;
      local_40 = (byte *)local_30;
    }
    if (1 < bVar2) {
      local_5c = &local_40;
      local_58 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
  }
  else {
    iVar7 = param_1[0x1f1];
    cVar1 = *(char *)((int)param_1 + 0x7c5);
    FUN_013ae3dc(&local_5c,param_1 + 0x144);
    if (local_5c == (byte **)0x2) {
      bVar2 = (byte)*local_58;
      local_40 = (byte *)local_58;
    }
    else {
      if (((((uint)local_5c & 1) == 0) || ((char)iVar7 == '\0' || cVar1 == '\0')) ||
         (FUN_013b7b18(&local_34,param_3,local_58,local_54,local_54,param_1 + 0x144),
         local_5c = local_34, local_34 != (byte **)0x2)) goto LAB_013a4a5c;
      bVar2 = (byte)*local_30;
      local_40 = (byte *)local_30;
    }
    if (1 < bVar2) {
      local_5c = &local_40;
      local_58 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
  }
  thunk_FUN_016d3fb4(local_40);
  uVar5 = FUN_0139e540(param_1,param_2,param_3);
  return uVar5;
}

