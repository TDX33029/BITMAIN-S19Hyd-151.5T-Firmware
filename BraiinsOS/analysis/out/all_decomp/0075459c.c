// FUN_0075459c @ 0075459c size=6024 calls_out=20 calls_in=2
// strings: assertion failed: self.has_capacity() | not implemented | chunk not fully encoded

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0075459c(int param_1,int *******param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int *******pppppppiVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int *****pppppiVar6;
  int ******ppppppiVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  undefined4 uVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  int *******pppppppiVar21;
  int *******pppppppiVar22;
  int ******ppppppiVar23;
  int *******pppppppiVar24;
  bool bVar25;
  int *******local_280;
  int *******local_27c;
  int ******local_278;
  int *******local_270;
  int *******local_26c;
  int *******local_268;
  int *******local_264;
  int *******local_260;
  int ******ppppppiStack_25c;
  int *******pppppppiStack_258;
  int ******ppppppiStack_254;
  int *******local_250;
  undefined4 local_24c;
  int *******local_248;
  int *******local_244;
  int *******local_240;
  int ******local_23c;
  int *******local_238;
  int ******ppppppiStack_234;
  int ******ppppppiStack_230;
  int ******local_22c;
  int ******ppppppiStack_228;
  int ******ppppppiStack_224;
  int *******local_220;
  undefined4 uStack_21c;
  int *******local_214;
  undefined1 auStack_210 [176];
  undefined1 auStack_160 [176];
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******local_a4;
  int *******local_a0;
  int ******local_9c;
  int *******local_98;
  int ******ppppppiStack_94;
  int ******ppppppiStack_90;
  int ******local_8c;
  int ******local_88;
  int ******ppppppiStack_84;
  int *******pppppppiStack_80;
  int ******ppppppiStack_7c;
  int ******ppppppiStack_78;
  int *******local_70;
  undefined2 local_6c;
  int *******local_68;
  int *******local_64;
  int *******local_60;
  int *******local_5c;
  int *******local_58;
  int *******local_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c [2];
  
  piVar15 = (int *)(param_1 + 0x70);
  if ((*piVar15 != 4) ||
     ((uint)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac)) < *(uint *)(param_1 + 200))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.has_capacity()",0x25,&DAT_018a65fc);
  }
  local_98 = DAT_018d8a78;
  local_a8 = (int *******)&SUB_00000002;
  if (DAT_018dd947 == '\0') {
    if (DAT_018d8a78[8] == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a660c);
    }
    local_30 = DAT_018d8a78 + 7;
    local_250 = (int *******)*local_30;
    local_270 = (int *******)&local_250;
    local_26c = (int *******)&local_48;
    local_240 = (int *******)0x0;
    local_24c = (int *******)DAT_018d8a78[8];
    local_248 = (int *******)DAT_018d8a78[9];
    local_244 = (int *******)DAT_018d8a78[10];
    local_34 = (int *******)&DAT_00000001;
    local_38 = (int *******)&local_270;
    local_268 = (int *******)&DAT_0185b92c;
    local_48 = param_2;
    FUN_01694880(&local_b0,&local_38);
  }
  local_270 = local_b0;
  local_26c = local_ac;
  local_268 = local_a8;
  local_264 = local_a4;
  local_260 = local_a0;
  ppppppiStack_25c = local_9c;
  pppppppiStack_258 = local_98;
  ppppppiStack_254 = ppppppiStack_94;
  if (local_a8 != (int *******)&SUB_00000002) {
    pppppppiVar3 = local_a4;
    if (((uint)local_a8 & 1) != 0) {
      pppppppiVar3 = (int *******)((int)local_a4 + ((int)local_a0[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_a0[0xc])(pppppppiVar3,&local_270);
  }
  ppppppiVar23 = (int ******)(param_1 + 0xa8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  case 0:
    local_250 = (int *******)param_2[2];
    local_24c = (int *******)param_2[3];
    local_248 = (int *******)param_2[4];
    local_244 = (int *******)param_2[5];
    local_240 = (int *******)param_2[6];
    local_23c = param_2[7];
    local_238 = (int *******)param_2[8];
    ppppppiStack_234 = param_2[9];
    ppppppiStack_230 = param_2[10];
    local_22c = param_2[0xb];
    ppppppiStack_228 = param_2[0xc];
    ppppppiStack_224 = param_2[0xd];
    pppppppiVar21 = (int *******)param_2[0xe];
    uStack_21c = param_2[0xf];
    pppppppiVar3 = (int *******)0x0;
    if (local_250 != (int *******)&SUB_00000002) {
      if (local_250 == (int *******)&DAT_00000001) {
        if ((local_23c == (int ******)0x0) &&
           (pppppppiVar3 = (int *******)((int)local_244 - (int)local_240), local_244 < local_240)) {
          pppppppiVar3 = (int *******)0x0;
        }
      }
      else {
        pppppppiVar3 = local_244;
      }
    }
    if (local_238 < pppppppiVar3) {
      pppppppiVar3 = local_238;
    }
    local_220 = pppppppiVar21;
    if (*(int ********)(param_1 + 0xc0) < pppppppiVar3) {
      if (local_250 == (int *******)&DAT_00000001) {
        if (local_244 != (int *******)0x0) {
          thunk_FUN_016d3fb4(local_248);
        }
      }
      else if (local_250 == (int *******)0x0) {
        (*(code *)local_24c[4])(&local_240,local_248,local_244);
      }
      if (local_268 != (int *******)&SUB_00000002) {
        pppppppiVar3 = local_264;
        if (((uint)local_268 & 1) != 0) {
          pppppppiVar3 = (int *******)((int)local_264 + ((int)local_260[2] - 1U & 0xfffffff8) + 8);
        }
        (*(code *)local_260[0xd])(pppppppiVar3,&local_270);
      }
      FUN_005c3320(&local_270);
      return 2;
    }
    uStack_21c._2_1_ = (undefined1)((uint)uStack_21c >> 0x10);
    uVar2 = uStack_21c._2_1_;
    if (pppppppiVar3 < *(int ********)(param_1 + 0xc4)) {
      pppppppiVar3 = (int *******)0x0;
      if (local_250 != (int *******)&SUB_00000002) {
        if (local_250 == (int *******)&DAT_00000001) {
          if ((local_23c == (int ******)0x0) &&
             (pppppppiVar3 = (int *******)((int)local_244 - (int)local_240), local_244 < local_240))
          {
            pppppppiVar3 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar3 = local_244;
        }
      }
      uVar13 = *(uint *)(param_1 + 0xac);
      if (local_238 < pppppppiVar3) {
        pppppppiVar3 = local_238;
      }
      if ((int *******)(uVar13 ^ 0x7fffffff) < pppppppiVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00408f30,0x2c,&DAT_018a5878);
      }
      iVar10 = *(int *)(param_1 + 0xb0);
      uVar1 = (ushort)((((uint)pppppppiVar3 >> 8 & 0xff) << 0x10) >> 8) |
              (ushort)((uint)pppppppiVar3 >> 0x10) & 0xff;
      if (iVar10 - uVar13 < 3) {
        FUN_00f5f538(ppppppiVar23,3);
        uVar13 = *(uint *)(param_1 + 0xac);
        iVar10 = *(int *)(param_1 + 0xb0);
        puVar11 = (ushort *)(*(int *)(param_1 + 0xa8) + uVar13);
        *puVar11 = uVar1;
        pppppppiVar19 = (int *******)(iVar10 - uVar13);
        *(char *)(puVar11 + 1) = (char)pppppppiVar3;
        if (&SUB_00000002 < pppppppiVar19) goto LAB_0075533c;
        local_b0 = (int *******)0x3;
LAB_00755430:
LAB_00755c00:
        local_ac = pppppppiVar19;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0();
      }
      pppppiVar6 = *ppppppiVar23;
      *(ushort *)((int)pppppiVar6 + uVar13) = uVar1;
      *(char *)((ushort *)((int)pppppiVar6 + uVar13) + 1) = (char)pppppppiVar3;
LAB_0075533c:
      iVar8 = uVar13 + 3;
      *(int *)(param_1 + 0xac) = iVar8;
      if (iVar10 == iVar8) {
        FUN_00f5f538(ppppppiVar23,1);
        pppppppiVar19 = (int *******)0x0;
        iVar8 = *(int *)(param_1 + 0xac);
        iVar10 = *(int *)(param_1 + 0xb0);
        *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar8) = 0;
        if (iVar10 == iVar8) {
          local_b0 = (int *******)&DAT_00000001;
          goto LAB_00755430;
        }
      }
      else {
        *(undefined1 *)((int)*ppppppiVar23 + iVar8) = 0;
      }
      iVar8 = iVar8 + 1;
      *(int *)(param_1 + 0xac) = iVar8;
      if (iVar10 == iVar8) {
        FUN_00f5f538(ppppppiVar23,1);
        iVar8 = *(int *)(param_1 + 0xac);
        iVar10 = *(int *)(param_1 + 0xb0);
        *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar8) = uVar2;
        if (iVar10 == iVar8) {
          pppppppiVar19 = (int *******)0x0;
          local_b0 = (int *******)&DAT_00000001;
          goto LAB_00755c00;
        }
      }
      else {
        *(undefined1 *)((int)*ppppppiVar23 + iVar8) = uVar2;
      }
      iVar8 = iVar8 + 1;
      uVar13 = (int)pppppppiVar21 << 0x18 | ((uint)pppppppiVar21 >> 8 & 0xff) << 0x10 |
               ((uint)pppppppiVar21 >> 0x10 & 0xff) << 8 | (uint)pppppppiVar21 >> 0x18;
      *(int *)(param_1 + 0xac) = iVar8;
      if ((uint)(iVar10 - iVar8) < 4) {
        FUN_00f5f538(ppppppiVar23,4);
        iVar8 = *(int *)(param_1 + 0xac);
        iVar10 = *(int *)(param_1 + 0xb0);
        pppppppiVar19 = (int *******)(iVar10 - iVar8);
        *(uint *)(*(int *)(param_1 + 0xa8) + iVar8) = uVar13;
        if (pppppppiVar19 < &DAT_00000004) {
          local_b0 = (int *******)&DAT_00000004;
          goto LAB_00755430;
        }
      }
      else {
        *(uint *)((int)*ppppppiVar23 + iVar8) = uVar13;
      }
      pppppppiVar21 = local_238;
      pppppppiVar3 = local_250;
      *(int *)(param_1 + 0xac) = iVar8 + 4;
      pppppppiVar19 = (int *******)0x0;
      if (local_250 != (int *******)&SUB_00000002) {
        if (local_250 == (int *******)&DAT_00000001) {
          if ((local_23c == (int ******)0x0) &&
             (pppppppiVar19 = (int *******)((int)local_244 - (int)local_240), local_244 < local_240)
             ) {
            pppppppiVar19 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar19 = local_244;
        }
      }
      if (local_238 < pppppppiVar19) {
        pppppppiVar19 = local_238;
      }
      if (pppppppiVar19 != (int *******)0x0) {
        if (iVar10 != 0) {
          pppppppiVar19 = (int *******)0x0;
          if (local_250 != (int *******)&SUB_00000002) {
            if (local_250 == (int *******)&DAT_00000001) {
              if ((local_23c == (int ******)0x0) &&
                 (pppppppiVar19 = (int *******)((int)local_244 - (int)local_240),
                 local_244 < local_240)) {
                pppppppiVar19 = (int *******)0x0;
              }
            }
            else {
              pppppppiVar19 = local_244;
            }
          }
          if (local_238 < pppppppiVar19) {
            pppppppiVar19 = local_238;
          }
          if ((int *******)(iVar10 - (iVar8 + 4)) < pppppppiVar19) {
            FUN_00f5f538(ppppppiVar23);
          }
          local_27c = local_248;
          local_280 = local_240;
          local_278 = local_23c;
          pppppppiVar20 = local_244;
          do {
            pppppppiVar19 = (int *******)0x0;
            if ((((pppppppiVar3 != (int *******)&SUB_00000002) &&
                 (pppppppiVar19 = pppppppiVar20, pppppppiVar3 == (int *******)&DAT_00000001)) &&
                (pppppppiVar19 = (int *******)0x0, local_278 == (int ******)0x0)) &&
               (pppppppiVar19 = (int *******)((int)pppppppiVar20 - (int)local_280),
               pppppppiVar20 < local_280)) {
              pppppppiVar19 = (int *******)0x0;
            }
            if (pppppppiVar21 < pppppppiVar19) {
              pppppppiVar19 = pppppppiVar21;
            }
            if (pppppppiVar19 == (int *******)0x0) goto LAB_00755a50;
            if (pppppppiVar3 == (int *******)&SUB_00000002) {
              pppppppiVar24 = (int *******)&DAT_00000001;
              pppppppiVar22 = (int *******)0x0;
            }
            else {
              pppppppiVar22 = pppppppiVar20;
              pppppppiVar24 = local_27c;
              if (pppppppiVar3 == (int *******)&DAT_00000001) {
                pppppppiVar24 = local_280;
                if (pppppppiVar20 < local_280) {
                  pppppppiVar24 = pppppppiVar20;
                }
                if (local_278 != (int ******)0x0) {
                  pppppppiVar24 = pppppppiVar20;
                }
                pppppppiVar22 = (int *******)((int)pppppppiVar20 - (int)pppppppiVar24);
                pppppppiVar24 = (int *******)((int)local_27c + (int)pppppppiVar24);
              }
            }
            iVar10 = *(int *)(param_1 + 0xac);
            if (pppppppiVar21 < pppppppiVar22) {
              pppppppiVar22 = pppppppiVar21;
            }
            pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
            if (pppppppiVar19 < pppppppiVar22) {
              FUN_00f5f538(ppppppiVar23,pppppppiVar22);
              iVar10 = *(int *)(param_1 + 0xac);
              pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
            }
            FUN_016dd1aa((int)*ppppppiVar23 + iVar10,pppppppiVar24,pppppppiVar22);
            if (pppppppiVar19 < pppppppiVar22) goto LAB_00755bfc;
            *(undefined1 **)(param_1 + 0xac) = (undefined1 *)(iVar10 + (int)pppppppiVar22);
            if (pppppppiVar3 != (int *******)&SUB_00000002) {
              if (pppppppiVar3 == (int *******)&DAT_00000001) {
                pppppppiVar19 = (int *******)0x0;
                if ((local_278 == (int ******)0x0) &&
                   (pppppppiVar19 = (int *******)((int)pppppppiVar20 - (int)local_280),
                   pppppppiVar20 < local_280)) {
                  pppppppiVar19 = (int *******)0x0;
                }
                if (pppppppiVar19 < pppppppiVar22) goto LAB_00755bfc;
                bVar25 = CARRY4((uint)local_280,(uint)pppppppiVar22);
                local_280 = (int *******)((int)local_280 + (int)pppppppiVar22);
                local_278 = (int ******)((int)local_278 + (uint)bVar25);
                local_240 = local_280;
                local_23c = local_278;
              }
              else {
                local_48 = pppppppiVar22;
                if (pppppppiVar20 < pppppppiVar22) {
                  local_a8 = (int *******)&local_38;
                  local_a4 = (int *******)FUN_007883b8;
                  local_ac = (int *******)FUN_007883b8;
                  local_b0 = (int *******)&local_48;
                  local_38 = pppppppiVar20;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_00584155,&local_b0,&DAT_018a6700);
                }
                pppppppiVar20 = (int *******)((int)pppppppiVar20 - (int)pppppppiVar22);
                local_27c = (int *******)((int)local_27c + (int)pppppppiVar22);
                local_248 = local_27c;
                local_244 = pppppppiVar20;
              }
            }
            pppppppiVar21 = (int *******)((int)pppppppiVar21 - (int)pppppppiVar22);
            local_238 = pppppppiVar21;
          } while( true );
        }
        if (local_250 == (int *******)0x0) {
          pppppppiVar3 = local_244;
LAB_007559a8:
          uVar14 = 0;
          if (local_238 < pppppppiVar3) {
            pppppppiVar3 = local_238;
          }
          if ((int)pppppppiVar3 < 0) {
LAB_007559bc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar14,pppppppiVar3);
          }
          if (pppppppiVar3 == (int *******)0x0) goto LAB_007555b0;
          pppppppiVar21 = (int *******)thunk_FUN_016d4a50(pppppppiVar3);
          if (pppppppiVar21 == (int *******)0x0) {
            uVar14 = 1;
            goto LAB_007559bc;
          }
        }
        else {
          if ((local_250 != (int *******)&SUB_00000002) && (local_23c == (int ******)0x0)) {
            pppppppiVar3 = (int *******)((int)local_244 - (int)local_240);
            if (local_244 < local_240) {
              pppppppiVar3 = (int *******)0x0;
            }
            goto LAB_007559a8;
          }
LAB_007555b0:
          pppppppiVar21 = (int *******)&DAT_00000001;
          pppppppiVar3 = (int *******)0x0;
        }
        uVar13 = 0x20 - LZCOUNT((uint)pppppppiVar3 >> 10);
        local_44 = (int *******)0x0;
        if (6 < uVar13) {
          uVar13 = 7;
        }
        local_3c = (int *******)(uVar13 << 2 | 1);
        local_48 = pppppppiVar21;
        local_40 = pppppppiVar3;
        FUN_007560b4(&local_48,&local_250,pppppppiVar3);
        pppppppiVar3 = local_3c;
        if (((uint)local_3c & 1) == 0) {
          pppppppiVar3 = (int *******)&DAT_018ad580;
        }
        else {
          local_54 = (int *******)((int)local_48 - ((uint)local_3c >> 5));
          local_50 = (int *******)((int)local_44 + ((uint)local_3c >> 5));
          local_58 = (int *******)((int)local_40 + ((uint)local_3c >> 5));
          FUN_00f5ef18(&local_38,&local_58);
          local_70 = (int *******)((uint)pppppppiVar3 >> 5);
          if (local_30 < local_70) {
            local_a8 = (int *******)&local_68;
            local_68 = local_30;
            local_a4 = (int *******)FUN_007883b8;
            local_ac = (int *******)FUN_007883b8;
            local_b0 = (int *******)&local_70;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_b0,&DAT_018a6700);
          }
          local_44 = (int *******)((int)local_30 - (int)local_70);
          local_48 = (int *******)((int)local_34 + (int)local_70);
          pppppppiVar3 = local_38;
          local_3c = local_2c[0];
        }
        pppppppiVar21 = local_48;
        local_48 = pppppppiVar3;
        local_40 = local_44;
        local_44 = pppppppiVar21;
        iVar10 = (*(code *)pppppppiVar3[3])(&local_3c);
        pppppppiVar21 = local_40;
        pppppppiVar3 = local_44;
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0xac);
          pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
          local_ac = local_48;
          local_a8 = local_44;
          local_a4 = local_40;
          local_a0 = local_3c;
          local_2c[0] = local_3c;
          local_b0 = (int *******)&DAT_00000001;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          if (pppppppiVar19 < local_40) {
            FUN_00f5f538(ppppppiVar23,local_40);
            iVar10 = *(int *)(param_1 + 0xac);
            pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
          }
          FUN_016dd1aa((int)*ppppppiVar23 + iVar10,pppppppiVar3,pppppppiVar21);
          if (pppppppiVar19 < pppppppiVar21) {
            local_48 = pppppppiVar21;
            local_44 = pppppppiVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar23 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar10 + (int)pppppppiVar21;
          (*(code *)ppppppiVar23)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          (*(code *)local_48[2])(&local_ac,local_2c);
          local_b0 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar9 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar9;
              bVar25 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar25);
            *piVar9 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_00755a44;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_00755a44:
            thunk_FUN_016d3fb4(piVar15);
          }
          *ppppppiVar23 = (int *****)local_ac;
          *(int ********)(param_1 + 0xac) = local_a8;
          *(int ********)(param_1 + 0xb0) = local_a4;
          *(int ********)(param_1 + 0xb4) = local_a0;
        }
      }
