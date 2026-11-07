// FUN_00683b28 @ 00683b28 size=8480 calls_out=43 calls_in=2
// strings: /metrics-bin | _count | _bucket | _bucket | _count | application/vnd.google.protobuf; proto=io.prometheus.client.MetricFamily; encoding=delimited

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00683b28(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *****pppppuVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *****pppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 *****pppppuVar10;
  int iVar11;
  uint uVar12;
  undefined4 ***pppuVar13;
  undefined4 ****ppppuVar14;
  undefined4 ***pppuVar15;
  uint uVar16;
  undefined4 *****pppppuVar17;
  undefined1 *puVar18;
  undefined4 ****ppppuVar19;
  undefined4 ****ppppuVar20;
  undefined4 ****ppppuVar21;
  undefined4 ****ppppuVar22;
  undefined4 ****ppppuVar23;
  undefined4 ****ppppuVar24;
  undefined4 *****pppppuVar25;
  undefined4 *****pppppuVar26;
  undefined4 *puVar27;
  undefined4 ****ppppuVar28;
  undefined4 *****pppppuVar29;
  undefined4 *****pppppuVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint local_2b0;
  undefined4 *****local_2a4;
  undefined4 *****local_2a0;
  undefined4 *****local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 auStack_28e [62];
  undefined4 *****local_250;
  undefined4 *****local_24c;
  undefined4 *****local_248;
  undefined4 *****local_244;
  undefined1 auStack_240 [88];
  int local_1e8;
  undefined4 *****local_1e4;
  int local_1e0;
  undefined1 *local_1dc;
  undefined4 *****local_1d8;
  undefined4 *****local_1d4;
  char local_1cd;
  undefined4 ****local_1cc;
  undefined4 *****local_1c8;
  undefined4 *****local_1c4;
  undefined4 *****local_1c0;
  undefined4 *****local_1bc [19];
  undefined4 *****local_170;
  undefined4 *****local_16c;
  undefined4 *****local_168;
  undefined4 uStack_164;
  int local_15c;
  undefined4 *****local_158;
  undefined4 *****local_154;
  undefined4 *****local_150;
  undefined4 *****local_14c;
  undefined4 *****local_148;
  undefined4 *****pppppuStack_144;
  undefined4 *****local_140;
  undefined4 *****pppppuStack_13c;
  undefined4 *****local_138;
  undefined4 uStack_134;
  undefined4 *****local_130;
  undefined4 *****local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 *****local_120;
  undefined4 *****local_11c;
  undefined4 local_118;
  undefined4 *local_114;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d4;
  undefined4 local_d0;
  undefined4 *****local_c8;
  undefined4 *****local_c4;
  undefined4 *****local_c0;
  undefined4 *****local_bc;
  undefined4 *****pppppuStack_b8;
  undefined4 *****pppppuStack_b4;
  undefined4 *****local_b0;
  undefined4 uStack_ac;
  undefined4 *****pppppuStack_a8;
  undefined4 *****pppppuStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *****local_98;
  undefined4 *****local_94;
  undefined4 local_90;
  undefined4 *****local_8c;
  undefined *local_88;
  undefined4 *****local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  if (*(char *)(param_2 + 0xb0) != '\0') {
    if (*(char *)(param_2 + 0xb0) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185887c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185887c);
  }
  uVar12 = *(uint *)(param_2 + 0x60);
  cVar2 = '\0';
  if (uVar12 == 0) {
    cVar2 = *(char *)(param_2 + 0x40);
  }
  if (uVar12 == 0 && cVar2 == '\0') {
LAB_00683d3c:
    local_94 = (undefined4 *****)0x0;
    local_98 = (undefined4 *****)0x0;
    local_58 = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 2;
    local_68 = 4;
    local_74 = 4;
    local_54 = 0x20194;
    local_114 = &DAT_0157d360;
    local_118 = (undefined4 *****)&DAT_01858874;
    local_11c = (undefined4 *****)&DAT_0157d360;
    local_120 = (undefined4 *****)&DAT_0185886c;
    FUN_00600d2c(&local_c8,&DAT_0058a391,&local_120);
    local_150 = local_c8;
    local_14c = local_c4;
    local_148 = local_c0;
    FUN_00f5ef18(&local_1c8,&local_150);
    if (local_1c0 == (undefined4 *****)0x0) {
      pppppuVar17 = (undefined4 *****)0x0;
      (*(code *)local_1c8[4])(local_1bc,local_1c4,0);
    }
    else {
      local_170 = local_1c4;
      local_16c = local_1c0;
      local_168 = local_1bc[0];
      pppppuVar17 = local_1c8;
    }
    FUN_016dd1aa(auStack_28e,(int)&local_90 + 2,0x3e);
    local_24c = local_170;
    local_248 = local_16c;
    local_294 = 0;
    local_298 = 0;
    local_244 = local_168;
    local_250 = pppppuVar17;
    goto LAB_00683e64;
  }
  iVar3 = *(int *)(param_2 + 0x5c);
  uVar16 = (uint)*(ushort *)(param_2 + 0x68);
  if (uVar16 != 0xffff) {
    if (uVar16 == 0) {
      if (iVar3 == 0) goto LAB_00684050;
      goto LAB_00683d3c;
    }
    if (uVar16 < uVar12) {
      if (*(char *)(iVar3 + uVar16) < -0x40) {
LAB_00684050:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar3,uVar12,0,uVar16,&DAT_01884334);
      }
      uVar12 = uVar16;
    }
    else if ((iVar3 == 0) || (uVar12 != uVar16)) goto LAB_00684050;
  }
  uVar16 = uVar12;
  if (uVar12 < 2) {
    uVar16 = 1;
  }
  if (uVar12 == 8) {
    iVar3 = thunk_FUN_016dd50a(iVar3,&DAT_00569ed8,uVar16);
    if (iVar3 != 0) goto LAB_00683d3c;
    iVar3 = *(int *)(param_2 + 0xa8);
    ppppuVar21 = (undefined4 ****)(iVar3 + 8);
    do {
      if (*ppppuVar21 != (undefined4 ***)0x0) {
        ClearExclusiveLocal();
        FUN_015bf680(ppppuVar21);
        goto LAB_00683f3c;
      }
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x1;
    DataMemoryBarrier(0xb);
LAB_00683f3c:
    local_2b0 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar3 + 0xc);
    }
    else {
      local_2b0 = FUN_015bf3f8();
      local_2b0 = local_2b0 ^ 1;
      cVar2 = *(char *)(iVar3 + 0xc);
    }
    if (cVar2 != '\0') {
      local_94._1_3_ = (undefined3)((uint)local_94 >> 8);
      local_94 = (undefined4 *****)CONCAT31(local_94._1_3_,(char)local_2b0);
      local_98 = (undefined4 *****)ppppuVar21;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0033fb8a,0x21,&local_98,&DAT_01859114,&DAT_018597a4);
    }
    pppppuVar17 = *(undefined4 ******)(iVar3 + 0x18);
    if (pppppuVar17 == (undefined4 *****)&DAT_3b9aca00) {
LAB_00684298:
      FUN_015f3b0c(&local_98,1);
      pppppuVar26 = local_90;
      pppppuVar25 = local_94;
      pppppuVar17 = local_98;
      FUN_012c8c54(&local_1c8,param_2 + 0xac);
      local_c8 = (undefined4 *****)&DAT_018d9174;
      DataMemoryBarrier(0xb);
      if (DAT_018d9178 != 0) {
        local_120 = &local_c8;
        local_98 = &local_120;
        FUN_015eedc4(&DAT_018d9178,0,&local_98,&DAT_0188d340,&DAT_018a9fb0);
      }
      FUN_012c8c54(&local_120,&DAT_018d9174);
      pppppuVar10 = local_118;
      pppppuVar9 = local_11c;
      pppppuVar30 = local_120;
      local_8c = local_11c + (int)local_118 * 0xf;
      local_90 = local_120;
      local_98 = local_11c;
      local_94 = local_11c;
      if ((undefined4 *****)((int)local_1c8 - (int)local_1c0) < local_118) {
        FUN_011096d4(&local_1c8,local_1c0,local_118,4,0x3c);
      }
      pppppuVar8 = local_1c0;
      FUN_016dd1aa(local_1c4 + (int)local_1c0 * 0xf,pppppuVar9,(int)pppppuVar10 * 0x3c);
      local_1c0 = (undefined4 *****)((int)pppppuVar8 + (int)pppppuVar10);
      local_8c = pppppuVar9;
      if (pppppuVar30 != (undefined4 *****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar9);
      }
      local_c8 = local_1c8;
      local_c4 = local_1c4;
      local_c0 = local_1c0;
      FUN_01107964(&local_1e8,&local_c8);
      local_1d4 = (undefined4 *****)0x0;
      local_1d8 = (undefined4 *****)&DAT_00000001;
      local_1dc = (undefined1 *)0x0;
      if (local_1e0 != 0) {
        dVar34 = 0.0;
        pppppuVar9 = local_1e4 + local_1e0 * 0xf;
        pppppuVar30 = local_1e4;
        do {
          ppppuVar14 = pppppuVar30[0xb];
          local_c8 = pppppuVar30;
          if (pppppuVar30[10] < ppppuVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,ppppuVar14,pppppuVar30[10],&DAT_0188f948);
          }
          if (ppppuVar14 == (undefined4 ****)0x0) {
            local_1c8 = &local_c8;
            local_1c4 = (undefined4 *****)&LAB_012972ac;
            FUN_00600d2c(&local_94,&DAT_00590c51,&local_1c8);
LAB_00685534:
            pppppuVar30 = (undefined4 *****)&SUB_00000002;
            local_29c = local_90;
            local_2a0 = local_8c;
            pppppuVar9 = local_94;
            goto LAB_0068554c;
          }
          if ((*(char *)(pppppuVar30 + 3) != '\x01') ||
             (ppppuVar14 = pppppuVar30[2], ppppuVar14 == (undefined4 ****)0x0)) {
            local_1c8 = &local_c8;
            local_1c4 = (undefined4 *****)&LAB_012972ac;
            FUN_00600d2c(&local_94,&DAT_00586bf2,&local_1c8);
            goto LAB_00685534;
          }
          ppppuVar24 = pppppuVar30[1];
          if ((*(char *)(pppppuVar30 + 7) == '\x01') &&
             (ppppuVar19 = pppppuVar30[6], ppppuVar19 != (undefined4 ****)0x0)) {
            ppppuVar28 = pppppuVar30[5];
            if ((uint)((int)local_1dc - (int)local_1d4) < 7) {
              FUN_011096d4(&local_1dc,local_1d4,7,1,1);
            }
            puVar18 = (undefined1 *)((int)local_1d4 + 7);
            *(undefined4 *)((int)local_1d8 + (int)local_1d4) = 0x45482023;
            *(undefined4 *)((int)local_1d8 + (int)local_1d4 + 3) = 0x20504c45;
            local_1d4 = (undefined4 *****)puVar18;
            if (local_1dc + -(int)puVar18 < ppppuVar14) {
              FUN_011096d4(&local_1dc,puVar18,ppppuVar14,1,1);
            }
            pppppuVar10 = local_1d4;
            FUN_016dd1aa((undefined1 *)((int)local_1d8 + (int)local_1d4),ppppuVar24,ppppuVar14);
            local_1d4 = (undefined4 *****)((int)pppppuVar10 + (int)ppppuVar14);
            if ((undefined4 *****)local_1dc == local_1d4) {
              FUN_011096d4(&local_1dc,local_1d4,1,1,1);
            }
            *(undefined1 *)((int)local_1d8 + (int)local_1d4) = 0x20;
            local_1d4 = (undefined4 *****)((int)local_1d4 + 1);
            FUN_012cb96c(&local_98,ppppuVar28,ppppuVar19,0);
            pppppuVar8 = local_90;
            pppppuVar10 = local_94;
            if (local_1dc + -(int)local_1d4 < local_90) {
              FUN_011096d4(&local_1dc,local_1d4,local_90,1,1);
            }
            pppppuVar5 = local_1d4;
            FUN_016dd1aa((undefined1 *)((int)local_1d8 + (int)local_1d4),pppppuVar10,pppppuVar8);
            local_1d4 = (undefined4 *****)((int)pppppuVar5 + (int)pppppuVar8);
            if (((uint)local_98 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(pppppuVar10);
            }
            if ((undefined4 *****)local_1dc == local_1d4) {
              FUN_011096d4(&local_1dc,local_1d4,1,1,1);
            }
            *(undefined1 *)((int)local_1d8 + (int)local_1d4) = 10;
            local_1d4 = (undefined4 *****)((int)local_1d4 + 1);
          }
          local_1cd = '\0';
          if (*(char *)(pppppuVar30 + 0xe) != '\x05') {
            local_1cd = *(char *)(pppppuVar30 + 0xe);
          }
          local_1c4 = (undefined4 *****)FUN_012cb930;
          local_1c8 = (undefined4 *****)&local_1cd;
          FUN_00600d2c(&local_98,&DAT_00590e71,&local_1c8);
          pppppuVar8 = local_94;
          pppppuVar10 = local_98;
          FUN_0060107c(&local_15c,local_94,local_90);
          if (pppppuVar10 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar8);
          }
          if ((uint)((int)local_1dc - (int)local_1d4) < 7) {
            FUN_011096d4(&local_1dc,local_1d4,7,1,1);
          }
          puVar18 = (undefined1 *)((int)local_1d4 + 7);
          *(undefined4 *)((int)local_1d8 + (int)local_1d4) = 0x59542023;
          *(undefined4 *)((int)local_1d8 + (int)local_1d4 + 3) = 0x20455059;
          local_1d4 = (undefined4 *****)puVar18;
          if (local_1dc + -(int)puVar18 < ppppuVar14) {
            FUN_011096d4(&local_1dc,puVar18,ppppuVar14,1,1);
          }
          pppppuVar10 = local_1d4;
          FUN_016dd1aa((undefined1 *)((int)local_1d8 + (int)local_1d4),ppppuVar24,ppppuVar14);
          local_1d4 = (undefined4 *****)((int)pppppuVar10 + (int)ppppuVar14);
          if ((undefined4 *****)local_1dc == local_1d4) {
            FUN_011096d4(&local_1dc,local_1d4,1,1,1);
          }
          pppppuVar8 = local_154;
          pppppuVar10 = local_158;
          puVar18 = (undefined1 *)((int)local_1d4 + 1);
          *(undefined1 *)((int)local_1d8 + (int)local_1d4) = 0x20;
          local_1d4 = (undefined4 *****)puVar18;
          if (local_1dc + -(int)puVar18 < local_154) {
            FUN_011096d4(&local_1dc,puVar18,local_154,1,1);
          }
          pppppuVar5 = local_1d4;
          FUN_016dd1aa((undefined1 *)((int)local_1d8 + (int)local_1d4),pppppuVar10,pppppuVar8);
          local_1d4 = (undefined4 *****)((int)pppppuVar5 + (int)pppppuVar8);
          if ((undefined4 *****)local_1dc == local_1d4) {
            FUN_011096d4(&local_1dc,local_1d4,1,1,1);
          }
          *(undefined1 *)((int)local_1d8 + (int)local_1d4) = 10;
          local_1d4 = (undefined4 *****)((int)local_1d4 + 1);
          ppppuVar19 = pppppuVar30[0xb];
          if (pppppuVar30[10] < ppppuVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,ppppuVar19,pppppuVar30[10],&DAT_0188f948);
          }
          if (ppppuVar19 != (undefined4 ****)0x0) {
            ppppuVar22 = pppppuVar30[9];
            ppppuVar28 = ppppuVar22;
            do {
              ppppuVar23 = ppppuVar28 + 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(local_1cd) {
              case '\0':
                local_98 = (undefined4 *****)0x0;
                if (*(char *)(ppppuVar28 + 0xb) == '\0') {
                  local_1cc = (undefined4 ****)&DAT_018d915c;
                  DataMemoryBarrier(0xb);
                  if (DAT_018d915c != 0) {
                    local_170 = &local_1cc;
                    local_c8 = &local_170;
                    FUN_015eedc4(&DAT_018d915c,0,&local_c8,&DAT_0188bcfc,&DAT_0188bca0);
                  }
                  pppuVar13 = local_1cc[1];
                }
                else {
                  pppuVar13 = ppppuVar28[10];
                  if (pppuVar13 == (undefined4 ***)0x0) {
LAB_00685ab4:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_01890768);
                  }
                }
                dVar33 = dVar34;
                if (((uint)*pppuVar13 & 1) != 0) {
                  dVar33 = *(double *)(pppuVar13 + 2);
                }
                FUN_012cc44c(SUB84(dVar33,0),&local_1c8,&local_1dc,ppppuVar24,ppppuVar14,0);
                break;
              case '\x01':
                local_98 = (undefined4 *****)0x0;
                if (*(char *)(ppppuVar28 + 9) == '\0') {
                  local_1cc = (undefined4 ****)&DAT_018d9154;
                  DataMemoryBarrier(0xb);
                  if (DAT_018d9154 != 0) {
                    local_170 = &local_1cc;
                    local_c8 = &local_170;
                    FUN_015eedc4(&DAT_018d9154,0,&local_c8,&DAT_0188bd9c,&DAT_0188bca0);
                  }
                  pppuVar13 = local_1cc[1];
                }
                else {
                  pppuVar13 = ppppuVar28[8];
                  if (pppuVar13 == (undefined4 ***)0x0) goto LAB_00685ab4;
                }
                dVar33 = dVar34;
                if (((uint)*pppuVar13 & 1) != 0) {
                  dVar33 = *(double *)(pppuVar13 + 2);
                }
                FUN_012cc44c(SUB84(dVar33,0),&local_1c8,&local_1dc,ppppuVar24,ppppuVar14,0);
                break;
              case '\x02':
                if (*(char *)(ppppuVar28 + 0xd) == '\0') {
                  local_c8 = (undefined4 *****)&DAT_018d9164;
                  DataMemoryBarrier(0xb);
                  if (DAT_018d9164 != 0) {
                    local_1c8 = &local_c8;
                    local_98 = &local_1c8;
                    FUN_015eedc4(&DAT_018d9164,0,&local_98,&DAT_0188bd4c,&DAT_0188bca0);
                  }
                  ppppuVar20 = local_c8[1];
                }
                else {
                  ppppuVar20 = (undefined4 ****)ppppuVar28[0xc];
                  if (ppppuVar20 == (undefined4 ****)0x0) goto LAB_00685ab4;
                }
                pppuVar15 = ppppuVar20[10];
                pppuVar13 = ppppuVar20[0xb];
                if (pppuVar15 < pppuVar13) {
LAB_006859b0:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(0,pppuVar13,pppuVar15,&DAT_0188f948);
                }
                if (pppuVar13 != (undefined4 ***)0x0) {
                  pppuVar15 = ppppuVar20[9];
                  pppuVar13 = pppuVar15 + (int)pppuVar13 * 10;
                  do {
                    dVar33 = dVar34;
                    if (((uint)*pppuVar15 & 1) != 0) {
                      dVar33 = *(double *)(pppuVar15 + 2);
                    }
                    local_16c = (undefined4 *****)&DAT_00000001;
                    local_168 = (undefined4 *****)0x0;
                    local_170 = (undefined4 *****)0x0;
                    local_8c = (undefined4 *****)0x0;
                    local_90 = (undefined4 *****)&DAT_60000020;
                    local_94 = (undefined4 *****)&DAT_0188d3d4;
                    local_98 = &local_170;
                    iVar11 = FUN_00fb1850(SUB84(dVar33,0),&local_98,0,0);
                    pppppuVar8 = local_16c;
                    pppppuVar10 = local_170;
                    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,
                                   &local_1cc,&DAT_0188d3ec,&DAT_018af130);
                    }
                    local_1bc[0] = local_168;
                    local_1c0 = local_16c;
                    local_1c4 = (undefined4 *****)&DAT_00000008;
                    local_1c8 = (undefined4 *****)&DAT_0056aa48;
                    dVar33 = dVar34;
                    if (((uint)pppuVar15[4] & 1) != 0) {
                      dVar33 = *(double *)(pppuVar15 + 6);
                    }
                    FUN_012cc44c(SUB84(dVar33,0),&local_c8,&local_1dc,ppppuVar24,ppppuVar14,0);
                    if (local_c8 != (undefined4 *****)&DAT_00000005) goto LAB_00684fd8;
                    if (pppppuVar10 != (undefined4 *****)0x0) {
                      thunk_FUN_016d3fb4(pppppuVar8);
                    }
                    pppuVar15 = pppuVar15 + 10;
                  } while (pppuVar15 != pppuVar13);
                }
                local_120 = (undefined4 *****)0x0;
                dVar33 = dVar34;
                if (((uint)ppppuVar20[4] & 1) != 0) {
                  dVar33 = *(double *)(ppppuVar20 + 6);
                }
                FUN_012cc44c(SUB84(dVar33,0),&local_98,&local_1dc,ppppuVar24,ppppuVar14,
                             &DAT_00569680,4,ppppuVar28,&local_120);
                if (local_98 != (undefined4 *****)&DAT_00000005) {
LAB_006854b4:
                  local_29c = local_90;
                  local_2a0 = local_8c;
                  pppppuVar9 = local_94;
                  pppppuVar30 = local_98;
                  goto LAB_00684ff4;
                }
                dVar33 = dVar34;
                if (((uint)*ppppuVar20 & 1) != 0) {
                  uVar12 = FUN_01845f30(ppppuVar20[2],ppppuVar20[3]);
                  dVar33 = (double)(ulonglong)uVar12;
                }
                FUN_012cc44c(SUB84(dVar33,0),&local_98,&local_1dc,ppppuVar24,ppppuVar14,"_count",6,
                             ppppuVar28,&local_120);
LAB_00684d10:
                if (local_98 != (undefined4 *****)&DAT_00000005) goto LAB_006854b4;
                goto LAB_006846e4;
              case '\x03':
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("not implemented",0xf,&DAT_0188d3a4);
              case '\x04':
                if (*(char *)(ppppuVar28 + 0x11) == '\0') {
                  local_c8 = (undefined4 *****)&DAT_018d916c;
                  DataMemoryBarrier(0xb);
                  if (DAT_018d916c != 0) {
                    local_1c8 = &local_c8;
                    local_98 = &local_1c8;
                    FUN_015eedc4(&DAT_018d916c,0,&local_98,&DAT_0188bcc0,&DAT_0188bca0);
                  }
                  ppppuVar20 = local_c8[1];
                }
                else {
                  ppppuVar20 = (undefined4 ****)ppppuVar28[0x10];
                  if (ppppuVar20 == (undefined4 ****)0x0) goto LAB_00685ab4;
                }
                pppuVar15 = ppppuVar20[10];
                pppuVar13 = ppppuVar20[0xb];
                if (pppuVar15 < pppuVar13) goto LAB_006859b0;
                if (pppuVar13 != (undefined4 ***)0x0) {
                  pppuVar15 = ppppuVar20[9];
                  bVar31 = false;
                  iVar11 = (int)pppuVar13 * 0x28;
                  do {
                    dVar33 = dVar34;
                    if (((uint)pppuVar15[4] & 1) != 0) {
                      dVar33 = *(double *)(pppuVar15 + 6);
                    }
                    local_16c = (undefined4 *****)&DAT_00000001;
                    local_168 = (undefined4 *****)0x0;
                    local_170 = (undefined4 *****)0x0;
                    local_8c = (undefined4 *****)0x0;
                    local_90 = (undefined4 *****)&DAT_60000020;
                    local_94 = (undefined4 *****)&DAT_0188d3d4;
                    local_98 = &local_170;
                    iVar7 = FUN_00fb1850(SUB84(dVar33,0),&local_98,0,0);
                    pppppuVar8 = local_16c;
                    pppppuVar10 = local_170;
                    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,
                                   &local_1cc,&DAT_0188d3ec,&DAT_018af130);
                    }
                    local_1bc[0] = local_168;
                    local_1c0 = local_16c;
                    local_1c4 = (undefined4 *****)&SUB_00000002;
                    local_1c8 = (undefined4 *****)&DAT_003e924f;
                    dVar32 = dVar34;
                    if (((uint)*pppuVar15 & 1) != 0) {
                      uVar12 = FUN_01845f30(pppuVar15[2],pppuVar15[3]);
                      dVar32 = (double)(ulonglong)uVar12;
                    }
                    FUN_012cc44c(SUB84(dVar32,0),&local_c8,&local_1dc,ppppuVar24,ppppuVar14,
                                 "_bucket",7,ppppuVar28,&local_1c8);
                    if (local_c8 != (undefined4 *****)&DAT_00000005) goto LAB_00684fd8;
                    if (pppppuVar10 != (undefined4 *****)0x0) {
                      thunk_FUN_016d3fb4(pppppuVar8);
                    }
                    pppuVar15 = pppuVar15 + 10;
                    bVar31 = (bool)((dVar33 == INFINITY &&
                                    (uint)((ulonglong)dVar33 >> 0x20) < 0x80000000) | bVar31);
                    iVar11 = iVar11 + -0x28;
                  } while (iVar11 != 0);
                  if (!bVar31) goto LAB_00684bf0;
