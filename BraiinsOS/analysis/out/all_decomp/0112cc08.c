// FUN_0112cc08 @ 0112cc08 size=1600 calls_out=17 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | version-rolling.mask | version-rollinghandle_set_version_maskhandle_setup_connectionhandle_subscribe_result | Cannot negotiate upstream V1 version maskBUG: incorrect error message

void FUN_0112cc08(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  int iVar16;
  uint *puVar17;
  char *pcVar18;
  int local_cc;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined1 uStack_25;
  
  if ((DAT_018d9130 < 3) || (bVar2 = false, DAT_018dd947 == '\0')) {
    if ((DAT_018d9130 < 3) && (DAT_018da790 != '\0')) {
      if (DAT_018da790 == '\x01') {
LAB_0112cc94:
        DataMemoryBarrier(0xb);
        puVar15 = &DAT_018ae394;
        pcVar18 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar18 = DAT_018daa74;
          puVar15 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar18 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar6 = (**(code **)(puVar15 + 0x14))(pcVar18,DAT_018da788);
        if (iVar6 == 0) goto LAB_0112cd28;
      }
      else if (DAT_018da790 != '\x02') {
        cVar5 = FUN_0169ac90(&DAT_018da788);
        if (cVar5 == '\0') goto LAB_0112cd28;
        if (cVar5 != '\x02') goto LAB_0112cc94;
      }
      local_78 = DAT_018da788 + 0x1c;
      local_7c = 0;
      local_80 = 4;
      FUN_016948f0(&local_a0,DAT_018da788,&local_80);
    }
    else {
LAB_0112cd28:
      local_68 = DAT_018da788;
      local_78 = 2;
      if (DAT_018dd947 == '\0') {
        local_98 = DAT_018da788 + 0x1c;
        local_a0._4_4_ = 0;
        local_a0._0_4_ = 4;
        FUN_01694880(&local_80,&local_a0);
      }
      local_a0._0_4_ = local_80;
      local_a0._4_4_ = local_7c;
      local_98 = local_78;
      uStack_94 = local_74;
      local_90 = local_70;
      uStack_8c = uStack_6c;
      iStack_88 = local_68;
      uStack_84 = uStack_64;
    }
    local_c0 = (uint)local_a0;
    uStack_bc = local_a0._4_4_;
    local_b8 = local_98;
    local_b4 = uStack_94;
    local_b0 = local_90;
    uStack_ac = uStack_8c;
    iStack_a8 = iStack_88;
    uStack_a4 = uStack_84;
    if (local_98 != 2) {
      uVar7 = uStack_94;
      if ((local_98 & 1) != 0) {
        uVar7 = uStack_94 + (*(int *)(local_90 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_90 + 0x30))(uVar7,&local_c0);
    }
    bVar2 = true;
  }
  puVar9 = (uint *)0x0;
  cVar5 = *param_4;
  if ((cVar5 == '\x05') && (iVar6 = *(int *)(param_4 + 4), iVar6 != 0)) {
    iVar16 = *(int *)(param_4 + 8);
    do {
      uVar1 = *(ushort *)(iVar6 + 0x192);
      iVar12 = iVar6 + 0x10c;
      uVar7 = 0xffffffff;
      iVar14 = (uint)uVar1 * 0xc;
      do {
        if (iVar14 == 0) {
          uVar7 = (uint)uVar1;
          goto LAB_0112cea0;
        }
        uVar13 = *(uint *)(iVar12 + 8);
        uVar10 = uVar13;
        if (0x13 < uVar13) {
          uVar10 = 0x14;
        }
        iVar8 = FUN_016dd50a("version-rolling.mask",*(undefined4 *)(iVar12 + 4),uVar10);
        if (iVar8 == 0) {
          iVar8 = 0x14 - uVar13;
        }
        iVar14 = iVar14 + -0xc;
        uVar7 = uVar7 + 1;
        iVar12 = iVar12 + 0xc;
      } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
      if (0 < iVar8 == iVar8 < 0) {
        puVar9 = (uint *)(iVar6 + uVar7 * 0x18);
        break;
      }
LAB_0112cea0:
      if (iVar16 == 0) goto LAB_0112d2f8;
      iVar16 = iVar16 + -1;
      iVar6 = *(int *)(iVar6 + uVar7 * 4 + 0x198);
    } while( true );
  }
LAB_0112ced4:
  uVar11 = 0;
  if (puVar9 == (uint *)0x0) {
    puVar9 = (uint *)&DAT_0040e9a0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)*puVar9) {
  case '\0':
    break;
  default:
    local_80 = *puVar9;
    local_7c = puVar9[1];
    local_78 = puVar9[2];
    local_74 = puVar9[3];
    local_70 = puVar9[4];
    uStack_6c = puVar9[5];
    uVar7 = local_7c;
    uVar4 = local_74;
    uVar13 = local_78;
    uVar10 = (uint)local_a0;
    uVar3 = local_98;
    if ((char)local_80 == '\x03') goto joined_r0x0112cfd8;
    goto LAB_0112d278;
  case '\x03':
    uVar10 = puVar9[2];
    uVar7 = puVar9[3];
    if (uVar7 == 0) {
      uVar13 = 1;
    }
    else {
      uVar13 = thunk_FUN_016d4a50(uVar7);
      if (uVar13 == 0) goto LAB_0112d318;
    }
    FUN_016dd1aa(uVar13,uVar10,uVar7);
    local_80 = CONCAT31(local_80._1_3_,3);
    uVar4 = uVar7;
    uVar10 = (uint)local_a0;
    uVar3 = local_98;
joined_r0x0112cfd8:
    local_98 = uVar4;
    local_a0._0_4_ = uVar7;
    local_7c = (uint)local_a0;
    local_78 = uVar13;
    local_74 = local_98;
    if ((uint)local_a0 != 0x80000000) {
      local_a0._4_4_ = uVar13;
      iVar6 = FUN_0111e16c(&local_a0);
      puVar9 = (uint *)0x0;
      if ((cVar5 == '\x05') && (iVar16 = *(int *)(param_4 + 4), iVar16 != 0)) {
        local_cc = *(int *)(param_4 + 8);
        do {
          uVar1 = *(ushort *)(iVar16 + 0x192);
          iVar12 = iVar16 + 0x10c;
          uVar7 = 0xffffffff;
          iVar14 = (uint)uVar1 * 0xc;
          do {
            if (iVar14 == 0) {
              uVar7 = (uint)uVar1;
              goto LAB_0112d0c8;
            }
            uVar13 = *(uint *)(iVar12 + 8);
            uVar10 = uVar13;
            if (0xe < uVar13) {
              uVar10 = 0xf;
            }
            iVar8 = FUN_016dd50a("version-rollinghandle_set_version_maskhandle_setup_connectionhandle_subscribe_result"
                                 ,*(undefined4 *)(iVar12 + 4),uVar10);
            if (iVar8 == 0) {
              iVar8 = 0xf - uVar13;
            }
            iVar14 = iVar14 + -0xc;
            uVar7 = uVar7 + 1;
            iVar12 = iVar12 + 0xc;
          } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
          if (0 < iVar8 == iVar8 < 0) {
            puVar9 = (uint *)(iVar16 + uVar7 * 0x18);
            break;
          }
LAB_0112d0c8:
          if (local_cc == 0) goto LAB_0112d300;
          local_cc = local_cc + -1;
          iVar16 = *(int *)(iVar16 + uVar7 * 4 + 0x198);
        } while( true );
      }
LAB_0112d0f8:
      puVar17 = (uint *)&DAT_0040e9a0;
      if (puVar9 != (uint *)0x0) {
        puVar17 = puVar9;
      }
      if ((((char)*puVar17 == '\x01') && (iVar6 == 0x1fffe000)) && ((*puVar17 & 0x100) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0112d134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0112d138 + *(int *)(&DAT_0112d138 + *(int *)(param_2 + 0x28) * 4)))();
        return;
      }
      uVar7 = 0x29;
      uVar10 = thunk_FUN_016d4a50(0x29);
      if (uVar10 == 0) {
LAB_0112d318:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar7);
      }
      local_80 = 0x29;
      local_7c = uVar10;
      FUN_016dd1aa(uVar10,"Cannot negotiate upstream V1 version maskBUG: incorrect error message",
                   0x29);
      local_78 = 0x29;
      local_a0 = FUN_01139000(&local_80);
      local_98 = 0;
      FUN_0112c7fc(param_1,param_2,&local_a0);
      goto joined_r0x0112d258;
    }
    goto LAB_0112d290;
  case '\x04':
    uVar11 = 4;
    FUN_01139154((uint)&local_80 | 4,puVar9 + 1);
    break;
  case '\x05':
    if (puVar9[3] == 0) {
      uVar11 = 5;
      local_74 = 0;
      local_7c = 0;
    }
    else {
      if (puVar9[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      uVar11 = 5;
      FUN_0113a3a4((uint)&local_80 | 4,puVar9[1],puVar9[2]);
    }
  }
  local_80 = CONCAT31(local_80._1_3_,uVar11);
LAB_0112d278:
  uVar13 = FUN_011396dc(&local_80,&uStack_25);
  FUN_01139718(&local_80);
  uVar10 = (uint)local_a0;
  uVar3 = local_98;
LAB_0112d290:
  local_98 = uVar3;
  local_a0._0_4_ = uVar10;
  *param_1 = 9;
  param_1[1] = uVar13;
joined_r0x0112d258:
  if (bVar2) {
    if (local_b8 != 2) {
      uVar7 = local_b4;
      if ((local_b8 & 1) != 0) {
        uVar7 = local_b4 + (*(int *)(local_b0 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_b0 + 0x34))(uVar7,&local_c0);
    }
    FUN_005c3320(&local_c0);
    return;
  }
  return;
LAB_0112d2f8:
  puVar9 = (uint *)0x0;
  goto LAB_0112ced4;
LAB_0112d300:
  puVar9 = (uint *)0x0;
  goto LAB_0112d0f8;
}

