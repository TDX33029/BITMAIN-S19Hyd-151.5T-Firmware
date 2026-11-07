// FUN_00635070 @ 00635070 size=3176 calls_out=29 calls_in=0
// strings: packages | assertion failed: !self.only_contains_attribute_certs | a UUID string | description | assertion failed: !self.only_contains_attribute_certs | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00635c4c) */
/* WARNING: Removing unreachable block (ram,0x00635c78) */

void FUN_00635070(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  bool bVar16;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  undefined1 *local_2c4;
  undefined1 auStack_2c0 [136];
  undefined4 local_238;
  undefined4 local_234;
  int local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_190;
  uint local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint local_180;
  int **ppiStack_17c;
  undefined4 uStack_178;
  uint local_f0;
  int **ppiStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d0 [4];
  uint local_c0;
  int **ppiStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [80];
  undefined4 local_60;
  int iStack_5c;
  int iStack_58;
  int *local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_40;
  int **local_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    *(undefined1 *)(param_2 + 0x95) = 1;
    FUN_01bed4e2(auStack_2c0,param_2,0x88);
    local_238 = *(undefined4 *)(param_2 + 0x88);
    local_234 = *(undefined4 *)(param_2 + 0x8c);
    FUN_005d00c0(&local_190,auStack_2c0,param_2 + 0x90);
    FUN_01bed4e2(&local_230,&local_190,0xa0);
    FUN_01bed4e2(param_2 + 0x98,&local_230,0xa0);
  case 3:
    iVar3 = FUN_005d012c(param_2 + 0x98);
    if (*(char *)(param_2 + 0x130) == '\x03' || *(char *)(param_2 + 0x130) == '\0') {
      FUN_0096a6b0(param_2 + 0x98);
    }
    *(undefined1 *)(param_2 + 0xc4) = 0;
    *(int *)(param_2 + 0x98) = iVar3;
    *(undefined1 *)(param_2 + 0x95) = 0;
LAB_00635170:
    *(int *)(param_2 + 0x9c) = iVar3;
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0xc) + 8;
    *(int *)(param_2 + 0xa0) = iVar3;
    *(undefined1 *)(param_2 + 0xc0) = 0;
LAB_0063519c:
    piVar14 = *(int **)(*(int *)(iVar3 + 0xc) + 0x24);
    do {
      iVar3 = *piVar14;
      bVar16 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar16);
    *piVar14 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x635d38);
      (*pcVar1)();
    }
    *(int **)(param_2 + 0xa4) = piVar14;
    iVar3 = FUN_010955a4();
    piVar14 = piVar14 + 2;
    *(int **)(param_2 + 0xa8) = piVar14;
    puVar10 = &DAT_01c1deac;
    *(int *)(param_2 + 0xac) = iVar3;
    *(undefined **)(param_2 + 0xb0) = &DAT_01c1deac;
    *(undefined1 *)(param_2 + 0xbc) = 0;