LAB_00755a50:
      local_214 = (int *******)0x0;
      if ((((local_250 != (int *******)&SUB_00000002) &&
           (local_214 = local_244, local_250 == (int *******)&DAT_00000001)) &&
          (local_214 = (int *******)0x0, local_23c == (int ******)0x0)) &&
         (local_214 = (int *******)((int)local_244 - (int)local_240), local_244 < local_240)) {
        local_214 = (int *******)0x0;
      }
      if (local_238 < local_214) {
        local_214 = local_238;
      }
      if (local_214 != (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_214,&DAT_00568f30,"chunk not fully encoded",0x2f,&DAT_018a662c);
      }
      local_b0 = local_250;
      local_ac = local_24c;
      local_a8 = local_248;
      local_a4 = local_244;
      local_a0 = local_240;
      local_9c = local_23c;
      local_98 = local_238;
      ppppppiStack_94 = ppppppiStack_234;
      ppppppiStack_90 = ppppppiStack_230;
      local_8c = local_22c;
      local_88 = ppppppiStack_228;
      ppppppiStack_84 = ppppppiStack_224;
      pppppppiStack_80 = local_220;
      ppppppiStack_7c = uStack_21c;
      piVar15 = (int *)(param_1 + 0x38);
      iVar10 = *piVar15;
      if (iVar10 != 3) {
        if (iVar10 == 1) {
          if (*(int *)(param_1 + 0x44) != 0) {
            uVar14 = *(undefined4 *)(param_1 + 0x40);
            goto LAB_00755b18;
          }
        }
        else if (iVar10 == 0) {
          (**(code **)(*(int *)(param_1 + 0x3c) + 0x10))
                    (param_1 + 0x48,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44))
          ;
        }
      }
    }
    else {
      local_34 = (int *******)(CONCAT31((int3)((uint)local_34 >> 8),uStack_21c._2_1_) & 0xffff00ff);
      local_38 = pppppppiVar21;
      FUN_014296e8(&local_38,pppppppiVar3,ppppppiVar23);
      uVar13 = *(uint *)(param_1 + 0xac);
      if (uVar13 < *(uint *)(param_1 + 0xc4)) {
        iVar10 = 0;
        if ((*(int *)(param_1 + 0xbc) == 0) &&
           (iVar10 = uVar13 - *(uint *)(param_1 + 0xb8), uVar13 < *(uint *)(param_1 + 0xb8))) {
          iVar10 = 0;
        }
        FUN_007560b4(ppppppiVar23,&local_250,*(uint *)(param_1 + 0xc4) - iVar10);
      }
      local_b0 = local_250;
      local_ac = local_24c;
      local_a8 = local_248;
      local_a4 = local_244;
      local_a0 = local_240;
      local_9c = local_23c;
      local_98 = local_238;
      ppppppiStack_94 = ppppppiStack_234;
      ppppppiStack_90 = ppppppiStack_230;
      local_8c = local_22c;
      local_88 = ppppppiStack_228;
      ppppppiStack_84 = ppppppiStack_224;
      pppppppiStack_80 = local_220;
      ppppppiStack_7c = uStack_21c;
      iVar10 = *piVar15;
      if (iVar10 != 4) {
        if (iVar10 == 0 || iVar10 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else {
          if ((iVar10 != 1) || (*(int *)(param_1 + 0x7c) == 0)) goto LAB_00755b1c;
          uVar14 = *(undefined4 *)(param_1 + 0x78);
LAB_00755b18:
          local_b0 = local_250;
          local_ac = local_24c;
          local_a8 = local_248;
          local_a4 = local_244;
          local_a0 = local_240;
          local_9c = local_23c;
          local_98 = local_238;
          ppppppiStack_94 = ppppppiStack_234;
          ppppppiStack_90 = ppppppiStack_230;
          local_8c = local_22c;
          local_88 = ppppppiStack_228;
          ppppppiStack_84 = ppppppiStack_224;
          pppppppiStack_80 = local_220;
          ppppppiStack_7c = uStack_21c;
          thunk_FUN_016d3fb4(uVar14);
        }
      }
    }
LAB_00755b1c:
    *piVar15 = (int)local_b0;
    piVar15[1] = (int)local_ac;
    piVar15[2] = (int)local_a8;
    piVar15[3] = (int)local_a4;
    piVar15[4] = (int)local_a0;
    piVar15[5] = (int)local_9c;
    piVar15[6] = (int)local_98;
    piVar15[7] = (int)ppppppiStack_94;
    piVar15[8] = (int)ppppppiStack_90;
    piVar15[9] = (int)local_8c;
    piVar15[10] = (int)local_88;
    piVar15[0xb] = (int)ppppppiStack_84;
    piVar15[0xc] = (int)pppppppiStack_80;
    piVar15[0xd] = (int)ppppppiStack_7c;
    break;
  case 1:
    FUN_016dd1aa(auStack_210,param_2 + 2,0xb0);
    local_24c = (int *******)(*(int *)(param_1 + 0xc0) + 9);
    local_250 = (int *******)ppppppiVar23;
    FUN_01026230(&local_b0,auStack_210,param_1,&local_250);
    if (local_b0 != (int *******)0x0) {
      iVar10 = *piVar15;
      if (iVar10 != 4) {
        if (iVar10 == 0 || iVar10 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar10 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(int ********)(param_1 + 0x74) = local_b0;
      *(int ********)(param_1 + 0x78) = local_ac;
      *(int ********)(param_1 + 0x7c) = local_a8;
      *(int ********)(param_1 + 0x80) = local_a4;
      *(int ********)(param_1 + 0x84) = local_a0;
    }
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("not implemented",0xf,&DAT_018a663c);
  case 3:
    FUN_016dd1aa(auStack_160,param_2 + 2,0xb0);
    local_24c = (int *******)(*(int *)(param_1 + 0xc0) + 9);
    local_250 = (int *******)ppppppiVar23;
    FUN_01022ba8(&local_b0,auStack_160,param_1,&local_250);
    if (local_b0 != (int *******)0x0) {
      iVar10 = *piVar15;
      if (iVar10 != 4) {
        if (iVar10 == 0 || iVar10 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar10 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(int ********)(param_1 + 0x74) = local_b0;
      *(int ********)(param_1 + 0x78) = local_ac;
      *(int ********)(param_1 + 0x7c) = local_a8;
      *(int ********)(param_1 + 0x80) = local_a4;
      *(int ********)(param_1 + 0x84) = local_a0;
    }
    if (local_268 == (int *******)&SUB_00000002) goto LAB_00755b80;
    goto LAB_00755b50;
  case 4:
    local_b0 = (int *******)param_2[1];
    local_ac = (int *******)param_2[2];
    local_a8 = (int *******)param_2[3];
    local_a4 = (int *******)param_2[4];
    local_a0 = (int *******)param_2[5];
    local_9c = param_2[6];
    local_98 = (int *******)param_2[7];
    ppppppiStack_94 = param_2[8];
    ppppppiStack_90 = param_2[9];
    local_8c = param_2[10];
    local_88 = param_2[0xb];
    ppppppiStack_84 = param_2[0xc];
    pppppppiStack_80 = (int *******)param_2[0xd];
    ppppppiStack_7c = param_2[0xe];
    ppppppiStack_78 = param_2[0xf];
    FUN_010204cc(&local_b0,ppppppiVar23);
    break;
  case 5:
    uVar14 = *(undefined4 *)((int)param_2 + 6);
    uVar18 = *(undefined4 *)((int)param_2 + 2);
    local_24c._0_2_ = CONCAT11(6,*(undefined1 *)((int)param_2 + 1));
    local_250 = (int *******)0x0;
    FUN_014296e8(&local_250,8,ppppppiVar23);
    iVar10 = *(int *)(param_1 + 0xac);
    if ((uint)(*(int *)(param_1 + 0xb0) - iVar10) < 8) {
      FUN_00f5f538(ppppppiVar23,8);
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xa8) + iVar10);
      *puVar5 = uVar18;
      puVar5[1] = uVar14;
      ppppppiVar7 = (int ******)(iVar8 - iVar10);
      if (ppppppiVar7 < (int ******)0x8) {
        local_b0 = (int *******)0x8;
        goto LAB_00755c74;
      }
    }
    else {
      pppppiVar6 = *ppppppiVar23;
      *(undefined4 *)((int)pppppiVar6 + iVar10) = uVar18;
      ((undefined4 *)((int)pppppiVar6 + iVar10))[1] = uVar14;
    }
    iVar10 = iVar10 + 8;
    goto LAB_00754e88;
  case 6:
    local_b0 = (int *******)param_2[1];
    local_ac = (int *******)param_2[2];
    local_a8 = (int *******)param_2[3];
    local_a4 = (int *******)param_2[4];
    local_a0 = (int *******)param_2[5];
    local_9c = param_2[6];
    local_6c = 0x700;
    local_70 = (int *******)0x0;
    FUN_014296e8(&local_70,local_a8 + 2,ppppppiVar23);
    iVar10 = *(int *)(param_1 + 0xac);
    iVar8 = *(int *)(param_1 + 0xb0);
    uVar13 = (int)local_a0 << 0x18 | ((uint)local_a0 >> 8 & 0xff) << 0x10 |
             ((uint)local_a0 >> 0x10 & 0xff) << 8 | (uint)local_a0 >> 0x18;
    if ((uint)(iVar8 - iVar10) < 4) {
      FUN_00f5f538(ppppppiVar23,4);
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      uVar12 = iVar8 - iVar10;
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar10) = uVar13;
      if (uVar12 < 4) goto LAB_00754cd8;
    }
    else {
      *(uint *)((int)*ppppppiVar23 + iVar10) = uVar13;
    }
    iVar10 = iVar10 + 4;
    *(int *)(param_1 + 0xac) = iVar10;
    uVar13 = (int)local_9c << 0x18 | ((uint)local_9c >> 8 & 0xff) << 0x10 |
             ((uint)local_9c >> 0x10 & 0xff) << 8 | (uint)local_9c >> 0x18;
    if ((uint)(iVar8 - iVar10) < 4) {
      FUN_00f5f538(ppppppiVar23,4);
      iVar10 = *(int *)(param_1 + 0xac);
      uVar12 = *(int *)(param_1 + 0xb0) - iVar10;
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar10) = uVar13;
      if (uVar12 < 4) {
LAB_00754cd8:
        local_250 = (int *******)0x4;
        local_24c = (int *******)uVar12;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0();
      }
    }
    else {
      *(uint *)((int)*ppppppiVar23 + iVar10) = uVar13;
    }
    pppppppiVar3 = local_a8;
    *(int *)(param_1 + 0xac) = iVar10 + 4;
    if (local_a8 == (int *******)0x0) {
      local_5c = (int *******)0x0;
      local_68 = (int *******)&PTR_LAB_0185bcc8;
      local_64 = local_ac;
      local_60 = (int *******)0x0;
    }
    else {
      (*(code *)*local_b0)(&local_68,&local_a4,local_ac,local_a8);
      local_60 = pppppppiVar3;
      if (*(int *)(param_1 + 0xb0) == 0) {
        local_54 = local_64;
        local_24c = (int *******)((int)local_64 + (int)pppppppiVar3);
        local_58 = local_68;
        local_4c = local_5c;
        local_60 = (int *******)0x0;
        local_50 = pppppppiVar3;
        local_5c = (int *******)0x0;
        local_68 = (int *******)&DAT_0187f9a4;
        local_244 = (int *******)0x0;
        local_248 = (int *******)0x0;
        local_250 = (int *******)&DAT_0187f9a4;
        local_64 = local_24c;
        FUN_00f5ee98(&local_244,local_24c,0);
        local_48 = local_58;
        local_44 = local_54;
        local_40 = local_50;
        local_3c = local_4c;
        iVar10 = (*(code *)local_58[3])(&local_3c);
        pppppppiVar21 = local_40;
        pppppppiVar3 = local_44;
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0xac);
          pppppppiVar19 = (int *******)-iVar10;
          local_240 = local_3c;
          local_24c = local_48;
          local_248 = local_44;
          local_244 = local_40;
          local_2c[0] = local_3c;
          local_250 = (int *******)&DAT_00000001;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          if (pppppppiVar19 < local_40) {
            FUN_00f5f538(ppppppiVar23,local_40);
            iVar10 = *(int *)(param_1 + 0xac);
            pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
          }
          FUN_016dd1aa((int)*ppppppiVar23 + iVar10,pppppppiVar3,pppppppiVar21);
          if (pppppppiVar19 < pppppppiVar21) {
            local_48 = pppppppiVar21;
            local_44 = pppppppiVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar23 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar10 + (int)pppppppiVar21;
          (*(code *)ppppppiVar23)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          (*(code *)local_48[2])(&local_24c,local_2c);
          local_250 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar9 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar9;
              bVar25 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar25);
            *piVar9 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_00755528;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_00755528:
            thunk_FUN_016d3fb4(piVar15);
          }
          *ppppppiVar23 = (int *****)local_24c;
          *(int ********)(param_1 + 0xac) = local_248;
          *(int ********)(param_1 + 0xb0) = local_244;
          *(int ********)(param_1 + 0xb4) = local_240;
        }
      }
      else {
        if ((int *******)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac)) < pppppppiVar3) {
          FUN_00f5f538(ppppppiVar23,pppppppiVar3);
        }
        while( true ) {
          pppppppiVar21 = local_60;
          pppppppiVar3 = local_64;
          if (local_60 == (int *******)0x0) break;
          iVar10 = *(int *)(param_1 + 0xac);
          pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
          if (pppppppiVar19 < local_60) {
            FUN_00f5f538(ppppppiVar23,local_60);
            iVar10 = *(int *)(param_1 + 0xac);
            pppppppiVar19 = (int *******)(*(int *)(param_1 + 0xb0) - iVar10);
          }
          FUN_016dd1aa((int)*ppppppiVar23 + iVar10,pppppppiVar3,pppppppiVar21);
          if (pppppppiVar19 < pppppppiVar21) {
            local_250 = pppppppiVar21;
            local_24c = pppppppiVar19;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_250);
          }
          *(undefined1 **)(param_1 + 0xac) = (undefined1 *)(iVar10 + (int)pppppppiVar21);
          local_48 = pppppppiVar21;
          if (local_60 < pppppppiVar21) {
            local_38 = local_60;
            local_248 = (int *******)&local_38;
            local_250 = (int *******)&local_48;
            local_244 = (int *******)FUN_007883b8;
            local_24c = (int *******)FUN_007883b8;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_250,&DAT_018a6700);
          }
          local_64 = (int *******)((int)local_64 + (int)pppppppiVar21);
          local_60 = (int *******)((int)local_60 - (int)pppppppiVar21);
        }
        (*(code *)local_68[4])(&local_5c,local_64,0);
      }
    }
    (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
    if (local_268 == (int *******)&SUB_00000002) goto LAB_00755b80;
    goto LAB_00755b50;
  case 7:
    ppppppiVar17 = param_2[1];
    ppppppiVar16 = param_2[2];
    iVar10 = *(int *)(param_1 + 0xac);
    iVar8 = *(int *)(param_1 + 0xb0);
    if ((uint)(iVar8 - iVar10) < 3) {
      FUN_00f5f538(ppppppiVar23,3);
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      puVar4 = (undefined2 *)(*(int *)(param_1 + 0xa8) + iVar10);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 4;
      ppppppiVar7 = (int ******)(iVar8 - iVar10);
      if (ppppppiVar7 < (int ******)0x3) {
        local_b0 = (int *******)0x3;
        goto LAB_00755c74;
      }
      iVar10 = iVar10 + 3;
      *(int *)(param_1 + 0xac) = iVar10;
      if (iVar8 == iVar10) goto LAB_00754894;
LAB_00754c04:
      *(undefined1 *)((int)*ppppppiVar23 + iVar10) = 8;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0xac) = iVar10;
      if (iVar8 == iVar10) goto LAB_007548e8;
LAB_00754c20:
      *(undefined1 *)((int)*ppppppiVar23 + iVar10) = 0;
    }
    else {
      pppppiVar6 = *ppppppiVar23;
      *(undefined2 *)((int)pppppiVar6 + iVar10) = 0;
      *(undefined1 *)((undefined2 *)((int)pppppiVar6 + iVar10) + 1) = 4;
      iVar10 = iVar10 + 3;
      *(int *)(param_1 + 0xac) = iVar10;
      if (iVar8 != iVar10) goto LAB_00754c04;
LAB_00754894:
      FUN_00f5f538(ppppppiVar23,1);
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar10) = 8;
      if (iVar8 == iVar10) {
        local_b0 = (int *******)0x1;
        ppppppiVar7 = (int ******)0x0;
        goto LAB_00755c74;
      }
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + 0xac) = iVar10;
      if (iVar8 != iVar10) goto LAB_00754c20;
