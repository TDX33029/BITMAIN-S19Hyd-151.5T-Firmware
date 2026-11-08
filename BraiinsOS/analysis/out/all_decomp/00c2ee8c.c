// FUN_00c2ee8c @ 00c2ee8c size=2612 calls_out=23 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c2ee8c(int *param_1)

{
  undefined *puVar1;
  int *******pppppppiVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint ******ppppppuVar6;
  uint ******ppppppuVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int ******ppppppiVar11;
  uint ******ppppppuVar12;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  int *******pppppppiVar15;
  char *pcVar16;
  uint *******pppppppuVar17;
  int iVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  uint *****pppppuVar21;
  int *******pppppppiVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  int local_414;
  int local_410;
  int local_408;
  uint local_3fc;
  int *******local_3f8;
  undefined4 local_3f4;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  uint ******local_3d0;
  undefined4 *local_3cc;
  int local_3c8;
  int local_3c4;
  uint ******local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  uint ****local_3a8;
  uint *******local_3a4;
  int local_3a0;
  uint *******local_398;
  uint ******local_394;
  uint *******local_390;
  uint ******ppppppuStack_38c;
  uint *******local_384;
  int *******local_380;
  uint *****pppppuStack_37c;
  int local_378;
  int local_374;
  uint *******local_26c;
  int *******local_268;
  int *******local_264;
  int *******local_260;
  undefined4 local_25c;
  uint *******local_258;
  int *******local_254;
  int *******local_250;
  int *******local_24c;
  uint *******local_248;
  uint *****local_244;
  uint *******local_240;
  undefined4 local_140;
  int *******local_13c;
  uint *******local_138;
  uint *****pppppuStack_134;
  uint *******local_130;
  int local_12c;
  
  FUN_00f5ef18(&local_3e8);
  local_3d8 = 0;
  local_3cc = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (local_3cc == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *local_3cc = local_3e8;
  local_3cc[1] = uStack_3e4;
  local_3cc[2] = uStack_3e0;
  local_3cc[3] = uStack_3dc;
  local_3cc[4] = local_3d8;
  local_3c8 = 1;
  local_3d0 = (uint ******)0x1;
  if ((2 < DAT_018d9130) || (DAT_018d9c68 == '\0')) goto LAB_00c2f0c0;
  if (DAT_018d9c68 == '\x01') {
LAB_00c2ef48:
    DataMemoryBarrier(0xb);
    pcVar16 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar16 = DAT_018daa74;
      puVar1 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar4 = (**(code **)(puVar1 + 0x14))(pcVar16,DAT_018d9c60);
    if (iVar4 == 0) goto LAB_00c2f0c0;
  }
  else if (DAT_018d9c68 != '\x02') {
    cVar3 = FUN_0169ac90(&DAT_018d9c60);
    if (cVar3 == '\0') goto LAB_00c2f0c0;
    if (cVar3 != '\x02') goto LAB_00c2ef48;
  }
  local_12c = DAT_018d9c60;
  if (*(int *)(DAT_018d9c60 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01872d98);
  }
  local_24c = *(int ********)(DAT_018d9c60 + 0x20);
  local_248 = *(uint ********)(DAT_018d9c60 + 0x24);
  local_244 = *(uint ******)(DAT_018d9c60 + 0x28);
  local_398 = (uint *******)&local_250;
  local_394 = (uint ******)&local_3a8;
  local_3a4 = (uint *******)&local_384;
  local_264 = (int *******)(DAT_018d9c60 + 0x1c);
  local_250 = (int *******)*local_264;
  local_384 = &local_3d0;
  local_26c = (uint *******)&local_398;
  local_130 = (uint *******)&local_26c;
  local_240 = (uint *******)0x0;
  local_390 = (uint *******)&DAT_018abb78;
  local_3a8 = (uint ****)&DAT_00581c20;
  local_380 = (int *******)&LAB_00b3780c;
  local_268 = (int *******)&DAT_00000001;
  local_13c = (int *******)0x0;
  local_140 = (int *******)&DAT_00000001;
  DataMemoryBarrier(0xb);
  pcVar16 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar16 = DAT_018daa74;
    puVar1 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  iVar4 = (**(code **)(puVar1 + 0x28))(pcVar16,&local_140);
  if (iVar4 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar16,&local_140);
  }
LAB_00c2f0c0:
  local_3bc = 0;
  local_3c0 = (uint ******)&DAT_00000004;
  local_3c4 = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018dad60 != 0) {
    local_140 = (int *******)&local_250;
    local_250 = (int *******)&DAT_018dad60;
    FUN_015eedc4(&DAT_018dad60,1,&local_140,&DAT_01873464,&DAT_018ac9b8);
  }
  if (DAT_018dad6c != 0) {
    piVar5 = DAT_018dad68 + DAT_018dad6c * 2;
    piVar10 = DAT_018dad68;
    do {
      (**(code **)(piVar10[1] + 0x10))
                (&local_140,*piVar10 + (*(int *)(piVar10[1] + 8) - 1U & 0xfffffff8) + 8);
      pppppppiVar20 = local_13c;
      pppppppiVar22 = local_140;
      pppppppiVar19 = local_13c;
      for (pppppppuVar17 = local_138; pppppppuVar17 != (uint *******)0x0;
          pppppppuVar17 = (uint *******)((int)pppppppuVar17 + -1)) {
        FUN_00c2fbe8(&local_140,*(undefined1 *)pppppppiVar19);
        if (local_140 == (int *******)&DAT_80000000) {
          local_398 = (uint *******)local_13c;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("BUG: control board vs platform builder inconsistency",0x34,&local_398,
                       &DAT_018734d4,&DAT_01872da8);
        }
        local_250 = local_140;
        local_24c = local_13c;
        local_248 = local_138;
        local_244 = pppppuStack_134;
        local_240 = local_130;
        FUN_00c30678(&local_140,&local_250,&local_3d0);
        pppppppiVar2 = local_13c;
        pppppppiVar15 = local_140;
        local_398 = local_138;
        local_394 = (uint ******)pppppuStack_134;
        local_390 = local_130;
        if (local_140 == (int *******)0x0) {
          uVar23 = 1;
          local_3f8 = local_13c;
        }
        else {
          uVar24 = (*(code *)local_13c[5])(local_140);
          local_3f4 = (undefined4)((ulonglong)uVar24 >> 0x20);
          ppppppiVar11 = *pppppppiVar2;
          if (ppppppiVar11 != (int ******)0x0) {
            (*(code *)ppppppiVar11)(pppppppiVar15);
          }
          if (pppppppiVar2[1] != (int ******)0x0) {
            thunk_FUN_016d3fb4(pppppppiVar15);
          }
          local_3fc = (uint)uVar24 & 1;
          uVar23 = 0;
        }
        iVar4 = local_3bc;
        local_138 = local_398;
        pppppuStack_134 = (uint *****)local_394;
        local_130 = local_390;
        local_140 = (int *******)
                    CONCAT31(CONCAT21(CONCAT11(local_140._3_1_,(char)local_3f4),(char)local_3fc),
                             uVar23);
        local_13c = local_3f8;
        if (local_3bc == local_3c4) {
          FUN_00d652c4(&local_3c4);
        }
        ppppppuVar6 = local_3c0 + iVar4 * 5;
        *ppppppuVar6 = (uint *****)local_140;
        ppppppuVar6[1] = (uint *****)local_13c;
        ppppppuVar6[2] = (uint *****)local_138;
        ppppppuVar6[3] = pppppuStack_134;
        ppppppuVar6[4] = (uint *****)local_130;
        local_3bc = iVar4 + 1;
        if (pppppppiVar15 != (int *******)0x0) {
          FUN_00c30a4c(&local_250);
          if (pppppppiVar22 != (int *******)0x0) {
            thunk_FUN_016d3fb4(pppppppiVar20);
          }
          goto LAB_00c2f2dc;
        }
        FUN_00c30a4c(&local_250);
        pppppppiVar19 = (int *******)((int)pppppppiVar19 + 1);
      }
      if (pppppppiVar22 != (int *******)0x0) {
        thunk_FUN_016d3fb4(pppppppiVar20);
      }
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar5);
  }
