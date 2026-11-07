// FUN_009c537c @ 009c537c size=1328 calls_out=13 calls_in=0
// strings: /sys/devices/platform/event open/utils-rs/ii-sysfs/src/sysfs.rs:65ii_sysfs::sysfsopen/utils-rs/ii-sysfs/src/sysfs.rsstruct Configuration with 1 elementstruct Acknowledgement with 1 elementstruct GenericTelemetryFrame with 2 elements | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

void FUN_009c537c(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char ***pppcVar6;
  char **ppcVar7;
  char *pcVar8;
  char ***pppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  char **ppcVar12;
  char **ppcVar13;
  char **ppcVar14;
  char ***local_188;
  char ***local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined *local_16c;
  undefined4 ***local_168;
  char **local_164;
  char ***local_160;
  undefined1 *local_15c;
  char *local_158;
  undefined4 local_154;
  char ***local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 *puStack_f4;
  undefined4 local_f0;
  char ****local_e8;
  char **local_dc;
  char ***local_d8;
  char **local_d4;
  char **local_d0;
  char **ppcStack_cc;
  char **ppcStack_c8;
  char **ppcStack_c4;
  char **ppcStack_c0;
  char **ppcStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  char ****local_a8;
  int local_a4;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *(undefined2 *)(puVar3 + 1) = 0x6e61;
  *puVar3 = 0x666d7770;
  iVar4 = thunk_FUN_016d4a50(0x16);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x16);
  }
  FUN_016dd1aa(iVar4,
               "/sys/devices/platform/event open/utils-rs/ii-sysfs/src/sysfs.rs:65ii_sysfs::sysfsopen/utils-rs/ii-sysfs/src/sysfs.rsstruct Configuration with 1 elementstruct Acknowledgement with 1 elementstruct GenericTelemetryFrame with 2 elements"
               ,0x16);
  local_f0 = 6;
  local_fc = 0;
  uStack_f8 = 6;
  local_e8 = &local_178;
  local_114 = 8;
  local_120 = 4;
  local_12c = 4;
  local_134 = 0x100;
  local_138 = 0xffffffff;
  local_178 = (char ***)0x0;
  local_154 = 0;
  local_158 = (char *)0x0;
  local_100 = 0;
  local_104 = 0x16;
  local_10c = 0x16;
  local_110 = 0;
  local_118 = 0;
  local_11c = 0;
  local_124 = 0;
  local_128 = 0;
  local_130 = 0;
  local_13c = 0;
  local_140 = 10;
  local_148 = 0;
  local_108 = iVar4;
  puStack_f4 = puVar3;
  FUN_0099d2fc(&local_d0,&local_158);
  if (local_d0 == (char **)0x80000000) {
    FUN_0099fa64(&local_158);
    local_188 = (char ***)&DAT_00000004;
    ppcVar14 = (char **)0x0;
    ppcVar7 = (char **)0x0;
    if (local_178 == (char ***)0x0) goto LAB_009c54a0;
LAB_009c579c:
    pppcVar9 = local_178;
    ppcVar10 = (char **)0x0;
    while (ppcVar10 != ppcVar14) {
      pppcVar6 = local_188 + (int)ppcVar10 * 6;
      if (*pppcVar6 != (char **)0x0) {
        thunk_FUN_016d3fb4(pppcVar6[1]);
      }
      ppcVar11 = pppcVar6[4];
      ppcVar10 = (char **)((int)ppcVar10 + 1);
      ppcVar13 = ppcVar11 + 1;
      for (ppcVar12 = pppcVar6[5]; ppcVar12 != (char **)0x0;
          ppcVar12 = (char **)((int)ppcVar12 + -1)) {
        if (ppcVar13[-1] != (char *)0x0) {
          thunk_FUN_016d3fb4(*ppcVar13);
        }
        ppcVar13 = ppcVar13 + 3;
      }
      if (pppcVar6[3] != (char **)0x0) {
        thunk_FUN_016d3fb4(ppcVar11);
      }
    }
    if (ppcVar7 != (char **)0x0) {
      thunk_FUN_016d3fb4(local_188);
    }
  }
  else {
    local_188 = (char ***)thunk_FUN_016d4a50(0x60);
    if (local_188 == (char ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x60);
    }
    ppcVar14 = (char **)0x1;
    *local_188 = local_d0;
    local_188[1] = ppcStack_cc;
    local_188[2] = ppcStack_c8;
    local_188[3] = ppcStack_c4;
    local_188[4] = ppcStack_c0;
    local_188[5] = ppcStack_bc;
    local_dc = (char **)0x4;
    local_d4 = (char **)0x1;
    local_d8 = local_188;
    FUN_016dd1aa(&local_b8,&local_158,0x78);
    iVar4 = 0x18;
    while (FUN_0099d2fc(&local_40,&local_b8), local_40 != -0x80000000) {
      if (ppcVar14 == local_dc) {
        FUN_0099b978(&local_dc,ppcVar14,1,0x18);
        local_188 = local_d8;
      }
      piVar5 = (int *)((int)local_188 + iVar4);
      ppcVar14 = (char **)((int)ppcVar14 + 1);
      iVar4 = iVar4 + 0x18;
      *piVar5 = local_40;
      piVar5[1] = iStack_3c;
      piVar5[2] = iStack_38;
      piVar5[3] = iStack_34;
      piVar5[4] = iStack_30;
      piVar5[5] = iStack_2c;
      local_d4 = ppcVar14;
    }
    FUN_0099fa64(&local_b8);
    ppcVar7 = local_dc;
    if (local_178 != (char ***)0x0) goto LAB_009c579c;
LAB_009c54a0:
    if (ppcVar7 != (char **)0x80000000) {
      if ((DAT_018d9130 < 3) && (DAT_018d97f4 != '\0')) {
        if (DAT_018d97f4 == '\x01') {
LAB_009c551c:
          DataMemoryBarrier(0xb);
          pcVar8 = s_SetGloba_00414c05;
          puVar1 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar8 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar4 = (**(code **)(puVar1 + 0x14))(pcVar8,DAT_018d97ec);
          if (iVar4 == 0) goto LAB_009c56a4;
        }
        else if (DAT_018d97f4 != '\x02') {
          cVar2 = FUN_0169ac90(&DAT_018d97ec);
          if (cVar2 == '\0') goto LAB_009c56a4;
          if (cVar2 != '\x02') goto LAB_009c551c;
        }
        local_a4 = DAT_018d97ec;
        if (*(int *)(DAT_018d97ec + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018692fc);
        }
        local_154 = *(undefined4 *)(DAT_018d97ec + 0x20);
        local_150 = *(char ****)(DAT_018d97ec + 0x24);
        local_14c = *(undefined4 *)(DAT_018d97ec + 0x28);
        local_d8 = (char ***)&local_16c;
        local_170 = (undefined4 *)(DAT_018d97ec + 0x1c);
        local_158 = (char *)*local_170;
        local_168 = &local_160;
        local_148 = 0;
        local_d4 = (char **)&DAT_018abb78;
        local_16c = &DAT_00578020;
        local_15c = &LAB_00fac484;
        local_160 = &local_164;
        local_178 = &local_dc;
        local_174 = 1;
        local_b4 = 0;
        local_b8 = 1;
        DataMemoryBarrier(0xb);
        pcVar8 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_164 = ppcVar14;
        local_dc = &local_158;
        local_a8 = &local_178;
        iVar4 = (**(code **)(puVar1 + 0x28))(pcVar8,&local_b8);
        if (iVar4 != 0) {
          (**(code **)(puVar1 + 0x2c))(pcVar8,&local_b8);
        }
      }
LAB_009c56a4:
      param_1[2] = (int)ppcVar14;
      goto LAB_009c56a8;
    }
    pppcVar9 = local_188;
  }
  local_b8 = 3;
  local_154 = 0xd;
  local_158 = 
  "No fans foundevent open/bosminer/bosminer-fan/src/hwmon.rs:79event open/bosminer/bosminer-fan/src/hwmon.rs:105"
  ;
  local_150 = pppcVar9;
  local_188 = (char ***)FUN_0099eff8(&local_158,&local_b8);
  ppcVar7 = (char **)0x80000000;
LAB_009c56a8:
  *param_1 = (int)ppcVar7;
  param_1[1] = (int)local_188;
  return;
}

