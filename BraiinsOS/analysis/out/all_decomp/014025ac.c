// FUN_014025ac @ 014025ac size=6424 calls_out=17 calls_in=1
// strings: assertion failed: cnt <= self.limit | assertion failed: self.has_capacity() | assertion failed: cnt <= self.limit | not implemented | chunk not fully encoded

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_014025ac(int param_1,int *******param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *******pppppppiVar3;
  int ******ppppppiVar4;
  undefined2 *puVar5;
  int ******ppppppiVar6;
  undefined4 *puVar7;
  int *******pppppppiVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 uVar14;
  int *piVar15;
  int ******ppppppiVar16;
  uint uVar17;
  int *******pppppppiVar18;
  undefined4 uVar19;
  int *******pppppppiVar20;
  bool bVar21;
  char *local_274;
  int *******local_268;
  int *******local_264;
  int *******local_260;
  int *******local_25c;
  int *******local_258;
  int ******ppppppiStack_254;
  int *******pppppppiStack_250;
  int ******ppppppiStack_24c;
  int *******local_248;
  int *******local_244;
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
    local_260 = (int *******)&DAT_018a37cc;
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
  pppppppiVar3 = (int *******)(param_1 + 0xa8);
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
    local_218 = (int *******)param_2[0xe];
    uStack_214 = param_2[0xf];
    pppppppiVar8 = (int *******)0x0;
    if (local_248 != (int *******)&SUB_00000002) {
      if (local_248 == (int *******)&DAT_00000001) {
        if ((local_234 == (int ******)0x0) &&
           (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238)) {
          pppppppiVar8 = (int *******)0x0;
        }
      }
      else {
        pppppppiVar8 = local_23c;
      }
    }
    if (local_230 < pppppppiVar8) {
      pppppppiVar8 = local_230;
    }
    if (*(int ********)(param_1 + 0xc0) < pppppppiVar8) {
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
    if (pppppppiVar8 < *(int ********)(param_1 + 0xc4)) {
      pppppppiVar8 = (int *******)0x0;
      if (local_248 != (int *******)&SUB_00000002) {
        if (local_248 == (int *******)&DAT_00000001) {
          if ((local_234 == (int ******)0x0) &&
             (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238))
          {
            pppppppiVar8 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar8 = local_23c;
        }
      }
      if (local_230 < pppppppiVar8) {
        pppppppiVar8 = local_230;
      }
      if ((int *******)(*(uint *)(param_1 + 0xac) ^ 0x7fffffff) < pppppppiVar8) {
        uVar14 = 0x2c;
        puVar13 = &DAT_018a5878;
        local_274 = &DAT_00408f30;
        goto LAB_01403e30;
      }
      local_a4 = (int *******)(CONCAT31((int3)((uint)local_a4 >> 8),uStack_214._2_1_) & 0xffff00ff);
      local_a8 = local_218;
      FUN_014296e8(&local_a8,pppppppiVar8,pppppppiVar3);
      pppppppiVar8 = (int *******)0x0;
      if (local_248 != (int *******)&SUB_00000002) {
        if (local_248 == (int *******)&DAT_00000001) {
          if ((local_234 == (int ******)0x0) &&
             (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238))
          {
            pppppppiVar8 = (int *******)0x0;
          }
        }
        else {
          pppppppiVar8 = local_23c;
        }
      }
      if (local_230 < pppppppiVar8) {
        pppppppiVar8 = local_230;
      }
      if (pppppppiVar8 != (int *******)0x0) {
        if (*(int *)(param_1 + 0xb0) != 0) {
          pppppppiVar8 = (int *******)0x0;
          if (local_248 != (int *******)&SUB_00000002) {
            if (local_248 == (int *******)&DAT_00000001) {
              if ((local_234 == (int ******)0x0) &&
                 (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238),
                 local_23c < local_238)) {
                pppppppiVar8 = (int *******)0x0;
              }
            }
            else {
              pppppppiVar8 = local_23c;
            }
          }
          if (local_230 < pppppppiVar8) {
            pppppppiVar8 = local_230;
          }
          if ((int *******)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac)) < pppppppiVar8) {
            FUN_00f5f538(pppppppiVar3);
          }
          local_274 = "assertion failed: cnt <= self.limit";
          do {
            pppppppiVar8 = (int *******)0x0;
            if (local_248 != (int *******)&SUB_00000002) {
              if (local_248 == (int *******)&DAT_00000001) {
                if ((local_234 == (int ******)0x0) &&
                   (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238),
                   local_23c < local_238)) {
                  pppppppiVar8 = (int *******)0x0;
                }
              }
              else {
                pppppppiVar8 = local_23c;
              }
            }
            if (local_230 < pppppppiVar8) {
              pppppppiVar8 = local_230;
            }
            if (pppppppiVar8 == (int *******)0x0) goto LAB_01403c08;
            if (local_248 == (int *******)&SUB_00000002) {
              pppppppiVar20 = (int *******)&DAT_00000001;
              pppppppiVar8 = (int *******)0x0;
            }
            else if (local_248 == (int *******)&DAT_00000001) {
              pppppppiVar20 = local_238;
              if (local_23c < local_238) {
                pppppppiVar20 = local_23c;
              }
              if (local_234 != (int ******)0x0) {
                pppppppiVar20 = local_23c;
              }
              pppppppiVar8 = (int *******)((int)local_23c - (int)pppppppiVar20);
              pppppppiVar20 = (int *******)((int)local_240 + (int)pppppppiVar20);
            }
            else {
              pppppppiVar8 = local_23c;
              pppppppiVar20 = local_240;
            }
            iVar12 = *(int *)(param_1 + 0xac);
            if (local_230 < pppppppiVar8) {
              pppppppiVar8 = local_230;
            }
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
            if (pppppppiVar18 < pppppppiVar8) {
              FUN_00f5f538(pppppppiVar3,pppppppiVar8);
              iVar12 = *(int *)(param_1 + 0xac);
              pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
            }
            FUN_016dd1aa((int)*pppppppiVar3 + iVar12,pppppppiVar20,pppppppiVar8);
            if (pppppppiVar18 < pppppppiVar8) {
LAB_01403dcc:
              local_a8 = pppppppiVar8;
              local_a4 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
              FUN_00f600c0();
            }
            *(int *)(param_1 + 0xac) = iVar12 + (int)pppppppiVar8;
            if (local_230 < pppppppiVar8) goto LAB_01403e24;
            if (local_248 != (int *******)&SUB_00000002) {
              if (local_248 == (int *******)&DAT_00000001) {
                pppppppiVar18 = (int *******)0x0;
                if ((local_234 == (int ******)0x0) &&
                   (pppppppiVar18 = (int *******)((int)local_23c - (int)local_238),
                   local_23c < local_238)) {
                  pppppppiVar18 = (int *******)0x0;
                }
                if (pppppppiVar18 < pppppppiVar8) goto LAB_01403dcc;
                bVar21 = CARRY4((uint)local_238,(uint)pppppppiVar8);
                local_238 = (int *******)((int)local_238 + (int)pppppppiVar8);
                local_234 = (int ******)((int)local_234 + (uint)bVar21);
              }
              else {
                local_48 = pppppppiVar8;
                if (local_23c < pppppppiVar8) {
                  local_38 = local_23c;
                  local_a0 = (int *******)&local_38;
                  local_9c = (int *******)FUN_007883b8;
                  local_a4 = (int *******)FUN_007883b8;
                  local_a8 = (int *******)&local_48;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_00584155,&local_a8,&DAT_018a6700);
                }
                local_23c = (int *******)((int)local_23c - (int)pppppppiVar8);
                local_240 = (int *******)((int)local_240 + (int)pppppppiVar8);
              }
            }
            local_230 = (int *******)((int)local_230 - (int)pppppppiVar8);
          } while( true );
        }
        pppppppiVar8 = (int *******)0x0;
        if (local_248 != (int *******)&SUB_00000002) {
          if (local_248 == (int *******)&DAT_00000001) {
            if ((local_234 == (int ******)0x0) &&
               (pppppppiVar8 = (int *******)((int)local_23c - (int)local_238), local_23c < local_238
               )) {
              pppppppiVar8 = (int *******)0x0;
            }
          }
          else {
            pppppppiVar8 = local_23c;
          }
        }
        if (local_230 < pppppppiVar8) {
          pppppppiVar8 = local_230;
        }
        FUN_014104e4(&local_58,&local_248,pppppppiVar8);
        local_48 = local_58;
        local_44 = local_54;
        local_40 = local_50;
        local_3c = local_4c;
        iVar12 = (*(code *)local_58[3])(&local_3c);
        pppppppiVar20 = local_40;
        pppppppiVar8 = local_44;
        if (iVar12 == 0) {
          iVar12 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
          local_a4 = local_48;
          local_a0 = local_44;
          local_9c = local_40;
          local_98 = local_3c;
          local_2c[0] = local_3c;
          local_a8 = (int *******)&DAT_00000001;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          if (pppppppiVar18 < local_40) {
            FUN_00f5f538(pppppppiVar3,local_40);
            iVar12 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
          }
          FUN_016dd1aa((int)*pppppppiVar3 + iVar12,pppppppiVar8,pppppppiVar20);
          if (pppppppiVar18 < pppppppiVar20) {
            local_48 = pppppppiVar20;
            local_44 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar4 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar12 + (int)pppppppiVar20;
          (*(code *)ppppppiVar4)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          (*(code *)local_48[2])(&local_a4,local_2c);
          local_a8 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar10 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar10;
              bVar21 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar21);
            *piVar10 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_01403bf8;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_01403bf8:
            thunk_FUN_016d3fb4(piVar15);
          }
          *pppppppiVar3 = (int ******)local_a4;
          *(int ********)(param_1 + 0xac) = local_a0;
          *(int ********)(param_1 + 0xb0) = local_9c;
          *(int ********)(param_1 + 0xb4) = local_98;
        }
      }