LAB_00c2f2dc:
  local_3b4 = 8;
  local_3a4 = (uint *******)0x8;
  ppppppuVar6 = local_3c0 + local_3bc * 5;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3a0 = 0;
  local_3a8 = (uint ****)0x0;
  local_394 = local_3c0;
  local_390 = (uint *******)local_3c4;
  local_398 = (uint *******)local_3c0;
  ppppppuStack_38c = ppppppuVar6;
  if (local_3bc != 0) {
    iVar4 = 0;
    local_408 = 8;
    local_414 = 8;
    local_410 = 0;
    ppppppuVar7 = local_3c0;
    do {
      pppppppuVar17 = (uint *******)ppppppuVar7[2];
      ppppppuVar12 = ppppppuVar7 + 5;
      local_394 = ppppppuVar12;
      if (pppppppuVar17 == (uint *******)&DAT_80000000) break;
      pppppppiVar20 = (int *******)ppppppuVar7[3];
      pppppuVar21 = ppppppuVar7[4];
      pppppuVar14 = *ppppppuVar7;
      pppppuVar13 = ppppppuVar7[1];
      pppppppiVar19 = pppppppiVar20;
      pppppppiVar22 = pppppppiVar20;
      local_384 = pppppppuVar17;
      local_380 = pppppppiVar20;
      pppppuStack_37c = pppppuVar21;
      if (pppppuVar21 == (uint *****)0x0) {
        pppppppiVar15 = pppppppiVar20;
      }
      else {
        iVar18 = 0;
        do {
          if (*(int *)((int)pppppppiVar20 + iVar18) == 2 &&
              ((int *)((int)pppppppiVar20 + iVar18))[1] == 0) {
            local_374 = 0;
            local_378 = 2;
          }
          else {
            FUN_00c30c8c(&local_378);
            if (local_378 != 2 || local_374 != 0) {
              if (local_410 == local_3b8) {
                FUN_00d65324(&local_3b8);
                local_414 = local_3b4;
              }
              FUN_016dd1aa(local_414 + local_410 * 0x108,&local_378,0x108);
              local_410 = local_410 + 1;
              local_3b0 = local_410;
              break;
            }
          }
          iVar18 = iVar18 + 0x110;
        } while ((int)pppppuVar21 * 0x110 != iVar18);
        if (pppppuVar21 != (uint *****)0x0) {
          iVar18 = 0;
          local_260 = pppppppiVar20;
          local_258 = pppppppuVar17;
          local_254 = pppppppiVar20 + (int)pppppuVar21 * 0x44;
          do {
            FUN_016dd1aa(&local_250,(undefined1 *)((int)pppppppiVar20 + iVar18),0x110);
            local_140 = pppppppiVar20;
            local_13c = pppppppiVar19;
            FUN_016dd1aa(&local_138,(undefined1 *)((int)pppppppiVar20 + iVar18),0x110);
            if (local_138 == (uint *******)&SUB_00000002 && pppppuStack_134 == (uint *****)0x0) {
              FUN_016dd52c(pppppppiVar19,&local_250,0x110);
              pppppppiVar19 = pppppppiVar19 + 0x44;
            }
            else {
              FUN_00cce13c(&local_138);
            }
            iVar18 = iVar18 + 0x110;
          } while ((int)pppppuVar21 * 0x110 != iVar18);
          pppppppiVar22 = (int *******)((int)pppppppiVar20 + iVar18);
        }
        pppppppiVar15 = pppppppiVar20 + (int)pppppuVar21 * 0x44;
      }
      local_258 = (uint *******)0x0;
      local_254 = (int *******)0x8;
      local_25c = 8;
      local_260 = (int *******)0x8;
      uVar8 = (int)pppppppiVar19 - (int)pppppppiVar20;
      pppppppiVar19 = (int *******)((uVar8 >> 4) * -0xf0f0f0f);
      local_140 = pppppppiVar20;
      local_13c = pppppppiVar19;
      local_138 = pppppppuVar17;
      if (pppppppiVar15 != pppppppiVar22) {
        iVar18 = 1 - (uint)((int)pppppppiVar15 - (int)pppppppiVar22) / 0x110;
        do {
          if (*pppppppiVar22 == (int ******)0x2 && pppppppiVar22[1] == (int ******)0x0) {
            (*(code *)**pppppppiVar22[2])();
          }
          else {
            FUN_00cce13c(pppppppiVar22);
          }
          iVar18 = iVar18 + 1;
          pppppppiVar22 = pppppppiVar22 + 0x44;
        } while (iVar18 != 1);
      }
      local_26c = pppppppuVar17;
      local_268 = pppppppiVar20;
      local_264 = pppppppiVar19;
      FUN_00cd6340(&local_260);
      if ((int *******)((int)local_3a8 - iVar4) < pppppppiVar19) {
        FUN_00d653ec(&local_3a8,iVar4,pppppppiVar19,8,0x110);
        local_408 = (int)local_3a4;
        iVar4 = local_3a0;
      }
      else {
      }
      FUN_016dd1aa(local_408 + iVar4 * 0x110,pppppppiVar20,uVar8);
      iVar18 = local_3a0;
      iVar4 = local_3a0 + (int)pppppppiVar19;
      local_3a0 = iVar4;
      if (((uint)pppppuVar14 & 1) == 0) {
        *param_1 = local_3b8;
        param_1[1] = local_3b4;
        param_1[2] = local_3b0;
        param_1[4] = 0;
        param_1[6] = 0;
        *(char *)((int)param_1 + 0xd) = (char)((uint)pppppuVar14 >> 0x10);
        param_1[5] = 8;
        *(char *)(param_1 + 3) = (char)((uint)pppppuVar14 >> 8);
        if (pppppppuVar17 != (uint *******)0x0) {
          thunk_FUN_016d3fb4(pppppppiVar20);
        }
        if (((uint)pppppuVar14 & 0xfe) != 0) {
          (*(code *)**pppppuVar13)();
        }
        FUN_00ce308c(&local_398);
        pppppppuVar17 = local_3a4;
        if (iVar4 != 0) {
          iVar4 = 0;
          iVar18 = iVar18 + uVar8 / 0x110;
          do {
            iVar18 = iVar18 + -1;
            if (*(int *)((int)pppppppuVar17 + iVar4) == 2 &&
                ((int *)((int)pppppppuVar17 + iVar4))[1] == 0) {
              (**(code **)**(undefined4 **)((int)pppppppuVar17 + iVar4 + 8))();
            }
            else {
              FUN_00cce13c();
            }
            iVar4 = iVar4 + 0x110;
          } while (iVar18 != 0);
        }
        if (local_3a8 != (uint ****)0x0) {
          thunk_FUN_016d3fb4(pppppppuVar17);
        }
        iVar4 = local_3c8 + 1;
        puVar9 = local_3cc + 2;
        while (iVar4 = iVar4 + -1, iVar4 != 0) {
          (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
          puVar9 = puVar9 + 5;
        }
        goto LAB_00c2f81c;
      }
      if (pppppppuVar17 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppiVar20);
      }
      (*(code *)**pppppuVar13)();
      ppppppuVar7 = ppppppuVar12;
    } while (ppppppuVar12 != ppppppuVar6);
  }
  FUN_00ce308c(&local_398);
  iVar4 = local_3c8 + 1;
  param_1[4] = (int)local_3a8;
  *(undefined1 *)(param_1 + 3) = 2;
  *param_1 = local_3b8;
  param_1[1] = local_3b4;
  param_1[2] = local_3b0;
  param_1[5] = (int)local_3a4;
  param_1[6] = local_3a0;
  puVar9 = local_3cc + 2;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
    puVar9 = puVar9 + 5;
  }
LAB_00c2f81c:
  if (local_3d0 != (uint ******)0x0) {
    thunk_FUN_016d3fb4(local_3cc);
  }
  return;
}

