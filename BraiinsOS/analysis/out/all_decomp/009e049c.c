// FUN_009e049c @ 009e049c size=2804 calls_out=19 calls_in=0
// strings: lock poisonedPatternIDError | Span not found; this is a bugnewtime.busytime.idleenter

/* WARNING: Type propagation algorithm not settling */

void FUN_009e049c(int param_1,undefined4 param_2,uint *****param_3,undefined4 *****param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  uint ****ppppuVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint ******ppppppuVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 ******ppppppuVar15;
  uint uVar16;
  uint *puVar17;
  uint ****ppppuVar18;
  undefined1 uVar19;
  int iVar20;
  int *piVar21;
  uint ****ppppuVar22;
  uint *****pppppuVar23;
  uint *puVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined4 *****pppppuVar27;
  int local_14c;
  int local_148;
  uint local_140;
  uint local_128 [2];
  undefined4 ******local_120;
  undefined *local_11c;
  uint *****local_118;
  undefined *local_10c;
  uint *****local_108;
  uint ******local_104;
  uint local_100;
  uint local_f8;
  uint local_f4;
  undefined4 ******local_f0;
  uint local_ec;
  uint ******local_e8;
  undefined4 local_e4;
  uint *****local_e0;
  undefined4 *****local_dc;
  undefined4 ******local_d8;
  undefined4 *****local_d4;
  uint *****local_d0;
  uint ******local_cc;
  undefined4 *******local_c8;
  undefined4 ******local_c4;
  undefined4 *****local_c0;
  uint *local_bc;
  undefined *local_b8;
  undefined4 ******local_b0;
  undefined *local_ac;
  uint *****local_a8;
  undefined4 *****local_a4;
  undefined4 local_a0;
  undefined4 ******local_98;
  undefined4 local_94;
  uint *****local_90;
  undefined4 *****local_8c;
  undefined4 local_88;
  uint ****local_80;
  undefined4 local_7c;
  uint *****local_78;
  undefined4 *****local_74;
  undefined4 local_70;
  uint ******local_6c;
  undefined4 local_68;
  undefined4 ******local_64;
  uint *****local_60;
  undefined4 *****local_5c;
  uint *****local_58;
  undefined4 *****local_54;
  undefined4 *******local_50;
  uint ****local_4c;
  uint ******local_44;
  undefined4 ******local_40;
  uint ******local_3c;
  uint *****local_38;
  undefined4 *****local_34;
  undefined4 *******local_30;
  undefined4 ******local_2c;
  undefined4 ******local_28;
  
  uVar4 = *(undefined4 *)(param_1 + 0x118);
  uVar12 = *(undefined4 *)(param_1 + 0x11c);
  pppppuVar23 = param_3;
  pppppuVar27 = param_4;
  FUN_009f418c(local_128,uVar12,param_5,param_6,param_7);
  if ((local_128[0] & 1) == 0) {
    return;
  }
  local_d8 = (undefined4 ******)param_3;
  local_d4 = param_4;
  iVar5 = FUN_016aa9d4(param_1 + 0x10,&local_d8);
  if (iVar5 == 0) goto LAB_009e0778;
  puVar24 = (uint *)(param_1 + 0x30);
  if (*puVar24 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar24);
    if (!bVar2) goto LAB_009e0e64;
    *puVar24 = 0x3fffffff;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009e0e64:
    FUN_015f5ff4(puVar24);
  }
  local_140 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  else {
    local_140 = FUN_015bf3f8();
    local_140 = local_140 ^ 1;
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (cVar1 == '\0') {
    uVar6 = FUN_009ee3b8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),param_3,
                         param_4,pppppuVar23,pppppuVar27,uVar4,uVar12);
    uVar9 = uVar6 >> 0x19;
    iVar5 = *(int *)(param_1 + 0x40);
    uVar16 = *(uint *)(param_1 + 0x44);
    local_148 = 0;
    while( true ) {
      uVar6 = uVar16 & uVar6;
      uVar7 = *(uint *)(iVar5 + uVar6);
      uVar8 = uVar7 ^ uVar9 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar25 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar16;
        puVar13 = (undefined4 *)(iVar5 + -0x18 + uVar25 * -0x18);
        uVar8 = uVar8 - 1 & uVar8;
        if (param_3 == (uint *****)*puVar13 && param_4 == (undefined4 *****)puVar13[1]) {
          iVar14 = ((int)(uVar25 * 0x18) >> 3) * -0x55555555;
          puVar17 = (uint *)(iVar5 + (iVar14 - 4U & uVar16));
          uVar9 = *puVar17;
          uVar6 = *(uint *)(iVar5 + iVar14) & 0x80808080 & *(uint *)(iVar5 + iVar14) << 1;
          uVar19 = 0x80;
          if (((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) +
              ((uint)LZCOUNT(uVar9 & 0x80808080 & uVar9 << 1) >> 3) < 4) {
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
            uVar19 = 0xff;
          }
          iVar10 = iVar5 + uVar25 * -0x18;
          *(undefined1 *)(iVar5 + iVar14) = uVar19;
          iVar5 = *(int *)(param_1 + 0x4c);
          *(undefined1 *)(puVar17 + 1) = uVar19;
          iVar20 = *(int *)(iVar10 + -0xc);
          uVar12 = *(undefined4 *)(iVar10 + -8);
          uVar4 = *(undefined4 *)(iVar10 + -4);
          iVar14 = *(int *)(iVar10 + -0x10);
          *(int *)(param_1 + 0x4c) = iVar5 + -1;
          if ((iVar14 != 6) && (FUN_00a05464(uVar12,uVar4), iVar20 != 0)) {
            thunk_FUN_016d3fb4(uVar12);
          }
          goto LAB_009e0728;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_148 = local_148 + 4;
      uVar6 = uVar6 + local_148;
    }
LAB_009e0728:
    if (((local_140 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar24;
      bVar2 = (bool)hasExclusiveAccess(puVar24);
    } while (!bVar2);
    *puVar24 = uVar9 + 0xc0000001;
    if (0x3fffffff < uVar9 + 0xc0000001) {
      FUN_015e9814(puVar24);
    }
  }
  else {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar5 = FUN_015bf3f8(), iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_0186b81c);
    }
    FUN_016a6218(puVar24,local_140);
  }
LAB_009e0778:
  if ((*(byte *)(param_1 + 0x139) & 8) == 0) {
    return;
  }
  if ((local_118 != (uint *****)0x0) &&
     (FUN_016a4f80(&local_40,local_118,(undefined *)((int)param_3 + -1)),
     local_40 != (undefined4 ******)0x0)) {
    local_cc = local_3c;
    local_c8 = (undefined4 *******)local_38;
    local_d4 = (undefined4 *****)0x0;
    local_d8 = (undefined4 ******)0x0;
    local_d0 = (uint *****)local_40;
    if (((uint)*local_40 & (uint)local_120) == 0 && ((uint)local_40[1] & (uint)local_11c) == 0) {
      local_100 = (uint)local_38;
      local_104 = local_3c;
      local_108 = (uint *****)local_40;
      local_10c = local_11c;
      uVar26 = FUN_016a108c();
      puVar24 = (uint *)((ulonglong)uVar26 >> 0x20);
      piVar21 = (int *)uVar26;
      if (piVar21[3] != 0) {
        iVar5 = *piVar21;
        uVar9 = piVar21[1];
        local_14c = 0;
        uVar6 = uVar9 & 0x852d8214;
        while( true ) {
          uVar7 = *(uint *)(iVar5 + uVar6);
          uVar16 = (uVar7 & 0x80808080 ^ 0x80808080) & (uVar7 ^ 0x42424242) + 0xfefefeff;
          while (uVar16 != 0) {
            uVar8 = uVar6 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                    uVar9;
            piVar21 = (int *)(iVar5 + -0x18 + uVar8 * -0x18);
            uVar16 = uVar16 - 1 & uVar16;
            if ((*piVar21 == 0x51809c7c && piVar21[2] == -0x7ad27dec) &&
                (piVar21[1] == 0x4a853532 && piVar21[3] == 0x7af5abf6)) {
              iVar5 = iVar5 + uVar8 * -0x18;
              puVar17 = *(uint **)(iVar5 + -8);
              (**(code **)(*(int *)(iVar5 + -4) + 0xc))(&local_d8,puVar17);
              if ((local_d8 == (undefined4 ******)0x51809c7c && local_d0 == (uint *****)0x852d8214)
                  && (local_d4 == (undefined4 *****)0x4a853532 &&
                     local_cc == (uint ******)0x7af5abf6)) {
                uVar7 = *puVar17;
                uVar8 = puVar17[1];
                uVar9 = puVar17[8];
                pppppuVar23 = (uint *****)puVar17[6];
                uVar6 = puVar17[7];
                ppppppuVar15 = (undefined4 ******)puVar17[2];
                uVar16 = puVar17[3];
                FUN_015f3b0c(&local_d8,1);
                local_60 = (uint *****)local_d8;
                local_5c = local_d4;
                local_58 = local_d0;
                local_40 = (undefined4 ******)pppppuVar23;
                local_3c = (uint ******)uVar6;
                local_38 = (uint *****)uVar9;
                FUN_015f3c24(&local_d8,&local_60,&local_40);
                uVar9 = (uint)(ZEXT48(local_d0) * 1000000000);
                local_a0 = 0;
                local_e8 = (uint ******)&DAT_0186b594;
                local_b0 = (undefined4 ******)&DAT_0186b594;
                uVar6 = uVar7 + uVar9;
                uVar9 = uVar8 + (int)local_cc * 1000000000 +
                                (int)(ZEXT48(local_d0) * 1000000000 >> 0x20) +
                        (uint)CARRY4(uVar7,uVar9);
                if (((uint)local_d8 & 1) != 0) {
                  uVar6 = uVar7;
                  uVar9 = uVar8;
                }
                local_98 = (undefined4 ******)&DAT_0186b594;
                local_f4 = uVar9 + CARRY4(uVar6,(uint)local_c8);
                local_f8 = uVar6 + (int)local_c8;
                if (((uint)local_d8 & 1) != 0) {
                  local_f4 = uVar9;
                  local_f8 = uVar6;
                }
                local_4c = local_108[0xc];
                local_dc = (undefined4 *****)local_4c[10];
                local_e0 = (uint *****)local_4c[9];
                local_88 = 1;
                local_e4 = 3;
                local_ac = (undefined *)0x3;
                local_94 = 3;
                local_b8 = &DAT_0186b5b4;
                local_c4 = (undefined4 ******)&DAT_0186b5b4;
                local_c8 = &local_f0;
                local_cc = (uint ******)&local_98;
                local_68 = 3;
                local_7c = 3;
                local_80 = (uint ****)&DAT_0186b594;
                local_bc = &local_f8;
                local_d8 = &local_b0;
                local_c0 = &local_80;
                local_64 = &local_e8;
                local_50 = &local_6c;
                local_70 = 2;
                local_d0 = (uint *****)&DAT_0186b55c;
                local_d4 = (undefined4 *****)&DAT_0186b5ac;
                local_5c = (undefined4 *****)0x0;
                local_60 = (undefined4 *****)0x2;
                DataMemoryBarrier(0xb);
                do {
                  uVar9 = *puVar24;
                  bVar2 = (bool)hasExclusiveAccess(puVar24);
                } while (!bVar2);
                *puVar24 = uVar9 - 1;
                local_f0 = ppppppuVar15;
                local_ec = uVar16;
                local_a8 = local_e0;
                local_a4 = local_dc;
                local_90 = local_e0;
                local_8c = local_dc;
                local_78 = local_e0;
                local_74 = local_dc;
                local_6c = (uint ******)&local_d8;
                local_58 = param_3;
                local_54 = param_4;
                if ((uVar9 - 1 & 0xbfffffff) == 0x80000000) {
                  FUN_015e9814(puVar24);
                }
                ppppuVar18 = local_108[0xe];
                pppppuVar23 = local_108 + 0xe;
                DataMemoryBarrier(0xb);
                do {
                  if (((uint)ppppuVar18 & 3) == 2) {
                    local_28 = (undefined4 ******)0x2;
                    local_3c = (uint ******)FUN_00facc48;
                    local_40 = &local_28;
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
                  }
                  uVar9 = ((uint)ppppuVar18 & 0x3fffffff) >> 2;
                  uVar16 = (uint)ppppuVar18 & 3 ^ 1;
                  ppppuVar22 = (uint ****)((uint)ppppuVar18 & 0xc0000000 | 3);
                  uVar6 = uVar9 ^ 1;
                  if (uVar16 != 0 || uVar6 != 0) {
                    ppppuVar22 = (uint ****)(uVar9 * 4 - 4 | (uint)ppppuVar18 & 0xc0000003);
                  }
                  ppppuVar3 = *pppppuVar23;
                  if (*pppppuVar23 == ppppuVar18) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar2 = (bool)hasExclusiveAccess(pppppuVar23);
                      if (bVar2) {
                        *pppppuVar23 = ppppuVar22;
                        DataMemoryBarrier(0xb);
                        if (uVar16 == 0 && uVar6 == 0) {
                          FUN_009ebe80(local_104,local_100);
                        }
                        local_28 = &local_60;
                        local_3c = (uint ******)local_11c;
                        local_2c = &local_28;
                        local_30 = &local_44;
                        ppppppuVar11 = (uint ******)&local_40;
                        local_44 = (uint ******)(param_1 + 0x120);
                        local_40 = local_120;
                        local_38 = local_118;
                        goto LAB_009e0e54;
                      }
                      ppppuVar3 = *pppppuVar23;
                    } while (*pppppuVar23 == ppppuVar18);
                  }
                  ppppuVar18 = ppppuVar3;
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                } while( true );
              }
              goto LAB_009e0cac;
            }
          }
          if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
          local_14c = local_14c + 4;
          uVar6 = uVar6 + local_14c & uVar9;
        }
      }
LAB_009e0cac:
      local_2c = (undefined4 ******)local_108[0xc];
      local_a8 = (uint *****)&DAT_0186b55c;
      local_b0 = &local_60;
      local_90 = &local_80;
      local_78 = local_2c[9];
      local_74 = local_2c[10];
      local_98 = &local_b0;
      local_80 = (uint ****)&DAT_018aeb80;
      local_60 = (uint *****)&DAT_018aeb80;
      local_50 = (undefined4 *******)0x0;
      local_3c = (uint ******)0x0;
      local_30 = &local_98;
      local_7c = 1;
      local_ac = &DAT_0186b5ac;
      local_5c = (undefined4 *****)0x1;
      local_94 = 1;
      local_40 = (undefined4 ******)&SUB_00000002;
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar24;
        bVar2 = (bool)hasExclusiveAccess(puVar24);
      } while (!bVar2);
      *puVar24 = uVar9 - 1;
      local_58 = local_78;
      local_54 = local_74;
      local_38 = param_3;
      local_34 = param_4;
      if ((uVar9 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_015e9814(puVar24);
      }
      ppppuVar18 = local_108[0xe];
      pppppuVar23 = local_108 + 0xe;
      DataMemoryBarrier(0xb);
      do {
        if (((uint)ppppuVar18 & 3) == 2) {
          local_e8 = (uint ******)0x2;
          local_d4 = (undefined4 *****)FUN_00facc48;
          local_d8 = &local_e8;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0041504f,&local_d8,&DAT_018ae754);
        }
        uVar9 = ((uint)ppppuVar18 & 0x3fffffff) >> 2;
        uVar16 = (uint)ppppuVar18 & 3 ^ 1;
        ppppuVar22 = (uint ****)((uint)ppppuVar18 & 0xc0000000 | 3);
        uVar6 = uVar9 ^ 1;
        if (uVar16 != 0 || uVar6 != 0) {
          ppppuVar22 = (uint ****)(uVar9 * 4 - 4 | (uint)ppppuVar18 & 0xc0000003);
        }
        ppppuVar3 = *pppppuVar23;
        if (*pppppuVar23 == ppppuVar18) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(pppppuVar23);
            if (bVar2) {
              *pppppuVar23 = ppppuVar22;
              DataMemoryBarrier(0xb);
              if (uVar16 == 0 && uVar6 == 0) {
                FUN_009ebe80(local_104,local_100);
              }
              local_e8 = (uint ******)&local_40;
              local_d4 = (undefined4 *****)local_11c;
              local_c4 = &local_e8;
              local_c8 = &local_6c;
              ppppppuVar11 = (uint ******)&local_d8;
              local_d8 = local_120;
              local_d0 = local_118;
              local_6c = (uint ******)(param_1 + 0x120);
LAB_009e0e54:
              FUN_009e4aa0(ppppppuVar11);
              return;
            }
            ppppuVar3 = *pppppuVar23;
          } while (*pppppuVar23 == ppppuVar18);
        }
        ppppuVar18 = ppppuVar3;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      } while( true );
    }
    FUN_009ee6c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b584);
}

