// FUN_019c9f0c @ 019c9f0c size=2116 calls_out=20 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019c9f0c(int *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int extraout_r1;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  byte bVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  longlong lVar27;
  int local_5e0;
  int local_5dc;
  int local_5b4;
  int local_5b0;
  undefined1 auStack_588 [160];
  undefined1 auStack_4e8 [120];
  undefined4 local_470;
  undefined4 local_46c;
  int local_468;
  int local_464;
  int local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 auStack_400 [160];
  undefined1 auStack_360 [120];
  int local_2e8;
  int local_2e4;
  uint local_2e0;
  undefined1 auStack_270 [160];
  undefined1 auStack_1d0 [120];
  undefined1 auStack_158 [3];
  undefined1 local_155;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int local_d0;
  int local_cc;
  undefined1 auStack_c8 [148];
  int local_34;
  
  puVar10 = *(undefined4 **)(param_2 + 0xc);
  if (*(undefined4 **)(param_2 + 4) == puVar10) {
    iVar8 = 2;
  }
  else {
    puVar9 = *(undefined4 **)(param_2 + 4);
    do {
      local_470 = *puVar9;
      local_46c = puVar9[1];
      local_468 = puVar9[2];
      local_464 = puVar9[3];
      puVar25 = puVar9 + 0xe;
      local_460 = puVar9[4];
      uStack_45c = puVar9[5];
      uStack_458 = puVar9[6];
      uStack_454 = puVar9[7];
      uStack_450 = puVar9[8];
      local_44c = puVar9[9];
      local_448 = puVar9[10];
      local_444 = puVar9[0xb];
      uStack_440 = puVar9[0xc];
      uStack_43c = puVar9[0xd];
      *(undefined4 **)(param_2 + 4) = puVar25;
      local_438 = *puVar9;
      uStack_434 = puVar9[1];
      uStack_430 = puVar9[2];
      uStack_42c = puVar9[3];
      local_428 = puVar9[4];
      uStack_424 = puVar9[5];
      uStack_420 = puVar9[6];
      uStack_41c = puVar9[7];
      uStack_418 = puVar9[8];
      local_414 = puVar9[9];
      uStack_410 = puVar9[10];
      uStack_40c = puVar9[0xb];
      uStack_408 = puVar9[0xc];
      uStack_404 = puVar9[0xd];
      iVar8 = (**(code **)(((undefined4 *)*param_3)[1] + 0x14))
                        (*(undefined4 *)*param_3,&local_438,*(undefined4 *)param_3[1],
                         ((undefined4 *)param_3[1])[1]);
      uVar6 = uStack_43c;
      uVar5 = uStack_440;
      uVar4 = local_444;
      uVar3 = local_46c;
      uVar2 = local_470;
      if (iVar8 == 0) {
        puVar9 = &local_438;
LAB_019ca4a4:
        FUN_019bd168(puVar9);
      }
      else {
        uVar21 = *(undefined4 *)param_4[1];
        uVar26 = *(undefined4 *)*param_4;
        uVar13 = ((undefined4 *)param_4[1])[1];
        iVar14 = *(int *)param_4[2];
        FUN_01bed4e2(auStack_158,param_4[3],9);
        iVar8 = FUN_019c93f4(uVar26,uVar6);
        if (iVar8 == 0) {
          local_2e8 = -1;
          FUN_019bd2cc(&local_148,uVar4,uVar5,&local_2e8);
          local_5b4 = local_144;
          local_5b0 = local_148;
          if (local_148 == -0x80000000) {
LAB_019ca128:
            iVar8 = 3;
            if (local_2e8 != -1) {
              FUN_019bd26c();
            }
          }
          else {
            FUN_019bd4b8(&local_148,local_144,local_140);
            iVar7 = local_144;
            iVar17 = local_148;
            if (local_148 == -0x80000000) {
              FUN_0134bd64(local_5b0,local_5b4);
              goto LAB_019ca128;
            }
            FUN_019bd8fc(&local_148,uVar6,uVar2,uVar3,local_144,local_140,uVar4,uVar5,iVar14,
                         auStack_158,uVar21,uVar13);
            iVar14 = local_2e8;
            if (local_34 != -1) {
              FUN_019bd26c();
            }
            iVar8 = local_148;
            local_34 = iVar14;
            FUN_01bed4e2(auStack_1d0,(uint)&local_148 | 4,0x74);
            local_5dc = local_d0;
            local_5e0 = local_cc;
            FUN_01bed4e2(auStack_270,auStack_c8,0xa0);
            FUN_0134aee0(iVar17,iVar7,4,8);
LAB_019ca494:
            FUN_0134bd64(local_5b0,local_5b4);
          }
          if (iVar8 == 3) {
LAB_019ca4a0:
            puVar9 = &local_470;
            goto LAB_019ca4a4;
          }
          FUN_01bed4e2(&local_2e8,auStack_1d0,0x74);
          FUN_01bed4e2(&local_148,auStack_270,0xa0);
          if (iVar8 != 2) {
            if ((local_5dc != 0 && local_5e0 != 0) &&
               (iVar14 = local_5e0 * 4 + 4, local_5e0 + iVar14 != -5)) {
              thunk_FUN_01be4678(local_5dc - iVar14);
            }
            iVar17 = local_464;
            iVar14 = local_468;
            local_148 = local_460;
            local_144 = uStack_45c;
            local_140 = uStack_458;
            uStack_13c = uStack_454;
            uStack_138 = uStack_450;
            uStack_134 = local_44c;
            FUN_01bed4e2(auStack_360,&local_2e8,0x74);
            FUN_01bed4e2(auStack_400,&local_148,0xa0);
            FUN_0134bd64(local_448,uVar4);
            FUN_01bed4e2(auStack_4e8,auStack_360,0x74);
            FUN_01bed4e2(auStack_588,auStack_400,0xa0);
            FUN_01bed4e2(param_1 + 1,auStack_4e8,0x74);
            param_1[0x1e] = iVar14;
            param_1[0x1f] = iVar17;
            FUN_01bed4e2(param_1 + 0x20,auStack_588,0xa0);
            goto LAB_019ca630;
          }
        }
        else {
          piVar18 = (int *)(iVar8 + 0x114);
          iVar17 = *piVar18;
          *piVar18 = -1;
          if (iVar17 == -1) {
            FUN_019bd2cc(&local_148,uVar4,uVar5,piVar18);
            local_5b0 = local_148;
            if (local_148 != -0x80000000) {
              local_5b4 = local_144;
              uVar22 = local_140;
              goto LAB_019ca1b4;
            }
            goto LAB_019ca4a0;
          }
          local_14c = iVar17;
          FUN_019ca9c4(&local_2e8,&local_14c,0x400);
          uVar22 = local_2e0;
          local_5b0 = local_2e8;
          if (local_2e8 == -0x80000000) {
            FUN_019bd2cc(&local_148,*(undefined4 *)(iVar8 + 0xe0),*(undefined4 *)(iVar8 + 0xe4),
                         piVar18);
            uVar22 = local_140;
            local_5b0 = local_148;
            if (local_148 == -0x80000000) {
              FUN_019bd494(&local_2e8);
              FUN_019bd26c(iVar17);
              goto LAB_019ca4a0;
            }
            local_5b4 = local_144;
            FUN_019bd494(&local_2e8);
            FUN_019bd26c(iVar17);
          }
          else {
            local_5b4 = local_2e4;
            if (*piVar18 != -1) {
              FUN_019bd26c();
            }
            *piVar18 = iVar17;
          }
LAB_019ca1b4:
          FUN_019bd4b8(&local_148,local_5b4,uVar22);
          uVar22 = local_140;
          iVar7 = local_144;
          iVar17 = local_148;
          if (local_148 == -0x80000000) {
            iVar8 = 3;
            goto LAB_019ca494;
          }
          if (local_140 < 0x16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0x15,local_140,&DAT_01d283ac);
          }
          uVar15 = *(uint *)(local_144 + 0xac);
          if (uVar15 == 0) {
LAB_019ca3c0:
            uVar1 = 0;
          }
          else {
            pbVar16 = *(byte **)(local_144 + 0xa8);
            if (uVar15 != 1) {
              bVar20 = *pbVar16;
LAB_019ca2fc:
              if (bVar20 == 0x2b) {
                pbVar16 = pbVar16 + 1;
                uVar15 = uVar15 - 1;
              }
              if (uVar15 < 0x11) {
                if (uVar15 != 0) {
                  uVar1 = 0;
                  do {
                    bVar20 = *pbVar16;
                    if (9 < bVar20 - 0x30) goto LAB_019ca3c0;
                    pbVar16 = pbVar16 + 1;
                    uVar15 = uVar15 - 1;
                    uVar1 = (uVar1 & 0xffffffff) * 10 +
                            CONCAT44((int)(uVar1 >> 0x20) * 10,bVar20 - 0x30);
                  } while (uVar15 != 0);
                  goto LAB_019ca3c4;
                }
              }
              else {
                uVar23 = 0;
                uVar11 = 0;
                do {
                  uVar1 = CONCAT44(uVar11,uVar23);
                  if (uVar15 == 0) goto LAB_019ca3c4;
                  uVar24 = (uint)((ulonglong)uVar23 * 10);
                  uVar19 = (uint)((ulonglong)uVar23 * 10 >> 0x20);
                  uVar23 = (uint)((ulonglong)uVar11 * 10);
                  uVar12 = uVar19 + uVar23;
                  if (((int)((ulonglong)uVar11 * 10 >> 0x20) != 0 || CARRY4(uVar19,uVar23)) ||
                     (uVar19 = *pbVar16 - 0x30, 9 < uVar19)) break;
                  uVar23 = uVar24 + uVar19;
                  pbVar16 = pbVar16 + 1;
                  uVar11 = uVar12 + CARRY4(uVar24,uVar19);
                  uVar15 = uVar15 - 1;
                } while (!CARRY4(uVar12,(uint)CARRY4(uVar24,uVar19)));
              }
              goto LAB_019ca3c0;
            }
            bVar20 = *pbVar16;
            if (bVar20 == 0x2b) goto LAB_019ca3c0;
            uVar1 = 0;
            if (bVar20 != 0x2d) goto LAB_019ca2fc;
          }
LAB_019ca3c4:
          if (*(int *)(iVar14 + 8) == 0 && *(int *)(iVar14 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012ffdf4(&DAT_01d283bc,(int)(uVar1 >> 0x20));
          }
          lVar27 = FUN_01bf0ff0((int)uVar1);
          if (lVar27 == *(longlong *)(iVar8 + 0x60)) {
            FUN_019a66e4(&local_148,uVar4,uVar5,"a",1);
            FUN_019bde0c(iVar8,uVar2,uVar3,auStack_158,&local_148,iVar7,uVar22);
            FUN_019bf080(iVar8,&local_148,local_155);
            FUN_0134bd64(local_148,local_144);
            FUN_0134aee0(iVar17,iVar7,4,8);
            iVar8 = 2;
            goto LAB_019ca494;
          }
          FUN_019bd8fc(&local_148,uVar6,uVar2,uVar3,iVar7,uVar22,uVar4,uVar5,iVar14,auStack_158,
                       uVar21,uVar13);
          iVar8 = FUN_019c93f4(uVar26,uVar6);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2835c);
          }
          FUN_019bd1b4();
          FUN_01bed4e2(iVar8,&local_148,0x120);
          FUN_0134aee0(iVar17,iVar7,4,8);
          FUN_0134bd64(local_5b0,local_5b4);
          FUN_01bed4e2(&local_2e8,auStack_1d0,0x74);
          FUN_01bed4e2(&local_148,auStack_270,0xa0);
        }
        FUN_01bed4e2(auStack_360,&local_2e8,0x74);
        FUN_01bed4e2(auStack_400,&local_148,0xa0);
        FUN_0134bd64(local_448,uVar4);
        iVar8 = extraout_r1;
        if (local_468 != 0) {
          iVar8 = local_464;
        }
        if ((local_468 != 0 && iVar8 != 0) && (iVar14 = iVar8 * 4 + 4, iVar8 + iVar14 != -5)) {
          thunk_FUN_01be4678(local_468 - iVar14);
        }
      }
      puVar9 = puVar25;
    } while (puVar25 != puVar10);
    iVar8 = 2;
  }
LAB_019ca630:
  *param_1 = iVar8;
  return;
}

