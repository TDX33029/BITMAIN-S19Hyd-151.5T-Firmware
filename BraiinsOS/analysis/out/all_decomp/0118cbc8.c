// FUN_0118cbc8 @ 0118cbc8 size=1140 calls_out=5 calls_in=1
// strings: 

void FUN_0118cbc8(undefined4 *param_1,int param_2,int *param_3,char *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 local_38;
  
  iVar10 = *param_3;
  if (iVar10 != 0) {
    iVar19 = param_3[1];
    while( true ) {
      uVar2 = *(ushort *)(iVar10 + 0x192);
      iVar18 = iVar10 + 0x10c;
      uVar14 = 0xffffffff;
      iVar17 = (uint)uVar2 * 0xc;
      do {
        if (iVar17 == 0) {
          uVar14 = (uint)uVar2;
          goto LAB_0118cc70;
        }
        uVar12 = *(uint *)(iVar18 + 8);
        uVar9 = uVar12;
        if (0xf < uVar12) {
          uVar9 = 0x10;
        }
        iVar4 = FUN_016dd50a(&DAT_005652b0,*(undefined4 *)(iVar18 + 4),uVar9);
        if (iVar4 == 0) {
          iVar4 = 0x10 - uVar12;
        }
        iVar17 = iVar17 + -0xc;
        uVar14 = uVar14 + 1;
        iVar18 = iVar18 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) break;
LAB_0118cc70:
      if (iVar19 == 0) goto LAB_011918ec;
      iVar19 = iVar19 + -1;
      iVar10 = *(int *)(iVar10 + uVar14 * 4 + 0x198);
    }
    pcVar11 = (char *)(iVar10 + uVar14 * 0x18);
    cVar1 = *pcVar11;
    bVar20 = cVar1 == '\x01';
    if (bVar20) {
      cVar1 = pcVar11[1];
    }
    if (bVar20 && cVar1 == '\x01') {
      if (*param_4 == '\x02') {
        uVar5 = *(undefined4 *)(param_2 + 0x38);
        uVar7 = *(undefined4 *)(param_2 + 0x3c);
        if (*(int *)(param_4 + 8) == 0) {
          uVar3 = *(undefined8 *)(param_4 + 0x10);
          uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_005652b0,0x10);
          uVar5 = *(undefined4 *)param_4;
          uVar7 = *(undefined4 *)(param_4 + 4);
          uVar13 = *(undefined4 *)(param_4 + 8);
          uVar15 = *(undefined4 *)(param_4 + 0xc);
          uVar16 = *(undefined4 *)(param_4 + 0x10);
          local_44 = *(undefined4 *)(param_4 + 0x14);
          puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x28);
          }
          puVar8 = &DAT_018899c8;
          *puVar6 = uVar5;
          puVar6[1] = uVar7;
          puVar6[2] = uVar13;
          puVar6[3] = uVar15;
          puVar6[4] = uVar16;
          local_38._0_4_ = (undefined4)uVar3;
          local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        }
        else {
          if (*(int *)(param_4 + 8) == 2) {
            local_38 = *(undefined8 *)(param_4 + 0x10);
            uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_005652b0,0x10);
            local_58 = *(undefined4 *)param_4;
            uStack_54 = *(undefined4 *)(param_4 + 4);
            uStack_50 = *(undefined4 *)(param_4 + 8);
            uStack_4c = *(undefined4 *)(param_4 + 0xc);
            uStack_48 = *(undefined4 *)(param_4 + 0x10);
            local_44 = *(undefined4 *)(param_4 + 0x14);
            puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
            if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x28);
            }
            puVar8 = &DAT_018898e8;
          }
          else {
            local_38 = *(undefined8 *)(param_4 + 0x10);
            uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_005652b0,0x10);
            local_58 = *(undefined4 *)param_4;
            uStack_54 = *(undefined4 *)(param_4 + 4);
            uStack_50 = *(undefined4 *)(param_4 + 8);
            uStack_4c = *(undefined4 *)(param_4 + 0xc);
            uStack_48 = *(undefined4 *)(param_4 + 0x10);
            local_44 = *(undefined4 *)(param_4 + 0x14);
            puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
            if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x28);
            }
            puVar8 = &DAT_018899a8;
          }
          *puVar6 = local_58;
          puVar6[1] = uStack_54;
          puVar6[2] = uStack_50;
          puVar6[3] = uStack_4c;
          puVar6[4] = uStack_48;
        }
        puVar6[5] = local_44;
        *(undefined8 *)(puVar6 + 6) = uVar21;
        puVar6[8] = (undefined4)local_38;
        puVar6[9] = local_38._4_4_;
        param_1[1] = puVar6;
        param_1[2] = puVar8;
      }
      else {
        FUN_01205b88(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                     &DAT_005652b0,0x10,param_4);
      }
      *param_1 = 1;
      return;
    }
  }
LAB_011918ec:
  if (*param_4 == '\x02') {
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    if (*(int *)(param_4 + 8) == 0) {
      uVar3 = *(undefined8 *)(param_4 + 0x10);
      uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_0040f6c1,7);
      uVar5 = *(undefined4 *)param_4;
      uVar7 = *(undefined4 *)(param_4 + 4);
      uVar13 = *(undefined4 *)(param_4 + 8);
      uVar15 = *(undefined4 *)(param_4 + 0xc);
      uVar16 = *(undefined4 *)(param_4 + 0x10);
      local_44 = *(undefined4 *)(param_4 + 0x14);
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x28);
      }
      puVar8 = &DAT_018898c8;
      *puVar6 = uVar5;
      puVar6[1] = uVar7;
      puVar6[2] = uVar13;
      puVar6[3] = uVar15;
      puVar6[4] = uVar16;
      local_38._0_4_ = (undefined4)uVar3;
      local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      if (*(int *)(param_4 + 8) == 2) {
        local_38 = *(undefined8 *)(param_4 + 0x10);
        uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_0040f6c1,7);
        local_58 = *(undefined4 *)param_4;
        uStack_54 = *(undefined4 *)(param_4 + 4);
        uStack_50 = *(undefined4 *)(param_4 + 8);
        uStack_4c = *(undefined4 *)(param_4 + 0xc);
        uStack_48 = *(undefined4 *)(param_4 + 0x10);
        local_44 = *(undefined4 *)(param_4 + 0x14);
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x28);
        }
        puVar8 = &DAT_01889988;
      }
      else {
        local_38 = *(undefined8 *)(param_4 + 0x10);
        uVar21 = FUN_0123ab30(uVar5,uVar7,&DAT_0040f6c1,7);
        local_58 = *(undefined4 *)param_4;
        uStack_54 = *(undefined4 *)(param_4 + 4);
        uStack_50 = *(undefined4 *)(param_4 + 8);
        uStack_4c = *(undefined4 *)(param_4 + 0xc);
        uStack_48 = *(undefined4 *)(param_4 + 0x10);
        local_44 = *(undefined4 *)(param_4 + 0x14);
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x28);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x28);
        }
        puVar8 = &DAT_01889928;
      }
      *puVar6 = local_58;
      puVar6[1] = uStack_54;
      puVar6[2] = uStack_50;
      puVar6[3] = uStack_4c;
      puVar6[4] = uStack_48;
    }
    puVar6[5] = local_44;
    *(undefined8 *)(puVar6 + 6) = uVar21;
    puVar6[8] = (undefined4)local_38;
    puVar6[9] = local_38._4_4_;
    param_1[1] = puVar6;
    param_1[2] = puVar8;
  }
  else {
    FUN_01205b88(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                 &DAT_0040f6c1,7,param_4);
  }
  *param_1 = 1;
  return;
}