LAB_007548e8:
      FUN_00f5f538(ppppppiVar23,1);
      ppppppiVar7 = (int ******)0x0;
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar10) = 0;
      if (iVar8 == iVar10) {
        local_b0 = (int *******)0x1;
        goto LAB_00755c74;
      }
    }
    iVar10 = iVar10 + 1;
    uVar13 = (int)ppppppiVar17 << 0x18 | ((uint)ppppppiVar17 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar17 >> 0x18;
    *(int *)(param_1 + 0xac) = iVar10;
    if ((uint)(iVar8 - iVar10) < 4) {
      FUN_00f5f538(ppppppiVar23,4);
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar10) = uVar13;
      ppppppiVar7 = (int ******)(iVar8 - iVar10);
      if ((int ******)0x3 < ppppppiVar7) goto LAB_00754e20;
    }
    else {
      *(uint *)((int)*ppppppiVar23 + iVar10) = uVar13;
LAB_00754e20:
      iVar10 = iVar10 + 4;
      uVar13 = (int)ppppppiVar16 << 0x18 | ((uint)ppppppiVar16 >> 8 & 0xff) << 0x10 |
               ((uint)ppppppiVar16 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar16 >> 0x18;
      *(int *)(param_1 + 0xac) = iVar10;
      if (3 < (uint)(iVar8 - iVar10)) {
        pppppiVar6 = *ppppppiVar23;
        goto LAB_00754e80;
      }
      FUN_00f5f538(ppppppiVar23,4);
LAB_00754e58:
      iVar10 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar10) = uVar13;
      ppppppiVar7 = (int ******)(iVar8 - iVar10);
      if ((int ******)0x3 < ppppppiVar7) goto LAB_00754e84;
    }
    local_b0 = (int *******)0x4;
