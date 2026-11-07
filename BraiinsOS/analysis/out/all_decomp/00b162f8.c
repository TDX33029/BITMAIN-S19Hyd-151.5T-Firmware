// FUN_00b162f8 @ 00b162f8 size=2584 calls_out=17 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

int FUN_00b162f8(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 ******ppppppuVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  undefined4 ******ppppppuVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 *******pppppppuVar13;
  undefined *puVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined4 *******local_138;
  undefined4 *******local_134;
  undefined4 ******local_130;
  undefined4 *******local_12c;
  int *****local_128;
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 ******local_d8;
  undefined4 *******local_d4;
  int iStack_d0;
  int *******local_c8;
  int local_c4;
  int *local_98;
  int ******local_94 [4];
  undefined4 *******local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  int *******local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 *******local_6c;
  int *******local_68;
  undefined4 *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 *******local_54;
  int *******local_50;
  undefined4 *local_4c;
  undefined4 ******local_48;
  undefined4 *local_44;
  int *******local_40;
  int *******local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *******local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x95)) {
  case 0:
    iVar12 = param_1[0x24];
    *param_1 = param_1[0x20];
    param_1[1] = param_1[0x21];
    ppppppuVar4 = (undefined4 ******)(param_1 + 0x23);
    *ppppppuVar4 = (undefined4 *****)param_1[0x22];
    if ((DAT_018d9130 < 4) && (DAT_018d9e30 != '\0')) {
      if (DAT_018d9e30 == '\x01') {
LAB_00b16398:
        DataMemoryBarrier(0xb);
        puVar14 = &DAT_018ae394;
        pcVar15 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar15 = DAT_018daa74, puVar14 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (**(code **)(puVar14 + 0x14))(pcVar15,DAT_018d9e28);
        if (iVar5 == 0) goto LAB_00b16590;
      }
      else if (DAT_018d9e30 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d9e28);
        if (cVar3 == '\0') goto LAB_00b16590;
        if (cVar3 != '\x02') goto LAB_00b16398;
      }
      local_c4 = DAT_018d9e28;
      local_124 = *(int *)(DAT_018d9e28 + 0x20);
      if (local_124 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f550);
      }
      local_120 = *(undefined4 *)(DAT_018d9e28 + 0x24);
      local_11c = *(undefined4 *)(DAT_018d9e28 + 0x28);
      local_6c = (undefined4 *******)&local_128;
      local_48 = (undefined4 ******)(DAT_018d9e28 + 0x1c);
      local_128 = *local_48;
      local_68 = (int *******)&local_138;
      local_134 = &local_40;
      local_50 = (int *******)&local_6c;
      local_118 = 0;
      local_64 = (undefined4 *)&DAT_018abb78;
      local_4c = (undefined4 *)0x1;
      local_138 = (undefined4 *******)&DAT_005744c5;
      local_34 = &DAT_0157d360;
      local_d4 = (undefined4 *******)0x0;
      local_c8 = (int *******)&local_50;
      local_3c = (int *******)&DAT_00f5c97c;
      local_d8 = (undefined4 ******)0x1;
      DataMemoryBarrier(0xb);
      pcVar15 = s_SetGloba_00414c05;
      puVar14 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar14 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_40 = (int *******)ppppppuVar4;
      local_38 = param_1;
      iVar5 = (**(code **)(puVar14 + 0x28))(pcVar15,&local_d8);
      if (iVar5 != 0) {
        (**(code **)(puVar14 + 0x2c))(pcVar15,&local_d8);
      }
    }
