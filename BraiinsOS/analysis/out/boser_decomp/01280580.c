// FUN_01280580 @ 01280580 size=3908 calls_out=32 calls_in=1
// strings: internally tagged enum Action | internally tagged enum Action | internally tagged enum Action | internally tagged enum Action | Action | SupportArchive

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01280580(undefined4 *param_1,uint *******param_2)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *******pppppppuVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint ******ppppppuVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *******pppppppuVar23;
  uint uVar24;
  bool bVar25;
  uint local_18c;
  int local_184;
  int local_178;
  uint *******local_138;
  uint *******pppppppuStack_134;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_12c;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_124;
  uint *******local_120;
  undefined1 local_11c;
  uint *******local_118;
  uint *******local_114;
  uint *******local_110;
  uint *******local_10c;
  uint *******local_108;
  uint *******pppppppuStack_104;
  uint *******local_100;
  uint *******local_fc;
  uint *******local_f8;
  uint *******pppppppuStack_f4;
  undefined1 local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined4 local_e5;
  uint *******local_d8;
  uint *******pppppppuStack_d4;
  undefined1 local_d0;
  uint *******local_c8;
  undefined1 local_c4;
  undefined2 local_c2;
  uint *******local_c0;
  uint *******pppppppuStack_bc;
  uint *******local_b8;
  uint *******local_b4;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_ac;
  uint *******local_a8;
  uint *******local_a4;
  uint *******local_a0;
  uint *******local_9c;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_94;
  uint *******local_90;
  undefined1 local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint *******local_78;
  uint *******local_74;
  uint *******local_68;
  uint *******local_64;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_5c;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint *******local_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  uint *******pppppppuStack_34;
  uint *******local_30;
  undefined4 uStack_2c;
  
  ppppppuVar16 = param_2[5];
  if (ppppppuVar16 < param_2[4]) {
    do {
      uVar20 = *(byte *)((int)param_2[3] + (int)ppppppuVar16) - 9;
      if ((0x17 < uVar20) || ((1 << (uVar20 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)ppppppuVar16) != 0x7b) {
          pppppppuVar15 = (uint *******)FUN_012c7788(param_2,&local_48,&DAT_01c25800);
          goto LAB_01281260;
        }
        cVar19 = *(char *)(param_2 + 7);
        *(char *)(param_2 + 7) = cVar19 + -1;
        if ((char)(cVar19 + -1) != '\0') {
          param_2[5] = (uint ******)((int)ppppppuVar16 + 1);
          local_11c = 1;
          local_120 = param_2;
          FUN_012818a0(&local_48);
          local_108 = local_48;
          pppppppuStack_104 = local_44;
          local_10c = (uint *******)0x0;
          local_110 = (uint *******)0x0;
          local_114 = (uint *******)0x0;
          puVar17 = (undefined4 *)((uint)&local_a8 | 4);
          uVar20 = (uint)&local_a8 | 1;
          uVar5 = (uint)&local_48 | 7;
          puVar6 = (undefined4 *)((uint)&local_68 | 4);
          puVar7 = (undefined4 *)((uint)&local_78 | 4);
          puVar8 = (undefined4 *)((uint)&local_48 | 3);
          local_fc = local_3c;
          local_100 = local_40;
          local_118 = (uint *******)&DAT_0056d238;
          goto LAB_012806e8;
        }
        local_48 = (uint *******)0x18;
        goto LAB_012805e0;
      }
      ppppppuVar16 = (uint ******)((int)ppppppuVar16 + 1);
      param_2[5] = ppppppuVar16;
    } while (param_2[4] != ppppppuVar16);
  }
  local_48 = (uint *******)0x5;
LAB_012805e0:
  uVar4 = FUN_012c6b30(param_2,&local_48);
  *param_1 = 0;
  param_1[1] = uVar4;
  return;
