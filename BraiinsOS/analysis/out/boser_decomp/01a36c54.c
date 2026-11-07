// FUN_01a36c54 @ 01a36c54 size=4268 calls_out=28 calls_in=2
// strings: broadcast channel capacity cannot be zero | broadcast channel capacity exceeded `usize::MAX / 2` | unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a36c54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  undefined4 uVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  int local_258;
  uint local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int *local_234;
  undefined4 local_230;
  undefined4 local_22c;
  int *local_228;
  int *local_21c;
  undefined4 local_218;
  undefined4 local_214;
  int *local_210;
  int *local_204;
  int *local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  int *local_1ec;
  int *local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  int *local_1d4;
  int *local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int *local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int *local_1b0;
  int *local_1a4;
  int *local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  int *local_178;
  uint local_174;
  int *local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined3 uStack_164;
  int local_120;
  int iStack_11c;
  undefined4 local_118;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int *local_30;
  uint local_2c;
  int *local_28;
  
  FUN_01a1795c(&local_178,param_6,&DAT_01d2b748);
  piVar2 = local_178;
  local_248 = local_170;
  uStack_244 = uStack_16c;
  uStack_240 = uStack_168;
  if (param_6 == (int *)0x0) {
    uVar20 = 0x53;
    pcVar19 = "broadcast channel capacity cannot be zero";
LAB_01a37bc4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(pcVar19,uVar20,&DAT_01d2b758);
  }
  if ((int)param_6 < 0) {
    uVar20 = 0x69;
    pcVar19 = "broadcast channel capacity exceeded `usize::MAX / 2`";
    goto LAB_01a37bc4;
  }
  piVar16 = param_6;
  if ((undefined *)((int)param_6 + -1) != (undefined *)0x0) {
    piVar16 = (int *)((0xffffffffU >> LZCOUNT((undefined *)((int)param_6 + -1))) + 1);
  }
  uVar20 = 0;
  iVar21 = (int)piVar16 * 0x28;
  if ((int *)0x3333333 < piVar16) {
LAB_01a36cf0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar20,iVar21);
  }
  if (iVar21 == 0) {
    uVar5 = 8;
    local_188 = (int *)0x0;
  }
  else {
    uVar20 = 8;
    uVar5 = FUN_01298504(iVar21,8);
    local_188 = piVar16;
    if (uVar5 == 0) goto LAB_01a36cf0;
  }
  iVar21 = 0;
  local_180 = (int *)0x0;
  local_184 = uVar5;
  do {
    piVar22 = local_180;
    bVar26 = local_180 < piVar16;
    iVar18 = (int)local_180 - (int)piVar16;
    if (local_180 == local_188) {
      FUN_007193b0(&local_188);
      uVar5 = local_184;
    }
    puVar13 = (undefined1 *)(uVar5 + iVar21);
    *puVar13 = 0;
    local_180 = (int *)((int)piVar22 + 1);
    iVar21 = iVar21 + 0x28;
    *(int *)(puVar13 + 8) = iVar18;
    *(uint *)(puVar13 + 0xc) = -(uint)bVar26;
    *(undefined4 *)(puVar13 + 0x24) = 5;
    *(undefined4 *)(puVar13 + 0x10) = 0;
  } while (piVar16 != local_180);
  local_178 = local_188;
  local_174 = local_184;
  local_170 = local_180;
  if ((local_180 < local_188) &&
     (iVar21 = FUN_01609230(&local_178,local_180,8,0x28), iVar21 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  piVar22 = local_170;
  uVar5 = local_174;
  piVar6 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  puVar14 = (undefined *)((int)piVar16 + -1);
  *(undefined1 *)(piVar6 + 4) = 0;
  *piVar6 = 1;
  piVar6[1] = 1;
  piVar6[2] = uVar5;
  piVar6[3] = (int)piVar22;
  piVar6[6] = 0;
  piVar6[7] = 0;
  piVar6[8] = 0;
  piVar6[9] = 0;
  piVar6[0xe] = 0;
  piVar6[0xf] = 0;
  piVar6[0x10] = (int)puVar14;
  piVar6[0x11] = 1;
  piVar6[0x12] = 0;
  *(undefined1 *)(piVar6 + 0xd) = 0;
  piVar6[0xc] = 0;
  *(undefined1 *)(piVar6 + 0xb) = 0;
  piVar6[10] = 1;
  do {
    iVar21 = *piVar6;
    bVar26 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar26);
  *piVar6 = iVar21 + 1;
  if (iVar21 < 0) {
LAB_01a37d48:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a37d48);
    (*pcVar1)();
  }
  uVar20 = 0;
  iVar21 = (int)piVar16 * 0x148;
  local_22c = 0;
  local_230 = 0;
  local_234 = piVar6;
  local_228 = piVar6;
  if (&UNK_0063e706 < piVar16) {
LAB_01a36ec8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar20,iVar21);
  }
  if (iVar21 == 0) {
    uVar5 = 8;
    piVar22 = (int *)0x0;
  }
  else {
    uVar20 = 8;
    uVar5 = FUN_01298504(iVar21,8);
    piVar22 = piVar16;
    if (uVar5 == 0) goto LAB_01a36ec8;
  }
  local_180 = (int *)0x0;
  iVar21 = 0;
  local_188 = piVar22;
  local_184 = uVar5;
  do {
    piVar22 = local_180;
    local_40 = (int)local_180 - (int)piVar16;
    iStack_3c = -(uint)(local_180 < piVar16);
    local_178 = (int *)((uint)local_178 & 0xffffff00);
    local_38 = 0;
    if (local_180 == local_188) {
      FUN_01a3aba4(&local_188);
      uVar5 = local_184;
    }
    piVar22 = (int *)((int)piVar22 + 1);
    FUN_01bed4e2(uVar5 + iVar21,&local_178,0x148);
    iVar21 = iVar21 + 0x148;
    local_180 = piVar22;
  } while (piVar16 != piVar22);
  local_178 = local_188;
  local_174 = local_184;
  local_170 = piVar22;
  if ((piVar22 < local_188) &&
     (iVar21 = FUN_01609230(&local_178,piVar22,8,0x148), iVar21 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  piVar22 = local_170;
  uVar5 = local_174;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  local_174 = local_174 & 0xffffff;
  local_170 = (int *)0x0;
  piVar7 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  *(undefined1 *)(piVar7 + 4) = 0;
  *piVar7 = 1;
  piVar7[1] = 1;
  piVar7[2] = uVar5;
  piVar7[3] = (int)piVar22;
  FUN_01bed4e2((int)piVar7 + 0x11,&local_178,0x17);
  piVar7[0x10] = (int)puVar14;
  piVar7[0x11] = 1;
  piVar7[0x12] = 0;
  piVar7[0xf] = 0;
  piVar7[0xe] = 0;
  *(undefined1 *)(piVar7 + 0xd) = 0;
  piVar7[0xc] = 0;
  *(undefined1 *)(piVar7 + 0xb) = 0;
  piVar7[10] = 1;
  do {
    iVar21 = *piVar7;
    bVar26 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar26);
  *piVar7 = iVar21 + 1;
  if (iVar21 < 0) goto LAB_01a37d48;
  local_214 = 0;
  local_218 = 0;
  local_21c = piVar7;
  local_210 = piVar7;
  FUN_01a17ba8(&local_178,param_6,&DAT_01d2b768);
  piVar22 = local_178;
  local_204 = local_178;
  local_200 = local_170;
  uStack_1fc = uStack_16c;
  uStack_1f8 = uStack_168;
  FUN_01a1795c(&local_178,param_6,&DAT_01d2b778);
  piVar3 = local_178;
  local_1ec = local_178;
  local_1e8 = local_170;
  uStack_1e4 = uStack_16c;
  uStack_1e0 = uStack_168;
  FUN_01a17ba8(&local_178,param_6,&DAT_01d2b788);
  piVar4 = local_178;
  local_1cc = uStack_16c;
  local_1d4 = local_178;
  local_1d0 = local_170;
  local_1c8 = uStack_168;
  uVar5 = FUN_01298504((int)piVar16 * 0x68,8);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,(int)piVar16 * 0x68);
  }
  iVar21 = 0;
  local_180 = (int *)0x0;
  local_188 = piVar16;
  local_184 = uVar5;
  do {
    piVar23 = local_180;
    local_170 = (int *)0x3;
    uStack_16c = 0;
    local_120 = (int)local_180 - (int)piVar16;
    iStack_11c = -(uint)(local_180 < piVar16);
    local_178 = (int *)((uint)local_178 & 0xffffff00);
    local_118 = 0;
    if (local_180 == local_188) {
      FUN_01a3ab44(&local_188);
      uVar5 = local_184;
    }
    piVar23 = (int *)((int)piVar23 + 1);
    FUN_01bed4e2(uVar5 + iVar21,&local_178,0x68);
    iVar21 = iVar21 + 0x68;
    local_180 = piVar23;
  } while (piVar16 != piVar23);
  local_178 = local_188;
  local_174 = local_184;
  local_170 = piVar23;
  if ((piVar23 < local_188) &&
     (iVar21 = FUN_01609230(&local_178,piVar23,8,0x68), iVar21 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  piVar23 = local_170;
  uVar5 = local_174;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  local_174 = local_174 & 0xffffff;
  local_170 = (int *)0x0;
  piVar8 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  *(undefined1 *)(piVar8 + 4) = 0;
  *piVar8 = 1;
  piVar8[1] = 1;
  piVar8[2] = uVar5;
  piVar8[3] = (int)piVar23;
  FUN_01bed4e2((int)piVar8 + 0x11,&local_178,0x17);
  piVar8[0x10] = (int)puVar14;
  piVar8[0x11] = 1;
  piVar8[0x12] = 0;
  piVar8[0xf] = 0;
  piVar8[0xe] = 0;
  *(undefined1 *)(piVar8 + 0xd) = 0;
  piVar8[0xc] = 0;
  *(undefined1 *)(piVar8 + 0xb) = 0;
  piVar8[10] = 1;
  do {
    iVar21 = *piVar8;
    bVar26 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar26);
  *piVar8 = iVar21 + 1;
  if (iVar21 < 0) goto LAB_01a37d48;
  local_1b4 = 0;
  local_1b8 = 0;
  local_1bc = piVar8;
  local_1b0 = piVar8;
  FUN_01a17ba8(&local_178,param_6,&DAT_01d2b798);
  piVar23 = local_178;
  local_1a4 = local_178;
  local_1a0 = local_170;
  uStack_19c = uStack_16c;
  uStack_198 = uStack_168;
  uVar5 = FUN_01298504((int)piVar16 * 0x30,8);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,(int)piVar16 * 0x30);
  }
  iVar21 = 0;
  local_180 = (int *)0x0;
  local_188 = piVar16;
  local_184 = uVar5;
  do {
    piVar10 = local_180;
    bVar26 = local_180 < piVar16;
    iVar18 = (int)local_180 - (int)piVar16;
    if (local_180 == local_188) {
      FUN_01a3abd4(&local_188);
      uVar5 = local_184;
    }
    puVar13 = (undefined1 *)(uVar5 + iVar21);
    *puVar13 = 0;
    local_180 = (int *)((int)piVar10 + 1);
    iVar21 = iVar21 + 0x30;
    *(uint *)(puVar13 + 0xc) = -(uint)bVar26;
    *(undefined4 *)(puVar13 + 0x24) = 0x80000001;
    *(int *)(puVar13 + 8) = iVar18;
    *(undefined4 *)(puVar13 + 0x10) = 0;
  } while (piVar16 != local_180);
  local_178 = local_188;
  local_174 = local_184;
  local_170 = local_180;
  if ((local_180 < local_188) &&
     (iVar21 = FUN_01609230(&local_178,local_180,8,0x30), iVar21 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  piVar10 = local_170;
  uVar5 = local_174;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  local_174 = local_174 & 0xffffff;
  local_170 = (int *)0x0;
  piVar9 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  piVar9[1] = 1;
  piVar9[2] = uVar5;
  piVar9[3] = (int)piVar10;
  *(undefined1 *)(piVar9 + 4) = 0;
  *piVar9 = 1;
  FUN_01bed4e2((undefined *)((int)piVar9 + 0x11),&local_178,0x17);
  piVar9[0x10] = (int)puVar14;
  piVar9[0x11] = 1;
  piVar9[0x12] = 0;
  piVar9[0xf] = 0;
  piVar9[0xe] = 0;
  *(undefined1 *)(piVar9 + 0xd) = 0;
  piVar9[0xc] = 0;
  *(undefined1 *)(piVar9 + 0xb) = 0;
  piVar9[10] = 1;
  do {
    iVar21 = *piVar9;
    bVar26 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar26);
  *piVar9 = iVar21 + 1;
  if (iVar21 < 0) goto LAB_01a37d48;
  local_184 = 0;
  local_188 = (int *)0x0;
  local_18c = piVar9;
  local_180 = piVar9;
  uVar5 = FUN_01298504((int)piVar16 * 0x38,8);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,(int)piVar16 * 0x38);
  }
  iVar21 = 0;
  local_28 = (int *)0x0;
  local_30 = piVar16;
  local_2c = uVar5;
  do {
    piVar10 = local_28;
    bVar26 = local_28 < piVar16;
    iVar18 = (int)local_28 - (int)piVar16;
    if (local_28 == local_30) {
      FUN_01a3ab74(&local_30);
      uVar5 = local_2c;
    }
    puVar13 = (undefined1 *)(uVar5 + iVar21);
    *puVar13 = 0;
    local_28 = (int *)((int)piVar10 + 1);
    iVar21 = iVar21 + 0x38;
    *(int *)(puVar13 + 8) = iVar18;
    *(undefined4 *)(puVar13 + 0x28) = 0x80000002;
    *(uint *)(puVar13 + 0xc) = -(uint)bVar26;
    *(undefined4 *)(puVar13 + 0x10) = 0;
  } while (piVar16 != local_28);
  local_178 = local_30;
  local_174 = local_2c;
  local_170 = local_28;
  if ((local_28 < local_30) &&
     (iVar21 = FUN_01609230(&local_178,local_28,8,0x38), iVar21 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  piVar16 = local_170;
  uVar5 = local_174;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  local_174 = local_174 & 0xffffff;
  local_170 = (int *)0x0;
  piVar10 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  piVar10[2] = uVar5;
  piVar11 = piVar10 + 4;
  *(char *)piVar11 = '\0';
  *piVar10 = 1;
  piVar10[1] = 1;
  piVar10[3] = (int)piVar16;
  FUN_01bed4e2((int)piVar10 + 0x11,&local_178,0x17);
  piVar10[0xf] = 0;
  piVar10[0x10] = (int)puVar14;
  piVar10[0x11] = 1;
  piVar10[0x12] = 0;
  piVar10[0xe] = 0;
  *(undefined1 *)(piVar10 + 0xd) = 0;
  piVar10[0xc] = 0;
  *(undefined1 *)(piVar10 + 0xb) = 0;
  piVar10[10] = 1;
  do {
    iVar21 = *piVar10;
    bVar26 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar26);
  *piVar10 = iVar21 + 1;
  if (iVar21 < 0) goto LAB_01a37d48;
  param_1[8] = piVar9;
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *param_1 = piVar2;
  param_1[1] = piVar6;
  param_1[2] = piVar7;
  param_1[3] = piVar22;
  param_1[4] = piVar3;
  param_1[5] = piVar4;
  param_1[9] = piVar10;
  param_1[6] = piVar8;
  param_1[7] = piVar23;
  if ((char)*piVar11 == '\0') {
    bVar26 = (bool)hasExclusiveAccess(piVar11);
    if (bVar26) {
      *(char *)piVar11 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a37744;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(piVar11);
LAB_01a37744:
  FUN_0165098c(piVar11);
  uVar5 = piVar10[6];
  uVar12 = piVar10[7];
  iVar21 = piVar10[10];
  piVar10[10] = iVar21 + -1;
  if (iVar21 + -1 == 0) {
    FUN_019e03e8(piVar10 + 0xc);
    *(undefined1 *)(piVar10 + 0xb) = 1;
  }
  FUN_01650a90(piVar11);
  if ((char)*piVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar26 = (bool)hasExclusiveAccess(piVar11);
      if (bVar26) {
        *(char *)piVar11 = '\0';
        goto LAB_01a377c8;
      }
    } while ((char)*piVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar11);
LAB_01a377c8:
  if (uVar5 != 0 || uVar12 != 0) {
    local_250 = 0;
    uVar24 = 0;
    do {
      uVar17 = piVar10[0x10] & local_250;
      if ((uint)piVar10[3] <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,piVar10[3],&DAT_01d2a550);
      }
      pcVar19 = (char *)(piVar10[2] + uVar17 * 0x38);
      if (*pcVar19 == '\0') {
        bVar26 = (bool)hasExclusiveAccess(pcVar19);
        if (!bVar26) goto LAB_01a37830;
        *pcVar19 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_01a37830:
        FUN_0164fba8(pcVar19);
      }
      FUN_0165098c(pcVar19);
      if (*(uint *)(pcVar19 + 8) == local_250 && *(uint *)(pcVar19 + 0xc) == uVar24) {
LAB_01a37a88:
        uVar17 = local_250 + 1;
        uVar25 = uVar24 + (0xfffffffe < local_250);
        FUN_01a18404(pcVar19);
      }
      else {
        FUN_01650a90(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar26) {
              *pcVar19 = '\0';
              goto LAB_01a37898;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar19);
LAB_01a37898:
        if ((char)*piVar11 == '\0') {
          bVar26 = (bool)hasExclusiveAccess(piVar11);
          if (!bVar26) goto LAB_01a378c0;
          *(char *)piVar11 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_01a378c0:
          FUN_0164fba8(piVar11);
        }
        FUN_0165098c(piVar11);
        if ((uint)piVar10[3] <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar17,piVar10[3],&DAT_01d2a560);
        }
        pcVar19 = (char *)(piVar10[2] + uVar17 * 0x38);
        if (*pcVar19 == '\0') {
          bVar26 = (bool)hasExclusiveAccess(pcVar19);
          if (!bVar26) goto LAB_01a3790c;
          *pcVar19 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_01a3790c:
          FUN_0164fba8(pcVar19);
        }
        FUN_0165098c(pcVar19);
        uVar17 = *(uint *)(pcVar19 + 8);
        if (uVar17 == local_250 && *(uint *)(pcVar19 + 0xc) == uVar24) {
          FUN_01650a90(piVar11);
          if ((char)*piVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(piVar11);
              if (bVar26) {
                *(char *)piVar11 = '\0';
                goto LAB_01a37a88;
              }
            } while ((char)*piVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c();
          goto LAB_01a37a88;
        }
        uVar25 = piVar10[3];
        if (uVar17 + uVar25 == local_250 &&
            *(uint *)(pcVar19 + 0xc) + (uint)CARRY4(uVar17,uVar25) == uVar24) {
          if ((char)piVar10[0xb] == '\0') {
            FUN_01650a90(pcVar19);
            if (*pcVar19 != '\x01') goto LAB_01a37cb0;
            DataMemoryBarrier(0xb);
            goto LAB_01a37c98;
          }
          FUN_01650a90(piVar11);
          uVar17 = local_250;
          uVar25 = uVar24;
          if ((char)*piVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(piVar11);
              if (bVar26) {
                *(char *)piVar11 = '\0';
                local_258 = 1;
                goto LAB_01a37ad4;
              }
            } while ((char)*piVar11 == '\x01');
          }
          ClearExclusiveLocal();
          local_258 = 1;
          FUN_0164f86c();
        }
        else {
          uVar15 = piVar10[6];
          uVar17 = uVar15 - uVar25;
          uVar25 = piVar10[7] - (uint)(uVar15 < uVar25);
          FUN_01650a90(piVar11);
          if ((char)*piVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar26 = (bool)hasExclusiveAccess(piVar11);
              if (bVar26) {
                *(char *)piVar11 = '\0';
                goto LAB_01a37a60;
              }
            } while ((char)*piVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(piVar11);
LAB_01a37a60:
          local_258 = 2;
          if (uVar17 == local_250 && uVar25 == uVar24) goto LAB_01a37a88;
        }
LAB_01a37ad4:
        FUN_01650a90(pcVar19);
        if (*pcVar19 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(pcVar19);
            if (bVar26) {
              *pcVar19 = '\0';
              goto LAB_01a37b14;
            }
          } while (*pcVar19 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pcVar19);
LAB_01a37b14:
        if (local_258 != 2) break;
      }
      uVar24 = uVar25;
      local_250 = uVar17;
    } while (uVar25 <= uVar12 && (uint)(uVar5 <= uVar17) <= uVar25 - uVar12);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar21 = *piVar10;
    bVar26 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar26);
  *piVar10 = iVar21 + -1;
  if (iVar21 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a388cc(piVar10);
  }
  FUN_019fba9c(&local_188);
  FUN_0193d87c(&local_1a0);
  FUN_019fcf58(&local_1b8);
  FUN_0193d87c(&local_1d0);
  FUN_019fafc0(&local_1e8);
  FUN_0193d87c(&local_200);
  FUN_019fb37c(&local_218);
  FUN_019fc9e4(&local_230);
  FUN_019fafc0(&local_248);
  return;
  while (*pcVar19 == '\x01') {
LAB_01a37c98:
    bVar26 = (bool)hasExclusiveAccess(pcVar19);
    if (bVar26) {
      *pcVar19 = '\0';
      goto LAB_01a37cbc;
    }
  }
LAB_01a37cb0:
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar19);
LAB_01a37cbc:
  FUN_01650a90(piVar11);
  if ((char)*piVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar26 = (bool)hasExclusiveAccess(piVar11);
      if (bVar26) {
        *(char *)piVar11 = '\0';
        goto LAB_01a37d00;
      }
    } while ((char)*piVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar11);
LAB_01a37d00:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("unexpected empty broadcast channelevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/tokio-cron-scheduler-0.19.0/src/simple/to_code.rs:59"
               ,0x45,&DAT_01d2a570);
}