LAB_006351fc:
    piVar4 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar8 = &DAT_01c0d440;
    *(undefined1 *)(piVar4 + 3) = 0;
    *piVar4 = (int)(piVar14 + 0x20);
    piVar4[1] = iVar3;
    piVar4[2] = (int)puVar10;
    *(int **)(param_2 + 0xb4) = piVar4;
    *(undefined **)(param_2 + 0xb8) = &DAT_01c0d440;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22510);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xc4)) {
    case 0:
      iVar3 = *(int *)(param_2 + 0x98);
      goto LAB_00635170;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c029c8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c029c8);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xc0)) {
    case 0:
      iVar3 = *(int *)(param_2 + 0xa0);
      goto LAB_0063519c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c027c8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c027c8);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xbc)) {
    case 0:
      piVar14 = *(int **)(param_2 + 0xa8);
      iVar3 = *(int *)(param_2 + 0xac);
      puVar10 = *(undefined **)(param_2 + 0xb0);
      goto LAB_006351fc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c02798);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c02798);
    case 3:
      piVar4 = *(int **)(param_2 + 0xb4);
      puVar8 = *(undefined **)(param_2 + 0xb8);
    }
  }
  local_2c4 = (undefined1 *)(param_2 + 0xc4);
  local_2d0 = param_2 + 0xa0;
  local_2d4 = param_2 + 0x98;
  (**(code **)(puVar8 + 0xc))(&local_230,piVar4,param_3);
  if (local_230 == 0xb) {
    *(undefined1 *)(param_2 + 0xc0) = 3;
    *(undefined1 *)(param_2 + 0xbc) = 3;
LAB_006352c4:
    *local_2c4 = 3;
  }
  else {
    FUN_01139b38(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8));
    *(undefined1 *)(param_2 + 0xbc) = 1;
    FUN_005f4ce0(param_2 + 0xa8);
    piVar4 = *(int **)(param_2 + 0xa4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar16 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar16);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177f84(*(undefined4 *)(param_2 + 0xa4));
    }
    iVar3 = local_230;
    *(undefined1 *)(param_2 + 0xc0) = 1;
    if (local_230 == 0xb) goto LAB_006352c4;
    puVar11 = (uint *)((uint)&local_230 | 4);
    local_50 = (int *)*puVar11;
    uStack_4c = puVar11[1];
    uStack_48 = puVar11[2];
    FUN_005f534c(local_2d0);
    if (iVar3 == 10) {
      puVar11 = (uint *)((uint)&local_190 | 4);
      *puVar11 = (uint)local_50;
      puVar11[1] = uStack_4c;
      puVar11[2] = uStack_48;
LAB_006353a0:
      puVar5 = (undefined4 *)((uint)&local_190 | 4);
      local_60 = *puVar5;
      iStack_5c = puVar5[1];
      iStack_58 = puVar5[2];
      piVar4 = *(int **)(param_2 + 0x9c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar16 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar16);
      *piVar4 = iVar3 + -1;
      local_30 = local_60;
      local_2c = iStack_5c;
      local_28 = iStack_58;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011814ec(*(undefined4 *)(param_2 + 0x9c));
      }
      iVar3 = -0x80000000;
      *local_2c4 = 1;
