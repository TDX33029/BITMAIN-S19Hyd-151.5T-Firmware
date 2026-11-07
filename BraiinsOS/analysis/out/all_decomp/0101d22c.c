// FUN_0101d22c @ 0101d22c size=1372 calls_out=5 calls_in=8
// strings: 

void FUN_0101d22c(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int **ppiVar13;
  undefined4 ****ppppuVar14;
  int iVar15;
  bool bVar16;
  int ****local_94;
  undefined4 ****local_88;
  int **local_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int ***local_68;
  int **local_64;
  uint local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  int ****local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 ****local_3c;
  int **local_38;
  undefined *local_34;
  int *local_30;
  undefined4 ****local_2c;
  int **local_28;
  
  iVar15 = *param_2;
  ppppuVar14 = (undefined4 ****)param_2[1];
  ppiVar13 = (int **)param_2[2];
  local_88 = ppppuVar14;
  local_84 = ppiVar13;
  if (((*(undefined4 *****)(iVar15 + 0x38) <= ppppuVar14) ||
      (piVar3 = (int *)(*(int *)(iVar15 + 0x34) + (int)ppppuVar14 * 0xf8),
      *piVar3 == 3 && piVar3[1] == 0)) || (piVar2 = piVar3 + 0x35, (int **)*piVar2 != ppiVar13)) {
    local_68 = &local_84;
    local_64 = (int **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_68,&DAT_01882550);
  }
  local_50 = DAT_018d80a0;
  local_60 = 2;
  uVar11 = piVar3[0xf] & ~(piVar3[0xf] >> 0x1f);
  uVar12 = piVar3[0x37] - uVar11;
  uVar11 = (piVar3[0xe] & ~(piVar3[0xe] >> 0x1f)) - uVar11;
  if (uVar11 < uVar12) {
    uVar12 = uVar11;
  }
  if (DAT_018dd947 == '\0') {
    if (*(int *)(DAT_018d80a0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01882754);
    }
    local_40 = (undefined4 *)(DAT_018d80a0 + 0x1c);
    local_78 = 0;
    local_88 = (undefined4 ****)*local_40;
    local_84 = *(int ***)(DAT_018d80a0 + 0x20);
    local_80 = *(undefined4 *)(DAT_018d80a0 + 0x24);
    local_7c = *(undefined4 *)(DAT_018d80a0 + 0x28);
    local_2c = ppppuVar14;
    local_28 = ppiVar13;
    if ((*piVar3 == 3 && piVar3[1] == 0) || ((int **)*piVar2 != ppiVar13)) {
      local_3c = (undefined4 ****)&local_28;
      local_38 = (int **)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00599806,&local_3c,&DAT_01882550);
    }
    local_38 = &local_30;
    local_48 = (int ****)&local_3c;
    local_44 = 1;
    local_34 = &DAT_01882fc4;
    local_3c = &local_88;
    local_30 = piVar2;
    FUN_01694880(&local_68,&local_48);
  }
  local_88 = (undefined4 ****)local_68;
  local_84 = local_64;
  local_80 = local_60;
  local_7c = iStack_5c;
  local_78 = iStack_58;
  uStack_74 = uStack_54;
  iStack_70 = local_50;
  uStack_6c = uStack_4c;
  if (local_60 != 2) {
    if ((local_60 & 1) != 0) {
      iStack_5c = iStack_5c + (*(int *)(iStack_58 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iStack_58 + 0x30))(iStack_5c,&local_88);
  }
  if (uVar12 == 0) goto LAB_0101d660;
  uVar11 = *(uint *)(param_1 + 0x4c);
  local_3c = ppppuVar14;
  local_38 = ppiVar13;
  if ((int)uVar11 < 1) {
LAB_0101d4ec:
    if (((ppppuVar14 < *(undefined4 *****)(iVar15 + 0x38)) &&
        (piVar3 = (int *)(*(int *)(iVar15 + 0x34) + (int)ppppuVar14 * 0xf8),
        *piVar3 != 3 || piVar3[1] != 0)) && ((int **)piVar3[0x35] == ppiVar13)) {
      uVar12 = piVar3[0xf];
      if ((((int)uVar12 < 0) || (uVar12 < (uint)piVar3[0x37])) &&
         ((-1 < piVar3[0xe] &&
          (((int)uVar12 < piVar3[0xe] && (*(char *)((int)piVar3 + 0xea) == '\0')))))) {
        iVar6 = *(int *)(param_1 + 0x14);
        *(undefined1 *)((int)piVar3 + 0xea) = 1;
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x14) = 1;
          *(undefined4 *****)(param_1 + 0x18) = ppppuVar14;
          *(int ***)(param_1 + 0x1c) = ppiVar13;
          *(undefined4 *****)(param_1 + 0x20) = ppppuVar14;
          *(int ***)(param_1 + 0x24) = ppiVar13;
        }
        else {
          local_3c = *(undefined4 *****)(param_1 + 0x20);
          local_38 = *(int ***)(param_1 + 0x24);
          if (((*(undefined4 *****)(iVar15 + 0x38) <= local_3c) ||
              (piVar3 = (int *)(*(int *)(iVar15 + 0x34) + (int)local_3c * 0xf8),
              *piVar3 == 3 && piVar3[1] == 0)) || ((int **)piVar3[0x35] != local_38))
          goto LAB_0101d72c;
          *(undefined4 *****)(param_1 + 0x20) = ppppuVar14;
          piVar3[0x1e] = 1;
          piVar3[0x1f] = (int)ppppuVar14;
          piVar3[0x20] = (int)ppiVar13;
          *(int ***)(param_1 + 0x24) = ppiVar13;
        }
      }
      if (((ppppuVar14 < *(undefined4 *****)(iVar15 + 0x38)) &&
          (piVar3 = (int *)(*(int *)(iVar15 + 0x34) + (int)ppppuVar14 * 0xf8),
          *piVar3 != 3 || piVar3[1] != 0)) && ((int **)piVar3[0x35] == ppiVar13)) {
        local_3c = ppppuVar14;
        local_38 = ppiVar13;
        if (piVar3[0x38] != 0) {
          cVar1 = (char)piVar3[0x3b];
          bVar16 = cVar1 == '\0';
          if (bVar16) {
            cVar1 = *(char *)((int)piVar3 + 0xed);
          }
          if (bVar16 && cVar1 == '\0') {
            FUN_014298a0(param_1,param_2);
          }
        }
LAB_0101d660:
        if (local_80 != 2) {
          iVar15 = local_7c;
          if ((local_80 & 1) != 0) {
            iVar15 = local_7c + (*(int *)(local_78 + 8) - 1U & 0xfffffff8) + 8;
          }
          (**(code **)(local_78 + 0x34))(iVar15,&local_88);
        }
        FUN_005c3320(&local_88);
        return;
      }
    }
    puVar7 = &DAT_01882550;
    local_3c = ppppuVar14;
    local_38 = ppiVar13;
  }
  else {
    if (uVar11 <= uVar12) {
      uVar12 = uVar11;
    }
    if (((ppppuVar14 < *(undefined4 *****)(iVar15 + 0x38)) &&
        (piVar3 = (int *)(*(int *)(iVar15 + 0x34) + (int)ppppuVar14 * 0xf8),
        *piVar3 != 3 || piVar3[1] != 0)) && ((int **)piVar3[0x35] == ppiVar13)) {
      uVar10 = piVar3[0xf];
      uVar5 = *(uint *)(param_1 + 0x54);
      uVar4 = piVar3[0x38];
      uVar8 = uVar10 & ~((int)uVar10 >> 0x1f);
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      uVar9 = uVar8 - uVar4;
      if (uVar8 < uVar4) {
        uVar9 = 0;
      }
      uVar8 = uVar10 + uVar12;
      if (!SCARRY4(uVar10,uVar12)) {
        uVar10 = uVar8 & ~((int)uVar8 >> 0x1f);
        piVar3[0xf] = uVar8;
        if (uVar5 < uVar10) {
          uVar10 = uVar5;
        }
        uVar8 = 0;
        if (uVar4 <= uVar10) {
          uVar8 = uVar10 - uVar4;
        }
        if (uVar9 < uVar8) {
          *(undefined1 *)((int)piVar3 + 0xeb) = 1;
          iVar6 = piVar3[0x10];
          piVar3[0x10] = 0;
          if (iVar6 != 0) {
            (**(code **)(iVar6 + 4))(piVar3[0x11]);
          }
        }
      }
      *(uint *)(param_1 + 0x4c) = uVar11 - uVar12;
      goto LAB_0101d4ec;
    }
LAB_0101d72c:
    puVar7 = &DAT_01882560;
  }
  local_94 = &local_68;
  local_68 = &local_38;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,local_94,puVar7);
}

