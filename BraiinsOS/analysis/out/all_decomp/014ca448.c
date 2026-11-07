// FUN_014ca448 @ 014ca448 size=6104 calls_out=17 calls_in=1
// strings: assertion failed: cnt <= self.limit | assertion failed: self.has_capacity() | assertion failed: cnt <= self.limit | not implemented | chunk not fully encoded

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_014ca448(int param_1,int *******param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *******pppppppiVar3;
  undefined2 *puVar4;
  int ******ppppppiVar5;
  undefined4 *puVar6;
  int *****pppppiVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  int ******ppppppiVar16;
  uint uVar17;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int ******ppppppiVar20;
  undefined4 uVar21;
  int ******ppppppiVar22;
  bool bVar23;
  char *local_270;
  int *******local_268;
  int *******local_264;
  int *******local_260;
  int *******local_25c;
  int *******local_258;
  int ******ppppppiStack_254;
  int *******pppppppiStack_250;
  int ******ppppppiStack_24c;
  int *******local_248;
  undefined4 local_244;
  int *******local_240;
  int *******local_23c;
  int *******local_238;
  int ******local_234;
  int *******local_230;
  int ******ppppppiStack_22c;
  int ******ppppppiStack_228;
  int ******local_224;
  int ******ppppppiStack_220;
  int ******ppppppiStack_21c;
  int *******local_218;
  undefined4 uStack_214;
  int *******local_20c;
  undefined1 auStack_208 [176];
  undefined1 auStack_158 [176];
  int *******local_a8;
  int *******local_a4;
  int *******local_a0;
  int *******local_9c;
  int *******local_98;
  int ******local_94;
  int *******local_90;
  int ******ppppppiStack_8c;
  int ******ppppppiStack_88;
  int ******local_84;
  int ******local_80;
  int ******ppppppiStack_7c;
  int *******pppppppiStack_78;
  int ******ppppppiStack_74;
  int ******ppppppiStack_70;
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
  int *******pppppppiStack_40;
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
  local_90 = DAT_018d8a78;
  local_a0 = (int *******)&SUB_00000002;
  if (DAT_018dd947 == '\0') {
    if (DAT_018d8a78[8] == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a660c);
    }
    local_30 = DAT_018d8a78 + 7;
    local_248 = (int *******)*local_30;
    local_268 = (int *******)&local_248;
    local_264 = (int *******)&local_48;
    local_238 = (int *******)0x0;
    local_244 = (int *******)DAT_018d8a78[8];
    local_240 = (int *******)DAT_018d8a78[9];
    local_23c = (int *******)DAT_018d8a78[10];
    local_34 = (int *******)&DAT_00000001;
    local_38 = (int *******)&local_268;
    local_260 = (int *******)&DAT_018a661c;
    local_48 = param_2;
    FUN_01694880(&local_a8,&local_38);
  }
  local_268 = local_a8;
  local_264 = local_a4;
  local_260 = local_a0;
  local_25c = local_9c;
  local_258 = local_98;
  ppppppiStack_254 = local_94;
  pppppppiStack_250 = local_90;
  ppppppiStack_24c = ppppppiStack_8c;
  if (local_a0 != (int *******)&SUB_00000002) {
    pppppppiVar3 = local_9c;
    if (((uint)local_a0 & 1) != 0) {
      pppppppiVar3 = (int *******)((int)local_9c + ((int)local_98[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_98[0xc])(pppppppiVar3,&local_268);
  }
  ppppppiVar22 = (int ******)(param_1 + 0xa8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  case 0:
    local_248 = (int *******)param_2[2];
    local_244 = (int *******)param_2[3];
    local_240 = (int *******)param_2[4];
    local_23c = (int *******)param_2[5];
    local_238 = (int *******)param_2[6];
    local_234 = param_2[7];
    local_230 = (int *******)param_2[8];
    ppppppiStack_22c = param_2[9];
    ppppppiStack_228 = param_2[10];
    local_224 = param_2[0xb];
    ppppppiStack_220 = param_2[0xc];
    ppppppiStack_21c = param_2[0xd];
    pppppppiVar19 = (int *******)param_2[0xe];
    uStack_214 = param_2[0xf];
    pppppppiVar3 = (int *******)0x0;
    if (local_248 != (int *******)&SUB_00000002) {
      if (local_248 == (int *******)&DAT_00000001) {
        if ((local_234 == (int ******)0x0) &&
           (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238)) {
          pppppppiVar3 = (int *******)0x0;
        }
      }
      else {
        pppppppiVar3 = local_23c;
      }
    }
    if (local_230 < pppppppiVar3) {
      pppppppiVar3 = local_230;
    }
    local_218 = pppppppiVar19;
    if (*(int ********)(param_1 + 0xc0) < pppppppiVar3) {
      if (local_248 == (int *******)&DAT_00000001) {
        if (local_23c != (int *******)0x0) {
          thunk_FUN_016d3fb4(local_240);
        }
      }
      else if (local_248 == (int *******)0x0) {
        (*(code *)local_244[4])(&local_238,local_240,local_23c);
      }
      if (local_260 != (int *******)&SUB_00000002) {
        pppppppiVar3 = local_25c;
        if (((uint)local_260 & 1) != 0) {
          pppppppiVar3 = (int *******)((int)local_25c + ((int)local_258[2] - 1U & 0xfffffff8) + 8);
        }
        (*(code *)local_258[0xd])(pppppppiVar3,&local_268);
      }
      FUN_005c3320(&local_268);
      return 2;
    }
    uStack_214._2_1_ = (undefined1)((uint)uStack_214 >> 0x10);
    uVar1 = uStack_214._2_1_;
    if (pppppppiVar3 < *(int ********)(param_1 + 0xc4)) {
      pppppppiVar3 = (int *******)0x0;
      if (local_248 != (int *******)&SUB_00000002) {
        if (local_248 == (int *******)&DAT_00000001) {
          if ((local_234 == (int ******)0x0) &&
             (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238))
          {
            pppppppiVar3 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar3 = local_23c;
        }
      }
      uVar17 = *(uint *)(param_1 + 0xac);
      if (local_230 < pppppppiVar3) {
        pppppppiVar3 = local_230;
      }
      if ((int *******)(uVar17 ^ 0x7fffffff) < pppppppiVar3) {
        uVar13 = 0x2c;
        puVar12 = &DAT_018a5878;
        local_270 = &DAT_00408f30;
        goto LAB_014cbb4c;
      }
      iVar11 = *(int *)(param_1 + 0xb0);
      uVar2 = (ushort)((((uint)pppppppiVar3 >> 8 & 0xff) << 0x10) >> 8) |
              (ushort)((uint)pppppppiVar3 >> 0x10) & 0xff;
      if (iVar11 - uVar17 < 3) {
        FUN_00f5f538(ppppppiVar22,3);
        uVar17 = *(uint *)(param_1 + 0xac);
        iVar11 = *(int *)(param_1 + 0xb0);
        puVar10 = (ushort *)(*(int *)(param_1 + 0xa8) + uVar17);
        *puVar10 = uVar2;
        pppppppiVar18 = (int *******)(iVar11 - uVar17);
        *(char *)(puVar10 + 1) = (char)pppppppiVar3;
        if (&SUB_00000002 < pppppppiVar18) goto LAB_014cb320;
        local_a8 = (int *******)0x3;
LAB_014cb410:
LAB_014cbb14:
        local_a4 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0();
      }
      pppppiVar7 = *ppppppiVar22;
      *(ushort *)((int)pppppiVar7 + uVar17) = uVar2;
      *(char *)((ushort *)((int)pppppiVar7 + uVar17) + 1) = (char)pppppppiVar3;
LAB_014cb320:
      iVar8 = uVar17 + 3;
      *(int *)(param_1 + 0xac) = iVar8;
      if (iVar11 == iVar8) {
        FUN_00f5f538(ppppppiVar22,1);
        pppppppiVar18 = (int *******)0x0;
        iVar8 = *(int *)(param_1 + 0xac);
        iVar11 = *(int *)(param_1 + 0xb0);
        *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar8) = 0;
        if (iVar11 == iVar8) {
          local_a8 = (int *******)&DAT_00000001;
          goto LAB_014cb410;
        }
      }
      else {
        *(undefined1 *)((int)*ppppppiVar22 + iVar8) = 0;
      }
      iVar8 = iVar8 + 1;
      *(int *)(param_1 + 0xac) = iVar8;
      if (iVar11 == iVar8) {
        FUN_00f5f538(ppppppiVar22,1);
        iVar8 = *(int *)(param_1 + 0xac);
        iVar11 = *(int *)(param_1 + 0xb0);
        *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar8) = uVar1;
        if (iVar11 == iVar8) {
          pppppppiVar18 = (int *******)0x0;
          local_a8 = (int *******)&DAT_00000001;
          goto LAB_014cbb14;
        }
      }
      else {
        *(undefined1 *)((int)*ppppppiVar22 + iVar8) = uVar1;
      }
      iVar8 = iVar8 + 1;
      uVar17 = (int)pppppppiVar19 << 0x18 | ((uint)pppppppiVar19 >> 8 & 0xff) << 0x10 |
               ((uint)pppppppiVar19 >> 0x10 & 0xff) << 8 | (uint)pppppppiVar19 >> 0x18;
      *(int *)(param_1 + 0xac) = iVar8;
      if ((uint)(iVar11 - iVar8) < 4) {
        FUN_00f5f538(ppppppiVar22,4);
        iVar8 = *(int *)(param_1 + 0xac);
        iVar11 = *(int *)(param_1 + 0xb0);
        pppppppiVar18 = (int *******)(iVar11 - iVar8);
        *(uint *)(*(int *)(param_1 + 0xa8) + iVar8) = uVar17;
        if (pppppppiVar18 < &DAT_00000004) {
          local_a8 = (int *******)&DAT_00000004;
          goto LAB_014cb410;
        }
      }
      else {
        *(uint *)((int)*ppppppiVar22 + iVar8) = uVar17;
      }
      *(int *)(param_1 + 0xac) = iVar8 + 4;
      pppppppiVar3 = (int *******)0x0;
      if (local_248 != (int *******)&SUB_00000002) {
        if (local_248 == (int *******)&DAT_00000001) {
          if ((local_234 == (int ******)0x0) &&
             (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238))
          {
            pppppppiVar3 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar3 = local_23c;
        }
      }
      if (local_230 < pppppppiVar3) {
        pppppppiVar3 = local_230;
      }
      local_58 = (int *******)&local_248;
      if (pppppppiVar3 != (int *******)0x0) {
        if (iVar11 != 0) {
          pppppppiVar3 = (int *******)0x0;
          if (local_248 != (int *******)&SUB_00000002) {
            if (local_248 == (int *******)&DAT_00000001) {
              if ((local_234 == (int ******)0x0) &&
                 (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238),
                 local_23c < local_238)) {
                pppppppiVar3 = (int *******)0x0;
              }
            }
            else {
              pppppppiVar3 = local_23c;
            }
          }
          if (local_230 < pppppppiVar3) {
            pppppppiVar3 = local_230;
          }
          if ((int *******)(iVar11 - (iVar8 + 4)) < pppppppiVar3) {
            FUN_00f5f538(ppppppiVar22);
          }
          local_270 = "assertion failed: cnt <= self.limit";
          do {
            pppppppiVar3 = (int *******)0x0;
            if (local_248 != (int *******)&SUB_00000002) {
              if (local_248 == (int *******)&DAT_00000001) {
                if ((local_234 == (int ******)0x0) &&
                   (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238),
                   local_23c < local_238)) {
                  pppppppiVar3 = (int *******)0x0;
                }
              }
              else {
                pppppppiVar3 = local_23c;
              }
            }
            if (local_230 < pppppppiVar3) {
              pppppppiVar3 = local_230;
            }
            if (pppppppiVar3 == (int *******)0x0) goto LAB_014cb944;
            if (local_248 == (int *******)&SUB_00000002) {
              pppppppiVar3 = (int *******)&DAT_00000001;
              pppppppiVar19 = (int *******)0x0;
            }
            else if (local_248 == (int *******)&DAT_00000001) {
              pppppppiVar19 = local_238;
              if (local_23c < local_238) {
                pppppppiVar19 = local_23c;
              }
              if (local_234 != (int ******)0x0) {
                pppppppiVar19 = local_23c;
              }
              pppppppiVar3 = (int *******)((int)local_240 + (int)pppppppiVar19);
              pppppppiVar19 = (int *******)((int)local_23c - (int)pppppppiVar19);
            }
            else {
              pppppppiVar3 = local_240;
              pppppppiVar19 = local_23c;
            }
            iVar11 = *(int *)(param_1 + 0xac);
            if (local_230 < pppppppiVar19) {
              pppppppiVar19 = local_230;
            }
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
            if (pppppppiVar18 < pppppppiVar19) {
              FUN_00f5f538(ppppppiVar22,pppppppiVar19);
              iVar11 = *(int *)(param_1 + 0xac);
              pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
            }
            FUN_016dd1aa((int)*ppppppiVar22 + iVar11,pppppppiVar3,pppppppiVar19);
            if (pppppppiVar18 < pppppppiVar19) {
LAB_014cbb10:
              local_a8 = pppppppiVar19;
              goto LAB_014cbb14;
            }
            *(undefined1 **)(param_1 + 0xac) = (undefined1 *)(iVar11 + (int)pppppppiVar19);
            if (local_230 < pppppppiVar19) goto LAB_014cbb40;
            if (local_248 != (int *******)&SUB_00000002) {
              if (local_248 == (int *******)&DAT_00000001) {
                pppppppiVar18 = (int *******)0x0;
                if ((local_234 == (int ******)0x0) &&
                   (pppppppiVar18 = (int *******)((int)local_23c - (int)local_238),
                   local_23c < local_238)) {
                  pppppppiVar18 = (int *******)0x0;
                }
                if (pppppppiVar18 < pppppppiVar19) goto LAB_014cbb10;
                bVar23 = CARRY4((uint)local_238,(uint)pppppppiVar19);
                local_238 = (int *******)((int)local_238 + (int)pppppppiVar19);
                local_234 = (int ******)((int)local_234 + (uint)bVar23);
              }
              else {
                local_48 = pppppppiVar19;
                if (local_23c < pppppppiVar19) {
                  local_38 = local_23c;
                  local_a0 = (int *******)&local_38;
                  local_9c = (int *******)FUN_007883b8;
                  local_a4 = (int *******)FUN_007883b8;
                  local_a8 = (int *******)&local_48;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_00584155,&local_a8,&DAT_018a6700);
                }
                local_23c = (int *******)((int)local_23c - (int)pppppppiVar19);
                local_240 = (int *******)((int)local_240 + (int)pppppppiVar19);
              }
            }
            local_230 = (int *******)((int)local_230 - (int)pppppppiVar19);
          } while( true );
        }
        pppppppiVar3 = (int *******)0x0;
        if (local_248 != (int *******)&SUB_00000002) {
          if (local_248 == (int *******)&DAT_00000001) {
            if ((local_234 == (int ******)0x0) &&
               (pppppppiVar3 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238
               )) {
              pppppppiVar3 = (int *******)0x0;
            }
          }
          else {
            pppppppiVar3 = local_23c;
          }
        }
        if (local_230 < pppppppiVar3) {
          pppppppiVar3 = local_230;
        }
        FUN_01474680(&local_48,&local_58,pppppppiVar3);
        iVar11 = (*(code *)local_48[3])(&local_3c);
        pppppppiVar19 = pppppppiStack_40;
        pppppppiVar3 = local_44;
        if (iVar11 == 0) {
          iVar11 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
          local_a4 = local_48;
          local_a0 = local_44;
          local_9c = pppppppiStack_40;
          local_98 = local_3c;
          local_2c[0] = local_3c;
          local_a8 = (int *******)&DAT_00000001;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = pppppppiStack_40;
          if (pppppppiVar18 < pppppppiStack_40) {
            FUN_00f5f538(ppppppiVar22,pppppppiStack_40);
            iVar11 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
          }
          FUN_016dd1aa((int)*ppppppiVar22 + iVar11,pppppppiVar3,pppppppiVar19);
          if (pppppppiVar18 < pppppppiVar19) {
            local_48 = pppppppiVar19;
            local_44 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar22 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar11 + (int)pppppppiVar19;
          (*(code *)ppppppiVar22)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = pppppppiStack_40;
          (*(code *)local_48[2])(&local_a4,local_2c);
          local_a8 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar9 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar9;
              bVar23 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar23);
            *piVar9 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_014cb934;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_014cb934:
            thunk_FUN_016d3fb4(piVar15);
          }
          *ppppppiVar22 = (int *****)local_a4;
          *(int ********)(param_1 + 0xac) = local_a0;
          *(int ********)(param_1 + 0xb0) = local_9c;
          *(int ********)(param_1 + 0xb4) = local_98;
        }
      }
LAB_014cb944:
      local_20c = (int *******)0x0;
      if (local_248 != (int *******)&SUB_00000002) {
        if (local_248 == (int *******)&DAT_00000001) {
          if ((local_234 == (int ******)0x0) &&
             (local_20c = (int *******)((int)local_23c - (int)local_238), local_23c < local_238)) {
            local_20c = (int *******)0x0;
          }
        }
        else {
          local_20c = local_23c;
        }
      }
      if (local_230 < local_20c) {
        local_20c = local_230;
      }
      if (local_20c != (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_20c,&DAT_00568f30,"chunk not fully encoded",0x2f,&DAT_018a662c);
      }
      local_a8 = local_248;
      local_a4 = local_244;
      local_a0 = local_240;
      local_9c = local_23c;
      local_98 = local_238;
      local_94 = local_234;
      local_90 = local_230;
      ppppppiStack_8c = ppppppiStack_22c;
      ppppppiStack_88 = ppppppiStack_228;
      local_84 = local_224;
      local_80 = ppppppiStack_220;
      ppppppiStack_7c = ppppppiStack_21c;
      pppppppiStack_78 = local_218;
      ppppppiStack_74 = uStack_214;
      iVar11 = *(int *)(param_1 + 0x38);
      if (iVar11 != 3) {
        if (iVar11 == 1) {
          if (*(int *)(param_1 + 0x44) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
          }
        }
        else if (iVar11 == 0) {
          (**(code **)(*(int *)(param_1 + 0x3c) + 0x10))
                    (param_1 + 0x48,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44))
          ;
        }
      }
      *(int *)(param_1 + 0x38) = (int)local_a8;
      *(int ********)(param_1 + 0x3c) = local_a4;
      *(int ********)(param_1 + 0x40) = local_a0;
      *(int ********)(param_1 + 0x44) = local_9c;
      *(int ********)(param_1 + 0x48) = local_98;
      *(int *******)(param_1 + 0x4c) = local_94;
      *(int ********)(param_1 + 0x50) = local_90;
      *(int *******)(param_1 + 0x54) = ppppppiStack_8c;
      *(int *******)(param_1 + 0x58) = ppppppiStack_88;
      *(int *******)(param_1 + 0x5c) = local_84;
      *(int *******)(param_1 + 0x60) = local_80;
      *(int *******)(param_1 + 100) = ppppppiStack_7c;
      *(int ********)(param_1 + 0x68) = pppppppiStack_78;
      *(int *******)(param_1 + 0x6c) = ppppppiStack_74;
    }
    else {
      local_34 = (int *******)(CONCAT31((int3)((uint)local_34 >> 8),uStack_214._2_1_) & 0xffff00ff);
      local_38 = pppppppiVar19;
      FUN_014296e8(&local_38,pppppppiVar3,ppppppiVar22);
      uVar17 = *(uint *)(param_1 + 0xac);
      if (uVar17 < *(uint *)(param_1 + 0xc4)) {
        iVar11 = 0;
        if ((*(int *)(param_1 + 0xbc) == 0) &&
           (iVar11 = uVar17 - *(uint *)(param_1 + 0xb8), uVar17 < *(uint *)(param_1 + 0xb8))) {
          iVar11 = 0;
        }
        FUN_014749b0(ppppppiVar22,&local_248,*(uint *)(param_1 + 0xc4) - iVar11);
      }
      local_a8 = local_248;
      local_a4 = local_244;
      local_a0 = local_240;
      local_9c = local_23c;
      local_98 = local_238;
      local_94 = local_234;
      local_90 = local_230;
      ppppppiStack_8c = ppppppiStack_22c;
      ppppppiStack_88 = ppppppiStack_228;
      local_84 = local_224;
      local_80 = ppppppiStack_220;
      ppppppiStack_7c = ppppppiStack_21c;
      pppppppiStack_78 = local_218;
      ppppppiStack_74 = uStack_214;
      iVar11 = *piVar15;
      if (iVar11 != 4) {
        if (iVar11 == 0 || iVar11 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar11 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
        }
      }
      *piVar15 = (int)local_a8;
      *(int ********)(param_1 + 0x74) = local_a4;
      *(int ********)(param_1 + 0x78) = local_a0;
      *(int ********)(param_1 + 0x7c) = local_9c;
      *(int ********)(param_1 + 0x80) = local_98;
      *(int *******)(param_1 + 0x84) = local_94;
      *(int ********)(param_1 + 0x88) = local_90;
      *(int *******)(param_1 + 0x8c) = ppppppiStack_8c;
      *(int *******)(param_1 + 0x90) = ppppppiStack_88;
      *(int *******)(param_1 + 0x94) = local_84;
      *(int *******)(param_1 + 0x98) = local_80;
      *(int *******)(param_1 + 0x9c) = ppppppiStack_7c;
      *(int ********)(param_1 + 0xa0) = pppppppiStack_78;
      *(int *******)(param_1 + 0xa4) = ppppppiStack_74;
    }
    break;
  case 1:
    FUN_016dd1aa(auStack_208,param_2 + 2,0xb0);
    local_244 = (int *******)(*(int *)(param_1 + 0xc0) + 9);
    local_248 = (int *******)ppppppiVar22;
    FUN_01026230(&local_a8,auStack_208,param_1,&local_248);
    if (local_a8 != (int *******)0x0) {
      iVar11 = *piVar15;
      if (iVar11 != 4) {
        if (iVar11 == 0 || iVar11 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar11 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(int ********)(param_1 + 0x74) = local_a8;
      *(int ********)(param_1 + 0x78) = local_a4;
      *(int ********)(param_1 + 0x7c) = local_a0;
      *(int ********)(param_1 + 0x80) = local_9c;
      *(int ********)(param_1 + 0x84) = local_98;
    }
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("not implemented",0xf,&DAT_018a663c);
  case 3:
    FUN_016dd1aa(auStack_158,param_2 + 2,0xb0);
    local_244 = (int *******)(*(int *)(param_1 + 0xc0) + 9);
    local_248 = (int *******)ppppppiVar22;
    FUN_01022ba8(&local_a8,auStack_158,param_1,&local_248);
    if (local_a8 != (int *******)0x0) {
      iVar11 = *piVar15;
      if (iVar11 != 4) {
        if (iVar11 == 0 || iVar11 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar11 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(int ********)(param_1 + 0x74) = local_a8;
      *(int ********)(param_1 + 0x78) = local_a4;
      *(int ********)(param_1 + 0x7c) = local_a0;
      *(int ********)(param_1 + 0x80) = local_9c;
      *(int ********)(param_1 + 0x84) = local_98;
    }
    if (local_260 == (int *******)&SUB_00000002) goto LAB_014cba68;
    goto LAB_014cba38;
  case 4:
    local_a8 = (int *******)param_2[1];
    local_a4 = (int *******)param_2[2];
    local_a0 = (int *******)param_2[3];
    local_9c = (int *******)param_2[4];
    local_98 = (int *******)param_2[5];
    local_94 = param_2[6];
    local_90 = (int *******)param_2[7];
    ppppppiStack_8c = param_2[8];
    ppppppiStack_88 = param_2[9];
    local_84 = param_2[10];
    local_80 = param_2[0xb];
    ppppppiStack_7c = param_2[0xc];
    pppppppiStack_78 = (int *******)param_2[0xd];
    ppppppiStack_74 = param_2[0xe];
    ppppppiStack_70 = param_2[0xf];
    FUN_010204cc(&local_a8,ppppppiVar22);
    break;
  case 5:
    uVar21 = *(undefined4 *)((int)param_2 + 6);
    uVar13 = *(undefined4 *)((int)param_2 + 2);
    local_244._0_2_ = CONCAT11(6,*(undefined1 *)((int)param_2 + 1));
    local_248 = (int *******)0x0;
    FUN_014296e8(&local_248,8,ppppppiVar22);
    iVar11 = *(int *)(param_1 + 0xac);
    if ((uint)(*(int *)(param_1 + 0xb0) - iVar11) < 8) {
      FUN_00f5f538(ppppppiVar22,8);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0xa8) + iVar11);
      *puVar6 = uVar13;
      puVar6[1] = uVar21;
      ppppppiVar5 = (int ******)(iVar8 - iVar11);
      if (ppppppiVar5 < (int ******)0x8) {
        local_a8 = (int *******)0x8;
        goto LAB_014cbbc4;
      }
    }
    else {
      pppppiVar7 = *ppppppiVar22;
      *(undefined4 *)((int)pppppiVar7 + iVar11) = uVar13;
      ((undefined4 *)((int)pppppiVar7 + iVar11))[1] = uVar21;
    }
    iVar11 = iVar11 + 8;
    goto LAB_014cad5c;
  case 6:
    local_a8 = (int *******)param_2[1];
    local_a4 = (int *******)param_2[2];
    local_a0 = (int *******)param_2[3];
    local_9c = (int *******)param_2[4];
    local_98 = (int *******)param_2[5];
    local_94 = param_2[6];
    iVar11 = *(int *)(param_1 + 0xac);
    iVar8 = *(int *)(param_1 + 0xb0);
    pppppppiVar3 = local_a0 + 2;
    uVar2 = (ushort)((((uint)pppppppiVar3 >> 8 & 0xff) << 0x10) >> 8) |
            (ushort)((uint)pppppppiVar3 >> 0x10) & 0xff;
    uVar1 = (undefined1)((uint)((int)pppppppiVar3 * 0x1000000) >> 0x18);
    if ((uint)(iVar8 - iVar11) < 3) {
      FUN_00f5f538(ppppppiVar22,3);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      puVar10 = (ushort *)(*(int *)(param_1 + 0xa8) + iVar11);
      *puVar10 = uVar2;
      *(undefined1 *)(puVar10 + 1) = uVar1;
      uVar17 = iVar8 - iVar11;
      if (uVar17 < 3) {
        local_248 = (int *******)0x3;
        goto LAB_014cbba8;
      }
      iVar11 = iVar11 + 3;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 == iVar11) goto LAB_014ca6ac;
LAB_014cab10:
      *(undefined1 *)((int)*ppppppiVar22 + iVar11) = 7;
      iVar11 = iVar11 + 1;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 == iVar11) goto LAB_014ca6e4;
LAB_014cab2c:
      *(undefined1 *)((int)*ppppppiVar22 + iVar11) = 0;
    }
    else {
      pppppiVar7 = *ppppppiVar22;
      *(ushort *)((int)pppppiVar7 + iVar11) = uVar2;
      *(undefined1 *)((ushort *)((int)pppppiVar7 + iVar11) + 1) = uVar1;
      iVar11 = iVar11 + 3;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 != iVar11) goto LAB_014cab10;
