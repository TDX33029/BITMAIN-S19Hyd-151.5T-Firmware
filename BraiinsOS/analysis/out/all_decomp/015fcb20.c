// FUN_015fcb20 @ 015fcb20 size=7720 calls_out=58 calls_in=2
// strings: internal error: entered unreachable code: waitid with WEXITED should not return None

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x015fe76c) */
/* WARNING: Removing unreachable block (ram,0x015fe7cc) */
/* WARNING: Removing unreachable block (ram,0xeb5fe802) */
/* WARNING: Removing unreachable block (ram,0x015fe784) */
/* WARNING: Removing unreachable block (ram,0x015fe518) */
/* WARNING: Removing unreachable block (ram,0x015fe758) */
/* WARNING: Removing unreachable block (ram,0x015fe540) */
/* WARNING: Removing unreachable block (ram,0x015fe798) */
/* WARNING: Removing unreachable block (ram,0x015fe558) */
/* WARNING: Removing unreachable block (ram,0x015fdde4) */
/* WARNING: Removing unreachable block (ram,0x015fddfc) */
/* WARNING: Removing unreachable block (ram,0x015fe7a0) */
/* WARNING: Removing unreachable block (ram,0x015fde14) */
/* WARNING: Removing unreachable block (ram,0x015fe1cc) */
/* WARNING: Removing unreachable block (ram,0x015fcbec) */
/* WARNING: Removing unreachable block (ram,0x015fe4b4) */
/* WARNING: Removing unreachable block (ram,0x015fdc14) */
/* WARNING: Type propagation algorithm not settling */

