// FUN_019bfbf0 @ 019bfbf0 size=17092 calls_out=39 calls_in=1
// strings: /proc/cpuinfo | processor	 | vendor_id	 | model name	 | CPU implementer	 | CPU part	

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffec4 */
/* WARNING: Type propagation algorithm not settling */

void FUN_019bfbf0(uint *******param_1,uint ******param_2,uint *******param_3,uint *******param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [8];
  ulonglong uVar6;
  double dVar7;
  undefined1 auVar8 [8];
  undefined4 uVar9;
  undefined1 *puVar10;
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  uint ******ppppppuVar17;
  uint *******extraout_r1;
  uint *******pppppppuVar18;
  uint *******pppppppuVar19;
  uint *******pppppppuVar20;
  uint uVar21;
  char cVar22;
  bool bVar23;
  byte *pbVar24;
  int iVar25;
  undefined *puVar26;
  byte bVar27;
  uint *puVar28;
  undefined4 *puVar29;
  uint *******pppppppuVar30;
  uint uVar31;
  uint *******pppppppuVar32;
  uint uVar33;
  char *pcVar34;
  undefined4 uVar35;
  uint ******ppppppuVar36;
  int iVar37;
  uint ******ppppppuVar38;
  uint *******pppppppuVar39;
  uint *******pppppppuVar40;
  uint *******pppppppuVar41;
  undefined8 uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined4 local_324;
  ulonglong local_320;
  ulonglong local_318;
  ulonglong local_310;
  ulonglong local_308;
  ulonglong uStack_300;
  uint *******local_2f8;
  uint *******local_2f4;
  uint *******local_2e8;
  uint *******local_2e4;
  uint *******local_2e0;
  uint *******local_2dc;
  uint ******local_2d8;
  uint ******local_2d4;
  uint ******local_2d0;
  uint ******local_2cc;
  uint *******local_2c8;
  ulonglong local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  uint *******local_2ac;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  uint ******local_278;
  uint *******local_274;
  uint *******local_270;
  uint *******local_26c;
  uint *******local_268;
  uint *******local_264;
  uint *******local_260;
  uint *******local_25c;
  uint *******local_258;
  uint *******local_254;
  uint *******local_250;
  int local_24c;
  uint *******local_248;
  uint *******local_244;
  undefined4 local_240;
  undefined4 local_23c;
  uint ******local_234;
  uint *******local_230;
  uint *******local_22c;
  uint *******local_228;
  undefined8 local_224;
  undefined4 local_21c;
  uint *******local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  uint *******local_208;
  undefined2 local_204;
  uint *******local_148;
  undefined8 local_144;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  uint *******local_138;
  uint *******local_134;
  uint *******local_130;
  uint *******local_12c;
  uint *******local_128;
  undefined4 local_124;
  uint ******local_120;
  int local_118;
  uint *******local_114;
  int local_110;
  uint *******local_10c;
  uint *******local_68;
  uint *******local_64;
  uint *******local_60;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  int local_4c;
  uint *******local_48;
  uint *******local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_26c = (uint *******)&local_258;
  local_264 = (uint *******)&local_248;
  uVar33 = 2;
  local_278 = param_2;
  local_274 = param_3;
  local_270 = param_4;
  if (param_1[2] != (uint ******)&DAT_3b9aca00) {
    FUN_019b0710(&local_148,&DAT_3b9aca00,*param_1,param_1[1],param_1[2]);
    uVar33 = (uint)((local_148 != (uint *******)0x0 || (uint *******)local_144 != (uint *******)0x0)
                   || (uint *******)0xbebc200 < local_144._4_4_);
  }
  local_268 = (uint *******)param_1[0x3e];
  local_2ac = param_1;
  if (local_268 == (uint *******)0x0) {
    local_60 = (uint *******)0x0;
    local_64 = (uint *******)&DAT_00000001;
    local_68 = (uint *******)0x0;
    local_144._0_4_ = (uint *******)&DAT_000001b6;
    local_148 = (uint *******)0x0;
    uStack_13c = 0;
    local_144._4_4_ = (uint *******)&DAT_00000001;
    FUN_019a581c(&local_228,&local_148,"/proc/cpuinfo",0xd);
    pppppppuVar30 = (uint *******)(code *)local_224;
    if ((char)local_228 == '\x04') {
      local_148 = (uint *******)(code *)local_224;
      FUN_01980288(&local_58,&local_148,&local_68);
      FUN_01bf01d6(pppppppuVar30);
      pppppppuVar30 = (uint *******)((uint)local_58 & 0xff);
    }
    else {
      local_54 = (uint *******)(code *)local_224;
      local_58 = local_228;
      pppppppuVar30 = local_228;
    }
    local_280 = CONCAT44(local_280._4_4_,uVar33);
    if (((uint)pppppppuVar30 & 0xff) == 4) {
      uVar42 = thunk_FUN_01bee35a(pppppppuVar30,0x2c0);
      puVar29 = (undefined4 *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
      if (*(char *)(puVar29 + 4) == '\0') {
        FUN_019ae6ac(&local_148);
        *puVar29 = local_148;
        puVar29[1] = (uint *******)local_144;
        puVar29[2] = local_144._4_4_;
        puVar29[3] = CONCAT22(uStack_13a,uStack_13c);
        *(undefined1 *)(puVar29 + 4) = 1;
      }
      pppppppuVar30 = (uint *******)*puVar29;
      local_44 = (uint *******)puVar29[1];
      local_40 = puVar29[2];
      local_3c = puVar29[3];
      local_290._0_4_ = (uint *******)&local_48;
      *puVar29 = (byte *)((int)pppppppuVar30 + 1);
      puVar29[1] = (byte *)((int)local_44 + (uint)((uint *******)0xfffffffe < pppppppuVar30));
      local_58 = (uint *******)&DAT_0056d238;
      local_54 = (uint *******)0x0;
      local_50 = (uint *******)0x0;
      local_4c = 0;
      local_298._4_4_ = &local_40;
      local_204 = 1;
      local_210 = 1;
      local_20c = 0;
      local_21c = 0;
      pppppppuVar12 = (uint *******)&local_228;
      local_214 = 10;
      local_228 = (uint *******)&DAT_0000000a;
      local_224._0_4_ = (code *)local_64;
      local_224._4_4_ = local_60;
      local_298._0_4_ = &local_134;
      local_208 = local_60;
      local_218 = local_60;
      local_48 = pppppppuVar30;
LAB_019bfe24:
LAB_019bfe28:
      do {
        do {
          do {
            do {
              uVar44 = FUN_019c456c(&local_228,pppppppuVar12);
              pppppppuVar32 = (uint *******)(uVar44 >> 0x20);
              iVar37 = (int)uVar44;
              if (iVar37 == 0) {
                local_258 = local_58;
                local_254 = local_54;
                local_250 = local_50;
                local_24c = local_4c;
                local_248 = local_48;
                local_244 = local_44;
                local_240 = local_40;
                local_23c = local_3c;
                param_1 = local_2ac;
                goto LAB_019c1580;
              }
              pppppppuVar12 = pppppppuVar32;
            } while (uVar44 < 0xa00000000);
            uVar42 = thunk_FUN_01bed842("processor\t",iVar37,10);
            pppppppuVar12 = (uint *******)((ulonglong)uVar42 >> 0x20);
          } while ((int)uVar42 != 0);
          pppppppuVar12 = (uint *******)0x0;
          local_124 = (uint *******)CONCAT22(local_124._2_2_,1);
          local_12c = (uint *******)0x0;
          local_130 = (uint *******)CONCAT31(local_130._1_3_,1);
          uStack_13c = 0;
          uStack_13a = 0;
          local_134 = (uint *******)0x3a;
          local_148 = (uint *******)0x3a;
          local_144._4_4_ = pppppppuVar32;
          local_138 = pppppppuVar32;
          do {
            local_128 = (uint *******)(uVar44 >> 0x20);
            local_144._0_4_ = (uint *******)uVar44;
            uVar33 = (int)pppppppuVar32 - (int)pppppppuVar12;
            pbVar24 = (byte *)(iVar37 + (int)pppppppuVar12);
            if (uVar33 < 8) {
              uVar13 = 0;
              if (uVar33 == 0) {
                uVar43 = 0;
              }
              else {
                do {
                  if (pbVar24[uVar13] == 0x3a) {
                    uVar43 = CONCAT44(uVar13,1);
                    goto LAB_019bfef0;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar33 != uVar13);
                uVar43 = (ulonglong)uVar33 << 0x20;
              }
            }
            else {
              uVar43 = FUN_01307168(0x3a,pbVar24);
              uVar44 = CONCAT44(local_128,(uint *******)local_144);
            }
LAB_019bfef0:
            local_128 = (uint *******)(uVar44 >> 0x20);
            local_144._0_4_ = (uint *******)uVar44;
            iVar15 = (int)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              pppppppuVar12 = pppppppuVar32;
              break;
            }
            pppppppuVar41 = (uint *******)((int)pppppppuVar12 + iVar15);
            pppppppuVar12 = (uint *******)((int)pppppppuVar41 + 1);
            if ((pppppppuVar41 < pppppppuVar32) && (pbVar24[iVar15] == 0x3a)) {
              local_12c = pppppppuVar12;
              goto LAB_019bff2c;
            }
          } while (pppppppuVar12 <= pppppppuVar32);
          local_124._0_2_ = CONCAT11(1,(undefined1)local_124);
LAB_019bff2c:
          uStack_13c = SUB42(pppppppuVar12,0);
          uStack_13a = (undefined2)((uint)pppppppuVar12 >> 0x10);
          uVar42 = FUN_019c456c(&local_148);
          pppppppuVar12 = (uint *******)((ulonglong)uVar42 >> 0x20);
        } while ((int)uVar42 == 0);
        uVar44 = FUN_013245a0();
        pppppppuVar12 = (uint *******)(uVar44 >> 0x20);
        pcVar34 = (char *)uVar44;
      } while (pppppppuVar12 == (uint *******)0x0);
      if (pppppppuVar12 == (uint *******)&DAT_00000001) goto code_r0x019bff60;
      cVar22 = *pcVar34;
      goto LAB_019bff7c;
    }
    uVar35 = FUN_0069263c(pppppppuVar30,local_54);
    uVar42 = thunk_FUN_01bee35a(uVar35,0x2c0);
    puVar28 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
    if ((char)puVar28[4] == '\0') {
      FUN_019ae6ac(&local_148);
      *puVar28 = (uint)local_148;
      puVar28[1] = (uint)(uint *******)local_144;
      puVar28[2] = (uint)local_144._4_4_;
      puVar28[3] = CONCAT22(uStack_13a,uStack_13c);
      *(undefined1 *)(puVar28 + 4) = 1;
    }
    ppppppuVar11 = (uint ******)*puVar28;
    ppppppuVar17 = (uint ******)puVar28[1];
    ppppppuVar36 = (uint ******)puVar28[2];
    ppppppuVar38 = (uint ******)puVar28[3];
    *puVar28 = (int)ppppppuVar11 + 1;
    puVar28[1] = (int)ppppppuVar17 + (uint)((uint ******)0xfffffffe < ppppppuVar11);
    *local_26c = (uint ******)&DAT_0056d238;
    local_26c[1] = (uint ******)0x0;
    local_26c[2] = (uint ******)0x0;
    local_26c[3] = (uint ******)0x0;
    *local_264 = ppppppuVar11;
    local_264[1] = ppppppuVar17;
    local_264[2] = ppppppuVar36;
    local_264[3] = ppppppuVar38;
LAB_019c1580:
    FUN_0134bd64(local_68,local_64);
    uVar33 = (uint)local_280;
  }
  else {
    uVar42 = thunk_FUN_01bee35a(local_268,0x2c0);
    puVar28 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
    if ((char)puVar28[4] == '\0') {
      FUN_019ae6ac(&local_148);
      *puVar28 = (uint)local_148;
      puVar28[1] = (uint)(uint *******)local_144;
      puVar28[2] = (uint)local_144._4_4_;
      puVar28[3] = CONCAT22(uStack_13a,uStack_13c);
      *(undefined1 *)(puVar28 + 4) = 1;
    }
    ppppppuVar11 = (uint ******)*puVar28;
    ppppppuVar17 = (uint ******)puVar28[1];
    ppppppuVar36 = (uint ******)puVar28[2];
    ppppppuVar38 = (uint ******)puVar28[3];
    *puVar28 = (int)ppppppuVar11 + 1;
    puVar28[1] = (int)ppppppuVar17 + (uint)((uint ******)0xfffffffe < ppppppuVar11);
    *local_26c = (uint ******)&DAT_0056d238;
    local_26c[1] = (uint ******)0x0;
    local_26c[2] = (uint ******)0x0;
    local_26c[3] = (uint ******)0x0;
    *local_264 = ppppppuVar11;
    local_264[1] = ppppppuVar17;
    local_264[2] = ppppppuVar36;
    local_264[3] = ppppppuVar38;
  }
  auVar5 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
  if ((uVar33 & 0xff) == 2 || (uVar33 & 1) != 0) {
    FUN_019ac130(&local_148,1);
    *param_1 = (uint ******)local_148;
    param_1[1] = (uint ******)(uint *******)local_144;
    param_1[2] = (uint ******)local_144._4_4_;
    local_144._0_4_ = (uint *******)&DAT_000001b6;
    local_148 = (uint *******)0x0;
    uStack_13c = 0;
    local_144._4_4_ = (uint *******)&DAT_00000001;
    FUN_019a581c(&local_228,&local_148,"/proc/stat",10);
    pppppppuVar30 = (uint *******)(code *)local_224;
    if ((char)local_228 != '\x04') {
      FUN_0069263c(local_228,(code *)local_224);
      auVar5 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
      goto LAB_019c41f0;
    }
    pppppppuVar12 = (uint *******)thunk_FUN_01be5118(0x2000);
    uVar44 = CONCAT44(local_290._4_4_,(uint *******)local_290);
    auVar8 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
    auVar5 = (undefined1  [8])CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
    if (pppppppuVar12 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(byte *)(param_1 + 0x3f) = 0;
    local_40 = CONCAT31(local_40._1_3_,10);
    local_44 = pppppppuVar30;
    local_48 = (uint *******)0x0;
    local_4c = 0;
    local_50 = (uint *******)0x0;
    local_54 = (uint *******)0x2000;
    local_58 = pppppppuVar12;
    if ((local_274 != (uint *******)0x0) || (local_268 == (uint *******)0x0)) {
      FUN_019c8ea4(&local_148,&local_58);
      pppppppuVar30 = local_148;
      if (-0x7fffffff < (int)local_148) {
        if (local_144._4_4_ < &SUB_00000004) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,4,local_144._4_4_,&DAT_01d283dc);
        }
        if (*(uint *******)local_144 != (uint ******)0x20757063) {
          FUN_0134bd64(local_148,(uint *******)local_144);
          if (local_54 != (uint *******)0x0) {
            thunk_FUN_01be4678(local_58);
          }
          FUN_01bf01d6(local_44);
          auVar5 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
          goto LAB_019c41f0;
        }
        local_260 = (uint *******)local_144;
        pppppppuVar12 = local_144._4_4_;
        pppppppuVar32 = (uint *******)local_144;
        if (local_268 != (uint *******)0x0) {
          local_25c = (uint *******)0x0;
          pppppppuVar41 = local_144._4_4_;
          do {
            pppppppuVar40 = local_25c;
            while( true ) {
              if (pppppppuVar40 != (uint *******)0x0) goto LAB_019c188c;
              if (pppppppuVar41 == (uint *******)0x0) break;
              pppppppuVar18 = (uint *******)0x0;
              while (*(byte *)((int)pppppppuVar32 + (int)pppppppuVar18) != 0x20) {
                pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                if (pppppppuVar41 == pppppppuVar18) {
                  local_25c = (uint *******)&DAT_00000001;
                  goto LAB_019c188c;
                }
              }
              pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
              pppppppuVar32 = (uint *******)((int)pppppppuVar32 + (int)((int)pppppppuVar18 + 1));
              pppppppuVar40 = (uint *******)0x0;
              pppppppuVar12 = pppppppuVar41;
              if (pppppppuVar18 != (uint *******)0x0) goto LAB_019c188c;
            }
            pppppppuVar41 = (uint *******)0x0;
            local_25c = (uint *******)&DAT_00000001;
          } while( true );
        }
        pppppppuVar18 = (uint *******)0x0;
        pppppppuVar39 = (uint *******)0x0;
        bVar23 = false;
        pppppppuVar41 = local_144._4_4_;
        pppppppuVar40 = (uint *******)local_144;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (bVar23) {
            ppppppuVar11 = (uint ******)0x1;
            pppppppuVar20 = (uint *******)0x0;
            pppppppuVar41 = (uint *******)&DAT_00000001;
            local_25c = pppppppuVar39;
            goto LAB_019c185c;
          }
          bVar23 = true;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar41 == (uint *******)0x0) {
            pppppppuVar41 = (uint *******)0x0;
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                bVar23 = false;
                pppppppuVar40 = pppppppuVar32;
                pppppppuVar12 = pppppppuVar41;
                goto LAB_019c1804;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar41 != pppppppuVar20);
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar41;
          }
LAB_019c1804:
        } while (pppppppuVar20 == (uint *******)0x0);
        pppppppuVar41 = pppppppuVar19;
        if (pppppppuVar19 == (uint *******)0x0) {
          pppppppuVar41 = (uint *******)&DAT_00000001;
          pppppppuVar20 = (uint *******)0x0;
        }
        if ((int)pppppppuVar20 < 0) {
          uVar35 = 0;
LAB_019c1828:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar35,pppppppuVar20);
        }
        local_25c = pppppppuVar39;
        if (pppppppuVar19 == (uint *******)0x0) {
          ppppppuVar11 = (uint ******)0x1;
          pppppppuVar18 = (uint *******)0x0;
        }
        else {
          uVar35 = 1;
          ppppppuVar11 = (uint ******)FUN_01298504(pppppppuVar20,1);
          if (ppppppuVar11 == (uint ******)0x0) goto LAB_019c1828;
          pppppppuVar18 = pppppppuVar20;
        }
        param_1 = local_2ac;