LAB_014ca6ac:
      FUN_00f5f538(ppppppiVar22,1);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar11) = 7;
      if (iVar8 == iVar11) {
        local_248 = (int *******)0x1;
        uVar17 = 0;
        goto LAB_014cbba8;
      }
      iVar11 = iVar11 + 1;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 != iVar11) goto LAB_014cab2c;
LAB_014ca6e4:
      FUN_00f5f538(ppppppiVar22,1);
      uVar17 = 0;
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar11) = 0;
      if (iVar8 == iVar11) {
        local_248 = (int *******)0x1;
        goto LAB_014cbba8;
      }
    }
    iVar11 = iVar11 + 1;
    *(int *)(param_1 + 0xac) = iVar11;
    if ((uint)(iVar8 - iVar11) < 4) {
      FUN_00f5f538(ppppppiVar22,4);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar11) = 0;
      uVar17 = iVar8 - iVar11;
      if (3 < uVar17) goto LAB_014cac50;
LAB_014cad48:
      local_248 = (int *******)0x4;
LAB_014cbba8:
      local_244 = (int *******)uVar17;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0();
    }
    *(undefined4 *)((int)*ppppppiVar22 + iVar11) = 0;
LAB_014cac50:
    iVar11 = iVar11 + 4;
    *(int *)(param_1 + 0xac) = iVar11;
    uVar17 = (int)local_98 << 0x18 | ((uint)local_98 >> 8 & 0xff) << 0x10 |
             ((uint)local_98 >> 0x10 & 0xff) << 8 | (uint)local_98 >> 0x18;
    if ((uint)(iVar8 - iVar11) < 4) {
      FUN_00f5f538(ppppppiVar22,4);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar11) = uVar17;
      uVar17 = iVar8 - iVar11;
      if (uVar17 < 4) goto LAB_014cad48;
    }
    else {
      *(uint *)((int)*ppppppiVar22 + iVar11) = uVar17;
    }
    iVar11 = iVar11 + 4;
    *(int *)(param_1 + 0xac) = iVar11;
    uVar14 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
             ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
    if ((uint)(iVar8 - iVar11) < 4) {
      FUN_00f5f538(ppppppiVar22,4);
      iVar11 = *(int *)(param_1 + 0xac);
      uVar17 = *(int *)(param_1 + 0xb0) - iVar11;
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar11) = uVar14;
      if (uVar17 < 4) goto LAB_014cad48;
    }
    else {
      *(uint *)((int)*ppppppiVar22 + iVar11) = uVar14;
    }
    pppppppiVar3 = local_a0;
    *(int *)(param_1 + 0xac) = iVar11 + 4;
    if (local_a0 == (int *******)0x0) {
      local_5c = (int *******)0x0;
      local_68 = (int *******)&PTR_LAB_018a66cc;
      local_64 = local_a4;
      local_60 = (int *******)0x0;
    }
    else {
      (*(code *)*local_a8)(&local_68,&local_9c,local_a4,local_a0);
      local_60 = pppppppiVar3;
      if (*(int *)(param_1 + 0xb0) == 0) {
        local_54 = local_64;
        local_244 = (int *******)((int)local_64 + (int)pppppppiVar3);
        local_58 = local_68;
        local_4c = local_5c;
        local_60 = (int *******)0x0;
        local_50 = pppppppiVar3;
        local_5c = (int *******)0x0;
        local_68 = (int *******)&DAT_0187f9a4;
        local_23c = (int *******)0x0;
        local_240 = (int *******)0x0;
        local_248 = (int *******)&DAT_0187f9a4;
        local_64 = local_244;
        FUN_00f5ee98(&local_23c,local_244,0);
        local_48 = local_58;
        local_44 = local_54;
        pppppppiStack_40 = local_50;
        local_3c = local_4c;
        iVar11 = (*(code *)local_58[3])(&local_3c);
        pppppppiVar19 = pppppppiStack_40;
        pppppppiVar3 = local_44;
        if (iVar11 == 0) {
          iVar11 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)-iVar11;
          local_238 = local_3c;
          local_244 = local_48;
          local_240 = local_44;
          local_23c = pppppppiStack_40;
          local_2c[0] = local_3c;
          local_248 = (int *******)&DAT_00000001;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = pppppppiStack_40;
          if (pppppppiVar18 < pppppppiStack_40) {
            FUN_00f5f538(ppppppiVar22,pppppppiStack_40);
            iVar11 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
          }
          FUN_016dd1aa((int)*ppppppiVar22 + iVar11,pppppppiVar3,pppppppiVar19);
          if (pppppppiVar18 < pppppppiVar19) {
            local_48 = pppppppiVar19;
            local_44 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar22 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar11 + (int)pppppppiVar19;
          (*(code *)ppppppiVar22)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = pppppppiStack_40;
          (*(code *)local_48[2])(&local_244,local_2c);
          local_248 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar9 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar9;
              bVar23 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar23);
            *piVar9 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_014cb548;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_014cb548:
            thunk_FUN_016d3fb4(piVar15);
          }
          *ppppppiVar22 = (int *****)local_244;
          *(int ********)(param_1 + 0xac) = local_240;
          *(int ********)(param_1 + 0xb0) = local_23c;
          *(int ********)(param_1 + 0xb4) = local_238;
        }
      }
      else {
        if ((int *******)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac)) < pppppppiVar3) {
          FUN_00f5f538(ppppppiVar22,pppppppiVar3);
        }
        while( true ) {
          pppppppiVar19 = local_60;
          pppppppiVar3 = local_64;
          if (local_60 == (int *******)0x0) break;
          iVar11 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
          if (pppppppiVar18 < local_60) {
            FUN_00f5f538(ppppppiVar22,local_60);
            iVar11 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar11);
          }
          FUN_016dd1aa((int)*ppppppiVar22 + iVar11,pppppppiVar3,pppppppiVar19);
          if (pppppppiVar18 < pppppppiVar19) {
            local_248 = pppppppiVar19;
            local_244 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_248);
          }
          *(undefined1 **)(param_1 + 0xac) = (undefined1 *)(iVar11 + (int)pppppppiVar19);
          local_48 = pppppppiVar19;
          if (local_60 < pppppppiVar19) {
            local_38 = local_60;
            local_240 = (int *******)&local_38;
            local_248 = (int *******)&local_48;
            local_23c = (int *******)FUN_007883b8;
            local_244 = (int *******)FUN_007883b8;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_248,&DAT_018a6700);
          }
          local_64 = (int *******)((int)local_64 + (int)pppppppiVar19);
          local_60 = (int *******)((int)local_60 - (int)pppppppiVar19);
        }
        (*(code *)local_68[4])(&local_5c,local_64,0);
      }
    }
    (*(code *)local_a8[4])(&local_9c,local_a4,local_a0);
    if (local_260 == (int *******)&SUB_00000002) goto LAB_014cba68;
    goto LAB_014cba38;
  case 7:
    local_248 = (int *******)param_2[1];
    ppppppiVar16 = param_2[2];
    local_244 = (int *******)CONCAT22(local_244._2_2_,0x800);
    FUN_014296e8(&local_248,4,ppppppiVar22);
    iVar11 = *(int *)(param_1 + 0xac);
    uVar17 = (int)ppppppiVar16 << 0x18 | ((uint)ppppppiVar16 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar16 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar16 >> 0x18;
    if (3 < (uint)(*(int *)(param_1 + 0xb0) - iVar11)) {
      pppppiVar7 = *ppppppiVar22;
      goto LAB_014cad54;
    }
    FUN_00f5f538(ppppppiVar22,4);
LAB_014cacd8:
    iVar11 = *(int *)(param_1 + 0xac);
    iVar8 = *(int *)(param_1 + 0xb0);
    *(uint *)(*(int *)(param_1 + 0xa8) + iVar11) = uVar17;
    ppppppiVar5 = (int ******)(iVar8 - iVar11);
    if (ppppppiVar5 < (int ******)0x4) goto LAB_014cacf4;
    goto LAB_014cad58;
  case 8:
    ppppppiVar16 = param_2[1];
    ppppppiVar20 = param_2[2];
    iVar11 = *(int *)(param_1 + 0xac);
    iVar8 = *(int *)(param_1 + 0xb0);
    if ((uint)(iVar8 - iVar11) < 3) {
      FUN_00f5f538(ppppppiVar22,3);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      puVar4 = (undefined2 *)(*(int *)(param_1 + 0xa8) + iVar11);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 4;
      ppppppiVar5 = (int ******)(iVar8 - iVar11);
      if (ppppppiVar5 < (int ******)0x3) {
        local_a8 = (int *******)0x3;
        goto LAB_014cbbc4;
      }
      iVar11 = iVar11 + 3;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 == iVar11) goto LAB_014ca818;
LAB_014caba0:
      *(undefined1 *)((int)*ppppppiVar22 + iVar11) = 3;
      iVar11 = iVar11 + 1;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 == iVar11) goto LAB_014ca86c;
