// FUN_0139f9d4 @ 0139f9d4 size=1676 calls_out=11 calls_in=0
// strings: internal error: entered unreachable code: ReverseInner always has a DFA | internal error: entered unreachable code: ReverseInner always has a DFA

void FUN_0139f9d4(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  code ***pppcVar1;
  code ****ppppcVar2;
  int iVar3;
  int iVar4;
  code ***pppcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  code ***pppcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code ****ppppcVar14;
  code ***pppcVar15;
  code ***pppcVar16;
  code ***pppcVar17;
  code ***pppcVar18;
  code ***pppcVar19;
  code ****ppppcVar20;
  code ***unaff_r9;
  code ***pppcVar21;
  bool bVar22;
  bool bVar23;
  code ****local_78;
  code *local_74;
  code ***local_70;
  code ***local_6c;
  code ***local_68;
  code ***local_64;
  int local_60;
  code ****local_5c;
  code ***local_58;
  code ****local_54;
  code ***local_50;
  code ***local_4c;
  code ***local_48;
  int local_44;
  code ***local_40;
  code ***local_3c;
  code ***local_38;
  code ****local_34;
  code ***local_30;
  code ****local_2c;
  undefined1 *local_28;
  
  if (1 < *param_4 - 1U) {
    pppcVar9 = (code ***)param_4[2];
    pppcVar16 = (code ***)param_4[5];
    pppcVar21 = (code ***)param_4[3];
    pppcVar18 = (code ***)param_4[4];
    pppcVar19 = *(code ****)(param_2[0x455] + 0x10);
    iVar6 = param_2[0x454] + (*(int *)(param_2[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*(code *)pppcVar19)(&local_5c,iVar6,pppcVar9,pppcVar21,pppcVar18,pppcVar16);
    ppppcVar20 = local_5c;
    pppcVar5 = pppcVar19;
    if (local_5c == (code ****)&DAT_00000001) {
      pppcVar17 = (code ***)0x0;
      iVar10 = param_2[1];
      iVar3 = param_2[0x254];
      iVar13 = *param_2;
      iVar4 = param_2[0x304];
      iVar7 = param_2[0x305];
      iVar11 = param_2[0x408];
      iVar12 = param_4[6];
      ppppcVar14 = (code ****)(code ***)0x0;
      pppcVar5 = pppcVar18;
      do {
        ppppcVar2 = local_54;
        pppcVar1 = local_58;
        if (local_58 < pppcVar17) {
LAB_0139fe8c:
          if (iVar3 == 2) {
            if (iVar13 != 2 || iVar10 != 0) {
              if (*(int *)(param_3 + 0x248) == 2) goto LAB_0139ff84;
              FUN_0139daac(&local_5c,param_2,param_3 + 0xd8,param_4);
              if (local_5c != (code ****)&SUB_00000002) goto LAB_0139ff4c;
              FUN_0136e7e8(local_58);
              goto LAB_0139fe08;
            }
          }
          else {
            FUN_0139d490(&local_5c,param_2 + 0x144,param_4);
            if (local_5c != (code ****)&SUB_00000002) goto LAB_0139ff4c;
            local_34 = (code ****)local_58;
            if (1 < (byte)*(code *)local_58) {
              local_78 = (code ****)&local_34;
              local_74 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_005733f0,&local_78,&DAT_01892790);
            }
            thunk_FUN_016d3fb4();
          }
          FUN_0139d778(param_1,param_2,param_3,param_4);
          return;
        }
        pppcVar15 = (code ***)((int)local_58 + 1);
        bVar23 = pppcVar15 <= pppcVar18;
        bVar22 = pppcVar18 == pppcVar15;
        local_30 = local_58;
        if (!bVar23 || bVar22) {
          bVar23 = pppcVar21 <= local_58;
          bVar22 = local_58 == pppcVar21;
        }
        local_34 = (code ****)pppcVar18;
        if (bVar23 && !bVar22) {
          local_58 = (code ***)FUN_005ffff4;
          local_5c = (code ****)&local_34;
          local_50 = (code ***)&LAB_00fac484;
          local_54 = &local_40;
          local_40 = pppcVar21;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0057a181,&local_5c,&DAT_01893ee0);
        }
        local_78 = (code ****)0x1;
        local_64 = local_58;
        local_70 = pppcVar9;
        local_6c = pppcVar21;
        local_68 = pppcVar18;
        local_60 = iVar12;
        if (iVar11 == 2) {
          if (iVar4 == 2 && iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA",
                         0x8f,&DAT_018933a8);
          }
          if (*(int *)(param_3 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018933b8);
          }
          FUN_013b6db4(&local_5c,param_2 + 0x304,param_3 + 0x18,&local_78,ppppcVar14);
        }
        else {
          FUN_013b65b8(&local_5c,param_2 + 0x3a6,&local_78);
        }
        ppppcVar20 = local_54;
        unaff_r9 = local_58;
        if (local_5c == (code ****)&SUB_00000002) {
          if (((uint)local_58 & 1) != 0) {
LAB_0139fe70:
            FUN_0139d778(param_1,param_2,param_3,param_4);
            return;
          }
          goto LAB_0139fe8c;
        }
        if (((uint)local_5c & 1) == 0) {
          ppppcVar20 = (code ****)pppcVar16;
          if (pppcVar16 <= pppcVar5) break;
          if (pppcVar1 == (code ***)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893368);
          }
        }
        else {
          bVar23 = pppcVar21 <= pppcVar16;
          bVar22 = pppcVar16 == pppcVar21;
          pppcVar5 = pppcVar16;
          if (!bVar23 || bVar22) {
            pppcVar5 = (code ***)((int)pppcVar16 + 1);
          }
          local_40 = (code ***)local_54;
          if (!bVar23 || bVar22) {
            bVar23 = pppcVar5 <= local_54;
            bVar22 = local_54 == (code ****)pppcVar5;
          }
          local_3c = pppcVar16;
          if (bVar23 && !bVar22) {
            local_30 = (code ***)FUN_005ffff4;
            local_34 = &local_40;
            local_28 = &LAB_00fac484;
            local_2c = &local_38;
            local_38 = pppcVar21;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
          }
          local_5c = (code ****)&SUB_00000002;
          local_4c = (code ***)local_54;
          local_54 = (code ****)pppcVar9;
          local_50 = pppcVar21;
          local_48 = pppcVar16;
          local_44 = iVar12;
          if (iVar3 == 2) {
            if (iVar13 == 2 && iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: ReverseInner always has a DFA"
                           ,0x8f,&DAT_01893388);
            }
            if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_01893398);
            }
            FUN_01378a88(&local_34,param_2,param_3 + 0xd8,&local_5c);
          }
          else {
            FUN_01377a14(&local_34,param_2 + 0x144,&local_5c);
          }
          if (local_34 == (code ****)&SUB_00000002) goto LAB_0139fe70;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < ppppcVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
            }
            uVar8 = 1;
            goto LAB_0139fcf8;
          }
          if (pppcVar1 == (code ***)0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01893378);
          }
          pppcVar17 = local_30;
        }
        (*(code *)pppcVar19)(&local_5c,iVar6,pppcVar9,pppcVar21,pppcVar15,pppcVar16);
        ppppcVar20 = (code ****)(code ***)0x0;
        ppppcVar14 = ppppcVar2;
        pppcVar5 = pppcVar15;
      } while (local_5c != (code ****)0x0);
    }
    local_2c = ppppcVar20;
    uVar8 = 0;
    ppppcVar20 = (code ****)pppcVar5;