void FUN_015fcb20(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int *******pppppppiVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  uint uVar12;
  int *******pppppppiVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  int *******pppppppiVar16;
  int *******pppppppiVar17;
  int iVar18;
  uint uVar19;
  int *******extraout_r1;
  int ******ppppppiVar20;
  uint uVar21;
  undefined *puVar22;
  char *pcVar23;
  int *piVar24;
  int *******pppppppiVar25;
  uint uVar26;
  char *pcVar27;
  int *******pppppppiVar28;
  int ******ppppppiVar29;
  int ******ppppppiVar30;
  undefined1 *puVar31;
  int iVar32;
  int ******ppppppiVar33;
  int iVar34;
  int *piVar35;
  char *pcVar36;
  int *******pppppppiVar37;
  bool bVar38;
  bool bVar39;
  int *******local_2d0;
  int *******local_2c8;
  int *******local_2c4;
  int *******local_2bc;
  int *******local_2b8;
  int *******local_2b4;
  int *******local_2b0;
  int *******local_2ac;
  int *******local_2a8;
  int *******local_2a4;
  uint local_2a0;
  undefined4 local_29c;
  int *******local_290;
  int *******local_28c;
  int *******local_288;
  int *******local_284;
  int *******local_280;
  int *******local_27c;
  int *******local_278;
  int *******pppppppiStack_274;
  uint local_270;
  int *******local_140;
  int *******local_13c;
  int *******local_138;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******local_dc;
  undefined4 local_6c;
  uint local_60 [2];
  int *******local_58;
  int *******local_54;
  uint local_50;
  int *******local_48;
  int *******local_44;
  int *******pppppppiStack_40;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  undefined1 auStack_29 [5];
  
  iVar32 = param_2[0x14];
  if ((char)param_2[0x15] == '\0' && iVar32 == 0) {
    local_48 = (int *******)&DAT_80000000;
    cVar3 = (char)param_2[0x1e];
joined_r0x015fcbb4:
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      param_1[2] = &DAT_018aae90;
      if (local_48 == (int *******)&DAT_80000000) {
        return;
      }
      goto LAB_015fcbdc;
    }
    iVar34 = param_2[8];
    iVar18 = param_2[10];
    iVar32 = 1;
    if (param_4 != 0) {
      iVar32 = param_3;
    }
    if (param_2[6] != 5) {
      iVar32 = param_2[6];
    }
    FUN_01600674(&local_290,iVar32,param_2[7],1);
    pppppppiVar28 = local_288;
    pppppppiVar17 = local_28c;
    pppppppiVar5 = local_290;
    local_2bc = local_28c;
    pppppppiVar10 = local_288;
    if (local_290 != (int *******)0x3) {
      if (iVar34 == 5) {
        iVar34 = param_3;
      }
      FUN_01600674(&local_290,iVar34,param_2[9],0);
      pppppppiVar13 = local_288;
      pppppppiVar25 = local_28c;
      pppppppiVar11 = local_290;
      local_2bc = local_28c;
      pppppppiVar10 = local_288;
      if (local_290 != (int *******)0x3) {
        if (iVar18 != 5) {
          param_3 = iVar18;
        }
        FUN_01600674(&local_290,param_3,param_2[0xb],0);
        local_2d0 = local_48;
        pppppppiVar10 = local_288;
        local_2bc = local_28c;
        pppppppiVar37 = local_290;
        if (local_290 != (int *******)0x3) {
          local_2a8 = local_290;
          local_2ac = pppppppiVar25;
          local_2b0 = pppppppiVar11;
          local_2a4 = local_28c;
          local_2b4 = pppppppiVar17;
          local_2b8 = pppppppiVar5;
          local_34 = pppppppiVar13;
          local_38 = pppppppiVar28;
          local_30 = local_288;
          if (param_2[2] != 0 || *param_2 != 0) goto LAB_015fdb4c;
          bVar2 = *(byte *)((int)param_2 + 0x55);
          bVar38 = bVar2 == 0;
          if (bVar38) {
            bVar2 = *(byte *)(param_2 + 0x15);
          }
          if (bVar38 && (bVar2 & 1) == 0) {
LAB_015fdb20:
            if (param_2[0x11] != 0) goto LAB_015fdb4c;
            iVar32 = param_2[0x1c];
            bVar38 = iVar32 == 0;
            if (bVar38) {
              iVar32 = param_2[0x1a];
            }
            if (!bVar38 || iVar32 != 0) goto LAB_015fdb4c;
            cVar3 = *(char *)((int)param_2 + 0x79);
            if (cVar3 != '\0') {
              if (DAT_018dd944 == '\x02') goto LAB_015fdb4c;
              if (DAT_018dd944 != '\0') goto LAB_015fe1fc;
              uVar7 = FUN_016e010e();
              iVar32 = FUN_016d6968(0x1b2,uVar7,0);
              if (iVar32 != -1) {
                FUN_016dffb2(iVar32);
                DAT_018dd944 = '\x02';
                goto LAB_015fdb4c;
              }
              puVar15 = (undefined4 *)FUN_016d2bc8();
              local_ec = (int *******)*puVar15;
              puVar31 = (undefined1 *)((uint)local_f0 >> 8);
              local_f0 = (int *******)((int)puVar31 << 8);
              if (local_ec != (int *******)&DAT_00000018) {
                FUN_015bf4a0(&local_f0);
                DAT_018dd944 = '\x03';
                goto LAB_015fe1fc;
              }
              pppppppiVar28 = (int *******)&DAT_00000018;
              pppppppiVar10 = local_f0;
LAB_015fe250:
              uVar19 = (uint)pppppppiVar10 & 0xff | (int)puVar31 << 8;
              goto LAB_015fdbe0;
            }
LAB_015fe1fc:
            puVar31 = (undefined1 *)param_2[4];
            iVar32 = param_2[5];
            iVar34 = param_2[0x18];
            pppppppiVar28 = (int *******)FUN_016da2ac(&local_290);
            if (pppppppiVar28 != (int *******)0x0) {
LAB_015fe248:
              pppppppiVar10 = (int *******)0x0;
              goto LAB_015fe250;
            }
            pppppppiVar28 = (int *******)FUN_016da29e(&local_140);
            if (pppppppiVar28 != (int *******)0x0) {
              FUN_016da2a8(&local_290);
              goto LAB_015fe248;
            }
            if (((((pppppppiVar5 != (int *******)0x0) &&
                  (pppppppiVar28 = (int *******)FUN_016da252(&local_140,pppppppiVar17,0),
                  pppppppiVar28 != (int *******)0x0)) ||
                 ((pppppppiVar11 != (int *******)0x0 &&
                  (pppppppiVar28 = (int *******)FUN_016da252(&local_140,pppppppiVar25,1),
                  pppppppiVar28 != (int *******)0x0)))) ||
                ((pppppppiVar37 != (int *******)0x0 &&
                 (pppppppiVar28 = (int *******)FUN_016da252(&local_140,local_2bc,2),
                 pppppppiVar28 != (int *******)0x0)))) ||
               ((iVar34 != 0 &&
                (pppppppiVar28 = (int *******)FUN_016da210(&local_140,iVar34),
                pppppppiVar28 != (int *******)0x0)))) {
LAB_015fe304:
              FUN_016da28a(&local_140);
              FUN_016da2a8(&local_290);
              pppppppiVar10 = (int *******)0x0;
              goto LAB_015fe250;
            }
            uVar7 = 4;
            if (puVar31 != (undefined1 *)0x0) {
              pppppppiVar28 = (int *******)FUN_016da2ca(&local_290,iVar32);
              if (pppppppiVar28 != (int *******)0x0) goto LAB_015fe304;
              uVar7 = 6;
            }
            iVar32 = FUN_016da72a(&local_f0);
            if ((iVar32 == -1) || (iVar32 = FUN_016da6ac(&local_f0,0xd), iVar32 == -1)) {
              puVar15 = (undefined4 *)FUN_016d2bc8();
              pppppppiVar28 = (int *******)*puVar15;
              goto LAB_015fe304;
            }
            pppppppiVar28 = (int *******)FUN_016da2d2(&local_290,&local_f0);
            if (pppppppiVar28 != (int *******)0x0) goto LAB_015fe304;
            if (*(char *)((int)param_2 + 0x7a) == '\x01') {
              FUN_016da28a(&local_140);
              FUN_016da2a8(&local_290);
              goto LAB_015fdb4c;
            }
            pppppppiVar28 = (int *******)FUN_016da2bc(&local_290,uVar7);
            if (pppppppiVar28 != (int *******)0x0) goto LAB_015fe304;
            if (DAT_018dd9b8 < 0x3ffffffe) {
              bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
              if (!bVar38) goto LAB_015fe4b8;
              DataMemoryBarrier(0xb);
              DAT_018dd9b8 = DAT_018dd9b8 + 1;
            }
            else {
LAB_015fe4b8:
              FUN_015bebb8(&DAT_018dd9b8);
            }
            puVar15 = &DAT_018dda24;
            if (local_2d0 != (int *******)&DAT_80000000) {
              puVar15 = (undefined4 *)((uint)&local_48 | 4);
            }
            if ((cVar3 != '\0') && (puVar31 = &DAT_018dd940, DAT_018dd944 == '\x01')) {
              local_6c = 0xffffffff;
              goto LAB_015fe9c8;
            }
            local_e4 = (int *******)0xffffffff;
            local_f0 = (int *******)0x0;
            local_e8 = (int *******)0x0;
            pppppppiVar16 =
                 (int *******)
                 FUN_016da2e0(&local_e8,param_2[0x16],&local_140,&local_290,param_2[0xd],*puVar15);
            pppppppiVar28 = local_e8;
            pppppppiVar10 = local_ec;
            pppppppiVar13 = local_f0;
            if (pppppppiVar16 == (int *******)0x0) {
              local_2d0 = local_e4;
              puVar31 = (undefined1 *)((uint)local_ec >> 8);
              DataMemoryBarrier(0xb);
              do {
                uVar19 = DAT_018dd9b8 - 1;
                bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
              } while (!bVar38);
              DAT_018dd9b8 = uVar19;
              if ((uVar19 & 0xbfffffff) == 0x80000000) {
                FUN_015e9814(&DAT_018dd9b8);
              }
            }
            else {
              if (local_e4 != (int *******)0xffffffff) {
                FUN_016dffb2();
              }
              pppppppiVar13 = (int *******)0x3;
              pppppppiVar10 = (int *******)0x0;
              DataMemoryBarrier(0xb);
              do {
                uVar19 = DAT_018dd9b8 - 1;
                bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
              } while (!bVar38);
              pppppppiVar28 = pppppppiVar16;
              DAT_018dd9b8 = uVar19;
              if ((uVar19 & 0xbfffffff) == 0x80000000) {
                FUN_015e9814(&DAT_018dd9b8);
              }
            }
            FUN_016da28a(&local_140);
            FUN_016da2a8(&local_290);
            if (pppppppiVar13 == (int *******)&SUB_00000002) goto LAB_015fdb4c;
            if (pppppppiVar13 == (int *******)0x3) goto LAB_015fe250;
            param_1[1] = (uint)pppppppiVar10 & 0xff | (int)puVar31 << 8;
            param_1[2] = pppppppiVar28;
            param_1[3] = local_2d0;
            *param_1 = pppppppiVar13;
            param_1[4] = local_38;
            param_1[5] = local_34;
            param_1[6] = local_30;
            if (&DAT_00000001 < pppppppiVar5) {
              FUN_016dffb2(pppppppiVar17);
              if (pppppppiVar11 < &SUB_00000002) goto LAB_015fe6b4;
LAB_015fe70c:
              FUN_016dffb2(pppppppiVar25);
              if (&DAT_00000001 < pppppppiVar37) goto LAB_015fe128;
              goto LAB_015fe12c;
            }
            if (&DAT_00000001 < pppppppiVar11) goto LAB_015fe70c;
LAB_015fe6b4:
            if (pppppppiVar37 < &SUB_00000002) goto LAB_015fe12c;
LAB_015fe128:
            FUN_016dffb2(local_2bc);
          }
          else {
            pcVar36 = (char *)param_2[0x16];
            iVar32 = param_2[0x17];
            uVar19 = iVar32 - 1;
            if (uVar19 < 8) {
              for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                if (*pcVar36 == '/') goto LAB_015fdb20;
                pcVar36 = pcVar36 + 1;
              }
              goto LAB_015fdb4c;
            }
            uVar26 = ((uint)(pcVar36 + 3) & 0xfffffffc) - (int)pcVar36;
            if (uVar26 == 0) {
              uVar26 = 0;
LAB_015fda60:
              do {
                uVar12 = *(uint *)(pcVar36 + uVar26);
                uVar21 = *(uint *)((int)(pcVar36 + uVar26) + 4) ^ 0x2f2f2f2f;
                if (((0x1010100 - (uVar12 ^ 0x2f2f2f2f) | uVar12) & 0x80808080 &
                    (0x1010100 - uVar21 | uVar21)) != 0x80808080) break;
                uVar26 = uVar26 + 8;
              } while (uVar26 <= iVar32 - 9U);
            }
            else {
              if (uVar19 < uVar26) {
                uVar26 = uVar19;
              }
              pcVar23 = pcVar36;
              uVar12 = uVar26;
              do {
                if (*pcVar23 == '/') goto LAB_015fdb20;
                uVar12 = uVar12 - 1;
                pcVar23 = pcVar23 + 1;
              } while (uVar12 != 0);
              if (uVar26 <= iVar32 - 9U) goto LAB_015fda60;
            }
            iVar32 = uVar19 - uVar26;
            if (iVar32 != 0) {
              pcVar36 = pcVar36 + uVar26;
              do {
                if (*pcVar36 == '/') goto LAB_015fdb20;
                iVar32 = iVar32 + -1;
                pcVar36 = pcVar36 + 1;
              } while (iVar32 != 0);
            }
LAB_015fdb4c:
            uVar19 = 0;
            local_28c = (int *******)0x0;
            local_290 = (int *******)0x0;
            iVar32 = FUN_016d99fe(1,0x80005,0,&local_290);
            pppppppiVar10 = local_28c;
            pppppppiVar28 = local_290;
            if (iVar32 == -1) {
              puVar15 = (undefined4 *)FUN_016d2bc8();
              pppppppiVar28 = (int *******)*puVar15;
LAB_015fdbe0:
              param_1[1] = uVar19;
              param_1[2] = pppppppiVar28;
              *param_1 = 2;
              if (&DAT_00000001 < pppppppiVar5) {
                FUN_016dffb2(pppppppiVar17);
                if (&SUB_00000002 <= pppppppiVar11) goto LAB_015fdd60;
              }
              else if (&DAT_00000001 < pppppppiVar11) {
LAB_015fdd60:
                FUN_016dffb2(pppppppiVar25);
              }
              if (&DAT_00000001 < pppppppiVar37) {
                FUN_016dffb2(local_2bc);
              }
LAB_015fe0fc:
              if (local_38 != (int *******)0xffffffff) {
                FUN_016dffb2();
              }
              if (local_34 != (int *******)0xffffffff) {
                FUN_016dffb2();
              }
              local_2bc = local_30;
              if (local_30 != (int *******)0xffffffff) goto LAB_015fe128;
            }
            else {
              if (local_290 == (int *******)0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_0056a6c8,8,&DAT_018ab550);
              }
              if (local_28c == (int *******)0xffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_0056a6c8,8,&DAT_018ab550);
              }
              if (DAT_018dd9b8 < 0x3ffffffe) {
                bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
                if (!bVar38) goto LAB_015fdc18;
                DataMemoryBarrier(0xb);
                DAT_018dd9b8 = DAT_018dd9b8 + 1;
              }
              else {
LAB_015fdc18:
                FUN_015bebb8(&DAT_018dd9b8);
              }
              pppppppiVar13 = (int *******)FUN_016d9ca4(DAT_018dd9c0);
              if (pppppppiVar13 == (int *******)0xffffffff) {
                puVar15 = (undefined4 *)FUN_016d2bc8();
                uVar7 = *puVar15;
                *(undefined1 *)(param_1 + 1) = 0;
                *param_1 = 2;
                param_1[2] = uVar7;
                DataMemoryBarrier(0xb);
                do {
                  uVar19 = DAT_018dd9b8 - 1;
                  bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
                } while (!bVar38);
                DAT_018dd9b8 = uVar19;
                if ((uVar19 & 0xbfffffff) == 0x80000000) {
                  FUN_015e9814(&DAT_018dd9b8);
                }
                FUN_016dffb2(pppppppiVar10);
                bVar38 = true;
              }
              else {
                if (pppppppiVar13 == (int *******)0x0) {
                  do {
                    bVar38 = (bool)hasExclusiveAccess(0x18dd988);
                  } while (!bVar38);
                  DAT_018dd988 = DAT_018dd988 | 0x80000000;
                  FUN_016dffb2(pppppppiVar28);
                  if (*(char *)((int)param_2 + 0x79) != '\0') {
                    FUN_015ff32c(pppppppiVar10);
                  }
                  pppppppiVar5 = (int *******)0x0;
                  if (local_48 != (int *******)&DAT_80000000) {
                    pppppppiVar5 = (int *******)&local_48;
                  }
                  FUN_015fefc0(&local_290,param_2,&local_2b8,pppppppiVar5);
                  local_ec = (int *******)0x58454f4e;
                  local_f0 = (int *******)0x16000000;
                  local_140 = local_290;
                  if (((uint)local_290 & 0xff) == 0) {
                    local_f0 = (int *******)
                               ((int)local_28c << 0x18 | ((uint)local_28c >> 8 & 0xff) << 0x10 |
                                ((uint)local_28c >> 0x10 & 0xff) << 8 | (uint)local_28c >> 0x18);
                  }
                  local_13c = local_28c;
                  iVar32 = FUN_016e034e(pppppppiVar10,&local_f0,8);
                  if (iVar32 == -1) {
                    puVar15 = (undefined4 *)FUN_016d2bc8();
                    local_28c = (int *******)*puVar15;
                    local_290 = (int *******)((uint)local_290 & 0xffffff00);
                    FUN_015bf4a0(&local_290);
                    FUN_015bee18(&local_290,auStack_29,&DAT_004106d4,0x9d);
                    if (((uint)local_290 & 0xff) != 4) {
                      FUN_015bf4a0(&local_290);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_015bef44();
                  }
                  FUN_015ff474(4,iVar32);
                  FUN_016dff9e(1);
LAB_015fe9c8:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018aae80);
                }
                DataMemoryBarrier(0xb);
                do {
                  uVar19 = DAT_018dd9b8 - 1;
                  bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
                } while (!bVar38);
                DAT_018dd9b8 = uVar19;
                if ((uVar19 & 0xbfffffff) == 0x80000000) {
                  FUN_015e9814(&DAT_018dd9b8);
                }
                FUN_016dffb2(pppppppiVar10);
                ppppppiVar33 = (int ******)0xffffffff;
                if (*(char *)((int)param_2 + 0x79) == '\x01') {
                  local_e4 = (int *******)0x0;
                  local_278 = (int *******)0x0;
                  local_e8 = (int *******)0x0;
                  local_ec = (int *******)0x0;
                  local_f0 = (int *******)0x0;
                  local_13c = (int *******)0x0;
                  local_28c = (int *******)0x0;
                  local_290 = (int *******)0x0;
                  local_27c = (int *******)&DAT_00000010;
                  local_288 = (int *******)&local_140;
                  local_280 = (int *******)&local_f0;
                  local_140 = (int *******)&DAT_00000001;
                  local_284 = (int *******)&DAT_00000001;
                  do {
                    iVar32 = FUN_016d8bf6(pppppppiVar28,&local_290,0x40000000);
                    if (iVar32 != -1) {
                      ppppppiVar33 = (int ******)0xffffffff;
                      if ((&DAT_0000000b < local_27c) && (local_280 != (int *******)0x0)) {
                        ppppppiVar20 = local_280[1];
                        bVar38 = ppppppiVar20 == (int ******)0x1;
                        if (bVar38) {
                          ppppppiVar20 = local_280[2];
                        }
                        if ((bVar38 && ppppppiVar20 == (int ******)0x1) &&
                           (*local_280 == (int ******)0x10)) {
                          ppppppiVar33 = local_280[3];
                        }
                      }
                      goto LAB_015fde54;
                    }
                    piVar6 = (int *)FUN_016d2bc8();
                  } while (*piVar6 == 4);
                  ppppppiVar33 = (int ******)0xffffffff;
                }
LAB_015fde54:
                pppppppiVar10 = (int *******)((uint)ppppppiVar33 | (int)ppppppiVar33 >> 0x1f);
                local_f0 = (int *******)0x0;
                local_54 = (int *******)0x0;
                local_58 = (int *******)0x0;
                local_e8 = pppppppiVar13;
                local_e4 = pppppppiVar10;
                while (iVar32 = FUN_016d8acc(pppppppiVar28,&local_58,8,0), iVar32 == -1) {
                  piVar6 = (int *)FUN_016d2bc8();
                  if (*piVar6 != 4) {
                    local_140 = (int *******)0x0;
                    pppppppiVar5 = (int *******)&local_290;
                    local_13c = (int *******)*piVar6;
                    FUN_015fc9f4(pppppppiVar5,&local_f0);
                    if ((char)local_290 == '\x04') {
                      puVar22 = &DAT_018aaedc;
                      puVar14 = &DAT_0057e85e;
                      local_28c = (int *******)&LAB_015f3dfc;
                      local_290 = (int *******)&local_140;
                    }
                    else {
                      FUN_015bf4a0(&local_290);
                      pppppppiVar5 = (int *******)&DAT_0000004f;
                      puVar22 = &DAT_018aaeec;
                      puVar14 = (undefined *)0x410722;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(puVar14,pppppppiVar5,puVar22);
                  }
                }
                if (iVar32 != 0) {
                  if (iVar32 == 8) {
                    local_29c = 4;
                    local_2a0 = (uint)&local_58 | 4;
                    if (local_54 != (int *******)0x58454f4e) {
                      local_28c = (int *******)FUN_015ff4f0;
                      local_290 = (int *******)&local_58;
                      FUN_015ffb6c(&local_2a0,&local_290);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)software_udf(0xfdee,0x15fe9f0);
                      (*pcVar1)();
                    }
                    uVar19 = (int)local_58 << 0x18 | ((uint)local_58 >> 8 & 0xff) << 0x10 |
                             ((uint)local_58 >> 0x10 & 0xff) << 8 | (uint)local_58 >> 0x18;
                    if (-1 < (int)ppppppiVar33) {
                      FUN_015f05c4(&local_290,pppppppiVar10,4);
                      if (local_290 == (int *******)0x0) {
                        if (((uint)local_28c & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00faa478("internal error: entered unreachable code: waitid with WEXITED should not return None"
                                       ,0xa9,&DAT_018aad58);
                        }
                      }
                      else if (((uint)local_28c & 0xff) != 4) {
                        local_13c = local_288;
                        local_140 = local_28c;
                        goto LAB_015fe02c;
                      }
                      param_1[2] = uVar19;
                      *(undefined1 *)(param_1 + 1) = 0;
                      *param_1 = 2;
LAB_015fe084:
                      FUN_016dffb2(pppppppiVar10);
LAB_015fe08c:
                      bVar38 = true;
                      goto LAB_015fe090;
                    }
                    local_290 = (int *******)0x0;
                    do {
                      iVar32 = FUN_016da356(pppppppiVar13,&local_290,0);
                      if (iVar32 != -1) {
                        *(undefined1 *)(param_1 + 1) = 0;
                        param_1[2] = uVar19;
                        *param_1 = 2;
                        if (-1 < (int)ppppppiVar33) goto LAB_015fe084;
                        goto LAB_015fe08c;
                      }
                      puVar15 = (undefined4 *)FUN_016d2bc8();
                    } while ((int *******)*puVar15 == (int *******)&DAT_00000004);
                    local_140 = (int *******)0x0;
                    local_13c = (int *******)*puVar15;
LAB_015fe02c:
                    FUN_015bf4a0(&local_140);
                    puVar22 = &DAT_018aae9c;
                  }
                  else {
                    FUN_015fc9f4(&local_290,&local_f0);
                    if ((char)local_290 == '\x04') {
                      uVar7 = 0x3d;
                      puVar22 = &DAT_018aaebc;
                      puVar14 = &DAT_00410749;
                      goto LAB_015fe848;
                    }
                    FUN_015bf4a0(&local_290);
                    puVar22 = &DAT_018aaecc;
                  }
                  uVar7 = 0x4f;
                  puVar14 = (undefined *)0x410722;
LAB_015fe848:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(puVar14,uVar7,puVar22);
                }
                local_290 = local_f0;
                local_28c = local_ec;
                local_288 = local_e8;
                local_284 = local_e4;
                local_280 = local_38;
                local_27c = local_34;
                local_278 = local_30;
                *param_1 = local_f0;
                param_1[1] = local_ec;
                param_1[2] = local_e8;
                bVar38 = false;
                param_1[3] = local_e4;
                param_1[4] = local_38;
                param_1[5] = local_34;
                param_1[6] = local_30;
              }
LAB_015fe090:
              FUN_016dffb2(pppppppiVar28);
              if (&DAT_00000001 < pppppppiVar5) {
                FUN_016dffb2(pppppppiVar17);
                if (pppppppiVar11 < &SUB_00000002) goto LAB_015fe0ac;
LAB_015fe0d8:
                FUN_016dffb2(pppppppiVar25);
                if (&SUB_00000002 <= pppppppiVar37) {
LAB_015fe0ec:
                  FUN_016dffb2(local_2bc);
                }
              }
              else {
                if (&DAT_00000001 < pppppppiVar11) goto LAB_015fe0d8;
LAB_015fe0ac:
                if (&DAT_00000001 < pppppppiVar37) goto LAB_015fe0ec;
              }
              if (bVar38) goto LAB_015fe0fc;
            }
          }
LAB_015fe12c:
          if (local_48 == (int *******)&DAT_80000000) {
            return;
          }
          goto LAB_015fcbdc;
        }
        if (pppppppiVar13 != (int *******)0xffffffff) {
          FUN_016dffb2(pppppppiVar13);
        }
        if (&DAT_00000001 < pppppppiVar11) {
          FUN_016dffb2(pppppppiVar25);
        }
      }
      if (pppppppiVar28 != (int *******)0xffffffff) {
        FUN_016dffb2(pppppppiVar28);
      }
      if (&DAT_00000001 < pppppppiVar5) {
        FUN_016dffb2(pppppppiVar17);
      }
    }
    *param_1 = 2;
    param_1[1] = local_2bc;
    param_1[2] = pppppppiVar10;
    if (local_48 == (int *******)&DAT_80000000) {
      return;
    }