LAB_01403c08:
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
      iVar12 = *(int *)(param_1 + 0x38);
      if (iVar12 != 3) {
        if (iVar12 == 1) {
          if (*(int *)(param_1 + 0x44) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
          }
        }
        else if (iVar12 == 0) {
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
      local_38 = local_218;
      FUN_014296e8(&local_38,pppppppiVar8,pppppppiVar3);
      uVar17 = *(uint *)(param_1 + 0xac);
      if (uVar17 < *(uint *)(param_1 + 0xc4)) {
        iVar12 = 0;
        if ((*(int *)(param_1 + 0xbc) == 0) &&
           (iVar12 = uVar17 - *(uint *)(param_1 + 0xb8), uVar17 < *(uint *)(param_1 + 0xb8))) {
          iVar12 = 0;
        }
        FUN_01415d28(pppppppiVar3,&local_248,*(uint *)(param_1 + 0xc4) - iVar12);
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
      iVar12 = *piVar15;
      if (iVar12 != 4) {
        if (iVar12 == 0 || iVar12 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar12 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
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
    local_248 = pppppppiVar3;
    FUN_01026230(&local_a8,auStack_208,param_1,&local_248);
    if (local_a8 != (int *******)0x0) {
      iVar12 = *piVar15;
      if (iVar12 != 4) {
        if (iVar12 == 0 || iVar12 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar12 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
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
    local_248 = pppppppiVar3;
    FUN_01022ba8(&local_a8,auStack_158,param_1,&local_248);
    if (local_a8 != (int *******)0x0) {
      iVar12 = *piVar15;
      if (iVar12 != 4) {
        if (iVar12 == 0 || iVar12 == 3) {
          (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                    (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c))
          ;
        }
        else if ((iVar12 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
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
    if (local_260 == (int *******)&SUB_00000002) goto LAB_01403d28;
    goto LAB_01403cf8;
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
    FUN_010204cc(&local_a8,pppppppiVar3);
    break;
  case 5:
    uVar14 = *(undefined4 *)((int)param_2 + 6);
    uVar19 = *(undefined4 *)((int)param_2 + 2);
    uVar1 = *(undefined1 *)((int)param_2 + 1);
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    if ((uint)(iVar9 - iVar12) < 3) {
      FUN_00f5f538(pppppppiVar3,3);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0xa8) + iVar12);
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 8;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar6 < (int ******)0x3) {
LAB_01403dfc:
        local_a8 = (int *******)0x3;
        goto LAB_01403e04;
      }
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_01402c98;
LAB_01402f18:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 6;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402f34;
LAB_01402ce0:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar1;
      if (iVar9 == iVar12) {
LAB_01402d14:
        local_a8 = (int *******)0x1;
        ppppppiVar6 = (int ******)0x0;
        goto LAB_01403e04;
      }
    }
    else {
      ppppppiVar4 = *pppppppiVar3;
      *(undefined2 *)((int)ppppppiVar4 + iVar12) = 0;
      *(undefined1 *)((undefined2 *)((int)ppppppiVar4 + iVar12) + 1) = 8;
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402f18;
LAB_01402c98:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 6;
      if (iVar9 == iVar12) goto LAB_01402d14;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_01402ce0;
LAB_01402f34:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = uVar1;
    }
    iVar12 = iVar12 + 1;
    *(int *)(param_1 + 0xac) = iVar12;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar12) = 0;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar6 < (int ******)0x4) goto LAB_01403084;
    }
    else {
      *(undefined4 *)((int)*pppppppiVar3 + iVar12) = 0;
    }
    iVar12 = iVar12 + 4;
    *(int *)(param_1 + 0xac) = iVar12;
    if ((uint)(iVar9 - iVar12) < 8) {
      FUN_00f5f538(pppppppiVar3,8);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0xa8) + iVar12);
      *puVar7 = uVar19;
      puVar7[1] = uVar14;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar6 < (int ******)0x8) {
        local_a8 = (int *******)0x8;
        goto LAB_01403e04;
      }
    }
    else {
      ppppppiVar4 = *pppppppiVar3;
      *(undefined4 *)((int)ppppppiVar4 + iVar12) = uVar19;
      ((undefined4 *)((int)ppppppiVar4 + iVar12))[1] = uVar14;
    }
    iVar12 = iVar12 + 8;
    goto LAB_01403174;
  case 6:
    local_a8 = (int *******)param_2[1];
    local_a4 = (int *******)param_2[2];
    local_a0 = (int *******)param_2[3];
    local_9c = (int *******)param_2[4];
    local_98 = (int *******)param_2[5];
    local_94 = param_2[6];
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    pppppppiVar8 = local_a0 + 2;
    uVar2 = (ushort)((((uint)pppppppiVar8 >> 8 & 0xff) << 0x10) >> 8) |
            (ushort)((uint)pppppppiVar8 >> 0x10) & 0xff;
    uVar1 = (undefined1)((uint)((int)pppppppiVar8 * 0x1000000) >> 0x18);
    if ((uint)(iVar9 - iVar12) < 3) {
      FUN_00f5f538(pppppppiVar3,3);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      puVar11 = (ushort *)(*(int *)(param_1 + 0xa8) + iVar12);
      *puVar11 = uVar2;
      *(undefined1 *)(puVar11 + 1) = uVar1;
      ppppppiVar4 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar4 < (int ******)0x3) {
        local_248 = (int *******)0x3;
        goto LAB_01403e78;
      }
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_01402810;
LAB_01402d48:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 7;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_01402848;
LAB_01402d64:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 0;
    }
    else {
      ppppppiVar4 = *pppppppiVar3;
      *(ushort *)((int)ppppppiVar4 + iVar12) = uVar2;
      *(undefined1 *)((ushort *)((int)ppppppiVar4 + iVar12) + 1) = uVar1;
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402d48;
LAB_01402810:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 7;
      if (iVar9 == iVar12) {
        local_248 = (int *******)0x1;
        ppppppiVar4 = (int ******)0x0;
        goto LAB_01403e78;
      }
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402d64;
LAB_01402848:
      FUN_00f5f538(pppppppiVar3,1);
      ppppppiVar4 = (int ******)0x0;
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 0;
      if (iVar9 == iVar12) {
        local_248 = (int *******)0x1;
        goto LAB_01403e78;
      }
    }
    iVar12 = iVar12 + 1;
    *(int *)(param_1 + 0xac) = iVar12;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined4 *)(*(int *)(param_1 + 0xa8) + iVar12) = 0;
      ppppppiVar4 = (int ******)(iVar9 - iVar12);
      if ((int ******)0x3 < ppppppiVar4) goto LAB_01402f9c;
LAB_01403154:
      local_248 = (int *******)0x4;
LAB_01403e78:
      local_244 = (int *******)ppppppiVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0();
    }
    *(undefined4 *)((int)*pppppppiVar3 + iVar12) = 0;