LAB_0139fcf8:
    *param_1 = uVar8;
    param_1[1] = ppppcVar20;
    param_1[2] = local_2c;
    param_1[3] = unaff_r9;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(param_1,param_2);
      return;
    }
    if (*(int *)(param_3 + 0x248) == 2) {
LAB_0139ff84:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893548);
    }
    FUN_0139daac(&local_5c,param_2,param_3 + 0xd8);
    if (local_5c != (code ****)&SUB_00000002) {
LAB_0139ff4c:
      param_1[2] = local_54;
      *param_1 = local_5c;
      param_1[1] = local_58;
      param_1[3] = local_50;
      return;
    }
    local_34 = (code ****)local_58;
    if (1 < (byte)*(code *)local_58) {
      local_78 = (code ****)&local_34;
      local_74 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_78,&DAT_01892790);
    }
  }
  else {
    FUN_0139d490(&local_5c,param_2 + 0x144,param_4);
    if (local_5c != (code ****)&SUB_00000002) goto LAB_0139ff4c;
    local_34 = (code ****)local_58;
    if (1 < (byte)*(code *)local_58) {
      local_78 = (code ****)&local_34;
      local_74 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_78,&DAT_01892790);
    }
  }
  local_34 = (code ****)local_58;
  thunk_FUN_016d3fb4();
LAB_0139fe08:
  FUN_0139d778(param_1,param_2,param_3,param_4);
  return;
}