LAB_00684c70:
                  local_150 = (undefined4 *****)0x0;
                  dVar33 = dVar34;
                  if (((uint)ppppuVar20[4] & 1) != 0) {
                    dVar33 = *(double *)(ppppuVar20 + 6);
                  }
                  FUN_012cc44c(SUB84(dVar33,0),&local_98,&local_1dc,ppppuVar24,ppppuVar14,
                               &DAT_00569680,4,ppppuVar28,&local_150);
                  if (local_98 == (undefined4 *****)&DAT_00000005) {
                    dVar33 = dVar34;
                    if (((uint)*ppppuVar20 & 1) != 0) {
                      uVar12 = FUN_01845f30(ppppuVar20[2],ppppuVar20[3]);
                      dVar33 = (double)(ulonglong)uVar12;
                    }
                    FUN_012cc44c(SUB84(dVar33,0),&local_98,&local_1dc,ppppuVar24,ppppuVar14,"_count"
                                 ,6,ppppuVar28,&local_150);
                    goto LAB_00684d10;
                  }
                  goto LAB_006854b4;
                }
LAB_00684bf0:
                local_8c = (undefined4 *****)&DAT_00000004;
                local_90 = (undefined4 *****)&DAT_00567c58;
                local_94 = (undefined4 *****)&SUB_00000002;
                local_98 = (undefined4 *****)&DAT_003e924f;
                dVar33 = dVar34;
                if (((uint)*ppppuVar20 & 1) != 0) {
                  uVar12 = FUN_01845f30(ppppuVar20[2],ppppuVar20[3]);
                  dVar33 = (double)(ulonglong)uVar12;
                }
                FUN_012cc44c(SUB84(dVar33,0),&local_1c8,&local_1dc,ppppuVar24,ppppuVar14,"_bucket",7
                             ,ppppuVar28,&local_98);
                if (local_1c8 == (undefined4 *****)&DAT_00000005) goto LAB_00684c70;
                goto LAB_006854cc;
              }
              if (local_1c8 != (undefined4 *****)&DAT_00000005) {
LAB_006854cc:
                local_29c = local_1c0;
                local_2a0 = local_1bc[0];
                pppppuVar9 = local_1c4;
                pppppuVar30 = local_1c8;
                goto LAB_00684ff4;
              }