LAB_019c185c:
        FUN_01bed4e2(ppppppuVar11,pppppppuVar41,pppppppuVar20);
        FUN_0134bd64(param_1[0x33],param_1[0x34]);
        param_1[0x33] = (uint ******)pppppppuVar18;
        param_1[0x34] = ppppppuVar11;
        param_1[0x35] = (uint ******)pppppppuVar20;
LAB_019c188c:
        local_274 = param_1 + 4;
        pppppppuVar41 = pppppppuVar12;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar18 = local_25c;
        do {
          pppppppuVar39 = pppppppuVar40;
          if (((uint)local_25c & 1) != 0) {
            uVar44 = 0;
            goto LAB_019c1964;
          }
          local_25c = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar39;
          if (pppppppuVar12 == (uint *******)0x0) {
            pppppppuVar12 = (uint *******)0x0;
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar19 = (uint *******)0x0;
          }
          else {
            pppppppuVar19 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar39 + (int)pppppppuVar19) == 0x20) {
                pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar19 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar39 + (int)((int)pppppppuVar19 + 1));
                local_25c = (uint *******)0x0;
                pppppppuVar41 = pppppppuVar12;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c1914;
              }
              pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
            } while (pppppppuVar12 != pppppppuVar19);
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar19 = pppppppuVar12;
          }
LAB_019c1914:
        } while (pppppppuVar19 == (uint *******)0x0);
        uVar44 = 0;
        do {
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + -1);
          uVar44 = (uVar44 & 0xffffffff) * 10 +
                   (CONCAT44((int)(uVar44 >> 0x20) * 10,*(byte *)pppppppuVar39 - 0x30) &
                   0xffffffff000000ff);
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 + 1);
        } while (pppppppuVar19 != (uint *******)0x0);
LAB_019c1964:
        pppppppuVar12 = pppppppuVar41;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar39 = pppppppuVar18;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (((uint)pppppppuVar18 & 1) != 0) {
            local_288 = 0;
            goto LAB_019c1a64;
          }
          pppppppuVar18 = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar41 == (uint *******)0x0) {
            pppppppuVar41 = (uint *******)0x0;
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                pppppppuVar18 = (uint *******)0x0;
                pppppppuVar12 = pppppppuVar41;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c19f8;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar41 != pppppppuVar20);
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar41;
          }
LAB_019c19f8:
        } while (pppppppuVar20 == (uint *******)0x0);
        local_288 = 0;
        do {
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
          local_288 = (local_288 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_288 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c1a64:
        pppppppuVar41 = pppppppuVar12;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar18 = pppppppuVar39;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (((uint)pppppppuVar39 & 1) != 0) {
            local_290 = 0;
            goto LAB_019c1b44;
          }
          pppppppuVar39 = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar12 == (uint *******)0x0) {
            pppppppuVar12 = (uint *******)0x0;
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                pppppppuVar39 = (uint *******)0x0;
                pppppppuVar41 = pppppppuVar12;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c1ae4;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar12 != pppppppuVar20);
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar12;
          }
LAB_019c1ae4:
        } while (pppppppuVar20 == (uint *******)0x0);
        local_290 = 0;
        do {
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
          local_290 = (local_290 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_290 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c1b44:
        pppppppuVar12 = pppppppuVar41;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar39 = pppppppuVar18;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (((uint)pppppppuVar18 & 1) != 0) {
            local_298 = (undefined1  [8])0x0;
            goto LAB_019c1c30;
          }
          pppppppuVar18 = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar41 == (uint *******)0x0) {
            pppppppuVar41 = (uint *******)0x0;
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                pppppppuVar18 = (uint *******)0x0;
                pppppppuVar12 = pppppppuVar41;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c1bd0;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar41 != pppppppuVar20);
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar41;
          }
LAB_019c1bd0:
        } while (pppppppuVar20 == (uint *******)0x0);
        local_298 = (undefined1  [8])0x0;
        do {
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
          local_298 = (undefined1  [8])
                      (((ulonglong)local_298 & 0xffffffff) * 10 +
                      (CONCAT44((int)((ulonglong)local_298 >> 0x20) * 10,
                                *(byte *)pppppppuVar19 - 0x30) & 0xffffffff000000ff));
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c1c30:
        pppppppuVar41 = pppppppuVar12;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar18 = pppppppuVar39;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (((uint)pppppppuVar39 & 1) != 0) {
            local_2a0 = (undefined1  [8])0x0;
            goto LAB_019c1d34;
          }
          pppppppuVar39 = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar12 == (uint *******)0x0) {
            pppppppuVar12 = (uint *******)0x0;
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                pppppppuVar39 = (uint *******)0x0;
                pppppppuVar41 = pppppppuVar12;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c1cc4;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar12 != pppppppuVar20);
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar12;
          }
LAB_019c1cc4:
        } while (pppppppuVar20 == (uint *******)0x0);
        local_2a0 = (undefined1  [8])0x0;
        do {
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
          local_2a0 = (undefined1  [8])
                      (((ulonglong)local_2a0 & 0xffffffff) * 10 +
                      (CONCAT44((int)((ulonglong)local_2a0 >> 0x20) * 10,
                                *(byte *)pppppppuVar19 - 0x30) & 0xffffffff000000ff));
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c1d34:
        pppppppuVar12 = pppppppuVar41;
        pppppppuVar40 = pppppppuVar32;
        pppppppuVar39 = pppppppuVar18;
        do {
          pppppppuVar19 = pppppppuVar40;
          if (((uint)pppppppuVar18 & 1) != 0) {
            auVar5 = (undefined1  [8])0x0;
            goto LAB_019c1e40;
          }
          pppppppuVar18 = (uint *******)&DAT_00000001;
          pppppppuVar40 = pppppppuVar19;
          if (pppppppuVar41 == (uint *******)0x0) {
            pppppppuVar41 = (uint *******)0x0;
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = (uint *******)0x0;
          }
          else {
            pppppppuVar20 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
                pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar20 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)((int)pppppppuVar20 + 1));
                pppppppuVar18 = (uint *******)0x0;
                pppppppuVar12 = pppppppuVar41;
                pppppppuVar40 = pppppppuVar32;
                goto LAB_019c1dcc;
              }
              pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
            } while (pppppppuVar41 != pppppppuVar20);
            pppppppuVar39 = (uint *******)&DAT_00000001;
            pppppppuVar20 = pppppppuVar41;
          }
LAB_019c1dcc:
        } while (pppppppuVar20 == (uint *******)0x0);
        auVar5 = (undefined1  [8])0x0;
        do {
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
          auVar5 = (undefined1  [8])
                   (((ulonglong)auVar5 & 0xffffffff) * 10 +
                   (CONCAT44((int)((ulonglong)auVar5 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
                   0xffffffff000000ff));
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c1e40:
        local_2a8._4_4_ = SUB84((ulonglong)auVar5 >> 0x20,0);
        local_2a8._0_4_ = SUB84(auVar5,0);
        local_26c = pppppppuVar30;
        pppppppuVar30 = pppppppuVar12;
        pppppppuVar41 = pppppppuVar32;
        pppppppuVar40 = pppppppuVar39;
        do {
          pppppppuVar18 = pppppppuVar41;
          if (((uint)pppppppuVar39 & 1) != 0) {
            local_320 = 0;
            goto LAB_019c1f50;
          }
          pppppppuVar39 = (uint *******)&DAT_00000001;
          pppppppuVar41 = pppppppuVar18;
          if (pppppppuVar12 == (uint *******)0x0) {
            pppppppuVar12 = (uint *******)0x0;
            pppppppuVar40 = (uint *******)&DAT_00000001;
            pppppppuVar19 = (uint *******)0x0;
          }
          else {
            pppppppuVar19 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar18 + (int)pppppppuVar19) == 0x20) {
                pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar19 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar18 + (int)((int)pppppppuVar19 + 1));
                pppppppuVar39 = (uint *******)0x0;
                pppppppuVar30 = pppppppuVar12;
                pppppppuVar41 = pppppppuVar32;
                goto LAB_019c1ef0;
              }
              pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
            } while (pppppppuVar12 != pppppppuVar19);
            pppppppuVar40 = (uint *******)&DAT_00000001;
            pppppppuVar19 = pppppppuVar12;
          }
LAB_019c1ef0:
        } while (pppppppuVar19 == (uint *******)0x0);
        local_320 = 0;
        do {
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + -1);
          local_320 = (local_320 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_320 >> 0x20) * 10,*(byte *)pppppppuVar18 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
        } while (pppppppuVar19 != (uint *******)0x0);
LAB_019c1f50:
        pppppppuVar12 = pppppppuVar30;
        pppppppuVar41 = pppppppuVar32;
        pppppppuVar18 = pppppppuVar40;
        do {
          pppppppuVar39 = pppppppuVar41;
          if (((uint)pppppppuVar40 & 1) != 0) {
            local_318 = 0;
            goto LAB_019c2050;
          }
          pppppppuVar40 = (uint *******)&DAT_00000001;
          pppppppuVar41 = pppppppuVar39;
          if (pppppppuVar30 == (uint *******)0x0) {
            pppppppuVar30 = (uint *******)0x0;
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar19 = (uint *******)0x0;
          }
          else {
            pppppppuVar19 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar39 + (int)pppppppuVar19) == 0x20) {
                pppppppuVar40 = (uint *******)0x0;
                pppppppuVar30 = (uint *******)((int)pppppppuVar30 - ((int)pppppppuVar19 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar39 + (int)((int)pppppppuVar19 + 1));
                pppppppuVar12 = pppppppuVar30;
                pppppppuVar41 = pppppppuVar32;
                goto LAB_019c1ff0;
              }
              pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
            } while (pppppppuVar30 != pppppppuVar19);
            pppppppuVar18 = (uint *******)&DAT_00000001;
            pppppppuVar19 = pppppppuVar30;
          }
LAB_019c1ff0:
        } while (pppppppuVar19 == (uint *******)0x0);
        local_318 = 0;
        do {
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + -1);
          local_318 = (local_318 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_318 >> 0x20) * 10,*(byte *)pppppppuVar39 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 + 1);
        } while (pppppppuVar19 != (uint *******)0x0);
LAB_019c2050:
        pppppppuVar30 = pppppppuVar32;
        pppppppuVar41 = pppppppuVar18;
        local_25c = pppppppuVar12;
        do {
          pppppppuVar40 = pppppppuVar30;
          if (((uint)pppppppuVar18 & 1) != 0) {
            local_310 = 0;
            goto LAB_019c2160;
          }
          pppppppuVar18 = (uint *******)&DAT_00000001;
          pppppppuVar30 = pppppppuVar40;
          if (pppppppuVar12 == (uint *******)0x0) {
            pppppppuVar12 = (uint *******)0x0;
            pppppppuVar41 = (uint *******)&DAT_00000001;
            pppppppuVar39 = (uint *******)0x0;
          }
          else {
            pppppppuVar39 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar39) == 0x20) {
                pppppppuVar18 = (uint *******)0x0;
                pppppppuVar32 = (uint *******)((int)pppppppuVar40 + (int)pppppppuVar39 + 1);
                pppppppuVar12 = (uint *******)((int)pppppppuVar12 - (int)((int)pppppppuVar39 + 1));
                pppppppuVar30 = pppppppuVar32;
                local_25c = pppppppuVar12;
                goto LAB_019c20f0;
              }
              pppppppuVar39 = (uint *******)((int)pppppppuVar39 + 1);
            } while (pppppppuVar12 != pppppppuVar39);
            pppppppuVar41 = (uint *******)&DAT_00000001;
            pppppppuVar39 = pppppppuVar12;
          }
LAB_019c20f0:
        } while (pppppppuVar39 == (uint *******)0x0);
        local_310 = 0;
        do {
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 + -1);
          local_310 = (local_310 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_310 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
        } while (pppppppuVar39 != (uint *******)0x0);
