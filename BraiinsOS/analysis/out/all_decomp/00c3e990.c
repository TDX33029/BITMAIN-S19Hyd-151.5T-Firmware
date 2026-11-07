// FUN_00c3e990 @ 00c3e990 size=1732 calls_out=8 calls_in=3
// strings: 

void FUN_00c3e990(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  int *piVar24;
  uint local_b0;
  undefined4 *local_ac;
  int local_a8;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x110);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x110);
  }
  iVar7 = param_2[2];
  local_58 = *param_2;
  local_60 = (int *)param_2[1];
  *puVar2 = 0;
  local_54 = local_60 + iVar7 * 6;
  *(undefined2 *)((int)puVar2 + 0x10e) = 0;
  local_a8 = 0;
  local_b0 = 0;
  piVar15 = local_60;
  iVar7 = -0x7fffffff;
  piVar24 = local_54;
  local_ac = puVar2;
  local_5c = local_60;
LAB_00c3ea5c:
  do {
    piVar14 = &local_74;
    iVar17 = iVar7;
    if (iVar7 == -0x7fffffff) {
      if (piVar15 == piVar24) goto LAB_00c3ec94;
      local_5c = piVar15 + 6;
      piVar14 = piVar15 + 1;
      iVar17 = *piVar15;
      piVar15 = local_5c;
    }
    if (iVar17 == -0x80000000) {
LAB_00c3ec94:
      piVar14 = piVar15 + 4;
      for (iVar7 = ((uint)((int)piVar24 - (int)piVar15) >> 3) * -0x55555555; iVar7 != 0;
          iVar7 = iVar7 + -1) {
        if (piVar14[-4] != 0) {
          thunk_FUN_016d3fb4(piVar14[-3]);
        }
        if (piVar14[-1] != 0) {
          thunk_FUN_016d3fb4(*piVar14);
        }
        piVar14 = piVar14 + 6;
      }
      if (local_58 != 0) {
        thunk_FUN_016d3fb4(local_60);
      }
      if (local_b0 != 0) {
        uVar19 = local_b0;
        puVar2 = local_ac;
        do {
          uVar5 = (uint)*(ushort *)((int)puVar2 + 0x10e);
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
          }
          iVar7 = uVar5 - 1;
          puVar11 = (undefined4 *)puVar2[uVar5 + 0x44];
          uVar8 = (uint)*(ushort *)((int)puVar11 + 0x10e);
          if (uVar8 < 5) {
            iVar17 = puVar2[uVar5 + 0x43];
            uVar21 = (uint)*(ushort *)(iVar17 + 0x10e);
            uVar5 = -uVar8 + 5;
            if (uVar21 < uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
            }
            iVar16 = uVar21 - uVar5;
            *(ushort *)(iVar17 + 0x10e) = (ushort)iVar16;
            *(ushort *)((int)puVar11 + 0x10e) = 5;
            puVar3 = puVar11 + 1;
            FUN_016dd52c(puVar3 + uVar5 * 3);
            puVar4 = puVar11 + 0x22;
            FUN_016dd52c(puVar4 + uVar5 * 3,puVar4,uVar8 * 0xc);
            iVar9 = iVar16 + 1;
            iVar6 = uVar21 - iVar9;
            if (iVar6 != -uVar8 + 4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            FUN_016dd1aa(puVar3,iVar17 + 4 + iVar9 * 0xc,iVar6 * 0xc);
            FUN_016dd1aa(puVar4,iVar17 + 0x88 + iVar9 * 0xc,iVar6 * 0xc);
            puVar12 = (undefined4 *)(iVar17 + 0x88 + iVar16 * 0xc);
            local_50 = *puVar12;
            puVar22 = (undefined4 *)(iVar17 + 4 + iVar16 * 0xc);
            uStack_4c = puVar12[1];
            uStack_48 = puVar12[2];
            uVar13 = puVar22[1];
            local_40 = puVar2[iVar7 * 3 + 1];
            local_74 = puVar2[iVar7 * 3 + 2];
            local_70 = puVar2[iVar7 * 3 + 3];
            uVar10 = puVar22[2];
            puVar2[iVar7 * 3 + 1] = *puVar22;
            puVar2[iVar7 * 3 + 3] = uVar10;
            local_30 = puVar2[iVar7 * 3 + 0x22];
            uStack_28 = puVar2[iVar7 * 3 + 0x24];
            puVar2[iVar7 * 3 + 2] = uVar13;
            uStack_2c = puVar2[iVar7 * 3 + 0x23];
            puVar2[iVar7 * 3 + 0x22] = local_50;
            puVar2[iVar7 * 3 + 0x23] = uStack_4c;
            puVar2[iVar7 * 3 + 0x24] = uStack_48;
            puVar3 = puVar3 + iVar6 * 3;
            *puVar3 = local_40;
            puVar3[1] = local_74;
            puVar3[2] = local_70;
            puVar4 = puVar4 + iVar6 * 3;
            *puVar4 = local_30;
            puVar4[1] = uStack_2c;
            puVar4[2] = uStack_28;
            iStack_3c = local_74;
            iStack_38 = local_70;
            local_6c = local_30;
            local_68 = uStack_2c;
            local_64 = uStack_28;
            if (uVar19 != 1) {
              puVar2 = puVar11 + 0x44;
              FUN_016dd52c(puVar2 + uVar5,puVar2,uVar8 * 4 + 4);
              FUN_016dd1aa(puVar2,iVar17 + iVar9 * 4 + 0x110,uVar5 * 4);
              puVar2 = (undefined4 *)puVar11[0x44];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 0;
              puVar2 = (undefined4 *)puVar11[0x45];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 1;
              puVar2 = (undefined4 *)puVar11[0x46];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 2;
              puVar2 = (undefined4 *)puVar11[0x47];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 3;
              puVar2 = (undefined4 *)puVar11[0x48];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 4;
              puVar2 = (undefined4 *)puVar11[0x49];
              *puVar2 = puVar11;
              *(undefined2 *)(puVar2 + 0x43) = 5;
            }
          }
          uVar19 = uVar19 - 1;
          puVar2 = puVar11;
        } while (uVar19 != 0);
      }
      *param_1 = local_ac;
      param_1[1] = local_b0;
      param_1[2] = local_a8;
      return;
    }
    iVar20 = *piVar14;
    iVar9 = piVar14[3];
    iVar16 = piVar14[1];
    iVar23 = piVar14[2];
    iVar6 = piVar14[4];
    iVar7 = -0x80000000;
    if (piVar15 == piVar24) {
LAB_00c3eb30:
      uVar1 = *(ushort *)((int)puVar2 + 0x10e);
      uVar19 = (uint)uVar1;
      if (uVar19 < 0xb) {
        *(ushort *)((int)puVar2 + 0x10e) = uVar1 + 1;
        puVar2[uVar19 * 3 + 1] = iVar17;
        puVar2[uVar19 * 3 + 2] = iVar20;
        puVar2[uVar19 * 3 + 0x23] = iVar9;
        puVar2[uVar19 * 3 + 3] = iVar16;
        puVar2[uVar19 * 3 + 0x22] = iVar23;
        puVar2[uVar19 * 3 + 0x24] = iVar6;
      }
      else {
        uVar19 = 0;
        do {
          puVar2 = (undefined4 *)*puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x140);
            if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x140);
            }
            *(undefined2 *)((int)puVar11 + 0x10e) = 0;
            uVar19 = local_b0 + 1;
            puVar11[0x44] = local_ac;
            *puVar11 = 0;
            if (0xfffffffe < local_b0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af438);
            }
            *local_ac = puVar11;
            *(undefined2 *)(local_ac + 0x43) = 0;
            puVar2 = puVar11;
            local_b0 = uVar19;
            goto LAB_00c3ebb4;
          }
          uVar19 = uVar19 + 1;
        } while (10 < *(ushort *)((int)puVar2 + 0x10e));
        puVar11 = local_ac;