LAB_006846e4:
              ppppuVar28 = ppppuVar23;
            } while (ppppuVar23 != ppppuVar22 + (int)ppppuVar19 * 0x14);
          }
          if (local_15c != 0) {
            thunk_FUN_016d3fb4(local_158);
          }
          pppppuVar30 = pppppuVar30 + 0xf;
        } while (pppppuVar30 != pppppuVar9);
      }
      pppppuVar9 = local_1d4;
      pppppuVar30 = local_1d8;
      puVar18 = local_1dc;
      local_29c = (undefined4 *****)&DAT_00000019;
      local_2a0 = (undefined4 *****)thunk_FUN_016d4a50();
      if (local_2a0 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x19);
      }
      FUN_016dd1aa(local_2a0,"text/plain; version=0.0.4",0x19);
      goto LAB_0068559c;
    }
    pppppuVar26 = *(undefined4 ******)(iVar3 + 0x10);
    pppppuVar25 = *(undefined4 ******)(iVar3 + 0x14);
    FUN_015f3b0c(&local_98,1);
    local_1c8 = local_98;
    local_1c4 = local_94;
    local_1c0 = local_90;
    local_120 = pppppuVar26;
    local_11c = pppppuVar25;
    local_118 = pppppuVar17;
    FUN_015f3c24(&local_98,&local_1c8,&local_120);
    bVar31 = ((uint)local_98 & 1) == 0;
    puVar1 = local_88;
    if (bVar31) {
      puVar1 = (undefined *)
               (uint)(local_90 == (undefined4 *****)0x0 && local_8c == (undefined4 *****)0x0);
    }
    if (bVar31 && ((uint)puVar1 & (uint)(local_88 < (undefined *)0x35a4e900)) == 0)
    goto LAB_00684298;
    FUN_006feadc(&local_298);
    if (((local_2b0 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar13 = *ppppuVar21;
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x0;
    goto LAB_00685930;
  }
  if ((uVar12 != 0xc) || (iVar3 = thunk_FUN_016dd50a(iVar3,"/metrics-bin",uVar16), iVar3 != 0))
  goto LAB_00683d3c;
  iVar3 = *(int *)(param_2 + 0xa8);
  ppppuVar21 = (undefined4 ****)(iVar3 + 0x40);
  do {
    if (*ppppuVar21 != (undefined4 ***)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppppuVar21);
      goto LAB_00683c1c;
    }
    bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
  } while (!bVar31);
  *ppppuVar21 = (undefined4 ***)0x1;
  DataMemoryBarrier(0xb);
LAB_00683c1c:
  local_29c = (undefined4 *****)0x0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar3 + 0x44);
  }
  else {
    uVar12 = FUN_015bf3f8();
    local_29c = (undefined4 *****)(uVar12 ^ 1);
    cVar2 = *(char *)(iVar3 + 0x44);
  }
  if (cVar2 != '\0') {
    local_94._1_3_ = (undefined3)((uint)local_94 >> 8);
    local_94 = (undefined4 *****)CONCAT31(local_94._1_3_,(char)local_29c);
    local_98 = (undefined4 *****)ppppuVar21;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033fb8a,0x21,&local_98,&DAT_01859114,&DAT_018597a4);
  }
  pppppuVar17 = *(undefined4 ******)(iVar3 + 0x50);
  puVar27 = (undefined4 *)(iVar3 + 0x48);
  if (pppppuVar17 == (undefined4 *****)&DAT_3b9aca00) {
LAB_00684068:
    FUN_015f3b0c(&local_98,1);
    pppppuVar26 = local_90;
    pppppuVar25 = local_94;
    pppppuVar17 = local_98;
    FUN_012c8c54(&local_1c8,param_2 + 0xac);
    local_c8 = (undefined4 *****)&DAT_018d9174;
    DataMemoryBarrier(0xb);
    if (DAT_018d9178 != 0) {
      local_120 = &local_c8;
      local_98 = &local_120;
      FUN_015eedc4(&DAT_018d9178,0,&local_98,&DAT_0188d340,&DAT_018a9fb0);
    }
    FUN_012c8c54(&local_120,&DAT_018d9174);
    pppppuVar10 = local_118;
    pppppuVar9 = local_11c;
    pppppuVar30 = local_120;
    local_8c = local_11c + (int)local_118 * 0xf;
    local_90 = local_120;
    local_98 = local_11c;
    local_94 = local_11c;
    if ((undefined4 *****)((int)local_1c8 - (int)local_1c0) < local_118) {
      FUN_011096d4(&local_1c8,local_1c0,local_118,4,0x3c);
    }
    pppppuVar8 = local_1c0;
    FUN_016dd1aa(local_1c4 + (int)local_1c0 * 0xf,pppppuVar9,(int)pppppuVar10 * 0x3c);
    local_1c0 = (undefined4 *****)((int)pppppuVar8 + (int)pppppuVar10);
    local_8c = pppppuVar9;
    if (pppppuVar30 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar9);
    }
    local_c8 = local_1c8;
    local_c4 = local_1c4;
    local_c0 = local_1c0;
    FUN_01107964(&local_150,&local_c8);
    pppppuVar9 = local_148;
    pppppuVar30 = local_14c;
    local_1c0 = (undefined4 *****)0x0;
    local_1c4 = (undefined4 *****)&DAT_00000001;
    local_1c8 = (undefined4 *****)0x0;
    if (local_148 != (undefined4 *****)0x0) {
      pppppuVar8 = local_14c + (int)local_148 * 0xf;
      pppppuVar10 = local_14c;
      do {
        ppppuVar14 = pppppuVar10[0xb];
        local_c8 = pppppuVar10;
        if (pppppuVar10[10] < ppppuVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,ppppuVar14,pppppuVar10[10],&DAT_0188f948);
        }
        if (ppppuVar14 == (undefined4 ****)0x0) {
          local_120 = &local_c8;
          local_11c = (undefined4 *****)&LAB_012972ac;
          FUN_00600d2c(&local_94,&DAT_00590c51,&local_120);
LAB_00685094:
          pppppuVar5 = (undefined4 *****)&SUB_00000002;
          local_2a4 = local_90;
          pppppuVar10 = local_94;
          pppppuVar8 = local_8c;
LAB_006850a8:
          pppppuVar29 = (undefined4 *****)&DAT_80000000;
          if (local_1c8 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(local_1c4);
          }
          goto LAB_006850c0;
        }
        if ((*(char *)(pppppuVar10 + 3) != '\x01') || (pppppuVar10[2] == (undefined4 ****)0x0)) {
          local_120 = &local_c8;
          local_11c = (undefined4 *****)&LAB_012972ac;
          FUN_00600d2c(&local_94,&DAT_00586bf2,&local_120);
          goto LAB_00685094;
        }
        pppppuVar5 = (undefined4 *****)thunk_FUN_016d4a50(0x2000);
        if (pppppuVar5 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x2000);
        }
        local_8c = &local_1c8;
        local_7c = 0;
        local_80 = 0x2000;
        local_90 = (undefined4 *****)0x0;
        local_98 = (undefined4 *****)0x2000;
        local_88 = &DAT_01886b64;
        local_94 = pppppuVar5;
        local_84 = pppppuVar5;
        uVar6 = FUN_012980c0(pppppuVar10);
        FUN_01328ef8(&local_120,&local_98,uVar6);
        if ((local_120 != (undefined4 *****)&DAT_00000004) ||
           (FUN_01297d60(&local_120,pppppuVar10,&local_98),
           local_120 != (undefined4 *****)&DAT_00000004)) {
          local_2a4 = local_11c;
          pppppuVar10 = local_120;
          pppppuVar8 = local_118;
joined_r0x00685054:
          local_120 = pppppuVar10;
          local_11c = local_2a4;
          local_118 = pppppuVar8;
          if (0 < (int)local_98) {
            thunk_FUN_016d3fb4(local_94);
          }
          pppppuVar5 = (undefined4 *****)&DAT_00000004;
          goto LAB_006850a8;
        }
        if (local_98 < (undefined4 *****)0x80000001) {
          FUN_013287bc(&local_120,&local_98);
          if (local_120 != (undefined4 *****)&DAT_00000004) {
            local_2a4 = local_11c;
            pppppuVar10 = local_120;
            pppppuVar8 = local_118;
            goto joined_r0x00685054;
          }
          if (0 < (int)local_98) {
            thunk_FUN_016d3fb4(local_94);
          }
        }
        pppppuVar10 = pppppuVar10 + 0xf;
      } while (pppppuVar10 != pppppuVar8);
    }
    pppppuVar10 = local_1c0;
    pppppuVar5 = local_1c4;
    pppppuVar29 = local_1c8;
    local_2a4 = (undefined4 *****)&DAT_0000005c;
    pppppuVar8 = (undefined4 *****)thunk_FUN_016d4a50();
    if (pppppuVar8 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x5c);
    }
    FUN_016dd1aa(pppppuVar8,
                 "application/vnd.google.protobuf; proto=io.prometheus.client.MetricFamily; encoding=delimited"
                 ,0x5c);
