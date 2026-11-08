// FUN_00fa1a38 @ 00fa1a38 size=740 calls_out=6 calls_in=1
// strings: 

void FUN_00fa1a38(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  undefined4 *local_4c;
  undefined4 *local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  
  iVar1 = param_2[4];
  local_4c = (undefined4 *)param_2[5];
  iVar2 = param_2[6];
  puVar3 = (undefined4 *)param_2[7];
  puVar4 = (undefined4 *)param_2[9];
  iVar5 = param_2[10];
  local_58 = 0;
  puVar8 = (undefined4 *)param_2[3];
  puVar15 = (undefined4 *)*param_2;
  iVar17 = param_2[2];
  local_64 = 4;
  local_60 = (int *)&DAT_00000008;
  local_3c = 4;
  local_38 = 0;
  local_40 = 0;
  local_5c = 0;
  puVar11 = (undefined4 *)param_2[8];
  puVar7 = (undefined4 *)param_2[1];
  do {
    while (puVar15 != (undefined4 *)0x0) {
      if (puVar7 == puVar8) {
        if (iVar17 != 0) {
          thunk_FUN_016d3fb4(puVar15);
        }
        break;
      }
      local_48 = puVar7 + 2;
      puVar16 = puVar7;
LAB_00fa1c20:
      iVar10 = puVar16[1];
      uVar12 = *puVar16;
      if (local_58 != 0) {
        piVar13 = local_60;
        iVar9 = local_5c;
        do {
          if ((*piVar13 == iVar10) &&
             (iVar14 = thunk_FUN_016dd50a(piVar13[-1],uVar12,iVar10), iVar14 == 0))
          goto LAB_00fa1cc8;
          piVar13 = piVar13 + 2;
          iVar9 = iVar9 + -8;
        } while (iVar9 != 0);
      }
      if (local_58 == local_40) {
        FUN_00f98f0c(&local_40);
        local_64 = local_3c;
      }
      puVar7 = (undefined4 *)(local_64 + local_58 * 8);
      *puVar7 = uVar12;
      local_58 = local_58 + 1;
      puVar7[1] = iVar10;
      local_5c = local_5c + 8;
      local_60 = (int *)(local_64 + 4);
      local_38 = local_58;
LAB_00fa1cc8:
      puVar7 = local_48;
    }
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
joined_r0x00fa1bf8:
      if (iVar1 == 0) {
LAB_00fa1cf8:
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        return;
      }
      if (local_4c == puVar3) {
        if (iVar2 != 0) {
          thunk_FUN_016d3fb4(iVar1);
        }
        goto LAB_00fa1cf8;
      }
      puVar15 = (undefined4 *)0x0;
      puVar16 = local_4c;
      local_4c = local_4c + 2;
      local_48 = puVar7;
      goto LAB_00fa1c20;
    }
    if (puVar11 == puVar4) goto joined_r0x00fa1bf8;
    puVar16 = puVar11 + 2;
    uVar12 = *puVar11;
    iVar14 = puVar11[1];
    iVar9 = *(int *)(iVar5 + 0x6c);
    puVar15 = (undefined4 *)(iVar9 + 0x24);
    for (iVar10 = *(int *)(iVar5 + 0x70) * 0x30; iVar10 != 0; iVar10 = iVar10 + -0x30) {
      if ((*(int *)(iVar9 + 0x28) == iVar14) &&
         (iVar6 = thunk_FUN_016dd50a(*puVar15,uVar12,iVar14), iVar6 == 0)) {
        FUN_00f8edf8(&local_30,iVar5,puVar11);
        puVar11 = puVar16;
        if (local_30 == -0x80000000) goto joined_r0x00fa1bf8;
        iVar10 = local_28;
        puVar15 = local_2c;
        iVar17 = local_30;
        goto LAB_00fa1afc;
      }
      iVar9 = iVar9 + 0x30;
      puVar15 = puVar15 + 0xc;
    }
    puVar15 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    iVar10 = 1;
    iVar17 = 1;
    *puVar15 = uVar12;
    puVar15[1] = iVar14;
LAB_00fa1afc:
    puVar8 = puVar15 + iVar10 * 2;
    puVar11 = puVar16;
    puVar7 = puVar15;
  } while( true );
}

