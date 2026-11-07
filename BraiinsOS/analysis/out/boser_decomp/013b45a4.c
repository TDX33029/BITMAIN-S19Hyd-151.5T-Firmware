// FUN_013b45a4 @ 013b45a4 size=1216 calls_out=7 calls_in=3
// strings: size overflows MAX_SIZE

void FUN_013b45a4(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar4 = FUN_013b3654();
  if (iVar4 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    if (*param_2 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
    }
LAB_013b4a20:
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&local_60,&DAT_01d1c90c,&DAT_01cf5378);
  }
  uVar3 = FUN_013b3258(param_1,param_2);
  iVar11 = *param_2;
  uVar18 = 0;
  iVar12 = param_2[1];
  iVar13 = param_2[2];
  iVar5 = param_1[6];
  iVar6 = param_1[9];
  uVar17 = param_1[7];
  uVar20 = param_1[10];
  uVar1 = *(ushort *)(param_1 + 0xe);
  iVar4 = param_2[1];
  uVar19 = (uint)(uVar1 & uVar3);
  do {
    do {
      uVar7 = uVar19;
      uVar19 = 0;
    } while (uVar17 <= uVar7);
    puVar8 = (ushort *)(iVar5 + uVar7 * 4);
    local_5c = (uint)*puVar8;
    if (local_5c == 0xffff) {
      local_38 = *param_2;
      iStack_34 = param_2[1];
      iStack_30 = param_2[2];
      iStack_2c = param_2[3];
      local_60 = *param_3;
      local_5c = param_3[1];
      local_58 = param_3[2];
      local_54 = param_3[3];
      local_50 = param_3[4];
      iVar4 = FUN_01aa5f84(param_1);
      if (iVar4 == 0) {
        if ((uint)param_1[7] <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,param_1[7],&DAT_01cf52d8);
        }
        puVar10 = (undefined2 *)(param_1[6] + uVar7 * 4);
        *puVar10 = (short)uVar20;
        puVar10[1] = uVar3;
        return;
      }
      goto LAB_013b4a20;
    }
    uVar2 = puVar8[1];
    if ((uVar7 - (uVar1 & uVar2) & (uint)uVar1) < uVar18) {
      iVar4 = param_1[1];
      iVar6 = *param_1;
      local_38 = *param_2;
      iStack_34 = param_2[1];
      iStack_30 = param_2[2];
      iStack_2c = param_2[3];
      local_60 = *param_3;
      local_5c = param_3[1];
      local_58 = param_3[2];
      local_54 = param_3[3];
      local_50 = param_3[4];
      iVar5 = FUN_01aa5f84(param_1);
      if (iVar5 == 0) {
        iVar5 = param_1[6];
        uVar17 = 0;
        uVar16 = param_1[7];
        uVar19 = uVar20 & 0xffff;
        while( true ) {
          do {
            uVar20 = uVar7;
            uVar7 = 0;
          } while (uVar16 <= uVar20);
          puVar8 = (ushort *)(iVar5 + uVar20 * 4);
          uVar1 = *puVar8;
          if (uVar1 == 0xffff) break;
          uVar2 = puVar8[1];
          *puVar8 = (ushort)uVar19;
          uVar17 = uVar17 + 1;
          puVar8[1] = uVar3;
          uVar19 = (uint)uVar1;
          uVar7 = uVar20 + 1;
          uVar3 = uVar2;
        }
        puVar8[1] = uVar3;
        *puVar8 = (ushort)uVar19;
        if ((bool)(~(uVar18 >> 9 != 0 && (iVar6 != 2 || iVar4 != 0)) & uVar17 < 0x80) ||
            (*param_1 != 0 || param_1[1] != 0)) {
          return;
        }
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      goto LAB_013b4a20;
    }
    if (uVar2 == uVar3) {
      if (uVar20 <= local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_5c,uVar20,&DAT_01cf52c8);
      }
      iVar9 = local_5c * 0x34 + iVar6;
      if ((*(int *)(iVar9 + 0x20) != 0) != (iVar11 == 0)) {
        if (*(int *)(iVar9 + 0x20) == 0) {
          if (*(char *)(iVar9 + 0x24) == (char)iVar4) goto LAB_013b486c;
        }
        else if ((*(int *)(iVar9 + 0x28) == iVar13) &&
                (iVar9 = thunk_FUN_01bed842(*(undefined4 *)(iVar9 + 0x24),iVar12,iVar13), iVar9 == 0
                )) {
LAB_013b486c:
          piVar15 = (int *)(iVar6 + local_5c * 0x34);
          local_54 = local_5c;
          if (*piVar15 == 0) {
            iVar4 = param_1[0xd];
            local_50 = *param_3;
            iStack_4c = param_3[1];
            iStack_48 = param_3[2];
            iStack_44 = param_3[3];
            iStack_40 = param_3[4];
            local_58 = 0;
            local_60 = 0;
            if (iVar4 == param_1[0xb]) {
              FUN_01aa8fa8(param_1 + 0xb);
            }
            piVar14 = (int *)(param_1[0xc] + iVar4 * 0x24);
            *piVar14 = local_60;
            piVar14[1] = local_5c;
            piVar14[2] = local_58;
            piVar14[3] = local_54;
            piVar14[4] = local_50;
            piVar14[5] = iStack_4c;
            piVar14[6] = iStack_48;
            piVar14[7] = iStack_44;
            piVar14[8] = iStack_40;
            param_1[0xd] = iVar4 + 1;
            *piVar15 = 1;
            piVar15[1] = iVar4;
            piVar15[2] = iVar4;
          }
          else {
            uVar19 = param_1[0xd];
            uVar17 = piVar15[2];
            local_50 = *param_3;
            iStack_4c = param_3[1];
            iStack_48 = param_3[2];
            iStack_44 = param_3[3];
            iStack_40 = param_3[4];
            local_58 = 0;
            local_60 = 1;
            local_5c = uVar17;
            if (uVar19 == param_1[0xb]) {
              FUN_01aa8fa8(param_1 + 0xb);
            }
            iVar4 = param_1[0xc];
            piVar14 = (int *)(iVar4 + uVar19 * 0x24);
            *piVar14 = local_60;
            piVar14[1] = local_5c;
            piVar14[2] = local_58;
            piVar14[3] = local_54;
            piVar14[4] = local_50;
            piVar14[5] = iStack_4c;
            piVar14[6] = iStack_48;
            piVar14[7] = iStack_44;
            piVar14[8] = iStack_40;
            param_1[0xd] = uVar19 + 1;
            if (uVar19 < uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar17,uVar19 + 1,&DAT_01cf52a8);
            }
            piVar15[2] = uVar19;
            *piVar15 = 1;
            iVar4 = iVar4 + uVar17 * 0x24;
            *(undefined4 *)(iVar4 + 8) = 1;
            *(uint *)(iVar4 + 0xc) = uVar19;
          }
          if (iVar11 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x013b49c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar11 + 0x10))(param_2 + 3,iVar12,iVar13);
          return;
        }
      }
    }
    uVar18 = uVar18 + 1;
    uVar19 = uVar7 + 1;
  } while( true );
}

