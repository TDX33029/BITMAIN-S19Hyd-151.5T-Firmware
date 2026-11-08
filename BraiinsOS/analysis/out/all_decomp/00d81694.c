// FUN_00d81694 @ 00d81694 size=2712 calls_out=31 calls_in=0
// strings: Failed to read from stdinPrometheusErrorProtobufDecodeErrorAlreadyHidden

void FUN_00d81694(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte ***pppbVar4;
  int ***pppiVar5;
  int ***pppiVar6;
  int ***pppiVar7;
  int ***pppiVar8;
  int ***pppiVar9;
  int ***pppiVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int ***pppiVar16;
  int ***unaff_r7;
  int iVar17;
  uint uVar18;
  int ***pppiVar19;
  bool bVar20;
  int local_298;
  undefined1 auStack_294 [12];
  int ***local_288;
  int ***local_284;
  int ***local_280;
  int ***local_278;
  int ***local_274;
  int ***local_270;
  uint local_268;
  int ***local_264;
  int ***local_260;
  int local_258;
  int local_254;
  int local_250;
  undefined1 local_24a;
  undefined1 local_249;
  undefined1 auStack_248 [128];
  int ***local_1c8;
  int ***local_1c4;
  int ***local_1c0;
  int ***local_1bc;
  byte ***local_1b8;
  int ***local_1b4;
  int ***local_1b0;
  undefined4 local_1ac;
  int ***local_1a8;
  int ***local_1a4;
  int ***local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int ***local_b0;
  int ***local_ac;
  int ***local_a8;
  uint uStack_a4;
  uint uStack_a0;
  int ***local_9c;
  int ***pppiStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((char)param_2[4] != '\0') {
    if ((char)param_2[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187a0c4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187a0c4);
  }
  iVar14 = *param_2;
  iVar12 = param_2[3];
  if (iVar14 == -0x80000000) {
    local_1b0 = (int ***)0x0;
    local_1b4 = (int ***)&DAT_00000001;
    local_1b8 = (byte ***)0x0;
    DataMemoryBarrier(0xb);
    if (DAT_018d9038 != 0) {
      FUN_015eed54();
    }
    FUN_016035dc(&local_1c8,&local_1b8);
    if ((char)local_1c8 == '\x04') {
      local_288 = (int ***)local_1b8;
      pppiVar7 = local_1b4;
      pppiVar8 = local_1b0;
      goto joined_r0x00d81718;
    }
    local_ac = local_1c4;
    local_b0 = local_1c8;
    pppiVar8 = (int ***)FUN_00e7b5bc(&local_b0,
                                     "Failed to read from stdinPrometheusErrorProtobufDecodeErrorAlreadyHidden"
                                     ,0x19);
    if (local_1b8 == (byte ***)0x0) goto LAB_00d8190c;
    pppiVar7 = local_1b4;
LAB_00d81908:
    thunk_FUN_016d3fb4(pppiVar7);
  }
  else {
    iVar17 = param_2[1];
    FUN_015ecd70(&local_1b8,iVar17,param_2[2]);
    if (iVar14 != 0) {
      thunk_FUN_016d3fb4(iVar17);
    }
    if (local_1b8 != (byte ***)&DAT_80000000) {
      local_288 = (int ***)local_1b8;
      pppiVar7 = local_1b4;
      pppiVar8 = local_1b0;
joined_r0x00d81718:
      local_284 = pppiVar7;
      local_280 = pppiVar8;
      local_1b8 = (byte ***)local_288;
      local_1b4 = pppiVar7;
      local_1b0 = pppiVar8;
      if ((char)iVar12 != '\0') {
        if ((char)iVar12 != '\x01') {
          FUN_00fab1e0(&local_1b8,pppiVar7,pppiVar8);
          pppiVar10 = local_1b0;
          pppiVar5 = local_1b4;
          pppiVar9 = local_288;
          if (local_1b8 == (byte ***)0x0) {
            pppiVar5 = pppiVar8;
            pppiVar8 = pppiVar7;
            if (local_288 != (int ***)&DAT_80000000) {
LAB_00d819c8:
              do {
                pppiVar8 = pppiVar5;
                pppiVar10 = (int ***)0x80000000;
                if (pppiVar8 == (int ***)0x0) {
                  pppiVar8 = (int ***)0x0;
                  break;
                }
                pbVar11 = (byte *)((int)pppiVar7 + (int)pppiVar8);
                pbVar13 = pbVar11 + -1;
                uVar18 = (uint)(char)*pbVar13;
                if (0x7fffffff < uVar18) {
                  pbVar13 = pbVar11 + -2;
                  bVar1 = *pbVar13;
                  if ((char)bVar1 < -0x40) {
                    pbVar13 = pbVar11 + -3;
                    bVar2 = *pbVar13;
                    unaff_r7 = (int ***)(uint)bVar2;
                    if ((char)bVar2 < -0x40) {
                      pbVar13 = pbVar11 + -4;
                      unaff_r7 = (int ***)((int)(char)bVar2 & 0x3f);
                      uVar15 = (uint)unaff_r7 | (*pbVar13 & 7) << 6;
                    }
                    else {
                      uVar15 = (uint)unaff_r7 & 0xf;
                    }
                    uVar15 = (int)(char)bVar1 & 0x3fU | uVar15 << 6;
                  }
                  else {
                    uVar15 = bVar1 & 0x1f;
                  }
                  uVar18 = uVar18 & 0x3f | uVar15 << 6;
                }
                pppiVar5 = (int ***)(pbVar13 + -(int)pppiVar7);
              } while (uVar18 == 10);
              FUN_00d451a4(&local_1c8,pppiVar7,pppiVar8);
              if (local_1c8 == (int ***)&DAT_80000000) {
                local_a8 = local_1c4;
                local_1b8 = (byte ***)0x3;
                local_ac = (int ***)&DAT_0000001f;
                local_b0 = (int ***)&DAT_00358971;
                pppiVar8 = (int ***)FUN_00f1f71c(&local_b0,&local_1b8);
                if (pppiVar9 == (int ***)0x0) goto LAB_00d81910;
                goto LAB_00d81bfc;
              }
              local_280 = local_1c0;
              local_284 = local_1c4;
              local_288 = local_1c8;
              if (pppiVar9 != (int ***)0x0) goto LAB_00d81c44;
              goto LAB_00d81c48;
            }
          }
          else {
            if (local_288 != (int ***)&DAT_80000000) {
              FUN_01602d08(&local_1b8);
              unaff_r7 = local_1a4;
              local_b0 = (int ***)local_1b8;
              local_ac = local_1b4;
              local_a8 = local_1b0;
              uStack_a4 = (uint)local_1ac;
              uStack_a0 = (uint)local_1a8;
              local_9c = local_1a4;
              local_1a0 = pppiVar10;
              local_1a4 = pppiVar5;
              local_1b0 = pppiVar9;
              local_1b4 = (int ***)0x22;
              local_1b8 = (byte ***)&DAT_00358934;
              local_1ac = pppiVar7;
              local_1a8 = pppiVar8;
              pppiVar8 = (int ***)FUN_00f1f260(&local_1b8);
              goto LAB_00d8190c;
            }
            bVar20 = pppiVar7 != (int ***)&DAT_80000000;
            pppiVar9 = pppiVar7;
            pppiVar7 = pppiVar8;
            if (bVar20) goto LAB_00d819c8;
          }
          pppiVar10 = (int ***)0x80000000;
          goto LAB_00d81910;
        }
        FUN_00fab1e0(&local_1b8,pppiVar7,pppiVar8);
        pppiVar19 = local_1b0;
        pppiVar16 = local_1b4;
        pppiVar10 = local_288;
        pppiVar9 = local_288;
        pppiVar6 = pppiVar7;
        pppiVar5 = pppiVar8;
        if (local_1b8 != (byte ***)0x0) {
          pppiVar9 = pppiVar7;
          pppiVar6 = pppiVar8;
          pppiVar5 = local_1b4;
          if (local_288 != (int ***)&DAT_80000000) {
            FUN_01602d08(&local_1b8);
            unaff_r7 = local_1a4;
            local_b0 = (int ***)local_1b8;
            local_ac = local_1b4;
            local_a8 = local_1b0;
            uStack_a4 = (uint)local_1ac;
            uStack_a0 = (uint)local_1a8;
            local_9c = local_1a4;
            local_1a0 = pppiVar19;
            local_1a4 = pppiVar16;
            local_1b0 = pppiVar10;
            local_1b4 = (int ***)0x22;
            local_1b8 = (byte ***)&DAT_00358934;
            local_1ac = pppiVar7;
            local_1a8 = pppiVar8;
            pppiVar8 = (int ***)FUN_00f1f260(&local_1b8);
            goto LAB_00d8190c;
          }
        }
        pppiVar7 = pppiVar6;
        if (pppiVar9 == (int ***)&DAT_80000000) {
          pppiVar10 = (int ***)0x80000000;
          pppiVar8 = pppiVar7;
          goto LAB_00d81910;
        }
        pppiVar16 = (int ***)0x0;
        local_1c0 = (int ***)0x0;
        local_1c4 = (int ***)&DAT_00000001;
        local_1c8 = (int ***)0x0;
        FUN_00fb6cfc(&local_1b8,pppiVar7,pppiVar5,"0x",2);
        local_b0 = (int ***)local_1b8;
        local_ac = local_1b4;
        local_a8 = local_1b0;
        uStack_a4 = (uint)local_1ac;
        uStack_a0 = (uint)local_1a8;
        local_9c = local_1a4;
        pppiStack_98 = local_1a0;
        uStack_94 = uStack_19c;
        uStack_90 = uStack_198;
        uStack_8c = uStack_194;
        local_88 = local_190;
        uStack_84 = uStack_18c;
        uStack_80 = uStack_188;
        uStack_7c = uStack_184;
        uStack_78 = uStack_180;
        uStack_74 = uStack_17c;
        pppiVar8 = (int ***)&DAT_00000001;
        pppiVar19 = (int ***)0x0;
        while( true ) {
          FUN_00d850d4(&local_1b8,&local_b0);
          pppiVar10 = local_1b0;
          if (local_1b8 == (byte ***)0x0) break;
          uVar18 = (int)local_1b4 - (int)pppiVar19;
          if ((uint)((int)local_1c8 - (int)pppiVar16) < uVar18) {
            FUN_00edff4c(&local_1c8,pppiVar16,uVar18,1,1);
            pppiVar8 = local_1c4;
            pppiVar16 = local_1c0;
          }
          FUN_016dd1aa((byte *)((int)pppiVar8 + (int)pppiVar16),
                       (byte *)((int)pppiVar7 + (int)pppiVar19),uVar18);
          pppiVar16 = (int ***)((int)pppiVar16 + uVar18);
          pppiVar19 = pppiVar10;
          local_1c0 = pppiVar16;
        }
        uVar18 = (int)pppiVar5 - (int)pppiVar19;
        if ((uint)((int)local_1c8 - (int)pppiVar16) < uVar18) {
          FUN_00edff4c(&local_1c8,pppiVar16,uVar18,1,1);
          pppiVar8 = local_1c4;
          pppiVar16 = local_1c0;
        }
        unaff_r7 = local_1c8;
        pppiVar10 = (int ***)0x80000000;
        FUN_016dd1aa((byte *)((int)pppiVar8 + (int)pppiVar16),
                     (byte *)((int)pppiVar7 + (int)pppiVar19),uVar18);
        FUN_00f29b3c(auStack_294,pppiVar8,(byte *)((int)pppiVar8 + (int)pppiVar16) + uVar18);
        if (unaff_r7 != (int ***)0x0) {
          thunk_FUN_016d3fb4(pppiVar8);
        }
        FUN_00e9d4a0(&local_1b8,auStack_294);
        if (local_1b8 == (byte ***)&DAT_80000000) {
          pppiVar8 = (int ***)FUN_00f01d38(local_1b4,local_1b0,&DAT_00358956);
          if (pppiVar9 == (int ***)0x0) goto LAB_00d81910;
LAB_00d81bfc:
          pppiVar10 = (int ***)0x80000000;
          thunk_FUN_016d3fb4(pppiVar7);
          goto LAB_00d81910;
        }
        local_288 = (int ***)local_1b8;
        local_280 = local_1b0;
        local_284 = local_1b4;
        if (pppiVar9 == (int ***)0x0) goto LAB_00d81c48;
LAB_00d81c44:
        thunk_FUN_016d3fb4(pppiVar7);
      }
LAB_00d81c48:
      FUN_00c2ee8c(&local_1b8,&local_288);
      pppiVar7 = local_1b4;
      pppbVar4 = local_1b8;
      local_268 = (uint)local_1a8;
      local_264 = local_1a4;
      local_260 = local_1a0;
      local_270 = local_1b0;
      local_274 = local_1b4;
      local_278 = (int ***)local_1b8;
      local_250 = 0;
      local_254 = 4;
      local_258 = 0;
      unaff_r7 = local_1a0;
      if (((uint)local_1ac & 0xff) == 2) {
        if (local_1b0 == (int ***)0x0) {
          FUN_00c2de98(&local_1b8,2,local_1ac._1_1_,0,&local_268);
          FUN_00d64e28(&local_258);
          local_298 = local_254;
          FUN_016dd1aa(local_254,&local_1b8,0x7c);
          bVar20 = false;
          goto LAB_00d81e44;
        }
        pppiVar9 = local_1b4 + (int)local_1b0 * 0x42;
        local_298 = 4;
        iVar14 = 0;
        iVar12 = 0;
        local_1c0 = (int ***)local_1b8;
        local_1c8 = local_1b4;
        pppiVar8 = local_1b4;
        local_1bc = pppiVar9;
        do {
          pppiVar10 = (int ***)*pppiVar8;
          pppiVar5 = pppiVar8 + 1;
          if (pppiVar10 == (int ***)&SUB_00000002 && (int ***)*pppiVar5 == (int ***)0x0) {
            local_1c4 = pppiVar8 + 0x42;
            goto LAB_00d81ee0;
          }
          pppiVar16 = pppiVar8 + 2;
          pppiVar8 = pppiVar8 + 0x42;
          local_1b8 = (byte ***)pppiVar10;
          local_1b4 = (int ***)*pppiVar5;
          FUN_016dd1aa(&local_1b0,pppiVar16,0x100);
          local_28 = 0;
          local_2c = 8;
          local_30 = 0;
          FUN_00c2de98(&local_b0,2);
          if (iVar12 == local_258) {
            FUN_00d64e28(&local_258);
            local_298 = local_254;
          }
          FUN_016dd1aa(local_298 + iVar14,&local_b0,0x7c);
          iVar12 = iVar12 + 1;
          local_250 = iVar12;
          FUN_00d9240c(&local_1b8);
          iVar14 = iVar14 + 0x7c;
        } while (pppiVar8 != pppiVar9);
        local_1c4 = pppiVar9;
LAB_00d81ee0:
        iVar14 = ((uint)((int)pppiVar9 - (int)local_1c4) >> 3) * 0x3e0f83e1 + 1;
        pppiVar8 = local_1c4;
        while (iVar14 = iVar14 + -1, iVar14 != 0) {
          FUN_00d9240c(pppiVar8);
          pppiVar8 = pppiVar8 + 0x42;
        }
        if (pppbVar4 != (byte ***)0x0) {
          thunk_FUN_016d3fb4(pppiVar7);
        }
        bVar3 = false;
        bVar20 = true;
        unaff_r7 = (int ***)0x0;
      }
      else {
        local_249 = local_1ac._1_1_;
        local_24a = (undefined1)local_1ac;
        if (local_1b0 == (int ***)0x0) {
          pppiVar8 = (int ***)FUN_00d9a3a4(&local_24a);
          pppiVar7 = local_264;
          if (local_260 != (int ***)0x0) {
            iVar12 = 1 - (int)local_260;
            pppiVar9 = local_264;
            do {
              if (*pppiVar9 == (int **)0x2 && pppiVar9[1] == (int **)0x0) {
                (*(code *)**pppiVar9[2])();
              }
              else {
                FUN_00f247dc(pppiVar9);
              }
              iVar12 = iVar12 + 1;
              pppiVar9 = pppiVar9 + 0x44;
              unaff_r7 = (int ***)&DAT_00000001;
            } while (iVar12 != 1);
          }
          if (local_268 != 0) {
            thunk_FUN_016d3fb4(pppiVar7);
          }
          if (local_278 != (int ***)0x0) {
            pppiVar7 = local_274;
            goto LAB_00d81908;
          }
          goto LAB_00d8190c;
        }
        unaff_r7 = (int ***)&DAT_00000008;
        local_1b0 = (int ***)0x0;
        local_1b4 = (int ***)&DAT_00000008;
        local_1b8 = (byte ***)0x0;
        FUN_00c2de98(auStack_248,(uint)local_1ac & 0xff,local_1ac._1_1_,pppiVar7,&local_1b8);
        FUN_00d64e28(&local_258);
        local_298 = local_254;
        FUN_016dd1aa(local_254,auStack_248,0x7c);
        bVar20 = true;
LAB_00d81e44:
        iVar12 = 1;
        local_250 = 1;
        bVar3 = true;
      }
      pppiVar7 = (int ***)thunk_FUN_016d4a50(0x80);
      if (pppiVar7 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1);
      }
      local_1b4 = (int ***)0x40dd9f;
      local_1b8 = (byte ***)&local_b0;
      local_a8 = (int ***)0x0;
      local_b0 = (int ***)0x80;
      local_1a8 = (int ***)((uint)local_1a8 & 0xffffff00);
      local_1ac = (int ***)0x0;
      local_1b0 = (int ***)0x2;
      local_ac = pppiVar7;
      pppiVar7 = (int ***)FUN_00e5eb30(&local_1b8,local_298,iVar12);
      if (pppiVar7 == (int ***)0x0) {
        pppiVar7 = local_ac;
        if (local_b0 == (int ***)0x80000000) goto LAB_00d81fc8;
        pppiVar8 = local_ac;
        unaff_r7 = local_a8;
        pppiVar10 = local_b0;
      }
      else {
        if (local_b0 != (int ***)0x0) {
          thunk_FUN_016d3fb4(local_ac);
        }
LAB_00d81fc8:
        pppiVar8 = (int ***)FUN_00f23f30(pppiVar7);
        pppiVar10 = (int ***)(byte **)0x80000000;
      }
      iVar12 = iVar12 + 1;
      iVar14 = local_298;
      while (iVar12 = iVar12 + -1, iVar12 != 0) {
        FUN_00f241a0(iVar14);
        iVar14 = iVar14 + 0x7c;
      }
      if (local_258 != 0) {
        thunk_FUN_016d3fb4(local_298);
      }
      pppiVar7 = local_264;
      if (bVar20) {
        if (local_260 != (int ***)0x0) {
          iVar12 = 1 - (int)local_260;
          pppiVar9 = local_264;
          do {
            if (*pppiVar9 == (int **)0x2 && pppiVar9[1] == (int **)0x0) {
              (*(code *)**pppiVar9[2])();
            }
            else {
              FUN_00f247dc(pppiVar9);
            }
            iVar12 = iVar12 + 1;
            pppiVar9 = pppiVar9 + 0x44;
          } while (iVar12 != 1);
        }
        if (local_268 != 0) {
          thunk_FUN_016d3fb4(pppiVar7);
        }
      }
      pppiVar7 = local_274;
      if (bVar3) {
        pbVar13 = (byte *)((int)local_270 + 1);
        pppiVar9 = local_274;
        while (pbVar13 = pbVar13 + -1, pbVar13 != (byte *)0x0) {
          FUN_00f247dc(pppiVar9);
          pppiVar9 = pppiVar9 + 0x42;
        }
        if (local_278 != (int ***)0x0) {
          thunk_FUN_016d3fb4(pppiVar7);
        }
      }
      goto LAB_00d81910;
    }
    local_1b8 = (byte ***)local_1b4;
    local_1b4 = local_1b0;
    pppiVar8 = (int ***)FUN_00f1d778(&local_1b8);
  }
LAB_00d8190c:
  pppiVar10 = (int ***)0x80000000;
LAB_00d81910:
  param_1[1] = (int)pppiVar8;
  param_1[2] = (int)unaff_r7;
  *param_1 = (int)pppiVar10;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

