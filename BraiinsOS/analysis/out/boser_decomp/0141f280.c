// FUN_0141f280 @ 0141f280 size=1836 calls_out=16 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_0141f280(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  undefined2 *puVar10;
  int *piVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  short sVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  uint local_68;
  int local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_68 = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    uVar15 = param_1[7];
    fVar23 = (float)VectorUnsignedToFloat(local_68,(byte)(in_fpscr >> 0x16) & 3);
    fVar24 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    if (0.2 <= fVar23 / fVar24) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_0141f4e8;
    }
    FUN_01414480(param_1);
    puVar16 = (undefined2 *)param_1[6];
    uVar15 = param_1[7];
    if (uVar15 != 0) {
      puVar10 = puVar16;
      do {
        puVar10[1] = 0;
        *puVar10 = 0xffff;
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar16 + uVar15 * 2);
    }
    local_68 = param_1[10];
    if (local_68 != 0) {
      iVar21 = param_1[9];
      uVar1 = *(ushort *)(param_1 + 0xe);
      iVar5 = iVar21 + local_68 * 0x30;
      sVar22 = 0;
      do {
        uVar4 = FUN_0137e53c(param_1,iVar21 + 0x1c);
        *(ushort *)(iVar21 + 0x2c) = uVar4;
        iVar21 = iVar21 + 0x30;
        uVar13 = 0;
        uVar17 = (uint)(uVar1 & uVar4);
        while( true ) {
          do {
            uVar18 = uVar17;
            uVar17 = 0;
          } while (uVar15 <= uVar18);
          psVar6 = puVar16 + uVar18 * 2;
          if (*psVar6 == -1) {
            *psVar6 = sVar22;
            goto LAB_0141f408;
          }
          if ((uVar18 - (uVar1 & psVar6[1]) & (uint)uVar1) < uVar13) break;
          uVar13 = uVar13 + 1;
          uVar17 = uVar18 + 1;
        }
        uVar17 = uVar18;
        sVar12 = sVar22;
        while( true ) {
          do {
            uVar18 = uVar17;
            uVar17 = 0;
          } while (uVar15 <= uVar18);
          psVar6 = puVar16 + uVar18 * 2;
          sVar2 = *psVar6;
          if (sVar2 == -1) break;
          *psVar6 = sVar12;
          uVar3 = psVar6[1];
          psVar6[1] = uVar4;
          uVar17 = uVar18 + 1;
          sVar12 = sVar2;
          uVar4 = uVar3;
        }
        *psVar6 = sVar12;
LAB_0141f408:
        puVar16[uVar18 * 2 + 1] = uVar4;
        sVar22 = sVar22 + 1;
      } while (iVar21 != iVar5);
      goto LAB_0141f518;
    }
    local_68 = 0;
  }
  else {
    uVar15 = param_1[7];
    if (local_68 != uVar15 - (uVar15 >> 2)) goto LAB_0141f518;
    if (local_68 == 0) {
      *(undefined2 *)(param_1 + 0xe) = 7;
      FUN_01412b3c(&local_58,8);
      uVar25 = FUN_01410d80(&local_58);
      if (uVar15 != 0) {
        thunk_FUN_01be4678(param_1[6]);
      }
      *(undefined8 *)(param_1 + 6) = uVar25;
      iVar5 = thunk_FUN_01be5118(0x120);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x120);
      }
      iVar21 = param_1[9];
      FUN_0143becc(iVar21,0);
      FUN_0134c054(param_1[8],iVar21,4,0x30);
      param_1[8] = 6;
      param_1[9] = iVar5;
      local_68 = 0;
      param_1[10] = 0;
      uVar15 = (uint)((ulonglong)uVar25 >> 0x20);
      goto LAB_0141f518;
    }
LAB_0141f4e8:
    iVar5 = FUN_0141c9c0(param_1,uVar15 << 1);
    if (iVar5 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
LAB_0141f948:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_58,&DAT_01d2f38c,&DAT_01d2f41c);
    }
    uVar15 = param_1[7];
    local_68 = param_1[10];
  }
