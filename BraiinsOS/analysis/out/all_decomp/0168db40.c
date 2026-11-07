// FUN_0168db40 @ 0168db40 size=1520 calls_out=9 calls_in=3
// strings: a Display implementation returned an error unexpectedly

void FUN_0168db40(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint local_5c;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int **local_2c;
  code *local_28;
  
  iVar17 = param_2[1];
  local_4c = 0;
  local_54 = 0;
  iVar12 = iVar17 + param_2[2] * 0xc;
  iVar5 = param_2[2] * 0xc;
  local_50 = 1;
  piVar7 = (int *)(iVar17 + -0xc);
  do {
    piVar14 = piVar7;
    if (iVar5 == 0) {
      FUN_016d12b0(&local_48,iVar17,iVar12);
      if (local_40 != 0) {
        uVar18 = local_40;
        goto LAB_0168dc38;
      }
      if ((int *)param_2[3] != (int *)0x0) {
        local_30 = param_2[4];
        local_34 = (int *)param_2[3];
        goto LAB_0168dd34;
      }
      iVar5 = 0;
      goto joined_r0x0168e038;
    }
    piVar7 = piVar14 + 3;
    iVar5 = iVar5 + -0xc;
  } while (*piVar7 != 3);
  FUN_016d12b0(&local_48,iVar17,iVar12);
  local_34 = piVar14 + 4;
  local_28 = (code *)&LAB_008b9b38;
  local_2c = &local_34;
  iVar12 = FUN_00fa948c(&local_54,&DAT_018addf0,&DAT_0056c3b9,&local_2c);
  uVar18 = local_40;
  iVar5 = 1;
  if (iVar12 == 0) {
    if (local_40 != 0) {
      if (local_54 == local_4c) {
        FUN_0166e728(&local_54,local_4c,1,1,1);
      }
      *(undefined1 *)(local_50 + local_4c) = 10;
      local_4c = local_4c + 1;
LAB_0168dc38:
      if ((uint)(local_54 - local_4c) < 9) {
        FUN_0166e728(&local_54,local_4c,9,1,1);
        uVar18 = local_40;
      }
      pbVar8 = local_44;
      puVar6 = (undefined4 *)(local_50 + local_4c);
      *puVar6 = 0x65707865;
      puVar6[1] = 0x64657463;
      *(undefined1 *)(puVar6 + 2) = 0x20;
      local_4c = local_4c + 9;
      if (uVar18 != 0) {
        local_34 = (int *)local_44;
        local_28 = FUN_016d0fac;
        local_2c = &local_34;
        iVar5 = FUN_00fa948c(&local_54,&DAT_018addf0,&DAT_00590e71,&local_2c);
        if (iVar5 != 0) {
LAB_0168dcbc:
          iVar5 = 1;
          goto joined_r0x0168e038;
        }
        if (uVar18 != 1) {
          iVar5 = uVar18 * 4 + -4;
          do {
            pbVar8 = (byte *)((int)pbVar8 + 4);
            local_34 = (int *)pbVar8;
            if ((uint)(local_54 - local_4c) < 2) {
              FUN_0166e728(&local_54,local_4c,2,1,1);
            }
            *(undefined2 *)(local_50 + local_4c) = 0x202c;
            local_4c = local_4c + 2;
            local_28 = FUN_016d0fac;
            local_2c = &local_34;
            iVar12 = FUN_00fa948c(&local_54,&DAT_018addf0,&DAT_00590e71,&local_2c);
            if (iVar12 != 0) goto LAB_0168dcbc;
            iVar5 = iVar5 + -4;
          } while (iVar5 != 0);
        }
      }
    }
    piVar7 = (int *)param_2[3];
    if (piVar7 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      local_30 = param_2[4];
      local_34 = piVar7;
      if (local_54 == local_4c) {
        FUN_0166e728(&local_54,local_4c,1,1,1);
      }
      *(undefined1 *)(local_50 + local_4c) = 10;
      local_4c = local_4c + 1;
LAB_0168dd34:
      local_2c = &local_34;
      local_28 = (code *)&LAB_01656d18;
      iVar5 = FUN_00fa948c(&local_54,&DAT_018addf0,&DAT_00590e71,&local_2c);
    }
  }
joined_r0x0168e038:
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  iVar3 = local_4c;
  iVar2 = local_50;
  iVar12 = local_54;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 &DAT_018ade18,&DAT_018af130);
  }
  uVar18 = *(uint *)(param_3 + 0xc);
  uVar10 = 0;
  iVar5 = *(int *)(param_3 + 8);
  *(uint *)(param_3 + 8) = iVar5 + uVar18;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if ((int)uVar18 < 0) {
LAB_0168ddc0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar10,uVar18);
  }
  if (uVar18 == 0) {
    pbVar8 = &DAT_00000001;
    local_5c = 0;
  }
  else {
    pbVar8 = (byte *)thunk_FUN_016d4a50(uVar18);
    if (pbVar8 == (byte *)0x0) {
      uVar10 = 1;
      goto LAB_0168ddc0;
    }
    local_5c = uVar18;
  }
  FUN_016dd1aa(pbVar8,iVar5,uVar18);
  FUN_00fab1e0(&local_48,pbVar8,uVar18);
  if (local_48 == 1) {
    local_3c = (int *)local_44;
    local_38 = local_40;
    local_48 = local_5c;
    local_44 = pbVar8;
    local_40 = uVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_004147e1,0x1a,&local_48,&DAT_018ade08,&DAT_018ade68);
  }
  iVar5 = 0;
  uVar9 = 0;
  uVar4 = param_2[10];
  if (param_2[10] == 0) {
LAB_0168de70:
    pbVar15 = pbVar8 + uVar9;
    if (uVar9 == uVar18) goto LAB_0168de80;
LAB_0168dea8:
    pbVar13 = pbVar15 + 1;
    bVar1 = *pbVar15;
    if ((uint)(int)(char)bVar1 < 0x80000000) {
LAB_0168ded0:
      iVar5 = (int)pbVar13 - (int)pbVar15;
    }
    else {
      if (0xdf < bVar1) {
        if (bVar1 < 0xf0) {
          pbVar13 = pbVar15 + 3;
        }
        else {
          pbVar13 = pbVar15 + 4;
        }
        goto LAB_0168ded0;
      }
      pbVar13 = pbVar15 + 2;
      iVar5 = (int)pbVar13 - (int)pbVar15;
    }
    if (pbVar13 != pbVar8 + uVar18) goto LAB_0168def8;
  }
  else {
    do {
      uVar9 = uVar4;
      if (uVar9 < uVar18) {
        if (-0x41 < (char)pbVar8[uVar9]) goto LAB_0168de70;
      }
      else if (uVar18 == uVar9) {
        uVar9 = uVar18;
        goto LAB_0168def4;
      }
      uVar4 = uVar9 - 1;
    } while (uVar9 - 1 != 0);
    uVar9 = 0;
    pbVar15 = pbVar8;
    if (uVar18 != 0) goto LAB_0168dea8;
LAB_0168de80:
    uVar9 = uVar18;
    if (pbVar15 != pbVar8 + uVar18) goto LAB_0168def8;
  }
LAB_0168def4:
  iVar5 = uVar18 - uVar9;
LAB_0168def8:
  param_1[9] = local_5c;
  param_1[10] = pbVar8;
  param_1[0xb] = uVar18;
  param_1[8] = 0;
  *param_1 = 1;
  iVar16 = *param_2;
  param_1[1] = uVar9;
  param_1[2] = iVar5 + uVar9;
  param_1[3] = iVar12;
  param_1[4] = iVar2;
  param_1[5] = iVar3;
  param_1[6] = 0;
  param_1[7] = 4;
  if (iVar16 != 0) {
    thunk_FUN_016d3fb4(iVar17);
  }
  iVar5 = param_2[3];
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)param_2[4];
    pcVar11 = (code *)*puVar6;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(iVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  return;
}