LAB_019c2160:
        pppppppuVar30 = local_25c;
        do {
          pppppppuVar12 = pppppppuVar32;
          if (((uint)pppppppuVar41 & 1) != 0) {
            local_308 = 0;
            goto LAB_019c2228;
          }
          pppppppuVar41 = (uint *******)&DAT_00000001;
          pppppppuVar32 = pppppppuVar12;
          if (pppppppuVar30 == (uint *******)0x0) {
            pppppppuVar30 = (uint *******)0x0;
            pppppppuVar40 = (uint *******)0x0;
          }
          else {
            pppppppuVar40 = (uint *******)0x0;
            do {
              if (*(byte *)((int)pppppppuVar12 + (int)pppppppuVar40) == 0x20) {
                pppppppuVar41 = (uint *******)0x0;
                pppppppuVar30 = (uint *******)((int)pppppppuVar30 - (int)((int)pppppppuVar40 + 1));
                pppppppuVar32 = (uint *******)((int)pppppppuVar12 + (int)pppppppuVar40 + 1);
                goto LAB_019c21e0;
              }
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar30 != pppppppuVar40);
            pppppppuVar40 = pppppppuVar30;
          }
LAB_019c21e0:
        } while (pppppppuVar40 == (uint *******)0x0);
        local_308 = 0;
        do {
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 + -1);
          local_308 = (local_308 & 0xffffffff) * 10 +
                      (CONCAT44((int)(local_308 >> 0x20) * 10,*(byte *)pppppppuVar12 - 0x30) &
                      0xffffffff000000ff);
          pppppppuVar12 = (uint *******)((int)pppppppuVar12 + 1);
        } while (pppppppuVar40 != (uint *******)0x0);
LAB_019c2228:
        local_324 = local_2a8._4_4_;
        local_280._0_4_ = (uint)uVar44;
        local_280._4_4_ = (uint)(uVar44 >> 0x20);
        uVar35 = local_280._4_4_;
        uVar9 = (uint)local_280;
        local_280 = uVar44;
        FUN_019c49f8(local_274,&local_324,uVar9,uVar35,(int)local_288,local_288._4_4_,local_290,
                     local_298,local_2a0,local_2a8._0_4_);
        local_2a8 = auVar5;
        pppppppuVar30 = local_26c;
        FUN_0134bd64(local_26c,local_260);
        param_1 = local_2ac;
      }
      auVar5 = local_2a8;
      auVar8 = local_298;
      uVar44 = local_290;
      if (pppppppuVar30 == (uint *******)&DAT_80000000) {
        FUN_019bd494(&local_148);
        auVar5 = local_2a8;
        auVar8 = local_298;
        uVar44 = local_290;
      }
      local_290._4_4_ = (uint *******)(uVar44 >> 0x20);
      local_290._0_4_ = (uint *******)uVar44;
      local_298._4_4_ = SUB84((ulonglong)auVar8 >> 0x20,0);
      local_298._0_4_ = SUB84(auVar8,0);
      local_2a8._4_4_ = SUB84((ulonglong)auVar5 >> 0x20,0);
      pppppppuVar30 = (uint *******)0x0;
      if (local_278 != (uint ******)0x0) {
        pppppppuVar30 = local_268;
      }
      if (local_278 == (uint ******)0x0 || pppppppuVar30 == (uint *******)0x0) {
        local_2e8 = param_1 + 0x3c;
        pppppppuVar30 = (uint *******)0x0;
        local_2cc = *local_264;
        local_2d0 = local_264[1];
        local_2d4 = local_264[2];
        local_2d8 = local_264[3];
        local_2dc = local_254;
        local_2e4 = local_250;
        local_2c8 = local_258;
        local_2e0 = local_258 + -7;
        local_2a8._0_4_ = local_24c;
LAB_019c2330:
        FUN_019c8ea4(&local_234,&local_58);
        pppppppuVar12 = local_22c;
        uVar44 = CONCAT44(local_290._4_4_,(uint *******)local_290);
        auVar8 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
        auVar5 = (undefined1  [8])CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
        if ((int)local_234 < -0x7ffffffe) {
          if (local_234 == (uint ******)&DAT_80000000) {
            FUN_019bd494(&local_234);
            uVar44 = CONCAT44(local_290._4_4_,(uint *******)local_290);
            auVar8 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
            auVar5 = (undefined1  [8])CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
          }
        }
        else {
          if (local_22c < &DAT_00000003) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,3,local_22c,&DAT_01d283ec);
          }
          if (*(int3 *)local_230 == 0x757063) {
            local_278 = local_234;
            local_26c = local_230;
            local_274 = pppppppuVar30;
            if (local_268 != (uint *******)0x0) {
              pppppppuVar40 = (uint *******)0x0;
              pppppppuVar32 = local_230;
              pppppppuVar41 = local_22c;
              do {
                pppppppuVar18 = pppppppuVar40;
LAB_019c23a8:
                if (pppppppuVar18 != (uint *******)0x0) goto LAB_019c240c;
                if (pppppppuVar12 != (uint *******)0x0) goto code_r0x019c23b8;
                pppppppuVar12 = (uint *******)0x0;
                pppppppuVar40 = (uint *******)&DAT_00000001;
              } while( true );
            }
            uVar13 = FUN_019c88bc(local_2cc,local_2d0,local_2d4,local_2d8,pppppppuVar30);
            uVar33 = uVar13 >> 0x19;
            iVar37 = 0;
            while( true ) {
              uVar13 = (uint)local_2dc & uVar13;
              uVar21 = *(uint *)((int)local_2c8 + uVar13);
              uVar14 = uVar21 ^ uVar33 * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              pppppppuVar30 = (uint *******)0x80808080;
              while (uVar14 != 0) {
                uVar31 = uVar13 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                                 (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3
                                  ) & (uint)local_2dc;
                uVar14 = uVar14 - 1 & uVar14;
                pppppppuVar30 = local_274;
                if (local_274 == (uint *******)local_2e0[uVar31 * -7]) {
                  iVar37 = ((int)(uVar31 * 0x1c) >> 2) * -0x49249249;
                  pppppppuVar30 = (uint *******)((int)local_2c8 + (iVar37 - 4U & (uint)local_2dc));
                  uVar33 = *(uint *)((int)local_2c8 + iVar37) & 0x80808080 &
                           *(uint *)((int)local_2c8 + iVar37) << 1;
                  bVar27 = 0x80;
                  if (((uint)LZCOUNT(uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                                     (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) >> 3) +
                      ((uint)LZCOUNT((uint)*pppppppuVar30 & 0x80808080 & (int)*pppppppuVar30 << 1)
                      >> 3) < 4) {
                    local_2e4 = (uint *******)((int)local_2e4 + 1);
                    bVar27 = 0xff;
                    local_250 = local_2e4;
                  }
                    /* WARNING (jumptable): Read-only address (ram,0x0056d238) is written */
                  *(byte *)((int)local_2c8 + iVar37) = bVar27;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
                  *(byte *)(pppppppuVar30 + 1) = bVar27;
                  local_68 = (uint *******)local_2c8[uVar31 * -7 + -6];
                  local_2a8._0_4_ = local_2a8._0_4_ + -1;
                  if (local_68 == (uint *******)&DAT_80000000) {
                    local_260 = (uint *******)&DAT_00000001;
                    local_264 = (uint *******)0x0;
                    local_68 = (uint *******)0x0;
                    local_228 = (uint *******)0x0;
                    local_224._0_4_ = (code *)&DAT_00000001;
                    local_224._4_4_ = (uint *******)0x0;
                  }
                  else {
                    local_260 = (uint *******)local_2c8[uVar31 * -7 + -5];
                    local_264 = (uint *******)local_2c8[uVar31 * -7 + -4];
                    local_228 = (uint *******)local_2c8[uVar31 * -7 + -3];
                    local_224._0_4_ = (code *)local_2c8[uVar31 * -7 + -2];
                    local_224._4_4_ = (uint *******)local_2c8[uVar31 * -7 + -1];
                  }
                  local_24c = local_2a8._0_4_;
                  goto LAB_019c2e04;
                }
              }
              if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
              iVar37 = iVar37 + 4;
              uVar13 = uVar13 + iVar37;
            }
            local_260 = (uint *******)&DAT_00000001;
            local_264 = (uint *******)0x0;
            local_68 = (uint *******)0x0;
            local_228 = (uint *******)0x0;
            local_224._0_4_ = (code *)&DAT_00000001;
            local_224._4_4_ = (uint *******)0x0;
LAB_019c2e04:
            bVar23 = false;
            bVar16 = false;
            local_25c = local_26c;
            pppppppuVar32 = local_26c;
            pppppppuVar41 = pppppppuVar12;
            do {
              local_290._4_4_ = pppppppuVar32;
              if (bVar16) {
                local_290._4_4_ = (uint *******)0x0;
                break;
              }
              bVar16 = true;
              pppppppuVar32 = local_290._4_4_;
              if (pppppppuVar12 == (uint *******)0x0) {
                pppppppuVar12 = (uint *******)0x0;
                bVar23 = true;
                pppppppuVar30 = (uint *******)0x0;
              }
              else {
                pppppppuVar30 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)local_290._4_4_ + (int)pppppppuVar30) == 0x20) {
                    pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar30 + 1));
                    local_25c = (uint *******)((int)local_290._4_4_ + (int)((int)pppppppuVar30 + 1))
                    ;
                    bVar16 = false;
                    pppppppuVar32 = local_25c;
                    pppppppuVar41 = pppppppuVar12;
                    goto LAB_019c2e88;
                  }
                  pppppppuVar30 = (uint *******)((int)pppppppuVar30 + 1);
                } while (pppppppuVar12 != pppppppuVar30);
                bVar23 = true;
                pppppppuVar30 = pppppppuVar12;
              }
LAB_019c2e88:
            } while (pppppppuVar30 == (uint *******)0x0);
            if (local_290._4_4_ == (uint *******)0x0) {
              local_290._4_4_ = (uint *******)&DAT_00000001;
              pppppppuVar30 = (uint *******)0x0;
            }
            pppppppuVar12 = local_25c;
            pppppppuVar32 = pppppppuVar41;
            bVar16 = bVar23;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar16) {
                unique0x1000122d = 0;
                goto LAB_019c2f70;
              }
              bVar16 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar41 == (uint *******)0x0) {
                pppppppuVar41 = (uint *******)0x0;
                bVar23 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar16 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar32 = pppppppuVar41;
                    goto LAB_019c2f24;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar41 != pppppppuVar18);
                bVar23 = true;
                pppppppuVar18 = pppppppuVar41;
              }
LAB_019c2f24:
            } while (pppppppuVar18 == (uint *******)0x0);
            unique0x10000d20 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              unique0x00118d00 =
                   (unique0x10000d18 & 0xffffffff) * 10 +
                   (CONCAT44((int)(unique0x10000d18 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                   0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c2f70:
            pppppppuVar12 = local_25c;
            pppppppuVar41 = pppppppuVar32;
            bVar16 = bVar23;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                unique0x1000123d = 0;
                goto LAB_019c3038;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar32 == (uint *******)0x0) {
                pppppppuVar32 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar32 = (uint *******)((int)pppppppuVar32 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar23 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar41 = pppppppuVar32;
                    goto LAB_019c2fec;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar32 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar32;
              }
LAB_019c2fec:
            } while (pppppppuVar18 == (uint *******)0x0);
            unique0x10000d30 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              unique0x00118d00 =
                   (unique0x10000d28 & 0xffffffff) * 10 +
                   (CONCAT44((int)(unique0x10000d28 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                   0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c3038:
            pppppppuVar12 = local_25c;
            pppppppuVar32 = pppppppuVar41;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                unique0x1000124d = 0;
                goto LAB_019c3100;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar41 == (uint *******)0x0) {
                pppppppuVar41 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar23 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar32 = pppppppuVar41;
                    goto LAB_019c30b4;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar41 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar41;
              }
LAB_019c30b4:
            } while (pppppppuVar18 == (uint *******)0x0);
            unique0x10000d40 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              unique0x00118d00 =
                   (unique0x10000d38 & 0xffffffff) * 10 +
                   (CONCAT44((int)(unique0x10000d38 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                   0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c3100:
            pppppppuVar12 = local_25c;
            pppppppuVar41 = pppppppuVar32;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                local_2b4 = 0;
                goto LAB_019c31c8;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar32 == (uint *******)0x0) {
                pppppppuVar32 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar32 = (uint *******)((int)pppppppuVar32 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar23 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar41 = pppppppuVar32;
                    goto LAB_019c317c;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar32 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar32;
              }
LAB_019c317c:
            } while (pppppppuVar18 == (uint *******)0x0);
            local_2b4 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              local_2b4 = (local_2b4 & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_2b4 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c31c8:
            pppppppuVar12 = local_25c;
            pppppppuVar32 = pppppppuVar41;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                local_2bc = 0;
                goto LAB_019c3290;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar41 == (uint *******)0x0) {
                pppppppuVar41 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar23 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar32 = pppppppuVar41;
                    goto LAB_019c3244;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar41 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar41;
              }
LAB_019c3244:
            } while (pppppppuVar18 == (uint *******)0x0);
            local_2bc = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              local_2bc = (local_2bc & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_2bc >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c3290:
            local_288 = CONCAT44((code *)local_224,local_224._4_4_);
            pppppppuVar12 = local_25c;
            pppppppuVar41 = pppppppuVar32;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                local_2c4 = 0;
                goto LAB_019c3360;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar32 == (uint *******)0x0) {
                pppppppuVar32 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    pppppppuVar32 = (uint *******)((int)pppppppuVar32 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    bVar23 = false;
                    pppppppuVar12 = local_25c;
                    pppppppuVar41 = pppppppuVar32;
                    goto LAB_019c3314;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar32 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar32;
              }
LAB_019c3314:
            } while (pppppppuVar18 == (uint *******)0x0);
            local_2c4 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              local_2c4 = (local_2c4 & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_2c4 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c3360:
            local_280 = CONCAT44(local_68,local_228);
            pppppppuVar12 = local_25c;
            pppppppuVar32 = pppppppuVar41;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar12;
              if (bVar23) {
                local_318 = 0;
                goto LAB_019c342c;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar40;
              if (pppppppuVar41 == (uint *******)0x0) {
                pppppppuVar41 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    bVar23 = false;
                    pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    pppppppuVar12 = local_25c;
                    pppppppuVar32 = pppppppuVar41;
                    goto LAB_019c33ec;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar41 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar41;
              }
LAB_019c33ec:
            } while (pppppppuVar18 == (uint *******)0x0);
            local_318 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              local_318 = (local_318 & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_318 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c342c:
            pppppppuVar12 = pppppppuVar32;
            pppppppuVar41 = local_25c;
            bVar23 = bVar16;
            do {
              pppppppuVar40 = pppppppuVar41;
              if (bVar23) {
                local_310 = 0;
                goto LAB_019c34f0;
              }
              bVar23 = true;
              pppppppuVar41 = pppppppuVar40;
              if (pppppppuVar12 == (uint *******)0x0) {
                pppppppuVar12 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar18 = (uint *******)0x0;
              }
              else {
                pppppppuVar18 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
                    bVar23 = false;
                    pppppppuVar32 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar18 + 1));
                    local_25c = (uint *******)((int)pppppppuVar40 + (int)((int)pppppppuVar18 + 1));
                    pppppppuVar12 = pppppppuVar32;
                    pppppppuVar41 = local_25c;
                    goto LAB_019c34b0;
                  }
                  pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
                } while (pppppppuVar12 != pppppppuVar18);
                bVar16 = true;
                pppppppuVar18 = pppppppuVar12;
              }
LAB_019c34b0:
            } while (pppppppuVar18 == (uint *******)0x0);
            local_310 = 0;
            do {
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
              local_310 = (local_310 & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_310 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
            } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c34f0:
            pppppppuVar12 = local_25c;
            pppppppuVar41 = pppppppuVar32;
            pppppppuVar40 = local_25c;
            bVar23 = bVar16;
            do {
              pppppppuVar18 = pppppppuVar12;
              if (bVar23) {
                local_308 = 0;
                goto LAB_019c35b0;
              }
              bVar23 = true;
              pppppppuVar12 = pppppppuVar18;
              if (pppppppuVar32 == (uint *******)0x0) {
                pppppppuVar32 = (uint *******)0x0;
                bVar16 = true;
                pppppppuVar39 = (uint *******)0x0;
              }
              else {
                pppppppuVar39 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar18 + (int)pppppppuVar39) == 0x20) {
                    pppppppuVar32 = (uint *******)((int)pppppppuVar32 - ((int)pppppppuVar39 + 1));
                    pppppppuVar40 =
                         (uint *******)((int)pppppppuVar18 + (int)((int)pppppppuVar39 + 1));
                    bVar23 = false;
                    pppppppuVar12 = pppppppuVar40;
                    pppppppuVar41 = pppppppuVar32;
                    goto LAB_019c3570;
                  }
                  pppppppuVar39 = (uint *******)((int)pppppppuVar39 + 1);
                } while (pppppppuVar32 != pppppppuVar39);
                bVar16 = true;
                pppppppuVar39 = pppppppuVar32;
              }
LAB_019c3570:
            } while (pppppppuVar39 == (uint *******)0x0);
            local_308 = 0;
            do {
              pppppppuVar39 = (uint *******)((int)pppppppuVar39 + -1);
              local_308 = (local_308 & 0xffffffff) * 10 +
                          (CONCAT44((int)(local_308 >> 0x20) * 10,*(byte *)pppppppuVar18 - 0x30) &
                          0xffffffff000000ff);
              pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
            } while (pppppppuVar39 != (uint *******)0x0);
