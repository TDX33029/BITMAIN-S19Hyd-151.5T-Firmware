// FUN_0129c360 @ 0129c360 size=11572 calls_out=63 calls_in=2
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues | Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

/* WARNING: Removing unreachable block (ram,0x0129e49c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint ******* FUN_0129c360(uint *******param_1,uint *******param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  uint ******ppppppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint *****pppppuVar13;
  uint *******extraout_r1;
  uint *****pppppuVar14;
  uint uVar15;
  uint ******ppppppuVar16;
  uint uVar17;
  uint *****pppppuVar18;
  uint ****ppppuVar19;
  uint *******pppppppuVar20;
  uint *******pppppppuVar21;
  uint ****ppppuVar22;
  byte *pbVar23;
  uint *******pppppppuVar24;
  byte bVar25;
  int iVar26;
  uint *******pppppppuVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint *******pppppppuVar30;
  int iVar31;
  uint ******ppppppuVar32;
  uint *******pppppppuVar33;
  bool bVar34;
  bool bVar35;
  longlong lVar36;
  undefined8 uVar37;
  uint *******local_218;
  uint *******local_210;
  uint *******local_20c;
  uint *******local_204;
  uint *******local_200;
  uint *******local_1fc;
  uint *******local_1f8;
  uint *******local_1d8;
  uint *******local_1d4;
  uint *******local_1c0;
  uint local_1b4;
  uint local_1b0;
  int local_1a4;
  uint *******local_19c;
  uint *******local_198;
  uint *******local_18c;
  uint *******local_188;
  uint *******local_184;
  uint *******local_17c;
  uint *******local_178;
  uint *******local_174;
  uint *******local_170;
  uint *******local_16c;
  uint *******local_168;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  uint *******pppppppuStack_148;
  uint *******pppppppuStack_144;
  uint *******local_140;
  uint *******local_13c;
  uint *******local_138;
  uint *******local_134;
  uint *******local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint *******local_120;
  uint *******local_11c;
  uint *******local_118;
  uint *******local_114;
  uint *******local_110;
  uint *******pppppppuStack_10c;
  uint *******local_108;
  uint *******pppppppuStack_104;
  uint *******pppppppuStack_100;
  undefined4 uStack_fc;
  uint *******local_f8;
  uint *******local_f4;
  uint *******local_f0;
  uint *******local_ec;
  uint *******local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [8];
  int local_d0;
  uint ******local_cc [7];
  uint *******local_b0;
  uint *******local_ac;
  uint ******local_a8;
  int local_a4;
  uint ******local_a0;
  uint *******local_98;
  uint *******local_94;
  uint *******local_90;
  uint *******local_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******local_70;
  uint *******pppppppuStack_6c;
  uint *******pppppppuStack_68;
  uint *******pppppppuStack_64;
  uint *******local_60;
  uint *******local_5c;
  uint *******pppppppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  
  ppppppuVar2 = param_1[2];
  pppppuVar13 = ppppppuVar2[0x16];
  if (pppppuVar13 == (uint *****)0x0) {
    iVar31 = 0;
  }
  else {
    iVar31 = 0;
    pppppuVar14 = ppppppuVar2[0x15];
    do {
      if (*pppppuVar14 == (uint ****)0x2) {
        iVar31 = iVar31 + 1;
      }
      pppppuVar13 = (uint *****)((int)pppppuVar13 + -1);
      pppppuVar14 = pppppuVar14 + 4;
    } while (pppppuVar13 != (uint *****)0x0);
  }
  pppppuVar13 = ppppppuVar2[0x12];
  iVar26 = (int)ppppppuVar2[0x13] * 0x134;
  do {
    iVar12 = iVar26;
    if (iVar12 == 0) break;
    pbVar23 = (byte *)((int)pppppuVar13 + 0x11d);
    pppppuVar13 = pppppuVar13 + 0x4d;
    iVar26 = iVar12 + -0x134;
  } while ((*pbVar23 & 1) == 0);
  uVar3 = *(uint *)(param_3 + 8);
  local_1a4 = 1;
  iVar26 = *(int *)(param_3 + 4);
  uVar17 = 0;
  puVar4 = (undefined4 *)((uint)&local_160 | 4);
  local_1b0 = 0;
  local_18c = (uint *******)0x0;
  do {
    local_19c = local_1d4;
    local_198 = local_1d8;
    uVar15 = param_4;
LAB_0129c480:
    if (uVar3 <= uVar15) goto LAB_0129debc;
    param_4 = uVar15 + 1;
    if (uVar15 == 0xffffffff) {
      param_4 = 0xffffffff;
    }
    iVar5 = iVar26 + uVar15 * 0xc;
    pppppppuVar20 = *(uint ********)(iVar5 + 4);
    local_188 = *(uint ********)(iVar5 + 8);
    if (uVar17 != 0) goto LAB_0129d818;
    ppppppuVar2 = param_1[2];
    bVar34 = (*(byte *)((int)ppppppuVar2 + 0x145) & 0x40) == 0;
    if (bVar34) {
      ppppppuVar2 = (uint ******)(uint)*(byte *)((int)ppppppuVar2 + 0x149);
    }
    if ((!bVar34 || ((uint)ppppppuVar2 & 0x40) != 0) || (local_18c == (uint *******)0x0)) {
      FUN_012fbd94(&local_88,pppppppuVar20,local_188);
      local_160 = local_88;
      local_15c = local_84;
      local_158 = local_80;
      if (local_88 != (uint *******)0x0) {
        local_15c = pppppppuVar20;
        local_158 = local_188;
      }
      lVar36 = FUN_012a0bb8(param_1,&local_160,local_1b0);
      pppppppuVar27 = (uint *******)((ulonglong)lVar36 >> 0x20);
      piVar6 = (int *)lVar36;
      if (piVar6 != (int *)0x0) {
        local_1f8 = pppppppuVar27;
        if (pppppppuVar27 == (uint *******)&SUB_00000004) {
          if (*piVar6 == 0x706c6568) {
            ppppppuVar2 = param_1[2];
            bVar25 = *(byte *)((int)ppppppuVar2 + 0x146);
            bVar34 = (bVar25 & 0x10) == 0;
            if (bVar34) {
              bVar25 = *(byte *)((int)ppppppuVar2 + 0x14a);
            }
            if (bVar34 && (bVar25 & 0x10) == 0) {
              uVar3 = *(uint *)(param_3 + 8);
              if (uVar3 < param_4) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(param_4,uVar3,uVar3,&DAT_01ce29ac);
              }
              pppppppuVar27 =
                   (uint *******)
                   FUN_012a0d8c(ppppppuVar2,*(int *)(param_3 + 4) + param_4 * 0xc,
                                *(int *)(param_3 + 4) + uVar3 * 0xc);
              goto LAB_0129df80;
            }
          }
LAB_0129e068:
          pppppppuVar20 = (uint *******)FUN_01298504(pppppppuVar27,1);
          if (pppppppuVar20 == (uint *******)0x0) goto LAB_0129ff14;
          pppppppuVar33 = pppppppuVar27;
        }
        else {
          if (lVar36 < 0) goto LAB_0129e2c4;
          if (pppppppuVar27 != (uint *******)0x0) goto LAB_0129e068;
          pppppppuVar33 = (uint *******)0x0;
          pppppppuVar20 = (uint *******)&DAT_00000001;
        }
        FUN_01bed4e2(pppppppuVar20,piVar6,pppppppuVar27);
        ppppppuVar2 = param_1[2];
        if ((*(byte *)((int)ppppppuVar2 + 0x145) & 0x20) == 0) {
          local_1b0 = local_1b0 & (*(byte *)((int)ppppppuVar2 + 0x149) & 0x20) >> 5;
        }
        if (local_1b0 == 0) {
          pppppuVar13 = ppppppuVar2[0x18];
          pppppuVar14 = ppppppuVar2[0x19];
          iVar31 = 0;
          goto LAB_0129e0f0;
        }
        FUN_006666fc(&local_f8,pppppppuVar20,pppppppuVar27);
        ppppppuVar9 = param_2[9];
        ppppppuVar32 = ppppppuVar9 + (int)param_2[10] * 2;
        iVar31 = (int)param_2[10] << 3;
        ppppppuVar16 = param_1[2];
        break;
      }
    }
    uVar15 = param_4;
    if (local_188 != (uint *******)0x2) {
      if (&DAT_00000001 < local_188) goto LAB_0129c5a4;
      if (local_188 != (uint *******)0x0) goto LAB_0129c5c0;
LAB_0129c5dc:
      if (local_18c != (uint *******)0x1) goto LAB_0129d818;
LAB_0129c5e8:
      iVar5 = FUN_012a4850(param_1[2][0x12],param_1[2][0x13],local_198,local_19c,&DAT_01ce2334);
      if (((*(int *)(iVar5 + 0x128) == 0) || (local_188 != *(uint ********)(iVar5 + 300))) ||
         (iVar7 = thunk_FUN_01bed842(pppppppuVar20,*(int *)(iVar5 + 0x128),local_188), iVar7 != 0))
      {
        if (*param_2 == (uint ******)0x2) {
          param_2[3] = (uint ******)0x4;
          *(byte *)(param_2 + 7) = 3;
          param_2[5] = (uint ******)local_198;
          param_2[2] = (uint ******)0x0;
          param_2[4] = (uint ******)0x0;
          param_2[6] = (uint ******)local_19c;
          *param_2 = (uint ******)0x0;
        }
        pppppppuVar21 = (uint *******)0x0;
        if ((int)local_188 < 0) goto LAB_0129ddf0;
        if (local_188 == (uint *******)0x0) {
          pppppppuVar27 = (uint *******)0x0;
          local_1f8 = (uint *******)&DAT_00000001;
        }
        else {
          local_1f8 = (uint *******)FUN_01298504(local_188,1);
          pppppppuVar27 = local_188;
          if (local_1f8 == (uint *******)0x0) goto LAB_0129ff14;
        }
        FUN_01bed4e2(local_1f8,pppppppuVar20,local_188);
        ppppppuVar2 = param_2[4];
        if (ppppppuVar2 == param_2[2]) {
          FUN_019abd3c(param_2 + 2);
        }
        ppppppuVar9 = param_2[3] + (int)ppppppuVar2 * 3;
        *ppppppuVar9 = (uint *****)pppppppuVar27;
        ppppppuVar9[1] = (uint *****)local_1f8;
        ppppppuVar9[2] = (uint *****)local_188;
        ppppppuVar9 = (uint ******)0x0;
        param_2[4] = (uint ******)((int)ppppppuVar2 + 1U);
        if ((*param_2 != (uint ******)0x2) && (param_2[6] == *(uint *******)(iVar5 + 0x118))) {
          iVar7 = thunk_FUN_01bed842(param_2[5],*(undefined4 *)(iVar5 + 0x114));
          ppppppuVar9 = (uint ******)((int)ppppppuVar2 + 1U);
          if (iVar7 != 0) {
            ppppppuVar9 = (uint ******)0x0;
          }
        }
        if ((*(uint *)(iVar5 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                       ,99,&DAT_01ce2784);
        }
        if (*(uint *******)(iVar5 + 0x10) <= ppppppuVar9) goto LAB_0129ca4c;
        local_198 = *(uint ********)(iVar5 + 0x114);
        local_19c = *(uint ********)(iVar5 + 0x118);
        local_88 = (uint *******)&DAT_80000001;
        local_18c = (uint *******)0x1;
        local_84 = local_198;
        local_80 = local_19c;
      }
      else {
LAB_0129ca4c:
        local_88 = (uint *******)0x80000002;
        FUN_012a3b0c(&local_88);
        local_18c = (uint *******)0x0;
        local_198 = local_200;
        local_19c = local_1fc;
      }
      uVar17 = 0;
      local_200 = local_198;
      local_1fc = local_19c;
      goto LAB_0129c480;
    }
    if (*(short *)pppppppuVar20 != 0x2d2d) {
LAB_0129c5a4:
      if ((*(short *)pppppppuVar20 == 0x2d2d) &&
         (pppppppuVar27 = (uint *******)((int)local_188 + -2), pppppppuVar27 != (uint *******)0x0))
      {
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 2);
        FUN_012c1e5c(&local_88,pppppppuVar20,pppppppuVar27,&DAT_00531a0c,1);
        if (local_88 == (uint *******)0x0) {
          local_1c0 = (uint *******)0x0;
        }
        else {
          local_1c0 = local_80;
          local_204 = local_7c;
          pppppppuVar27 = local_84;
          pppppppuVar20 = local_88;
        }
        FUN_012fbd94(&local_88,pppppppuVar20,pppppppuVar27);
        pppppppuVar21 = local_88;
        local_1f8 = local_80;
        pppppppuVar33 = local_84;
        if (local_88 != (uint *******)0x0) {
          local_1f8 = pppppppuVar27;
          pppppppuVar33 = pppppppuVar20;
        }
        if ((local_18c != (uint *******)0x0) &&
           (iVar31 = FUN_012a4850(param_1[2][0x12],param_1[2][0x13],local_198,local_19c,
                                  &DAT_01ce2284), (*(byte *)(iVar31 + 0x11c) & 0x20) != 0)) {
          pppppppuVar20 = (uint *******)&DAT_80000005;
          goto LAB_0129d624;
        }
        if (pppppppuVar21 != (uint *******)0x0) {
          FUN_006643f0(&local_160,pppppppuVar33,local_1f8);
          FUN_0160ec7c((uint)&local_88 | 4,&local_160);
          pppppppuVar20 = (uint *******)0x80000007;
          goto LAB_0129d624;
        }
        pppppppuVar21 = (uint *******)param_1[2];
        iVar31 = (int)pppppppuVar21[0x16] << 4;
        pppppppuVar20 = pppppppuVar21 + 0x11;
        ppppppuVar2 = pppppppuVar21[0x15];
        local_b0 = pppppppuVar33;
        local_ac = local_1f8;
        goto LAB_0129ceac;
      }
LAB_0129c5c0:
      pppppppuVar27 = (uint *******)((int)pppppppuVar20 + 1);
      if (*(byte *)pppppppuVar20 == 0x2d) {
        pppppppuVar33 = (uint *******)((int)local_188 + -1);
        bVar25 = 0x2d;
        if (pppppppuVar33 != (uint *******)0x0) {
          bVar25 = *(byte *)pppppppuVar27;
        }
        if (!(pppppppuVar33 != (uint *******)0x0 && bVar25 != 0x2d)) goto LAB_0129c5dc;
        FUN_012fbd94(&local_160,pppppppuVar27,pppppppuVar33);
        pppppppuVar20 = local_15c;
        if (local_160 == (uint *******)&DAT_00000001) {
          if (pppppppuVar33 < local_15c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01ce299c);
          }
          FUN_012fbd94(&local_88,pppppppuVar27,local_15c);
          if (local_88 == (uint *******)&DAT_00000001) {
            local_120 = local_84;
            local_11c = local_80;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_120,&DAT_01ce294c,&DAT_01ce298c);
          }
          pppppppuVar30 = (uint *******)((int)pppppppuVar27 + (int)pppppppuVar20);
          pppppppuVar20 = (uint *******)((int)pppppppuVar33 - (int)pppppppuVar20);
          pppppppuVar21 = local_84;
          pppppppuVar24 = local_80;
        }
        else {
          pppppppuVar30 = (uint *******)0x0;
          pppppppuVar20 = local_160;
          pppppppuVar21 = local_15c;
          pppppppuVar24 = local_158;
        }
        local_16c = (uint *******)0x0;
        pppppppuVar8 = (uint *******)((int)pppppppuVar21 + (int)pppppppuVar24);
        ppppppuVar2 = param_1[2];
        local_17c = pppppppuVar27;
        local_178 = pppppppuVar33;
        local_174 = pppppppuVar21;
        local_170 = pppppppuVar8;
        local_168 = pppppppuVar30;
        local_164 = pppppppuVar20;
        if ((local_18c != (uint *******)0x0) &&
           ((iVar31 = FUN_012a4850(ppppppuVar2[0x12],ppppppuVar2[0x13],local_198,local_19c,
                                   &DAT_01ce2294), (*(byte *)(iVar31 + 0x11c) & 0x20) != 0 ||
            (((iVar31 = FUN_012a4850(ppppppuVar2[0x12],ppppppuVar2[0x13],local_198,local_19c,
                                     &DAT_01ce22a4), (*(byte *)(iVar31 + 0x11c) & 0x40) != 0 &&
              (pppppppuVar30 == (uint *******)0x0)) &&
             (iVar31 = FUN_012c20a8(pppppppuVar21,pppppppuVar24), iVar31 != 0))))))
        goto LAB_0129ca34;
        iVar31 = FUN_012b9fb0(ppppppuVar2 + 0x11,local_1a4);
        bVar25 = 0;
        if (iVar31 != 0) {
          bVar25 = *(byte *)(iVar31 + 0x11c);
        }
        if (((iVar31 != 0 && (bVar25 & 0x40) != 0) && (pppppppuVar30 == (uint *******)0x0)) &&
           (iVar31 = FUN_012c20a8(pppppppuVar21,pppppppuVar24), iVar31 != 0)) goto LAB_0129ca34;
        iVar31 = FUN_012b9fb0(ppppppuVar2 + 0x11,local_1a4);
        if ((iVar31 == 0) || ((*(uint *)(iVar31 + 0x11c) & 0x120) != 0x20)) goto LAB_0129c8d8;
        local_78 = (uint *******)0x0;
        local_88 = pppppppuVar27;
        local_84 = pppppppuVar33;
        local_80 = pppppppuVar21;
        local_7c = pppppppuVar8;
        local_74 = pppppppuVar30;
        local_70 = pppppppuVar20;
        goto LAB_0129c864;
      }
      goto LAB_0129c5dc;
    }
    if (local_18c == (uint *******)0x0) {
LAB_0129d17c:
      uVar37 = FUN_012b9fb0(param_1[2] + 0x11,local_1a4);
      iVar5 = (int)((ulonglong)uVar37 >> 0x20);
      iVar7 = (int)uVar37;
      if (iVar7 != 0) {
        iVar5 = *(int *)(iVar7 + 0x128);
      }
      if (((iVar7 != 0 && iVar5 != 0) && (*(int *)(iVar7 + 300) == 2)) &&
         (iVar5 = thunk_FUN_01bed842(pppppppuVar20,iVar5,2), iVar5 == 0)) {
        local_88 = (uint *******)0x80000002;
        FUN_012a3b0c(&local_88);
        local_1a4 = local_1a4 + 1;
      }
      uVar17 = 1;
      if ((*param_2 != (uint ******)0x2) && (((uint)*param_2 & 1) == 0)) {
        *param_2 = (uint ******)0x1;
        param_2[1] = param_2[4];
      }
      goto LAB_0129c480;
    }
    if (local_18c == (uint *******)0x1) {
      iVar5 = FUN_012a4850(param_1[2][0x12],param_1[2][0x13],local_198,local_19c,&DAT_01ce2324);
      if ((*(byte *)(iVar5 + 0x11c) & 0x20) == 0) goto LAB_0129d17c;
      goto LAB_0129c5e8;
    }
    iVar5 = FUN_012a4850(param_1[2][0x12],param_1[2][0x13],local_198,local_19c,&DAT_01ce2324);
    if ((*(byte *)(iVar5 + 0x11c) & 0x20) == 0) goto LAB_0129d17c;
    local_188 = (uint *******)0x2;
LAB_0129d818:
    bVar34 = false;
    bVar25 = 0;
    ppppppuVar2 = param_1[2];
    iVar5 = local_1a4 + 1;
    if ((iVar5 == iVar31) && (pppppuVar13 = ppppppuVar2[0x13], pppppuVar13 != (uint *****)0x0)) {
      pppppuVar14 = ppppppuVar2[0x12];
      iVar7 = 0;
LAB_0129d854:
      puVar10 = *(undefined1 **)((int)pppppuVar14 + iVar7 + 0x120);
      bVar35 = puVar10 == (undefined1 *)0x0;
      if (bVar35) {
        puVar10 = *(undefined1 **)((int)pppppuVar14 + iVar7 + 0x34);
      }
      if ((!bVar35 || puVar10 != &DAT_00110000) ||
         ((uVar15 = *(uint *)((int)pppppuVar14 + iVar7 + 0xc),
          (*(uint *)((int)pppppuVar14 + iVar7 + 8) & 1) == 0 ||
          uVar15 < 2 && uVar15 == *(uint *)((int)pppppuVar14 + iVar7 + 0x10) &&
          (*(char *)((int)pppppuVar14 + iVar7 + 0x130) != '\x01')))) goto LAB_0129d86c;
      iVar11 = *(int *)((int)pppppuVar14 + iVar7 + 0x18);
      if (*(int *)((int)pppppuVar14 + iVar7 + 0x14) == 0) {
        iVar11 = 0;
      }
      if (iVar31 == iVar11) goto LAB_0129d86c;
      pppppuVar18 = (uint *****)0x0;
      do {
        if ((pppppuVar14[0x48] == (uint ****)0x0) && (pppppuVar14[0xd] == (uint ****)&DAT_00110000))
        {
          pppppuVar18 = pppppuVar14;
        }
        pppppuVar14 = pppppuVar14 + 0x4d;
        pppppuVar13 = (uint *****)((int)pppppuVar13 + -1);
      } while (pppppuVar13 != (uint *****)0x0);
      if (pppppuVar18 != (uint *****)0x0) {
        bVar25 = ~*(byte *)((int)pppppuVar18 + 0x11d) & 1;
        goto LAB_0129d910;
      }
LAB_0129d90c:
      bVar25 = 0;
    }
LAB_0129d910:
    iVar7 = FUN_012b9fb0(ppppppuVar2 + 0x11,local_1a4);
    if ((iVar7 != 0) && (bVar34 = false, *(int *)(iVar7 + 0x128) != 0)) {
      bVar34 = true;
    }
    uVar15 = 1;
    ppppppuVar2 = param_1[2];
    if (((uint)ppppppuVar2[0x51] & 0x10) == 0) {
      uVar15 = (*(byte *)(ppppppuVar2 + 0x52) & 0x1f) >> 4;
    }
    if ((iVar5 == iVar31) && (uVar15 != 0)) {
      if (bVar25 == 0) {
        uVar1 = uVar17 != 0;
        goto joined_r0x0129d978;
      }
      if (bVar34) goto LAB_0129d97c;
LAB_0129d9e4:
      local_1b4 = uVar17;
      if ((param_4 < uVar3) && (pppppuVar13 = ppppppuVar2[0x13], pppppuVar13 != (uint *****)0x0)) {
        pppppuVar14 = ppppppuVar2[0x12];
        iVar7 = iVar26 + param_4 * 0xc;
        pppppppuVar33 = *(uint ********)(iVar7 + 4);
        pppppppuVar27 = *(uint ********)(iVar7 + 8);
        iVar7 = 0;
        do {
          if (*(int *)((int)pppppuVar14 + iVar7 + 0x120) == 0) {
            puVar10 = *(undefined1 **)((int)pppppuVar14 + iVar7 + 0x34);
            bVar34 = puVar10 == &DAT_00110000;
            if (bVar34) {
              puVar10 = *(undefined1 **)((int)pppppuVar14 + iVar7 + 0x14);
            }
            if ((bVar34 && puVar10 == (undefined1 *)0x1) &&
               (*(int *)((int)pppppuVar14 + iVar7 + 0x18) == local_1a4)) {
              iVar11 = FUN_012a4850(pppppuVar14,pppppuVar13,
                                    *(undefined4 *)((int)pppppuVar14 + iVar7 + 0x114),
                                    *(undefined4 *)((int)pppppuVar14 + iVar7 + 0x118),&DAT_01ce2264)
              ;
              if ((((*(byte *)(iVar11 + 0x11c) & 0x20) != 0) ||
                  ((iVar7 = FUN_012a4850(param_1[2][0x12],param_1[2][0x13],
                                         *(undefined4 *)((int)pppppuVar14 + iVar7 + 0x114),
                                         *(undefined4 *)((int)pppppuVar14 + iVar7 + 0x118),
                                         &DAT_01ce2274), (*(byte *)(iVar7 + 0x11c) & 0x40) != 0 &&
                   (iVar7 = FUN_012c2160(pppppppuVar33,pppppppuVar27), iVar7 != 0)))) ||
                 ((iVar7 = FUN_012c21c0(pppppppuVar33,pppppppuVar27), iVar7 == 0 &&
                  (iVar7 = FUN_012c2200(pppppppuVar33,pppppppuVar27), iVar7 == 0)))) {
                FUN_012fbd94(&local_88,pppppppuVar33,pppppppuVar27);
                local_160 = local_88;
                local_15c = local_84;
                local_158 = local_80;
                if (local_88 != (uint *******)0x0) {
                  local_15c = pppppppuVar33;
                  local_158 = pppppppuVar27;
                }
                iVar7 = FUN_012a0bb8(param_1,&local_160,local_1b0);
                if (iVar7 == 0) goto LAB_0129db58;
              }
              break;
            }
          }
          iVar7 = iVar7 + 0x134;
        } while ((int)pppppuVar13 * 0x134 != iVar7);
        local_1a4 = iVar5;
LAB_0129db58:
      }
      else {
        local_1a4 = iVar5;
      }
    }
    else {
      uVar1 = bVar25 != 1;
joined_r0x0129d978:
      if (!(bVar34 || (bool)uVar1)) goto LAB_0129d9e4;
LAB_0129d97c:
      if (uVar17 == 0) {
        local_1b4 = 0;
      }
      else {
        bVar34 = ((uint)ppppppuVar2[0x51] & 0x10) == 0;
        if (bVar34) {
          ppppppuVar2 = (uint ******)(uint)*(byte *)(ppppppuVar2 + 0x52);
        }
        uVar17 = 1;
        local_1b4 = 1;
        if (bVar34) {
          uVar17 = ((uint)ppppppuVar2 & 0x1f) >> 4;
        }
        if (uVar17 != 0) {
          local_1a4 = iVar31;
        }
        if (iVar12 != 0) {
          local_1a4 = iVar31;
        }
      }
    }
    iVar5 = FUN_012b9fb0(param_1[2] + 0x11);
    if (iVar5 == 0) {
      ppppppuVar2 = param_1[2];
      pppppppuVar27 = (uint *******)&DAT_0041fae0;
      if ((*(byte *)((int)ppppppuVar2 + 0x145) & 4) == 0) {
        pppppppuVar33 = (uint *******)(ppppppuVar2 + 4);
        if ((uint ******)ppppppuVar2[4] == (uint ******)0x5) {
          pppppppuVar33 = pppppppuVar27;
        }
        if ((*(byte *)((int)ppppppuVar2 + 0x149) & 4) == 0) {
          iVar31 = FUN_012a3520(param_1,param_2);
          if (iVar31 != 0) {
            FUN_012a3620();
          }
          if (local_1b4 == 0) {
            ppppppuVar2 = param_1[2];
            pppppuVar13 = ppppppuVar2[0x12];
            iVar31 = (int)ppppppuVar2[0x13] * 0x134;
            pppppuVar14 = pppppuVar13 + 0xd;
            goto LAB_0129f3e8;
          }
          FUN_012fbd94(&local_88,pppppppuVar20,local_188);
          local_160 = local_88;
          local_15c = local_84;
          local_158 = local_80;
          if (local_88 != (uint *******)0x0) {
            local_15c = pppppppuVar20;
            local_158 = local_188;
          }
          iVar31 = FUN_012a0bb8(param_1,&local_160,local_1b0);
          ppppppuVar2 = param_1[2];
          if (iVar31 == 0) goto LAB_0129f414;
          FUN_006643f0(&local_120,pppppppuVar20,local_188);
          local_f0 = local_118;
          pppppppuVar20 = local_11c;
          if ((int)local_118 < 0) {
            uVar28 = 0;
LAB_0129e800:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar28,local_f0);
          }
          if (local_118 == (uint *******)0x0) {
            pppppppuVar27 = (uint *******)0x0;
            pppppppuVar33 = (uint *******)&DAT_00000001;
          }
          else {
            uVar28 = 1;
            pppppppuVar33 = (uint *******)FUN_01298504(local_118,1);
            if (pppppppuVar33 == (uint *******)0x0) goto LAB_0129e800;
            pppppppuVar27 = local_f0;
          }
          FUN_01bed4e2(pppppppuVar33,pppppppuVar20,local_f0);
          pppppppuVar21 = (uint *******)param_1[2];
          local_f8 = pppppppuVar27;
          local_f4 = pppppppuVar33;
          pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar21 + 0x1d);
          local_80 = (uint *******)0x0;
          local_84 = (uint *******)&DAT_00420598;
          if (pppppppuVar27 != (uint *******)0x0) {
            local_84 = pppppppuVar27;
          }
          local_88 = pppppppuVar21;
          FUN_012b5c88(&local_160,&local_88,4,0);
          pppppppuVar27 = (uint *******)FUN_012bdba0(ppppppuVar2,&local_f8,&local_160);
          pppppppuVar33 = local_120;
          goto LAB_0129f11c;
        }
      }
      else {
        pppppppuVar33 = (uint *******)(ppppppuVar2 + 4);
        if ((uint ******)ppppppuVar2[4] == (uint ******)0x5) {
          pppppppuVar33 = pppppppuVar27;
        }
      }
      pppppppuVar21 = (uint *******)*pppppppuVar33;
      local_44 = param_1;
      if (&DAT_00000003 < pppppppuVar21) {
        uVar37 = (*(code *)pppppppuVar33[2][7])(pppppppuVar33[1]);
        pppppppuVar27 = (uint *******)((ulonglong)uVar37 >> 0x20);
        local_44 = (uint *******)uVar37;
      }
      local_48 = pppppppuVar21;
      local_40 = pppppppuVar27;
      FUN_012fbd94(&local_88,pppppppuVar20,local_188);
      pppppppuVar33 = local_84;
      pppppppuVar27 = local_80;
      if (local_88 != (uint *******)0x0) {
        pppppppuVar33 = pppppppuVar20;
        pppppppuVar27 = local_188;
      }
      if (local_88 == (uint *******)&DAT_00000001) {
        iVar31 = FUN_012a3520(param_1,param_2);
        if (iVar31 != 0) {
          FUN_012a3620();
        }
        pppppppuVar27 = (uint *******)param_1[2];
        pppppppuVar20 = (uint *******)FUN_012b9138(pppppppuVar27 + 0x1d);
        local_80 = (uint *******)0x0;
        local_84 = (uint *******)&DAT_00420598;
        if (pppppppuVar20 != (uint *******)0x0) {
          local_84 = pppppppuVar20;
        }
        local_88 = pppppppuVar27;
        FUN_012b5c88(&local_160,&local_88,4,0);
        pppppppuVar27 = (uint *******)FUN_012bca94(pppppppuVar27,&local_160);
      }
      else {
        if ((int)pppppppuVar27 < 0) {
          uVar28 = 0;
LAB_0129edf0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar28,pppppppuVar27);
        }
        if (pppppppuVar27 == (uint *******)0x0) {
          pppppppuVar20 = (uint *******)&DAT_00000001;
          local_18c = (uint *******)0x0;
        }
        else {
          uVar28 = 1;
          pppppppuVar20 = (uint *******)FUN_01298504(pppppppuVar27,1);
          if (pppppppuVar20 == (uint *******)0x0) goto LAB_0129edf0;
          local_18c = pppppppuVar27;
        }
        FUN_01bed4e2(pppppppuVar20,pppppppuVar33,pppppppuVar27);
        local_128 = 0;
        local_130 = (uint *******)&SUB_00000004;
        local_13c = (uint *******)&SUB_00000004;
        local_12c = 0;
        local_134 = (uint *******)0x0;
        local_138 = (uint *******)0x0;
        local_140 = (uint *******)0x0;
        local_160 = (uint *******)0x2;
        FUN_012c0190(&local_160,param_1[2]);
        uVar3 = *(uint *)(param_3 + 8);
        if (uVar3 < param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(param_4,uVar3,uVar3,&DAT_01ce29ac);
        }
        if (param_4 != uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0129f5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pppppppuVar20 =
               (uint *******)
               (*(code *)(&UNK_0129f5f0 + *(int *)(&UNK_0129f5f0 + (int)pppppppuVar21 * 4)))
                         (&UNK_01ce27e0,1,param_1[2]);
          return pppppppuVar20;
        }
        local_88 = local_160;
        local_84 = local_15c;
        local_80 = local_158;
        local_7c = local_154;
        local_78 = local_150;
        local_74 = local_14c;
        local_70 = pppppppuStack_148;
        pppppppuStack_6c = pppppppuStack_144;
        pppppppuStack_68 = local_140;
        pppppppuStack_64 = local_13c;
        local_60 = local_138;
        local_5c = local_134;
        pppppppuStack_58 = local_130;
        uStack_54 = local_12c;
        uStack_50 = local_128;
        local_f8 = local_140;
        local_f4 = local_13c;
        local_f0 = local_138;
        local_ec = local_134;
        local_e8 = local_130;
        uStack_e4 = local_12c;
        uStack_e0 = local_128;
        if (local_160 != (uint *******)0x2) {
          FUN_012987d4(&local_80);
        }
        local_120 = local_18c;
        local_114 = local_f8;
        local_110 = local_f4;
        pppppppuStack_10c = local_f0;
        local_108 = local_ec;
        pppppppuStack_104 = local_e8;
        pppppppuStack_100 = (uint *******)uStack_e4;
        uStack_fc = uStack_e0;
        local_11c = pppppppuVar20;
        local_118 = pppppppuVar27;
        FUN_012bf7a8(param_2);
        pppppppuVar27 = (uint *******)0x0;
      }
      FUN_012a3b74(&local_48);
      if (pppppppuVar27 != (uint *******)0x0) goto LAB_0129e388;
      goto LAB_0129debc;
    }
    uVar17 = *(uint *)(iVar5 + 0x11c);
    if ((uVar17 & 0x100) == 0x100 && local_1b4 == 0) {
      iVar31 = FUN_012a3520(param_1,param_2);
      if (iVar31 != 0) {
        FUN_012a3620();
      }
      ppppppuVar2 = param_1[2];
      FUN_006643f0(&local_f8,pppppppuVar20,local_188);
      local_40 = local_f0;
      pppppppuVar20 = local_f4;
      if ((int)local_f0 < 0) {
        uVar28 = 0;
LAB_0129e864:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar28,local_40);
      }
      if (local_f0 == (uint *******)0x0) {
        pppppppuVar27 = (uint *******)0x0;
        pppppppuVar33 = (uint *******)&DAT_00000001;
      }
      else {
        uVar28 = 1;
        pppppppuVar33 = (uint *******)FUN_01298504(local_f0,1);
        if (pppppppuVar33 == (uint *******)0x0) goto LAB_0129e864;
        pppppppuVar27 = local_40;
      }
      FUN_01bed4e2(pppppppuVar33,pppppppuVar20,local_40);
      local_88 = (uint *******)&DAT_80000000;
      pppppppuVar21 = (uint *******)param_1[2];
      local_48 = pppppppuVar27;
      local_44 = pppppppuVar33;
      pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar21 + 0x1d);
      local_158 = (uint *******)0x0;
      local_15c = (uint *******)&DAT_00420598;
      if (pppppppuVar27 != (uint *******)0x0) {
        local_15c = pppppppuVar27;
      }
      local_160 = pppppppuVar21;
      FUN_012b5c88(&local_120,&local_160,4,0);
      pppppppuVar27 = (uint *******)FUN_012bce00(ppppppuVar2,&local_48,&local_88,0,&local_120);
      goto LAB_0129f114;
    }
    if (((((*param_2 == (uint ******)0x2) || (param_2[6] != *(uint *******)(iVar5 + 0x118))) ||
         (iVar7 = thunk_FUN_01bed842(param_2[5],*(undefined4 *)(iVar5 + 0x114)), iVar7 != 0)) ||
        ((*(uint *)(iVar5 + 8) & 1) == 0 ||
         *(uint *)(iVar5 + 0xc) < 2 && *(uint *)(iVar5 + 0xc) == *(uint *)(iVar5 + 0x10))) &&
       (pppppppuVar27 = (uint *******)FUN_012a3520(param_1,param_2),
       pppppppuVar27 != (uint *******)0x0)) {
LAB_0129df80:
      goto LAB_0129e388;
    }
    uVar15 = (uVar17 & 0x200) >> 9;
    uVar17 = local_1b4 | uVar15;
    if (((*(int *)(iVar5 + 0x128) == 0) || (local_188 != *(uint ********)(iVar5 + 300))) ||
       (iVar7 = thunk_FUN_01bed842(pppppppuVar20,*(int *)(iVar5 + 0x128),local_188), iVar7 != 0)) {
      ppppppuVar2 = *param_2;
      if (ppppppuVar2 == (uint ******)0x2) {
        ppppppuVar9 = *(uint *******)(iVar5 + 0x114);
        ppppppuVar16 = *(uint *******)(iVar5 + 0x118);
        *(byte *)(param_2 + 7) = 2;
        ppppppuVar2 = (uint ******)0x0;
        param_2[2] = (uint ******)0x0;
        param_2[3] = (uint ******)0x4;
        param_2[4] = (uint ******)0x0;
        param_2[5] = ppppppuVar9;
        param_2[6] = ppppppuVar16;
        *param_2 = (uint ******)0x0;
      }
      if ((local_1b4 != 0 || uVar15 != 0) && (((uint)ppppppuVar2 & 1) == 0)) {
        *param_2 = (uint ******)0x1;
        param_2[1] = param_2[4];
      }
      pppppppuVar21 = (uint *******)0x0;
      if ((int)local_188 < 0) {
        local_1f8 = local_210;
        goto LAB_0129ddf0;
      }
      if (local_188 == (uint *******)0x0) {
        pppppppuVar27 = (uint *******)0x0;
        local_210 = (uint *******)&DAT_00000001;
      }
      else {
        local_210 = (uint *******)FUN_01298504(local_188,1);
        pppppppuVar27 = local_188;
        if (local_210 == (uint *******)0x0) goto LAB_0129ff14;
        pppppppuVar27 = local_188;
      }
      FUN_01bed4e2(local_210,pppppppuVar20,local_188);
      ppppppuVar2 = param_2[4];
      if (ppppppuVar2 == param_2[2]) {
        FUN_019abd3c(param_2 + 2);
      }
      ppppppuVar9 = param_2[3] + (int)ppppppuVar2 * 3;
      *ppppppuVar9 = (uint *****)pppppppuVar27;
      ppppppuVar9[1] = (uint *****)local_210;
      ppppppuVar9[2] = (uint *****)local_188;
      param_2[4] = (uint ******)((int)ppppppuVar2 + 1);
      if (((*(uint *)(iVar5 + 8) & 1) == 0 ||
           *(uint *)(iVar5 + 0xc) < 2 && *(uint *)(iVar5 + 0xc) == *(uint *)(iVar5 + 0x10)) &&
         (*(char *)(iVar5 + 0x130) != '\x01')) goto LAB_0129dc68;
      local_18c = (uint *******)0x2;
      local_1d8 = *(uint ********)(iVar5 + 0x114);
      local_1d4 = *(uint ********)(iVar5 + 0x118);
    }
    else {
      local_88 = (uint *******)0x80000002;
      FUN_012a3b0c(&local_88);
LAB_0129dc68:
      local_1a4 = local_1a4 + 1;
      local_18c = (uint *******)0x0;
    }
    local_1b0 = 1;
  } while( true );
  while( true ) {
    FUN_012a477c(&local_88,ppppppuVar16,*ppppppuVar9,ppppppuVar9[1]);
    iVar31 = iVar31 + -8;
    ppppppuVar9 = ppppppuVar9 + 2;
    if (local_88 != (uint *******)&DAT_80000000) break;
    if (iVar31 == 0) {
      local_118 = (uint *******)0x0;
      local_11c = (uint *******)&SUB_00000004;
      local_120 = (uint *******)0x0;
      goto LAB_0129e31c;
    }
  }
  local_184 = (uint *******)thunk_FUN_01be5118(0x30);
  if (local_184 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *local_184 = (uint ******)local_88;
  local_184[1] = (uint ******)local_84;
  local_184[2] = (uint ******)local_80;
  local_158 = (uint *******)&DAT_00000001;
  local_160 = (uint *******)&SUB_00000004;
  pppppppuVar27 = (uint *******)&DAT_00000001;
  local_15c = local_184;
  while (ppppppuVar9 != ppppppuVar32) {
    FUN_012a477c(&local_88,ppppppuVar16,*ppppppuVar9,ppppppuVar9[1]);
    ppppppuVar9 = ppppppuVar9 + 2;
    if (local_88 != (uint *******)&DAT_80000000) {
      if (pppppppuVar27 == local_160) {
        FUN_006520b4(&local_160,pppppppuVar27,1,4,0xc);
        local_184 = local_15c;
      }
      local_158 = (uint *******)((int)pppppppuVar27 + 1);
      pppppppuVar27 = local_184 + (int)pppppppuVar27 * 3;
      *pppppppuVar27 = (uint ******)local_88;
      pppppppuVar27[1] = (uint ******)local_84;
      pppppppuVar27[2] = (uint ******)local_80;
      pppppppuVar27 = local_158;
    }
  }
  local_120 = local_160;
  local_11c = local_15c;
  local_118 = local_158;
LAB_0129e31c:
  pppppppuVar21 = (uint *******)param_1[2];
  pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar21 + 0x1d);
  local_80 = (uint *******)0x0;
  local_84 = (uint *******)&DAT_00420598;
  if (pppppppuVar27 != (uint *******)0x0) {
    local_84 = pppppppuVar27;
  }
  local_88 = pppppppuVar21;
  FUN_012b5c88(&local_160,&local_88,4,0);
  pppppppuVar27 = (uint *******)FUN_012bd8ac(ppppppuVar2,&local_f8,&local_120,&local_160);
LAB_0129e380:
  goto LAB_0129e384;
LAB_0129ceac:
  if (iVar31 == 0) goto LAB_0129d048;
  pppppppuVar20 = (uint *******)*ppppppuVar2;
  bVar34 = pppppppuVar20 == (uint *******)&DAT_00000001;
  if (bVar34) {
    pppppppuVar20 = (uint *******)ppppppuVar2[2];
  }
  if ((bVar34 && pppppppuVar20 == local_1f8) &&
     (pppppppuVar20 = (uint *******)thunk_FUN_01bed842(ppppppuVar2[1],pppppppuVar33,local_1f8),
     pppppppuVar20 == (uint *******)0x0)) {
    ppppppuVar2 = (uint ******)ppppppuVar2[3];
    if (pppppppuVar21[0x13] <= ppppppuVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(ppppppuVar2,pppppppuVar21[0x13],&DAT_01ce26d4);
    }
    pppppppuVar20 = (uint *******)(pppppppuVar21[0x12] + (int)ppppppuVar2 * 0x4d);
    goto LAB_0129d46c;
  }
  iVar31 = iVar31 + -0x10;
  ppppppuVar2 = ppppppuVar2 + 4;
  goto LAB_0129ceac;
LAB_0129d048:
  ppppppuVar2 = pppppppuVar21[0x51];
  bVar34 = ((uint)ppppppuVar2 & 0x80) == 0;
  if (bVar34) {
    pppppppuVar20 = (uint *******)(uint)*(byte *)(pppppppuVar21 + 0x52);
  }
  if (!bVar34 || ((uint)pppppppuVar20 & 0x80) != 0) {
    ppppppuVar9 = pppppppuVar21[0x12];
    local_188 = (uint *******)((int)pppppppuVar21[0x13] * 0x134);
    do {
      pppppppuVar20 = (uint *******)0x0;
      if (local_188 == (uint *******)0x0) goto LAB_0129d0c0;
      FUN_012a1840(&local_f8,&local_b0,ppppppuVar9);
      local_188 = local_188 + -0x4d;
      ppppppuVar9 = ppppppuVar9 + 0x4d;
    } while (local_f8 == (uint *******)0x0);
    pppppppuVar27 = (uint *******)0x0;
    do {
      if (local_188 == pppppppuVar27) {
        pppppppuVar20 = local_f0;
LAB_0129d46c:
        if ((((uint)pppppppuVar20[2] & 1) == 0) || (pppppppuVar20[4] != (uint ******)0x0)) {
          FUN_012a19a8(&local_88,param_1,1,local_1c0,local_204,pppppppuVar20,param_2,
                       local_1c0 != (uint *******)0x0);
        }
        else if (local_1c0 == (uint *******)0x0) {
          local_15c = (uint *******)&SUB_00000004;
          local_158 = (uint *******)0x0;
          local_160 = (uint *******)0x0;
          FUN_012a1ccc(&local_88,param_1,1,2,pppppppuVar20,&local_160,0);
        }
        else {
          FUN_012a7ff8(&local_a8,pppppppuVar21);
          local_f8 = (uint *******)param_2[9];
          local_f4 = local_f8 + (int)param_2[10] * 2;
          local_f0 = param_2;
          local_ec = pppppppuVar21;
          local_e8 = &local_a8;
          uVar37 = FUN_012b95d0(&local_f8);
          if ((int)uVar37 == 0) {
            local_90 = (uint *******)0x0;
            local_94 = (uint *******)&SUB_00000004;
            local_98 = (uint *******)0x0;
            ppppppuVar2 = pppppppuVar20[0x45];
            ppppppuVar9 = pppppppuVar20[0x46];
LAB_0129d748:
            pppppppuVar27 = local_90;
            FUN_015f5ab8(&local_98);
          }
          else {
            pppppppuVar27 = (uint *******)FUN_01298504(0x20,4);
            if (pppppppuVar27 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(4,0x20);
            }
            local_40 = (uint *******)&DAT_00000001;
            local_48 = (uint *******)&SUB_00000004;
            *(undefined8 *)pppppppuVar27 = uVar37;
            local_160 = local_f8;
            local_15c = local_f4;
            local_158 = local_f0;
            local_154 = local_ec;
            local_150 = local_e8;
            pppppppuVar33 = (uint *******)0x0;
            local_44 = pppppppuVar27;
            while (uVar37 = FUN_012b95d0(&local_160), (int)uVar37 != 0) {
              pppppppuVar21 = (uint *******)((int)pppppppuVar33 + 1);
              if (pppppppuVar21 == local_48) {
                FUN_006520b4(&local_48,pppppppuVar21,1,4,8);
                pppppppuVar27 = local_44;
              }
              *(undefined8 *)(pppppppuVar27 + (int)pppppppuVar33 * 2 + 2) = uVar37;
              local_40 = (uint *******)((int)pppppppuVar33 + 2);
              pppppppuVar33 = pppppppuVar21;
            }
            local_98 = local_48;
            local_94 = local_44;
            local_90 = local_40;
            ppppppuVar2 = pppppppuVar20[0x45];
            ppppppuVar9 = pppppppuVar20[0x46];
            pppppppuVar27 = local_40;
            if (local_40 == local_48) goto LAB_0129d748;
          }
          pppppppuVar21 = local_94;
          local_94[(int)pppppppuVar27 * 2] = ppppppuVar2;
          (local_94 + (int)pppppppuVar27 * 2)[1] = ppppppuVar9;
          local_90 = (uint *******)((int)pppppppuVar27 + 1);
          FUN_006643f0(&local_160,local_1c0,local_204);
          FUN_0160ec7c(&local_48,&local_160);
          pppppppuVar33 = local_98;
          local_f0 = (uint *******)0x0;
          local_f8 = (uint *******)0x0;
          local_154 = (uint *******)0x0;
          local_f4 = (uint *******)&DAT_00000001;
          local_158 = (uint *******)0x60000020;
          local_15c = (uint *******)&DAT_01ce2354;
          local_160 = (uint *******)&local_f8;
          iVar31 = FUN_012bb12c(pppppppuVar20,&local_160);
          if (iVar31 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,local_cc,&DAT_01ce236c,&DAT_01d30334);
          }
          local_70 = local_f8;
          pppppppuStack_6c = local_f4;
          pppppppuStack_68 = local_f0;
          local_88 = local_48;
          local_84 = local_44;
          local_80 = local_40;
          local_78 = pppppppuVar21;
          local_7c = pppppppuVar33;
          local_74 = (uint *******)((int)pppppppuVar27 + 1);
          FUN_012a34d4(&local_a8);
        }
        if (local_88 != (uint *******)&DAT_80000009) goto LAB_0129d628;
        pppppppuVar27 = local_84;
        goto LAB_0129e388;
      }
      FUN_012a1840(&local_160,&local_b0,(byte *)((int)ppppppuVar9 + (int)pppppppuVar27));
      pppppppuVar27 = pppppppuVar27 + 0x4d;
      pppppppuVar20 = local_160;
    } while (local_160 == (uint *******)0x0);
  }
LAB_0129d0c0:
  bVar34 = ((uint)ppppppuVar2 & 0x100) == 0;
  if (bVar34) {
    pppppppuVar20 = (uint *******)(uint)*(byte *)((int)pppppppuVar21 + 0x149);
  }
  local_15c = local_1f8;
  local_160 = pppppppuVar33;
  if (bVar34 && ((uint)pppppppuVar20 & 1) == 0) {
    if (pppppppuVar21[0x19] != (uint ******)0x0) {
      local_204 = (uint *******)(pppppppuVar21[0x18] + (int)pppppppuVar21[0x19] * 0x5b);
      pppppppuVar20 = (uint *******)pppppppuVar21[0x18];
      goto LAB_0129d2b8;
    }
    goto LAB_0129d39c;
  }
  ppppppuVar2 = pppppppuVar21[0x19];
  if (ppppppuVar2 != (uint ******)0x0) {
    pppppppuVar20 = (uint *******)pppppppuVar21[0x18];
    iVar26 = 0;
    iVar31 = (int)ppppppuVar2 * 0x16c;
    do {
      iVar31 = iVar31 + -0x16c;
      pbVar23 = (byte *)((int)pppppppuVar20 + iVar26);
      lVar36 = FUN_012a1904(&local_160,pbVar23);
      if ((int)lVar36 != 0) {
        if ((int)ppppppuVar2 * -0x16c + iVar26 != -0x16c) goto LAB_0129d274;
        goto LAB_0129d294;
      }
      iVar26 = iVar26 + 0x16c;
    } while ((int)ppppppuVar2 * -0x16c + iVar26 != 0);
    goto LAB_0129d2a0;
  }
  lVar36 = ZEXT48(local_188) << 0x20;
  goto LAB_0129d3b4;
LAB_0129c864:
  FUN_012c1fd4(&local_f8,&local_88);
  if (local_f8 != (uint *******)&DAT_00000001) goto LAB_0129c8d8;
  if ((local_f4 != (uint *******)0x0) || (ppppppuVar2[0x16] == (uint *****)0x0)) goto LAB_0129ca34;
  iVar31 = (int)ppppppuVar2[0x16] << 4;
  pppppuVar13 = ppppppuVar2[0x15] + 1;
  while( true ) {
    pppppppuVar20 = (uint *******)pppppuVar13[-1];
    bVar34 = pppppppuVar20 == (uint *******)0x0;
    if (bVar34) {
      pppppppuVar20 = (uint *******)*pppppuVar13;
    }
    if (bVar34 && pppppppuVar20 == local_f0) break;
    pppppuVar13 = pppppuVar13 + 4;
    iVar31 = iVar31 + -0x10;
    if (iVar31 == 0) goto LAB_0129ca34;
  }
  goto LAB_0129c864;
LAB_0129c8d8:
  ppppppuVar2 = param_1[4];
  param_1[4] = (uint ******)0x0;
  iVar31 = (int)ppppppuVar2 + 1;
  local_88 = (uint *******)&DAT_80000008;
  do {
    iVar31 = iVar31 + -1;
    if ((iVar31 == 0) || (FUN_012c1fd4(&local_f8,&local_17c), local_f8 == (uint *******)0x0)) break;
  } while (local_f4 == (uint *******)0x0);
LAB_0129cb64:
  FUN_012c1fd4(&local_a8,&local_17c);
  if (local_a8 == (uint ******)0x1) {
    if (local_a4 != 0) {
      FUN_006643f0(&local_f8);
      local_b0 = (uint *******)&local_f8;
      local_ac = (uint *******)&LAB_012b97d8;
      FUN_00664898(&local_98,&DAT_0057fe0b,&local_b0);
      if (local_f8 != (uint *******)&DAT_80000000) {
        FUN_0134bd64(local_f8,local_f4);
      }
      pppppppuVar20 = (uint *******)&local_98;
      goto LAB_0129cf84;
    }
    local_cc[0] = local_a0;
    ppppppuVar2 = param_1[2];
    if (ppppppuVar2[0x16] == (uint *****)0x0) {
LAB_0129ccd0:
      pppppuVar13 = ppppppuVar2[0x18];
      goto LAB_0129ccdc;
    }
    iVar31 = (int)ppppppuVar2[0x16] << 4;
    pppppuVar13 = ppppppuVar2[0x15];
    while( true ) {
      ppppppuVar9 = (uint ******)*pppppuVar13;
      bVar34 = ppppppuVar9 == (uint ******)0x0;
      if (bVar34) {
        ppppppuVar9 = (uint ******)pppppuVar13[1];
      }
      if (bVar34 && ppppppuVar9 == local_a0) break;
      iVar31 = iVar31 + -0x10;
      pppppuVar13 = pppppuVar13 + 4;
      if (iVar31 == 0) goto LAB_0129ccd0;
    }
    pppppuVar13 = (uint *****)pppppuVar13[3];
    if (ppppppuVar2[0x13] <= pppppuVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pppppuVar13,ppppppuVar2[0x13],&DAT_01ce26d4);
    }
    pppppuVar13 = ppppppuVar2[0x12] + (int)pppppuVar13 * 0x4d;
    if ((((uint)pppppuVar13[2] & 1) == 0) || (pppppuVar13[4] != (uint ****)0x0)) {
      if (local_174 == local_170) {
        pppppppuVar20 = local_174;
        if (local_168 != (uint *******)0x0) {
          pppppppuVar27 = local_164;
          pppppppuVar33 = local_168;
          goto LAB_0129cc54;
        }
LAB_0129caf4:
        pppppppuVar33 = (uint *******)0x0;
        pppppppuVar27 = (uint *******)0x0;
        pppppppuVar21 = (uint *******)0x0;
      }
      else {
        pppppppuVar20 = (uint *******)(int)(char)*(byte *)local_174;
        if ((uint *******)0x7fffffff < pppppppuVar20) {
          pppppppuVar20 = (uint *******)(uint)*(byte *)local_174;
        }
        if (local_178 < local_16c) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01ce299c);
        }
        pppppppuVar27 = (uint *******)((int)local_178 - (int)local_16c);
        pppppppuVar33 = (uint *******)((int)local_17c + (int)local_16c);
LAB_0129cc54:
        if (pppppppuVar27 == (uint *******)0x0) goto LAB_0129caf4;
        pppppppuVar21 = (uint *******)((int)pppppppuVar33 + 1);
        pppppppuVar20 = (uint *******)((int)pppppppuVar27 + -1);
        if (*(byte *)pppppppuVar33 != 0x3d) {
          pppppppuVar21 = (uint *******)0x0;
        }
      }
      if (pppppppuVar21 != (uint *******)0x0) {
        pppppppuVar33 = pppppppuVar21;
        pppppppuVar27 = pppppppuVar20;
      }
      FUN_012a19a8(&local_160,param_1,0,pppppppuVar33,pppppppuVar27,pppppuVar13,param_2,
                   pppppppuVar21 != (uint *******)0x0);
      if (local_160 == (uint *******)&DAT_80000009) goto LAB_0129ccc8;
      pppppppuVar20 = local_160;
      if (local_160 != (uint *******)0x80000003) goto LAB_0129cf98;
      FUN_012a3b0c(&local_160);
    }
    else {
      local_40 = (uint *******)0x0;
      local_44 = (uint *******)&SUB_00000004;
      local_48 = (uint *******)0x0;
      FUN_012a1ccc(&local_160,param_1,0,2,pppppuVar13,&local_48,0);
      if (local_160 == (uint *******)&DAT_80000009) {
LAB_0129ccc8:
        pppppppuVar20 = (uint *******)&DAT_80000009;
        goto LAB_0129cf98;
      }
      FUN_012a3b0c(&local_88);
      local_88 = local_160;
      local_84 = local_15c;
      local_80 = local_158;
      local_7c = local_154;
      local_78 = local_150;
      local_74 = local_14c;
      local_70 = pppppppuStack_148;
      pppppppuStack_6c = pppppppuStack_144;
      pppppppuStack_68 = local_140;
    }
    goto LAB_0129cb64;
  }
  local_160 = local_88;
  local_15c = local_84;
  local_158 = local_80;
  local_154 = local_7c;
  local_150 = local_78;
  local_14c = local_74;
  pppppppuStack_148 = local_70;
  pppppppuStack_144 = pppppppuStack_6c;
  local_140 = pppppppuStack_68;
  pppppppuVar20 = local_88;
  goto LAB_0129cfa0;
LAB_0129ccdc:
  if (pppppuVar13 == ppppppuVar2[0x18] + (int)ppppppuVar2[0x19] * 0x5b) goto LAB_0129cdb0;
  if ((uint ******)pppppuVar13[7] == local_a0) {
LAB_0129cd20:
    ppppuVar19 = pppppuVar13[0x47];
    ppppuVar22 = pppppuVar13[0x48];
    pppppppuVar20 = (uint *******)FUN_012a3520(param_1,param_2);
    if (pppppppuVar20 != (uint *******)0x0) {
      local_160 = (uint *******)&DAT_80000009;
      local_15c = pppppppuVar20;
      goto LAB_0129cf94;
    }
    ppppppuVar2 = param_1[3];
    param_1[3] = (uint ******)((int)ppppppuVar2 + 1U);
    FUN_0166b924(&local_f8,ppppuVar19,ppppuVar22);
    local_160 = (uint *******)&DAT_80000000;
    pppppppuVar20 = extraout_r1;
    if (*param_1 == (uint ******)0x0) {
      pppppppuVar20 = (uint *******)&DAT_00000001;
      *param_1 = (uint ******)0x1;
      param_1[1] = (uint ******)((int)ppppppuVar2 + 1U);
    }
    pppppppuVar27 = local_168;
    if (local_168 == (uint *******)0x0) {
      pppppppuVar20 = local_170;
      pppppppuVar27 = local_174;
    }
    if (local_168 == (uint *******)0x0 && pppppppuVar20 == pppppppuVar27) {
      *param_1 = (uint ******)0x0;
    }
    pppppppuVar20 = (uint *******)&local_f8;
    goto LAB_0129cf8c;
  }
  iVar31 = (int)pppppuVar13[0xd] << 3;
  ppppuVar19 = pppppuVar13[0xc];
  while (iVar31 != 0) {
    ppppppuVar9 = (uint ******)*ppppuVar19;
    iVar31 = iVar31 + -8;
    ppppuVar19 = ppppuVar19 + 2;
    if (local_a0 == ppppppuVar9) goto LAB_0129cd20;
  }
  pppppuVar13 = pppppuVar13 + 0x5b;
  goto LAB_0129ccdc;
LAB_0129cdb0:
  local_94 = (uint *******)FUN_012fbb84;
  local_98 = local_cc;
  FUN_00664898(&local_f8,&DAT_0057fe0b,&local_98);
  pppppppuVar20 = (uint *******)&local_f8;
LAB_0129cf84:
  local_160 = (uint *******)0x80000007;
LAB_0129cf8c:
  ppppppuVar2 = pppppppuVar20[1];
  ppppppuVar9 = pppppppuVar20[2];
  *puVar4 = *pppppppuVar20;
  puVar4[1] = ppppppuVar2;
  puVar4[2] = ppppppuVar9;
LAB_0129cf94:
  pppppppuVar20 = local_160;
LAB_0129cf98:
  FUN_012a3b0c(&local_88);
LAB_0129cfa0:
  if (pppppppuVar20 != (uint *******)&DAT_80000009) {
LAB_0129cfac:
    local_120 = local_160;
    local_11c = local_15c;
    local_118 = local_158;
    local_114 = local_154;
    local_110 = local_150;
    pppppppuStack_10c = local_14c;
    local_108 = pppppppuStack_148;
    pppppppuStack_104 = pppppppuStack_144;
    pppppppuStack_100 = local_140;
    pppppppuVar20 = (uint *******)&SUB_00000004;
    if ((int)local_160 < 0) {
      pppppppuVar20 = local_160;
    }
                    /* WARNING: Could not recover jumptable at 0x0129cfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar20 =
         (uint *******)
         (*(code *)(&UNK_0129cfe0 + *(int *)(&UNK_0129cfe0 + (int)pppppppuVar20 * 4)))();
    return pppppppuVar20;
  }
  pppppppuVar27 = local_15c;
  goto LAB_0129e388;
LAB_0129ca34:
  local_160 = (uint *******)&DAT_80000005;
  goto LAB_0129cfac;
LAB_0129d86c:
  iVar7 = iVar7 + 0x134;
  if ((int)pppppuVar13 * 0x134 == iVar7) goto LAB_0129d90c;
  goto LAB_0129d854;
LAB_0129f3e8:
  if (iVar31 == 0) goto LAB_0129f414;
  ppppuVar19 = pppppuVar13[0x48];
  bVar34 = ppppuVar19 == (uint ****)0x0;
  if (bVar34) {
    ppppuVar19 = *pppppuVar14;
  }
  if (bVar34 && ppppuVar19 == (uint ****)&DAT_00110000) {
    iVar31 = FUN_012c21c0(pppppppuVar20,local_188);
    uVar28 = 1;
    if (iVar31 == 0) {
      uVar28 = FUN_012c2200(pppppppuVar20,local_188);
    }
    goto LAB_0129f418;
  }
  iVar31 = iVar31 + -0x134;
  pppppuVar14 = pppppuVar14 + 0x4d;
  pppppuVar13 = pppppuVar13 + 0x4d;
  goto LAB_0129f3e8;
LAB_0129e0f0:
  do {
    iVar26 = iVar31;
    if ((int)pppppuVar14 * 0x16c == iVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                   ,99,&DAT_01ce2344);
    }
    if (pppppppuVar27 == *(uint ********)((int)pppppuVar13 + iVar26 + 0x120)) {
      uVar28 = *(undefined4 *)((int)pppppuVar13 + iVar26 + 0x11c);
      iVar31 = thunk_FUN_01bed842(pppppppuVar20,uVar28,pppppppuVar27);
      if (iVar31 == 0) goto LAB_0129e168;
    }
    local_88 = *(uint ********)((int)pppppuVar13 + iVar26 + 0x24);
    local_84 = local_88 + *(int *)((int)pppppuVar13 + iVar26 + 0x28) * 3;
    iVar12 = FUN_012b10f8(&local_88,pppppppuVar20,pppppppuVar27);
    iVar31 = iVar26 + 0x16c;
  } while (iVar12 == 0);
  uVar28 = *(undefined4 *)((int)pppppuVar13 + iVar26 + 0x11c);
  local_1f8 = *(uint ********)((int)pppppuVar13 + iVar26 + 0x120);
LAB_0129e168:
  if ((int)local_1f8 < 0) {
LAB_0129e2c4:
    pppppppuVar21 = (uint *******)0x0;
    goto LAB_0129ddf0;
  }
  bVar25 = 1;
  if (local_1f8 == (uint *******)0x0) {
    pppppppuVar21 = (uint *******)0x0;
    iVar31 = 1;
  }
  else {
    pppppppuVar21 = (uint *******)&DAT_00000001;
    iVar31 = FUN_01298504(local_1f8,1);
    if (iVar31 == 0) goto LAB_0129ddf0;
    pppppppuVar21 = local_1f8;
  }
  FUN_01bed4e2(iVar31,uVar28,local_1f8);
  ppppppuVar2 = param_1[2];
  if (((uint)ppppppuVar2[0x51] & 1) == 0) {
    bVar25 = *(byte *)(ppppppuVar2 + 0x52) & 1;
  }
  pppppppuVar24 = (uint *******)FUN_012a8cb4(ppppppuVar2,iVar31,local_1f8);
  if (pppppppuVar24 == (uint *******)0x0) goto LAB_0129eca8;
  local_128 = 0;
  local_12c = 0;
  local_134 = (uint *******)0x0;
  local_138 = (uint *******)0x0;
  local_140 = (uint *******)0x0;
  local_130 = (uint *******)&SUB_00000004;
  local_13c = (uint *******)&SUB_00000004;
  local_160 = (uint *******)0x2;
  local_78 = (uint *******)0x0;
  local_7c = (uint *******)0x0;
  local_88 = (uint *******)0x0;
  local_80 = pppppppuVar24;
  pppppppuVar27 = (uint *******)FUN_0129c360(&local_88,&local_160,param_3,param_4);
  if (pppppppuVar27 != (uint *******)0x0) {
    if (bVar25 == 0) {
      FUN_012a3bd8(&local_160);
      FUN_0134bd64(pppppppuVar21,iVar31);
      goto LAB_0129e380;
    }
    FUN_012a3620(pppppppuVar27);
  }
  pppppppuVar27 = (uint *******)pppppppuVar24[0x48];
  if ((int)pppppppuVar27 < 0) {
    uVar28 = 0;
LAB_0129e4fc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar28,pppppppuVar27);
  }
  ppppppuVar2 = pppppppuVar24[0x47];
  if (pppppppuVar27 == (uint *******)0x0) {
    pppppppuVar24 = (uint *******)&DAT_00000001;
    local_188 = (uint *******)0x0;
  }
  else {
    uVar28 = 1;
    pppppppuVar24 = (uint *******)FUN_01298504(pppppppuVar27,1);
    if (pppppppuVar24 == (uint *******)0x0) goto LAB_0129e4fc;
    local_188 = pppppppuVar27;
  }
  FUN_01bed4e2(pppppppuVar24,ppppppuVar2,pppppppuVar27);
  local_88 = local_160;
  local_84 = local_15c;
  local_80 = local_158;
  local_7c = local_154;
  local_78 = local_150;
  local_74 = local_14c;
  local_70 = pppppppuStack_148;
  pppppppuStack_6c = pppppppuStack_144;
  pppppppuStack_68 = local_140;
  pppppppuStack_64 = local_13c;
  local_60 = local_138;
  local_5c = local_134;
  pppppppuStack_58 = local_130;
  uStack_54 = local_12c;
  uStack_50 = local_128;
  local_f8 = local_140;
  local_f4 = local_13c;
  local_f0 = local_138;
  local_ec = local_134;
  local_e8 = local_130;
  uStack_e4 = local_12c;
  uStack_e0 = local_128;
  if (local_160 != (uint *******)0x2) {
    FUN_012987d4(&local_80);
  }
  local_120 = local_188;
  local_114 = local_f8;
  local_110 = local_f4;
  pppppppuStack_10c = local_f0;
  local_108 = local_ec;
  pppppppuStack_104 = local_e8;
  pppppppuStack_100 = (uint *******)uStack_e4;
  uStack_fc = uStack_e0;
  local_11c = pppppppuVar24;
  local_118 = pppppppuVar27;
  FUN_012bf7a8(param_2);
LAB_0129eca8:
  FUN_0134bd64(pppppppuVar21,iVar31);
  FUN_0134bd64(pppppppuVar33,pppppppuVar20);
LAB_0129debc:
  pppppppuVar20 = (uint *******)FUN_012a3520(param_1,param_2);
  if ((pppppppuVar20 == (uint *******)0x0) &&
     (pppppppuVar20 = (uint *******)FUN_012a3c1c(param_1,param_2),
     pppppppuVar20 == (uint *******)0x0)) {
    ppppppuVar2 = param_1[2];
    FUN_012a7ff8(&local_88,ppppppuVar2);
    local_7c = (uint *******)ppppppuVar2;
    pppppppuVar20 = (uint *******)FUN_012b6ca8(&local_88,param_2);
    FUN_012a34d4(&local_88);
    return pppppppuVar20;
  }
  return pppppppuVar20;
  while (iVar31 = iVar31 + -0x16c, iVar31 != 0) {
LAB_0129d274:
    pbVar23 = pbVar23 + 0x16c;
    iVar26 = FUN_012a1904(&local_160,pbVar23);
    if (iVar26 != 0) goto LAB_0129d298;
  }
LAB_0129d294:
  iVar26 = 0;
LAB_0129d298:
  if (iVar26 != 0) {
LAB_0129d2a0:
    local_204 = pppppppuVar20 + (int)ppppppuVar2 * 0x5b;
LAB_0129d2b8:
    do {
      local_188 = pppppppuVar20;
      if (local_188[0x49] == (uint ******)0x0) {
        if (local_188[0x10] != (uint ******)0x0) {
          iVar31 = (int)local_188[0x10] * 0xc;
          ppppppuVar2 = local_188[0xf] + 1;
          do {
            if (((uint *******)*ppppppuVar2 == local_1f8) &&
               (iVar26 = thunk_FUN_01bed842(ppppppuVar2[-1],pppppppuVar33,local_1f8), iVar26 == 0))
            goto LAB_0129d3a4;
            iVar31 = iVar31 + -0xc;
            ppppppuVar2 = ppppppuVar2 + 3;
          } while (iVar31 != 0);
        }
      }
      else {
        if (((uint *******)local_188[0x4a] == local_1f8) &&
           (iVar31 = thunk_FUN_01bed842(local_188[0x49],pppppppuVar33,local_1f8), iVar31 == 0)) {
LAB_0129d3a4:
          lVar36 = *(longlong *)(local_188 + 0x47);
          goto LAB_0129d3b4;
        }
        if (local_188[0x10] != (uint ******)0x0) {
          iVar31 = (int)local_188[0x10] * 0xc;
          ppppppuVar2 = local_188[0xf] + 1;
          do {
            if (((uint *******)*ppppppuVar2 == local_1f8) &&
               (iVar26 = thunk_FUN_01bed842(ppppppuVar2[-1],pppppppuVar33,local_1f8), iVar26 == 0))
            goto LAB_0129d3a4;
            iVar31 = iVar31 + -0xc;
            ppppppuVar2 = ppppppuVar2 + 3;
          } while (iVar31 != 0);
        }
      }
      pppppppuVar20 = local_188 + 0x5b;
    } while (local_188 + 0x5b != local_204);
LAB_0129d39c:
    lVar36 = ZEXT48(local_188) << 0x20;
  }
LAB_0129d3b4:
  pppppppuVar27 = (uint *******)((ulonglong)lVar36 >> 0x20);
  if ((int)lVar36 == 0) {
    iVar31 = FUN_012b9fb0(pppppppuVar21 + 0x11,local_1a4);
    if ((iVar31 == 0) ||
       (pppppppuVar20 = (uint *******)&DAT_80000005, (*(uint *)(iVar31 + 0x11c) & 0x120) != 0x20)) {
      pppppppuVar21 = (uint *******)0x0;
      if ((int)local_1f8 < 0) {
        local_1f8 = local_218;
        goto LAB_0129ddf0;
      }
      if (local_1f8 == (uint *******)0x0) {
        pppppppuVar27 = (uint *******)&DAT_00000001;
      }
      else {
        pppppppuVar21 = (uint *******)&DAT_00000001;
        pppppppuVar27 = (uint *******)FUN_01298504(local_1f8,1);
        if (pppppppuVar27 == (uint *******)0x0) goto LAB_0129ddf0;
        pppppppuVar21 = local_1f8;
      }
      FUN_01bed4e2(pppppppuVar27,pppppppuVar33,local_1f8);
      pppppppuVar20 = (uint *******)0x80000007;
      local_84 = pppppppuVar21;
      local_80 = pppppppuVar27;
      local_7c = local_1f8;
    }
  }
  else {
    pppppppuVar21 = (uint *******)0x0;
    if (lVar36 < 0) {
      local_1f8 = local_20c;
LAB_0129ddf0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(pppppppuVar21,local_1f8);
    }
    if (pppppppuVar27 == (uint *******)0x0) {
      pppppppuVar33 = (uint *******)&DAT_00000001;
    }
    else {
      pppppppuVar33 = (uint *******)FUN_01298504(pppppppuVar27,1);
      if (pppppppuVar33 == (uint *******)0x0) {
LAB_0129ff14:
        local_1f8 = pppppppuVar27;
        pppppppuVar21 = (uint *******)&DAT_00000001;
        goto LAB_0129ddf0;
      }
      pppppppuVar21 = pppppppuVar27;
    }
    FUN_01bed4e2(pppppppuVar33,(int)lVar36,pppppppuVar27);
    pppppppuVar20 = (uint *******)&DAT_80000000;
    local_84 = pppppppuVar21;
    local_80 = pppppppuVar33;
    local_7c = pppppppuVar27;
  }
LAB_0129d624:
  local_88 = pppppppuVar20;
LAB_0129d628:
  local_120 = local_88;
  local_11c = local_84;
  local_118 = local_80;
  local_114 = local_7c;
  local_110 = local_78;
  pppppppuStack_10c = local_74;
  local_108 = local_70;
  pppppppuStack_104 = pppppppuStack_6c;
  pppppppuStack_100 = pppppppuStack_68;
  pppppppuVar20 = (uint *******)&SUB_00000004;
  if ((int)local_88 < 0) {
    pppppppuVar20 = local_88;
  }
                    /* WARNING: Could not recover jumptable at 0x0129d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppuVar20 =
       (uint *******)
       (*(code *)(&DAT_0129d664 + *(int *)(&DAT_0129d664 + (int)pppppppuVar20 * 4)))(0);
  return pppppppuVar20;
LAB_0129f414:
  uVar28 = 0;
LAB_0129f418:
  if (ppppppuVar2[0x19] == (uint *****)0x0) {
LAB_012a0190:
    FUN_006643f0(&local_f8,pppppppuVar20,local_188);
    local_40 = local_f0;
    pppppppuVar20 = local_f4;
    if ((int)local_f0 < 0) {
      uVar29 = 0;
LAB_012a01b4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar29,local_40);
    }
    if (local_f0 == (uint *******)0x0) {
      pppppppuVar27 = (uint *******)0x0;
      pppppppuVar33 = (uint *******)&DAT_00000001;
    }
    else {
      uVar29 = 1;
      pppppppuVar33 = (uint *******)FUN_01298504(local_f0,1);
      if (pppppppuVar33 == (uint *******)0x0) goto LAB_012a01b4;
      pppppppuVar27 = local_40;
    }
    FUN_01bed4e2(pppppppuVar33,pppppppuVar20,local_40);
    local_88 = (uint *******)&DAT_80000000;
    pppppppuVar21 = (uint *******)param_1[2];
    local_48 = pppppppuVar27;
    local_44 = pppppppuVar33;
    pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar21 + 0x1d);
    local_158 = (uint *******)0x0;
    local_15c = (uint *******)&DAT_00420598;
    if (pppppppuVar27 != (uint *******)0x0) {
      local_15c = pppppppuVar27;
    }
    local_160 = pppppppuVar21;
    FUN_012b5c88(&local_120,&local_160,4,0);
    pppppppuVar27 = (uint *******)FUN_012bce00(ppppppuVar2,&local_48,&local_88,uVar28,&local_120);
LAB_0129f114:
    pppppppuVar33 = local_f8;
LAB_0129f11c:
    if (pppppppuVar33 == (uint *******)&DAT_80000000) goto LAB_0129e388;
    goto LAB_0129e380;
  }
  uVar3 = 1;
  if ((*(byte *)((int)ppppppuVar2 + 0x145) & 0x20) == 0) {
    uVar3 = (*(byte *)((int)ppppppuVar2 + 0x149) & 0x3f) >> 5;
  }
  if ((local_1b0 & uVar3) == 0) {
    FUN_006643f0(&local_160,pppppppuVar20,local_188);
    pppppppuVar33 = local_158;
    pppppppuVar27 = local_15c;
    if ((int)local_158 < 0) {
      uVar29 = 0;
LAB_0129f790:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar29,pppppppuVar33);
    }
    if (local_158 == (uint *******)0x0) {
      pppppppuVar21 = (uint *******)0x0;
      iVar31 = 1;
    }
    else {
      uVar29 = 1;
      iVar31 = FUN_01298504(local_158,1);
      if (iVar31 == 0) goto LAB_0129f790;
      pppppppuVar21 = pppppppuVar33;
    }
    FUN_01bed4e2(iVar31,pppppppuVar27,pppppppuVar33);
    local_60 = (uint *******)param_1[2][0x18];
    local_5c = local_60 + (int)param_1[2][0x19] * 0x5b;
    local_74 = (uint *******)0x2;
    local_88 = (uint *******)0x2;
    FUN_012b98b8(auStack_d8,iVar31,pppppppuVar33,&local_88);
    FUN_0134bd64(pppppppuVar21,iVar31);
    if (local_160 != (uint *******)&DAT_80000000) {
      FUN_0134bd64(local_160,pppppppuVar27);
    }
    ppppppuVar2 = param_1[2];
    if (local_d0 == 0) {
      pppppuVar13 = ppppppuVar2[0x12];
      pppppuVar14 = pppppuVar13 + 0xd;
      for (iVar31 = (int)ppppppuVar2[0x13] * 0x134; iVar31 != 0; iVar31 = iVar31 + -0x134) {
        ppppuVar19 = pppppuVar13[0x48];
        bVar34 = ppppuVar19 == (uint ****)0x0;
        if (bVar34) {
          ppppuVar19 = *pppppuVar14;
        }
        if (bVar34 && ppppuVar19 == (uint ****)&DAT_00110000) {
          bVar25 = *(byte *)((int)ppppppuVar2 + 0x145);
          bVar34 = (bVar25 & 1) == 0;
          if (bVar34) {
            bVar25 = *(byte *)((int)ppppppuVar2 + 0x149);
          }
          if (bVar34 && (bVar25 & 1) == 0) {
            FUN_006a41c0(auStack_d8);
            ppppppuVar2 = param_1[2];
            goto LAB_012a0190;
          }
          break;
        }
        pppppuVar14 = pppppuVar14 + 0x4d;
        pppppuVar13 = pppppuVar13 + 0x4d;
      }
      FUN_006643f0(&local_120,pppppppuVar20,local_188);
      local_f0 = local_118;
      pppppppuVar20 = local_11c;
      if ((int)local_118 < 0) {
        uVar28 = 0;
LAB_0129ffec:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar28,local_f0);
      }
      if (local_118 == (uint *******)0x0) {
        pppppppuVar27 = (uint *******)0x0;
        pppppppuVar33 = (uint *******)&DAT_00000001;
      }
      else {
        uVar28 = 1;
        pppppppuVar33 = (uint *******)FUN_01298504(local_118,1);
        if (pppppppuVar33 == (uint *******)0x0) goto LAB_0129ffec;
        pppppppuVar27 = local_f0;
      }
      FUN_01bed4e2(pppppppuVar33,pppppppuVar20,local_f0);
      pppppppuVar21 = (uint *******)param_1[2];
      local_f8 = pppppppuVar27;
      local_f4 = pppppppuVar33;
      pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar21 + 0x1d);
      local_80 = (uint *******)0x0;
      local_84 = (uint *******)&DAT_00420598;
      if (pppppppuVar27 != (uint *******)0x0) {
        local_84 = pppppppuVar27;
      }
      local_88 = pppppppuVar21;
      FUN_012b5c88(&local_160,&local_88,4,0);
      pppppppuVar27 = (uint *******)FUN_012bdde0(ppppppuVar2,&local_f8,&local_160);
      if (local_120 != (uint *******)&DAT_80000000) {
        FUN_0134bd64(local_120,pppppppuVar20);
      }
      FUN_006a41c0(auStack_d8);
      goto LAB_0129e388;
    }
    FUN_006643f0(&local_f8,pppppppuVar20,local_188);
    local_40 = local_f0;
    pppppppuVar20 = local_f4;
    if ((int)local_f0 < 0) {
      uVar29 = 0;
LAB_0129fe60:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar29,local_40);
    }
    if (local_f0 == (uint *******)0x0) {
      pppppppuVar27 = (uint *******)&DAT_00000001;
      local_184 = (uint *******)0x0;
    }
    else {
      uVar29 = 1;
      pppppppuVar27 = (uint *******)FUN_01298504(local_f0,1);
      if (pppppppuVar27 == (uint *******)0x0) goto LAB_0129fe60;
      local_184 = local_40;
    }
    FUN_01bed4e2(pppppppuVar27,pppppppuVar20,local_40);
    local_48 = local_184;
    ppppppuVar9 = param_1[2];
    if (ppppppuVar9[0x26] == (uint *****)0x80000000) {
      pppppppuVar33 = (uint *******)ppppppuVar9[0x48];
      ppppppuVar9 = ppppppuVar9 + 0x47;
    }
    else {
      pppppppuVar33 = (uint *******)ppppppuVar9[0x28];
      ppppppuVar9 = ppppppuVar9 + 0x27;
    }
    local_44 = pppppppuVar27;
    if ((int)pppppppuVar33 < 0) {
      uVar29 = 0;
LAB_0129ff78:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar29,pppppppuVar33);
    }
    pppppuVar13 = *ppppppuVar9;
    if (pppppppuVar33 == (uint *******)0x0) {
      pppppppuVar27 = (uint *******)0x0;
      pppppppuVar21 = (uint *******)&DAT_00000001;
    }
    else {
      uVar29 = 1;
      pppppppuVar21 = (uint *******)FUN_01298504(pppppppuVar33,1);
      if (pppppppuVar21 == (uint *******)0x0) goto LAB_0129ff78;
      pppppppuVar27 = pppppppuVar33;
    }
    FUN_01bed4e2(pppppppuVar21,pppppuVar13,pppppppuVar33);
    pppppppuVar24 = (uint *******)param_1[2];
    local_120 = pppppppuVar27;
    local_11c = pppppppuVar21;
    local_118 = pppppppuVar33;
    pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar24 + 0x1d);
    local_80 = (uint *******)0x0;
    local_84 = (uint *******)&DAT_00420598;
    if (pppppppuVar27 != (uint *******)0x0) {
      local_84 = pppppppuVar27;
    }
    local_88 = pppppppuVar24;
    FUN_012b5c88(&local_160,&local_88,4,0);
    pppppppuVar27 =
         (uint *******)FUN_012bd5e8(ppppppuVar2,&local_48,auStack_d8,&local_120,uVar28,&local_160);
  }
  else {
    FUN_006643f0(&local_f8,pppppppuVar20,local_188);
    local_40 = local_f0;
    pppppppuVar20 = local_f4;
    if ((int)local_f0 < 0) {
      uVar28 = 0;
LAB_0129f468:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar28,local_40);
    }
    if (local_f0 == (uint *******)0x0) {
      pppppppuVar27 = (uint *******)0x0;
      pppppppuVar33 = (uint *******)&DAT_00000001;
    }
    else {
      uVar28 = 1;
      pppppppuVar33 = (uint *******)FUN_01298504(local_f0,1);
      if (pppppppuVar33 == (uint *******)0x0) goto LAB_0129f468;
      pppppppuVar27 = local_40;
    }
    FUN_01bed4e2(pppppppuVar33,pppppppuVar20,local_40);
    local_88 = (uint *******)param_2[9];
    local_84 = local_88 + (int)param_2[10] * 2;
    local_80 = (uint *******)param_1[2];
    local_48 = pppppppuVar27;
    local_44 = pppppppuVar33;
    FUN_0129c1e8(&local_120,&local_88);
    pppppppuVar33 = (uint *******)param_1[2];
    pppppppuVar27 = (uint *******)FUN_012b9138(pppppppuVar33 + 0x1d);
    local_80 = (uint *******)0x0;
    local_84 = (uint *******)&DAT_00420598;
    if (pppppppuVar27 != (uint *******)0x0) {
      local_84 = pppppppuVar27;
    }
    local_88 = pppppppuVar33;
    FUN_012b5c88(&local_160,&local_88,4,0);
    pppppppuVar27 = (uint *******)FUN_012bd8ac(ppppppuVar2,&local_48,&local_120,&local_160);
  }
  if (local_f8 == (uint *******)&DAT_80000000) goto LAB_0129e388;
  pppppppuVar33 = local_f8;
LAB_0129e384:
  FUN_0134bd64(pppppppuVar33,pppppppuVar20);
LAB_0129e388:
  ppppppuVar2 = param_1[2];
  bVar34 = ((uint)ppppppuVar2[0x51] & 1) == 0;
  if (bVar34) {
    ppppppuVar2 = (uint ******)(uint)*(byte *)(ppppppuVar2 + 0x52);
  }
  if ((!bVar34 || ((uint)ppppppuVar2 & 1) != 0) &&
     (iVar31 = FUN_012a3c1c(param_1,param_2), iVar31 != 0)) {
    FUN_012a3620();
  }
  return pppppppuVar27;
}

