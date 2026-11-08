// FUN_010c4064 @ 010c4064 size=3572 calls_out=19 calls_in=3
// strings: tcp open error | tcp set_nonblocking error | tcp bind local error | tcp bind interface error | tcp set_nonblocking error | SetGloba

void FUN_010c4064(undefined4 *param_1,ushort *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  ushort *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  ushort *local_138;
  int local_134;
  int local_130;
  undefined4 local_120;
  undefined4 *local_11c;
  ushort ***local_118;
  undefined4 local_114;
  int *local_110;
  ushort **local_10c;
  undefined **local_108;
  undefined *local_104;
  undefined *local_100;
  undefined4 **local_fc;
  undefined4 *local_f8;
  code *local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  ushort *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [104];
  undefined4 local_28;
  
  uVar2 = *param_2;
  uVar5 = 2;
  if ((uVar2 & 1) != 0) {
    uVar5 = 10;
  }
  iVar6 = FUN_016d997a(uVar5,0x80001,6);
  if (iVar6 == -1) {
    puVar10 = (undefined4 *)FUN_016d2bc8();
    uVar5 = *puVar10;
    local_c8 = 0;
    local_c4 = uVar5;
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *(undefined2 *)(param_1 + 1) = 2;
    *param_1 = 1;
    *puVar10 = 0;
    puVar10[1] = uVar5;
    param_1[9] = "tcp open error";
    param_1[10] = 0xe;
    param_1[0xb] = puVar10;
    param_1[0xc] = &DAT_01884fd0;
    return;
  }
  uVar7 = FUN_016d2d0c(iVar6,3);
  if ((uVar7 == 0xffffffff) ||
     (((uVar7 | 0x800) != uVar7 && (iVar8 = FUN_016d2d0c(iVar6,4), iVar8 == -1)))) {
    puVar10 = (undefined4 *)FUN_016d2bc8();
    uVar5 = *puVar10;
    local_c0 = 0;
    local_bc = uVar5;
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    uVar13 = 0x19;
    *puVar10 = 0;
    puVar10[1] = uVar5;
    pcVar22 = "tcp set_nonblocking error";
    goto LAB_010c41b8;
  }
  puVar18 = (undefined1 *)param_3[4];
  puVar15 = (ushort *)&DAT_3b9aca00;
  puVar19 = param_2;
  if (puVar18 == &DAT_3b9aca00) {
    puVar14 = (undefined1 *)param_3[8];
    if (puVar14 != &DAT_3b9aca00) {
LAB_010c4224:
      local_134 = param_3[7];
      puVar19 = (ushort *)param_3[6];
      if (*param_3 == 0) goto LAB_010c421c;
LAB_010c423c:
      local_138 = (ushort *)param_3[1];
      bVar1 = true;
      goto LAB_010c4248;
    }
    if (*param_3 == 1) {
      puVar14 = &DAT_3b9aca00;
      goto LAB_010c423c;
    }
  }
  else {
    puVar14 = (undefined1 *)param_3[8];
    puVar15 = (ushort *)param_3[2];
    local_130 = param_3[3];
    if (puVar14 != &DAT_3b9aca00) goto LAB_010c4224;
    puVar14 = &DAT_3b9aca00;
    if (*param_3 != 0) goto LAB_010c423c;
LAB_010c421c:
    bVar1 = false;
LAB_010c4248:
    local_a8 = (ushort *)&DAT_00000001;
    iVar8 = FUN_016d98a4(iVar6,1,9,&local_a8,4);
    if (iVar8 == -1) {
LAB_010c4360:
      local_11c = (undefined4 *)FUN_016d2bc8();
      local_11c = (undefined4 *)*local_11c;
LAB_010c4370:
      local_120 = 0;
      if ((DAT_018d9130 < 4) && (DAT_018da508 != '\0')) {
        if (DAT_018da508 == '\x01') {
LAB_010c43d0:
          DataMemoryBarrier(0xb);
          puVar21 = &DAT_018ae394;
          pcVar22 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar22 = DAT_018daa74, puVar21 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar8 = (**(code **)(puVar21 + 0x14))(pcVar22,DAT_018da500);
          if (iVar8 == 0) goto LAB_010c44e8;
        }
        else if (DAT_018da508 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018da500);
          if (cVar4 == '\0') goto LAB_010c44e8;
          if (cVar4 != '\x02') goto LAB_010c43d0;
        }
        if (*(int *)(DAT_018da500 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01884fb0);
        }
        local_110 = (int *)(DAT_018da500 + 0x1c);
        local_a8 = (ushort *)*local_110;
        local_108 = &local_100;
        local_10c = &local_a8;
        local_a4 = *(undefined4 *)(DAT_018da500 + 0x20);
        local_a0 = *(undefined4 *)(DAT_018da500 + 0x24);
        local_9c = *(undefined4 *)(DAT_018da500 + 0x28);
        local_fc = &local_f8;
        local_f8 = &local_120;
        local_114 = 1;
        local_118 = &local_10c;
        local_98 = 0;
        local_104 = &DAT_018abb78;
        local_100 = &DAT_0057befb;
        local_f4 = FUN_015ef5b4;
        FUN_010c50a8(&local_118);
      }
LAB_010c44e8:
      puVar10 = local_11c;
      if ((char)local_120 == '\x03') {
        uVar5 = *local_11c;
        puVar20 = (undefined4 *)local_11c[1];
        pcVar11 = (code *)*puVar20;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar5);
        }
        if (puVar20[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        thunk_FUN_016d3fb4(puVar10);
      }
    }
    else {
      if (puVar18 != &DAT_3b9aca00) {
        if ((ushort *)0x7ffffffe < puVar15) {
          puVar15 = (ushort *)0x7fffffff;
        }
        if (local_130 != 0) {
          puVar15 = (ushort *)0x7fffffff;
        }
        local_a8 = puVar15;
        iVar8 = FUN_016d98a4(iVar6,6,4,&local_a8,4);
        if (iVar8 == -1) goto LAB_010c4360;
      }
      if (puVar14 != &DAT_3b9aca00) {
        if ((ushort *)0x7ffffffe < puVar19) {
          puVar19 = (ushort *)0x7fffffff;
        }
        if (local_134 != 0) {
          puVar19 = (ushort *)0x7fffffff;
        }
        local_a8 = puVar19;
        iVar8 = FUN_016d98a4(iVar6,6,5,&local_a8,4);
        if (iVar8 == -1) goto LAB_010c4360;
      }
      if (bVar1) {
        local_a8 = local_138;
        iVar8 = FUN_016d98a4(iVar6,6,6,&local_a8,4);
        if (iVar8 == -1) {
          local_11c = (undefined4 *)FUN_016d2bc8();
          local_11c = (undefined4 *)*local_11c;
          goto LAB_010c4370;
        }
      }
    }
  }
  if ((param_3[0x1a] == -0x80000000) ||
     (iVar8 = FUN_016d98a4(iVar6,1,0x19,param_3[0x1b],param_3[0x1c]), iVar8 != -1)) {
    if ((undefined1 *)param_3[0x18] != &DAT_3b9aca00) {
      uVar12 = (uint)((ulonglong)(uint)param_3[0x16] * 1000);
      lVar3 = (ulonglong)(uint)param_3[0x17] * 1000 +
              ((ulonglong)(uint)param_3[0x16] * 1000 >> 0x20);
      uVar16 = (uint)lVar3;
      uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar7 = (uint)param_3[0x18] / 1000000;
      local_a8 = (ushort *)(uVar12 + uVar7);
      bVar1 = CARRY4(uVar16,(uint)CARRY4(uVar12,uVar7));
      if (uVar16 + CARRY4(uVar12,uVar7) != 0) {
        local_a8 = (ushort *)0xffffffff;
      }
      if (uVar9 + bVar1 != 0 || CARRY4(uVar9,(uint)bVar1)) {
        local_a8 = (ushort *)0xffffffff;
      }
      iVar8 = FUN_016d98a4(iVar6,6,0x12,&local_a8,4);
      if (iVar8 == -1) {
        local_11c = (undefined4 *)FUN_016d2bc8();
        local_11c = (undefined4 *)*local_11c;
        local_120 = 0;
        if ((DAT_018d9130 < 4) &&
           (((DAT_018da520 - 1 < 2 ||
             ((DAT_018da520 != 0 && (cVar4 = FUN_0169ac90(&DAT_018da518), cVar4 != '\0')))) &&
            (iVar8 = FUN_016949d8(DAT_018da518), iVar8 != 0)))) {
          if (*(int *)(DAT_018da518 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01884ffc);
          }
          local_110 = (int *)(DAT_018da518 + 0x1c);
          local_a8 = (ushort *)*local_110;
          local_108 = &local_100;
          local_a4 = *(undefined4 *)(DAT_018da518 + 0x20);
          local_a0 = *(undefined4 *)(DAT_018da518 + 0x24);
          local_9c = *(undefined4 *)(DAT_018da518 + 0x28);
          local_fc = &local_f8;
          local_f8 = &local_120;
          local_114 = 1;
          local_118 = &local_10c;
          local_98 = 0;
          local_104 = &DAT_018abb78;
          local_100 = &DAT_00583efa;
          local_f4 = FUN_015ef5b4;
          local_10c = &local_a8;
          FUN_010c5178(&local_118);
        }
        puVar10 = local_11c;
        if ((char)local_120 == '\x03') {
          uVar5 = *local_11c;
          puVar20 = (undefined4 *)local_11c[1];
          pcVar11 = (code *)*puVar20;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(uVar5);
          }
          if (puVar20[1] != 0) {
            thunk_FUN_016d3fb4(uVar5);
          }
          thunk_FUN_016d3fb4(puVar10);
        }
      }
    }
    if ((uVar2 & 1) == 0) {
      if ((*(byte *)((int)param_3 + 0x75) & 1) == 0) goto LAB_010c483c;
      uVar5 = *(undefined4 *)((int)param_3 + 0x76);
      FUN_016dd606(&local_a0,0,0x78);
      local_28 = 0x10;
      local_a8 = (ushort *)&SUB_00000002;
      local_a4 = uVar5;
      iVar8 = FUN_016d6eba(iVar6,&local_a8,0x10);
    }
    else {
      if (*(char *)((int)param_3 + 0x7a) == '\0') goto LAB_010c483c;
      local_a0 = *(undefined4 *)((int)param_3 + 0x7b);
      local_9c = *(undefined4 *)((int)param_3 + 0x7f);
      local_98 = *(undefined4 *)((int)param_3 + 0x83);
      uStack_94 = *(undefined4 *)((int)param_3 + 0x87);
      FUN_016dd606(auStack_90,0,0x68);
      local_a4 = 0;
      local_28 = 0x1c;
      local_a8 = (ushort *)&DAT_0000000a;
      iVar8 = FUN_016d6eba(iVar6,&local_a8,0x1c);
    }
    if (iVar8 != -1) {
LAB_010c483c:
      if ((char)param_3[0x23] != '\0') {
        local_a8 = (ushort *)0x1;
        iVar8 = FUN_016d98a4(iVar6,1,2,&local_a8,4);
        if (iVar8 == -1) {
          local_11c = (undefined4 *)FUN_016d2bc8();
          local_11c = (undefined4 *)*local_11c;
          local_120 = 0;
          if (((DAT_018d9130 < 4) &&
              ((DAT_018da514 - 1 < 2 ||
               ((DAT_018da514 != 0 && (cVar4 = FUN_0169ac90(&DAT_018da50c), cVar4 != '\0')))))) &&
             (iVar8 = FUN_016949d8(DAT_018da50c), iVar8 != 0)) {
            if (*(int *)(DAT_018da50c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0188500c);
            }
            local_110 = (int *)(DAT_018da50c + 0x1c);
            local_a8 = (ushort *)*local_110;
            local_108 = &local_100;
            local_a4 = *(undefined4 *)(DAT_018da50c + 0x20);
            local_a0 = *(undefined4 *)(DAT_018da50c + 0x24);
            local_9c = *(undefined4 *)(DAT_018da50c + 0x28);
            local_fc = &local_f8;
            local_f8 = &local_120;
            local_114 = 1;
            local_118 = &local_10c;
            local_98 = 0;
            local_104 = &DAT_018abb78;
            local_100 = &DAT_0057a4cb;
            local_f4 = FUN_015ef5b4;
            local_10c = &local_a8;
            FUN_010c5248(&local_118);
          }
          puVar10 = local_11c;
          if ((char)local_120 == '\x03') {
            uVar5 = *local_11c;
            puVar20 = (undefined4 *)local_11c[1];
            pcVar11 = (code *)*puVar20;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar5);
            }
            if (puVar20[1] != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
            thunk_FUN_016d3fb4(puVar10);
          }
        }
      }
      if (param_3[10] != 0) {
        local_a8 = (ushort *)param_3[0xb];
        iVar8 = FUN_016d98a4(iVar6,1,7,&local_a8,4);
        if (iVar8 == -1) {
          local_11c = (undefined4 *)FUN_016d2bc8();
          local_11c = (undefined4 *)*local_11c;
          local_120 = 0;
          if (((DAT_018d9130 < 4) &&
              ((DAT_018da4fc - 1 < 2 ||
               ((DAT_018da4fc != 0 && (cVar4 = FUN_0169ac90(&DAT_018da4f4), cVar4 != '\0')))))) &&
             (iVar8 = FUN_016949d8(DAT_018da4f4), iVar8 != 0)) {
            if (*(int *)(DAT_018da4f4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0188501c);
            }
            local_110 = (int *)(DAT_018da4f4 + 0x1c);
            local_a8 = (ushort *)*local_110;
            local_108 = &local_100;
            local_a4 = *(undefined4 *)(DAT_018da4f4 + 0x20);
            local_a0 = *(undefined4 *)(DAT_018da4f4 + 0x24);
            local_9c = *(undefined4 *)(DAT_018da4f4 + 0x28);
            local_fc = &local_f8;
            local_f8 = &local_120;
            local_114 = 1;
            local_118 = &local_10c;
            local_98 = 0;
            local_104 = &DAT_018abb78;
            local_100 = &DAT_0058fe84;
            local_f4 = FUN_015ef5b4;
            local_10c = &local_a8;
            FUN_010c5318(&local_118);
          }
          puVar10 = local_11c;
          if ((char)local_120 == '\x03') {
            uVar5 = *local_11c;
            puVar20 = (undefined4 *)local_11c[1];
            pcVar11 = (code *)*puVar20;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar5);
            }
            if (puVar20[1] != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
            thunk_FUN_016d3fb4(puVar10);
          }
        }
      }
      if (param_3[0xc] != 0) {
        local_a8 = (ushort *)param_3[0xd];
        iVar8 = FUN_016d98a4(iVar6,1,8,&local_a8,4);
        if (iVar8 == -1) {
          local_11c = (undefined4 *)FUN_016d2bc8();
          local_11c = (undefined4 *)*local_11c;
          local_120 = 0;
          if ((DAT_018d9130 < 4) &&
             (((DAT_018da52c - 1 < 2 ||
               ((DAT_018da52c != 0 && (cVar4 = FUN_0169ac90(&DAT_018da524), cVar4 != '\0')))) &&
              (iVar8 = FUN_016949d8(DAT_018da524), iVar8 != 0)))) {
            if (*(int *)(DAT_018da524 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0188502c);
            }
            local_110 = (int *)(DAT_018da524 + 0x1c);
            local_a8 = (ushort *)*local_110;
            local_108 = &local_100;
            local_a4 = *(undefined4 *)(DAT_018da524 + 0x20);
            local_a0 = *(undefined4 *)(DAT_018da524 + 0x24);
            local_9c = *(undefined4 *)(DAT_018da524 + 0x28);
            local_fc = &local_f8;
            local_f8 = &local_120;
            local_114 = 1;
            local_118 = &local_10c;
            local_98 = 0;
            local_104 = &DAT_018abb78;
            local_100 = &DAT_00570061;
            local_f4 = FUN_015ef5b4;
            local_10c = &local_a8;
            FUN_010c53e8(&local_118);
            puVar10 = local_11c;
            if ((char)local_120 == '\x03') {
              uVar5 = *local_11c;
              puVar20 = (undefined4 *)local_11c[1];
              pcVar11 = (code *)*puVar20;
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(uVar5);
              }
              if (puVar20[1] != 0) {
                thunk_FUN_016d3fb4(uVar5);
              }
              thunk_FUN_016d3fb4(puVar10);
            }
          }
        }
      }
      uVar5 = *(undefined4 *)(param_2 + 2);
      uVar13 = *(undefined4 *)(param_2 + 4);
      uVar17 = *(undefined4 *)(param_2 + 6);
      puVar10 = (undefined4 *)((uint)&local_f0 | 4);
      *puVar10 = *(undefined4 *)param_2;
      puVar10[1] = uVar5;
      puVar10[2] = uVar13;
      puVar10[3] = uVar17;
      uVar5 = *(undefined4 *)(param_2 + 10);
      uVar13 = *(undefined4 *)(param_2 + 0xc);
      uVar17 = *(undefined4 *)(param_2 + 0xe);
      puVar10[4] = *(undefined4 *)(param_2 + 8);
      puVar10[5] = uVar5;
      puVar10[6] = uVar13;
      puVar10[7] = uVar17;
      param_1[2] = param_5;
      param_1[3] = param_6;
      param_1[4] = param_7;
      *param_1 = 0;
      param_1[5] = local_f0;
      param_1[6] = uStack_ec;
      param_1[7] = uStack_e8;
      param_1[8] = uStack_e4;
      param_1[9] = local_e0;
      param_1[10] = uStack_dc;
      param_1[0xb] = uStack_d8;
      param_1[0xc] = uStack_d4;
      param_1[0xd] = uStack_d0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x17) = 0;
      param_1[0xe] = iVar6;
      return;
    }
    puVar10 = (undefined4 *)FUN_016d2bc8();
    uVar5 = *puVar10;
    local_b0 = 0;
    local_ac = uVar5;
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    uVar13 = 0x14;
    *puVar10 = 0;
    puVar10[1] = uVar5;
    pcVar22 = "tcp bind local error";
  }
  else {
    puVar10 = (undefined4 *)FUN_016d2bc8();
    uVar5 = *puVar10;
    local_b8 = 0;
    local_b4 = uVar5;
    puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    uVar13 = 0x18;
    *puVar10 = 0;
    puVar10[1] = uVar5;
    pcVar22 = "tcp bind interface error";
  }
LAB_010c41b8:
  *(undefined2 *)(param_1 + 1) = 2;
  param_1[0xb] = puVar10;
  *param_1 = 1;
  param_1[9] = pcVar22;
  param_1[10] = uVar13;
  param_1[0xc] = &DAT_01884fd0;
  FUN_016dffb2(iVar6);
  return;
}

