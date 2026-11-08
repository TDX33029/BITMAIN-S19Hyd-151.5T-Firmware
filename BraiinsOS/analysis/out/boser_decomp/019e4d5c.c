// FUN_019e4d5c @ 019e4d5c size=1560 calls_out=19 calls_in=1
// strings: 

void FUN_019e4d5c(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int *unaff_r9;
  int *piVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  int *local_1144;
  undefined4 local_1140;
  int *local_113c;
  int *local_1108;
  uint uStack_1104;
  int iStack_1100;
  undefined4 *puStack_10fc;
  int *local_1098;
  int *local_1094;
  int *piStack_1090;
  int local_108c;
  int *local_1088 [4];
  uint local_1078;
  int local_1074;
  undefined4 local_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  uint local_1064;
  undefined4 uStack_1060;
  int local_e88 [664];
  int *local_428;
  int *local_424;
  int *local_420;
  int *local_41c;
  uint local_418;
  int local_414;
  undefined4 *local_410;
  undefined1 *local_228;
  uint local_224 [128];
  
  if ((char)param_2[1] == '\0') {
    piVar16 = (int *)FUN_019ee374();
    do {
      iVar17 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar17 + 1;
    if (iVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19e5378);
      (*pcVar1)();
    }
    uVar13 = 0;
    piVar19 = (int *)&DAT_80000000;
    local_1140 = 0;
    piVar12 = (int *)&DAT_ffffffff;
    piVar11 = piVar16;
    goto LAB_019e4ddc;
  }
  iVar17 = *param_2;
  FUN_01609fc8(local_1088);
  piVar19 = local_1088[1];
  if (((char)local_1088[0] != '\x04') &&
     (piVar16 = local_1088[0], unaff_r9 = local_1088[1], ((uint)local_1088[0] & 0xff) != 4))
  goto LAB_019e532c;
  uVar15 = 0;
  piVar11 = (int *)FUN_01be3e78(0,0x80800);
  if ((int)piVar11 < 0) {
    puVar14 = (undefined4 *)FUN_01be3244();
    unaff_r9 = (int *)*puVar14;
    uVar18 = 0;
LAB_019e5040:
    piVar16 = (int *)(uVar15 | uVar18);
  }
  else {
    FUN_01609584(local_1088,piVar19,piVar11,0,1);
    if ((char)local_1088[0] != '\x04') {
      uVar18 = (uint)local_1088[0] & 0xff;
      if (uVar18 == 4) {
      }
      else {
        FUN_01bf01d6(piVar11);
        if (uVar18 != 4) {
          uVar15 = (uint)local_1088[0] & 0xffffff00;
          unaff_r9 = local_1088[1];
          goto LAB_019e5040;
        }
        piVar11 = local_1088[1];
      }
    }
    piVar12 = (int *)FUN_01be3388(piVar19,0x406,3);
    if (piVar12 != (int *)&DAT_ffffffff) {
      FUN_01609a7c(&local_1098,iVar17);
      local_1078 = local_1078 & 0xffffff00;
      local_1088[0] = local_1098;
      local_1088[1] = local_1094;
      local_1088[2] = piStack_1090;
      local_1088[3] = piVar19;
      local_1074 = thunk_FUN_01be5118(0x40);
      uVar15 = local_1078;
      piVar21 = local_1088[3];
      unaff_r9 = local_1088[2];
      piVar16 = local_1088[1];
      piVar19 = local_1088[0];
      if (local_1074 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x40);
      }
      local_41c = (int *)((uint)local_41c & 0xffffff00);
      local_420 = (int *)0x0;
      local_424 = (int *)0x0;
      local_428 = (int *)0x0;
      piVar10 = local_1088[1];
      if (local_1088[0] != (int *)&DAT_80000000) {
        local_1078 = 0x10;
        local_1088[3] = (int *)((uint)local_1088[3] & 0xffffff00);
        local_1088[2] = (int *)0x0;
        local_1070 = 0;
        uStack_106c = 0;
        uStack_1068 = 0;
        local_1064 = local_1064 & 0xffffff00;
        DataMemoryBarrier(0xb);
        local_1088[0] = piVar12;
        local_1088[1] = piVar11;
        if (DAT_01d50444 != 0) {
          FUN_019e9c64();
        }
        iVar17 = FUN_01be3388(DAT_01d50438,0x406,3);
        if (iVar17 == -1) {
          puVar14 = (undefined4 *)FUN_01be3244();
          unaff_r9 = (int *)*puVar14;
          piVar10 = (int *)0x0;
        }
        else {
          local_108c = iVar17;
          FUN_019f13e8(&local_1098,local_1088,&local_108c,1,1);
          if (((char)local_1098 == '\x04') || (((uint)local_1098 & 0xff) == 4)) {
            local_410 = (undefined4 *)thunk_FUN_01be5118(8);
            if (local_410 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,8);
            }
            local_41c = piVar21;
            *local_410 = 1;
            local_410[1] = 1;
            local_418 = uVar15;
            local_424 = piVar16;
            local_420 = unaff_r9;
            local_428 = piVar19;
            local_414 = iVar17;
            local_1140 = FUN_019df784(&local_428);
            puStack_10fc = local_410;
            iStack_1100 = local_414;
            uStack_1104 = local_418;
            local_1108 = local_41c;
            uVar13 = FUN_019df784();
            local_228 = (undefined1 *)local_1088[2];
            local_224[0] = (uint)local_1088[3];
            local_224[1] = local_1078;
            local_224[2] = local_1074;
            local_224[3] = local_1070;
            local_224[4] = uStack_106c;
            local_224[5] = uStack_1068;
            local_224[6] = local_1064;
            piVar11 = local_1088[1];
            local_1144 = piVar12;
            if (piVar19 != (int *)&DAT_80000001) {
LAB_019e4ddc:
              uVar8 = local_224[6];
              uVar7 = local_224[5];
              uVar6 = local_224[4];
              uVar5 = local_224[3];
              uVar4 = local_224[2];
              uVar18 = local_224[1];
              uVar15 = local_224[0];
              puVar3 = local_228;
              if (*(char *)((int)param_2 + 5) == '\x01') {
                FUN_019ac130(local_1088,1);
                piVar21 = local_1088[2];
                local_113c = local_1088[0];
                local_1144 = local_1088[1];
                iVar17 = 0;
                do {
                  iVar20 = 0;
                  do {
                    (&local_228)[iVar20 * 2] = (undefined1 *)0x0;
                    iVar9 = iVar20 + 1;
                    local_224[iVar20 * 2] = 0;
                    iVar20 = iVar9;
                  } while (iVar9 != 0x40);
                  FUN_01bed4e2(&local_428,&local_228,0x200);
                  FUN_01bed4e2(local_1088 + iVar17 * 0x84,&local_428,0x200);
                  local_e88[iVar17 * 0x84 + 2] = iVar17;
                  iVar20 = iVar17 + 1;
                  local_e88[iVar17 * 0x84] = 0;
                  local_e88[iVar17 * 0x84 + 1] = 0;
                  iVar17 = iVar20;
                } while (iVar20 != 6);
                piVar10 = (int *)thunk_FUN_01be5118(0xc60);
                if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0xc60);
                }
                FUN_01bed4e2(piVar10,local_1088,0xc60);
                uVar22 = 0;
              }
              else {
                uVar22 = 2;
                piVar21 = (int *)&DAT_3b9aca00;
                piVar10 = unaff_r9;
                local_113c = param_2;
              }
              puVar14 = (undefined4 *)((uint)local_1088 | 4);
              *puVar14 = piVar12;
              puVar14[1] = piVar11;
              puVar14[2] = puVar3;
              puVar14[3] = uVar15;
              puVar14[4] = uVar18;
              puVar14[5] = uVar4;
              puVar14[6] = uVar5;
              puVar14[7] = uVar6;
              puVar14[8] = uVar7;
              puVar14[9] = uVar8;
              *param_1 = uVar22;
              param_1[1] = piVar19;
              param_1[2] = piVar16;
              param_1[3] = unaff_r9;
              param_1[4] = local_1108;
              param_1[5] = uStack_1104;
              param_1[6] = iStack_1100;
              param_1[7] = puStack_10fc;
              param_1[8] = uVar13;
              param_1[9] = local_1088[0];
              param_1[10] = local_1088[1];
              param_1[0xb] = local_1088[2];
              param_1[0xc] = local_1088[3];
              param_1[0xd] = local_1078;
              param_1[0xe] = local_1074;
              param_1[0xf] = local_1070;
              param_1[0x10] = uStack_106c;
              param_1[0x11] = uStack_1068;
              param_1[0x12] = local_1064;
              param_1[0x13] = uStack_1060;
              *(undefined1 *)(param_1 + 0x14) = 0;
              FUN_01bed93e(param_1 + 0x16,0,0x18);
              *(undefined1 *)(param_1 + 0x1e) = 0;
              param_1[0x20] = local_113c;
              param_1[0x21] = local_1144;
              param_1[0x1c] = piVar10;
              param_1[0x24] = local_1140;
              param_1[0x22] = piVar21;
              return;
            }
            goto LAB_019e532c;
          }
          FUN_01bf01d6(iVar17);
          piVar10 = local_1098;
          unaff_r9 = local_1094;
        }
        FUN_0134c054(piVar19,piVar16,8,0x10);
        FUN_01bf01d6(piVar21);
        FUN_019e58e4(local_1088);
      }
      piVar16 = piVar10;
      goto LAB_019e532c;
    }
    puVar14 = (undefined4 *)FUN_01be3244();
    unaff_r9 = (int *)*puVar14;
    FUN_01bf01d6(piVar11);
    piVar16 = (int *)0x0;
  }
  FUN_01bf01d6(piVar19);
LAB_019e532c:
  param_1[1] = piVar16;
  param_1[2] = unaff_r9;
  *param_1 = 3;
  return;
}