LAB_019c35b0:
            do {
              pppppppuVar12 = pppppppuVar40;
              if (bVar16) {
                uStack_300 = 0;
                goto LAB_019c3654;
              }
              bVar16 = true;
              pppppppuVar40 = pppppppuVar12;
              if (pppppppuVar41 == (uint *******)0x0) {
                pppppppuVar41 = (uint *******)0x0;
                pppppppuVar32 = (uint *******)0x0;
              }
              else {
                pppppppuVar32 = (uint *******)0x0;
                do {
                  if (*(byte *)((int)pppppppuVar12 + (int)pppppppuVar32) == 0x20) {
                    bVar16 = false;
                    pppppppuVar41 =
                         (uint *******)((int)pppppppuVar41 - (int)((int)pppppppuVar32 + 1));
                    pppppppuVar40 = (uint *******)((int)pppppppuVar12 + (int)pppppppuVar32 + 1);
                    goto LAB_019c3610;
                  }
                  pppppppuVar32 = (uint *******)((int)pppppppuVar32 + 1);
                } while (pppppppuVar41 != pppppppuVar32);
                pppppppuVar32 = pppppppuVar41;
              }
LAB_019c3610:
            } while (pppppppuVar32 == (uint *******)0x0);
            uStack_300 = 0;
            do {
              pppppppuVar32 = (uint *******)((int)pppppppuVar32 + -1);
              uStack_300 = (uStack_300 & 0xffffffff) * 10 +
                           (CONCAT44((int)(uStack_300 >> 0x20) * 10,*(byte *)pppppppuVar12 - 0x30) &
                           0xffffffff000000ff);
              pppppppuVar12 = (uint *******)((int)pppppppuVar12 + 1);
            } while (pppppppuVar32 != (uint *******)0x0);
LAB_019c3654:
            local_2f8 = (uint *******)&local_68;
            local_324 = local_2bc._4_4_;
            local_320 = local_2c4;
            local_2f4 = (uint *******)&local_228;
            local_64 = local_260;
            local_60 = local_264;
            FUN_019c4d48(&local_148,local_290._4_4_,pppppppuVar30,&local_308,unique0x10001225,
                         unique0x10001235,unique0x10001245,(uint ******)local_2b4,local_2b4._4_4_,
                         (undefined4)local_2bc);
            FUN_01bed4e2(&local_228,&local_148,0xe0);
            pppppppuVar12 = local_26c;
            pppppppuVar30 = local_274;
            ppppppuVar11 = local_278;
            param_1 = local_2ac;
            ppppppuVar17 = local_2ac[0x3e];
            if (ppppppuVar17 == local_2ac[0x3c]) {
              FUN_019cacc8(local_2e8);
            }
            FUN_01bed4e2(param_1[0x3d] + (int)ppppppuVar17 * 0x38,&local_228,0xe0);
            param_1[0x3e] = (uint ******)((int)ppppppuVar17 + 1);
            goto LAB_019c3774;
          }
          FUN_0134bd64(local_234,local_230);
          uVar44 = CONCAT44(local_290._4_4_,(uint *******)local_290);
          auVar8 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
          auVar5 = (undefined1  [8])CONCAT44(local_2a8._4_4_,local_2a8._0_4_);
        }
      }
    }
    local_2a8 = auVar5;
    local_298 = auVar8;
    local_290 = uVar44;
    if (local_54 != (uint *******)0x0) {
      thunk_FUN_01be4678(local_58);
    }
    FUN_01bf01d6(local_44);
    auVar5 = local_298;
  }
  local_298._4_4_ = SUB84((ulonglong)auVar5 >> 0x20,0);
  if (local_270 != (uint *******)0x0) {
    ppppppuVar11 = param_1[0x3e];
    if (ppppppuVar11 != (uint ******)0x0) {
      ppppppuVar17 = param_1[0x3d];
      ppppppuVar36 = (uint ******)0x0;
      local_298._0_4_ = (int)&local_144 + 4;
      local_2b4 = CONCAT44(ppppppuVar11,ppppppuVar17);
      do {
        local_288 = CONCAT44(local_288._4_4_,ppppppuVar36);
        local_50 = (uint *******)0x0;
        local_54 = (uint *******)&DAT_00000001;
        local_58 = (uint *******)0x0;
        local_224._0_4_ = FUN_012fd02c;
        local_228 = &local_234;
        local_234 = ppppppuVar36;
        FUN_00664898(&local_148,&DAT_0057ff5c,&local_228);
        local_228 = local_148;
        local_224 = local_144;
        FUN_019cad28(&local_148);
        pppppppuVar30 = (uint *******)local_144;
        if ((char)local_148 == '\x04') {
          local_228 = (uint *******)local_144;
          FUN_01980288(&local_68,&local_228,&local_58);
          FUN_01bf01d6(pppppppuVar30);
          pppppppuVar30 = (uint *******)((uint)local_68 & 0xff);
        }
        else {
          local_64 = (uint *******)local_144;
          local_68 = local_148;
          pppppppuVar30 = local_148;
        }
        if (((uint)pppppppuVar30 & 0xff) == 4) {
          uVar42 = FUN_013245a0(local_54,local_50);
          local_138 = (uint *******)((ulonglong)uVar42 >> 0x20);
          local_124 = (uint *******)CONCAT22(local_124._2_2_,1);
          local_130 = (uint *******)CONCAT31(local_130._1_3_,1);
          local_12c = (uint *******)0x0;
          local_134 = (uint *******)&DAT_0000000a;
          uStack_13c = 0;
          uStack_13a = 0;
          local_148 = (uint *******)&DAT_0000000a;
          local_128 = local_138;
          local_144 = uVar42;
          uVar44 = FUN_019c456c(&local_148);
          iVar37 = (int)(uVar44 >> 0x20);
          pcVar34 = (char *)uVar44;
          if (pcVar34 == (char *)0x0 || iVar37 == 0) goto LAB_019c394c;
          if (iVar37 == 1) {
            cVar22 = *pcVar34;
            if (cVar22 == '+' || cVar22 == '-') goto LAB_019c394c;
          }
          else {
            cVar22 = *pcVar34;
          }
          if (cVar22 == '+') {
            uVar44 = CONCAT44(iVar37 + -1,pcVar34 + 1);
          }
          if (0x10ffffffff < uVar44) {
            uVar13 = 0;
            uVar33 = 0;
            do {
              iVar37 = (int)(uVar44 >> 0x20);
              uVar43 = CONCAT44(uVar33,uVar13);
              if (iVar37 == 0) goto LAB_019c418c;
              uVar21 = (uint)((ulonglong)uVar13 * 10);
              uVar31 = (uint)((ulonglong)uVar13 * 10 >> 0x20);
              uVar13 = (uint)((ulonglong)uVar33 * 10);
              uVar14 = uVar31 + uVar13;
              if (((int)((ulonglong)uVar33 * 10 >> 0x20) != 0 || CARRY4(uVar31,uVar13)) ||
                 (uVar31 = *(byte *)uVar44 - 0x30, 9 < uVar31)) break;
              uVar13 = uVar21 + uVar31;
              uVar33 = uVar14 + CARRY4(uVar21,uVar31);
              uVar44 = CONCAT44(iVar37 + -1,(byte *)uVar44 + 1);
            } while (!CARRY4(uVar14,(uint)CARRY4(uVar21,uVar31)));
            goto LAB_019c394c;
          }
          if ((int)(uVar44 >> 0x20) == 0) {
            uVar43 = 0;
          }
          else {
            uVar43 = 0;
            do {
              uVar33 = *(byte *)uVar44 - 0x30;
              if (9 < uVar33) goto LAB_019c394c;
              iVar37 = (int)(uVar44 >> 0x20) + -1;
              uVar44 = CONCAT44(iVar37,(byte *)uVar44 + 1);
              uVar43 = (uVar43 & 0xffffffff) * 10 + CONCAT44((int)(uVar43 >> 0x20) * 10,uVar33);
            } while (iVar37 != 0);
          }
LAB_019c418c:
          uVar42 = FUN_01bf0ff0((int)uVar43,(int)(uVar43 >> 0x20),1000,0);
        }
        else {
          FUN_0069263c(pppppppuVar30,local_64);
LAB_019c394c:
          local_50 = (uint *******)0x0;
          local_148 = (uint *******)0x0;
          *(undefined4 *)local_298._0_4_ = 0;
          *(undefined2 *)(local_298._0_4_ + 4) = 0;
          local_144._0_4_ = (uint *******)&DAT_000001b6;
          local_144._4_4_ = (uint *******)CONCAT31(local_144._5_3_,1);
          FUN_019a581c(&local_228,&local_148,"/proc/cpuinfo",0xd);
          pppppppuVar30 = (uint *******)(code *)local_224;
          if ((char)local_228 == '\x04') {
            local_148 = (uint *******)(code *)local_224;
            FUN_01980288(&local_68,&local_148,&local_58);
            FUN_01bf01d6(pppppppuVar30);
            pppppppuVar30 = (uint *******)((uint)local_68 & 0xff);
          }
          else {
            local_64 = (uint *******)(code *)local_224;
            local_68 = local_228;
            pppppppuVar30 = local_228;
          }
          if (((uint)pppppppuVar30 & 0xff) == 4) {
            local_124 = (uint *******)CONCAT22(local_124._2_2_,1);
            local_130 = (uint *******)CONCAT31(local_130._1_3_,1);
            local_128 = local_50;
            local_12c = (uint *******)0x0;
            local_134 = (uint *******)&DAT_0000000a;
            local_138 = local_50;
            local_144._0_4_ = local_54;
            local_144._4_4_ = local_50;
            uStack_13c = 0;
            uStack_13a = 0;
            local_148 = (uint *******)&DAT_0000000a;
LAB_019c3a14:
            do {
              do {
                uVar44 = FUN_019c456c(&local_148);
                pppppppuVar30 = (uint *******)(uVar44 >> 0x20);
                iVar37 = (int)uVar44;
                if (iVar37 == 0) goto LAB_019c3b14;
                if (uVar44 < 0x800000000) {
                  if (uVar44 < 0x600000000) goto LAB_019c3a14;
                }
                else {
                  iVar15 = thunk_FUN_01bed842(&DAT_0056fe30,iVar37,8);
                  if (iVar15 == 0) goto LAB_019c3ab8;
                  iVar15 = thunk_FUN_01bed842("BogoMIPS",iVar37,8);
                  if (iVar15 == 0) goto LAB_019c3ab8;
                }
                iVar15 = thunk_FUN_01bed842("clock\t",iVar37,6);
                if (iVar15 == 0) goto LAB_019c3ab8;
              } while (uVar44 < 0x1000000000);
              iVar37 = thunk_FUN_01bed842(&DAT_005694b8,iVar37,0x10);
            } while (iVar37 != 0);
LAB_019c3ab8:
            lVar45 = ZEXT48(local_260) << 0x20;
            local_124 = (uint *******)CONCAT22(local_124._2_2_,1);
            local_130 = (uint *******)CONCAT31(local_130._1_3_,1);
            local_12c = (uint *******)0x0;
            local_134 = (uint *******)0x3a;
            local_148 = (uint *******)0x3a;
            uStack_13c = 0;
            uStack_13a = 0;
            local_144._4_4_ = pppppppuVar30;
            local_138 = pppppppuVar30;
            do {
              local_128 = (uint *******)(uVar44 >> 0x20);
              local_144._0_4_ = (uint *******)uVar44;
              local_260 = (uint *******)((ulonglong)lVar45 >> 0x20);
              iVar37 = (int)lVar45;
              lVar45 = FUN_019c456c(&local_148);
              uVar44 = CONCAT44(local_128,(uint *******)local_144);
            } while ((int)lVar45 != 0);
            if (iVar37 != 0) {
              local_224._4_4_ = (uint *******)0x0;
              local_224._0_4_ = (code *)&DAT_00000001;
              local_228 = (uint *******)0x0;
              local_290._0_4_ = (uint *******)iVar37;
              FUN_01306b30(&local_148,iVar37,local_260,"MHzARMCavium",3);
              iVar15 = local_110;
              pppppppuVar30 = local_114;
              iVar37 = local_118;
              local_290._4_4_ = local_148;
              uVar33 = *(uint *)(local_298._0_4_ + 4);
              local_26c = (uint *******)0x0;
              local_298._4_4_ = &DAT_00000001;
              local_25c = local_10c;
              if (local_10c < local_138) {
                local_25c = local_138;
              }
              local_2a8._0_4_ = (int)local_10c - (int)local_130;
              local_278 = (uint ******)((int)local_10c + -1);
              local_288 = CONCAT44(local_12c,(int)local_288);
              local_264 = (uint *******)((int)local_138 + -1);
              local_2a0._0_4_ = uVar33 & 0xffffff00;
              local_2a0._4_4_ = uVar33 & 0x10000;
              local_274 = local_10c;
              local_2a8._4_4_ = local_130;
              local_268 = local_138;
              local_280 = CONCAT44(*(undefined4 *)local_298._0_4_,uVar33);
              local_270 = (uint *******)0x0;
              pppppppuVar12 = (uint *******)local_144;
              pppppppuVar32 = local_124;
LAB_019c3c2c:
              if (((uint)local_290._4_4_ & 1) == 0) {
                if (local_2a0._4_4_ == 0) {
                  uVar33 = (uint)local_280;
                  do {
                    if (pppppppuVar12 != (uint *******)0x0) {
                      if (pppppppuVar12 < pppppppuVar30) {
                        if ((char)*(byte *)(iVar37 + (int)pppppppuVar12) < -0x40) goto LAB_019c42d0;
                      }
                      else if (pppppppuVar12 != pppppppuVar30) {
LAB_019c42d0:
                    /* WARNING: Subroutine does not return */
                        FUN_012fb514(iVar37,pppppppuVar30,pppppppuVar12,pppppppuVar30,&DAT_01d2e39c)
                        ;
                      }
                    }
                    if (pppppppuVar12 == pppppppuVar30) {
                      local_280 = (ulonglong)local_280._4_4_ << 0x20;
                      pppppppuVar41 = pppppppuVar30;
                      pppppppuVar40 = pppppppuVar30;
                      pppppppuVar12 = pppppppuVar30;
                      if ((uVar33 & 1) != 0) goto LAB_019c3f70;
                      break;
                    }
                    pbVar24 = (byte *)(iVar37 + (int)pppppppuVar12);
                    uVar13 = (uint)*pbVar24;
                    if (0x7fffffff < (uint)(int)(char)*pbVar24) {
                      if (uVar13 < 0xe0) {
                        uVar13 = pbVar24[1] & 0x3f | (uVar13 & 0x1f) << 6;
                      }
                      else {
                        uVar14 = pbVar24[2] & 0x3f | (pbVar24[1] & 0x3f) << 6;
                        if (uVar13 < 0xf0) {
                          uVar13 = uVar14 | (uVar13 & 0x1f) << 0xc;
                        }
                        else {
                          uVar13 = pbVar24[3] & 0x3f | uVar14 << 6 | (uVar13 & 7) << 0x12;
                        }
                      }
                    }
                    if ((uVar33 & 1) != 0) goto LAB_019c3e60;
                    iVar25 = 1;
                    if (0x7f < uVar13) {
                      iVar25 = 2;
                    }
                    uVar33 = 1;
                    if ((0x7ff < uVar13) && (iVar25 = 4, uVar13 < 0x10000)) {
                      iVar25 = 3;
                    }
                    pppppppuVar12 = (uint *******)(iVar25 + (int)pppppppuVar12);
                  } while( true );
                }
              }
              else {
                pppppppuVar40 = (uint *******)((int)local_288._4_4_ + (int)local_278);
                pppppppuVar41 = local_288._4_4_;
                if (pppppppuVar32 == (uint *******)&DAT_ffffffff) {
                  if (pppppppuVar40 < pppppppuVar30) {
                    uVar33 = (uint)local_280 & 0xff | local_2a0._0_4_;
LAB_019c3e90:
                    uVar14 = *(byte *)(iVar37 + (int)pppppppuVar40) & 0x3f;
                    uVar13 = local_280._4_4_ >> uVar14 | uVar33 << (0x20 - uVar14 & 0xff);
                    if (-1 < (int)(uVar14 - 0x20)) {
                      uVar13 = uVar33 >> (uVar14 - 0x20 & 0xff);
                    }
                    if ((uVar13 & 1) == 0) {
                      pppppppuVar32 = local_274;
                      goto LAB_019c3f4c;
                    }
                    pppppppuVar32 = local_268;
                    do {
                      pppppppuVar40 = pppppppuVar32;
                      if (local_25c == pppppppuVar40) {
                        pppppppuVar40 = local_264;
                        goto LAB_019c3f14;
                      }
                      if (pppppppuVar30 <= (uint *******)((int)pppppppuVar41 + (int)pppppppuVar40))
                      {
                        pppppppuVar40 = (uint *******)((int)pppppppuVar41 + (int)local_268);
                        goto LAB_019c4264;
                      }
                      pppppppuVar32 = (uint *******)((int)pppppppuVar40 + 1);
                    } while (*(byte *)(iVar15 + (int)pppppppuVar40) ==
                             ((byte *)(iVar37 + (int)pppppppuVar41))[(int)pppppppuVar40]);
                    pppppppuVar41 =
                         (uint *******)
                         ((int)pppppppuVar40 + (int)((int)pppppppuVar41 + (1 - (int)local_268)));
                    goto LAB_019c3f50;
                  }
                }
                else if (pppppppuVar40 < pppppppuVar30) {
                  uVar33 = (uint)local_280 & 0xff | local_2a0._0_4_;
LAB_019c3c68:
                  uVar14 = *(byte *)(iVar37 + (int)pppppppuVar40) & 0x3f;
                  uVar13 = local_280._4_4_ >> uVar14 | uVar33 << (0x20 - uVar14 & 0xff);
                  if (-1 < (int)(uVar14 - 0x20)) {
                    uVar13 = uVar33 >> (uVar14 - 0x20 & 0xff);
                  }
                  if ((uVar13 & 1) == 0) {
                    pppppppuVar41 = (uint *******)((int)pppppppuVar41 + (int)local_274);
                  }
                  else {
                    pppppppuVar40 = local_268;
                    if (local_268 < pppppppuVar32) {
                      pppppppuVar40 = pppppppuVar32;
                    }
                    pppppppuVar18 = local_274;
                    if (local_274 < pppppppuVar40) {
                      pppppppuVar18 = pppppppuVar40;
                    }
                    pppppppuVar39 = pppppppuVar40;
                    do {
                      pppppppuVar19 = pppppppuVar39;
                      if (pppppppuVar18 == pppppppuVar19) {
                        pppppppuVar40 = local_268;
                        goto LAB_019c3d18;
                      }
                      if (pppppppuVar30 <= (uint *******)((int)pppppppuVar41 + (int)pppppppuVar19))
                      {
                        pppppppuVar40 = (uint *******)((int)pppppppuVar41 + (int)pppppppuVar40);
LAB_019c4264:
                        puVar26 = &DAT_01d2e38c;
                        if (pppppppuVar40 < pppppppuVar30) {
                          pppppppuVar40 = pppppppuVar30;
                        }
                        goto LAB_019c4304;
                      }
                      pppppppuVar39 = (uint *******)((int)pppppppuVar19 + 1);
                    } while (*(byte *)(iVar15 + (int)pppppppuVar19) ==
                             ((byte *)(iVar37 + (int)pppppppuVar41))[(int)pppppppuVar19]);
                    pppppppuVar41 =
                         (uint *******)
                         ((int)pppppppuVar19 + (int)((int)pppppppuVar41 + (1 - (int)local_268)));
                  }
                  pppppppuVar32 = (uint *******)0x0;
                  goto LAB_019c3cfc;
                }
              }
LAB_019c3ff4:
              uVar33 = (int)local_260 - (int)local_270;
              if ((uint)((int)local_228 - (int)local_26c) < uVar33) {
                FUN_006520b4(&local_228,local_26c,uVar33,1,1);
                local_26c = local_224._4_4_;
                ppppppuVar11 = local_2b4._4_4_;
                ppppppuVar17 = (uint ******)local_2b4;
              }
              else {
                ppppppuVar11 = local_2b4._4_4_;
                ppppppuVar17 = (uint ******)local_2b4;
              }
              puVar10 = (code *)local_224;
              pppppppuVar12 = local_228;
              pppppppuVar30 = local_26c;
              param_1 = local_2ac;
              FUN_01bed4e2((code *)local_224 + (int)local_26c,
                           (byte *)((int)(uint *******)local_290 + (int)local_270),uVar33);
              uVar42 = FUN_013245a0(puVar10,(byte *)((int)pppppppuVar30 + uVar33));
              FUN_01305878(&local_148,(int)uVar42,(int)((ulonglong)uVar42 >> 0x20));
              pppppppuVar30 = local_144._4_4_;
              dVar7 = (double)CONCAT26(uStack_13a,CONCAT24(uStack_13c,local_144._4_4_));
              cVar22 = (char)local_148;
              FUN_0134bd64(pppppppuVar12,puVar10);
              uVar42 = 0;
              local_144 = CONCAT44(local_144._4_4_,(uint *******)local_144);
              local_224 = CONCAT44(local_224._4_4_,(code *)local_224);
              if (cVar22 == '\0') {
                uVar42 = FUN_01bf0b64(pppppppuVar30,(int)((ulonglong)dVar7 >> 0x20));
                if (dVar7 < 0.0) {
                  uVar42 = 0;
                }
                local_144 = CONCAT44(local_144._4_4_,(uint *******)local_144);
                local_224 = CONCAT44(local_224._4_4_,(code *)local_224);
                if (1.844674407370955e+19 < dVar7) {
                  uVar42 = 0xffffffffffffffff;
                  local_144 = CONCAT44(local_144._4_4_,(uint *******)local_144);
                  local_224 = CONCAT44(local_224._4_4_,(code *)local_224);
                }
              }
              goto LAB_019c3b1c;
            }
          }
          else {
            FUN_0069263c(pppppppuVar30,local_64);
          }
LAB_019c3b14:
          uVar42 = 0;
          local_144 = CONCAT44(local_144._4_4_,(uint *******)local_144);
        }
LAB_019c3b1c:
        FUN_0134bd64(local_58,local_54);
        auVar5 = (undefined1  [8])CONCAT44(local_298._4_4_,local_298._0_4_);
        ppppppuVar36 = (uint ******)((int)local_288 + 1);
        *(undefined8 *)(ppppppuVar17 + (int)local_288 * 0x38 + 0x2c) = uVar42;
      } while (ppppppuVar36 != ppppppuVar11);
    }
    *(byte *)((int)param_1 + 0xfd) = 1;
  }