LAB_00b16590:
    local_128 = *ppppppuVar4;
    iVar5 = *(int *)(iVar12 + 0x2e8) * 0x50;
    piVar7 = (int *)(*(int *)(iVar12 + 0x2e4) + 0x40);
    do {
      piVar6 = piVar7;
      if (iVar5 == 0) {
        local_d8 = &local_128;
        local_d4 = (undefined4 *******)&DAT_00f5c97c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0056f056,&local_d8,&DAT_01874410);
      }
      iVar5 = iVar5 + -0x50;
      piVar7 = piVar6 + 0x14;
    } while (*(undefined4 ******)(*piVar6 + 0x38c) != local_128);
    *(undefined1 *)(piVar6 + 2) = 1;
    bVar1 = *(byte *)(*(int *)(iVar12 + 0x204) + 0xd8);
    cVar3 = *(char *)(*(int *)(iVar12 + 0x2ec) + 0xe4);
    *(undefined1 *)(param_1 + 0x25) = 0;
    if ((cVar3 == '\0') && ((bVar1 & 1) != 0)) {
      uVar16 = FUN_007143c8();
      piVar7 = (int *)uVar16;
      cVar3 = *(char *)((int)piVar7 + 0x53);
      if (((uVar16 & 0x100000000) == 0) &&
         (((DAT_018dd988 & 0x7fffffff) != 0 && (iVar5 = FUN_015bf3f8(), iVar5 == 0)))) {
        *(undefined1 *)(piVar7 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar7,0x81,1);
      }
      if (cVar3 == '\0') {
        FUN_00ce0644(&local_d8,*(undefined4 *)(iVar12 + 0x2e4),*(undefined4 *)(iVar12 + 0x2e8));
        local_130 = local_d8;
        local_134 = local_d4;
        pppppppuVar9 = local_d4 + iStack_d0 * 0x14;
        local_138 = local_d4;
        local_12c = pppppppuVar9;
        if (iStack_d0 != 0) {
          pppppppuVar8 = local_d4;
          do {
            pppppppuVar13 = pppppppuVar8 + 0x14;
            ppppppuVar10 = *pppppppuVar8;
            local_134 = pppppppuVar13;
            FUN_016dd1aa(&local_128,pppppppuVar8 + 1,0x4c);
            if (ppppppuVar10 == (undefined4 ******)0x2) break;
            local_d8 = ppppppuVar10;
            FUN_016dd1aa((uint)&local_d8 | 4,&local_128,0x4c);
            if (local_94[0] != (int ******)*ppppppuVar4) {
              if ((DAT_018d9130 < 3) && (DAT_018d9e3c != '\0')) {
                if (DAT_018d9e3c == '\x01') {
LAB_00b16754:
                  DataMemoryBarrier(0xb);
                  puVar14 = DAT_018daa78;
                  if (DAT_018dd984 != 2) {
                    puVar14 = &DAT_018ae394;
                  }
                  pcVar15 = s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, DAT_018daa70 != 0)) {
                    pcVar15 = DAT_018daa74 + (*(int *)(puVar14 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  iVar5 = (**(code **)(puVar14 + 0x14))(pcVar15,DAT_018d9e34);
                  if (iVar5 == 0) goto LAB_00b1691c;
                }
                else if (DAT_018d9e3c != '\x02') {
                  cVar3 = FUN_0169ac90(&DAT_018d9e34);
                  if (cVar3 == '\0') goto LAB_00b1691c;
                  if (cVar3 != '\x02') goto LAB_00b16754;
                }
                if (*(int ********)(DAT_018d9e34 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f560);
                }
                local_74 = &local_58;
                local_78 = (int *******)&local_6c;
                local_84 = &local_78;
                local_64 = *(undefined4 **)(DAT_018d9e34 + 0x24);
                uStack_60 = *(undefined4 *)(DAT_018d9e34 + 0x28);
                local_7c = (undefined4 *)(DAT_018d9e34 + 0x1c);
                local_6c = (undefined4 *******)*local_7c;
                uStack_5c = 0;
                local_80 = 1;
                local_70 = &DAT_018abb78;
                local_54 = &local_50;
                local_58 = &DAT_00574a86;
                local_30 = (int *******)&local_84;
                local_44 = &DAT_00f5c97c;
                local_4c = &DAT_00f5c97c;
                local_3c = (int *******)0x0;
                local_40 = (int *******)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar15 = s_SetGloba_00414c05;
                puVar14 = &DAT_018ae394;
                if ((DAT_018dd984 == 2) &&
                   (pcVar15 = DAT_018daa74, puVar14 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                local_68 = *(int ********)(DAT_018d9e34 + 0x20);
                local_50 = local_94;
                local_48 = ppppppuVar4;
                local_2c = DAT_018d9e34;
                iVar5 = (**(code **)(puVar14 + 0x28))(pcVar15,&local_40);
                if (iVar5 != 0) {
                  (**(code **)(puVar14 + 0x2c))(pcVar15,&local_40);
                }
              }
LAB_00b1691c:
              local_6c = (undefined4 *******)local_94[0];
              iVar5 = *(int *)(iVar12 + 0x2e8) * 0x50;
              piVar7 = (int *)(*(int *)(iVar12 + 0x2e4) + 0x40);
              do {
                piVar6 = piVar7;
                if (iVar5 == 0) {
                  local_40 = (int *******)&local_6c;
                  local_3c = (int *******)&DAT_00f5c97c;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_0056f056,&local_40,&DAT_01874410);
                }
                iVar5 = iVar5 + -0x50;
                piVar7 = piVar6 + 0x14;
              } while (*(int *******)(*piVar6 + 0x38c) != local_94[0]);
              *(undefined1 *)(piVar6 + 2) = 1;
              *(undefined1 *)(param_1 + 0x25) = 1;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *local_98;
              bVar2 = (bool)hasExclusiveAccess(local_98);
            } while (!bVar2);
            *local_98 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f31e8(local_98);
            }
            pppppppuVar8 = pppppppuVar13;
          } while (pppppppuVar13 != pppppppuVar9);
        }
        FUN_00ccd62c(&local_138);
      }
    }
    iVar12 = *(int *)(iVar12 + 0x2ec);
    *(undefined1 *)(param_1 + 0x1f) = 0;
    iVar12 = iVar12 + 8;
    param_1[2] = iVar12;
LAB_00b169b8:
    param_1[0x1d] = iVar12;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f570);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f570);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1f)) {
    case 0:
      iVar12 = param_1[2];
      goto LAB_00b169b8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871670);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871670);
    }
  }
  iVar12 = FUN_00aefa78(param_1 + 3,param_2);
  if (iVar12 != 0) {
    uVar11 = 3;
    *(undefined1 *)(param_1 + 0x1f) = 3;
LAB_00b169e8:
    *(undefined1 *)((int)param_1 + 0x95) = uVar11;
    return iVar12;
  }
  if (*(char *)((int)param_1 + 0x79) == '\x03') {
    FUN_00accc50(param_1 + 3);
  }
  uVar11 = 1;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if (*(char *)(param_1 + 0x25) != '\x01') goto LAB_00b169e8;
  if ((DAT_018d9130 < 5) && (DAT_018d9e48 != '\0')) {
    if (DAT_018d9e48 != '\x01') {
      if (DAT_018d9e48 == '\x02') goto LAB_00b16ae4;
      cVar3 = FUN_0169ac90(&DAT_018d9e40);
      if (cVar3 == '\0') goto LAB_00b16c04;
      if (cVar3 == '\x02') goto LAB_00b16ae4;
    }
    DataMemoryBarrier(0xb);
    pcVar15 = s_SetGloba_00414c05;
    puVar14 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar14 = DAT_018daa78, DAT_018daa70 != 0))
    {
      pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar12 = (**(code **)(puVar14 + 0x14))(pcVar15,DAT_018d9e40);
    if (iVar12 != 0) {
LAB_00b16ae4:
      if (*(int *)(DAT_018d9e40 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f580);
      }
      local_64 = (undefined4 *)(DAT_018d9e40 + 0x1c);
      local_128 = (int *****)*local_64;
      local_3c = (int *******)&local_138;
      local_40 = (int *******)&local_128;
      local_120 = *(undefined4 *)(DAT_018d9e40 + 0x24);
      local_11c = *(undefined4 *)(DAT_018d9e40 + 0x28);
      local_6c = &local_40;
      local_118 = 0;
      local_68 = (int *******)0x1;
      local_38 = (undefined4 *)&DAT_018abb78;
      local_134 = &local_50;
      local_138 = (undefined4 *******)&DAT_00583828;
      local_d8 = (undefined4 ******)0x1;
      local_c8 = (int *******)&local_6c;
      local_4c = &DAT_00f5c97c;
      local_50 = (int *******)(param_1 + 0x23);
      local_d4 = (undefined4 *******)0x0;
      DataMemoryBarrier(0xb);
      pcVar15 = s_SetGloba_00414c05;
      puVar14 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, puVar14 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_124 = *(int *)(DAT_018d9e40 + 0x20);
      local_c4 = DAT_018d9e40;
      iVar12 = (**(code **)(puVar14 + 0x28))(pcVar15,&local_d8);
      if (iVar12 != 0) {
        (**(code **)(puVar14 + 0x2c))(pcVar15,&local_d8);
      }
      *(undefined1 *)((int)param_1 + 0x95) = 1;
      return 0;
    }
  }
LAB_00b16c04:
  *(undefined1 *)((int)param_1 + 0x95) = 1;
  return 0;
}

