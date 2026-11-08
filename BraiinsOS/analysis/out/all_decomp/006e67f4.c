// FUN_006e67f4 @ 006e67f4 size=1924 calls_out=17 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006e67f4(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int extraout_r1;
  int extraout_r1_00;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  char *pcVar19;
  undefined4 **ppuVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined4 *local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined **local_80;
  undefined *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 **local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 **local_48;
  undefined4 *local_44;
  undefined4 **local_40;
  undefined *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  int local_2c;
  
  iVar15 = (int)param_2 + (*(int *)(param_3 + 8) - 1U & 0xfffffff8) + 8;
  uVar21 = (**(code **)(param_3 + 0x2c))(iVar15);
  iVar7 = (int)((ulonglong)uVar21 >> 0x20);
  piVar10 = (int *)uVar21;
  if (piVar10 == (int *)0xffffffff) {
    piVar18 = (int *)0x0;
  }
  else {
    iVar13 = *piVar10;
    do {
      if (iVar13 == 0) {
        piVar18 = (int *)0x0;
        goto LAB_006e68a0;
      }
      if (iVar13 < 0) {
        local_c0._4_4_ = &DAT_0157d360;
        local_c0._0_4_ = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_c0,&DAT_018ae288);
      }
      iVar12 = *piVar10;
      if (iVar12 == iVar13) {
        bVar2 = (bool)hasExclusiveAccess(piVar10);
        if (bVar2) {
          *piVar10 = iVar13 + 1;
        }
        bVar3 = false;
        if (bVar2) {
          DataMemoryBarrier(0xb);
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (!bVar3);
    piVar18 = piVar10;
LAB_006e68a0:
    piVar10 = piVar10 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar13 + -1;
    local_c4 = iVar7;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      uVar14 = *(uint *)(iVar7 + 8);
      if (uVar14 < 5) {
        uVar14 = 4;
      }
      if ((*(int *)(iVar7 + 4) + uVar14 + 7 & -uVar14) != 0) {
        thunk_FUN_016d3fb4();
      }
    }
  }
  ppuVar20 = (undefined4 **)&DAT_00000001;
  uVar6 = (**(code **)(param_3 + 0x48))(iVar15);
  FUN_010e112c(&local_c0,uVar6);
  if ((undefined *)local_c0 != (undefined *)0x1) {
    if (piVar18 == (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *param_2;
        bVar3 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar3);
      *param_2 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_2,param_3);
        return;
      }
      return;
    }
    (**(code **)(local_c4 + 0x2c))((int)piVar18 + (*(int *)(local_c4 + 8) - 1U & 0xfffffff8) + 8);
    piVar10 = (int *)(**(code **)(extraout_r1 + 0x28))();
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = *piVar10 + 1;
    uVar22 = FUN_00714ecc(*param_1 + 8);
    piVar10 = (int *)uVar22;
    if (piVar10[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0033ff53,0x1d,&DAT_01859e04);
    }
    uVar21 = (**(code **)(piVar10[5] + 0x14))(piVar10[4],param_2,param_3);
    piVar8 = (int *)uVar21;
    piVar9 = (int *)piVar10[2];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(piVar10[2],piVar10[3]);
    }
    *(undefined8 *)(piVar10 + 2) = uVar21;
    if (piVar10[6] != 0) {
      do {
        iVar7 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x6e6f88);
        (*pcVar1)();
      }
      local_c0 = FUN_0074e5c4(piVar10 + 6,piVar8,(int)((ulonglong)uVar21 >> 0x20));
      if ((int)local_c0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0033ffa8,0x21,&local_c0,&DAT_01859970,&DAT_01859df4);
      }
    }
    if ((((uVar22 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(piVar10 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar10,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(piVar18,local_c4);
      return;
    }
    return;
  }
  local_94 = local_b8;
  local_98 = local_c0._4_4_;
  if ((4 < DAT_018d9130) || (DAT_018d9224 == '\0')) goto LAB_006e6c10;
  if (DAT_018d9224 == '\x01') {
LAB_006e6994:
    DataMemoryBarrier(0xb);
    pcVar19 = s_SetGloba_00414c05;
    puVar4 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar19 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar19 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    iVar7 = (**(code **)(puVar4 + 0x14))(pcVar19,DAT_018d921c);
    if (iVar7 == 0) goto LAB_006e6c10;
  }
  else if (DAT_018d9224 != '\x02') {
    cVar5 = FUN_0169ac90(&DAT_018d921c);
    if (cVar5 == '\0') goto LAB_006e6c10;
    if (cVar5 != '\x02') goto LAB_006e6994;
  }
  if (*(int *)(DAT_018d921c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859038);
  }
  puVar16 = (undefined4 *)(DAT_018d921c + 0x1c);
  uStack_78 = *puVar16;
  uStack_74 = *(undefined4 *)(DAT_018d921c + 0x20);
  uStack_70 = *(undefined4 *)(DAT_018d921c + 0x24);
  uStack_6c = *(undefined4 *)(DAT_018d921c + 0x28);
  local_68 = 0;
  if (piVar18 == (int *)0x0) {
    puVar17 = (undefined4 *)&DAT_80000000;
  }
  else {
    local_48 = (undefined4 **)0x0;
    local_50 = (undefined4 *)0x0;
    local_34 = 0;
    local_4c = (undefined4 *)&DAT_00000001;
    local_38 = &DAT_60000020;
    local_40 = &local_50;
    local_3c = &DAT_01858e88;
    iVar7 = (**(code **)(local_c4 + 0x18))
                      ((int)piVar18 + (*(int *)(local_c4 + 8) - 1U & 0xfffffff8) + 8,&local_40);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_5c,
                   &DAT_01858ea0,&DAT_018af130);
    }
    local_c8 = local_4c;
    puVar17 = local_50;
    ppuVar20 = local_48;
  }
  puVar11 = (undefined4 *)thunk_FUN_016d4a50(1);
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1);
  }
  *(undefined1 *)puVar11 = 0x3f;
  if (puVar17 == (undefined4 *)&DAT_80000000) {
    local_54 = (undefined4 **)&DAT_00000001;
    local_5c = (undefined4 *)&DAT_00000001;
    local_58 = puVar11;
  }
  else {
    local_58 = local_c8;
    local_5c = puVar17;
    local_54 = ppuVar20;
    thunk_FUN_016d3fb4(puVar11);
  }
  local_60 = &local_50;
  local_80 = &local_64;
  local_84 = &uStack_78;
  local_90 = &local_84;
  local_48 = &local_5c;
  local_50 = &local_98;
  local_44 = &DAT_006043a8;
  local_4c = &DAT_0157d360;
  local_8c = 1;
  local_64 = &DAT_00590442;
  local_2c = DAT_018d921c;
  local_30 = &local_90;
  local_7c = &DAT_018abb78;
  local_3c = (undefined *)0x0;
  local_40 = (undefined4 **)&DAT_00000001;
  DataMemoryBarrier(0xb);
  pcVar19 = s_SetGloba_00414c05;
  puVar4 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar19 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar19 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_88 = puVar16;
  iVar7 = (**(code **)(puVar4 + 0x28))(pcVar19,&local_40);
  if (iVar7 != 0) {
    (**(code **)(puVar4 + 0x2c))(pcVar19,&local_40);
  }
  if (local_5c != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(local_58);
  }
LAB_006e6c10:
  if (piVar18 != (int *)0x0) {
    (**(code **)(local_c4 + 0x2c))((int)piVar18 + (*(int *)(local_c4 + 8) - 1U & 0xfffffff8) + 8);
    piVar10 = (int *)(**(code **)(extraout_r1_00 + 0x2c))();
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = *piVar10 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(piVar18,local_c4);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_2,param_3);
    return;
  }
  return;
}