LAB_015fcbdc:
    FUN_015f76a8(&local_48);
    return;
  }
  local_50 = 0;
  local_58 = (int *******)0x0;
  if ((char)param_2[0x15] == '\0') {
    if (DAT_018dd9b8 < 0x3ffffffe) {
      bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
      if (!bVar38) goto LAB_015fcbf0;
      DataMemoryBarrier(0xb);
      DAT_018dd9b8 = DAT_018dd9b8 + 1;
    }
    else {
LAB_015fcbf0:
      FUN_015bebb8(&DAT_018dd9b8);
    }
    local_e8 = (int *******)0x0;
    local_ec = (int *******)&DAT_00000004;
    local_2c4 = (int *******)&DAT_00000004;
    local_2c8 = (int *******)0x0;
    local_f0 = (int *******)0x0;
    if ((DAT_018dda24 != (int *)0x0) && (iVar34 = *DAT_018dda24, iVar34 != 0)) {
      local_2c8 = (int *******)0x0;
      local_2c4 = (int *******)&DAT_00000004;
      piVar6 = DAT_018dda24;
LAB_015fcc90:
      pppppppiVar5 = (int *******)FUN_016dd8a2(iVar34);
      if (pppppppiVar5 != (int *******)0x0) {
        iVar18 = iVar34 + 1;
        pcVar36 = (char *)((int)pppppppiVar5 + -1);
        if (&DAT_00000008 < pppppppiVar5) {
          pcVar23 = (char *)((iVar34 + 4U & 0xfffffffc) - iVar18);
          if (pcVar23 == (char *)0x0) {
            pcVar23 = (char *)0x0;
            goto LAB_015fcd24;
          }
          pcVar27 = (char *)0x0;
          if (pcVar36 < pcVar23) {
            pcVar23 = pcVar36;
          }
          do {
            if (pcVar27[iVar18] == '=') goto LAB_015fcda4;
            pcVar27 = pcVar27 + 1;
          } while (pcVar23 != pcVar27);
          for (; pcVar23 <= (char *)((int)pppppppiVar5 + -9); pcVar23 = pcVar23 + 8) {
LAB_015fcd24:
            if (((0x1010100 - (*(uint *)(pcVar23 + iVar34 + 1) ^ 0x3d3d3d3d) |
                 *(uint *)(pcVar23 + iVar34 + 1)) & 0x80808080 &
                (0x1010100 - (*(uint *)(pcVar23 + iVar34 + 5) ^ 0x3d3d3d3d) |
                *(uint *)(pcVar23 + iVar34 + 5) ^ 0x3d3d3d3d)) != 0x80808080) break;
          }
          if (pcVar36 != pcVar23) {
            iVar9 = 0;
            do {
              if (pcVar23[iVar9 + iVar18] == '=') {
                pcVar27 = pcVar23 + iVar9;
                goto LAB_015fcda4;
              }
              iVar9 = iVar9 + 1;
            } while ((int)pcVar36 - (int)pcVar23 != iVar9);
          }
        }
        else if (pcVar36 != (char *)0x0) {
          pcVar27 = (char *)0x0;
          do {
            if (pcVar27[iVar18] == '=') goto LAB_015fcda4;
            pcVar27 = pcVar27 + 1;
          } while (pcVar36 != pcVar27);
        }
      }
      goto LAB_015fcc84;
    }
LAB_015fce78:
    pppppppiVar5 = local_f0;
    DataMemoryBarrier(0xb);
    do {
      uVar19 = DAT_018dd9b8 - 1;
      bVar38 = (bool)hasExclusiveAccess(0x18dd9b8);
    } while (!bVar38);
    DAT_018dd9b8 = uVar19;
    if ((uVar19 & 0xbfffffff) == 0x80000000) {
      FUN_015e9814(&DAT_018dd9b8);
    }
    local_28c = local_2c4;
    pppppppiVar28 = local_2c4 + (int)local_2c8 * 6;
    local_290 = local_2c4;
    pppppppiVar17 = local_2c4;
    local_288 = pppppppiVar5;
    local_284 = pppppppiVar28;
    if (local_2c8 != (int *******)0x0) {
      pppppppiVar10 = local_2c4;
      do {
        pppppppiVar17 = pppppppiVar10 + 6;
        if (*pppppppiVar10 == (int ******)0x80000000) break;
        local_44 = (int *******)pppppppiVar10[1];
        pppppppiStack_40 = (int *******)pppppppiVar10[2];
        local_38 = (int *******)pppppppiVar10[3];
        local_34 = (int *******)pppppppiVar10[4];
        local_30 = (int *******)pppppppiVar10[5];
        local_48 = (int *******)*pppppppiVar10;
        FUN_016009c0(&local_f0,&local_58,&local_48,&local_38);
        if (((uint)local_f0 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_ec);
        }
        pppppppiVar11 = pppppppiVar10 + 6;
        pppppppiVar10 = pppppppiVar17;
      } while (pppppppiVar11 != pppppppiVar28);
    }
    local_28c = pppppppiVar17;
    if (pppppppiVar28 != pppppppiVar17) {
      pppppppiVar10 = pppppppiVar17 + 4;
      uVar19 = (uint)((int)pppppppiVar28 - (int)pppppppiVar17) / 0x18;
      do {
        if (pppppppiVar10[-4] != (int ******)0x0) {
          thunk_FUN_016d3fb4(pppppppiVar10[-3]);
        }
        if (pppppppiVar10[-1] != (int ******)0x0) {
          thunk_FUN_016d3fb4(*pppppppiVar10);
        }
        pppppppiVar10 = pppppppiVar10 + 6;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (pppppppiVar5 != (int *******)0x0) {
      thunk_FUN_016d3fb4(local_2c4);
    }
  }
  piVar6 = (int *)param_2[0x12];
  if (piVar6 != (int *)0x0 && iVar32 != 0) {
    piVar35 = (int *)0x0;
    uVar19 = param_2[0x13];
    do {
      pppppppiVar17 = local_54;
      pppppppiVar5 = local_58;
      if (piVar35 == (int *)0x0) {
        uVar26 = 0;
        piVar35 = piVar6;
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          piVar35 = (int *)piVar35[0x44];
        }
        piVar6 = (int *)0x0;
        if (*(short *)((int)piVar35 + 0x10e) != 0) goto LAB_015fd064;
LAB_015fd094:
        do {
          piVar24 = (int *)*piVar35;
          if (piVar24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018ab408);
          }
          uVar26 = (uint)*(ushort *)(piVar35 + 0x43);
          piVar6 = (int *)((int)piVar6 + 1);
          piVar35 = piVar24;
        } while (*(ushort *)((int)piVar24 + 0x10e) <= uVar26);
      }
      else {
        uVar26 = uVar19;
        if (*(ushort *)((int)piVar35 + 0x10e) <= uVar19) goto LAB_015fd094;
LAB_015fd064:
        piVar24 = piVar35;
      }
      if (piVar6 == (int *)0x0) {
        uVar19 = uVar26 + 1;
        piVar35 = piVar24;
      }
      else {
        piVar8 = piVar24 + uVar26 + 0x45;
        do {
          piVar35 = (int *)*piVar8;
          piVar6 = (int *)((int)piVar6 + -1);
          piVar8 = piVar35 + 0x44;
        } while (piVar6 != (int *)0x0);
        uVar19 = 0;
      }
      if (piVar24[uVar26 * 3 + 0x22] == -0x80000000) {
        if (local_58 != (int *******)0x0) {
          ppppppiVar33 = (int ******)piVar24[uVar26 * 3 + 3];
          iVar34 = piVar24[uVar26 * 3 + 2];
          local_2c4 = local_54;
          pppppppiVar28 = local_58;
LAB_015fd130:
          uVar4 = *(ushort *)((int)pppppppiVar28 + 0x10e);
          pppppppiVar10 = pppppppiVar28 + 1;
          iVar18 = (int)(uint)uVar4 * 0xc;
          ppppppiVar20 = (int ******)0xffffffff;
          do {
            ppppppiVar29 = ppppppiVar20;
            ppppppiVar20 = (int ******)(uint)uVar4;
            if (iVar18 == 0) goto joined_r0x015fd1d4;
            ppppppiVar30 = pppppppiVar10[2];
            ppppppiVar20 = ppppppiVar30;
            if (ppppppiVar33 < ppppppiVar30) {
              ppppppiVar20 = ppppppiVar33;
            }
            iVar9 = FUN_016dd50a(iVar34,pppppppiVar10[1],ppppppiVar20);
            if (iVar9 == 0) {
              iVar9 = (int)ppppppiVar33 - (int)ppppppiVar30;
            }
            iVar18 = iVar18 + -0xc;
            ppppppiVar20 = (int ******)((int)ppppppiVar29 + 1);
            pppppppiVar10 = pppppppiVar10 + 3;
          } while ((char)((0 < iVar9) - (iVar9 < 0)) == '\x01');
          if (0 < iVar9 == iVar9 < 0) {
            local_60[0] = local_60[0] & 0xffffff00;
            if (local_2c4 == (int *******)0x0) {
              local_ec = (int *******)0x0;
              local_f0 = pppppppiVar28;
              local_e8 = (int *******)ppppppiVar20;
              FUN_01601610(&local_290,&local_f0,local_60);
            }
            else {
              local_140 = (int *******)pppppppiVar28[(int)ppppppiVar29 + 0x45];
              if (local_2c4 != (int *******)&DAT_00000001) {
                pppppppiVar28 = (int *******)&DAT_00000001;
                do {
                  pppppppiVar28 = (int *******)((int)pppppppiVar28 + 1);
                  local_140 = (int *******)local_140[*(ushort *)((int)local_140 + 0x10e) + 0x44];
                } while (local_2c4 != pppppppiVar28);
              }
              local_13c = (int *******)0x0;
              local_138 = (int *******)(*(ushort *)((int)local_140 + 0x10e) - 1);
              FUN_01601610(&local_290,&local_140,local_60);
              pppppppiVar28 = local_278;
              if (local_270 < *(ushort *)((int)local_278 + 0x10e)) {
                uVar26 = local_270;
                pppppppiVar10 = local_278;
              }
              else {
                do {
                  pppppppiVar10 = (int *******)*pppppppiVar28;
                  uVar26 = (uint)*(ushort *)(pppppppiVar28 + 0x43);
                  pppppppiVar28 = pppppppiVar10;
                } while (*(ushort *)((int)pppppppiVar10 + 0x10e) <= uVar26);
              }
              pppppppiVar11 = (int *******)pppppppiVar10[uVar26 * 3 + 3];
              pppppppiVar28 = (int *******)pppppppiVar10[uVar26 * 3 + 1];
              pppppppiVar13 = (int *******)pppppppiVar10[uVar26 * 3 + 2];
              pppppppiVar10[uVar26 * 3 + 1] = (int ******)local_290;
              pppppppiVar10[uVar26 * 3 + 2] = (int ******)local_28c;
              pppppppiVar25 = (int *******)pppppppiVar10[uVar26 * 3 + 0x22];
              pppppppiVar37 = (int *******)pppppppiVar10[uVar26 * 3 + 0x23];
              pppppppiVar16 = (int *******)pppppppiVar10[uVar26 * 3 + 0x24];
              pppppppiVar10[uVar26 * 3 + 0x22] = (int ******)local_284;
              pppppppiVar10[uVar26 * 3 + 3] = (int ******)local_288;
              pppppppiVar10[uVar26 * 3 + 0x23] = (int ******)local_280;
              pppppppiVar10[uVar26 * 3 + 0x24] = (int ******)local_27c;
              local_290 = pppppppiVar28;
              local_28c = pppppppiVar13;
              local_288 = pppppppiVar11;
              local_284 = pppppppiVar25;
              local_280 = pppppppiVar37;
              local_27c = pppppppiVar16;
            }
            local_f0 = local_290;
            local_ec = local_28c;
            local_e8 = local_288;
            local_e4 = local_284;
            local_e0 = local_280;
            local_dc = local_27c;
            local_50 = local_50 - 1;
            if ((local_60[0] & 0xff) == 1) {
              if (pppppppiVar17 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_00410b17,0x21,&DAT_018ab338);
              }
              local_54 = (int *******)((int)pppppppiVar17 + -1);
              local_58 = (int *******)pppppppiVar5[0x44];
              *local_58 = (int ******)0x0;
              thunk_FUN_016d3fb4();
            }
            pppppppiVar5 = local_e0;
            pppppppiVar17 = local_e4;
            if (local_f0 != (int *******)&DAT_80000000) {
              if (local_f0 != (int *******)0x0) {
                thunk_FUN_016d3fb4(local_ec);
              }
              if (((uint)pppppppiVar17 & 0x7fffffff) == 0) goto LAB_015fd030;
              goto LAB_015fd02c;
            }
          }
          else {
joined_r0x015fd1d4:
            if (local_2c4 != (int *******)0x0) goto LAB_015fd1d8;
          }
        }
      }
      else {
        iVar34 = piVar24[uVar26 * 3 + 2];
        pppppppiVar28 = (int *******)piVar24[uVar26 * 3 + 3];
        pppppppiVar17 = (int *******)&DAT_00000001;
        pppppppiVar5 = (int *******)&DAT_00000001;
        if ((pppppppiVar28 != (int *******)0x0) &&
           (pppppppiVar5 = (int *******)thunk_FUN_016d4a50(pppppppiVar28),
           pppppppiVar5 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pppppppiVar28);
        }
        FUN_016dd1aa(pppppppiVar5,iVar34,pppppppiVar28);
        iVar34 = piVar24[uVar26 * 3 + 0x23];
        pppppppiVar10 = (int *******)piVar24[uVar26 * 3 + 0x24];
        local_f0 = pppppppiVar28;
        local_ec = pppppppiVar5;
        local_e8 = pppppppiVar28;
        if ((pppppppiVar10 != (int *******)0x0) &&
           (pppppppiVar17 = (int *******)thunk_FUN_016d4a50(pppppppiVar10),
           pppppppiVar17 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pppppppiVar10);
        }
        FUN_016dd1aa(pppppppiVar17,iVar34,pppppppiVar10);
        local_290 = pppppppiVar10;
        local_28c = pppppppiVar17;
        local_288 = pppppppiVar10;
        FUN_016009c0(&local_140,&local_58,&local_f0,&local_290);
        if (((uint)local_140 & 0x7fffffff) != 0) {
          pppppppiVar5 = local_13c;
LAB_015fd02c:
          thunk_FUN_016d3fb4(pppppppiVar5);
        }
      }
LAB_015fd030:
      piVar6 = (int *)0x0;
      iVar32 = iVar32 + -1;
    } while (iVar32 != 0);
  }
  uVar26 = local_50;
  pppppppiVar17 = local_54;
  pppppppiVar5 = local_58;
  uVar7 = 0;
  pppppppiVar28 = (int *******)(local_50 + 1);
  bVar39 = (int *******)0x3ffffffe < pppppppiVar28;
  bVar38 = local_50 == 0x3ffffffe;
  uVar19 = (int)pppppppiVar28 * 4;
  if (!bVar39 || bVar38) {
    bVar39 = 0x7ffffffb < uVar19;
    bVar38 = uVar19 == 0x7ffffffc;
  }
  if (bVar39 && !bVar38) {
LAB_015fd000:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,uVar19);
  }
  if (uVar19 == 0) {
    local_13c = (int *******)&DAT_00000004;
    local_140 = (int *******)0x0;
  }
  else {
    pppppppiVar10 = (int *******)thunk_FUN_016d4a50(uVar19);
    if (pppppppiVar10 == (int *******)0x0) {
      uVar7 = 4;
      goto LAB_015fd000;
    }
    local_138 = (int *******)0x0;
    local_140 = pppppppiVar28;
    local_13c = pppppppiVar10;
    if (pppppppiVar28 != (int *******)0x0) goto LAB_015fd4f0;
  }
  local_138 = (int *******)0x0;
  FUN_015f72d0(&local_140);