LAB_019c41f0:
  local_298 = auVar5;
  FUN_019c4fc4(&local_258);
  return;
code_r0x019bff60:
  cVar22 = *pcVar34;
  if ((cVar22 != '+') && (cVar22 != '-')) {
LAB_019bff7c:
    ppppppuVar11 = (uint ******)0x0;
    if (cVar22 == '+') {
      uVar44 = CONCAT44((byte *)((int)pppppppuVar12 + -1),pcVar34 + 1);
    }
    pbVar24 = (byte *)(uVar44 >> 0x20);
    if (uVar44 < 0x900000000) {
      while( true ) {
        if (pbVar24 == (byte *)0x0) goto LAB_019c0010;
        pppppppuVar12 = (uint *******)(uVar44 >> 0x20);
        uVar33 = *(byte *)uVar44 - 0x30;
        if (9 < uVar33) break;
        pbVar24 = (byte *)((int)pppppppuVar12 + -1);
        uVar44 = CONCAT44(pbVar24,(byte *)uVar44 + 1);
        ppppppuVar11 = (uint ******)(uVar33 + (int)ppppppuVar11 * 10);
      }
    }
    else {
      do {
        pppppppuVar12 = (uint *******)(uVar44 >> 0x20);
        if (pppppppuVar12 == (uint *******)0x0) goto LAB_019c0010;
        uVar33 = (uint)(ZEXT48(ppppppuVar11) * 10);
        if ((int)(ZEXT48(ppppppuVar11) * 10 >> 0x20) != 0) break;
        uVar13 = *(byte *)uVar44 - 0x30;
        ppppppuVar11 = (uint ******)(uVar13 + uVar33);
        if (9 < uVar13) break;
        pppppppuVar12 = (uint *******)((int)pppppppuVar12 + -1);
        uVar44 = CONCAT44(pppppppuVar12,(byte *)uVar44 + 1);
      } while (!CARRY4(uVar13,uVar33));
    }
  }
  goto LAB_019bfe28;
LAB_019c0010:
  local_280 = local_280 & 0xffffffff;
  local_288 = local_288 & 0xffffffff;
  pppppppuVar12 = (uint *******)&DAT_80000000;
  pppppppuVar32 = (uint *******)&DAT_80000000;
LAB_019c0024:
  do {
    pppppppuVar41 = pppppppuVar32;
    pppppppuVar40 = pppppppuVar12;
    local_260 = param_1;
    local_25c = pppppppuVar30;
    uVar44 = FUN_019c456c(&local_228);
    iVar15 = (int)(uVar44 >> 0x20);
    iVar37 = (int)uVar44;
    if (iVar37 == 0) break;
    pppppppuVar12 = pppppppuVar40;
    pppppppuVar32 = pppppppuVar41;
    if (uVar44 < 0xa00000000) {
      if (iVar15 == 9) goto LAB_019c00c4;
    }
    else {
      iVar25 = thunk_FUN_01bed842("vendor_id\t",iVar37,10);
      if (iVar25 == 0) {
        FUN_019c470c(&local_148,iVar37,iVar15);
        param_1 = (uint *******)local_144;
        pppppppuVar12 = local_148;
        local_290._4_4_ = local_144._4_4_;
        pppppppuVar30 = local_25c;
        if (pppppppuVar40 != (uint *******)&DAT_80000000) {
          FUN_0134bd64(pppppppuVar40,local_260);
          pppppppuVar30 = local_25c;
        }
        goto LAB_019c0024;
      }
      if (iVar15 != 10) {
        iVar25 = thunk_FUN_01bed842("model name\t",iVar37,0xb);
        if (iVar25 == 0) {
          FUN_019c470c(&local_148,iVar37,iVar15);
          pppppppuVar30 = (uint *******)local_144;
          pppppppuVar32 = local_148;
          local_2a0._4_4_ = local_144._4_4_;
          param_1 = local_260;
          if (pppppppuVar41 != (uint *******)&DAT_80000000) {
            FUN_0134bd64(pppppppuVar41,local_25c);
            param_1 = local_260;
          }
          goto LAB_019c0024;
        }
        if ((0xfffffffff < uVar44) &&
           (iVar25 = thunk_FUN_01bed842("CPU implementer\t",iVar37,0x10), iVar25 == 0)) {
          local_280 = CONCAT44(1,(uint)local_280);
          local_2a0._0_4_ = FUN_019c47f4(iVar37,iVar15);
          pppppppuVar30 = local_25c;
          param_1 = local_260;
          goto LAB_019c0024;
        }
      }
LAB_019c00c4:
      iVar25 = thunk_FUN_01bed842("CPU part\t",iVar37,9);
      if (iVar25 == 0) {
        local_288._4_4_ = (uint *******)0x1;
        uVar35 = FUN_019c47f4(iVar37,iVar15);
        local_288 = CONCAT44(local_288._4_4_,uVar35);
        pppppppuVar30 = local_25c;
        param_1 = local_260;
        goto LAB_019c0024;
      }
    }
    if (pppppppuVar41 != (uint *******)&DAT_80000000 && pppppppuVar40 != (uint *******)&DAT_80000000
       ) break;
    iVar15 = 0;
    if (local_280._4_4_ != 0) {
      iVar15 = (int)local_288._4_4_;
    }
    if (local_280._4_4_ != 0 && iVar15 != 0) break;
    pppppppuVar30 = local_25c;
    param_1 = local_260;
    if (uVar44 < 0xa00000000) goto LAB_019c0024;
    iVar37 = thunk_FUN_01bed842("processor\t",iVar37,10);
    pppppppuVar30 = local_25c;
    param_1 = local_260;
  } while (iVar37 != 0);
  uVar35 = local_2a0._0_4_;
  local_130 = local_290._4_4_;
  local_134 = local_260;
  uStack_13c = (undefined2)local_288;
  uStack_13a = (undefined2)(local_288 >> 0x10);
  local_144._4_4_ = (uint *******)0x0;
  local_148 = (uint *******)0x0;
  local_124 = (uint *******)local_2a0._4_4_;
  local_128 = local_25c;
  local_144._0_4_ = (uint *******)local_2a0._0_4_;
  local_120 = ppppppuVar11;
  if (((uint)local_288._4_4_ & local_280._4_4_) == 0) {
    pppppppuVar32 = *(uint ********)local_298._0_4_;
    pppppppuVar12 = *(uint ********)(local_298._0_4_ + 4);
    local_12c = (uint *******)&DAT_80000000;
    local_138 = (uint *******)&DAT_80000000;
    pppppppuVar30 = (uint *******)local_2a0._4_4_;
    pppppppuVar18 = local_25c;
    goto LAB_019c1260;
  }
  iVar37 = local_2a0._0_4_ + -0x41;
  pppppppuVar39 = (uint *******)&DAT_80000000;
  local_138 = pppppppuVar40;
  local_12c = pppppppuVar41;
  if (0x65 < (int)local_2a0._0_4_) {
    if ((int)local_2a0._0_4_ < 0x70) {
      if (local_2a0._0_4_ == 0x66) {
        pppppppuVar30 = (uint *******)&DAT_00000007;
        pcVar34 = "FaradayIntelPhytiumAmpere";
      }
      else {
        if (local_2a0._0_4_ != 0x69) goto switchD_019c02b4_caseD_4;
        pppppppuVar30 = (uint *******)&DAT_00000005;
        pcVar34 = "IntelPhytiumAmpere";
      }
    }
    else if (local_2a0._0_4_ == 0x70) {
      pppppppuVar30 = (uint *******)&DAT_00000007;
      pcVar34 = "PhytiumAmpere";
    }
    else {
      if (local_2a0._0_4_ != 0xc0) goto switchD_019c02b4_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_00000006;
      pcVar34 = "Ampere";
    }
    goto switchD_019c02b4_caseD_1;
  }
  pppppppuVar30 = (uint *******)&DAT_00000008;
  pcVar34 = "Broadcom";
  switch(iVar37) {
  case 0:
    pppppppuVar30 = (uint *******)&DAT_00000003;
    pcVar34 = "ARMCavium";
    break;
  case 1:
    break;
  case 2:
    pppppppuVar30 = (uint *******)&DAT_00000006;
    pcVar34 = "Cavium";
    break;
  case 3:
    pppppppuVar30 = (uint *******)&DAT_00000003;
    pcVar34 = "DECFUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell";
    break;
  default:
    goto switchD_019c02b4_caseD_4;
  case 5:
    pppppppuVar30 = (uint *******)&DAT_00000007;
    pcVar34 = "FUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell";
    break;
  case 7:
    pppppppuVar30 = (uint *******)&DAT_00000009;
    pcVar34 = "HiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell";
    break;
  case 8:
    pcVar34 = "Infineon>\x04";
    break;
  case 0xc:
    pppppppuVar30 = (uint *******)&DAT_00000012;
    pcVar34 = "Motorola/FreescaleNVIDIAAPMSamsungMarvell";
    break;
  case 0xd:
    pppppppuVar30 = (uint *******)&DAT_00000006;
    pcVar34 = "NVIDIAAPMSamsungMarvell";
    break;
  case 0xf:
    pppppppuVar30 = (uint *******)&DAT_00000003;
    pcVar34 = "APMSamsungMarvell";
    break;
  case 0x10:
    pcVar34 = &UNK_00570b68;
    break;
  case 0x12:
    pppppppuVar30 = (uint *******)&DAT_00000007;
    pcVar34 = "SamsungMarvell";
    break;
  case 0x15:
    pppppppuVar30 = (uint *******)&DAT_00000007;
    pcVar34 = "Marvell";
    break;
  case 0x20:
    pppppppuVar30 = (uint *******)&DAT_00000005;
    pcVar34 = "AppleFaradayIntelPhytiumAmpere";
  }
