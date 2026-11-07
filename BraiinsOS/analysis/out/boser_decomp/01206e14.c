// FUN_01206e14 @ 01206e14 size=4540 calls_out=31 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01206e14(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  uint *******pppppppuVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint ******ppppppuVar22;
  undefined4 *puVar23;
  uint *extraout_r1;
  int *piVar24;
  char *pcVar25;
  uint *puVar26;
  undefined *puVar27;
  undefined4 uVar28;
  int *piVar29;
  undefined4 uVar30;
  uint *puVar31;
  uint *******pppppppuVar32;
  uint *****pppppuVar33;
  int *piVar34;
  int *piVar35;
  uint *******pppppppuVar36;
  uint *puVar37;
  code *pcVar38;
  uint ******ppppppuVar39;
  uint uVar40;
  int iVar41;
  uint ******ppppppuVar42;
  bool bVar43;
  undefined8 uVar44;
  undefined2 local_454;
  undefined2 uStack_452;
  uint **local_420;
  undefined4 local_41c;
  undefined4 local_418;
  uint ****local_414;
  uint ******ppppppuStack_410;
  uint uStack_40c;
  int local_408;
  char *local_400;
  uint *local_3fc;
  uint *****local_3f4;
  undefined *local_3f0;
  char local_3ec;
  uint local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3a8;
  char acStack_3a4 [2];
  undefined2 uStack_3a2;
  uint *******pppppppuStack_3a0;
  undefined1 uStack_39c;
  byte local_39b;
  undefined2 uStack_39a;
  uint *******apppppppuStack_398 [2];
  undefined1 local_390;
  char local_38f;
  undefined4 local_38e;
  undefined3 uStack_38a;
  undefined4 local_387;
  undefined4 local_383;
  uint ******local_220 [2];
  uint ******local_218;
  uint ******local_214;
  uint *****local_210;
  uint ******local_20c;
  char local_208;
  char cStack_207;
  undefined2 uStack_206;
  char local_204;
  char cStack_203;
  undefined2 uStack_202;
  uint *******local_200;
  uint ******local_1fc;
  uint *******local_1f8;
  uint *******local_1f4;
  char local_1f0;
  undefined4 local_1ef;
  undefined4 local_1eb;
  undefined4 local_1e7;
  undefined4 local_1e3;
  char local_1d8;
  char cStack_1d7;
  undefined2 uStack_1d6;
  char local_1d4;
  char cStack_1d3;
  undefined2 uStack_1d2;
  uint *******local_1d0;
  uint ******local_1cc;
  uint *******pppppppuStack_1c8;
  uint *******local_1c4;
  char local_1c0;
  char local_1bf;
  undefined4 uStack_1be;
  undefined3 uStack_1ba;
  undefined4 local_1b7;
  undefined4 local_1b3;
  uint *******local_58;
  uint ******local_54;
  uint *******local_50;
  uint ******local_4c;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  uint ******local_3c;
  uint *******local_38;
  uint ******local_34;
  uint *******local_30;
  uint *******local_2c;
  
  uVar44 = thunk_FUN_01bee35a(param_1,0x70);
  piVar34 = (int *)((int)uVar44 + (int)((ulonglong)uVar44 >> 0x20));
  if ((char)piVar34[4] != '\x01') {
    if ((char)piVar34[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(piVar34,&LAB_01abe6ec);
    *(undefined1 *)(piVar34 + 4) = 1;
  }
  piVar24 = (int *)param_1[4];
  piVar29 = (int *)param_1[5];
  iVar16 = *piVar34;
  ppppppuVar39 = (uint ******)*param_1;
  uVar40 = param_1[1];
  iVar41 = param_1[2];
  if (iVar16 == 0) {
    local_414 = (uint ****)(piVar34 + 1);
    *piVar34 = -1;
  }
  else {
    local_414 = (uint ****)&local_420;
    local_418 = 0;
    local_41c = 1;
    local_420 = (uint **)0x0;
  }
  pcVar25 = (char *)*piVar24;
  puVar31 = (uint *)*piVar29;
  local_400 = pcVar25 + 0x68;
  local_3ec = pcVar25[0x66];
  local_3f0 = &DAT_01d2ec18;
  local_3f4 = &local_414;
  iVar17 = *piVar29;
  puVar26 = *(uint **)(iVar17 + 0x14);
  ppppppuStack_410 = ppppppuVar39;
  uStack_40c = uVar40;
  local_408 = iVar41;
  local_3fc = puVar31;
  FUN_01aade50(&local_3e8,*(undefined4 *)(iVar17 + 0x10));
  uVar4 = local_3e8;
  puVar21 = &local_3e8;
  if (local_3e8 == 2) {
    puVar21 = puVar26;
  }
  if (pcVar25[7] != '\x02') {
    local_3ec = pcVar25[7];
  }
  if (*pcVar25 == '\x01') {
    if (local_3ec == '\0') {
      iVar18 = FUN_01ab6520(local_3f4,local_3f0);
      if (iVar18 != 0) {
        iVar18 = (**(code **)(local_3f0 + 0xc))(local_3f4,&DAT_005319c4,0xe);
        if (iVar18 != 0) goto LAB_01207d50;
      }
      iVar18 = (**(code **)(local_3f0 + 0x10))(local_3f4,0x20);
LAB_01207084:
      if (iVar18 == 0) goto LAB_0120708c;
    }
    else {
      local_3a8._2_2_ = 0;
      acStack_3a4[0] = '\0';
      acStack_3a4[1] = '\0';
      uStack_3a2 = 0;
      local_3a8._0_2_ = 0x100;
      local_39b = 0x15;
      uStack_39a = 0;
      apppppppuStack_398[0] = (uint *******)((uint)apppppppuStack_398[0] & 0xffffff00);
      pppppppuStack_3a0 = (uint *******)0x1500;
      uStack_39c = 0;
      local_1d4 = -0x14;
      cStack_1d3 = 'Y';
      uStack_1d2 = 0x164;
      local_1d8 = (char)&local_3a8;
      cVar1 = local_1d8;
      cStack_1d7 = (char)((uint)&local_3a8 >> 8);
      cVar2 = cStack_1d7;
      uStack_1d6 = (undefined2)((uint)&local_3a8 >> 0x10);
      uVar9 = uStack_1d6;
      iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_00590e5f,&local_1d8);
      if (iVar18 == 0) {
        iVar18 = FUN_01ab6520(local_3f4,local_3f0);
        if (iVar18 != 0) {
          iVar18 = (**(code **)(local_3f0 + 0xc))(local_3f4,&DAT_005319c4,0xe);
          if (iVar18 != 0) goto LAB_01207d50;
        }
        local_3a8._0_2_ = 0x100;
        local_3a8._2_2_ = 0;
        acStack_3a4[0] = '\0';
        acStack_3a4[1] = '\0';
        uStack_3a2 = 0;
        local_39b = 0x15;
        uStack_39a = 0;
        apppppppuStack_398[0] = (uint *******)((uint)apppppppuStack_398[0] & 0xffffff00);
        pppppppuStack_3a0 = (uint *******)0x1500;
        uStack_39c = 0;
        local_1d4 = -0x14;
        cStack_1d3 = '^';
        uStack_1d2 = 0x164;
        local_1d8 = cVar1;
        cStack_1d7 = cVar2;
        uStack_1d6 = uVar9;
        iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005b3d9f,&local_1d8);
        goto LAB_01207084;
      }
    }
  }
  else {
LAB_0120708c:
    if (pcVar25[2] != '\0') {
      local_1d4 = local_3ec;
      acStack_3a4[0] = 'X';
      acStack_3a4[1] = -0x3a;
      uStack_3a2 = 0x1ab;
      puVar37 = &local_3e8;
      if (uVar4 == 2) {
        puVar37 = puVar26;
      }
      puVar37 = puVar37 + 2;
      local_3a8 = (uint ******)&local_1d8;
      local_1d8 = (char)puVar37;
      cStack_1d7 = (char)((uint)puVar37 >> 8);
      uStack_1d6 = (undefined2)((uint)puVar37 >> 0x10);
      iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005b3d9f,&local_3a8);
      if (iVar18 != 0) goto LAB_01207d50;
    }
    if (pcVar25[4] == '\0') {
LAB_0120722c:
      if (pcVar25[3] != '\0') {
        uVar44 = thunk_FUN_01bee35a(pcVar25[3],0x240);
        uVar19 = *(uint *)((int)uVar44 + (int)((ulonglong)uVar44 >> 0x20));
        if (uVar19 < 3) {
          piVar35 = (int *)FUN_019b03e8();
        }
        else {
          piVar35 = (int *)(uVar19 - 8);
          do {
            iVar18 = *piVar35;
            bVar43 = (bool)hasExclusiveAccess(piVar35);
          } while (!bVar43);
          *piVar35 = iVar18 + 1;
          if (iVar18 < 0) {
LAB_01207fe8:
                    /* WARNING: Does not return */
            pcVar38 = (code *)software_udf(0xfdee,0x1207fe8);
            (*pcVar38)();
          }
        }
        iVar18 = piVar35[2];
        iVar20 = piVar35[3];
        local_1d4 = (char)iVar20;
        cStack_1d3 = (char)((uint)iVar20 >> 8);
        uStack_1d2 = (undefined2)((uint)iVar20 >> 0x10);
        local_1d8 = (char)iVar18;
        cStack_1d7 = (char)((uint)iVar18 >> 8);
        uStack_1d6 = (undefined2)((uint)iVar18 >> 0x10);
        local_3a8 = (uint ******)&local_1d8;
        acStack_3a4[0] = 'h';
        acStack_3a4[1] = '1';
        uStack_3a2 = 0x120;
        iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005319b9,&local_3a8);
        DataMemoryBarrier(0xb);
        do {
          iVar20 = *piVar35;
          bVar43 = (bool)hasExclusiveAccess(piVar35);
        } while (!bVar43);
        *piVar35 = iVar20 + -1;
        if (iVar18 != 0) goto joined_r0x012072d0;
        if (iVar20 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019a2ffc(piVar35);
        }
      }
      uVar14 = uStack_202;
      cVar12 = cStack_203;
      cVar8 = local_204;
      uVar9 = uStack_206;
      cVar6 = cStack_207;
      cVar2 = local_208;
      cVar1 = local_3ec;
      if ((*puVar31 & 3) != 0) {
        local_204 = (char)uVar40;
        cVar11 = local_204;
        cStack_203 = (char)(uVar40 >> 8);
        cVar13 = cStack_203;
        uStack_202 = (undefined2)(uVar40 >> 0x10);
        uVar15 = uStack_202;
        local_208 = (char)ppppppuVar39;
        cVar5 = local_208;
        cStack_207 = (char)((uint)ppppppuVar39 >> 8);
        cVar7 = cStack_207;
        uStack_206 = (undefined2)((uint)ppppppuVar39 >> 0x10);
        uVar10 = uStack_206;
        local_208 = cVar2;
        cStack_207 = cVar6;
        uStack_206 = uVar9;
        local_204 = cVar8;
        cStack_203 = cVar12;
        uStack_202 = uVar14;
        if (*puVar31 == 1) {
          if (iVar41 == 0) goto LAB_012073a8;
          FUN_01ab9984(&local_58,iVar41 + 0x480);
          if (local_58 == (uint *******)0x0) {
            FUN_01214c38(&local_1d8,iVar41,local_50,local_4c);
            if (local_1c4 == (uint *******)0x0) goto LAB_01207338;
            local_3a8._0_2_ = CONCAT11(cStack_1d7,local_1d8);
            local_3a8._2_2_ = uStack_1d6;
            ppppppuVar22 = (uint ******)CONCAT22(uStack_1d6,CONCAT11(cStack_1d7,local_1d8));
            acStack_3a4[0] = local_1d4;
            acStack_3a4[1] = cStack_1d3;
            uStack_3a2 = uStack_1d2;
            pppppppuStack_3a0 = local_1d0;
            uStack_39c = SUB41(local_1cc,0);
            local_39b = (byte)((uint)local_1cc >> 8);
            uStack_39a = (undefined2)((uint)local_1cc >> 0x10);
            apppppppuStack_398[0] = pppppppuStack_1c8;
            apppppppuStack_398[1] = local_1c4;
            if (((uint)*local_1d0 & (uint)ppppppuVar39) != 0 || ((uint)local_1d0[1] & uVar40) != 0)
            {
              local_1f4 = (uint *******)0x0;
              FUN_01ab4580(&pppppppuStack_3a0);
              FUN_0120bc7c(&local_208,&ppppppuStack_410,iVar41);
              pppppppuVar36 = local_1f4;
              ppppppuVar22 = (uint ******)CONCAT22(local_3a8._2_2_,(undefined2)local_3a8);
              goto LAB_012073ac;
            }
            local_200 = local_1d0;
            local_1fc = local_1cc;
            local_1f8 = pppppppuStack_1c8;
            local_1f4 = local_1c4;
            local_208 = cVar5;
            cStack_207 = cVar7;
            uStack_206 = uVar10;
            local_204 = cVar11;
            cStack_203 = cVar13;
            uStack_202 = uVar15;
          }
          else {
LAB_01207338:
            local_1f4 = (uint *******)0x0;
            ppppppuVar22 = local_3a8;
          }
          pppppppuVar36 = local_1f4;
        }
        else {
          if (iVar41 != 0) {
            FUN_01214c38(&local_1d8,iVar41,puVar31[2],puVar31[3]);
            if (local_1c4 != (uint *******)0x0) {
              local_3a8._0_2_ = CONCAT11(cStack_1d7,local_1d8);
              local_3a8._2_2_ = uStack_1d6;
              ppppppuVar22 = (uint ******)CONCAT22(uStack_1d6,CONCAT11(cStack_1d7,local_1d8));
              acStack_3a4[0] = local_1d4;
              acStack_3a4[1] = cStack_1d3;
              uStack_3a2 = uStack_1d2;
              pppppppuStack_3a0 = local_1d0;
              uStack_39c = SUB41(local_1cc,0);
              local_39b = (byte)((uint)local_1cc >> 8);
              uStack_39a = (undefined2)((uint)local_1cc >> 0x10);
              apppppppuStack_398[0] = pppppppuStack_1c8;
              apppppppuStack_398[1] = local_1c4;
              if (((uint)*local_1d0 & (uint)ppppppuVar39) == 0 && ((uint)local_1d0[1] & uVar40) == 0
                 ) {
                local_200 = local_1d0;
                local_1fc = local_1cc;
                local_1f8 = pppppppuStack_1c8;
                pppppppuVar36 = local_1c4;
                local_208 = cVar5;
                cStack_207 = cVar7;
                uStack_206 = uVar10;
                local_204 = cVar11;
                cStack_203 = cVar13;
                uStack_202 = uVar15;
              }
              else {
                pppppppuVar36 = (uint *******)0x0;
                FUN_01ab4580();
                ppppppuVar22 = (uint ******)CONCAT22(local_3a8._2_2_,(undefined2)local_3a8);
              }
              goto LAB_012073ac;
            }
          }
LAB_012073a8:
          pppppppuVar36 = (uint *******)0x0;
          ppppppuVar22 = local_3a8;
        }
LAB_012073ac:
        if (pppppppuVar36 != (uint *******)0x0) {
          ppppppuVar42 = (uint ******)0x0;
          pppppppuVar3 = (uint *******)CONCAT22(uStack_206,CONCAT11(cStack_207,local_208));
          ppppppuVar39 = (uint ******)CONCAT22(uStack_202,CONCAT11(cStack_203,local_204));
          local_38 = local_200;
          local_34 = local_1fc;
          local_30 = local_1f8;
          bVar43 = (uint *******)0xfffffffe < local_1f8;
          pppppppuVar32 = (uint *******)((int)local_1f8 + 1);
          local_40 = pppppppuVar3;
          local_3c = ppppppuVar39;
          local_2c = pppppppuVar36;
          local_3a8 = ppppppuVar22;
          FUN_01ab4580(&local_38);
          cVar2 = local_3ec;
          local_3a8._0_2_ = 0;
          local_3a8._2_2_ = 0;
          iVar41 = 8;
          local_58 = pppppppuVar32;
          local_54 = (uint ******)(uint)bVar43;
          local_50 = pppppppuVar3;
          local_4c = ppppppuVar39;
          local_48 = pppppppuVar36;
          do {
            FUN_0120bb5c(&local_1d8,&local_58);
            pppppppuVar32 = local_1c4;
            pppppppuVar3 = pppppppuStack_1c8;
            ppppppuVar39 = local_1cc;
            pppppppuVar36 = local_1d0;
            if (local_1c4 == (uint *******)0x0) {
              local_454 = 0;
              uStack_452 = 0;
              local_220[0] = ppppppuVar42;
              goto LAB_01207540;
            }
            uVar28 = CONCAT22(uStack_1d2,CONCAT11(cStack_1d3,local_1d4));
            ppppppuVar42 = (uint ******)((int)ppppppuVar42 + 1);
            *(uint *)((int)&local_3a8 + iVar41) =
                 CONCAT22(uStack_1d6,CONCAT11(cStack_1d7,local_1d8));
            *(undefined4 *)(acStack_3a4 + iVar41) = uVar28;
            *(uint ********)((int)&pppppppuStack_3a0 + iVar41) = pppppppuVar36;
            *(uint *******)(&uStack_39c + iVar41) = ppppppuVar39;
            *(uint ********)((int)apppppppuStack_398 + iVar41) = pppppppuVar3;
            *(uint ********)((int)apppppppuStack_398 + iVar41 + 4) = pppppppuVar32;
            iVar41 = iVar41 + 0x18;
          } while (ppppppuVar42 != (uint ******)&DAT_00000010);
          local_220[0] = (uint ******)&DAT_00000010;
          local_40 = local_58;
          local_3c = local_54;
          local_38 = local_50;
          local_34 = local_4c;
          local_30 = local_48;
          local_2c = local_44;
          while (FUN_0120bb5c(&local_208,&local_40), local_1f4 != (uint *******)0x0) {
            local_1d8 = local_208;
            cStack_1d7 = cStack_207;
            uStack_1d6 = uStack_206;
            local_1d4 = local_204;
            cStack_1d3 = cStack_203;
            uStack_1d2 = uStack_202;
            local_1d0 = local_200;
            local_1cc = local_1fc;
            pppppppuStack_1c8 = local_1f8;
            local_1c4 = local_1f4;
            pppppppuVar36 = (uint *******)&pppppppuStack_3a0;
            ppppppuVar39 = (uint ******)&DAT_00000010;
            ppppppuVar22 = (uint ******)local_220;
            if (&DAT_00000010 < local_220[0]) {
              pppppppuVar36 = pppppppuStack_3a0;
              ppppppuVar39 = local_220[0];
              ppppppuVar22 = (uint ******)((uint)&local_3a8 | 4);
            }
            ppppppuVar42 = (uint ******)*ppppppuVar22;
            if (ppppppuVar42 == ppppppuVar39) {
              FUN_0121af3c(&local_3a8);
              ppppppuVar42 = (uint ******)
                             CONCAT22(uStack_3a2,CONCAT11(acStack_3a4[1],acStack_3a4[0]));
              pppppppuVar36 = pppppppuStack_3a0;
              ppppppuVar22 = (uint ******)((uint)&local_3a8 | 4);
            }
            FUN_01bed864(pppppppuVar36 + (int)ppppppuVar42 * 6,&local_1d8,0x18);
            *ppppppuVar22 = (uint *****)((int)*ppppppuVar22 + 1);
          }
          local_454 = (undefined2)local_3a8;
          uStack_452 = local_3a8._2_2_;
LAB_01207540:
          ppppppuVar22 = local_220[0];
          ppppppuVar39 = (uint ******)CONCAT22(uStack_3a2,CONCAT11(acStack_3a4[1],acStack_3a4[0]));
          local_208 = acStack_3a4[0];
          cStack_207 = acStack_3a4[1];
          uStack_206 = uStack_3a2;
          FUN_01bed4e2(&local_1d8,&pppppppuStack_3a0,0x180);
          pppppppuVar36 = (uint *******)&local_40;
          if (&DAT_00000010 < ppppppuVar22) {
            pppppppuVar36 = (uint *******)&local_208;
          }
          local_40 = (uint *******)ppppppuVar22;
          *pppppppuVar36 = (uint ******)0x0;
          uVar9 = uStack_206;
          cVar8 = cStack_207;
          cVar6 = local_208;
          local_214 = ppppppuVar22;
          if (&DAT_00000010 < ppppppuVar22) {
            local_214 = ppppppuVar39;
          }
          ppppppuVar39 = (uint ******)0x0;
          FUN_01bed4e2(&pppppppuStack_3a0,&local_1d8,0x180);
          local_218 = (uint ******)0x0;
          acStack_3a4[0] = cVar6;
          acStack_3a4[1] = cVar8;
          uStack_3a2 = uVar9;
          local_3a8._0_2_ = local_454;
          local_3a8._2_2_ = uStack_452;
          local_220[0] = (uint ******)local_40;
          if (local_214 == (uint ******)0x0) {
            FUN_012031ac(&local_3a8);
          }
          else {
            bVar43 = false;
            do {
              ppppppuVar39 = (uint ******)0x0;
              local_214 = (uint ******)((int)local_214 + -1);
              pppppppuVar36 = (uint *******)&pppppppuStack_3a0;
              if (&DAT_00000010 < local_220[0]) {
                pppppppuVar36 = pppppppuStack_3a0;
              }
              pppppppuVar36 = pppppppuVar36 + (int)local_214 * 6;
              if ((uint *******)pppppppuVar36[5] == (uint *******)0x0) {
                FUN_012031ac(&local_3a8);
                if (bVar43) goto LAB_012079ac;
                goto LAB_012079c8;
              }
              local_58 = (uint *******)*pppppppuVar36;
              local_54 = pppppppuVar36[1];
              local_50 = (uint *******)pppppppuVar36[2];
              local_4c = pppppppuVar36[3];
              local_48 = (uint *******)pppppppuVar36[4];
              pppppuVar33 = local_50[0xc][3];
              local_1d0 = (uint *******)local_50[0xc][4];
              local_1d4 = (char)pppppuVar33;
              cStack_1d3 = (char)((uint)pppppuVar33 >> 8);
              uStack_1d2 = (undefined2)((uint)pppppuVar33 >> 0x10);
              uStack_1ba = 0;
              local_1bf = '\0';
              uStack_1be = uStack_1be & 0xff000000;
              local_1d8 = '\0';
              cStack_1d7 = '\0';
              uStack_1d6 = 0x8000;
              local_1b3 = 0x15;
              local_1b7 = 0x15;
              local_1cc = (uint ******)0x80000002;
              pcVar38 = *(code **)(local_3f0 + 0x14);
              local_204 = '\0';
              cStack_203 = 'X';
              uStack_202 = 0x164;
              local_208 = (char)&local_1d8;
              cStack_207 = (char)((uint)&local_1d8 >> 8);
              uStack_206 = (undefined2)((uint)&local_1d8 >> 0x10);
              local_1c0 = cVar2;
              local_44 = (uint *******)pppppppuVar36[5];
              iVar41 = (*pcVar38)(local_3f4,&DAT_00590e5f,&local_208);
              FUN_01203240(&local_1d8);
              if (iVar41 != 0) goto LAB_01207900;
              FUN_01ab95c0(&local_50);
              local_210 = (uint *****)FUN_01ab826c();
              if ((local_210 != (uint *****)0x0) &&
                 (local_20c = &local_210, local_210[2] != (uint ****)0x0)) {
                local_1e3 = 0x15;
                local_1eb = 0;
                local_1ef = 0;
                local_1e7 = 0x15;
                local_1fc = (uint ******)0x80000002;
                local_200 = (uint *******)&DAT_00000001;
                local_208 = '\0';
                cStack_207 = '\0';
                uStack_206 = 0x8000;
                local_204 = 'G';
                cStack_203 = '/';
                uStack_202 = 0x53;
                local_1b3 = 0x15;
                uStack_1ba = 0;
                local_1bf = '\0';
                uStack_1be = (uint)uStack_1be._3_1_ << 0x18;
                local_1b7 = 0x15;
                local_1cc = (uint ******)0x80000002;
                local_1d0 = (uint *******)&DAT_00000001;
                local_1d8 = '\0';
                cStack_1d7 = '\0';
                uStack_1d6 = 0x8000;
                local_1d4 = '@';
                cStack_1d3 = '/';
                uStack_1d2 = 0x53;
                local_2c = (uint *******)FUN_01645800;
                local_3c = (uint ******)FUN_01645800;
                local_34 = (uint ******)&LAB_01aba94c;
                local_38 = &local_20c;
                local_1f0 = cVar2;
                local_1c0 = cVar2;
                local_40 = (uint *******)&local_208;
                local_30 = (uint *******)&local_1d8;
                iVar41 = (*pcVar38)(local_3f4,&DAT_005a902e,&local_40);
                FUN_01203240(&local_1d8);
                FUN_01203240(&local_208);
                if (iVar41 == 0) goto LAB_012077bc;
LAB_012078dc:
                DataMemoryBarrier(0xb);
                do {
                  uVar40 = *extraout_r1;
                  bVar43 = (bool)hasExclusiveAccess(extraout_r1);
                } while (!bVar43);
                *extraout_r1 = uVar40 - 1;
                if ((uVar40 - 1 & 0xbfffffff) == 0x80000000) {
                  FUN_019a33c4(extraout_r1);
                }
LAB_01207900:
                FUN_01ab4580(&local_50);
                FUN_012031ac(&local_3a8);
                goto LAB_01207d50;
              }
LAB_012077bc:
              local_1c0 = '\0';
              uStack_1be = 0;
              uStack_1ba = 0;
              local_1b3 = 0x15;
              local_1b7 = 0x15;
              local_1cc = (uint ******)0x80000002;
              local_1d0 = (uint *******)&DAT_00000001;
              local_1d4 = 'K';
              cStack_1d3 = ';';
              uStack_1d2 = 0x53;
              local_1d8 = '\0';
              cStack_1d7 = '\0';
              uStack_1d6 = 0x8000;
              local_208 = (char)&local_1d8;
              cStack_207 = (char)((uint)&local_1d8 >> 8);
              uStack_206 = (undefined2)((uint)&local_1d8 >> 0x10);
              local_204 = '\0';
              cStack_203 = 'X';
              uStack_202 = 0x164;
              local_1bf = cVar1;
              iVar41 = (*pcVar38)(local_3f4,&DAT_00590e5f,&local_208);
              FUN_01203240(&local_1d8);
              if (iVar41 != 0) goto LAB_012078dc;
              DataMemoryBarrier(0xb);
              do {
                uVar40 = *extraout_r1;
                bVar43 = (bool)hasExclusiveAccess(extraout_r1);
              } while (!bVar43);
              *extraout_r1 = uVar40 - 1;
              if ((uVar40 - 1 & 0xbfffffff) == 0x80000000) {
                FUN_019a33c4(extraout_r1);
              }
              FUN_01ab4580(&local_50);
              bVar43 = true;
            } while (local_218 != local_214);
            FUN_012031ac(&local_3a8);
LAB_012079ac:
            ppppppuVar39 = (uint ******)0x0;
            iVar41 = (**(code **)(local_3f0 + 0x10))(local_3f4,0x20);
            if (iVar41 != 0) goto LAB_01207d50;
          }
        }
      }