LAB_014cabbc:
      *(undefined1 *)((int)*ppppppiVar22 + iVar11) = 0;
    }
    else {
      pppppiVar7 = *ppppppiVar22;
      *(undefined2 *)((int)pppppiVar7 + iVar11) = 0;
      *(undefined1 *)((undefined2 *)((int)pppppiVar7 + iVar11) + 1) = 4;
      iVar11 = iVar11 + 3;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 != iVar11) goto LAB_014caba0;
LAB_014ca818:
      FUN_00f5f538(ppppppiVar22,1);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar11) = 3;
      if (iVar8 == iVar11) {
        local_a8 = (int *******)0x1;
        ppppppiVar5 = (int ******)0x0;
        goto LAB_014cbbc4;
      }
      iVar11 = iVar11 + 1;
      *(int *)(param_1 + 0xac) = iVar11;
      if (iVar8 != iVar11) goto LAB_014cabbc;
LAB_014ca86c:
      FUN_00f5f538(ppppppiVar22,1);
      ppppppiVar5 = (int ******)0x0;
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar11) = 0;
      if (iVar8 == iVar11) {
        local_a8 = (int *******)0x1;
        goto LAB_014cbbc4;
      }
    }
    iVar11 = iVar11 + 1;
    uVar17 = (int)ppppppiVar16 << 0x18 | ((uint)ppppppiVar16 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar16 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar16 >> 0x18;
    *(int *)(param_1 + 0xac) = iVar11;
    if ((uint)(iVar8 - iVar11) < 4) {
      FUN_00f5f538(ppppppiVar22,4);
      iVar11 = *(int *)(param_1 + 0xac);
      iVar8 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar11) = uVar17;
      ppppppiVar5 = (int ******)(iVar8 - iVar11);
      if ((int ******)0x3 < ppppppiVar5) goto LAB_014caca0;
LAB_014cacf4:
      local_a8 = (int *******)0x4;
LAB_014cbbc4:
      local_a4 = (int *******)ppppppiVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_a8);
    }
    *(uint *)((int)*ppppppiVar22 + iVar11) = uVar17;
