// FUN_00f4b250 @ 00f4b250 size=2468 calls_out=39 calls_in=0
// strings: send stream capacity unexpectedly closed | internal error: entered unreachable code: unexpected stage

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00f4b250(int param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 local_240;
  int *local_23c;
  undefined **local_238;
  int *local_234;
  undefined **local_230;
  int *local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  int local_1f4;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int *piStack_114;
  undefined **local_110;
  int *local_10c;
  undefined **local_108;
  int *local_104;
  undefined **local_100;
  int *piStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ushort local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined **local_a8;
  int *piStack_a4;
  undefined **local_98;
  int *local_94;
  undefined **local_90;
  int *local_8c;
  undefined **local_88;
  int *piStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int local_4c;
  int *local_48;
  undefined **local_40;
  int *local_3c;
  undefined **local_38;
  int *local_34;
  undefined **ppuStack_30;
  int *piStack_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar14 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar12 = (int *)(param_1 + 0x18);
  bVar10 = *(int *)(param_1 + 0x1c) == 0;
  iVar4 = 0xe8;
  if (*piVar12 == 6 && bVar10) {
    iVar4 = 8;
  }
  piVar13 = (int *)((int)piVar12 + iVar4);
  if (*piVar12 == 6 && bVar10) goto LAB_00f4b2b4;
  FUN_00eb9494(&local_240,piVar12,param_2);
  iVar4 = param_1 + 0x118;
  if (local_240 == (undefined **)0x3 && local_23c == (int *)0x0) {
    FUN_01a61e0c(&local_98,iVar4,*param_2,0);
    if (((uint)local_98 & 0xff) == 5) {
      local_10c = local_94;
      local_110 = (undefined **)CONCAT31(local_110._1_3_,2);
      piVar12 = (int *)FUN_01427dc4(&local_110);
    }
    else {
      if (((uint)local_98 & 0xff) == 6) {
        bVar10 = true;
        goto LAB_00f4bb90;
      }
      local_110 = local_98;
      local_10c = local_94;
      local_108 = local_90;
      local_104 = local_8c;
      local_100 = local_88;
      piStack_fc = piStack_84;
      piVar12 = (int *)FUN_01427dc4();
    }
LAB_00f4ba20:
    bVar10 = false;
    goto LAB_00f4bb90;
  }
  FUN_01bed4e2(&local_110,&local_240,0x48);
  FUN_01428cf8(&local_110,0);
  if (*(char *)(param_1 + 0x128) == '\x01') {
    local_98 = (undefined **)0x0;
    local_94 = (int *)&DAT_00000020;
    local_90 = (undefined **)0x0;
    local_8c = (int *)0x0;
    FUN_0141d2a4(&local_240,&local_110);
    FUN_011def00(&local_240);
  }
  iVar7 = *piVar13;
  *piVar13 = 0;
  if (iVar7 == 0) {
LAB_00f4b674:
    iVar7 = (**(code **)(local_1f4 + 0x10))(local_1f8);
    if (iVar7 == 0) {
      (**(code **)(local_1f4 + 0x14))(&local_240,local_1f8);
      if ((((uint)local_240 & 1) != 0) && (local_230 == local_238 && local_22c == local_234)) {
        FUN_01429d5c(&local_110,local_22c,local_230,local_22c);
      }
      FUN_01bed4e2(&local_240,&local_110,0x48);
      FUN_01139624(&local_40,iVar4,&local_240,0);
      if ((char)local_40 == '\x05') {
        piVar13 = (int *)((uint)&local_40 | 4);
        local_120 = *piVar13;
        iStack_11c = piVar13[1];
        iStack_118 = piVar13[2];
        piStack_114 = (int *)piVar13[3];
        if (*piVar12 == 6 && *(int *)(param_1 + 0x1c) == 0) {
          FUN_01a886e0(param_1 + 0x20);
          FUN_00b19860(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
        }
        else {
          FUN_01139d78(piVar12);
          if (*(int *)(param_1 + 0x100) != 0) {
            FUN_01139578();
          }
        }
        *piVar12 = 6;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        piVar13 = (int *)(param_1 + 0x20);
        *piVar13 = local_120;
        *(int *)(param_1 + 0x24) = iStack_11c;
        *(int *)(param_1 + 0x28) = iStack_118;
        *(int **)(param_1 + 0x2c) = piStack_114;
        *(undefined1 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x30) = local_1f8;
        *(int *)(param_1 + 0x34) = local_1f4;
        piVar12 = piStack_114;
LAB_00f4b2b4:
        puVar5 = (uint *)((uint)&local_58 | 4);
        do {
          FUN_01a88034(piVar13,1);
          iVar4 = FUN_01a88114(piVar13);
          if (iVar4 == 0) {
            do {
              FUN_01a87820(&local_240,piVar13,*param_2);
              uVar6 = (uint)local_240 & 0xff;
              uVar11 = uVar6 - 7;
              if (uVar11 == 0) goto LAB_00f4bb64;
              if (uVar6 != 5) {
                if (uVar6 == 6) {
                  piVar12 = (int *)FUN_01427b74(9);
                  FUN_01427c64(piVar12,"send stream capacity unexpectedly closed",0x28);
                }
                else {
                  local_ac = local_23c;
                  local_b0 = CONCAT13(*(undefined1 *)((undefined2 *)((uint)&local_240 | 1) + 1),
                                      CONCAT21(*(undefined2 *)((uint)&local_240 | 1),
                                               (undefined1)local_240));
                  local_a8 = local_238;
                  piStack_a4 = local_234;
                  piVar12 = (int *)FUN_01a84cd8();
                }
                goto LAB_00f4bb64;
              }
            } while (local_23c == (int *)0x0);
          }
          else {
            FUN_01a61e0c(&local_110,piVar13,*param_2,1);
            if (((uint)local_110 & 0xff) != 6) {
              if (((uint)local_110 & 0xff) == 5) {
                local_23c = local_10c;
                local_240 = (undefined **)CONCAT31(local_240._1_3_,2);
                piVar12 = (int *)FUN_01a84cd8(&local_240);
              }
              else {
                local_240 = local_110;
                local_23c = local_10c;
                local_238 = local_108;
                local_234 = local_104;
                local_230 = local_100;
                local_22c = piStack_fc;
                piVar12 = (int *)FUN_01a84cd8(&local_240);
              }
              goto LAB_00f4ba20;
            }
          }
          (**(code **)(piVar13[5] + 0xc))(&local_98,piVar13[4],param_2);
          piVar2 = local_94;
          ppuVar1 = local_98;
          uVar11 = (uint)local_98 ^ 6 | (uint)local_94;
          if (uVar11 == 0) goto LAB_00f4bb64;
          if (((uint)local_98 & 7) == 4) {
            piVar12 = (int *)FUN_00f2004c();
            uVar9 = FUN_01427f40();
            FUN_01a61f2c(piVar13,uVar9);
            goto LAB_00f4bb64;
          }
          if (local_98 == (undefined **)0x5) {
            piVar12 = (int *)FUN_01a84c90(piVar13);
            goto LAB_00f4bb64;
          }
          local_104 = local_8c;
          local_108 = local_90;
          local_110 = local_98;
          local_10c = local_94;
          local_100 = local_88;
          piStack_fc = piStack_84;
          local_f8 = local_80;
          uStack_f4 = uStack_7c;
          uStack_f0 = uStack_78;
          uStack_ec = uStack_74;
          local_e8 = local_70;
          local_e4 = uStack_6c;
          uStack_e0 = uStack_68;
          uStack_dc = uStack_64;
          uStack_d8 = uStack_60;
          uStack_d4 = uStack_5c;
          if (local_98 != (undefined **)0x3 || local_94 != (int *)0x0) {
            FUN_01a88034(piVar13,0);
            local_23c = piVar2;
            local_240 = ppuVar1;
            local_238 = local_108;
            local_234 = local_104;
            local_230 = local_100;
            local_22c = piStack_fc;
            FUN_01a87954(&local_40,piVar13,&local_240);
            if ((char)local_40 == '\x05') {
              piVar12 = (int *)0x0;
            }
            else {
              local_240 = local_40;
              local_23c = local_3c;
              local_238 = local_38;
              local_234 = local_34;
              local_230 = ppuStack_30;
              local_22c = piStack_2c;
              piVar12 = (int *)FUN_01a84cd8(&local_240);
            }
            goto LAB_00f4bb64;
          }
          local_240 = local_90;
          local_23c = local_8c;
          local_238 = local_88;
          local_234 = piStack_84;
          local_40 = local_240;
          local_3c = local_23c;
          local_38 = local_238;
          local_34 = local_234;
          iVar4 = (**(code **)(piVar13[5] + 0x10))(piVar13[4]);
          piVar12 = local_34;
          *puVar5 = (uint)local_40;
          puVar5[1] = (uint)local_3c;
          puVar5[2] = (uint)local_38;
          puVar5[3] = (uint)local_34;
          local_58 = 0;
          cVar3 = FUN_01a620d4(piVar13,&local_58,iVar4);
          if (cVar3 != '\f') {
            local_240 = (undefined **)CONCAT31(CONCAT21(local_240._2_2_,cVar3),3);
            piVar12 = (int *)FUN_01a84cd8(&local_240);
            goto LAB_00f4bb64;
          }
          if (iVar4 != 0) goto LAB_00f4ba48;
        } while( true );
      }
      local_98 = local_40;
      local_94 = local_3c;
      local_90 = local_38;
      local_8c = local_34;
      local_88 = ppuStack_30;
      piStack_84 = piStack_2c;
      FUN_01a61f2c(iVar4,2);
      local_240 = local_40;
      local_23c = local_3c;
      local_238 = local_38;
      local_234 = local_34;
      local_230 = ppuStack_30;
      local_22c = piStack_2c;
      piVar12 = (int *)FUN_01427dc4(&local_240);
    }
    else {
      FUN_01bed4e2(&local_240,&local_110,0x48);
      FUN_01139624(&local_40,iVar4,&local_240,1);
      if ((char)local_40 == '\x05') {
        FUN_01a886e0((uint)&local_40 | 4);
        goto LAB_00f4bb7c;
      }
      local_98 = local_40;
      local_94 = local_3c;
      local_90 = local_38;
      local_8c = local_34;
      local_88 = ppuStack_30;
      piStack_84 = piStack_2c;
      FUN_01a61f2c(iVar4,2);
      local_240 = local_40;
      local_23c = local_3c;
      local_238 = local_38;
      local_234 = local_34;
      local_230 = ppuStack_30;
      local_22c = piStack_2c;
      piVar12 = (int *)FUN_01427dc4(&local_240);
    }
  }
  else {
    local_54 = piVar13[1];
    iStack_50 = piVar13[2];
    local_4c = piVar13[3];
    local_48 = (int *)piVar13[4];
    local_58 = iVar7;
    if (99 < local_cc - 200) {
      FUN_01139578(&local_58);
      goto LAB_00f4b674;
    }
    FUN_01429b04(&local_240,&local_110);
    uVar11 = (uint)local_240 & (uint)(local_238 != (undefined **)0x0 || local_234 != (int *)0x0);
    if (uVar11 == 1) {
      FUN_01a61f2c(iVar4,2);
      piVar12 = (int *)FUN_01427b74(1,4);
LAB_00f4bad8:
      FUN_01429548(local_4c);
      if (local_48 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *local_48;
          bVar10 = (bool)hasExclusiveAccess(local_48);
        } while (!bVar10);
        *local_48 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01421174(local_48);
        }
      }
      FUN_01a69874(&local_58);
      if (uVar11 != 0) {
        FUN_01139a3c(&local_110);
      }
    }
    else {
      local_98 = (undefined **)0x0;
      local_94 = (int *)0x18;
      local_90 = (undefined **)0x0;
      local_8c = (int *)0x0;
      FUN_0141dc00(&local_240,&local_110,&local_98);
      if ((char)local_230 != '\x02') {
        (*(code *)local_240[4])(&local_234,local_23c,local_238);
      }
      FUN_01bed4e2(&local_240,&local_110,0x48);
      FUN_01139624(&local_40,iVar4,&local_240,0);
      if ((char)local_40 != '\x05') {
        local_98 = local_40;
        local_94 = local_3c;
        local_90 = local_38;
        local_8c = local_34;
        local_88 = ppuStack_30;
        piStack_84 = piStack_2c;
        FUN_01a61f2c(iVar4,2);
        local_240 = local_40;
        local_23c = local_3c;
        local_238 = local_38;
        local_234 = local_34;
        local_230 = ppuStack_30;
        local_22c = piStack_2c;
        piVar12 = (int *)FUN_01427dc4(&local_240);
        goto LAB_00f4bad8;
      }
      puVar8 = (undefined4 *)((uint)&local_40 | 4);
      local_b0 = *puVar8;
      local_ac = (int *)puVar8[1];
      local_a8 = (undefined **)puVar8[2];
      piStack_a4 = (int *)puVar8[3];
      FUN_01a698a4(&local_240,&local_b0,&local_58,local_48);
      iVar4 = local_4c;
      local_98 = local_240;
      local_94 = local_23c;
      local_90 = local_238;
      local_8c = local_234;
      local_88 = local_230;
      piStack_84 = local_22c;
      local_80 = local_228;
      uStack_7c = uStack_224;
      uStack_78 = uStack_220;
      uStack_74 = uStack_21c;
      local_70 = uStack_218;
      uStack_6c = local_214;
      local_c8 = local_210;
      uStack_c4 = uStack_20c;
      uStack_c0 = uStack_208;
      uStack_bc = uStack_204;
      uStack_b8 = uStack_200;
      uStack_b4 = uStack_1fc;
      local_34 = (int *)0x0;
      local_38 = (undefined **)0x0;
      local_3c = (int *)&DAT_00000001;
      local_40 = &PTR_FUN_01c20a7c;
      FUN_01a69b90(&local_240,&local_98,&local_40);
      FUN_01429650(iVar4,&local_240);
      piVar12 = (int *)FUN_010a2170(&local_c8);
      if (*piVar12 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar10 = (bool)hasExclusiveAccess(piVar12);
        if (!bVar10) goto LAB_00f4bb70;
        *piVar12 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4bb70:
        (**(code **)(piVar12[2] + 0x10))();
      }
LAB_00f4bb7c:
      piVar12 = (int *)0x0;
    }
  }
  bVar10 = false;
  FUN_00b19860(local_1f8,local_1f4);
LAB_00f4bb90:
  if ((bVar10 == false) && (piVar12 != (int *)0x0)) {
    FUN_01a69838(piVar12);
  }
  FUN_019ec558((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  if (bVar10 == false) {
    local_240 = (undefined **)0x2;
    FUN_00f32490(param_1,&local_240);
  }
  return bVar10;
LAB_00f4ba48:
  piVar12 = (int *)0x0;
LAB_00f4bb64:
  bVar10 = uVar11 == 0;
  goto LAB_00f4bb90;
}