LAB_012806e8:
  FUN_01278730(&local_48,&local_120);
  if ((char)local_48 == '\x01') {
LAB_012812a0:
    local_c8 = local_44;
    pppppppuVar9 = local_44;
LAB_012811ac:
    pppppppuVar23 = (uint *******)0x0;
    if (local_114 != (uint *******)0x0) {
      uVar20 = (int)local_114 * 0x11 + 0x14U & 0xfffffffc;
      if ((undefined1 *)((int)local_114 + uVar20) != (undefined1 *)0xfffffffb) {
        thunk_FUN_01be4678((int)local_118 - uVar20);
      }
    }
LAB_012811e0:
    *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
    local_40 = local_138;
    local_3c = pppppppuStack_134;
    local_38 = pppppppuStack_130;
    pppppppuStack_34 = pppppppuStack_12c;
    local_30 = pppppppuStack_128;
    local_48 = pppppppuVar23;
    local_44 = pppppppuVar9;
    pppppppuVar14 = (uint *******)FUN_012c7b64(param_2);
    if (pppppppuVar23 == (uint *******)0x0) {
      pppppppuVar15 = pppppppuVar9;
      if (pppppppuVar14 != (uint *******)0x0) {
        FUN_01278260(pppppppuVar14);
      }
    }
    else {
      if (pppppppuVar14 == (uint *******)0x0) {
        param_1[2] = local_138;
        param_1[3] = pppppppuStack_134;
        param_1[4] = pppppppuStack_130;
        param_1[5] = pppppppuStack_12c;
        param_1[6] = pppppppuStack_128;
        param_1[7] = pppppppuStack_124;
        *param_1 = pppppppuVar23;
        param_1[1] = pppppppuVar9;
        return;
      }
      pppppppuVar15 = pppppppuVar14;
      if ((pppppppuVar9 != (uint *******)0x0) &&
         (uVar20 = (int)pppppppuVar9 * 0x11 + 0x14U & 0xfffffffc,
         (undefined1 *)((int)pppppppuVar9 + uVar20) != (undefined1 *)0xfffffffb)) {
        thunk_FUN_01be4678((int)pppppppuVar23 - uVar20);
      }
    }
LAB_01281260:
    uVar4 = FUN_0127dee8(pppppppuVar15,param_2);
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  if (local_48._1_1_ != '\x01') {
    local_138 = local_110;
    pppppppuStack_134 = local_10c;
    pppppppuStack_130 = local_108;
    pppppppuStack_12c = pppppppuStack_104;
    pppppppuStack_128 = local_100;
    pppppppuStack_124 = local_fc;
    pppppppuVar23 = local_118;
    pppppppuVar9 = local_114;
    goto LAB_012811e0;
  }
  local_120[2] = (uint ******)0x0;
  local_120[5] = (uint ******)((int)local_120[5] + 1);
  FUN_01968828(&local_a8,local_120 + 3);
  if (local_a8 == (uint *******)0x2) {
    local_44 = local_a4;
    goto LAB_012812a0;
  }
  FUN_0127df38(&local_48,local_a4,local_a0);
  pppppppuVar15 = local_120;
  if (((uint)local_48 & 1) != 0) goto LAB_012812a0;
  local_c2 = local_48._1_2_;
  local_c8 = (uint *******)*puVar8;
  local_c4 = *(undefined1 *)(puVar8 + 1);
  local_d8 = local_40;
  pppppppuStack_d4 = local_3c;
  local_d0 = local_38._0_1_;
  pppppppuVar9 = (uint *******)FUN_0167459c(local_120);
  if (pppppppuVar9 != (uint *******)0x0) goto LAB_012811ac;
  ppppppuVar16 = pppppppuVar15[5];
  if (pppppppuVar15[4] <= ppppppuVar16) {
LAB_01281194:
    local_48 = (uint *******)&DAT_00000005;
    pppppppuVar9 = (uint *******)FUN_012c6b30(pppppppuVar15,&local_48);
    goto LAB_012811a8;
  }
  while( true ) {
    uVar10 = (uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar16);
    if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) break;
    ppppppuVar16 = (uint ******)((int)ppppppuVar16 + 1);
    pppppppuVar15[5] = ppppppuVar16;
    if (pppppppuVar15[4] == ppppppuVar16) goto LAB_01281194;
  }
  if (uVar10 < 0x5b) {
    if (uVar10 == 0x22) {
      pppppppuVar15[2] = (uint ******)0x0;
      pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
      FUN_01968828(&local_58,pppppppuVar15 + 3,pppppppuVar15);
      pppppppuVar9 = local_54;
      if (local_58 == (uint *******)0x2) goto LAB_012811ac;
      if (((uint)local_58 & 1) == 0) {
        local_9c = (uint *******)&DAT_0000001d;
        local_a4 = (uint *******)&SUB_00000004;
        local_a0 = (uint *******)0x4046a8;
        local_40 = local_50;
        local_a8 = (uint *******)&DAT_0056df8c;
        local_44 = local_54;
        local_48 = (uint *******)CONCAT31(local_48._1_3_,5);
        local_c0 = (uint *******)FUN_01967538(&local_48,&local_a8,&DAT_01c25920);
      }
      else {
        local_9c = (uint *******)&DAT_0000001d;
        local_a4 = (uint *******)&SUB_00000004;
        local_a0 = (uint *******)0x4046a8;
        local_40 = local_50;
        local_a8 = (uint *******)&DAT_0056df8c;
        local_44 = local_54;
        local_48 = (uint *******)CONCAT31(local_48._1_3_,5);
        local_c0 = (uint *******)FUN_01967538(&local_48,&local_a8,&DAT_01c25920);
      }
      local_b8 = (uint *******)0x80000015;
    }
    else {
      if (uVar10 == 0x2d) {
        pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
        FUN_012c751c(&local_a8,pppppppuVar15,0);
        if (!(local_a8 == (uint *******)&DAT_00000003 && local_a4 == (uint *******)0x0)) {
          local_3c = (uint *******)&DAT_0000001d;
          local_44 = (uint *******)&SUB_00000004;
          local_40 = (uint *******)0x4046a8;
          local_48 = (uint *******)&DAT_0056df8c;
          FUN_012782bc(&local_c0,&local_a8,&local_48);
          goto LAB_01280dd8;
        }
LAB_012812d8:
        pppppppuVar9 = local_a0;
        goto LAB_012811ac;
      }
LAB_01280b78:
      if (9 < uVar10 - 0x30) {
        local_48 = (uint *******)&DAT_0000000a;
        pppppppuVar23 = (uint *******)FUN_012c6b30(pppppppuVar15,&local_48);
        goto LAB_0128144c;
      }
      FUN_012c751c(&local_a8,pppppppuVar15,1);
      if (local_a8 == (uint *******)&DAT_00000003 && local_a4 == (uint *******)0x0)
      goto LAB_012812d8;
      local_3c = (uint *******)&DAT_0000001d;
      local_44 = (uint *******)&SUB_00000004;
      local_40 = (uint *******)0x4046a8;
      local_48 = (uint *******)&DAT_0056df8c;
      FUN_012782bc(&local_c0,&local_a8,&local_48);
    }
LAB_01280dd8:
    pppppppuVar23 = local_c0;
    if (local_b8 != (uint *******)0x80000015) {
      bVar25 = ((uint)local_c0 & 1) == 0;
      local_58 = local_b4;
      local_54 = pppppppuStack_b0;
      local_50 = pppppppuStack_ac;
      if (bVar25) {
        local_a8 = local_b8;
        *puVar17 = local_b4;
        puVar17[1] = pppppppuStack_b0;
        puVar17[2] = pppppppuStack_ac;
        local_3c = (uint *******)&DAT_0000000e;
        local_40 = (uint *******)0x4046cb;
        local_44 = (uint *******)&DAT_00000006;
        local_48 = (uint *******)0x4046c5;
        pppppppuVar9 = (uint *******)FUN_0127f628(&local_a8,&local_48);
      }
      else {
        local_a8 = local_b8;
        *puVar17 = local_b4;
        puVar17[1] = pppppppuStack_b0;
        puVar17[2] = pppppppuStack_ac;
        local_3c = (uint *******)&SUB_00000004;
        local_40 = (uint *******)&DAT_0056c9ec;
        local_44 = (uint *******)&DAT_00000006;
        local_48 = (uint *******)0x4046c5;
        pppppppuVar9 = (uint *******)FUN_0127f628(&local_a8,&local_48);
      }
      if (pppppppuVar9 == (uint *******)0x0) {
        local_e6 = local_c8._0_1_;
        local_e8 = local_c2;
        local_e5 = CONCAT13(local_c4,local_c8._1_3_);
        local_f8 = local_d8;
        pppppppuStack_f4 = pppppppuStack_d4;
        local_f0 = local_d0;
        FUN_01bed4e2((uint)&local_e8 | 7,&local_f8,9);
        uVar10 = FUN_01a308e4(local_108,pppppppuStack_104,local_100,local_fc,&local_e8);
        if (local_110 == (uint *******)0x0) {
          FUN_012793d8(&local_118,&local_108);
        }
        pppppppuVar23 = local_114;
        pppppppuVar15 = local_118;
        bVar2 = false;
        local_184 = 0;
        uVar21 = uVar10;
        do {
          uVar21 = (uint)pppppppuVar23 & uVar21;
          uVar24 = *(uint *)((int)pppppppuVar15 + uVar21);
          uVar12 = uVar24 ^ (uVar10 >> 0x19) * 0x1010101;
          uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
          while (uVar12 != 0) {
            uVar13 = uVar21 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                             (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                     (uint)pppppppuVar23;
            iVar22 = thunk_FUN_01bed842(&local_e8,
                                        (undefined1 *)((int)pppppppuVar15 + uVar13 * -0x11 + -0x11),
                                        0x10);
            uVar12 = uVar12 - 1 & uVar12;
            if (iVar22 == 0) goto LAB_012810a0;
          }
          uVar12 = uVar24 & 0x80808080;
          if (bVar2) {
LAB_01281000:
            if ((uVar12 & uVar24 << 1) != 0) goto LAB_0128103c;
            bVar2 = true;
          }
          else {
            if (uVar12 != 0) {
              local_18c = uVar21 + ((uint)LZCOUNT((uVar24 & 0x80) << 0x18 |
                                                  (uVar12 >> 8 & 0xff) << 0x10 |
                                                  (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >>
                                   3) & (uint)pppppppuVar23;
              goto LAB_01281000;
            }
            bVar2 = false;
          }
          local_184 = local_184 + 4;
          uVar21 = local_184 + uVar21;
        } while( true );
      }
      goto LAB_012811ac;
    }
  }
  else {
    if (uVar10 < 0x6e) {
      if (uVar10 != 0x5b) {
        if (uVar10 != 0x66) goto LAB_01280b78;
        pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
        pppppppuVar9 = (uint *******)FUN_012c6b8c(pppppppuVar15,&DAT_0056efac,4);
        if (pppppppuVar9 == (uint *******)0x0) {
          local_9c = (uint *******)&DAT_0000001d;
          local_a4 = (uint *******)&SUB_00000004;
          local_a0 = (uint *******)0x4046a8;
          local_a8 = (uint *******)&DAT_0056df8c;
          local_48 = (uint *******)((uint)local_48 & 0xffff0000);
          pppppppuVar23 = (uint *******)FUN_01967538(&local_48,&local_a8,&DAT_01c25920);
          goto LAB_0128143c;
        }
        goto LAB_012811ac;
      }
      cVar19 = *(char *)(pppppppuVar15 + 7);
      *(char *)(pppppppuVar15 + 7) = cVar19 + -1;
      if ((char)(cVar19 + -1) == '\0') {
        local_48 = (uint *******)&DAT_00000018;
        pppppppuVar9 = (uint *******)FUN_012c6b30(pppppppuVar15,&local_48);
        goto LAB_012811a8;
      }
      pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
      local_64 = (uint *******)CONCAT31(local_64._1_3_,1);
      local_68 = pppppppuVar15;
      FUN_014db6fc(&local_48,&local_68);
      if ((char)local_48 == '\x01') {
LAB_01280a10:
        local_a8 = local_44;
LAB_01280c1c:
        local_a0 = (uint *******)0x80000015;
      }
      else {
        if (local_48._1_1_ != '\x01') {
          local_54 = (uint *******)&SUB_00000004;
          local_58 = (uint *******)&DAT_0056df8c;
          local_44 = (uint *******)&LAB_018a13b8;
          local_48 = (uint *******)&local_58;
          local_a8 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_48);
          goto LAB_01280c1c;
        }
        FUN_012789d8(&local_48,local_68);
        if ((char)local_48 == '\x01') goto LAB_01280a10;
        uVar3 = local_48._1_1_;
        FUN_0127fdcc(&local_58,local_68,(uint)local_64 & 0xff);
        if (local_58 == (uint *******)0x80000015) {
          local_a0 = (uint *******)0x80000015;
          local_a8 = local_54;
        }
        else {
          FUN_01bed4e2(uVar5,&local_58,0x10);
          local_a8 = (uint *******)CONCAT31(local_a8._1_3_,uVar3);
          FUN_01bed4e2(uVar20,&local_48,0x17);
        }
      }
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_30 = (uint *******)FUN_014d9568(pppppppuVar15);
      local_48 = local_a8;
      local_44 = local_a4;
      local_40 = local_a0;
      local_3c = local_9c;
      local_38 = pppppppuStack_98;
      pppppppuStack_34 = pppppppuStack_94;
      if (local_a0 == (uint *******)0x80000015) {
        local_b8 = (uint *******)0x80000015;
        local_c0 = local_a8;
        if (local_30 != (uint *******)0x0) {
          FUN_006c7e7c();
        }
      }
      else if (local_30 == (uint *******)0x0) {
LAB_01280dcc:
        local_c0 = local_a8;
        pppppppuStack_bc = local_a4;
        local_b8 = local_a0;
        local_b4 = local_9c;
        pppppppuStack_b0 = pppppppuStack_98;
        pppppppuStack_ac = pppppppuStack_94;
        local_48 = local_a8;
        local_44 = local_a4;
        local_40 = local_a0;
        local_3c = local_9c;
        local_38 = pppppppuStack_98;
        pppppppuStack_34 = pppppppuStack_94;
      }
      else {
        local_b8 = (uint *******)0x80000015;
        local_c0 = local_30;
        FUN_0127e77c(&local_40);
      }
      goto LAB_01280dd8;
    }
    if (uVar10 == 0x7b) {
      cVar19 = *(char *)(pppppppuVar15 + 7);
      *(char *)(pppppppuVar15 + 7) = cVar19 + -1;
      if ((char)(cVar19 + -1) == '\0') {
        local_48 = (uint *******)&DAT_00000018;
        pppppppuVar9 = (uint *******)FUN_012c6b30(pppppppuVar15,&local_48);
        goto LAB_012811a8;
      }
      iVar22 = 0;
      pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
      local_8c = 1;
      local_90 = pppppppuVar15;
      local_80 = 0;
      local_178 = 8;
      local_84 = 8;
      local_88 = 0;
      cVar19 = '\x02';
      while( true ) {
        while( true ) {
          FUN_01278868(&local_78,&local_90,&DAT_0056df8c);
          pppppppuVar23 = local_90;
          if (local_78 == (uint *******)0x80000015) break;
          if (local_78 == (uint *******)&DAT_80000016) {
            if (cVar19 != '\x02') {
              FUN_01bed4e2(uVar5,&local_88,0xc);
              local_a8 = (uint *******)CONCAT31(local_a8._1_3_,cVar19);
              FUN_01bed4e2(uVar20,&local_48,0x17);
              goto LAB_01280d2c;
            }
            local_54 = (uint *******)&SUB_00000004;
            local_58 = (uint *******)&DAT_0056df8c;
            local_44 = (uint *******)&LAB_018a13b8;
            local_48 = (uint *******)&local_58;
            local_a8 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_48);
            goto LAB_01280d18;
          }
          if (local_78 == (uint *******)0x80000017) {
            local_a8 = local_74;
            goto LAB_01280d18;
          }
          local_68 = local_78;
          uVar4 = puVar7[1];
          uVar18 = puVar7[2];
          *puVar6 = *puVar7;
          puVar6[1] = uVar4;
          puVar6[2] = uVar18;
          FUN_0127899c(&local_58,&local_90);
          if (local_58 == (uint *******)0x80000015) {
            local_a0 = (uint *******)0x80000015;
            local_a8 = local_54;
            FUN_0127f4b4(&local_68);
            goto LAB_01280d24;
          }
          local_38 = local_58;
          pppppppuStack_34 = local_54;
          local_30 = local_50;
          uStack_2c = uStack_4c;
          local_48 = local_68;
          local_44 = local_64;
          local_40 = pppppppuStack_60;
          local_3c = pppppppuStack_5c;
          if (iVar22 == local_88) {
            FUN_01ab8064(&local_88);
            local_178 = local_84;
          }
          puVar11 = (undefined4 *)(local_178 + iVar22 * 0x20);
          iVar22 = iVar22 + 1;
          *puVar11 = local_48;
          puVar11[1] = local_44;
          puVar11[2] = local_40;
          puVar11[3] = local_3c;
          puVar11[4] = local_38;
          puVar11[5] = pppppppuStack_34;
          puVar11[6] = local_30;
          puVar11[7] = uStack_2c;
          local_80 = iVar22;
        }
        if (cVar19 != '\x02') {
          local_54 = (uint *******)&SUB_00000004;
          local_58 = (uint *******)&DAT_0056df8c;
          local_44 = (uint *******)&LAB_018a13b8;
          local_48 = (uint *******)&local_58;
          local_a8 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_48);
          goto LAB_01280d18;
        }
        pppppppuVar9 = (uint *******)FUN_0167459c(local_90);
        if (pppppppuVar9 != (uint *******)0x0) break;
        FUN_012789d8(&local_48,pppppppuVar23);
        if ((char)local_48 != '\0') goto LAB_01280d14;
        cVar19 = local_48._1_1_;
      }
      local_44 = pppppppuVar9;
LAB_01280d14:
      local_a8 = local_44;
LAB_01280d18:
      local_a0 = (uint *******)0x80000015;
LAB_01280d24:
      FUN_01222378(&local_88);
LAB_01280d2c:
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_30 = (uint *******)FUN_012c7b64(pppppppuVar15);
      local_48 = local_a8;
      local_44 = local_a4;
      local_40 = local_a0;
      local_3c = local_9c;
      local_38 = pppppppuStack_98;
      pppppppuStack_34 = pppppppuStack_94;
      if (local_a0 == (uint *******)0x80000015) {
        local_b8 = (uint *******)0x80000015;
        local_c0 = local_a8;
        if (local_30 != (uint *******)0x0) {
          FUN_006c7e7c();
        }
      }
      else {
        if (local_30 == (uint *******)0x0) goto LAB_01280dcc;
        local_b8 = (uint *******)0x80000015;
        local_c0 = local_30;
        FUN_0127e77c(&local_40);
      }
      goto LAB_01280dd8;
    }
    if (uVar10 == 0x6e) {
      pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
      pppppppuVar9 = (uint *******)FUN_012c6b8c(pppppppuVar15,"ull",3);
      if (pppppppuVar9 != (uint *******)0x0) goto LAB_012811ac;
      local_9c = (uint *******)&DAT_0000001d;
      local_a4 = (uint *******)&SUB_00000004;
      local_a0 = (uint *******)0x4046a8;
      local_a8 = (uint *******)&DAT_0056df8c;
      local_48 = (uint *******)CONCAT31(local_48._1_3_,7);
      pppppppuVar23 = (uint *******)FUN_01967538(&local_48,&local_a8,&DAT_01c25920);
    }
    else {
      if (uVar10 != 0x74) goto LAB_01280b78;
      pppppppuVar15[5] = (uint ******)((int)ppppppuVar16 + 1);
      pppppppuVar9 = (uint *******)FUN_012c6b8c(pppppppuVar15,"rue",3);
      if (pppppppuVar9 != (uint *******)0x0) goto LAB_012811ac;
      local_9c = (uint *******)&DAT_0000001d;
      local_a4 = (uint *******)&SUB_00000004;
      local_a0 = (uint *******)0x4046a8;
      local_a8 = (uint *******)&DAT_0056df8c;
      local_48 = (uint *******)CONCAT22(local_48._2_2_,0x100);
      pppppppuVar23 = (uint *******)FUN_01967538(&local_48,&local_a8,&DAT_01c25920);
    }
LAB_0128143c:
    local_b8 = (uint *******)0x80000015;
    local_c0 = pppppppuVar23;
  }
