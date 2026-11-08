// FUN_00624df0 @ 00624df0 size=2008 calls_out=20 calls_in=1
// strings: .gnu_debugaltlink

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00624df0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  int unaff_r4;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  int iVar27;
  uint *puVar28;
  undefined8 uVar29;
  int *local_468;
  int *local_43c;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  undefined4 *local_418;
  int local_414;
  int *local_410;
  int *local_40c;
  int *local_408;
  int local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  int *local_3d0;
  int *local_3cc;
  int *local_3c8;
  int *local_3c4;
  undefined1 auStack_2c0 [256];
  int local_1c0;
  int *local_190;
  int *local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  int *local_154;
  int *local_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int *local_118;
  int *piStack_114;
  int *piStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  undefined1 auStack_c8 [80];
  int *local_78;
  int *local_74;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 uStack_28;
  
  iVar27 = param_4[1];
  piVar24 = (int *)param_4[2];
  FUN_00620e6c(&local_410,iVar27,piVar24);
  piVar5 = local_408;
  piVar3 = local_40c;
  if (local_410 != (int *)&DAT_00000001) {
    iVar10 = *param_4;
    param_1[0x48] = 0x80000000;
    if (iVar10 == 0) {
      return;
    }
    if (iVar27 == 0) {
      return;
    }
    iVar10 = FUN_016d3bc8();
    uVar25 = *(byte *)(iVar27 + -3) & 0x1f;
    if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
       (uVar17 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar22 = uVar17 - 0x10, uVar17 == 0)) {
      iVar22 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar17 = (uint)(*(byte *)(iVar27 + -3) >> 5);
    iVar21 = *(int *)(iVar10 + 8) + 0x10;
    iVar18 = iVar22 * uVar25 + iVar22 + -4;
    iVar22 = iVar21 + iVar18;
    if (4 < uVar17) {
      if (uVar17 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar17 = *(uint *)(iVar22 + -4);
      if (uVar17 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar22 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar22 - iVar27) < uVar17) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar22 - uVar17) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar21 + iVar18) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar10 + 0x14);
    uVar17 = 1 << uVar25;
    *(undefined1 *)(iVar27 + -3) = 0xff;
    *(undefined2 *)(iVar27 + -2) = 0;
    do {
      uVar19 = *(uint *)(iVar10 + 0x10);
      uVar15 = *(uint *)(iVar10 + 0xc) | uVar19;
      if ((uVar17 & uVar15) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar19 == 0) || (uVar15 + uVar17 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar10,uVar25);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar20 = (undefined4 *)FUN_016d2bc8();
        uVar9 = *puVar20;
        FUN_016d6ac4(uStack_28,unaff_r4);
        *puVar20 = uVar9;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar10 + 0x10) = uVar17 + uVar19;
        return;
      }
      puVar28 = (uint *)(iVar10 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar28);
        uVar15 = *puVar28;
        if (uVar19 != uVar15) goto LAB_016d409c;
        bVar11 = (bool)hasExclusiveAccess(puVar28);
      } while (!bVar11);
      *puVar28 = uVar17 + uVar19;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar19 == uVar15) {
        return;
      }
    } while( true );
  }
  local_414 = 0;
  local_418 = (undefined4 *)&DAT_00000004;
  local_41c = 0;
  local_420 = 0;
  local_424 = 4;
  local_428 = 0;
  FUN_0062ddfc(&local_410);
  piVar6 = local_408;
  piVar16 = local_40c;
  piVar26 = local_410;
  if (local_3d0 != (int *)&DAT_80000000) {
    local_170 = local_400;
    uStack_16c = local_3fc;
    uStack_168 = uStack_3f8;
    uStack_164 = local_3f4;
    uStack_160 = uStack_3f0;
    uStack_15c = uStack_3ec;
    local_188 = local_3e8;
    uStack_184 = uStack_3e4;
    uStack_180 = uStack_3e0;
    uStack_17c = uStack_3dc;
    uStack_178 = uStack_3d8;
    uStack_174 = uStack_3d4;
    local_190 = local_3c8;
    local_43c = (int *)&DAT_80000000;
    local_18c = local_3c4;
    if (local_404 == 0) {
      piVar23 = (int *)0x0;
    }
    else {
      local_468 = &local_41c;
      iVar10 = local_404 * 0x28;
      piVar12 = local_408;
      do {
        piVar23 = piVar12;
        uVar29 = FUN_006189bc(&local_170,*piVar23);
        if ((((int)uVar29 != 0) && ((int)((ulonglong)uVar29 >> 0x20) == 0x11)) &&
           (iVar22 = thunk_FUN_016dd50a((int)uVar29,".gnu_debugaltlink",0x11), iVar22 == 0)) {
          if (((piVar23[1] != 8) && (piVar12 = (int *)piVar23[4], piVar12 <= piVar16)) &&
             ((piVar8 = (int *)piVar23[5], piVar8 <= (int *)((int)piVar16 - (int)piVar12) &&
              (piVar8 != (int *)0x0)))) {
            piVar26 = (int *)((int)piVar26 + (int)piVar12);
            piVar16 = (int *)0x0;
            goto LAB_00624ffc;
          }
          break;
        }
        iVar10 = iVar10 + -0x28;
        piVar12 = piVar23 + 10;
      } while (iVar10 != 0);
    }
    goto LAB_0062528c;
  }
  iVar10 = 4;
  iVar22 = 0;
  goto LAB_0062536c;
  while (piVar16 = (int *)((int)piVar16 + 1), piVar8 != piVar16) {
LAB_00624ffc:
    piVar23 = param_4;
    if (*(char *)((int)piVar26 + (int)piVar16) == '\0') {
      pcVar14 = (char *)((int)piVar26 + (int)piVar16 + 1);
      iVar10 = (int)piVar8 - (int)((int)piVar16 + 1);
      if ((piVar16 == (int *)0x0) || ((char)*piVar26 != '/')) {
        FUN_015f4610(&local_410,iVar27,piVar24);
        piVar4 = local_408;
        piVar8 = local_40c;
        piVar12 = local_410;
        if (local_410 == (int *)&DAT_80000000) {
          if ((char)local_40c == '\x03') {
            piVar23 = (int *)*local_408;
            piVar24 = (int *)local_408[1];
            if ((code *)*piVar24 != (code *)0x0) {
              (*(code *)*piVar24)(piVar23);
            }
            if (piVar24[1] != 0) {
              thunk_FUN_016d3fb4(piVar23);
            }
            thunk_FUN_016d3fb4(piVar4);
          }
          local_158 = (int *)&DAT_80000000;
          break;
        }
        if (local_408 == (int *)0x0) {
          bVar11 = false;
        }
        else {
          bVar11 = (char)*local_40c == '/';
        }
        local_40c = local_408;
        local_408 = (int *)CONCAT31(local_408._1_3_,6);
        local_410 = piVar8;
        local_3f4 = CONCAT22(CONCAT11(local_3f4._3_1_,bVar11),0x201);
        FUN_015c7164(&local_78,&local_410);
        if (((uint)local_78 & 0xff) - 7 < 3) {
          uVar29 = FUN_015c7664(&local_410);
          piVar24 = (int *)((ulonglong)uVar29 >> 0x20);
          if ((int)uVar29 == 0) goto LAB_006251f0;
          FUN_0061d0d4(&local_410,piVar24,0,1,1);
          piVar7 = local_408;
          piVar4 = local_40c;
          if (local_410 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_40c,local_408);
          }
          FUN_016dd1aa(local_408,(int)uVar29,piVar24);
          local_74 = piVar7;
          local_78 = piVar4;
          local_70 = piVar24;
          FUN_0062c30c(&local_78,piVar26,piVar16);
          piVar26 = local_74;
          iVar22 = FUN_015c7ac8(local_74,local_70);
          if (iVar22 == 0) {
            if (local_78 != (int *)0x0) {
              thunk_FUN_016d3fb4(piVar26);
            }
            if (piVar12 != (int *)0x0) {
              thunk_FUN_016d3fb4(piVar8);
            }
            goto LAB_00625270;
          }
          local_158 = local_78;
          local_154 = local_74;
          local_150 = local_70;
        }
        else {
LAB_006251f0:
          local_158 = (int *)&DAT_80000000;
        }
        piVar24 = piVar8;
        if (piVar12 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar8);
        }
LAB_00625280:
        if (local_158 == (int *)&DAT_80000000) break;
      }
      else {
        iVar22 = FUN_015c7ac8(piVar26,piVar16);
        piVar24 = piVar26;
        if (iVar22 == 0) {
LAB_00625270:
          FUN_0062db08(&local_158,pcVar14,iVar10);
          goto LAB_00625280;
        }
        uVar9 = 0;
        if ((int)piVar16 < 0) {
LAB_00625064:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar9,piVar16);
        }
        piVar12 = (int *)thunk_FUN_016d4a50(piVar16);
        if (piVar12 == (int *)0x0) {
          uVar9 = 1;
          goto LAB_00625064;
        }
        FUN_016dd1aa(piVar12,piVar26,piVar16);
        local_158 = piVar16;
        local_154 = piVar12;
        local_150 = piVar16;
      }
      piVar8 = local_154;
      piVar12 = local_158;
      FUN_00620e6c(&local_410,local_154,local_150);
      piVar16 = local_408;
      piVar26 = local_40c;
      if (local_410 == (int *)&DAT_00000001) {
        FUN_0061cbc8(local_468);
        *local_418 = piVar26;
        local_418[1] = piVar16;
        local_414 = 1;
        FUN_0062ddfc(&local_118,piVar26,piVar16);
        piVar16 = local_d4;
        piVar23 = piVar26;
        if (local_d8 == (int *)&DAT_80000000) goto joined_r0x00625558;
        uVar29 = FUN_0062e4dc(&local_118);
        if ((((int)uVar29 == 0) || ((int)((ulonglong)uVar29 >> 0x20) != iVar10)) ||
           (iVar10 = thunk_FUN_016dd50a((int)uVar29,pcVar14,iVar10), iVar10 != 0)) {
          piVar23 = local_d8;
          piVar24 = piVar16;
          if (local_d8 != (int *)0x0) {
            thunk_FUN_016d3fb4(piVar16);
          }
          goto joined_r0x00625558;
        }
        local_468 = local_d0;
        piVar23 = local_d4;
        piVar24 = local_cc;
        local_43c = local_d8;
        local_158 = local_118;
        local_154 = piStack_114;
        local_150 = piStack_110;
        iStack_14c = iStack_10c;
        uStack_148 = uStack_108;
        local_144 = local_104;
        uStack_140 = uStack_100;
        uStack_13c = uStack_fc;
        uStack_138 = uStack_f8;
        uStack_134 = uStack_f4;
        local_130 = local_f0;
        uStack_12c = uStack_ec;
        uStack_128 = uStack_e8;
        uStack_124 = uStack_e4;
        uStack_120 = uStack_e0;
        uStack_11c = uStack_dc;
      }
      else {
joined_r0x00625558:
        local_43c = (int *)&DAT_80000000;
      }
      if (piVar12 != (int *)0x0) {
        thunk_FUN_016d3fb4(piVar8);
      }
      break;
    }
  }