LAB_006850c0:
    puVar18 = (undefined1 *)((int)pppppuVar9 + 1);
    pppppuVar9 = pppppuVar30;
    while (puVar18 = puVar18 + -1, puVar18 != (undefined1 *)0x0) {
      FUN_009a19a8(pppppuVar9);
      pppppuVar9 = pppppuVar9 + 0xf;
    }
    if (local_150 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar30);
    }
    if (pppppuVar29 == (undefined4 *****)&DAT_80000000) {
      local_90 = local_2a4;
      local_98 = pppppuVar5;
      local_94 = pppppuVar10;
      local_8c = pppppuVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0033fb38,0x2f,&local_98,&DAT_01859104,&DAT_01859784);
    }
    local_11c = (undefined4 *****)&DAT_00000001;
    local_118 = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x0;
    local_78 = local_78 & 0xffffff00;
    local_84 = (undefined4 *****)0x0;
    local_8c = (undefined4 *****)0x0;
    local_98 = (undefined4 *****)&DAT_80000000;
    local_7c = 0;
    FUN_0076e274(&local_1c8,&local_98,&local_120);
    FUN_0076d204(&local_c8,&local_1c8,pppppuVar5,pppppuVar10);
    FUN_016dd1aa(&local_120,&local_1c8,0x58);
    pppppuVar9 = local_c4;
    pppppuVar30 = local_c8;
    if ((char)local_c8 == '\x04') {
      FUN_016dd1aa(&local_98,&local_1c8,0x58);
      FUN_0076def4(&local_15c,&local_98);
      if (local_15c != -0x80000000) {
        FUN_00f5ef18(&local_170,&local_15c);
        local_150 = pppppuVar17;
        local_128 = 0x5c;
        local_140 = local_170;
        pppppuStack_13c = local_16c;
        local_138 = local_168;
        uStack_134 = uStack_164;
        local_130 = local_2a4;
        local_148 = pppppuVar26;
        local_14c = pppppuVar25;
        local_12c = pppppuVar8;
        FUN_006feadc(&local_120,&local_150);
        local_c8 = local_150;
        local_c4 = local_14c;
        local_c0 = local_148;
        local_bc = pppppuStack_144;
        pppppuStack_b8 = local_140;
        pppppuStack_b4 = pppppuStack_13c;
        local_b0 = local_138;
        uStack_ac = uStack_134;
        pppppuStack_a8 = local_130;
        pppppuStack_a4 = local_12c;
        uStack_a0 = local_128;
        uStack_9c = uStack_124;
        if ((*(undefined1 **)(iVar3 + 0x50) != &DAT_3b9aca00) &&
           ((**(code **)(*(int *)(iVar3 + 0x58) + 0x10))
                      (iVar3 + 100,*(undefined4 *)(iVar3 + 0x5c),*(undefined4 *)(iVar3 + 0x60)),
           *(int *)(iVar3 + 0x68) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x6c));
        }
        *puVar27 = local_c8;
        *(undefined4 ******)(iVar3 + 0x4c) = local_c4;
        *(undefined4 ******)(iVar3 + 0x50) = local_c0;
        *(undefined4 ******)(iVar3 + 0x54) = local_bc;
        *(undefined4 ******)(iVar3 + 0x58) = pppppuStack_b8;
        *(undefined4 ******)(iVar3 + 0x5c) = pppppuStack_b4;
        *(undefined4 ******)(iVar3 + 0x60) = local_b0;
        *(undefined4 *)(iVar3 + 100) = uStack_ac;
        *(undefined4 ******)(iVar3 + 0x68) = pppppuStack_a8;
        *(undefined4 ******)(iVar3 + 0x6c) = pppppuStack_a4;
        *(undefined4 *)(iVar3 + 0x70) = uStack_a0;
        *(undefined4 *)(iVar3 + 0x74) = uStack_9c;
        FUN_016dd1aa(&local_298,&local_120,0x58);
        if (pppppuVar29 != (undefined4 *****)0x0) {
          thunk_FUN_016d3fb4(pppppuVar5);
        }
        if (((local_29c == (undefined4 *****)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
          *(undefined1 *)(iVar3 + 0x44) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          pppuVar13 = *ppppuVar21;
          bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
        } while (!bVar31);
        *ppppuVar21 = (undefined4 ***)0x0;
        goto LAB_00685444;
      }
      pppppuVar9 = local_154;
      pppppuVar30 = local_158;
    }
    else {
      local_154 = local_c4;
      local_158 = local_c8;
      local_15c = -0x80000000;
      FUN_0076e1d8(&local_120);
      FUN_006ff5a4(&local_108);
      if (local_d4 != 0) {
        thunk_FUN_016d3fb4(local_d0);
      }
    }
    local_11c = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x0;
    local_dc = 0x201f4;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 4;
    local_fc = 4;
    local_108 = 2;
    local_ec = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_104 = 0;
    FUN_016dd1aa(auStack_28e,(int)&local_118 + 2,0x3e);
    local_250 = (undefined4 *****)0x0;
    local_294 = 0;
    local_298 = 0;
    if (((uint)pppppuVar30 & 0xff) == 3) {
      ppppuVar14 = *pppppuVar9;
      ppppuVar24 = pppppuVar9[1];
      pppuVar13 = *ppppuVar24;
      if (pppuVar13 != (undefined4 ***)0x0) {
        (*(code *)pppuVar13)(ppppuVar14);
      }
      if (ppppuVar24[1] != (undefined4 ***)0x0) {
        thunk_FUN_016d3fb4(ppppuVar14);
      }
      thunk_FUN_016d3fb4(pppppuVar9);
    }
    if (local_2a4 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar8);
    }
    if (pppppuVar29 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar5);
    }
    if (((local_29c == (undefined4 *****)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar3 + 0x44) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar13 = *ppppuVar21;
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x0;
  }
  else {
    pppppuVar25 = (undefined4 *****)*puVar27;
    pppppuVar26 = *(undefined4 ******)(iVar3 + 0x4c);
    FUN_015f3b0c(&local_98,1);
    local_1c8 = local_98;
    local_1c4 = local_94;
    local_1c0 = local_90;
    local_120 = pppppuVar25;
    local_11c = pppppuVar26;
    local_118 = pppppuVar17;
    FUN_015f3c24(&local_98,&local_1c8,&local_120);
    bVar31 = ((uint)local_98 & 1) == 0;
    pppppuVar17 = local_98;
    if (bVar31) {
      pppppuVar17 = (undefined4 *****)
                    (uint)(local_90 == (undefined4 *****)0x0 && local_8c == (undefined4 *****)0x0);
    }
    if (bVar31 && ((uint)pppppuVar17 & (uint)(local_88 < (undefined *)0x35a4e900)) == 0)
    goto LAB_00684068;
    FUN_006feadc(&local_298,puVar27);
    if (((local_29c == (undefined4 *****)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar3 + 0x44) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar13 = *ppppuVar21;
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x0;
  }
LAB_00685444:
  if (pppuVar13 == (undefined4 ***)0x2) {
    FUN_016d6968(0xf0,ppppuVar21,0x81,1);
  }
  goto LAB_00685938;
LAB_00684fd8:
  pppppuVar9 = local_c4;
  pppppuVar30 = local_c8;
  local_29c = local_c0;
  local_2a0 = local_bc;
  if (pppppuVar10 != (undefined4 *****)0x0) {
    thunk_FUN_016d3fb4(pppppuVar8);
  }
LAB_00684ff4:
  if (local_15c != 0) {
    thunk_FUN_016d3fb4(local_158);
  }
LAB_0068554c:
  puVar18 = (undefined1 *)0x80000000;
  if (local_1dc != (undefined1 *)0x0) {
    thunk_FUN_016d3fb4(local_1d8);
  }
LAB_0068559c:
  iVar11 = local_1e0 + 1;
  pppppuVar10 = local_1e4;
  while (iVar11 = iVar11 + -1, iVar11 != 0) {
    FUN_009a19a8(pppppuVar10);
    pppppuVar10 = pppppuVar10 + 0xf;
  }
  if (local_1e8 != 0) {
    thunk_FUN_016d3fb4(local_1e4);
  }
  if (puVar18 == (undefined1 *)0x80000000) {
    local_8c = local_2a0;
    local_90 = local_29c;
    local_98 = pppppuVar30;
    local_94 = pppppuVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033fb67,0x23,&local_98,&DAT_01859104,&DAT_01859794);
  }
  local_11c = (undefined4 *****)&DAT_00000001;
  local_118 = (undefined4 *****)0x0;
  local_120 = (undefined4 *****)0x0;
  local_78 = local_78 & 0xffffff00;
  local_84 = (undefined4 *****)0x0;
  local_8c = (undefined4 *****)0x0;
  local_98 = (undefined4 *****)&DAT_80000000;
  local_7c = 0;
  FUN_0076e274(&local_1c8,&local_98,&local_120);
  FUN_0076d204(&local_c8,&local_1c8,pppppuVar30,pppppuVar9);
  FUN_016dd1aa(&local_120,&local_1c8,0x58);
  pppppuVar10 = local_c4;
  pppppuVar9 = local_c8;
  if ((char)local_c8 == '\x04') {
    FUN_016dd1aa(&local_98,&local_1c8,0x58);
    FUN_0076def4(&local_15c,&local_98);
    if (local_15c == -0x80000000) {
      pppppuVar10 = local_154;
      pppppuVar9 = local_158;
      goto LAB_006856e0;
    }
    FUN_00f5ef18(&local_170,&local_15c);
    local_150 = pppppuVar17;
    local_128 = 0x19;
    local_140 = local_170;
    pppppuStack_13c = local_16c;
    local_138 = local_168;
    uStack_134 = uStack_164;
    local_12c = local_2a0;
    local_130 = local_29c;
    local_148 = pppppuVar26;
    local_14c = pppppuVar25;
    FUN_006feadc(&local_120,&local_150);
    local_c8 = local_150;
    local_c4 = local_14c;
    local_c0 = local_148;
    local_bc = pppppuStack_144;
    pppppuStack_b8 = local_140;
    pppppuStack_b4 = pppppuStack_13c;
    local_b0 = local_138;
    uStack_ac = uStack_134;
    pppppuStack_a8 = local_130;
    pppppuStack_a4 = local_12c;
    uStack_a0 = local_128;
    uStack_9c = uStack_124;
    if ((*(undefined1 **)(iVar3 + 0x18) != &DAT_3b9aca00) &&
       ((**(code **)(*(int *)(iVar3 + 0x20) + 0x10))
                  (iVar3 + 0x2c,*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28)),
       *(int *)(iVar3 + 0x30) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x34));
    }
    *(undefined4 ******)(iVar3 + 0x10) = local_c8;
    *(undefined4 ******)(iVar3 + 0x14) = local_c4;
    *(undefined4 ******)(iVar3 + 0x18) = local_c0;
    *(undefined4 ******)(iVar3 + 0x1c) = local_bc;
    *(undefined4 ******)(iVar3 + 0x20) = pppppuStack_b8;
    *(undefined4 ******)(iVar3 + 0x24) = pppppuStack_b4;
    *(undefined4 ******)(iVar3 + 0x28) = local_b0;
    *(undefined4 *)(iVar3 + 0x2c) = uStack_ac;
    *(undefined4 ******)(iVar3 + 0x30) = pppppuStack_a8;
    *(undefined4 ******)(iVar3 + 0x34) = pppppuStack_a4;
    *(undefined4 *)(iVar3 + 0x38) = uStack_a0;
    *(undefined4 *)(iVar3 + 0x3c) = uStack_9c;
    FUN_016dd1aa(&local_298,&local_120,0x58);
    if (puVar18 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(pppppuVar30);
    }
    if (((local_2b0 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar13 = *ppppuVar21;
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x0;
  }
  else {
    local_154 = local_c4;
    local_158 = local_c8;
    local_15c = -0x80000000;
    FUN_0076e1d8(&local_120);
    FUN_006ff5a4(&local_108);
    if (local_d4 != 0) {
      thunk_FUN_016d3fb4(local_d0);
    }
LAB_006856e0:
    local_11c = (undefined4 *****)0x0;
    local_120 = (undefined4 *****)0x0;
    local_dc = 0x201f4;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 4;
    local_fc = 4;
    local_108 = 2;
    local_ec = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_104 = 0;
    FUN_016dd1aa(auStack_28e,(int)&local_118 + 2,0x3e);
    local_250 = (undefined4 *****)0x0;
    local_294 = 0;
    local_298 = 0;
    if (((uint)pppppuVar9 & 0xff) == 3) {
      ppppuVar14 = *pppppuVar10;
      ppppuVar24 = pppppuVar10[1];
      pppuVar13 = *ppppuVar24;
      if (pppuVar13 != (undefined4 ***)0x0) {
        (*(code *)pppuVar13)(ppppuVar14);
      }
      if (ppppuVar24[1] != (undefined4 ***)0x0) {
        thunk_FUN_016d3fb4(ppppuVar14);
      }
      thunk_FUN_016d3fb4(pppppuVar10);
    }
    if (local_29c != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(local_2a0);
    }
    if (puVar18 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(pppppuVar30);
    }
    if (((local_2b0 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar13 = *ppppuVar21;
      bVar31 = (bool)hasExclusiveAccess(ppppuVar21);
    } while (!bVar31);
    *ppppuVar21 = (undefined4 ***)0x0;
  }
LAB_00685930:
  if (pppuVar13 == (undefined4 ***)0x2) {
    FUN_016d6968(0xf0,ppppuVar21,0x81,1);
  }
LAB_00685938:
LAB_00683e64:
  FUN_016dd1aa(auStack_240,&local_298,0x58);
  FUN_00687a50(param_2);
  FUN_00645768(param_2 + 0x88);
  piVar4 = *(int **)(param_2 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar31 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar31);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(*(undefined4 *)(param_2 + 0xa8));
  }
  piVar4 = *(int **)(param_2 + 0xac);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar31 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar31);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0f04(*(undefined4 *)(param_2 + 0xac));
  }
  FUN_016dd1aa(param_1,auStack_240,0x58);
  *(undefined1 *)(param_2 + 0xb0) = 1;
  return;
}