LAB_01402f9c:
    iVar12 = iVar12 + 4;
    *(int *)(param_1 + 0xac) = iVar12;
    uVar17 = (int)local_98 << 0x18 | ((uint)local_98 >> 8 & 0xff) << 0x10 |
             ((uint)local_98 >> 0x10 & 0xff) << 8 | (uint)local_98 >> 0x18;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar17;
      ppppppiVar4 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar4 < (int ******)0x4) goto LAB_01403154;
    }
    else {
      *(uint *)((int)*pppppppiVar3 + iVar12) = uVar17;
    }
    iVar12 = iVar12 + 4;
    *(int *)(param_1 + 0xac) = iVar12;
    uVar17 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
             ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      ppppppiVar4 = (int ******)(*(int *)(param_1 + 0xb0) - iVar12);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar17;
      if (ppppppiVar4 < (int ******)0x4) goto LAB_01403154;
    }
    else {
      *(uint *)((int)*pppppppiVar3 + iVar12) = uVar17;
    }
    pppppppiVar8 = local_a0;
    *(int *)(param_1 + 0xac) = iVar12 + 4;
    if (local_a0 == (int *******)0x0) {
      local_5c = (int *******)0x0;
      local_68 = (int *******)&PTR_LAB_018a3b2c;
      local_64 = local_a4;
      local_60 = (int *******)0x0;
    }
    else {
      (*(code *)*local_a8)(&local_68,&local_9c,local_a4,local_a0);
      local_60 = pppppppiVar8;
      if (*(int *)(param_1 + 0xb0) == 0) {
        local_54 = local_64;
        local_244 = (int *******)((int)local_64 + (int)pppppppiVar8);
        local_58 = local_68;
        local_4c = local_5c;
        local_60 = (int *******)0x0;
        local_50 = pppppppiVar8;
        local_5c = (int *******)0x0;
        local_68 = (int *******)&DAT_0187f9a4;
        local_23c = (int *******)0x0;
        local_240 = (int *******)0x0;
        local_248 = (int *******)&DAT_0187f9a4;
        local_64 = local_244;
        FUN_00f5ee98(&local_23c,local_244,0);
        local_48 = local_58;
        local_44 = local_54;
        local_40 = local_50;
        local_3c = local_4c;
        iVar12 = (*(code *)local_58[3])(&local_3c);
        pppppppiVar20 = local_40;
        pppppppiVar8 = local_44;
        if (iVar12 == 0) {
          iVar12 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)-iVar12;
          local_238 = local_3c;
          local_23c = local_40;
          local_240 = local_44;
          local_244 = local_48;
          local_248 = (int *******)&DAT_00000001;
          local_2c[0] = local_3c;
          local_30 = local_40;
          local_34 = local_44;
          local_38 = local_48;
          if (pppppppiVar18 < local_40) {
            FUN_00f5f538(pppppppiVar3,local_40);
            iVar12 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
          }
          FUN_016dd1aa((int)*pppppppiVar3 + iVar12,pppppppiVar8,pppppppiVar20);
          if (pppppppiVar18 < pppppppiVar20) {
            local_48 = pppppppiVar20;
            local_44 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_48);
          }
          ppppppiVar4 = local_38[4];
          *(int *)(param_1 + 0xac) = iVar12 + (int)pppppppiVar20;
          (*(code *)ppppppiVar4)(local_2c,local_34,local_30);
        }
        else {
          local_2c[0] = local_3c;
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          (*(code *)local_48[2])(&local_244,local_2c);
          local_248 = (int *******)0x0;
          piVar15 = *(int **)(param_1 + 0xb4);
          if (((uint)piVar15 & 1) == 0) {
            piVar10 = piVar15 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar10;
              bVar21 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar21);
            *piVar10 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar15 != 0) {
                thunk_FUN_016d3fb4(piVar15[1]);
              }
              goto LAB_0140380c;
            }
          }
          else if (*(int *)(param_1 + 0xb0) + ((uint)piVar15 >> 5) != 0) {
            piVar15 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar15 >> 5));
