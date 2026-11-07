// FUN_010ae0bc @ 010ae0bc size=7132 calls_out=18 calls_in=1
// strings: current header name

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010ae0bc(uint *param_1,uint *param_2,int *param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7)

{
  ulonglong *puVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar18;
  undefined4 *puVar17;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  code *pcVar27;
  int iVar28;
  uint uVar29;
  uint *puVar30;
  uint *puVar31;
  bool bVar32;
  bool bVar33;
  ulonglong uVar34;
  uint *local_188;
  uint *local_184;
  int local_180;
  uint *local_17c;
  uint local_15c;
  uint local_140;
  uint local_13c;
  uint local_120;
  uint *local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 auStack_10c [4];
  int local_108;
  undefined4 local_f0;
  undefined1 local_ec;
  uint local_e8;
  byte *local_e4;
  uint *local_e0;
  uint *local_dc;
  uint local_d8;
  byte *pbStack_d4;
  int local_cc;
  uint *local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint uStack_b0;
  uint *local_ac;
  uint *local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  byte *pbStack_8c;
  uint *puStack_88;
  uint *puStack_84;
  uint uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  byte *local_64;
  uint *local_60;
  uint *puStack_5c;
  uint uStack_58;
  undefined2 uStack_52;
  uint local_50;
  byte *local_4c;
  uint *local_48;
  uint *local_44;
  undefined4 local_40;
  byte *pbStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  uint uStack_30;
  
  local_f0 = param_7;
  local_108 = 3;
  uVar22 = param_2[4];
  local_e8 = 1;
  local_ec = *(undefined1 *)((int)param_2 + 0x19);
  local_cc = -0x80000000;
  puVar16 = *(undefined4 **)(uVar22 + 0x18);
  iVar19 = *(int *)(uVar22 + 0x1c);
  local_dc = (uint *)0x0;
  local_e0 = (uint *)0x0;
  local_d8 = local_d8 & 0xffffff00;
  local_c0 = 0;
  if (iVar19 != 0) {
    puVar17 = puVar16;
    do {
      puVar18 = puVar17 + 1;
      *puVar17 = 0xffff;
      puVar17 = puVar18;
    } while (puVar18 != puVar16 + iVar19);
  }
  local_140 = param_6;
  iVar19 = *(int *)(uVar22 + 0x24);
  uVar12 = *(uint *)(uVar22 + 0x28);
  *(undefined4 *)(uVar22 + 0x28) = 0;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  puVar1 = (ulonglong *)(param_2 + 2);
  puVar7 = *(uint **)puVar1;
  puVar8 = (uint *)param_2[3];
  uVar4 = *puVar1;
  uVar34 = *puVar1;
  pcVar9 = (char *)param_2[5];
  local_120 = 0;
  local_11c = (uint *)0x0;
  bVar2 = false;
  local_13c = 0;
  bVar3 = false;
  bVar33 = false;
  puVar31 = param_2;
  local_15c = param_4;
  local_a0 = uVar12;
  local_9c = iVar19;
  local_98 = uVar12;
  local_94 = uVar22 + 0x2c;
LAB_010ae1fc:
  if (((uint)local_11c & 1) == 0) {
    if (local_120 != uVar12) {
      uVar29 = local_120 + 1;
      if (uVar12 <= local_120) {
        local_ac = (uint *)0x0;
        local_a8 = puVar31;
        local_a4 = uVar29;
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_120,uVar12,&DAT_018847a8);
      }
      puVar10 = (uint *)(iVar19 + local_120 * 0x34);
      bVar32 = (*puVar10 & 1) != 0;
      puVar31 = (uint *)0x203a;
      if (bVar32) {
        puVar31 = (uint *)puVar10[1];
      }
      local_11c = (uint *)(uint)bVar32;
      local_78 = puVar10[8];
      uStack_74 = puVar10[9];
      uStack_70 = puVar10[10];
      local_6c = puVar10[0xb];
      local_90 = puVar10[3];
      pbStack_8c = (byte *)puVar10[4];
      puStack_88 = (uint *)puVar10[5];
      puStack_84 = (uint *)puVar10[6];
      uStack_80 = puVar10[7];
      uVar20 = 0;
      if (local_c0 != 0) {
        uVar20 = local_bc;
      }
      local_68 = local_90;
      local_64 = pbStack_8c;
      local_60 = puStack_88;
      puStack_5c = puStack_84;
      uStack_58 = uStack_80;
      if (local_c0 != 0 && uVar20 != 0) {
        (**(code **)(uVar20 + 0x10))(&uStack_b0,local_b8,local_b4);
      }
      local_bc = local_78;
      local_b8 = uStack_74;
      local_b4 = uStack_70;
      uStack_b0 = local_6c;
      local_c0 = 1;
      if (bVar3) {
        iVar13 = param_3[2];
        if ((local_13c & 1) == 0) {
          if ((uint)(*param_3 - iVar13) < 2) {
            FUN_010bf6b0(param_3,iVar13,2,1,1);
            iVar13 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + iVar13) = 0xa0d;
          iVar13 = 2;
        }
        else {
          if ((uint)(*param_3 - iVar13) < 0xb) {
            FUN_010bf6b0(param_3,iVar13,0xb,1,1);
            iVar13 = param_3[2];
          }
          puVar16 = (undefined4 *)(param_3[1] + iVar13);
          *puVar16 = 0x6863202c;
          *(undefined4 *)((int)puVar16 + 7) = 0xa0d6465;
          puVar16[1] = 0x656b6e75;
          iVar13 = 0xb;
        }
        param_3[2] = param_3[2] + iVar13;
        bVar3 = false;
        uVar20 = local_a4;
        goto joined_r0x010ae3fc;
      }
      bVar3 = false;
      local_120 = uVar29;
      if (local_78 == 0) goto LAB_010ae410;
      goto switchD_010ae428_caseD_15;
    }
    local_ac = (uint *)0x0;
    local_a8 = puVar31;
    local_a4 = uVar12;
    FUN_010b27f4(&local_ac);
    if (bVar3) {
      iVar19 = param_3[2];
      if ((local_13c & 1) == 0) {
        if ((uint)(*param_3 - iVar19) < 2) {
          FUN_010bf6b0(param_3,iVar19,2,1,1);
          iVar19 = param_3[2];
        }
        *(undefined2 *)(param_3[1] + iVar19) = 0xa0d;
        iVar19 = 2;
      }
      else {
        if ((uint)(*param_3 - iVar19) < 0xb) {
          FUN_010bf6b0(param_3,iVar19,0xb,1,1);
          iVar19 = param_3[2];
        }
        puVar16 = (undefined4 *)(param_3[1] + iVar19);
        *puVar16 = 0x6863202c;
        *(undefined4 *)((int)puVar16 + 7) = 0xa0d6465;
        puVar16[1] = 0x656b6e75;
        iVar19 = 0xb;
      }
      param_3[2] = param_3[2] + iVar19;
    }
    if ((local_140 & 1) != 0) goto LAB_010af65c;
    if (uVar5 == 2 && uVar6 == 0) {
LAB_010af1c8:
      uVar6 = (uint)*(ushort *)(uVar22 + 0x44);
      uVar5 = 1;
      if ((((uVar6 - 100 < 100) || ((uVar6 - 200 < 100 && (*pcVar9 == '\a')))) || (uVar6 == 0xcc))
         || (uVar6 == 0x130 || *pcVar9 == '\x05')) {
LAB_010af388:
        uVar5 = 1;
      }
      else {
        local_44 = (uint *)0x0;
        local_48 = (uint *)0x0;
        local_4c = &DAT_00000018;
        local_50 = 0;
        FUN_010b037c(&local_118,param_3,&local_50);
        iVar19 = param_3[2];
        if ((uint)(*param_3 - iVar19) < 5) {
          FUN_010bf6b0(param_3,iVar19,5,1,1);
          iVar19 = param_3[2];
        }
        iVar13 = param_3[1];
        *(undefined4 *)(iVar13 + iVar19) = 0xd30203a;
        *(undefined1 *)((undefined4 *)(iVar13 + iVar19) + 1) = 10;
        param_3[2] = param_3[2] + 5;
        if (local_50 != 0) {
          (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
        }
      }
    }
    else if ((uVar5 & 1) == 0) {
      if (puVar7 == (uint *)0x0 && puVar8 == (uint *)0x0) goto LAB_010af1c8;
      uVar6 = (uint)*(ushort *)(uVar22 + 0x44);
      uVar5 = 1;
      if ((uVar6 - 100 < 100) ||
         (((uVar6 - 200 < 100 && (*pcVar9 == '\a')) || (uVar6 == 0xcc || uVar6 == 0x130))))
      goto LAB_010af388;
      local_44 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_4c = &DAT_00000018;
      local_50 = 0;
      FUN_010b037c(&local_118,param_3,&local_50);
      iVar19 = param_3[2];
      if ((uint)(*param_3 - iVar19) < 2) {
        FUN_010bf6b0(param_3,iVar19,2,1,1);
        iVar19 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar19) = 0x203a;
      param_3[2] = param_3[2] + 2;
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
      }
      iVar19 = 0x14;
      if (puVar8 != (uint *)0x0 || puVar8 < (uint *)(uint)((uint *)0x270f < puVar7)) {
        iVar13 = 0;
        uVar34 = uVar4;
        do {
          iVar19 = iVar13;
          iVar28 = (int)(uVar34 >> 0x20);
          uVar29 = (uint)uVar34;
          uVar34 = FUN_01846088(uVar29,iVar28,10000,0);
          uVar12 = uVar29 + (int)uVar34 * -10000;
          uVar6 = (uint)((short)((uVar12 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)&local_40 + iVar19) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
          *(undefined2 *)((int)&local_40 + iVar19 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar12 + uVar6 * -100 & 0xffff) * 2);
          iVar13 = iVar19 + -4;
        } while ((uint)(uVar29 < 100000000) <= (uint)-iVar28);
        iVar19 = iVar19 + 0x10;
      }
      puVar11 = (undefined1 *)uVar34;
      if ((uint)(puVar11 < &DAT_00000064) <= (uint)-(int)(uVar34 >> 0x20)) {
        uVar6 = (uint)((short)(((uint)puVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
        uVar34 = (ulonglong)uVar6;
        *(undefined2 *)((int)&uStack_52 + iVar19) =
             *(undefined2 *)(&DAT_0040f4ca + ((uint)(puVar11 + uVar6 * -100) & 0xffff) * 2);
        iVar19 = iVar19 + -2;
      }
      uVar6 = (uint)(uVar34 >> 0x20);
      if (uVar6 == 0 && (&DAT_00000009 < (undefined1 *)uVar34) <= uVar6) {
        iVar13 = iVar19 + -1;
        *(byte *)((int)&uStack_52 + iVar19 + 1) = (byte)uVar34 | 0x30;
      }
      else {
        iVar13 = iVar19 + -2;
        *(undefined2 *)((int)&uStack_52 + iVar19) =
             *(undefined2 *)(&DAT_0040f4ca + (int)(undefined1 *)uVar34 * 2);
      }
      uVar6 = 0x14 - iVar13;
      iVar19 = param_3[2];
      if ((uint)(*param_3 - iVar19) < uVar6) {
        FUN_010bf6b0(param_3,iVar19,uVar6,1,1);
        iVar19 = param_3[2];
      }
      FUN_016dd1aa(param_3[1] + iVar19,(int)&local_50 + iVar13,uVar6);
      iVar19 = param_3[2] + uVar6;
      param_3[2] = iVar19;
      if ((uint)(*param_3 - iVar19) < 2) {
        FUN_010bf6b0(param_3,iVar19,2,1,1);
        iVar19 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar19) = 0xa0d;
      param_3[2] = param_3[2] + 2;
    }
    else {
      uVar5 = 2;
      if ((*(char *)(uVar22 + 0x46) == '\x01') || (*pcVar9 == '\x05')) goto joined_r0x010af398;
      uVar6 = (uint)*(ushort *)(uVar22 + 0x44);
      if (*pcVar9 == '\a') {
        if (uVar6 - 100 < 200) goto joined_r0x010af398;
      }
      else if (uVar6 - 100 < 100) goto joined_r0x010af398;
      if ((uVar6 != 0xcc) && (uVar6 != 0x130)) {
        local_44 = (uint *)0x0;
        local_48 = (uint *)0x0;
        local_4c = &DAT_00000045;
        local_50 = 0;
        FUN_010b037c(&local_118,param_3,&local_50);
        iVar19 = param_3[2];
        if ((uint)(*param_3 - iVar19) < 0xb) {
          FUN_010bf6b0(param_3,iVar19,0xb,1,1);
          iVar19 = param_3[2];
        }
        puVar16 = (undefined4 *)(param_3[1] + iVar19);
        *puVar16 = 0x6863203a;
        *(undefined4 *)((int)puVar16 + 7) = 0xa0d6465;
        puVar16[1] = 0x656b6e75;
        param_3[2] = param_3[2] + 0xb;
        if (local_50 != 0) {
          (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
        }
        uVar5 = 0;
      }
    }
joined_r0x010af398:
    if ((local_e8 == 0) && (local_e4 != &DAT_80000000)) {
      iVar19 = (int)local_dc + 1;
      local_e8 = 0;
      puVar31 = local_e0 + 2;
      while (iVar19 = iVar19 + -1, iVar19 != 0) {
        (**(code **)(puVar31[-2] + 0x10))(puVar31 + 1,puVar31[-1],*puVar31);
        puVar31 = puVar31 + 5;
      }
      if (local_e4 != (byte *)0x0) {
        thunk_FUN_016d3fb4(local_e0);
      }
    }
    local_e4 = &DAT_80000000;
    local_d8 = local_d8 & 0xffffff00;
    local_e8 = uVar5;
LAB_010af65c:
    if (*pcVar9 == '\x05') {
LAB_010af6a0:
      if ((local_e8 == 0) && (local_e4 != &DAT_80000000)) {
        iVar19 = (int)local_dc + 1;
        puVar31 = local_e0 + 2;
        while (iVar19 = iVar19 + -1, iVar19 != 0) {
          (**(code **)(puVar31[-2] + 0x10))(puVar31 + 1,puVar31[-1],*puVar31);
          puVar31 = puVar31 + 5;
        }
        if (local_e4 != (byte *)0x0) {
          thunk_FUN_016d3fb4(local_e0);
        }
      }
      local_e8 = 1;
      local_d8 = local_d8 & 0xffffff00;
    }
    else {
      uVar22 = (uint)*(ushort *)(uVar22 + 0x44);
      if (*pcVar9 != '\a') {
        if (99 < uVar22 - 100) goto LAB_010af694;
        goto LAB_010af6a0;
      }
      if (uVar22 - 100 < 200) goto LAB_010af6a0;
LAB_010af694:
      if (uVar22 == 0x130 || uVar22 == 0xcc) goto LAB_010af6a0;
    }
    iVar19 = param_3[2];
    if ((bVar33) || ((*(byte *)((int)param_2 + 0x1a) & 1) == 0)) {
      if ((uint)(*param_3 - iVar19) < 2) {
        FUN_010bf6b0(param_3,iVar19,2,1,1);
        iVar19 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar19) = 0xa0d;
      iVar19 = 2;
    }
    else {
      if ((uint)(*param_3 - iVar19) < 0x25) {
        FUN_010bf6b0(param_3,iVar19,0x25,1,1);
      }
      local_44 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_4c = &DAT_00000020;
      local_50 = 0;
      FUN_010b037c(&local_118,param_3,&local_50);
      iVar19 = param_3[2];
      if ((uint)(*param_3 - iVar19) < 2) {
        FUN_010bf6b0(param_3,iVar19,2,1,1);
        iVar19 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar19) = 0x203a;
      param_3[2] = param_3[2] + 2;
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
      }
      FUN_010bda48(param_3);
      iVar19 = param_3[2];
      if ((uint)(*param_3 - iVar19) < 4) {
        FUN_010bf6b0(param_3,iVar19,4,1,1);
        iVar19 = param_3[2];
      }
      *(undefined4 *)(param_3[1] + iVar19) = 0xa0d0a0d;
      iVar19 = 4;
    }
    iVar13 = local_cc;
    param_3[2] = param_3[2] + iVar19;
    bVar33 = local_e8 == 0;
    bVar2 = local_cc != -0x80000000;
    if (bVar33 && bVar2) {
      FUN_010bcad8(&local_50,&local_e8,&local_cc);
      local_e8 = local_50;
      local_e4 = local_4c;
      local_e0 = local_48;
      local_dc = local_44;
      local_d8 = local_40;
      pbStack_d4 = pbStack_3c;
    }
    *param_1 = local_e8;
    param_1[1] = (uint)local_e4;
    param_1[2] = (uint)local_e0;
    param_1[3] = (uint)local_dc;
    *(char *)(param_1 + 4) = (char)(local_15c & 1);
    uVar22 = local_15c & 1;
    if (local_c0 != 0) {
      uVar22 = local_bc;
    }
    *(uint *)((int)param_1 + 0x11) = CONCAT13(pbStack_d4._0_1_,local_d8._1_3_);
    param_1[5] = (uint)pbStack_d4;
    if (local_c0 != 0 && uVar22 != 0) {
      (**(code **)(uVar22 + 0x10))(&uStack_b0,local_b8,local_b4);
    }
    puVar31 = local_c8;
    if (bVar33 && bVar2 || iVar13 == -0x80000000) goto LAB_010af92c;
    iVar28 = 0;
    iVar19 = local_c4 + 1;
    while (iVar19 = iVar19 + -1, iVar19 != 0) {
      piVar15 = (int *)((int)puVar31 + iVar28);
      iVar28 = iVar28 + 0x14;
      (**(code **)(*piVar15 + 0x10))(piVar15 + 3,piVar15[1],piVar15[2]);
    }
    if (iVar13 == 0) goto LAB_010af92c;
    goto LAB_010af928;
  }
  FUN_010b1bc4(&local_50,iVar19,uVar12,uVar22 + 0x2c,puVar31);
  if (((uint)local_48 & 1) != 0) {
    puVar31 = local_44;
  }
  uVar29 = local_120;
  local_11c = local_48;
  uVar20 = local_a4;
  local_90 = local_40;
  pbStack_8c = pbStack_3c;
  puStack_88 = puStack_38;
  puStack_84 = puStack_34;
  uStack_80 = uStack_30;
  local_68 = local_40;
  local_64 = pbStack_3c;
  local_60 = puStack_38;
  puStack_5c = puStack_34;
  uStack_58 = uStack_30;
joined_r0x010ae3fc:
  local_a4 = uVar29;
  if (local_c0 == 0) {
    local_ac = local_11c;
    local_a8 = puVar31;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("current header name",0x13,&DAT_018846f0);
  }
  local_120 = local_a4;
  local_a4 = uVar20;
  if (local_bc != 0) goto switchD_010ae428_caseD_15;
LAB_010ae410:
  switch(local_b8 & 0xff) {
  case 0x14:
    uVar29 = 1;
    local_a4 = local_120;
    local_ac = local_11c;
    local_a8 = puVar31;
    if ((local_15c & 1) == 0) {
      uVar29 = FUN_010c09a8(local_64,local_60);
    }
    if (bVar3) {
      iVar13 = param_3[2];
      if ((uint)(*param_3 - iVar13) < 2) {
        FUN_010bf6b0(param_3,iVar13,2,1,1);
        iVar13 = param_3[2];
      }
      puVar10 = local_60;
      pbVar14 = local_64;
      *(undefined2 *)(param_3[1] + iVar13) = 0x202c;
      iVar13 = param_3[2] + 2;
      param_3[2] = iVar13;
      if ((uint *)(*param_3 - iVar13) < local_60) {
        FUN_010bf6b0(param_3,iVar13,local_60,1,1);
LAB_010aefcc:
        iVar13 = param_3[2];
      }
    }
    else {
      local_44 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_4c = &DAT_00000014;
      local_50 = 0;
      FUN_010b037c(&local_118,param_3,&local_50);
      iVar13 = param_3[2];
      if ((uint)(*param_3 - iVar13) < 2) {
        FUN_010bf6b0(param_3,iVar13,2,1,1);
        iVar13 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
      iVar13 = param_3[2] + 2;
      param_3[2] = iVar13;
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
        iVar13 = param_3[2];
      }
      puVar10 = local_60;
      pbVar14 = local_64;
      if ((uint *)(*param_3 - iVar13) < local_60) {
        FUN_010bf6b0(param_3,iVar13,local_60,1,1);
        goto LAB_010aefcc;
      }
    }
    FUN_016dd1aa(param_3[1] + iVar13,pbVar14,puVar10);
    local_15c = uVar29;
LAB_010aec8c:
    param_3[2] = param_3[2] + (int)puVar10;
    break;
  default:
    goto switchD_010ae428_caseD_15;
  case 0x18:
    if ((~local_140 & 1) == 0 && !bVar3) {
      uVar21 = 0xc;
      local_a4 = local_120;
      local_ac = local_11c;
      if (param_5 <= (uint)param_3[2]) {
        param_3[2] = param_5;
      }
      local_a8 = puVar31;
      puVar16 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar16 == (undefined4 *)0x0) goto LAB_010afc84;
      *(undefined2 *)(puVar16 + 2) = 0x401;
      *puVar16 = 0;
      goto LAB_010af3bc;
    }
    if (uVar5 == 2 && uVar6 == 0) {
      if (*pcVar9 != '\x05') {
        local_a4 = local_120;
        local_ac = local_11c;
        local_a8 = puVar31;
        goto LAB_010aeca0;
      }
      local_140 = 1;
      goto switchD_010ae428_caseD_15;
    }
    local_a4 = local_120;
    local_ac = local_11c;
    if ((uVar5 & 1) != 0) {
      if (local_60 != (uint *)0x0) {
        puVar30 = (uint *)0x0;
        puVar23 = (uint *)0x0;
        puVar10 = local_60;
        pbVar14 = local_64;
        while (puVar10 != (uint *)0x0) {
          uVar29 = *pbVar14 - 0x30 & 0xff;
          if (9 < uVar29) goto LAB_010af3a0;
          uVar20 = (uint)(ZEXT48(puVar30) * 10);
          uVar26 = (uint)(ZEXT48(puVar30) * 10 >> 0x20);
          uVar24 = (uint)(ZEXT48(puVar23) * 10);
          uVar25 = uVar26 + uVar24;
          if ((int)(ZEXT48(puVar23) * 10 >> 0x20) != 0 || CARRY4(uVar26,uVar24)) goto LAB_010af3a0;
          puVar30 = (uint *)(uVar20 + uVar29);
          puVar10 = (uint *)((int)puVar10 - 1);
          puVar23 = (uint *)(uVar25 + CARRY4(uVar20,uVar29));
          pbVar14 = pbVar14 + 1;
          if (CARRY4(uVar25,(uint)CARRY4(uVar20,uVar29))) goto LAB_010af3a0;
        }
        if (!bVar2) {
          local_a8 = puVar31;
          if (((local_e8 == 0) && (local_e4 != &DAT_80000000)) &&
             (FUN_010bbd58(local_e0,local_dc), local_e4 != (byte *)0x0)) {
            thunk_FUN_016d3fb4(local_e0);
          }
          local_4c = &DAT_00000018;
          local_e8 = 1;
          local_d8 = local_d8 & 0xffffff00;
          local_44 = (uint *)0x0;
          local_48 = (uint *)0x0;
          local_50 = 0;
          local_e0 = puVar30;
          local_dc = puVar23;
          FUN_010b037c(&local_118,param_3,&local_50);
          iVar13 = param_3[2];
          if ((uint)(*param_3 - iVar13) < 2) {
            FUN_010bf6b0(param_3,iVar13,2,1,1);
            iVar13 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
          iVar13 = param_3[2] + 2;
          param_3[2] = iVar13;
          if (local_50 != 0) {
            (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
            iVar13 = param_3[2];
          }
          puVar10 = local_60;
          pbVar14 = local_64;
          if ((uint *)(*param_3 - iVar13) < local_60) {
            FUN_010bf6b0(param_3,iVar13,local_60,1,1);
            iVar13 = param_3[2];
          }
          FUN_016dd1aa(param_3[1] + iVar13,pbVar14,puVar10);
          bVar2 = true;
          local_188 = puVar23;
          local_184 = puVar30;
LAB_010aec88:
          local_140 = 1;
          goto LAB_010aec8c;
        }
        bVar2 = true;
        local_a8 = puVar31;
        if (local_184 == puVar30 && local_188 == puVar23) goto LAB_010aeca0;
      }
      goto LAB_010af3a0;
    }
    local_a8 = puVar31;
    if (!bVar3) {
      if (((local_e8 == 0) && (local_e4 != &DAT_80000000)) &&
         (FUN_010bbd58(local_e0,local_dc), local_e4 != (byte *)0x0)) {
        thunk_FUN_016d3fb4(local_e0);
      }
      local_e8 = 1;
      local_d8 = local_d8 & 0xffffff00;
      local_44 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_4c = &DAT_00000018;
      local_50 = 0;
      local_e0 = puVar7;
      local_dc = puVar8;
      FUN_010b037c(&local_118,param_3,&local_50);
      iVar13 = param_3[2];
      if ((uint)(*param_3 - iVar13) < 2) {
        FUN_010bf6b0(param_3,iVar13,2,1,1);
        iVar13 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
      iVar13 = param_3[2] + 2;
      param_3[2] = iVar13;
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
        iVar13 = param_3[2];
      }
      puVar10 = local_60;
      pbVar14 = local_64;
      if ((uint *)(*param_3 - iVar13) < local_60) {
        FUN_010bf6b0(param_3,iVar13,local_60,1,1);
        goto LAB_010af00c;
      }
      goto LAB_010ae9b4;
    }
    break;
  case 0x20:
    bVar33 = true;
    goto switchD_010ae428_caseD_15;
  case 0x44:
    local_a4 = local_120;
    local_ac = local_11c;
    local_a8 = puVar31;
    if ((*(char *)(uVar22 + 0x46) == '\x01') || (*pcVar9 == '\x05')) goto LAB_010aeca0;
    uVar29 = (uint)*(ushort *)(uVar22 + 0x44);
    if (*pcVar9 != '\a') {
      if (99 < uVar29 - 100) goto LAB_010aea0c;
      goto LAB_010aeca0;
    }
    if (uVar29 - 100 < 200) goto LAB_010aeca0;
LAB_010aea0c:
    if (uVar29 == 0xcc || uVar29 == 0x130) goto LAB_010aeca0;
    if (bVar3) {
      iVar13 = param_3[2];
      if ((uint)(*param_3 - iVar13) < 2) {
        FUN_010bf6b0(param_3,iVar13,2,1,1);
        iVar13 = param_3[2];
      }
      puVar10 = local_60;
      pbVar14 = local_64;
      *(undefined2 *)(param_3[1] + iVar13) = 0x202c;
      iVar13 = param_3[2] + 2;
      param_3[2] = iVar13;
      if ((uint *)(*param_3 - iVar13) < local_60) {
        FUN_010bf6b0(param_3,iVar13,local_60,1,1);
LAB_010af0ac:
        iVar13 = param_3[2];
      }
    }
    else {
      local_44 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_4c = &DAT_00000044;
      local_50 = 0;
      FUN_010b037c(&local_118,param_3,&local_50);
      iVar13 = param_3[2];
      if ((uint)(*param_3 - iVar13) < 2) {
        FUN_010bf6b0(param_3,iVar13,2,1,1);
        iVar13 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
      iVar13 = param_3[2] + 2;
      param_3[2] = iVar13;
      if (local_50 != 0) {
        (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
        iVar13 = param_3[2];
      }
      puVar10 = local_60;
      pbVar14 = local_64;
      if ((uint *)(*param_3 - iVar13) < local_60) {
        FUN_010bf6b0(param_3,iVar13,local_60,1,1);
        goto LAB_010af0ac;
      }
    }
    FUN_016dd1aa(param_3[1] + iVar13,pbVar14,puVar10);
    param_3[2] = param_3[2] + (int)puVar10;
    if (local_cc == -0x80000000) {
      uVar21 = 0x14;
      local_17c = (uint *)thunk_FUN_016d4a50(0x14);
      if (local_17c == (uint *)0x0) {
LAB_010afc84:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,uVar21);
      }
      *local_17c = local_68;
      local_17c[1] = (uint)local_64;
      local_17c[2] = (uint)local_60;
      local_17c[3] = (uint)puStack_5c;
      local_17c[4] = uStack_58;
      local_c4 = 1;
      local_cc = 1;
      local_c8 = local_17c;
    }
    else {
      local_50 = local_68;
      local_4c = local_64;
      local_48 = local_60;
      local_44 = puStack_5c;
      local_40 = uStack_58;
      if (local_180 == local_cc) {
        FUN_010bf5f0(&local_cc);
        local_17c = local_c8;
      }
      local_c4 = local_180 + 1;
      puVar10 = local_17c + local_180 * 5;
      *puVar10 = local_50;
      puVar10[1] = (uint)local_4c;
      puVar10[2] = (uint)local_48;
      puVar10[3] = (uint)local_44;
      puVar10[4] = local_40;
    }
    bVar3 = true;
    local_180 = local_c4;
    goto LAB_010ae1fc;
  case 0x45:
    local_a4 = local_120;
    local_ac = local_11c;
    if ((~local_140 & 1) != 0 || bVar3) {
      local_a8 = puVar31;
      if ((*(char *)(uVar22 + 0x46) != '\x01') && (*pcVar9 != '\x05')) {
        uVar29 = (uint)*(ushort *)(uVar22 + 0x44);
        if (*pcVar9 == '\a') {
          if (199 < uVar29 - 100) {
LAB_010aea94:
            if (uVar29 != 0xcc && uVar29 != 0x130) {
              local_13c = FUN_010c0690(local_64,local_60);
              local_13c = local_13c ^ 1;
              if (bVar3) {
                iVar13 = param_3[2];
                if ((uint)(*param_3 - iVar13) < 2) {
                  FUN_010bf6b0(param_3,iVar13,2,1,1);
                  iVar13 = param_3[2];
                }
                puVar10 = local_60;
                pbVar14 = local_64;
                *(undefined2 *)(param_3[1] + iVar13) = 0x202c;
                iVar13 = param_3[2] + 2;
                param_3[2] = iVar13;
                if ((uint *)(*param_3 - iVar13) < local_60) {
                  FUN_010bf6b0(param_3,iVar13,local_60,1,1);
LAB_010af00c:
                  iVar13 = param_3[2];
                }
              }
              else {
                if (((local_e8 == 0) && (local_e4 != &DAT_80000000)) &&
                   (FUN_010bbd58(local_e0,local_dc), local_e4 != (byte *)0x0)) {
                  thunk_FUN_016d3fb4(local_e0);
                }
                local_e4 = &DAT_80000000;
                local_d8 = local_d8 & 0xffffff00;
                local_e8 = 0;
                local_44 = (uint *)0x0;
                local_48 = (uint *)0x0;
                local_4c = &DAT_00000045;
                local_50 = 0;
                FUN_010b037c(&local_118,param_3,&local_50);
                iVar13 = param_3[2];
                if ((uint)(*param_3 - iVar13) < 2) {
                  FUN_010bf6b0(param_3,iVar13,2,1,1);
                  iVar13 = param_3[2];
                }
                *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
                iVar13 = param_3[2] + 2;
                param_3[2] = iVar13;
                if (local_50 != 0) {
                  (**(code **)(local_50 + 0x10))(&local_44,local_4c,local_48);
                  iVar13 = param_3[2];
                }
                puVar10 = local_60;
                pbVar14 = local_64;
                if ((uint *)(*param_3 - iVar13) < local_60) {
                  FUN_010bf6b0(param_3,iVar13,local_60,1,1);
                  goto LAB_010af00c;
                }
              }
LAB_010ae9b4:
              FUN_016dd1aa(param_3[1] + iVar13,pbVar14,puVar10);
              goto LAB_010aec88;
            }
          }
        }
        else if (99 < uVar29 - 100) goto LAB_010aea94;
      }
      goto LAB_010aeca0;
    }
LAB_010af3a0:
    local_a4 = local_120;
    local_ac = local_11c;
    if (param_5 <= (uint)param_3[2]) {
      param_3[2] = param_5;
    }
    local_a8 = puVar31;
    puVar16 = (undefined4 *)FUN_010beca8();
LAB_010af3bc:
    pcVar27 = *(code **)(local_68 + 0x10);
    *param_1 = 3;
    param_1[1] = (uint)puVar16;
    (*pcVar27)(&puStack_5c,local_64,local_60);
    FUN_010b27f4(&local_ac);
    uVar22 = 0;
    if (local_c0 != 0) {
      uVar22 = local_bc;
    }
    if (local_c0 != 0 && uVar22 != 0) {
      (**(code **)(uVar22 + 0x10))(&uStack_b0,local_b8,local_b4);
    }
    if (local_cc != -0x80000000) {
      iVar19 = local_180 + 1;
      puVar31 = local_17c + 2;
      while (iVar19 = iVar19 + -1, iVar19 != 0) {
        (**(code **)(puVar31[-2] + 0x10))(puVar31 + 1,puVar31[-1],*puVar31);
        puVar31 = puVar31 + 5;
      }
      if (local_cc != 0) {
        thunk_FUN_016d3fb4(local_c8);
      }
    }
    if ((local_e8 == 0) && (local_e4 != &DAT_80000000)) {
      iVar19 = (int)local_dc + 1;
      puVar31 = local_e0 + 2;
      while (iVar19 = iVar19 + -1, iVar19 != 0) {
        (**(code **)(puVar31[-2] + 0x10))(puVar31 + 1,puVar31[-1],*puVar31);
        puVar31 = puVar31 + 5;
      }
      if (local_e4 != (byte *)0x0) {
        puVar31 = local_e0;
LAB_010af928:
        thunk_FUN_016d3fb4(puVar31);
      }
    }
LAB_010af92c:
    iVar19 = local_108;
    if (local_108 != 3) {
      iVar19 = local_118;
    }
    if (local_108 != 3 && iVar19 != 0) {
      (**(code **)(iVar19 + 0x10))(auStack_10c,local_114,local_110);
      return;
    }
    return;
  }
  bVar3 = true;
LAB_010aeca0:
  (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
  goto LAB_010ae1fc;
switchD_010ae428_caseD_15:
  FUN_010b037c(&local_118,param_3,&local_bc);
  iVar13 = param_3[2];
  if ((uint)(*param_3 - iVar13) < 2) {
    FUN_010bf6b0(param_3,iVar13,2,1,1);
    iVar13 = param_3[2];
  }
  puVar10 = local_60;
  pbVar14 = local_64;
  *(undefined2 *)(param_3[1] + iVar13) = 0x203a;
  iVar13 = param_3[2] + 2;
  param_3[2] = iVar13;
  if ((uint *)(*param_3 - iVar13) < local_60) {
    FUN_010bf6b0(param_3,iVar13,local_60,1,1);
    iVar13 = param_3[2];
  }
  FUN_016dd1aa(param_3[1] + iVar13,pbVar14,puVar10);
  iVar13 = param_3[2] + (int)puVar10;
  param_3[2] = iVar13;
  if ((uint)(*param_3 - iVar13) < 2) {
    FUN_010bf6b0(param_3,iVar13,2,1,1);
    iVar13 = param_3[2];
  }
  *(undefined2 *)(param_3[1] + iVar13) = 0xa0d;
  param_3[2] = param_3[2] + 2;
  (**(code **)(local_68 + 0x10))(&puStack_5c,local_64,local_60);
  goto LAB_010ae1fc;
}