LAB_0141f518:
  uVar4 = FUN_0141c4b0(param_1,param_2);
  uVar1 = *(ushort *)(param_1 + 0xe);
  iVar21 = param_1[6];
  iVar5 = param_1[9];
  uVar13 = 0;
  uVar17 = (uint)(uVar1 & uVar4);
  do {
    do {
      uVar18 = uVar17;
      uVar17 = 0;
    } while (uVar15 <= uVar18);
    puVar7 = (ushort *)(iVar21 + uVar18 * 4);
    uVar17 = (uint)*puVar7;
    if (uVar17 == 0xffff) {
      if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
        local_58 = 0;
        local_54 = CONCAT31(local_54._1_3_,(char)param_2[1]);
      }
      else {
        (**(code **)*param_2)(&local_58,param_2 + 3,param_2[1],param_2[2]);
      }
      local_38 = local_58;
      iStack_34 = local_54;
      iStack_30 = local_50;
      iStack_2c = local_4c;
      local_58 = *param_3;
      local_54 = param_3[1];
      local_50 = param_3[2];
      local_4c = param_3[3];
      iVar5 = FUN_0141c8ac(param_1,uVar4);
      if (iVar5 == 0) {
        if ((uint)param_1[7] <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar18,param_1[7],&DAT_01d2f3bc);
        }
        puVar16 = (undefined2 *)(param_1[6] + uVar18 * 4);
        *puVar16 = (short)local_68;
        puVar16[1] = uVar4;
        return;
      }
      goto LAB_0141f948;
    }
    uVar3 = puVar7[1];
    if ((uVar18 - (uVar1 & uVar3) & (uint)uVar1) < uVar13) {
      iVar5 = *param_1;
      iVar21 = param_1[1];
      if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
        local_58 = 0;
        local_54 = CONCAT31(local_54._1_3_,(char)param_2[1]);
      }
      else {
        (**(code **)*param_2)(&local_58,param_2 + 3,param_2[1],param_2[2]);
      }
      local_38 = local_58;
      iStack_34 = local_54;
      iStack_30 = local_50;
      iStack_2c = local_4c;
      local_58 = *param_3;
      local_54 = param_3[1];
      local_50 = param_3[2];
      local_4c = param_3[3];
      iVar8 = FUN_0141c8ac(param_1,uVar4);
      if (iVar8 == 0) {
        iVar8 = param_1[6];
        uVar17 = 0;
        uVar14 = param_1[7];
        uVar15 = local_68 & 0xffff;
        while( true ) {
          do {
            uVar20 = uVar18;
            uVar18 = 0;
          } while (uVar14 <= uVar20);
          puVar7 = (ushort *)(iVar8 + uVar20 * 4);
          uVar1 = *puVar7;
          if (uVar1 == 0xffff) break;
          *puVar7 = (ushort)uVar15;
          uVar3 = puVar7[1];
          uVar17 = uVar17 + 1;
          puVar7[1] = uVar4;
          uVar15 = (uint)uVar1;
          uVar18 = uVar20 + 1;
          uVar4 = uVar3;
        }
        iVar19 = *param_1;
        iVar8 = param_1[1];
        puVar7[1] = uVar4;
        *puVar7 = (ushort)uVar15;
        if (!(bool)(~(uVar13 >> 9 != 0 && (iVar5 != 2 || iVar21 != 0)) & uVar17 < 0x80)) {
          if (iVar19 == 0 && iVar8 == 0) {
            *param_1 = 1;
            param_1[1] = 0;
            return;
          }
          return;
        }
        return;
      }
      goto LAB_0141f948;
    }
    if (uVar3 == uVar4) {
      if (local_68 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,local_68,&DAT_01d2f3ac);
      }
      iVar8 = iVar5 + uVar17 * 0x30;
      if ((*(int *)(iVar8 + 0x1c) != 0) != (*param_2 == 0)) {
        if (*(int *)(iVar8 + 0x1c) == 0) {
          if (*(char *)(iVar8 + 0x20) == (char)param_2[1]) goto LAB_0141f81c;
        }
        else if ((*(int *)(iVar8 + 0x24) == param_2[2]) &&
                (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x20),param_2[1]), iVar8 == 0))
        {
LAB_0141f81c:
          piVar11 = (int *)(iVar5 + uVar17 * 0x30);
          local_4c = uVar17;
          if (*piVar11 == 0) {
            iVar5 = param_1[0xd];
            local_48 = *param_3;
            iStack_44 = param_3[1];
            iStack_40 = param_3[2];
            iStack_3c = param_3[3];
            local_50 = 0;
            local_58 = 0;
            local_54 = uVar17;
            if (iVar5 == param_1[0xb]) {
              FUN_012eadc4(param_1 + 0xb);
            }
            piVar9 = (int *)(param_1[0xc] + iVar5 * 0x20);
            *piVar9 = local_58;
            piVar9[1] = local_54;
            piVar9[2] = local_50;
            piVar9[3] = local_4c;
            piVar9[4] = local_48;
            piVar9[5] = iStack_44;
            piVar9[6] = iStack_40;
            piVar9[7] = iStack_3c;
            param_1[0xd] = iVar5 + 1;
            *piVar11 = 1;
            piVar11[1] = iVar5;
            piVar11[2] = iVar5;
          }
          else {
            uVar17 = param_1[0xd];
            uVar15 = piVar11[2];
            local_48 = *param_3;
            iStack_44 = param_3[1];
            iStack_40 = param_3[2];
            iStack_3c = param_3[3];
            local_50 = 0;
            local_58 = 1;
            local_54 = uVar15;
            if (uVar17 == param_1[0xb]) {
              FUN_012eadc4(param_1 + 0xb);
            }
            iVar5 = param_1[0xc];
            piVar9 = (int *)(iVar5 + uVar17 * 0x20);
            *piVar9 = local_58;
            piVar9[1] = local_54;
            piVar9[2] = local_50;
            piVar9[3] = local_4c;
            piVar9[4] = local_48;
            piVar9[5] = iStack_44;
            piVar9[6] = iStack_40;
            piVar9[7] = iStack_3c;
            param_1[0xd] = uVar17 + 1;
            if (uVar17 < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar15,uVar17 + 1,&DAT_01d2f39c);
            }
            iVar5 = iVar5 + uVar15 * 0x20;
            piVar11[2] = uVar17;
            *piVar11 = 1;
            *(undefined4 *)(iVar5 + 8) = 1;
            *(uint *)(iVar5 + 0xc) = uVar17;
          }
          return;
        }
      }
    }
    uVar13 = uVar13 + 1;
    uVar17 = uVar18 + 1;
  } while( true );
}