LAB_015fd4f0:
  *local_13c = (int ******)0x0;
  local_30 = (int *******)&DAT_00000001;
  if (pppppppiVar5 == (int *******)0x0) {
    uVar26 = 0;
  }
  local_27c = (int *******)0x0;
  local_278 = pppppppiVar5;
  pppppppiStack_274 = pppppppiVar17;
  local_38 = local_140;
  local_290 = pppppppiVar5;
  if (pppppppiVar5 != (int *******)0x0) {
    local_290 = (int *******)&DAT_00000001;
  }
  local_28c = (int *******)0x0;
  local_288 = pppppppiVar5;
  local_284 = pppppppiVar17;
  local_34 = local_13c;
  local_280 = local_290;
  local_270 = uVar26;
LAB_015fd7d4:
  FUN_01601d5c(&local_f0,&local_290);
  pppppppiVar5 = extraout_r1;
  pppppppiVar17 = local_f0;
  if (local_f0 != (int *******)0x0) {
    pppppppiVar17 = local_f0 + (int)local_e8 * 3;
    pppppppiVar5 = (int *******)pppppppiVar17[1];
  }
  if (local_f0 == (int *******)0x0 || pppppppiVar5 == (int *******)&DAT_80000000) {
    while( true ) {
      FUN_01601d5c(&local_f0,&local_290);
      pppppppiVar17 = local_e8;
      pppppppiVar5 = local_f0;
      if (local_f0 == (int *******)0x0) break;
      if (local_f0[(int)local_e8 * 3 + 1] != (int ******)0x0) {
        thunk_FUN_016d3fb4(local_f0[(int)local_e8 * 3 + 2]);
      }
      if (pppppppiVar5[(int)pppppppiVar17 * 3 + 0x22] != (int ******)0x0) {
        thunk_FUN_016d3fb4(pppppppiVar5[(int)pppppppiVar17 * 3 + 0x23]);
      }
    }
    cVar3 = (char)param_2[0x1e];
    local_f0 = (int *******)0x0;
    local_48 = local_38;
    pppppppiStack_40 = local_30;
    local_44 = local_34;
    goto joined_r0x015fcbb4;
  }
  ppppppiVar33 = pppppppiVar17[0x22];
  ppppppiVar20 = pppppppiVar17[0x23];
  local_13c = (int *******)pppppppiVar17[2];
  pppppppiVar28 = (int *******)pppppppiVar17[3];
  ppppppiVar29 = pppppppiVar17[0x24];
  uVar19 = (int)ppppppiVar29 + 2;
  local_140 = pppppppiVar5;
  pppppppiVar17 = pppppppiVar28;
  local_138 = pppppppiVar28;
  if ((uint)((int)pppppppiVar5 - (int)pppppppiVar28) < uVar19) {
    if (CARRY4(uVar19,(uint)pppppppiVar28)) {
      pppppppiVar17 = (int *******)0x0;
LAB_015fe72c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(pppppppiVar17,pppppppiVar5);
    }
    FUN_015bf51c(&local_f0,pppppppiVar5,local_13c,(int *******)(uVar19 + (int)pppppppiVar28),1,1);
    if (local_f0 == (int *******)&DAT_00000001) {
      pppppppiVar17 = local_ec;
      pppppppiVar5 = local_e8;
      goto LAB_015fe72c;
    }
    local_140 = (int *******)(uVar19 + (int)pppppppiVar28);
    local_13c = local_ec;
    pppppppiVar17 = local_138;
  }
  local_138 = pppppppiVar28;
  if (local_140 == pppppppiVar28) {
    local_138 = pppppppiVar17;
    FUN_015bf41c(&local_140,pppppppiVar28,1,1,1);
  }
  pcVar36 = (char *)((int)local_138 + 1);
  *(char *)((int)local_13c + (int)local_138) = '=';
  local_138 = (int *******)pcVar36;
  if ((int ******)((int)local_140 - (int)pcVar36) < ppppppiVar29) {
    FUN_015bf41c(&local_140,pcVar36,ppppppiVar29,1,1);
  }
  pppppppiVar11 = local_138;
  pppppppiVar10 = local_13c;
  pppppppiVar28 = local_140;
  FUN_016dd1aa((char *)((int)local_13c + (int)local_138),ppppppiVar20,ppppppiVar29);
  pppppppiVar11 = (int *******)((int)pppppppiVar11 + (int)ppppppiVar29);
  pppppppiVar5 = pppppppiVar11;
  pppppppiVar17 = pppppppiVar10;
  if (&DAT_00000007 < pppppppiVar11) {
    uVar19 = (uint)((int)pppppppiVar10 + 3) & 0xfffffffc;
    pppppppiVar5 = (int *******)(uVar19 - (int)pppppppiVar10);
    if (pppppppiVar5 == (int *******)0x0) {
      pppppppiVar5 = (int *******)0x0;
      goto LAB_015fd6d8;
    }
    iVar32 = (int)pppppppiVar10 - uVar19;
    do {
      if (*(char *)pppppppiVar17 == '\0') goto LAB_015fd79c;
      bVar38 = iVar32 != -1;
      iVar32 = iVar32 + 1;
      pppppppiVar17 = (int *******)((int)pppppppiVar17 + 1);
    } while (bVar38);
    for (; pppppppiVar5 <= pppppppiVar11 + -2; pppppppiVar5 = pppppppiVar5 + 2) {
LAB_015fd6d8:
      uVar26 = *(uint *)((int)pppppppiVar10 + (int)pppppppiVar5);
      uVar19 = ((uint *)((int)pppppppiVar10 + (int)pppppppiVar5))[1];
      if (((0x1010100 - uVar26 | uVar26) & 0x80808080 & (0x1010100 - uVar19 | uVar19)) != 0x80808080
         ) break;
    }
    iVar32 = (int)pppppppiVar11 - (int)pppppppiVar5;
    if (iVar32 != 0) {
      pcVar36 = (char *)((int)pppppppiVar10 + (int)pppppppiVar5);
      do {
        if (*pcVar36 == '\0') goto LAB_015fd79c;
        iVar32 = iVar32 + -1;
        pcVar36 = pcVar36 + 1;
      } while (iVar32 != 0);
    }
  }
  else {
    for (; pppppppiVar5 != (int *******)0x0; pppppppiVar5 = (int *******)((int)pppppppiVar5 + -1)) {
      if (*(char *)pppppppiVar17 == '\0') goto LAB_015fd79c;
      pppppppiVar17 = (int *******)((int)pppppppiVar17 + 1);
    }
  }
  local_ec = pppppppiVar10;
  local_f0 = pppppppiVar28;
  local_e8 = pppppppiVar11;
  pppppppiVar10 = (int *******)FUN_00600c38(&local_f0);
  goto LAB_015fd748;