LAB_00755c74:
    local_ac = (int *******)ppppppiVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_b0);
  case 8:
    local_250 = (int *******)param_2[1];
    ppppppiVar17 = param_2[2];
    local_24c = (int *******)CONCAT22(local_24c._2_2_,0x300);
    FUN_014296e8(&local_250,4,ppppppiVar23);
    iVar10 = *(int *)(param_1 + 0xac);
    uVar13 = (int)ppppppiVar17 << 0x18 | ((uint)ppppppiVar17 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar17 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar17 >> 0x18;
    if ((uint)(*(int *)(param_1 + 0xb0) - iVar10) < 4) {
      FUN_00f5f538(ppppppiVar23,4);
      goto LAB_00754e58;
    }
    pppppiVar6 = *ppppppiVar23;
LAB_00754e80:
    *(uint *)((int)pppppiVar6 + iVar10) = uVar13;
LAB_00754e84:
    iVar10 = iVar10 + 4;
LAB_00754e88:
    *(int *)(param_1 + 0xac) = iVar10;
  }
  if (local_268 != (int *******)&SUB_00000002) {
LAB_00755b50:
    pppppppiVar3 = local_264;
    if (((uint)local_268 & 1) != 0) {
      pppppppiVar3 = (int *******)((int)local_264 + ((int)local_260[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_260[0xd])(pppppppiVar3,&local_270);
  }
LAB_00755b80:
  FUN_005c3320(&local_270);
  return 0xc;
LAB_00755bfc:
  local_b0 = pppppppiVar22;
  goto LAB_00755c00;
}