LAB_0062528c:
  FUN_006256e0(auStack_c8,param_2,param_3,&local_428);
  local_6c = local_404;
  local_70 = piVar6;
  local_68 = local_170;
  uStack_64 = uStack_16c;
  uStack_60 = uStack_168;
  uStack_5c = uStack_164;
  uStack_58 = uStack_160;
  uStack_54 = uStack_15c;
  local_50 = local_188;
  uStack_4c = uStack_184;
  uStack_48 = uStack_180;
  uStack_44 = uStack_17c;
  uStack_40 = uStack_178;
  uStack_3c = uStack_174;
  local_34 = local_3cc;
  local_38 = local_3d0;
  local_2c = local_18c;
  local_30 = local_190;
  local_410 = local_158;
  local_40c = local_154;
  local_408 = local_150;
  local_404 = iStack_14c;
  local_400 = uStack_148;
  local_3fc = local_144;
  uStack_3f8 = uStack_140;
  local_3f4 = uStack_13c;
  uStack_3f0 = uStack_138;
  uStack_3ec = uStack_134;
  local_3e8 = local_130;
  uStack_3e4 = uStack_12c;
  uStack_3e0 = uStack_128;
  uStack_3dc = uStack_124;
  uStack_3d8 = uStack_120;
  uStack_3d4 = uStack_11c;
  local_3c8 = local_468;
  local_3d0 = local_43c;
  local_3cc = piVar23;
  local_3c4 = piVar24;
  FUN_00625a40(auStack_2c0,&local_428,&local_78,&local_410,auStack_c8);
  if (local_1c0 != -0x80000000) {
    FUN_016dd1aa(&local_410,auStack_2c0,0x130);
    FUN_016dd1aa(param_1 + 8,&local_410,0x130);
    param_1[2] = local_428;
    param_1[3] = local_424;
    param_1[4] = local_420;
    param_1[5] = local_41c;
    param_1[6] = local_418;
    param_1[7] = local_414;
    *param_1 = piVar3;
    param_1[1] = piVar5;
    iVar10 = *param_4;
    goto joined_r0x00625474;
  }
  iVar10 = local_424;
  iVar22 = local_420;
LAB_0062536c:
  puVar20 = (undefined4 *)(iVar10 + 4);
  param_1[0x48] = 0x80000000;
  for (; iVar22 != 0; iVar22 = iVar22 + -1) {
    if (puVar20[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar20);
    }
    puVar20 = puVar20 + 3;
  }
  if (local_428 != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  iVar10 = local_414;
  puVar20 = local_418;
  iVar22 = 0;
  if (local_414 != 0) {
    do {
      puVar13 = puVar20 + iVar22 * 2;
      FUN_016d6ac4(*puVar13,puVar13[1]);
      iVar22 = iVar22 + 1;
    } while (iVar10 != iVar22);
  }
  if (local_41c != 0) {
    thunk_FUN_016d3fb4(puVar20);
  }
  FUN_016d6ac4(piVar3,piVar5);
  iVar10 = *param_4;
joined_r0x00625474:
  if (iVar10 != 0) {
    thunk_FUN_016d3fb4(iVar27);
  }
  return;
}