LAB_015fcda4:
  pppppppiVar17 = (int *******)(pcVar27 + 1);
  if (pppppppiVar5 < pppppppiVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,pppppppiVar17,pppppppiVar5,&DAT_018aac6c);
  }
  if (pppppppiVar17 == (int *******)0x0) {
    pppppppiVar28 = (int *******)&DAT_00000001;
  }
  else {
    pppppppiVar28 = (int *******)thunk_FUN_016d4a50(pppppppiVar17);
    if (pppppppiVar28 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppppppiVar17);
    }
  }
  FUN_016dd1aa(pppppppiVar28,iVar34,pppppppiVar17);
  pcVar27 = pcVar27 + 2;
  if (pppppppiVar5 <= pppppppiVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(pcVar27,pppppppiVar5,pppppppiVar5,&DAT_018aac5c);
  }
  pppppppiVar5 = (int *******)((int)pppppppiVar5 - (int)pcVar27);
  pppppppiVar10 = (int *******)&DAT_00000001;
  if ((pppppppiVar5 != (int *******)0x0) &&
     (pppppppiVar10 = (int *******)thunk_FUN_016d4a50(pppppppiVar5),
     pppppppiVar10 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,pppppppiVar5);
  }
  FUN_016dd1aa(pppppppiVar10,pcVar27 + iVar34,pppppppiVar5);
  if (pppppppiVar17 != (int *******)&DAT_80000000) {
    local_290 = pppppppiVar17;
    local_28c = pppppppiVar28;
    local_288 = pppppppiVar17;
    local_284 = pppppppiVar5;
    local_280 = pppppppiVar10;
    local_27c = pppppppiVar5;
    if (local_2c8 == local_f0) {
      FUN_015f3888(&local_f0);
      local_2c4 = local_ec;
    }
    local_e8 = (int *******)((int)local_2c8 + 1);
    pppppppiVar5 = local_2c4 + (int)local_2c8 * 6;
    *pppppppiVar5 = (int ******)local_290;
    pppppppiVar5[1] = (int ******)local_28c;
    pppppppiVar5[2] = (int ******)local_288;
    pppppppiVar5[3] = (int ******)local_284;
    pppppppiVar5[4] = (int ******)local_280;
    pppppppiVar5[5] = (int ******)local_27c;
    local_2c8 = local_e8;
  }