switchD_019c02b4_caseD_1:
  pppppppuVar12 = (uint *******)FUN_01298504(pppppppuVar30,1);
  if (pppppppuVar12 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_2a8._4_4_ = pppppppuVar12;
  FUN_01bed4e2(pppppppuVar12,pcVar34,pppppppuVar30);
  pppppppuVar39 = pppppppuVar30;
  local_2a8._0_4_ = pppppppuVar30;
switchD_019c02b4_caseD_4:
  if (0x60 < (int)uVar35) {
    if ((int)uVar35 < 0x69) {
      if (uVar35 == 0x61) {
        uVar33 = (int)local_288 - 0x20;
        if ((uVar33 < 0x14) && ((0xf033fU >> (uVar33 & 0xff) & 1) != 0)) {
          pcVar34 = (&PTR_s_Icestorm_A14_01d344c0)[uVar33];
          pppppppuVar30 = *(uint ********)(&DAT_00539188 + uVar33 * 4);
          goto switchD_019c07a8_caseD_a0;
        }
      }
      else if (uVar35 == 0x66) {
        pppppppuVar30 = (uint *******)&DAT_00000005;
        if ((int)local_288 == 0x526) {
          pcVar34 = 
          "FA526FA626i80200PXA250APXA210Ai80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
        else {
          if ((int)local_288 != 0x626) goto switchD_019c04d8_caseD_4;
          pcVar34 = 
          "FA626i80200PXA250APXA210Ai80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
        goto switchD_019c07a8_caseD_a0;
      }
      goto switchD_019c04d8_caseD_4;
    }
    if (uVar35 == 0x69) {
      pppppppuVar30 = (uint *******)&DAT_00000006;
      if ((int)local_288 < 0x411) {
        if ((int)local_288 < 0x290) {
          if ((int)local_288 < 0x212) {
            pcVar34 = 
            "i80200PXA250APXA210Ai80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
            if ((int)local_288 != 0x200) {
              if ((int)local_288 != 0x210) goto switchD_019c04d8_caseD_4;
              pppppppuVar30 = (uint *******)&DAT_00000007;
              pcVar34 = 
              "PXA250APXA210Ai80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
              ;
            }
          }
          else if ((int)local_288 == 0x212) {
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "PXA210Ai80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
          else if ((int)local_288 == 0x242) {
            pppppppuVar30 = (uint *******)&DAT_0000000a;
            pcVar34 = 
            "i80321-400i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
          else {
            if ((int)local_288 != 0x243) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_0000000a;
            pcVar34 = 
            "i80321-600PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
        }
        else if ((int)local_288 < 0x2c3) {
          if ((int)local_288 == 0x290) {
            pppppppuVar30 = (uint *******)&DAT_0000000e;
            pcVar34 = 
            "PXA250B/PXA26xPXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
          else if ((int)local_288 == 0x292) {
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "PXA210Bi80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
          else {
            if ((int)local_288 != 0x2c2) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_0000000d;
            pcVar34 = 
            "i80321-400-B0i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
        }
        else if ((int)local_288 == 0x2c3) {
          pppppppuVar30 = (uint *******)&DAT_0000000d;
          pcVar34 = 
          "i80321-600-B0PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
        else if ((int)local_288 == 0x2d0) {
          pppppppuVar30 = (uint *******)&DAT_00000015;
          pcVar34 = 
          "PXA250C/PXA255/PXA26xPXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
        else {
          if ((int)local_288 != 0x2d2) goto switchD_019c04d8_caseD_4;
          pppppppuVar30 = (uint *******)&DAT_00000007;
          pcVar34 = 
          "PXA210CPXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
      }
      else if ((int)local_288 < 0x682) {
        if ((int)local_288 < 0x41d) {
          if ((int)local_288 == 0x411) {
            pcVar34 = 
            "PXA27xIPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
          else {
            if ((int)local_288 != 0x41c) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_0000000a;
            pcVar34 = 
            "IPX425-533IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
            ;
          }
        }
        else if ((int)local_288 == 0x41d) {
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "IPX425-400IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
        else {
          if ((int)local_288 != 0x41f) goto switchD_019c04d8_caseD_4;
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = "IPX425-266PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663"
          ;
        }
      }
      else {
        switch((int)local_288) {
        case 0x682:
          pcVar34 = "PXA32xPXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663";
          break;
        case 0x683:
          pppppppuVar30 = (uint *******)&DAT_0000000d;
          pcVar34 = "PXA930/PXA935PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663";
          break;
        case 0x684:
        case 0x685:
        case 0x686:
        case 0x687:
          goto switchD_019c04d8_caseD_4;
        case 0x688:
          pcVar34 = "PXA30xPXA31xSA1110IPX1200FTC660FTC661FTC662FTC663";
          break;
        case 0x689:
          pcVar34 = "PXA31xSA1110IPX1200FTC660FTC661FTC662FTC663";
          break;
        default:
          if ((int)local_288 == 0xb11) {
            pcVar34 = "SA1110IPX1200FTC660FTC661FTC662FTC663";
          }
          else {
            if ((int)local_288 != 0xc12) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = "IPX1200FTC660FTC661FTC662FTC663";
          }
        }
      }
    }
    else {
      if ((uVar35 != 0x70) || (3 < (int)local_288 - 0x660U)) goto switchD_019c04d8_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_00000006;
      pcVar34 = *(char **)(&DAT_01d34510 + ((int)local_288 - 0x660U) * 4);
    }
    goto switchD_019c07a8_caseD_a0;
  }
  switch(iVar37) {
  case 0:
    if ((int)local_288 < 0xc60) {
      if ((int)local_288 < 0xb56) {
        pppppppuVar30 = (uint *******)&DAT_00000006;
        if ((int)local_288 < 0x966) {
          if ((int)local_288 < 0x926) {
            if ((int)local_288 == 0x810) {
              pcVar34 = 
              "ARM810ARM920ARM922ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
              ;
            }
            else if ((int)local_288 == 0x920) {
              pcVar34 = 
              "ARM920ARM922ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
              ;
            }
            else {
              if ((int)local_288 != 0x922) goto switchD_019c04d8_caseD_4;
              pcVar34 = 
              "ARM922ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
              ;
            }
          }
          else if ((int)local_288 == 0x926) {
            pcVar34 = 
            "ARM926ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
          else if ((int)local_288 == 0x940) {
            pcVar34 = 
            "ARM940ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
          else {
            if ((int)local_288 != 0x946) goto switchD_019c04d8_caseD_4;
            pcVar34 = 
            "ARM946ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
        }
        else if ((int)local_288 < 0xa26) {
          if ((int)local_288 == 0x966) {
            pcVar34 = 
            "ARM966ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
          else if ((int)local_288 == 0xa20) {
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "ARM1020ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
          else {
            if ((int)local_288 != 0xa22) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "ARM1022ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
        }
        else if ((int)local_288 == 0xa26) {
          pppppppuVar30 = (uint *******)&DAT_00000007;
          pcVar34 = 
          "ARM1026ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
        }
        else if ((int)local_288 == 0xb02) {
          pppppppuVar30 = (uint *******)&DAT_0000000c;
          pcVar34 = 
          "ARM11 MPCoreARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
        }
        else {
          if ((int)local_288 != 0xb36) goto switchD_019c04d8_caseD_4;
          pppppppuVar30 = (uint *******)&DAT_00000007;
          pcVar34 = 
          "ARM1136ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
        }
      }
      else {
        switch((int)local_288) {
        case 0xc05:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc06:
        case 0xc0a:
        case 0xc0b:
        case 0xc0c:
        case 0xc10:
        case 0xc11:
        case 0xc12:
        case 0xc13:
        case 0xc16:
        case 0xc19:
        case 0xc1a:
        case 0xc1b:
        case 0xc1c:
        case 0xc1d:
        case 0xc1e:
        case 0xc1f:
        case 0xc22:
        case 0xc25:
        case 0xc26:
          goto switchD_019c04d8_caseD_4;
        case 0xc07:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc08:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc09:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc0d:
        case 0xc0e:
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc0f:
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc14:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc15:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc17:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc18:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc20:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc21:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc23:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc24:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xc27:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        default:
          if ((int)local_288 == 0xb56) {
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "ARM1156ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
          else {
            if ((int)local_288 != 0xb76) goto switchD_019c04d8_caseD_4;
            pppppppuVar30 = (uint *******)&DAT_00000007;
            pcVar34 = 
            "ARM1176Cortex-A5Cortex-A7Cortex-A8Cortex-A9Cortex-A17Cortex-A15Cortex-R4Cortex-R5Cortex-R7Cortex-R8Cortex-M0Cortex-M1Cortex-M3Cortex-M4Cortex-M7Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
            ;
          }
        }
      }
    }
    else {
      switch((int)local_288) {
      case 0xd01:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd02:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd03:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd04:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd05:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd06:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd07:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd08:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd09:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0a:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0b:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0c:
        pppppppuVar30 = (uint *******)&DAT_0000000b;
        pcVar34 = 
        "Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0d:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0e:
        pppppppuVar30 = (uint *******)&DAT_0000000c;
        pcVar34 = 
        "Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd0f:
      case 0xd10:
      case 0xd11:
      case 0xd12:
      case 0xd14:
      case 0xd15:
      case 0xd16:
      case 0xd17:
      case 0xd18:
      case 0xd19:
      case 0xd1a:
      case 0xd1b:
      case 0xd1c:
      case 0xd1d:
      case 0xd1e:
      case 0xd1f:
        goto switchD_019c04d8_caseD_4;
      case 0xd13:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd20:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0xd21:
        pppppppuVar30 = (uint *******)&DAT_0000000a;
        pcVar34 = 
        "Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      default:
        switch((int)local_288) {
        case 0xd40:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd41:
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd42:
          pppppppuVar30 = (uint *******)&DAT_0000000c;
          pcVar34 = 
          "Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd43:
          pppppppuVar30 = (uint *******)&DAT_0000000c;
          pcVar34 = 
          "Cortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd44:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd45:
          goto switchD_019c04d8_caseD_4;
        case 0xd46:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd47:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd48:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd49:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd4a:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd4b:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd4c:
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "Cortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd4d:
          pppppppuVar30 = (uint *******)&DAT_0000000b;
          pcVar34 = 
          "Cortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        case 0xd4e:
          pppppppuVar30 = (uint *******)&DAT_00000009;
          pcVar34 = 
          "Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
          break;
        default:
          if ((int)local_288 != 0xc60) goto switchD_019c04d8_caseD_4;
          pppppppuVar30 = (uint *******)&DAT_0000000a;
          pcVar34 = 
          "Cortex-M0+Cortex-A32Cortex-A34Cortex-A53Cortex-A35Cortex-A55Cortex-A65Cortex-A57Cortex-A72Cortex-A73Cortex-A75Cortex-A76Neoverse-N1Cortex-A77Cortex-A76AECortex-R52Cortex-M23Cortex-M33Neoverse-V1Cortex-A78Cortex-A78AECortex-A65AECortex-X1Cortex-A510Cortex-A710Cortex-X2Neoverse-N2Neoverse-E1Cortex-A78CCortex-X1CCortex-A715Cortex-X3Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
          ;
        }
      }
    }
    break;
  case 1:
    pppppppuVar30 = (uint *******)&DAT_0000000a;
    if ((int)local_288 == 0xf) {
      pcVar34 = 
      "Brahma-B15Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    else if ((int)local_288 == 0x100) {
      pcVar34 = 
      "Brahma-B53ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    else {
      if ((int)local_288 != 0x516) goto switchD_019c04d8_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_00000009;
      pcVar34 = 
      "ThunderX2ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    break;
  case 2:
    pppppppuVar30 = (uint *******)&DAT_00000008;
    pcVar34 = &UNK_005703a0;
    switch((int)local_288) {
    case 0xa0:
      break;
    case 0xa1:
      pppppppuVar30 = (uint *******)&DAT_0000000d;
      pcVar34 = 
      "ThunderX-88XXThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
      break;
    case 0xa2:
      pppppppuVar30 = (uint *******)&DAT_0000000d;
      pcVar34 = 
      "ThunderX-81XXThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
      break;
    case 0xa3:
      pppppppuVar30 = (uint *******)&DAT_0000000d;
      pcVar34 = 
      "ThunderX-83XXThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
      break;
    default:
      if ((int)local_288 != 0xaf) goto switchD_019c04d8_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_0000000e;
      pcVar34 = 
      "ThunderX2-99xxSA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    break;
  case 3:
    if ((int)local_288 == 0xa10) {
      pppppppuVar30 = (uint *******)&DAT_00000005;
      pcVar34 = 
      "SA110SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    else {
      if ((int)local_288 != 0xa11) goto switchD_019c04d8_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_00000006;
      pcVar34 = 
      "SA1100A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    break;
  default:
    goto switchD_019c04d8_caseD_4;
  case 5:
    pppppppuVar30 = (uint *******)&DAT_00000005;
    pcVar34 = 
    "A64FXKunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
    ;
    goto joined_r0x019c075c;
  case 7:
    pppppppuVar30 = (uint *******)&DAT_0000000b;
    pcVar34 = 
    "Kunpeng-920DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
    ;
    if ((int)local_288 != 0xd01) goto switchD_019c04d8_caseD_4;
    break;
  case 0xd:
    pppppppuVar30 = (uint *******)&DAT_00000006;
    if ((int)local_288 == 0) {
      pcVar34 = 
      "DenverCarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    else if ((int)local_288 == 3) {
      pppppppuVar30 = (uint *******)&DAT_00000008;
      pcVar34 = "Denver 2";
    }
    else {
      if ((int)local_288 != 4) goto switchD_019c04d8_caseD_4;
      pcVar34 = 
      "CarmelX-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
      ;
    }
    break;
  case 0xf:
    if ((int)local_288 != 0) goto switchD_019c04d8_caseD_4;
    pppppppuVar30 = (uint *******)&DAT_00000006;
    pcVar34 = 
    "X-GeneKraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
    ;
    break;
  case 0x10:
    if ((int)local_288 < 0x800) {
      if ((int)local_288 < 0x6f) {
        pppppppuVar30 = (uint *******)&DAT_00000008;
        if ((int)local_288 == 0xf) {
          pcVar34 = &UNK_0056fbb8;
        }
        else {
          pcVar34 = &UNK_0056fbb8;
          if ((int)local_288 != 0x2d) {
            if ((int)local_288 == 0x4d) goto LAB_019c0cf4;
            goto switchD_019c04d8_caseD_4;
          }
        }
      }
      else if (((int)local_288 - 0x201U < 0x11) &&
              ((1 << ((int)local_288 - 0x201U & 0xff) & 0x10011U) != 0)) {
        pppppppuVar30 = (uint *******)&SUB_00000004;
        pcVar34 = "Kryobtifm";
      }
      else {
        if ((int)local_288 != 0x6f) goto switchD_019c04d8_caseD_4;
LAB_019c0cf4:
        pppppppuVar30 = (uint *******)&DAT_00000005;
        pcVar34 = 
        "KraitFalkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
      }
    }
    else {
      switch((int)local_288) {
      case 0x800:
        pppppppuVar30 = (uint *******)&DAT_0000000e;
        pcVar34 = 
        "Falkor-V1/KryoKryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1"
        ;
        break;
      case 0x801:
        pppppppuVar30 = (uint *******)&DAT_00000007;
        pcVar34 = 
        "Kryo-V2Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1";
        break;
      case 0x802:
        pppppppuVar30 = (uint *******)&DAT_0000000d;
        pcVar34 = "Kryo-3XX-GoldKryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1";
        break;
      case 0x803:
        pppppppuVar30 = (uint *******)&DAT_0000000f;
        pcVar34 = "Kryo-3XX-SilverKryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1";
        break;
      case 0x804:
        pppppppuVar30 = (uint *******)&DAT_0000000d;
        pcVar34 = "Kryo-4XX-GoldKryo-4XX-SilverFalkorSaphiraexynos-m1";
        break;
      case 0x805:
        pppppppuVar30 = (uint *******)&DAT_0000000f;
        pcVar34 = "Kryo-4XX-SilverFalkorSaphiraexynos-m1";
        break;
      default:
        if ((int)local_288 == 0xc00) {
          pppppppuVar30 = (uint *******)&DAT_00000006;
          pcVar34 = "FalkorSaphiraexynos-m1";
        }
        else {
          if ((int)local_288 != 0xc01) goto switchD_019c04d8_caseD_4;
          pppppppuVar30 = (uint *******)&DAT_00000007;
          pcVar34 = "Saphiraexynos-m1";
        }
      }
    }
    break;
  case 0x12:
    pppppppuVar30 = (uint *******)&DAT_00000009;
    pcVar34 = "exynos-m1";
joined_r0x019c075c:
    if ((int)local_288 == 1) break;
switchD_019c04d8_caseD_4:
    local_12c = (uint *******)&DAT_80000000;
    pppppppuVar30 = (uint *******)local_2a0._4_4_;
    pppppppuVar18 = local_25c;
    goto LAB_019c1258;
  case 0x15:
    if ((int)local_288 == 0x131) {
      pppppppuVar30 = (uint *******)&DAT_00000010;
      pcVar34 = &UNK_0056aa78;
    }
    else if ((int)local_288 == 0x581) {
      pppppppuVar30 = (uint *******)&DAT_00000008;
      pcVar34 = &UNK_0056fdf8;
    }
    else {
      if ((int)local_288 != 0x584) goto switchD_019c04d8_caseD_4;
      pppppppuVar30 = (uint *******)&DAT_00000007;
      pcVar34 = "PJ4B-MP";
    }
  }
switchD_019c07a8_caseD_a0:
  pppppppuVar18 = (uint *******)FUN_01298504(pppppppuVar30,1);
  if (pppppppuVar18 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,pppppppuVar30);
  }
  FUN_01bed4e2(pppppppuVar18,pcVar34,pppppppuVar30);
  pppppppuVar41 = pppppppuVar30;
LAB_019c1258:
  pppppppuVar32 = (uint *******)local_2a8._4_4_;
  pppppppuVar12 = (uint *******)local_2a8._0_4_;
  pppppppuVar40 = pppppppuVar39;
LAB_019c1260:
  FUN_019c46dc(&local_148);
  if (pppppppuVar41 == (uint *******)&DAT_80000000) {
    pppppppuVar41 = (uint *******)0x0;
    pppppppuVar30 = (uint *******)0x0;
    local_138 = (uint *******)&DAT_00000001;
  }
  else {
    local_138 = pppppppuVar18;
  }
  if (pppppppuVar40 == (uint *******)&DAT_80000000) {
    pppppppuVar32 = (uint *******)&DAT_00000001;
  }
  uStack_13c = SUB42(pppppppuVar41,0);
  uStack_13a = (undefined2)((uint)pppppppuVar41 >> 0x10);
  if (pppppppuVar40 == (uint *******)&DAT_80000000) {
    pppppppuVar40 = (uint *******)0x0;
    pppppppuVar12 = (uint *******)0x0;
  }
  local_148 = pppppppuVar40;
  local_144._0_4_ = pppppppuVar32;
  local_144._4_4_ = pppppppuVar12;
  local_134 = pppppppuVar30;
  uVar33 = FUN_019c88bc(*(uint *******)local_290,((uint *******)local_290)[1],
                        *(undefined4 *)local_298._4_4_,*(undefined4 *)(local_298._4_4_ + 4),
                        ppppppuVar11);
  if (local_50 == (uint *******)0x0) {
    FUN_019c533c(&local_58,(uint *******)local_290);
  }
  pppppppuVar30 = local_25c;
  param_1 = local_260;
  bVar23 = false;
  iVar37 = 0;
  uVar13 = uVar33;
  do {
    uVar13 = (uint)local_54 & uVar13;
    uVar21 = *(uint *)((int)local_58 + uVar13);
    uVar14 = uVar21 ^ (uVar33 >> 0x19) * 0x1010101;
    uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
    while (uVar14 != 0) {
      uVar31 = uVar14 >> 8;
      uVar2 = uVar14 >> 0x10;
      uVar3 = uVar14 >> 0x18;
      uVar4 = uVar14 << 0x18;
      uVar14 = uVar14 - 1 & uVar14;
      uVar31 = uVar13 + ((uint)LZCOUNT(uVar4 | (uVar31 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & (uint)local_54;
      if (ppppppuVar11 == local_58[uVar31 * -7 + -7]) {
        ppppppuVar11 = local_58[uVar31 * -7 + -6];
        pppppppuVar12 = (uint *******)local_58[uVar31 * -7 + -5];
        ppppppuVar17 = local_58[uVar31 * -7 + -3];
        ppppppuVar36 = local_58[uVar31 * -7 + -2];
                    /* WARNING (jumptable): Read-only address (ram,0x0056d220) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x0056d224) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x0056d228) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x0056d22c) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x0056d230) is written */
        local_58[uVar31 * -7 + -6] = (uint ******)local_148;
        local_58[uVar31 * -7 + -5] = (uint ******)(uint *******)local_144;
        local_58[uVar31 * -7 + -4] = (uint ******)local_144._4_4_;
        local_58[uVar31 * -7 + -3] = (uint ******)CONCAT22(uStack_13a,uStack_13c);
        local_58[uVar31 * -7 + -2] = (uint ******)local_138;
        local_58[uVar31 * -7 + -1] = (uint ******)local_134;
        if (ppppppuVar11 != (uint ******)0x80000000) {
          FUN_0134bd64();
          FUN_0134bd64(ppppppuVar17,ppppppuVar36);
          pppppppuVar12 = extraout_r1;
        }
        goto LAB_019bfe24;
      }
    }
    uVar14 = uVar21 & 0x80808080;
    if (bVar23) {
LAB_019c1390:
      if ((uVar14 & uVar21 << 1) != 0) break;
      bVar23 = true;
    }
    else {
      if (uVar14 != 0) {
        local_280 = CONCAT44(uVar13 + ((uint)LZCOUNT((uVar21 & 0x80) << 0x18 |
                                                     (uVar14 >> 8 & 0xff) << 0x10 |
                                                     (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18)
                                      >> 3) & (uint)local_54,(uint)local_280);
        goto LAB_019c1390;
      }
      bVar23 = false;
    }
    iVar37 = iVar37 + 4;
    uVar13 = iVar37 + uVar13;
  } while( true );
  uVar14 = (uint)(char)*(byte *)((int)local_58 + local_280._4_4_);
  uVar13 = local_280._4_4_;
  if (-1 < (int)uVar14) {
    uVar13 = (uint)*local_58 & 0x80808080;
    uVar13 = LZCOUNT(((uint)*local_58 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                     (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
    uVar14 = (uint)*(byte *)((int)local_58 + (uVar13 >> 3));
    uVar13 = uVar13 >> 3;
  }
  bVar27 = (byte)(uVar33 >> 0x19);
  *(byte *)((int)local_58 + uVar13) = bVar27;
                    /* WARNING (jumptable): Read-only address (ram,0x0056d23c) is written */
  *(byte *)((int)local_58 + ((uint)local_54 & uVar13 - 4) + 4) = bVar27;
  local_50 = (uint *******)((int)local_50 - (uVar14 & 1));
  local_58[uVar13 * -7 + -7] = ppppppuVar11;
  local_4c = local_4c + 1;
  pppppppuVar12 = (uint *******)&local_148;
  local_58[uVar13 * -7 + -6] = (uint ******)local_148;
  local_58[uVar13 * -7 + -5] = (uint ******)(uint *******)local_144;
  local_58[uVar13 * -7 + -4] = (uint ******)local_144._4_4_;
  local_58[uVar13 * -7 + -3] = (uint ******)CONCAT22(uStack_13a,uStack_13c);
  local_58[uVar13 * -7 + -2] = (uint ******)local_138;
  local_58[uVar13 * -7 + -1] = (uint ******)local_134;
  goto LAB_019bfe24;
code_r0x019c23b8:
  pppppppuVar39 = (uint *******)0x0;
  while (*(byte *)((int)pppppppuVar32 + (int)pppppppuVar39) != 0x20) {
    pppppppuVar39 = (uint *******)((int)pppppppuVar39 + 1);
    if (pppppppuVar12 == pppppppuVar39) {
      pppppppuVar40 = (uint *******)&DAT_00000001;
      goto LAB_019c240c;
    }
  }
  pppppppuVar12 = (uint *******)((int)pppppppuVar12 - ((int)pppppppuVar39 + 1));
  pppppppuVar32 = (uint *******)((int)pppppppuVar32 + (int)((int)pppppppuVar39 + 1));
  pppppppuVar18 = (uint *******)0x0;
  pppppppuVar41 = pppppppuVar12;
  if (pppppppuVar39 != (uint *******)0x0) {
LAB_019c240c:
    if (param_1[0x3e] <= pppppppuVar30) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pppppppuVar30,param_1[0x3e],&DAT_01d283fc);
    }
    pppppppuVar12 = pppppppuVar32;
    pppppppuVar18 = pppppppuVar40;
    pppppppuVar39 = pppppppuVar41;
    goto LAB_019c2434;
  }
  goto LAB_019c23a8;
LAB_019c2434:
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar40 != (uint *******)0x0) {
      uVar44 = 0;
      goto LAB_019c2674;
    }
    pppppppuVar40 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar41 == (uint *******)0x0) {
      pppppppuVar41 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar41 = (uint *******)((int)pppppppuVar41 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar40 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar39 = pppppppuVar41;
          goto LAB_019c24a8;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar41 != pppppppuVar20);
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar41;
    }
LAB_019c24a8:
  } while (pppppppuVar20 == (uint *******)0x0);
  uVar44 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    uVar44 = (uVar44 & 0xffffffff) * 10 +
             (CONCAT44((int)(uVar44 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
             0xffffffff000000ff);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c2674:
  uVar35 = (undefined4)(uVar44 >> 0x20);
  local_290._0_4_ = (uint *******)uVar44;
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar41 = pppppppuVar18;
  pppppppuVar40 = pppppppuVar39;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar18 != (uint *******)0x0) {
      uVar44 = 0;
      goto LAB_019c2738;
    }
    pppppppuVar18 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar39 == (uint *******)0x0) {
      pppppppuVar39 = (uint *******)0x0;
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar18 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar40 = pppppppuVar39;
          goto LAB_019c26f0;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar39 != pppppppuVar20);
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar39;
    }
LAB_019c26f0:
  } while (pppppppuVar20 == (uint *******)0x0);
  uVar44 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    uVar44 = (uVar44 & 0xffffffff) * 10 +
             (CONCAT44((int)(uVar44 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
             0xffffffff000000ff);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c2738:
  local_298._4_4_ = SUB84(uVar44,0);
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar18 = pppppppuVar41;
  pppppppuVar39 = pppppppuVar40;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar41 != (uint *******)0x0) {
      uVar43 = 0;
      goto LAB_019c27fc;
    }
    pppppppuVar41 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar40 == (uint *******)0x0) {
      pppppppuVar40 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar41 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar39 = pppppppuVar40;
          goto LAB_019c27b4;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar40 != pppppppuVar20);
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar40;
    }
LAB_019c27b4:
  } while (pppppppuVar20 == (uint *******)0x0);
  uVar43 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    uVar43 = (uVar43 & 0xffffffff) * 10 +
             (CONCAT44((int)(uVar43 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
             0xffffffff000000ff);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c27fc:
  local_298._0_4_ = SUB84(uVar43,0);
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar41 = pppppppuVar18;
  pppppppuVar40 = pppppppuVar39;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar18 != (uint *******)0x0) {
      local_2a0 = (undefined1  [8])0x0;
      goto LAB_019c28c4;
    }
    pppppppuVar18 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar39 == (uint *******)0x0) {
      pppppppuVar39 = (uint *******)0x0;
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar18 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar40 = pppppppuVar39;
          goto LAB_019c2878;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar39 != pppppppuVar20);
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar39;
    }
LAB_019c2878:
  } while (pppppppuVar20 == (uint *******)0x0);
  local_2a0 = (undefined1  [8])0x0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    local_2a0 = (undefined1  [8])
                (((ulonglong)local_2a0 & 0xffffffff) * 10 +
                (CONCAT44((int)((ulonglong)local_2a0 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
                0xffffffff000000ff));
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c28c4:
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar18 = pppppppuVar41;
  pppppppuVar39 = pppppppuVar40;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar41 != (uint *******)0x0) {
      uVar6 = 0;
      goto LAB_019c2988;
    }
    pppppppuVar41 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar40 == (uint *******)0x0) {
      pppppppuVar40 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar41 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar39 = pppppppuVar40;
          goto LAB_019c2940;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar40 != pppppppuVar20);
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar40;
    }
LAB_019c2940:
  } while (pppppppuVar20 == (uint *******)0x0);
  uVar6 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    uVar6 = (uVar6 & 0xffffffff) * 10 +
            (CONCAT44((int)(uVar6 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) & 0xffffffff000000ff)
    ;
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c2988:
  local_290._4_4_ = (uint *******)(uVar6 >> 0x20);
  local_2a8._4_4_ = SUB84(uVar6,0);
  local_280 = CONCAT44(param_1[0x3d] + (int)pppppppuVar30 * 0x38,uVar35);
  uVar9 = (undefined4)(uVar44 >> 0x20);
  local_288 = CONCAT44(uVar9,(int)(uVar43 >> 0x20));
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar41 = pppppppuVar18;
  pppppppuVar40 = pppppppuVar39;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar18 != (uint *******)0x0) {
      uVar44 = 0;
      goto LAB_019c2a54;
    }
    pppppppuVar18 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar39 == (uint *******)0x0) {
      pppppppuVar39 = (uint *******)0x0;
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar18 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar40 = pppppppuVar39;
          goto LAB_019c2a14;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar39 != pppppppuVar20);
      pppppppuVar41 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar39;
    }
LAB_019c2a14:
  } while (pppppppuVar20 == (uint *******)0x0);
  uVar44 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    uVar44 = (uVar44 & 0xffffffff) * 10 +
             (CONCAT44((int)(uVar44 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
             0xffffffff000000ff);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c2a54:
  local_324 = (undefined4)(uVar44 >> 0x20);
  pppppppuVar12 = pppppppuVar32;
  pppppppuVar18 = pppppppuVar41;
  pppppppuVar39 = pppppppuVar40;
  do {
    pppppppuVar19 = pppppppuVar12;
    if (pppppppuVar41 != (uint *******)0x0) {
      local_320 = 0;
      local_25c = pppppppuVar32;
      goto LAB_019c2b1c;
    }
    pppppppuVar41 = (uint *******)&DAT_00000001;
    pppppppuVar12 = pppppppuVar19;
    if (pppppppuVar40 == (uint *******)0x0) {
      pppppppuVar40 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = (uint *******)0x0;
    }
    else {
      pppppppuVar20 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar19 + (int)pppppppuVar20) == 0x20) {
          pppppppuVar32 = (uint *******)((int)pppppppuVar19 + (int)pppppppuVar20 + 1);
          pppppppuVar40 = (uint *******)((int)pppppppuVar40 - (int)((int)pppppppuVar20 + 1));
          pppppppuVar41 = (uint *******)0x0;
          pppppppuVar12 = pppppppuVar32;
          pppppppuVar39 = pppppppuVar40;
          goto LAB_019c2ad0;
        }
        pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
      } while (pppppppuVar40 != pppppppuVar20);
      pppppppuVar18 = (uint *******)&DAT_00000001;
      pppppppuVar20 = pppppppuVar40;
    }
LAB_019c2ad0:
  } while (pppppppuVar20 == (uint *******)0x0);
  local_320 = 0;
  do {
    pppppppuVar20 = (uint *******)((int)pppppppuVar20 + -1);
    local_320 = (local_320 & 0xffffffff) * 10 +
                (CONCAT44((int)(local_320 >> 0x20) * 10,*(byte *)pppppppuVar19 - 0x30) &
                0xffffffff000000ff);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
    local_25c = pppppppuVar32;
  } while (pppppppuVar20 != (uint *******)0x0);
LAB_019c2b1c:
  pppppppuVar32 = local_25c;
  pppppppuVar12 = pppppppuVar39;
  local_260 = pppppppuVar18;
  do {
    pppppppuVar41 = pppppppuVar32;
    if (pppppppuVar18 != (uint *******)0x0) {
      local_318 = 0;
      goto LAB_019c2be4;
    }
    pppppppuVar18 = (uint *******)&DAT_00000001;
    pppppppuVar32 = pppppppuVar41;
    if (pppppppuVar39 == (uint *******)0x0) {
      pppppppuVar39 = (uint *******)0x0;
      local_260 = (uint *******)&DAT_00000001;
      pppppppuVar40 = (uint *******)0x0;
    }
    else {
      pppppppuVar40 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar41 + (int)pppppppuVar40) == 0x20) {
          pppppppuVar18 = (uint *******)0x0;
          pppppppuVar39 = (uint *******)((int)pppppppuVar39 - ((int)pppppppuVar40 + 1));
          local_25c = (uint *******)((int)pppppppuVar41 + (int)((int)pppppppuVar40 + 1));
          pppppppuVar32 = local_25c;
          pppppppuVar12 = pppppppuVar39;
          goto LAB_019c2ba0;
        }
        pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
      } while (pppppppuVar39 != pppppppuVar40);
      local_260 = (uint *******)&DAT_00000001;
      pppppppuVar40 = pppppppuVar39;
    }
LAB_019c2ba0:
  } while (pppppppuVar40 == (uint *******)0x0);
  local_318 = 0;
  do {
    pppppppuVar40 = (uint *******)((int)pppppppuVar40 + -1);
    local_318 = (local_318 & 0xffffffff) * 10 +
                (CONCAT44((int)(local_318 >> 0x20) * 10,*(byte *)pppppppuVar41 - 0x30) &
                0xffffffff000000ff);
    pppppppuVar41 = (uint *******)((int)pppppppuVar41 + 1);
  } while (pppppppuVar40 != (uint *******)0x0);
LAB_019c2be4:
  pppppppuVar32 = local_260;
  pppppppuVar41 = local_25c;
  local_264 = pppppppuVar12;
  do {
    pppppppuVar40 = pppppppuVar41;
    if (pppppppuVar32 != (uint *******)0x0) {
      local_310 = 0;
      goto LAB_019c2cb0;
    }
    pppppppuVar32 = (uint *******)&DAT_00000001;
    pppppppuVar41 = pppppppuVar40;
    if (pppppppuVar12 == (uint *******)0x0) {
      pppppppuVar12 = (uint *******)0x0;
      local_260 = (uint *******)&DAT_00000001;
      pppppppuVar18 = (uint *******)0x0;
    }
    else {
      pppppppuVar18 = (uint *******)0x0;
      do {
        if (*(byte *)((int)pppppppuVar40 + (int)pppppppuVar18) == 0x20) {
          local_25c = (uint *******)((int)pppppppuVar40 + (int)pppppppuVar18 + 1);
          pppppppuVar12 = (uint *******)((int)pppppppuVar12 - (int)((int)pppppppuVar18 + 1));
          pppppppuVar32 = (uint *******)0x0;
          pppppppuVar41 = local_25c;
          local_264 = pppppppuVar12;
          goto LAB_019c2c6c;
        }
        pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
      } while (pppppppuVar12 != pppppppuVar18);
      local_260 = (uint *******)&DAT_00000001;
      pppppppuVar18 = pppppppuVar12;
    }
LAB_019c2c6c:
  } while (pppppppuVar18 == (uint *******)0x0);
  local_310 = 0;
  do {
    pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
    local_310 = (local_310 & 0xffffffff) * 10 +
                (CONCAT44((int)(local_310 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                0xffffffff000000ff);
    pppppppuVar12 = (uint *******)local_310;
    pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
  } while (pppppppuVar18 != (uint *******)0x0);
LAB_019c2cb0:
  pppppppuVar32 = local_260;
  pppppppuVar41 = local_264;
  do {
    pppppppuVar40 = local_25c;
    if (pppppppuVar32 != (uint *******)0x0) {
      local_308 = 0;
      goto LAB_019c2d64;
    }
    pppppppuVar32 = (uint *******)&DAT_00000001;
    if (pppppppuVar41 == (uint *******)0x0) {
      pppppppuVar41 = (uint *******)0x0;
      pppppppuVar18 = (uint *******)0x0;
    }
    else {
      pppppppuVar18 = (uint *******)0x0;
      do {
        if (*(byte *)((int)local_25c + (int)pppppppuVar18) == 0x20) {
          pppppppuVar41 = (uint *******)((int)pppppppuVar41 - ((int)pppppppuVar18 + 1));
          local_25c = (uint *******)((int)local_25c + (int)((int)pppppppuVar18 + 1));
          pppppppuVar32 = (uint *******)0x0;
          goto LAB_019c2d20;
        }
        pppppppuVar18 = (uint *******)((int)pppppppuVar18 + 1);
      } while (pppppppuVar41 != pppppppuVar18);
      pppppppuVar32 = (uint *******)&DAT_00000001;
      pppppppuVar18 = pppppppuVar41;
    }
LAB_019c2d20:
    pppppppuVar12 = (uint *******)0x0;
  } while (pppppppuVar18 == (uint *******)0x0);
  local_308 = 0;
  do {
    pppppppuVar18 = (uint *******)((int)pppppppuVar18 + -1);
    local_308 = (local_308 & 0xffffffff) * 10 +
                (CONCAT44((int)(local_308 >> 0x20) * 10,*(byte *)pppppppuVar40 - 0x30) &
                0xffffffff000000ff);
    pppppppuVar40 = (uint *******)((int)pppppppuVar40 + 1);
  } while (pppppppuVar18 != (uint *******)0x0);
  pppppppuVar12 = (uint *******)0x0;
LAB_019c2d64:
  FUN_019c49f8(param_1[0x3d] + (int)pppppppuVar30 * 0x38,pppppppuVar12,(uint *******)local_290,
               uVar35,local_298._4_4_,uVar9,uVar43,local_2a0,uVar6,(int)uVar44);
  pppppppuVar30 = local_274;
  ppppppuVar11 = local_278;
  param_1 = local_2ac;
  pppppppuVar12 = local_26c;
LAB_019c3774:
  FUN_0134bd64(ppppppuVar11,pppppppuVar12);
  pppppppuVar30 = (uint *******)((int)pppppppuVar30 + 1);
  goto LAB_019c2330;
LAB_019c3e60:
  local_280 = (ulonglong)local_280._4_4_ << 0x20;
  pppppppuVar41 = pppppppuVar12;
  pppppppuVar40 = pppppppuVar12;
LAB_019c3f70:
  uVar33 = (int)pppppppuVar41 - (int)local_270;
  if ((uint)((int)local_228 - (int)local_26c) < uVar33) {
    FUN_006520b4(&local_228,local_26c,uVar33,1,1);
    local_298._4_4_ = (code *)local_224;
    local_26c = local_224._4_4_;
  }
  pppppppuVar41 = local_26c;
  FUN_01bed4e2((undefined1 *)(local_298._4_4_ + (int)local_26c),
               (byte *)((int)(uint *******)local_290 + (int)local_270),uVar33);
  local_26c = (uint *******)((int)pppppppuVar41 + uVar33);
  local_270 = pppppppuVar40;
  local_224._4_4_ = local_26c;
  goto LAB_019c3c2c;
  while( true ) {
    pppppppuVar18 = (uint *******)((int)pppppppuVar41 + (int)pppppppuVar40);
    if (pppppppuVar30 <= pppppppuVar18) goto LAB_019c4284;
    pbVar24 = (byte *)(iVar37 + (int)pppppppuVar41) + (int)pppppppuVar40;
    pbVar1 = (byte *)(iVar15 + (int)pppppppuVar40);
    pppppppuVar40 = (uint *******)((int)pppppppuVar40 + -1);
    if (*pbVar1 != *pbVar24) break;
LAB_019c3f14:
    if (pppppppuVar40 == (uint *******)&DAT_ffffffff) {
      pppppppuVar32 = (uint *******)&DAT_ffffffff;
      goto LAB_019c3f6c;
    }
    if (local_274 <= local_264) {
      puVar26 = &DAT_01d2e36c;
      pppppppuVar30 = local_274;
      goto LAB_019c4304;
    }
  }
  pppppppuVar32 = (uint *******)local_2a8._4_4_;
LAB_019c3f4c:
  pppppppuVar41 = (uint *******)((int)pppppppuVar41 + (int)pppppppuVar32);
LAB_019c3f50:
  pppppppuVar40 = (uint *******)((int)pppppppuVar41 + (int)local_278);
  if (pppppppuVar30 <= pppppppuVar40) goto LAB_019c3ff4;
  goto LAB_019c3e90;
  while( true ) {
    pppppppuVar18 = (uint *******)((int)pppppppuVar40 + (int)pppppppuVar41);
    if (pppppppuVar30 <= pppppppuVar18) goto LAB_019c4284;
    if (*(byte *)(iVar15 + (int)pppppppuVar40) != *(byte *)(iVar37 + (int)pppppppuVar18)) break;
LAB_019c3d18:
    if (pppppppuVar40 <= pppppppuVar32) {
      pppppppuVar32 = (uint *******)0x0;
LAB_019c3f6c:
      local_288 = CONCAT44((uint *******)((int)pppppppuVar41 + (int)local_274),(int)local_288);
      pppppppuVar40 = (uint *******)((int)pppppppuVar41 + (int)local_274);
      goto LAB_019c3f70;
    }
    pppppppuVar40 = (uint *******)((int)pppppppuVar40 + -1);
    if (local_274 <= pppppppuVar40) {
      puVar26 = &DAT_01d2e36c;
      pppppppuVar30 = local_274;
      goto LAB_019c4304;
    }
  }
  pppppppuVar41 = (uint *******)((int)pppppppuVar41 + local_2a8._4_4_);
  pppppppuVar32 = (uint *******)local_2a8._0_4_;
LAB_019c3cfc:
  pppppppuVar40 = (uint *******)((int)pppppppuVar41 + (int)local_278);
  if (pppppppuVar30 <= pppppppuVar40) goto LAB_019c3ff4;
  goto LAB_019c3c68;
LAB_019c4284:
  puVar26 = &DAT_01d2e37c;
  pppppppuVar40 = pppppppuVar18;
LAB_019c4304:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(pppppppuVar40,pppppppuVar30,puVar26);
}