LAB_00c3ebb4:
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x110);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x110);
        }
        *puVar3 = 0;
        *(undefined2 *)((int)puVar3 + 0x10e) = 0;
        uVar5 = uVar19;
        while (uVar5 = uVar5 - 1, uVar5 != 0) {
          puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x140);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x140);
          }
          puVar4[0x44] = puVar3;
          *(undefined2 *)((int)puVar4 + 0x10e) = 0;
          *puVar4 = 0;
          *puVar3 = puVar4;
          *(undefined2 *)(puVar3 + 0x43) = 0;
          puVar3 = puVar4;
        }
        uVar1 = *(ushort *)((int)puVar2 + 0x10e);
        uVar5 = (uint)uVar1;
        if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
        }
        uVar1 = uVar1 + 1;
        *(ushort *)((int)puVar2 + 0x10e) = uVar1;
        puVar2[uVar5 * 3 + 1] = iVar17;
        puVar2[uVar5 * 3 + 2] = iVar20;
        puVar2[uVar5 * 3 + 0x23] = iVar9;
        puVar2[uVar5 * 3 + 3] = iVar16;
        puVar2[uVar5 * 3 + 0x22] = iVar23;
        puVar2[uVar5 * 3 + 0x24] = iVar6;
        puVar2[uVar5 + 0x45] = puVar3;
        *puVar3 = puVar2;
        *(ushort *)(puVar3 + 0x43) = uVar1;
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          puVar2 = (undefined4 *)puVar2[*(ushort *)((int)puVar2 + 0x10e) + 0x44];
        }
        local_ac = puVar11;
      }
      local_a8 = local_a8 + 1;
      piVar15 = local_5c;
      piVar24 = local_54;
      goto LAB_00c3ea5c;
    }
    piVar14 = piVar15 + 6;
    iVar18 = *piVar15;
    local_5c = piVar14;
    FUN_016dd52c(&local_74,piVar15 + 1,0x14);
    if (((iVar18 == -0x80000000) || (iVar7 = iVar18, iVar16 != local_70)) ||
       (iVar18 = thunk_FUN_016dd50a(iVar20,local_74,iVar16), iVar18 != 0)) goto LAB_00c3eb30;
    if (iVar17 != 0) {
      thunk_FUN_016d3fb4(iVar20);
    }
    piVar15 = piVar14;
    if (iVar23 != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  } while( true );
}