LAB_0140380c:
            thunk_FUN_016d3fb4(piVar15);
          }
          *pppppppiVar3 = (int ******)local_244;
          *(int ********)(param_1 + 0xac) = local_240;
          *(int ********)(param_1 + 0xb0) = local_23c;
          *(int ********)(param_1 + 0xb4) = local_238;
        }
      }
      else {
        if ((int *******)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac)) < pppppppiVar8) {
          FUN_00f5f538(pppppppiVar3,pppppppiVar8);
        }
        while( true ) {
          pppppppiVar20 = local_60;
          pppppppiVar8 = local_64;
          if (local_60 == (int *******)0x0) break;
          iVar12 = *(int *)(param_1 + 0xac);
          pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
          if (pppppppiVar18 < local_60) {
            FUN_00f5f538(pppppppiVar3,local_60);
            iVar12 = *(int *)(param_1 + 0xac);
            pppppppiVar18 = (int *******)(*(int *)(param_1 + 0xb0) - iVar12);
          }
          FUN_016dd1aa((int)*pppppppiVar3 + iVar12,pppppppiVar8,pppppppiVar20);
          if (pppppppiVar18 < pppppppiVar20) {
            local_248 = pppppppiVar20;
            local_244 = pppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_248);
          }
          *(undefined1 **)(param_1 + 0xac) = (undefined1 *)(iVar12 + (int)pppppppiVar20);
          local_48 = pppppppiVar20;
          if (local_60 < pppppppiVar20) {
            local_38 = local_60;
            local_240 = (int *******)&local_38;
            local_248 = (int *******)&local_48;
            local_23c = (int *******)FUN_007883b8;
            local_244 = (int *******)FUN_007883b8;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_248,&DAT_018a6700);
          }
          local_64 = (int *******)((int)local_64 + (int)pppppppiVar20);
          local_60 = (int *******)((int)local_60 - (int)pppppppiVar20);
        }
        (*(code *)local_68[4])(&local_5c,local_64,0);
      }
    }
    (*(code *)local_a8[4])(&local_9c,local_a4,local_a0);
    if (local_260 == (int *******)&SUB_00000002) goto LAB_01403d28;
    goto LAB_01403cf8;
  case 7:
    ppppppiVar16 = param_2[1];
    ppppppiVar4 = param_2[2];
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    if ((uint)(iVar9 - iVar12) < 3) {
      FUN_00f5f538(pppppppiVar3,3);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0xa8) + iVar12);
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 4;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if (ppppppiVar6 < (int ******)0x3) goto LAB_01403dfc;
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_014028fc;
LAB_01402dd8:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 8;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 == iVar12) goto LAB_01402944;
LAB_01402df4:
      *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 0;
    }
    else {
      ppppppiVar6 = *pppppppiVar3;
      *(undefined2 *)((int)ppppppiVar6 + iVar12) = 0;
      *(undefined1 *)((undefined2 *)((int)ppppppiVar6 + iVar12) + 1) = 4;
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402dd8;
LAB_014028fc:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 8;
      if (iVar9 == iVar12) goto LAB_01402d14;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402df4;
LAB_01402944:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 0;
      if (iVar9 == iVar12) goto LAB_01402a84;
    }
    iVar12 = iVar12 + 1;
    uVar17 = (int)ppppppiVar16 << 0x18 | ((uint)ppppppiVar16 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar16 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar16 >> 0x18;
    *(int *)(param_1 + 0xac) = iVar12;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar17;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if ((int ******)0x3 < ppppppiVar6) goto LAB_01402fec;
LAB_01403084:
      local_a8 = (int *******)0x4;
LAB_01403e04:
      local_a4 = (int *******)ppppppiVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_a8);
    }
    *(uint *)((int)*pppppppiVar3 + iVar12) = uVar17;