LAB_015fcc84:
  piVar6 = piVar6 + 1;
  iVar34 = *piVar6;
  if (iVar34 == 0) goto LAB_015fce78;
  goto LAB_015fcc90;
LAB_015fd1d8:
  local_2c4 = (int *******)((int)local_2c4 + -1);
  pppppppiVar28 = (int *******)pppppppiVar28[(int)(ppppppiVar20 + 0x11)];
  goto LAB_015fd130;
LAB_015fd79c:
  if (pppppppiVar28 != (int *******)0x0) {
    if (pppppppiVar28 == (int *******)&DAT_80000000) {
LAB_015fd748:
      pppppppiVar5 = local_30;
      if (local_30 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0xffffffff,0,&DAT_018aaefc);
      }
      local_34[(int)((int)local_30 + -1)] = (int ******)pppppppiVar10;
      if (local_30 == local_38) {
        FUN_015f72d0(&local_38);
      }
      local_34[(int)pppppppiVar5] = (int ******)0x0;
      local_30 = (int *******)((int)pppppppiVar5 + 1);
      goto joined_r0x015fd7c8;
    }
    thunk_FUN_016d3fb4(pppppppiVar10);
  }
  *(undefined1 *)(param_2 + 0x1e) = 1;
joined_r0x015fd7c8:
  if (ppppppiVar33 != (int ******)0x0) {
    thunk_FUN_016d3fb4(ppppppiVar20);
  }
  goto LAB_015fd7d4;
}