LAB_0128144c:
  pppppppuVar9 = (uint *******)FUN_0127dee8(pppppppuVar23,pppppppuVar15);
LAB_012811a8:
  goto LAB_012811ac;
LAB_0128103c:
  uVar21 = (uint)*(char *)((int)pppppppuVar15 + local_18c);
  uVar13 = local_18c;
  if (-1 < (int)uVar21) {
    uVar21 = (uint)*pppppppuVar15 & 0x80808080;
    uVar13 = LZCOUNT(((uint)*pppppppuVar15 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                     (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18);
    uVar21 = (uint)*(byte *)((int)pppppppuVar15 + (uVar13 >> 3));
    uVar13 = uVar13 >> 3;
  }
  local_110 = (uint *******)((int)local_110 - (uVar21 & 1));
  bVar1 = (byte)(uVar10 >> 0x19);
  *(byte *)((int)pppppppuVar15 + uVar13) = bVar1;
  *(byte *)((int)pppppppuVar15 + ((uint)pppppppuVar23 & uVar13 - 4) + 4) = bVar1;
  local_10c = (uint *******)((int)local_10c + 1);
  FUN_01bed4e2((undefined1 *)((int)pppppppuVar15 + uVar13 * -0x11 + -0x11),&local_e8,0x10);
LAB_012810a0:
  *(bool *)((int)pppppppuVar15 + uVar13 * -0x11 + -1) = !bVar25;
  goto LAB_012806e8;
}

