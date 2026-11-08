// FUN_013a0b20 @ 013a0b20 size=1520 calls_out=12 calls_in=0
// strings: internal error: entered unreachable code: ReverseInner always has a DFA | internal error: entered unreachable code: ReverseInner always has a DFA

/* WARNING: Type propagation algorithm not settling */

uint FUN_013a0b20(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  byte ****ppppbVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  byte ****ppppbVar20;
  byte ***pppbVar21;
  bool bVar22;
  bool bVar23;
  byte ****local_7c;
  byte ****local_78;
  byte ****local_74;
  byte ***local_70;
  byte ****local_6c;
  byte ****local_68;
  byte ****local_64;
  int local_60;
  byte *****local_5c;
  byte ****local_58;
  byte ****local_54;
  byte ****local_50;
  byte ***local_4c;
  byte ****local_48;
  int local_44;
  byte ****local_40;
  byte ****local_3c;
  byte ****local_38;
  byte ****local_34;
  byte ****local_30;
  byte ****local_2c;
  undefined1 *local_28;
  
  if (1 < *param_3 - 1U) {
    ppppbVar19 = (byte ****)param_3[3];
    pppbVar21 = (byte ***)param_3[2];
    ppppbVar20 = (byte ****)param_3[4];
    ppppbVar14 = (byte ****)param_3[5];
    pcVar15 = *(code **)(param_1[0x455] + 0x10);
    iVar8 = param_1[0x454] + (*(int *)(param_1[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar15)(&local_5c,iVar8,pppbVar21,ppppbVar19,ppppbVar20,ppppbVar14);
    if (local_5c == (byte *****)0x1) {
      iVar10 = *param_1;
      iVar11 = param_1[1];
      iVar6 = param_1[0x254];
      iVar7 = param_1[0x304];
      iVar9 = param_1[0x305];
      iVar16 = param_1[0x408];
      iVar17 = param_3[6];
      local_7c = (byte ****)0x0;
      ppppbVar12 = (byte ****)(byte ***)0x0;
      ppppbVar18 = ppppbVar20;
      do {
        ppppbVar4 = local_54;
        ppppbVar3 = local_58;
        if (local_58 < local_7c) {
LAB_013a1004:
          uVar5 = FUN_0139e540(param_1,param_2,param_3);
          return uVar5;
        }
        ppppbVar13 = (byte ****)((int)local_58 + 1);
        bVar23 = ppppbVar13 <= ppppbVar20;
        bVar22 = ppppbVar20 == ppppbVar13;
        local_30 = local_58;
        if (!bVar23 || bVar22) {
          bVar23 = ppppbVar19 <= local_58;
          bVar22 = local_58 == ppppbVar19;
        }
        local_34 = ppppbVar20;
        if (bVar23 && !bVar22) {
          local_58 = (byte ****)FUN_005ffff4;
          local_5c = &local_34;
          local_50 = (byte ****)&LAB_00fac484;
          local_54 = (byte ****)&local_40;
          local_40 = ppppbVar19;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_5c,&DAT_01893ee0);
        }
        local_78 = (byte ****)0x1;
        local_64 = local_58;
        local_70 = pppbVar21;
        local_6c = ppppbVar19;
        local_68 = ppppbVar20;
        local_60 = iVar17;
        if (iVar16 == 2) {
          if (iVar7 == 2 && iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA",
                         0x8f,&DAT_018933a8);
          }
          if (*(int *)(param_2 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933b8);
          }
          FUN_013b6db4(&local_5c,param_1 + 0x304,param_2 + 0x18,&local_78,ppppbVar12);
        }
        else {
          FUN_013b65b8(&local_5c,param_1 + 0x3a6,&local_78);
        }
        ppppbVar12 = local_54;
        if (local_5c == (byte *****)0x2) goto LAB_013a1004;
        if (((uint)local_5c & 1) == 0) {
          if (ppppbVar14 <= ppppbVar18) {
            return 0;
          }
          if (ppppbVar3 == (byte ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893368);
          }
        }
        else {
          bVar23 = ppppbVar19 <= ppppbVar14;
          bVar22 = ppppbVar14 == ppppbVar19;
          if (!bVar23 || bVar22) {
            bVar23 = (byte ***)((int)ppppbVar14 + 1) <= local_54;
            bVar22 = local_54 == (byte ****)((int)ppppbVar14 + 1);
          }
          local_40 = local_54;
          local_3c = ppppbVar14;
          if (bVar23 && !bVar22) {
            local_30 = (byte ****)FUN_005ffff4;
            local_34 = (byte ****)&local_40;
            local_28 = &LAB_00fac484;
            local_2c = (byte ****)&local_38;
            local_38 = ppppbVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
          }
          local_5c = (byte *****)0x2;
          local_4c = (byte ***)local_54;
          local_54 = (byte ****)pppbVar21;
          local_50 = ppppbVar19;
          local_48 = ppppbVar14;
          local_44 = iVar17;
          if (iVar6 == 2) {
            if (iVar10 == 2 && iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA"
                           ,0x8f,&DAT_01893388);
            }
            if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_01893398);
            }
            FUN_01378a88(&local_34,param_1,param_2 + 0xd8,&local_5c);
          }
          else {
            FUN_01377a14(&local_34,param_1 + 0x144,&local_5c);
          }
          if (local_34 == (byte ****)&SUB_00000002) goto LAB_013a1004;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < ppppbVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
            }
            return 1;
          }
          if (ppppbVar3 == (byte ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893378);
          }
          local_7c = local_30;
        }
        (*pcVar15)(&local_5c,iVar8,pppbVar21,ppppbVar19,ppppbVar13,ppppbVar14);
        ppppbVar12 = ppppbVar4;
        ppppbVar18 = ppppbVar13;
      } while (local_5c != (byte *****)0x0);
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
    if (local_5c == (byte *****)0x2) {
      bVar2 = *(byte *)local_58;
      local_34 = local_58;
    }
    else {
      if ((((uint)local_5c & uVar5 & 1) == 0) ||
         (FUN_013b7ec0(&local_78,param_3,local_58,local_54,local_54,param_1,param_2 + 0xd8),
         local_5c = (byte *****)local_78, local_78 != (byte ****)0x2)) {
LAB_013a0fac:
        return (uint)(local_5c == (byte *****)0x1);
      }
      bVar2 = *(byte *)local_74;
      local_34 = local_74;
    }
    if (1 < bVar2) {
      local_5c = &local_34;
      local_58 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
  }
  else {
    iVar8 = param_1[0x1f1];
    cVar1 = *(char *)((int)param_1 + 0x7c5);
    FUN_013ae3dc(&local_5c,param_1 + 0x144);
    if (local_5c == (byte *****)0x2) {
      bVar2 = *(byte *)local_58;
      local_34 = local_58;
    }
    else {
      if (((((uint)local_5c & 1) == 0) || ((char)iVar8 == '\0' || cVar1 == '\0')) ||
         (FUN_013b7b18(&local_78,param_3,local_58,local_54,local_54,param_1 + 0x144),
         local_5c = (byte *****)local_78, local_78 != (byte ****)0x2)) goto LAB_013a0fac;
      bVar2 = *(byte *)local_74;
      local_34 = local_74;
    }
    if (1 < bVar2) {
      local_5c = &local_34;
      local_58 = (byte ****)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_5c,&DAT_01892790);
    }
  }
  thunk_FUN_016d3fb4(local_34);
  uVar5 = FUN_0139e540(param_1,param_2,param_3);
  return uVar5;
}