LAB_012079c8:
      if (pcVar25[1] != '\0') {
        puVar31 = &local_3e8;
        if (uVar4 == 2) {
          puVar31 = puVar26;
        }
        local_1cc = (uint ******)0x80000002;
        uVar40 = puVar31[5];
        local_1d0 = (uint *******)puVar31[6];
        local_200 = (uint *******)&local_3a8;
        uStack_39c = 2;
        local_39b = 0;
        uStack_39a = 0x8000;
        local_1d8 = '\0';
        cStack_1d7 = '\0';
        uStack_1d6 = 0x8000;
        local_1c0 = '\0';
        uStack_1be = 0;
        uStack_1ba = 0;
        local_1b3 = 0x15;
        local_1b7 = 0x15;
        local_1d4 = (char)uVar40;
        cStack_1d3 = (char)(uVar40 >> 8);
        uStack_1d2 = (undefined2)(uVar40 >> 0x10);
        local_390 = 0;
        local_38e = 0;
        uStack_38a = 0;
        local_383 = 0x15;
        local_387 = 0x15;
        local_3a8._0_2_ = 0;
        local_3a8._2_2_ = 0x8000;
        pppppppuStack_3a0 = (uint *******)&DAT_00000001;
        acStack_3a4[0] = 'K';
        acStack_3a4[1] = ';';
        uStack_3a2 = 0x53;
        local_1fc = (uint ******)FUN_01645800;
        local_204 = '\0';
        cStack_203 = 'X';
        uStack_202 = 0x164;
        local_208 = (char)&local_1d8;
        cStack_207 = (char)((uint)&local_1d8 >> 8);
        uStack_206 = (undefined2)((uint)&local_1d8 >> 0x10);
        local_38f = cVar1;
        local_1bf = cVar1;
        iVar41 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_0059e0e4,&local_208);
        FUN_01203240(&local_3a8);
        FUN_01203240(&local_1d8);
        if (iVar41 != 0) goto LAB_01207d50;
      }
      if (pcVar25[6] == '\0') {
        uVar40 = 0;
        ppppppuVar22 = (uint ******)0x1;
      }
      else {
        uVar40 = *puVar21;
        puVar21 = &local_3e8;
        if (uVar4 == 2) {
          puVar21 = puVar26;
        }
        ppppppuVar39 = (uint ******)puVar21[1];
        ppppppuVar22 = (uint ******)(uVar40 ^ 1);
      }
      if (pcVar25[5] != '\0') {
        puVar21 = &local_3e8;
        if (uVar4 == 2) {
          puVar21 = puVar26;
        }
        uVar19 = puVar21[0xd];
        if (uVar19 != 0) {
          local_40 = (uint *******)&DAT_005319c3;
          puVar21 = &local_3e8;
          if (uVar4 == 2) {
            puVar21 = puVar26;
          }
          local_1d0 = (uint *******)puVar21[0xe];
          local_1d4 = (char)uVar19;
          cStack_1d3 = (char)(uVar19 >> 8);
          uStack_1d2 = (undefined2)(uVar19 >> 0x10);
          local_1cc = (uint ******)0x80000002;
          local_1c0 = '\0';
          uStack_1be = 0;
          uStack_1ba = 0;
          local_1b3 = 0x15;
          local_1b7 = 0x15;
          local_1d8 = '\0';
          cStack_1d7 = '\0';
          uStack_1d6 = 0x8000;
          local_390 = 0;
          local_38e = 0;
          uStack_38a = 0;
          if (ppppppuVar22 == (uint ******)0x0) {
            local_40 = (uint *******)&DAT_00000001;
          }
          pppppppuStack_3a0 = (uint *******)&DAT_00000001;
          local_1f8 = (uint *******)&local_40;
          local_200 = (uint *******)&local_3a8;
          local_208 = (char)&local_1d8;
          cStack_207 = (char)((uint)&local_1d8 >> 8);
          uStack_206 = (undefined2)((uint)&local_1d8 >> 0x10);
          local_383 = 0x15;
          local_387 = 0x15;
          uStack_39c = 2;
          local_39b = 0;
          uStack_39a = 0x8000;
          acStack_3a4[0] = 'K';
          acStack_3a4[1] = ';';
          uStack_3a2 = 0x53;
          local_3a8._0_2_ = 0;
          local_3a8._2_2_ = 0x8000;
          local_1f4 = (uint *******)&DAT_0132b6a0;
          local_1fc = (uint ******)FUN_01645800;
          local_204 = '\0';
          cStack_203 = 'X';
          uStack_202 = 0x164;
          local_38f = cVar1;
          local_1bf = cVar1;
          local_3c = ppppppuVar22;
          iVar41 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005a902e,&local_208);
          FUN_01203240(&local_3a8);
          FUN_01203240(&local_1d8);
          if (iVar41 != 0) goto LAB_01207d50;
        }
      }
      if (uVar40 != 0) {
        acStack_3a4[0] = -0x14;
        acStack_3a4[1] = 'Y';
        uStack_3a2 = 0x164;
        uStack_39c = 0x2c;
        local_39b = 0xd0;
        uStack_39a = 0x12f;
        pppppppuStack_3a0 = (uint *******)&local_40;
        uStack_206 = 0;
        local_204 = '\0';
        uStack_1d6 = 0;
        local_1d4 = '\0';
        apppppppuStack_398[1] = (uint *******)FUN_01645eec;
        apppppppuStack_398[0] = (uint *******)&local_1d8;
        local_3a8 = (uint ******)&local_208;
        local_208 = '\0';
        cStack_203 = '\0';
        uStack_202 = 0;
        local_1f8 = (uint *******)((uint)local_1f8 & 0xffffff00);
        local_200 = (uint *******)0x1500;
        local_1fc = (uint ******)0x1500;
        local_1d8 = '\0';
        cStack_1d3 = '\0';
        uStack_1d2 = 0;
        pppppppuStack_1c8 = (uint *******)((uint)pppppppuStack_1c8 & 0xffffff00);
        local_1d0 = (uint *******)0x1500;
        local_1cc = (uint ******)0x1500;
        cStack_207 = cVar1;
        cStack_1d7 = cVar1;
        local_40 = (uint *******)ppppppuVar39;
        iVar41 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005713bb,&local_3a8);
        if (iVar41 != 0) goto LAB_01207d50;
      }
      pppppppuStack_3a0 = (uint *******)CONCAT31(pppppppuStack_3a0._1_3_,local_3ec);
      local_3a8 = &local_3f4;
      uStack_39c = 1;
      local_39b = 0;
      acStack_3a4[0] = '\b';
      acStack_3a4[1] = '4';
      uStack_3a2 = 0x1c2;
      FUN_01aacd68(*(undefined4 *)(iVar17 + 0x10),&local_3a8,&DAT_01d2f1d8);
      if ((local_39b & 1) == 0) {
        iVar41 = (**(code **)(local_3f0 + 0x14))(local_3f4,"\n",3);
        if (iVar41 == 0) {
          uVar44 = FUN_012069d0(*piVar24 + 8);
          FUN_01263d28(&local_3e8,(int)uVar44 + 8,local_414[1],local_414[2]);
          uVar40 = local_3e8 & 0xff;
          if ((*(char *)(*piVar24 + 0x67) == '\x01') && (uVar40 != 4)) {
            acStack_3a4[0] = '|';
            acStack_3a4[1] = '}';
            uStack_3a2 = 0x19a;
            local_3a8 = (uint ******)&local_1d8;
            local_1d4 = (char)local_3e4;
            cStack_1d3 = (char)((uint)local_3e4 >> 8);
            uStack_1d2 = (undefined2)((uint)local_3e4 >> 0x10);
            cStack_1d7 = (char)(local_3e8 >> 8);
            uStack_1d6 = (undefined2)(local_3e8 >> 0x10);
            local_1d8 = (char)local_3e8;
            FUN_019a896c(&DAT_0057a6ad,&local_3a8);
            FUN_0069d8a4(local_1d8,CONCAT22(uStack_1d2,CONCAT11(cStack_1d3,local_1d4)));
          }
          else if (uVar40 != 4) {
            FUN_0069d8a4(uVar40,local_3e4);
          }
          FUN_00a97e8c((int)uVar44,(uint)((ulonglong)uVar44 >> 0x20) & 1);
          goto LAB_01207e84;
        }
      }
    }
    else {
      uVar44 = thunk_FUN_01bee35a(pcVar25[4],0x240);
      uVar19 = *(uint *)((int)uVar44 + (int)((ulonglong)uVar44 >> 0x20));
      if (uVar19 < 3) {
        piVar35 = (int *)FUN_019b03e8();
      }
      else {
        piVar35 = (int *)(uVar19 - 8);
        do {
          iVar18 = *piVar35;
          bVar43 = (bool)hasExclusiveAccess(piVar35);
        } while (!bVar43);
        *piVar35 = iVar18 + 1;
        if (iVar18 < 0) goto LAB_01207fe8;
      }
      puVar27 = (undefined *)piVar35[4];
      if (puVar27 == (undefined *)0x0) {
        ClearExclusiveLocal();
        if ((DAT_01d51ab0 != 0 || DAT_01d51ab4 != 0) &&
           (DAT_01d51ab0 == piVar35[2] && DAT_01d51ab4 == piVar35[3])) {
          iVar18 = 4;
          puVar27 = &DAT_0056f91c;
          goto LAB_01207150;
        }
        if (pcVar25[3] == '\0') {
          iVar18 = piVar35[2];
          iVar20 = piVar35[3];
          local_1d4 = (char)iVar20;
          cStack_1d3 = (char)((uint)iVar20 >> 8);
          uStack_1d2 = (undefined2)((uint)iVar20 >> 0x10);
          local_1d8 = (char)iVar18;
          cStack_1d7 = (char)((uint)iVar18 >> 8);
          uStack_1d6 = (undefined2)((uint)iVar18 >> 0x10);
          local_3a8 = (uint ******)&local_1d8;
          acStack_3a4[0] = 'h';
          acStack_3a4[1] = '1';
          uStack_3a2 = 0x120;
          iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005319b9,&local_3a8);
          goto LAB_01207188;
        }
LAB_01207200:
        DataMemoryBarrier(0xb);
        do {
          iVar18 = *piVar35;
          bVar43 = (bool)hasExclusiveAccess(piVar35);
        } while (!bVar43);
        *piVar35 = iVar18 + -1;
        if (iVar18 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019a2ffc(piVar35);
        }
        goto LAB_0120722c;
      }
      iVar18 = piVar35[5] + -1;
