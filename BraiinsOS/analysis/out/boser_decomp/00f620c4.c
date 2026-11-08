// FUN_00f620c4 @ 00f620c4 size=2724 calls_out=42 calls_in=0
// strings: send stream capacity unexpectedly closed | internal error: entered unreachable code: unexpected stage

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00f620c4(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined **local_278;
  int local_274;
  undefined **local_270;
  int local_26c;
  undefined **local_268;
  int local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int local_230;
  int local_22c;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int *piStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168;
  undefined2 local_167;
  undefined1 local_165;
  int local_164;
  undefined **local_160;
  int iStack_15c;
  undefined **ppuStack_158;
  int iStack_154;
  undefined **local_150;
  int local_14c;
  undefined **local_148;
  int iStack_144;
  undefined **local_140;
  int iStack_13c;
  undefined **ppuStack_138;
  int local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint local_10c;
  undefined **local_e8;
  int local_e4;
  undefined **local_e0;
  int local_dc;
  undefined **ppuStack_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined **local_a8;
  int iStack_a4;
  undefined **ppuStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_80;
  int local_7c;
  undefined **ppuStack_78;
  int local_74;
  undefined **local_70;
  int iStack_6c;
  undefined4 local_68;
  int local_64;
  undefined **local_60;
  int iStack_5c;
  undefined **ppuStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar14 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar12 = (int *)(param_1 + 0x18);
  bVar11 = *(int *)(param_1 + 0x1c) != 0;
  iVar9 = 0xb0;
  if (*piVar12 == 6 && !bVar11) {
    iVar9 = 8;
  }
  puVar13 = (undefined4 *)((int)piVar12 + iVar9);
  if (*piVar12 != 6 || bVar11) {
    FUN_00eb8fa8(&local_278,piVar12,param_2);
    iVar9 = param_1 + 0xe0;
    if (((uint)local_278 & 7) == 3) {
      piVar12 = (int *)FUN_00f2674c(local_270,local_26c);
      uVar7 = FUN_01427f40();
      bVar11 = false;
      FUN_01a61f2c(iVar9,uVar7);
      goto LAB_00f62a8c;
    }
    if (local_278 != (undefined **)&SUB_00000004) {
      FUN_01bed4e2(&local_150,&local_278,0x48);
      FUN_01428cf8(&local_150,0);
      if (*(char *)(param_1 + 0xf0) == '\x01') {
        local_68 = (undefined **)0x0;
        local_64 = 0x20;
        local_60 = (undefined **)0x0;
        iStack_5c = 0;
        FUN_0141d2a4(&local_278,&local_150);
        FUN_011def00(&local_278);
      }
      ppuVar5 = (undefined **)*puVar13;
      *puVar13 = 0;
      if (ppuVar5 == (undefined **)0x0) {
LAB_00f62544:
        if ((local_230 == 0) || (iVar6 = (**(code **)(local_22c + 0x10))(local_230), iVar6 != 0)) {
          FUN_01bed4e2(&local_278,&local_150,0x48);
          FUN_01139624(&local_e8,iVar9,&local_278,1);
          if ((char)local_e8 == '\x05') {
            FUN_01a886e0((uint)&local_e8 | 4);
            goto LAB_00f62a78;
          }
          local_68 = local_e8;
          local_64 = local_e4;
          local_60 = local_e0;
          iStack_5c = local_dc;
          ppuStack_58 = ppuStack_d8;
          iStack_54 = local_d4;
          FUN_01a61f2c(iVar9,2);
          local_278 = local_e8;
          local_274 = local_e4;
          local_270 = local_e0;
          local_26c = local_dc;
          local_268 = ppuStack_d8;
          local_264 = local_d4;
          piVar12 = (int *)FUN_01427dc4(&local_278);
        }
        else {
          (**(code **)(local_22c + 0x14))(&local_278,local_230);
          if ((((uint)local_278 & 1) != 0) && (local_268 == local_270 && local_264 == local_26c)) {
            FUN_01429d5c(&local_150,local_264,local_268,local_264);
          }
          FUN_01bed4e2(&local_278,&local_150,0x48);
          FUN_01139624(&local_e8,iVar9,&local_278,0);
          if ((char)local_e8 == '\x05') {
            puVar13 = (undefined4 *)((uint)&local_e8 | 4);
            local_190 = *puVar13;
            uStack_18c = puVar13[1];
            uStack_188 = puVar13[2];
            piStack_184 = (int *)puVar13[3];
            if (*piVar12 == 6 && *(int *)(param_1 + 0x1c) == 0) {
              FUN_01a886e0(param_1 + 0x20);
              FUN_005f6438(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
            }
            else {
              FUN_01139a6c(piVar12);
              if (*(int *)(param_1 + 200) != 0) {
                FUN_01139578();
              }
            }
            *piVar12 = 6;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            puVar13 = (undefined4 *)(param_1 + 0x20);
            *puVar13 = local_190;
            *(undefined4 *)(param_1 + 0x24) = uStack_18c;
            *(undefined4 *)(param_1 + 0x28) = uStack_188;
            *(int **)(param_1 + 0x2c) = piStack_184;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(int *)(param_1 + 0x30) = local_230;
            *(int *)(param_1 + 0x34) = local_22c;
            piVar12 = piStack_184;
            goto LAB_00f62124;
          }
          local_68 = local_e8;
          local_64 = local_e4;
          local_60 = local_e0;
          iStack_5c = local_dc;
          ppuStack_58 = ppuStack_d8;
          iStack_54 = local_d4;
          FUN_01a61f2c(iVar9,2);
          local_278 = local_e8;
          local_274 = local_e4;
          local_270 = local_e0;
          local_26c = local_dc;
          local_268 = ppuStack_d8;
          local_264 = local_d4;
          piVar12 = (int *)FUN_01427dc4(&local_278);
        }
      }
      else {
        local_7c = puVar13[1];
        ppuStack_78 = (undefined **)puVar13[2];
        local_74 = puVar13[3];
        local_70 = (undefined **)puVar13[4];
        local_80 = ppuVar5;
        if (99 < (local_10c & 0xffff) - 200) {
          FUN_01139578(&local_80);
          goto LAB_00f62544;
        }
        FUN_01429b04(&local_278,&local_150);
        uVar10 = (uint)local_278 & (uint)(local_270 != (undefined **)0x0 || local_26c != 0);
        if (uVar10 == 1) {
          FUN_01a61f2c(iVar9,2);
          piVar12 = (int *)FUN_01427b74(1,4);
LAB_00f62994:
          FUN_01429548(local_74);
          if (local_70 != (undefined **)0x0) {
            DataMemoryBarrier(0xb);
            do {
              puVar8 = *local_70;
              bVar11 = (bool)hasExclusiveAccess(local_70);
            } while (!bVar11);
            *local_70 = puVar8 + -1;
            if (puVar8 == (undefined *)0x1) {
              DataMemoryBarrier(0xb);
              FUN_01421174(local_70);
            }
          }
          FUN_01a69874(&local_80);
          if (uVar10 != 0) {
            FUN_01139a3c(&local_150);
          }
        }
        else {
          local_68 = (undefined **)0x0;
          local_64 = 0x18;
          local_60 = (undefined **)0x0;
          iStack_5c = 0;
          FUN_0141dc00(&local_278,&local_150,&local_68);
          if ((char)local_268 != '\x02') {
            (*(code *)local_278[4])(&local_26c,local_274,local_270);
          }
          FUN_01bed4e2(&local_278,&local_150,0x48);
          FUN_01139624(&local_e8,iVar9,&local_278,0);
          if ((char)local_e8 != '\x05') {
            local_68 = local_e8;
            local_64 = local_e4;
            local_60 = local_e0;
            iStack_5c = local_dc;
            ppuStack_58 = ppuStack_d8;
            iStack_54 = local_d4;
            FUN_01a61f2c(iVar9,2);
            local_278 = local_e8;
            local_274 = local_e4;
            local_270 = local_e0;
            local_26c = local_dc;
            local_268 = ppuStack_d8;
            local_264 = local_d4;
            piVar12 = (int *)FUN_01427dc4(&local_278);
            goto LAB_00f62994;
          }
          puVar13 = (undefined4 *)((uint)&local_e8 | 4);
          local_98 = *puVar13;
          uStack_94 = puVar13[1];
          uStack_90 = puVar13[2];
          uStack_8c = puVar13[3];
          FUN_01a698a4(&local_278,&local_98,&local_80,local_70);
          iVar9 = local_74;
          local_68 = local_278;
          local_64 = local_274;
          local_60 = local_270;
          iStack_5c = local_26c;
          ppuStack_58 = local_268;
          iStack_54 = local_264;
          local_50 = local_260;
          uStack_4c = local_25c;
          uStack_48 = uStack_258;
          uStack_44 = uStack_254;
          uStack_40 = uStack_250;
          local_3c = uStack_24c;
          local_180 = local_248;
          uStack_17c = uStack_244;
          uStack_178 = uStack_240;
          uStack_174 = uStack_23c;
          uStack_170 = uStack_238;
          uStack_16c = uStack_234;
          local_dc = 0;
          local_e0 = (undefined **)0x0;
          local_e4 = 1;
          local_e8 = &PTR_FUN_01c20a7c;
          FUN_01a69b90(&local_278,&local_68,&local_e8);
          FUN_01429650(iVar9,&local_278);
          piVar12 = (int *)FUN_010a2170(&local_180);
          if (*piVar12 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar11 = (bool)hasExclusiveAccess(piVar12);
            if (!bVar11) goto LAB_00f62a6c;
            *piVar12 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_00f62a6c:
            (**(code **)(piVar12[2] + 0x10))();
          }
LAB_00f62a78:
          piVar12 = (int *)0x0;
        }
      }
      bVar11 = false;
      FUN_005f6438(local_230,local_22c);
      goto LAB_00f62a8c;
    }
    FUN_01a61e0c(&local_68,iVar9,*param_2,0);
    if (((uint)local_68 & 0xff) == 5) {
      local_14c = local_64;
      local_150 = (undefined **)CONCAT31(local_150._1_3_,2);
      piVar12 = (int *)FUN_01427dc4(&local_150);
    }
    else {
      if (((uint)local_68 & 0xff) == 6) {
LAB_00f62518:
        bVar11 = true;
        goto LAB_00f62a8c;
      }
      local_150 = local_68;
      local_14c = local_64;
      local_148 = local_60;
      iStack_144 = iStack_5c;
      local_140 = ppuStack_58;
      iStack_13c = iStack_54;
      piVar12 = (int *)FUN_01427dc4();
    }
  }
  else {
LAB_00f62124:
    puVar3 = (undefined4 *)((uint)&local_98 | 4);
    puVar4 = (undefined2 *)((uint)&local_150 | 1);
    do {
      FUN_01a88034(puVar13,1);
      iVar9 = FUN_01a88114(puVar13);
      if (iVar9 == 0) {
        do {
          FUN_01a87820(&local_150,puVar13,*param_2);
          uVar10 = (uint)local_150 & 0xff;
          if (uVar10 == 7) {
LAB_00f624f4:
            bVar11 = uVar10 == 7;
            goto LAB_00f62a8c;
          }
          if (uVar10 != 5) {
            if (uVar10 == 6) {
              piVar12 = (int *)FUN_01427b74(9);
              FUN_01427c64(piVar12,"send stream capacity unexpectedly closed",0x28);
            }
            else {
              local_164 = local_14c;
              local_168 = local_150._0_1_;
              local_165 = *(undefined1 *)(puVar4 + 1);
              local_167 = *puVar4;
              local_160 = local_148;
              iStack_15c = iStack_144;
              ppuStack_158 = local_140;
              iStack_154 = iStack_13c;
              piVar12 = (int *)FUN_01a84cd8();
            }
            goto LAB_00f624f4;
          }
        } while (local_14c == 0);
      }
      else {
        FUN_01a61e0c(&local_68,puVar13,*param_2,1);
        if (((uint)local_68 & 0xff) != 6) {
          if (((uint)local_68 & 0xff) == 5) {
            local_14c = local_64;
            local_150 = (undefined **)CONCAT31(local_150._1_3_,2);
            piVar12 = (int *)FUN_01a84cd8(&local_150);
          }
          else {
            local_150 = local_68;
            local_14c = local_64;
            local_148 = local_60;
            iStack_144 = iStack_5c;
            local_140 = ppuStack_58;
            iStack_13c = iStack_54;
            piVar12 = (int *)FUN_01a84cd8(&local_150);
          }
          goto LAB_00f62a10;
        }
      }
      if (puVar13[4] == 0) {
LAB_00f625ac:
        piVar12 = (int *)FUN_01a84c90(puVar13);
        goto LAB_00f62a10;
      }
      (**(code **)(puVar13[5] + 0xc))(&local_150,puVar13[4],param_2);
      if (local_150 != (undefined **)&DAT_00000003 || local_14c != 0) {
        if (local_150 == (undefined **)&SUB_00000004 && local_14c == 0) goto LAB_00f625ac;
        if (local_150 == (undefined **)&DAT_00000005 && local_14c == 0) goto LAB_00f62518;
        local_278 = local_150;
        local_274 = local_14c;
        local_270 = local_148;
        local_26c = iStack_144;
        local_268 = local_140;
        local_264 = iStack_13c;
        piVar12 = (int *)FUN_01a84be0();
        uVar7 = FUN_01427f40();
        bVar11 = false;
        FUN_01a61f2c(puVar13,uVar7);
        goto LAB_00f62a8c;
      }
      local_e8 = local_148;
      local_e4 = iStack_144;
      local_e0 = local_140;
      local_dc = iStack_13c;
      ppuStack_d8 = ppuStack_138;
      local_d4 = local_134;
      uStack_d0 = local_130;
      uStack_cc = uStack_12c;
      uStack_c8 = uStack_128;
      uStack_c4 = uStack_124;
      local_c0 = local_120;
      uStack_bc = local_11c;
      uStack_b8 = uStack_118;
      uStack_b4 = uStack_114;
      uStack_b0 = uStack_110;
      uStack_ac = local_10c;
      if (local_148 != (undefined **)&DAT_00000003 || iStack_144 != 0) {
        FUN_01a88034(puVar13,0);
        if (local_148 == (undefined **)&DAT_00000003 && iStack_144 == 0) {
          local_64 = 0;
          local_68 = (undefined **)&DAT_00000003;
          FUN_01a7f63c();
LAB_00f62b64:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xf62b64);
          (*pcVar1)();
        }
        local_68 = local_148;
        local_64 = iStack_144;
        local_60 = local_140;
        iStack_5c = iStack_13c;
        ppuStack_58 = ppuStack_138;
        iStack_54 = local_134;
        local_50 = local_130;
        uStack_4c = uStack_12c;
        uStack_48 = uStack_128;
        uStack_44 = uStack_124;
        uStack_40 = local_120;
        local_3c = local_11c;
        FUN_01a87954(&local_80,puVar13);
        if ((char)local_80 != '\x05') {
          local_68 = local_80;
          local_64 = local_7c;
          local_60 = ppuStack_78;
          iStack_5c = local_74;
          ppuStack_58 = local_70;
          iStack_54 = iStack_6c;
          piVar12 = (int *)FUN_01a84cd8();
          goto LAB_00f62a10;
        }
        break;
      }
      local_a8 = local_140;
      iStack_a4 = iStack_13c;
      ppuStack_a0 = ppuStack_138;
      iStack_9c = local_134;
      uVar10 = 0;
      if (local_148 != (undefined **)&DAT_00000003 || iStack_144 != 0) {
        uVar10 = (uint)local_148 ^ 4;
      }
      local_80 = local_a8;
      local_7c = iStack_a4;
      ppuStack_78 = ppuStack_a0;
      local_74 = iStack_9c;
      if (iStack_144 != 0 || local_148 != (undefined **)&DAT_00000003 && uVar10 != 0) {
        local_68 = local_148;
        local_64 = iStack_144;
        FUN_01a7f680();
        goto LAB_00f62b64;
      }
      if (puVar13[4] == 0) {
        iVar9 = 1;
      }
      else {
        iVar9 = (**(code **)(puVar13[5] + 0x10))();
      }
      *puVar3 = local_a8;
      puVar3[1] = iStack_a4;
      puVar3[2] = ppuStack_a0;
      puVar3[3] = iStack_9c;
      local_98 = 0;
      cVar2 = FUN_01a620d4(puVar13,&local_98,iVar9);
      if (cVar2 != '\f') {
        local_68 = (undefined **)CONCAT31(CONCAT21(local_68._2_2_,cVar2),3);
        piVar12 = (int *)FUN_01a84cd8(&local_68);
        goto LAB_00f62a10;
      }
      piVar12 = (int *)0x0;
    } while (iVar9 == 0);
    piVar12 = (int *)0x0;
  }
LAB_00f62a10:
  bVar11 = false;
LAB_00f62a8c:
  if ((bVar11 == false) && (piVar12 != (int *)0x0)) {
    FUN_01a69838(piVar12);
  }
  FUN_019ec558((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  if (bVar11 == false) {
    local_278 = (undefined **)0x2;
    FUN_00f31e70(param_1,&local_278);
  }
  return bVar11;
}

