// FUN_0118e8f4 @ 0118e8f4 size=1924 calls_out=18 calls_in=1
// strings: dependentRequired | dependentRequired | The required validator compilation does not return None

void FUN_0118e8f4(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_238;
  undefined1 auStack_220 [56];
  int *local_1e8;
  undefined4 local_1e4;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined4 local_180;
  int local_17c;
  undefined4 local_178;
  uint local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  uint local_164;
  undefined4 local_160;
  undefined8 local_15c;
  undefined1 *local_140;
  undefined2 local_13c;
  int *local_128;
  undefined *local_124;
  undefined1 local_108;
  char *local_104;
  int *local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined *local_a8;
  int *local_a4;
  undefined *local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined2 local_84;
  int *local_78;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined *puStack_2c;
  
  if (*param_4 == '\x05') {
    FUN_0119d4b4(auStack_220,param_2,"dependentRequired",0x11);
    local_164 = *(uint *)(param_4 + 0xc);
    local_190 = 0;
    puVar6 = param_1;
    if ((0x7ffffff < local_164) ||
       (puVar6 = (undefined4 *)(local_164 * 0x20), (undefined4 *)0x7ffffffc < puVar6)) {
LAB_0118ea40:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_190,puVar6);
    }
    uVar13 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      uVar3 = 4;
    }
    else {
      uVar3 = thunk_FUN_016d4a50(puVar6);
      if (uVar3 == 0) {
        local_190 = 4;
        goto LAB_0118ea40;
      }
      local_190 = local_164;
    }
    local_17c = *(int *)(param_4 + 4);
    local_178 = *(undefined4 *)(param_4 + 8);
    if (local_17c == 0) {
      local_164 = 0;
    }
    local_184 = (uint)(local_17c != 0);
    local_188 = 0;
    local_170 = 0;
    local_180 = 0;
    local_18c = uVar3;
    local_174 = local_184;
    local_16c = local_17c;
    local_168 = local_178;
    while( true ) {
      uVar20 = FUN_00f45584(&local_184);
      pcVar9 = (char *)((ulonglong)uVar20 >> 0x20);
      iVar7 = (int)uVar20;
      if (iVar7 == 0) break;
      FUN_0119d4b4(&local_160,auStack_220,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      if (*pcVar9 != '\x04') goto LAB_0118eea4;
      uVar19 = *(uint *)(pcVar9 + 0xc);
      if (1 < uVar19) {
        iVar18 = *(int *)(pcVar9 + 8);
        if (uVar19 == 3) {
          iVar4 = FUN_011e2b78(iVar18,iVar18 + 0x18);
          if (iVar4 != 0) goto LAB_0118eda4;
          iVar4 = FUN_011e2b78(iVar18,iVar18 + 0x30);
          if (iVar4 != 0) goto LAB_0118eda4;
          iVar4 = FUN_011e2b78(iVar18 + 0x18,iVar18 + 0x30);
        }
        else if (uVar19 == 2) {
          iVar4 = FUN_011e2b78(iVar18,iVar18 + 0x18);
        }
        else {
          if (uVar19 < 0x10) {
            local_238 = 0;
            uVar14 = uVar19;
            iVar4 = iVar18;
            do {
              iVar4 = iVar4 + 0x18;
              uVar14 = uVar14 - 1;
              uVar10 = local_238 + 1;
              if (uVar10 < uVar19) {
                uVar15 = uVar14;
                iVar17 = iVar4;
                do {
                  iVar5 = FUN_011e2b78(iVar18 + local_238 * 0x18,iVar17);
                  if (iVar5 != 0) goto LAB_0118eda4;
                  iVar17 = iVar17 + 0x18;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              local_238 = uVar10;
            } while (uVar10 != uVar19);
            goto LAB_0118eca4;
          }
          FUN_0120e26c(&local_a8,uVar19);
          local_bc = iVar18 + uVar19 * 0x18;
          iVar17 = uVar19 * 0x18;
          local_c0 = iVar18;
          local_78 = &iStack_b8;
          do {
            iVar4 = iVar17;
            iVar17 = iVar4;
            if (iVar4 == 0) break;
            iVar5 = FUN_0122532c(&local_a8,iVar18);
            iVar17 = iVar4 + -0x18;
            iVar18 = iVar18 + 0x18;
          } while (iVar5 == 0);
          if (local_a4 != (int *)0x0) {
            iVar17 = (int)local_a4 * 5;
          }
          if (local_a4 != (int *)0x0 && iVar17 != -9) {
            thunk_FUN_016d3fb4(local_a8 + (int)local_a4 * -4 + -4);
          }
        }
        if (iVar4 != 0) goto LAB_0118eda4;
      }
LAB_0118eca4:
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      do {
        iVar18 = *local_1e8;
        bVar2 = (bool)hasExclusiveAccess(local_1e8);
      } while (!bVar2);
      *local_1e8 = iVar18 + 1;
      if (iVar18 < 0) goto LAB_0118f090;
      FUN_0119fb90(&local_a8,pcVar9,local_1e8,local_1e4);
      puVar8 = local_a0;
      if (local_a8 != (undefined *)0x1) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("The required validator compilation does not return None",0x37,&DAT_01889278);
      }
      if (local_a4 == (int *)0x0) {
        thunk_FUN_016d3fb4(puVar6);
        goto LAB_0118ef74;
      }
      *puVar6 = local_a4;
      puVar6[1] = local_a0;
      piVar11 = (int *)&DAT_00000001;
      uVar16 = *(undefined4 *)(iVar7 + 4);
      puVar8 = *(undefined **)(iVar7 + 8);
      local_c4 = 1;
      local_cc = 1;
      local_c8 = puVar6;
      if ((puVar8 != (undefined *)0x0) &&
         (piVar11 = (int *)thunk_FUN_016d4a50(puVar8), piVar11 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar8);
      }
      FUN_016dd1aa(piVar11,uVar16,puVar8);
      FUN_011c8210(&local_c0,auStack_220,&local_cc);
      local_9c = local_c0;
      local_98 = local_bc;
      iStack_94 = iStack_b8;
      uStack_90 = uStack_b4;
      uStack_8c = uStack_b0;
      local_a8 = puVar8;
      local_a4 = piVar11;
      local_a0 = puVar8;
      if (uVar13 == local_190) {
        FUN_011cf65c(&local_190);
        uVar3 = local_18c;
      }
      puVar6 = (undefined4 *)(uVar3 + uVar13 * 0x20);
      uVar13 = uVar13 + 1;
      *puVar6 = local_a8;
      puVar6[1] = local_a4;
      puVar6[2] = local_a0;
      puVar6[3] = local_9c;
      puVar6[4] = local_98;
      puVar6[5] = iStack_94;
      puVar6[6] = uStack_90;
      puVar6[7] = uStack_8c;
      local_188 = uVar13;
      FUN_01161600(&local_160);
    }
    puVar12 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar12 = local_190;
    puVar12[1] = local_18c;
    puVar12[2] = local_188;
    FUN_01161600(auStack_220);
    puVar8 = &DAT_01889258;
    goto LAB_0118efe8;
  }
  uStack_e8 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                           "dependentRequired",0x11);
  piVar11 = (int *)uStack_e8;
  do {
    iVar7 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar7 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  local_f0 = DAT_018da8b4;
  uStack_ec = DAT_018da8b8;
  local_108 = 6;
  local_13c = 0x2000;
  local_140 = &DAT_80000028;
  local_160 = 1;
  local_104 = param_4;
  local_15c = uStack_e8;
  puVar8 = (undefined *)thunk_FUN_016d4a50(0x80);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(puVar8,&local_160,0x80);
  goto LAB_0118efe4;
LAB_0118eea4:
  do {
    iVar7 = *local_128;
    bVar2 = (bool)hasExclusiveAccess(local_128);
  } while (!bVar2);
  *local_128 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  do {
    iVar7 = *local_128;
    bVar2 = (bool)hasExclusiveAccess(local_128);
  } while (!bVar2);
  *local_128 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar7 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  local_38 = DAT_018da8b4;
  uStack_34 = DAT_018da8b8;
  local_50 = 6;
  piStack_30 = local_128;
  puStack_2c = local_124;
  local_84 = 0x100;
  local_88 = &DAT_80000028;
  local_a8 = (undefined *)0x1;
  local_a0 = local_124;
  local_a4 = local_128;
  local_4c = pcVar9;
  puVar8 = (undefined *)thunk_FUN_016d4a50(0x80);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  goto LAB_0118ef64;
LAB_0118eda4:
  do {
    iVar7 = *local_128;
    bVar2 = (bool)hasExclusiveAccess(local_128);
  } while (!bVar2);
  *local_128 = iVar7 + 1;
  if (iVar7 < 0) {
LAB_0118f090:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118f090);
    (*pcVar1)();
  }
  do {
    iVar7 = *local_128;
    bVar2 = (bool)hasExclusiveAccess(local_128);
  } while (!bVar2);
  *local_128 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar7 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_0118f090;
  local_38 = DAT_018da8b4;
  uStack_34 = DAT_018da8b8;
  local_50 = 6;
  piStack_30 = local_128;
  puStack_2c = local_124;
  local_88 = (undefined1 *)0x8000002b;
  local_a8 = (undefined *)0x1;
  local_a0 = local_124;
  local_a4 = local_128;
  local_4c = pcVar9;
  puVar8 = (undefined *)thunk_FUN_016d4a50(0x80);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_0118ef64:
  FUN_016dd1aa(puVar8,&local_a8,0x80);
LAB_0118ef74:
  FUN_01161600(&local_160);
  uVar13 = local_18c;
  iVar18 = 0;
  for (iVar7 = local_188 + 1; iVar7 != 1; iVar7 = iVar7 + -1) {
    if (*(int *)(uVar13 + iVar18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(uVar13 + iVar18 + 4));
    }
    iVar4 = uVar13 + iVar18;
    iVar18 = iVar18 + 0x20;
    FUN_0115ccf0(iVar4 + 0xc);
  }
  if (local_190 != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
  FUN_01161600(auStack_220);
LAB_0118efe4:
  puVar12 = (uint *)0x0;
LAB_0118efe8:
  *param_1 = 1;
  param_1[1] = puVar12;
  param_1[2] = puVar8;
  return;
}

