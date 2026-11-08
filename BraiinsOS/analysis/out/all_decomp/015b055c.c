// FUN_015b055c @ 015b055c size=916 calls_out=9 calls_in=1
// strings: 

void FUN_015b055c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  uint local_80;
  int *local_7c;
  uint local_78;
  uint local_70;
  int *local_6c;
  uint local_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar15 = (uint *)(param_3 + 0x2c);
  uVar8 = *puVar15;
  if (uVar8 == 9) {
    FUN_015ade58(&local_40,param_3);
    *puVar15 = local_40;
    *(uint *)(param_3 + 0x30) = uStack_3c;
    *(uint *)(param_3 + 0x34) = uStack_38;
    *(uint *)(param_3 + 0x38) = local_34;
    *(uint *)(param_3 + 0x3c) = uStack_30;
    *(uint *)(param_3 + 0x40) = uStack_2c;
    uVar8 = *(uint *)(param_3 + 0x2c);
  }
  if (uVar8 == 7) {
    bVar2 = *(byte *)(param_3 + 0x30);
    bVar16 = bVar2 == 1;
    if (bVar16) {
      bVar2 = *(byte *)(param_3 + 0x31);
    }
    if (bVar16 && (bVar2 & 1) == 0) {
      iVar13 = *(int *)(param_3 + 0x34);
      *(undefined4 *)(param_3 + 0x2c) = 9;
      local_98 = 7;
      FUN_015adc08(&local_60,param_3,&local_98);
      if (local_60 == 5) {
        local_7c = (int *)&DAT_00000004;
        local_78 = 0;
        local_80 = 0;
        uVar8 = local_78;
        iVar14 = local_98;
        iVar3 = local_94;
        iVar4 = local_90;
        iVar5 = local_8c;
        iVar6 = iStack_88;
        iVar7 = iStack_84;
        piVar9 = (int *)&DAT_00000004;
      }
      else {
        piVar9 = (int *)thunk_FUN_016d4a50(0x70);
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x70);
        }
        *piVar9 = local_60;
        piVar9[1] = iStack_5c;
        piVar9[2] = iStack_58;
        iVar14 = 0x1c;
        piVar9[3] = local_54;
        piVar9[4] = iStack_50;
        piVar9[5] = iStack_4c;
        piVar9[6] = iStack_48;
        local_68 = 1;
        local_70 = 4;
        local_6c = piVar9;
        while (uVar8 = local_68, FUN_015adc08(&local_40,param_3,&local_98), local_40 != 5) {
          if (uVar8 == local_70) {
            FUN_015afa68(&local_70,uVar8,1,4,0x1c);
            piVar9 = local_6c;
          }
          puVar10 = (uint *)((int)piVar9 + iVar14);
          local_68 = uVar8 + 1;
          iVar14 = iVar14 + 0x1c;
          *puVar10 = local_40;
          puVar10[1] = uStack_3c;
          puVar10[2] = uStack_38;
          puVar10[3] = local_34;
          puVar10[4] = uStack_30;
          puVar10[5] = uStack_2c;
          puVar10[6] = uStack_28;
        }
        local_80 = local_70;
        local_7c = local_6c;
        local_78 = local_68;
        uVar8 = local_68;
        iVar14 = local_98;
        iVar3 = local_94;
        iVar4 = local_90;
        iVar5 = local_8c;
        iVar6 = iStack_88;
        iVar7 = iStack_84;
        piVar9 = local_6c;
        if (local_68 < local_70) {
          if (local_68 == 0) {
            thunk_FUN_016d3fb4(local_6c);
            piVar9 = (int *)&DAT_00000004;
            uVar8 = local_78;
            iVar14 = local_98;
            iVar3 = local_94;
            iVar4 = local_90;
            iVar5 = local_8c;
            iVar6 = iStack_88;
            iVar7 = iStack_84;
          }
          else {
            iVar1 = local_68 * 0x1c;
            piVar9 = (int *)thunk_FUN_016d4ea4(local_6c,iVar1);
            uVar8 = local_78;
            iVar14 = local_98;
            iVar3 = local_94;
            iVar4 = local_90;
            iVar5 = local_8c;
            iVar6 = iStack_88;
            iVar7 = iStack_84;
            if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,iVar1);
            }
          }
        }
      }
      local_98 = iVar14;
      local_78 = uVar8;
      if (iVar14 != 7) {
        iVar13 = uVar8 + 1;
        piVar12 = piVar9;
        while (iVar13 = iVar13 + -1, iVar13 != 0) {
          FUN_015ad50c(piVar12);
          piVar12 = piVar12 + 7;
        }
        if (uVar8 != 0) {
          thunk_FUN_016d3fb4(piVar9);
        }
        *param_1 = iVar14;
        param_1[1] = iVar3;
        param_1[2] = iVar4;
        param_1[3] = iVar5;
        param_1[4] = iVar6;
        param_1[5] = iVar7;
        return;
      }
      uVar11 = *puVar15;
      if (uVar11 == 9) {
        FUN_015ade58(&local_40,param_3);
        *puVar15 = local_40;
        *(uint *)(param_3 + 0x30) = uStack_3c;
        *(uint *)(param_3 + 0x34) = uStack_38;
        *(uint *)(param_3 + 0x38) = local_34;
        *(uint *)(param_3 + 0x3c) = uStack_30;
        *(uint *)(param_3 + 0x40) = uStack_2c;
        uVar11 = *puVar15;
      }
      bVar16 = uVar11 == 7;
      if (bVar16) {
        uVar11 = (uint)*(byte *)(param_3 + 0x30);
      }
      if ((bVar16 && uVar11 == 1) && ((*(byte *)(param_3 + 0x31) & 1) != 0)) {
        *(undefined4 *)(param_3 + 0x2c) = 9;
        FUN_015ade58(&local_40,param_3);
        *puVar15 = local_40;
        *(uint *)(param_3 + 0x30) = uStack_3c;
        *(uint *)(param_3 + 0x34) = uStack_38;
        *(uint *)(param_3 + 0x38) = local_34;
        *(uint *)(param_3 + 0x3c) = uStack_30;
        *(uint *)(param_3 + 0x40) = uStack_2c;
        uVar11 = *(uint *)(param_3 + 0x2c);
        bVar16 = uVar11 == 7;
        if (bVar16) {
          uVar11 = (uint)*(byte *)(param_3 + 0x30);
        }
        if ((bVar16 && uVar11 == 2) && ((*(byte *)(param_3 + 0x31) & 1) == 0)) {
          *puVar15 = 9;
        }
        param_1[2] = uVar8;
        *param_1 = 7;
        param_1[1] = (int)piVar9;
        return;
      }
      iVar14 = uVar8 + 1;
      *param_1 = 0;
      param_1[1] = iVar13;
      piVar12 = piVar9;
      while (iVar14 = iVar14 + -1, iVar14 != 0) {
        FUN_015b0af8(piVar12);
        piVar12 = piVar12 + 7;
      }
      if (uVar8 != 0) {
        thunk_FUN_016d3fb4(piVar9);
      }
      return;
    }
  }
  param_1[3] = 0xf;
  *param_1 = 5;
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_0040f6db;
  return;
}