LAB_01207150:
      local_1d4 = (char)iVar18;
      cStack_1d3 = (char)((uint)iVar18 >> 8);
      uStack_1d2 = (undefined2)((uint)iVar18 >> 0x10);
      local_1d8 = (char)puVar27;
      cStack_1d7 = (char)((uint)puVar27 >> 8);
      uStack_1d6 = (undefined2)((uint)puVar27 >> 0x10);
      local_3a8 = (uint ******)&local_1d8;
      acStack_3a4[0] = -0x1c;
      acStack_3a4[1] = -0x37;
      uStack_3a2 = 0x1ab;
      iVar18 = (**(code **)(local_3f0 + 0x14))(local_3f4,&DAT_005b3d9f,&local_3a8);
LAB_01207188:
      if (iVar18 == 0) goto LAB_01207200;
      DataMemoryBarrier(0xb);
      do {
        iVar20 = *piVar35;
        bVar43 = (bool)hasExclusiveAccess(piVar35);
      } while (!bVar43);
      *piVar35 = iVar20 + -1;
joined_r0x012072d0:
      if (iVar20 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019a2ffc(piVar35);
      }
    }
  }
LAB_01207d50:
  if (*(char *)(*piVar24 + 0x67) == '\x01') {
    iVar41 = *(int *)(*piVar29 + 0x14);
    uVar28 = *(undefined4 *)(iVar41 + 0xc);
    uVar30 = *(undefined4 *)(iVar41 + 0x10);
    local_208 = (char)uVar28;
    cStack_207 = (char)((uint)uVar28 >> 8);
    uStack_206 = (undefined2)((uint)uVar28 >> 0x10);
    local_204 = (char)uVar30;
    cStack_203 = (char)((uint)uVar30 >> 8);
    uStack_202 = (undefined2)((uint)uVar30 >> 0x10);
    puVar23 = *(undefined4 **)(*(int *)(*piVar29 + 0x10) + 8);
    apppppppuStack_398[1] = (uint *******)puVar23[1];
    pppppppuStack_3a0 = (uint *******)puVar23[2];
    uVar28 = puVar23[3];
    uStack_39c = (undefined1)uVar28;
    local_39b = (byte)((uint)uVar28 >> 8);
    uStack_39a = (undefined2)((uint)uVar28 >> 0x10);
    apppppppuStack_398[0] = (uint *******)0x0;
    local_1d0 = (uint *******)&local_3a8;
    acStack_3a4[0] = (char)apppppppuStack_398[1];
    acStack_3a4[1] = (char)((uint)apppppppuStack_398[1] >> 8);
    uStack_3a2 = (undefined2)((uint)apppppppuStack_398[1] >> 0x10);
    local_3a8._0_2_ = (undefined2)*puVar23;
    local_3a8._2_2_ = (undefined2)((uint)*puVar23 >> 0x10);
    local_1cc = (uint ******)FUN_01208280;
    local_1d4 = -0x60;
    cStack_1d3 = -0x4a;
    uStack_1d2 = 0x132;
    local_1d8 = (char)&local_208;
    cStack_1d7 = (char)((uint)&local_208 >> 8);
    uStack_1d6 = (undefined2)((uint)&local_208 >> 0x10);
    FUN_00664898(&local_3e8,&DAT_005b68f9,&local_1d8);
    uVar28 = local_3e4;
    uVar40 = local_3e8;
    uVar44 = FUN_012069d0(*piVar24 + 8);
    FUN_01263d28(&local_3e8,(int)uVar44 + 8,uVar28,local_3e0);
    if ((char)local_3e8 != '\x04') {
      local_1d4 = (char)local_3e4;
      cStack_1d3 = (char)((uint)local_3e4 >> 8);
      uStack_1d2 = (undefined2)((uint)local_3e4 >> 0x10);
      cStack_1d7 = (char)(local_3e8 >> 8);
      uStack_1d6 = (undefined2)(local_3e8 >> 0x10);
      acStack_3a4[0] = '|';
      acStack_3a4[1] = '}';
      uStack_3a2 = 0x19a;
      local_1d8 = (char)local_3e8;
      local_3a8 = (uint ******)&local_1d8;
      FUN_019a896c(&DAT_005b9489,&local_3a8);
      FUN_0069d8a4(local_1d8,CONCAT22(uStack_1d2,CONCAT11(cStack_1d3,local_1d4)));
    }
    FUN_00a97e8c((int)uVar44,(uint)((ulonglong)uVar44 >> 0x20) & 1);
    FUN_019bb7e0(uVar40,uVar28);
  }
LAB_01207e84:
  local_414[2] = (uint ***)0x0;
  if (iVar16 == 0) {
    *piVar34 = *piVar34 + 1;
  }
  else {
    FUN_019bb7e0(local_420,local_41c);
  }
  return;
}