LAB_00635428:
      puVar5 = (undefined4 *)((uint)local_d0 | 4);
      *puVar5 = local_30;
      puVar5[1] = local_2c;
      puVar5[2] = local_28;
      local_c0 = local_40;
      ppiStack_bc = local_3c;
      uStack_b8 = uStack_38;
      local_f0 = local_40;
      ppiStack_ec = local_3c;
      uStack_e8 = uStack_38;
      local_e0 = local_30;
      iStack_dc = local_2c;
      iStack_d8 = local_28;
      local_d0[0] = iVar3;
      FUN_005f35ec(local_2d4);
      if (iVar3 == -0x80000000) {
        local_30 = *puVar5;
        local_2c = puVar5[1];
        local_28 = puVar5[2];
        local_230 = thunk_FUN_01be5118(0x80);
        if (local_230 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x80);
        }
        uVar13 = 1;
        pcVar9 = "{";
        local_224 = 1;
        local_228 = 0x80;
        local_22c = 0;
        local_50 = &local_230;
        do {
          uVar15 = local_22c;
          uVar12 = local_22c ^ 0x7fffffff;
          if (uVar13 < (local_22c ^ 0x7fffffff)) {
            uVar12 = uVar13;
          }
          FUN_01284394(&local_230,pcVar9,uVar12);
          iVar7 = local_28;
          iVar3 = local_2c;
          if (uVar15 == 0x7fffffff) goto LAB_006357ac;
          pcVar9 = pcVar9 + uVar12;
          uVar13 = uVar13 - uVar12;
        } while (uVar13 != 0);
        FUN_0096b2b0(&local_190,local_50,"packages",8);
        piVar4 = local_50;
        if ((char)local_190 == '\x04') {
          local_2c4 = (undefined1 *)iVar3;
          uVar13 = 1;
          pcVar9 = ":";
          do {
            uVar12 = piVar4[1];
            uVar15 = uVar12 ^ 0x7fffffff;
            if (uVar13 < uVar15) {
              uVar15 = uVar13;
            }
            FUN_01284394(piVar4,pcVar9,uVar15);
            piVar14 = local_50;
            if (uVar12 == 0x7fffffff) goto LAB_006357ac;
            pcVar9 = pcVar9 + uVar15;
            uVar13 = uVar13 - uVar15;
          } while (uVar13 != 0);
          puVar8 = &DAT_0053340d;
          uVar13 = 1;
          do {
            uVar12 = piVar14[1];
            uVar15 = uVar12 ^ 0x7fffffff;
            if (uVar13 < uVar15) {
              uVar15 = uVar13;
            }
            FUN_01284394(piVar14,puVar8,uVar15);
            if (uVar12 == 0x7fffffff) goto LAB_006357ac;
            puVar8 = puVar8 + uVar15;
            uVar13 = uVar13 - uVar15;
          } while (uVar13 != 0);
          bVar16 = iVar7 != 0;
          local_2cc = 0x100;
          if (!bVar16) {
            uVar13 = 1;
            pcVar9 = "]";
            do {
              uVar12 = piVar14[1];
              uVar15 = uVar12 ^ 0x7fffffff;
              if (uVar13 < uVar15) {
                uVar15 = uVar13;
              }
              FUN_01284394(piVar14,pcVar9,uVar15);
              if (uVar12 == 0x7fffffff) goto LAB_006357ac;
              pcVar9 = pcVar9 + uVar15;
              uVar13 = uVar13 - uVar15;
            } while (uVar13 != 0);
            local_2cc = 0;
          }
          for (; piVar4 = local_50, local_2c4 != (undefined1 *)(iVar3 + iVar7 * 0x3c);
              local_2c4 = (undefined1 *)((int)local_2c4 + 0x3c)) {
            if (!bVar16) {
              uVar13 = 1;
              pcVar9 = ",";
              do {
                uVar12 = piVar4[1];
                uVar15 = uVar12 ^ 0x7fffffff;
                if (uVar13 < uVar15) {
                  uVar15 = uVar13;
                }
                FUN_01284394(piVar4,pcVar9,uVar15);
                if (uVar12 == 0x7fffffff) goto LAB_006357ac;
                pcVar9 = pcVar9 + uVar15;
                uVar13 = uVar13 - uVar15;
              } while (uVar13 != 0);
            }
            piVar4 = local_50;
            local_2cc = 0x200;
            uVar13 = 1;
            pcVar9 = "{";
            do {
              uVar12 = piVar4[1];
              uVar15 = uVar12 ^ 0x7fffffff;
              if (uVar13 < uVar15) {
                uVar15 = uVar13;
              }
              FUN_01284394(piVar4,pcVar9,uVar15);
              if (uVar12 == 0x7fffffff) {
                iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
                goto LAB_006357b8;
              }
              pcVar9 = pcVar9 + uVar15;
              uVar13 = uVar13 - uVar15;
            } while (uVar13 != 0);
            local_3c = &local_50;
            local_40 = 0x100;
            iVar6 = FUN_0096b5ec(&local_40,&DAT_0056ee18,4,*(undefined4 *)((int)local_2c4 + 4),
                                 *(undefined4 *)((int)local_2c4 + 8));
            if (iVar6 != 0) goto LAB_006357b8;
            if ((char)local_40 == '\x01') {
              local_190 = 10;
              iVar6 = FUN_01966fbc(&local_190,0,0);
              goto LAB_006357b8;
            }
            iVar6 = FUN_0096b5ec(&local_40,&DAT_00520eda,7,*(undefined4 *)((int)local_2c4 + 0x10),
                                 *(undefined4 *)((int)local_2c4 + 0x14));
            if (iVar6 != 0) goto LAB_006357b8;
            if ((char)local_40 == '\x01') {
              local_190 = 10;
              iVar6 = FUN_01966fbc(&local_190,0,0);
              goto LAB_006357b8;
            }
            iVar6 = FUN_00ebc430(&local_40,&DAT_005702d0,8,(int)local_2c4 + 0x18);
            if (iVar6 != 0) goto LAB_006357b8;
            if ((char)local_40 == '\x01') {
              local_190 = 10;
              iVar6 = FUN_01966fbc(&local_190,0,0);
              goto LAB_006357b8;
            }
            iVar6 = FUN_00ebc430(&local_40,"description",0xb,(int)local_2c4 + 0x24);
            if (iVar6 != 0) goto LAB_006357b8;
            if ((char)local_40 == '\x01') {
              local_190 = 10;
              iVar6 = FUN_01966fbc(&local_190,0,0);
              goto LAB_006357b8;
            }
            iVar6 = FUN_00ec6610(&local_40,&DAT_0056fe10,8,(int)local_2c4 + 0x30);
            if (iVar6 != 0) goto LAB_006357b8;
            if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
              uVar13 = 1;
              piVar4 = *local_3c;
              pcVar9 = "}";
              do {
                uVar12 = piVar4[1];
                uVar15 = uVar12 ^ 0x7fffffff;
                if (uVar13 < uVar15) {
                  uVar15 = uVar13;
                }
                FUN_01284394(piVar4,pcVar9,uVar15);
                if (uVar12 == 0x7fffffff) {
                  iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
                  goto LAB_006357b8;
                }
                pcVar9 = pcVar9 + uVar15;
                uVar13 = uVar13 - uVar15;
              } while (uVar13 != 0);
            }
            bVar16 = false;
          }
          if (local_2cc != 0) {
            uVar13 = 1;
            pcVar9 = "]";
            do {
              uVar12 = piVar4[1];
              uVar15 = uVar12 ^ 0x7fffffff;
              if (uVar13 < uVar15) {
                uVar15 = uVar13;
              }
              FUN_01284394(piVar4,pcVar9,uVar15);
              if (uVar12 == 0x7fffffff) goto LAB_006357ac;
              pcVar9 = pcVar9 + uVar15;
              uVar13 = uVar13 - uVar15;
            } while (uVar13 != 0);
          }
          piVar4 = local_50;
          uVar13 = 1;
          pcVar9 = "}";
          do {
            uVar12 = piVar4[1];
            uVar15 = uVar12 ^ 0x7fffffff;
            if (uVar13 < uVar15) {
              uVar15 = uVar13;
            }
            FUN_01284394(piVar4,pcVar9,uVar15);
            if (uVar12 == 0x7fffffff) goto LAB_006357ac;
            pcVar9 = pcVar9 + uVar15;
            uVar13 = uVar13 - uVar15;
          } while (uVar13 != 0);
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_01966f50(local_190,local_18c);
        }
        goto LAB_006357b8;
      }
      FUN_00a28800(auStack_b0,local_d0);
      goto LAB_006357dc;
    }
    *puVar11 = (uint)local_50;
    puVar11[1] = uStack_4c;
    puVar11[2] = uStack_48;
    local_230 = iVar3;
    FUN_00b35568(&local_190,&local_230);
    iVar3 = local_190;
    if (local_190 == -0x80000000) goto LAB_006353a0;
    puVar5 = (undefined4 *)((uint)&local_190 | 4);
    local_60 = *puVar5;
    iStack_5c = puVar5[1];
    iStack_58 = puVar5[2];
    local_40 = local_180;
    local_3c = ppiStack_17c;
    uStack_38 = uStack_178;
    piVar4 = *(int **)(param_2 + 0x9c);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar16 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar16);
    *piVar4 = iVar7 + -1;
    local_30 = local_60;
    local_2c = iStack_5c;
    local_28 = iStack_58;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_2 + 0x9c));
    }
    *local_2c4 = 1;
    if (iVar3 != -0x7fffffff) goto LAB_00635428;
  }
  *param_1 = 3;
  param_1[1] = 0;
  uVar2 = 4;
LAB_00635820:
  *(undefined1 *)(param_2 + 0x94) = uVar2;
  return;
LAB_006357ac:
  iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
LAB_006357b8:
  local_190 = local_230;
  local_18c = local_22c;
  uStack_188 = local_228;
  uStack_184 = local_224;
  FUN_00710a2c(auStack_b0,&local_190,iVar6);
  FUN_00dab1e0(&local_30);
LAB_006357dc:
  piVar4 = *(int **)(param_2 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar16 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar16);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011814ec(*(undefined4 *)(param_2 + 0x90));
  }
  FUN_01bed4e2(param_1,auStack_b0,0x50);
  uVar2 = 1;
  goto LAB_00635820;
}