LAB_014caca0:
    iVar11 = iVar11 + 4;
    uVar17 = (int)ppppppiVar20 << 0x18 | ((uint)ppppppiVar20 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar20 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar20 >> 0x18;
    *(int *)(param_1 + 0xac) = iVar11;
    if ((uint)(iVar8 - iVar11) < 4) {
      FUN_00f5f538(ppppppiVar22,4);
      goto LAB_014cacd8;
    }
    pppppiVar7 = *ppppppiVar22;
LAB_014cad54:
    *(uint *)((int)pppppiVar7 + iVar11) = uVar17;
LAB_014cad58:
    iVar11 = iVar11 + 4;
LAB_014cad5c:
    *(int *)(param_1 + 0xac) = iVar11;
  }
  if (local_260 != (int *******)&SUB_00000002) {
LAB_014cba38:
    pppppppiVar3 = local_25c;
    if (((uint)local_260 & 1) != 0) {
      pppppppiVar3 = (int *******)((int)local_25c + ((int)local_258[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_258[0xd])(pppppppiVar3,&local_268);
  }
LAB_014cba68:
  FUN_005c3320(&local_268);
  return 0xc;
LAB_014cbb40:
  uVar13 = 0x23;
  puVar12 = &DAT_018a49b8;
LAB_014cbb4c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(local_270,uVar13,puVar12);
}