LAB_01402fec:
    iVar12 = iVar12 + 4;
    *(int *)(param_1 + 0xac) = iVar12;
    uVar17 = (int)ppppppiVar4 << 0x18 | ((uint)ppppppiVar4 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar4 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar4 >> 0x18;
    if (3 < (uint)(iVar9 - iVar12)) goto LAB_0140308c;
    FUN_00f5f538(pppppppiVar3,4);
LAB_01403068:
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    *(uint *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar17;
    ppppppiVar6 = (int ******)(iVar9 - iVar12);
    if (ppppppiVar6 < (int ******)0x4) goto LAB_01403084;
    goto LAB_01403094;
  case 8:
    ppppppiVar16 = param_2[1];
    ppppppiVar4 = param_2[2];
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    if (2 < (uint)(iVar9 - iVar12)) {
      ppppppiVar6 = *pppppppiVar3;
      *(undefined2 *)((int)ppppppiVar6 + iVar12) = 0;
      *(undefined1 *)((undefined2 *)((int)ppppppiVar6 + iVar12) + 1) = 4;
      iVar12 = iVar12 + 3;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402e78;
LAB_01402a04:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 3;
      if (iVar9 == iVar12) goto LAB_01402d14;
      iVar12 = iVar12 + 1;
      *(int *)(param_1 + 0xac) = iVar12;
      if (iVar9 != iVar12) goto LAB_01402e94;
LAB_01402a4c:
      FUN_00f5f538(pppppppiVar3,1);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(*(int *)(param_1 + 0xa8) + iVar12) = 0;
      if (iVar9 != iVar12) goto LAB_01402ea0;
LAB_01402a84:
      ppppppiVar6 = (int ******)0x0;
      local_a8 = (int *******)0x1;
      goto LAB_01403e04;
    }
    FUN_00f5f538(pppppppiVar3,3);
    iVar12 = *(int *)(param_1 + 0xac);
    iVar9 = *(int *)(param_1 + 0xb0);
    puVar5 = (undefined2 *)(*(int *)(param_1 + 0xa8) + iVar12);
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 1) = 4;
    ppppppiVar6 = (int ******)(iVar9 - iVar12);
    if (ppppppiVar6 < (int ******)0x3) goto LAB_01403dfc;
    iVar12 = iVar12 + 3;
    *(int *)(param_1 + 0xac) = iVar12;
    if (iVar9 == iVar12) goto LAB_01402a04;
LAB_01402e78:
    *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 3;
    iVar12 = iVar12 + 1;
    *(int *)(param_1 + 0xac) = iVar12;
    if (iVar9 == iVar12) goto LAB_01402a4c;
LAB_01402e94:
    *(undefined1 *)((int)*pppppppiVar3 + iVar12) = 0;
LAB_01402ea0:
    iVar12 = iVar12 + 1;
    uVar17 = (int)ppppppiVar16 << 0x18 | ((uint)ppppppiVar16 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar16 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar16 >> 0x18;
    *(int *)(param_1 + 0xac) = iVar12;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      iVar12 = *(int *)(param_1 + 0xac);
      iVar9 = *(int *)(param_1 + 0xb0);
      *(uint *)(*(int *)(param_1 + 0xa8) + iVar12) = uVar17;
      ppppppiVar6 = (int ******)(iVar9 - iVar12);
      if ((int ******)0x3 < ppppppiVar6) goto LAB_01403030;
      goto LAB_01403084;
    }
    *(uint *)((int)*pppppppiVar3 + iVar12) = uVar17;
LAB_01403030:
    iVar12 = iVar12 + 4;
    *(int *)(param_1 + 0xac) = iVar12;
    uVar17 = (int)ppppppiVar4 << 0x18 | ((uint)ppppppiVar4 >> 8 & 0xff) << 0x10 |
             ((uint)ppppppiVar4 >> 0x10 & 0xff) << 8 | (uint)ppppppiVar4 >> 0x18;
    if ((uint)(iVar9 - iVar12) < 4) {
      FUN_00f5f538(pppppppiVar3,4);
      goto LAB_01403068;
    }
LAB_0140308c:
    *(uint *)((int)*pppppppiVar3 + iVar12) = uVar17;
LAB_01403094:
    iVar12 = iVar12 + 4;
LAB_01403174:
    *(int *)(param_1 + 0xac) = iVar12;
  }
  if (local_260 != (int *******)&SUB_00000002) {
LAB_01403cf8:
    pppppppiVar3 = local_25c;
    if (((uint)local_260 & 1) != 0) {
      pppppppiVar3 = (int *******)((int)local_25c + ((int)local_258[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_258[0xd])(pppppppiVar3,&local_268);
  }
LAB_01403d28:
  FUN_005c3320(&local_268);
  return 0xc;
LAB_01403e24:
  uVar14 = 0x23;
  puVar13 = &DAT_018a49b8;
LAB_01403e30:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(local_274,uVar14,puVar13);
}

