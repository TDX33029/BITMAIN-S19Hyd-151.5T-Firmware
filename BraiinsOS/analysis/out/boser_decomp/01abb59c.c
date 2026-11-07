// FUN_01abb59c @ 01abb59c size=3800 calls_out=19 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01abb59c(uint ******param_1,uint ******param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  uint *******pppppppuVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  uint *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint *puVar12;
  uint *puVar13;
  uint ******ppppppuVar14;
  uint ******ppppppuVar15;
  uint *extraout_r1;
  uint *****pppppuVar16;
  uint uVar17;
  bool bVar18;
  uint *puVar19;
  undefined4 uVar20;
  int *piVar21;
  uint ******ppppppuVar22;
  code *pcVar23;
  uint ******ppppppuVar24;
  int iVar25;
  uint *******pppppppuVar26;
  undefined8 uVar27;
  undefined2 local_3f8;
  undefined2 uStack_3f6;
  uint local_3e8 [16];
  undefined4 local_3a8;
  undefined1 uStack_3a4;
  byte bStack_3a3;
  undefined2 uStack_3a2;
  uint *******pppppppuStack_3a0;
  undefined1 uStack_39c;
  byte local_39b;
  undefined2 uStack_39a;
  uint *******apppppppuStack_398 [2];
  undefined1 local_390;
  byte local_38f;
  undefined4 local_38e;
  undefined3 uStack_38a;
  undefined4 local_387;
  undefined4 local_383;
  uint ******local_220 [2];
  uint ******local_218;
  uint ******local_214;
  uint *****local_210;
  uint ******local_20c;
  undefined4 local_208;
  undefined1 local_204;
  byte bStack_203;
  undefined2 uStack_202;
  uint *******local_200;
  uint ******local_1fc;
  uint *******local_1f8;
  uint *******local_1f4;
  byte local_1f0;
  undefined4 local_1ef;
  undefined4 local_1eb;
  undefined4 local_1e7;
  undefined4 local_1e3;
  undefined4 local_1d8;
  undefined1 local_1d4;
  byte bStack_1d3;
  undefined2 uStack_1d2;
  uint *******local_1d0;
  uint ******local_1cc;
  uint *******pppppppuStack_1c8;
  uint *******local_1c4;
  byte local_1c0;
  byte local_1bf;
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
  
  puVar19 = *(uint **)(param_4 + 0x14);
  FUN_01aade50(local_3e8,*(undefined4 *)(param_4 + 0x10),puVar19);
  puVar12 = local_3e8;
  if (local_3e8[0] == 2) {
    puVar12 = puVar19;
  }
  if (*(char *)((int)param_1 + 7) != '\x02') {
    *(char *)(param_3 + 2) = *(char *)((int)param_1 + 7);
  }
  if (*(char *)param_1 == '\x01') {
    if (*(char *)(param_3 + 2) == '\0') {
      uVar20 = *param_3;
      iVar25 = param_3[1];
      iVar7 = FUN_01ab6520(uVar20,iVar25);
      if ((iVar7 != 0) &&
         (iVar7 = (**(code **)(iVar25 + 0xc))(uVar20,&DAT_005319c4,0xe), iVar7 != 0)) {
        return 1;
      }
      iVar7 = (**(code **)(iVar25 + 0x10))(uVar20,0x20);
    }
    else {
      local_3a8._2_2_ = 0;
      uStack_3a4 = 0;
      bStack_3a3 = 0;
      uStack_3a2 = 0;
      local_3a8._0_2_ = 0x100;
      local_39b = 0x15;
      uStack_39a = 0;
      apppppppuStack_398[0] = (uint *******)((uint)apppppppuStack_398[0] & 0xffffff00);
      pppppppuStack_3a0 = (uint *******)0x1500;
      uStack_39c = 0;
      uVar20 = *param_3;
      iVar25 = param_3[1];
      pcVar23 = *(code **)(iVar25 + 0x14);
      local_1d4 = 0xec;
      bStack_1d3 = 0x59;
      uStack_1d2 = 0x164;
      local_1d8._0_1_ = SUB41(&local_3a8,0);
      uVar3 = (undefined1)local_1d8;
      local_1d8._1_1_ = (byte)((uint)&local_3a8 >> 8);
      bVar1 = local_1d8._1_1_;
      local_1d8._2_2_ = (undefined2)((uint)&local_3a8 >> 0x10);
      uVar5 = local_1d8._2_2_;
      iVar7 = (*pcVar23)(uVar20,&DAT_00590e5f,&local_1d8);
      if (iVar7 != 0) {
        return 1;
      }
      iVar7 = FUN_01ab6520(uVar20,iVar25);
      if ((iVar7 != 0) &&
         (iVar7 = (**(code **)(iVar25 + 0xc))(uVar20,&DAT_005319c4,0xe), iVar7 != 0)) {
        return 1;
      }
      local_3a8._2_2_ = 0;
      uStack_3a4 = 0;
      bStack_3a3 = 0;
      uStack_3a2 = 0;
      local_39b = 0x15;
      uStack_39a = 0;
      apppppppuStack_398[0] = (uint *******)((uint)apppppppuStack_398[0] & 0xffffff00);
      pppppppuStack_3a0 = (uint *******)0x1500;
      uStack_39c = 0;
      local_1d4 = 0xec;
      bStack_1d3 = 0x5e;
      uStack_1d2 = 0x164;
      local_3a8._0_2_ = 0x100;
      local_1d8._0_1_ = uVar3;
      local_1d8._1_1_ = bVar1;
      local_1d8._2_2_ = uVar5;
      iVar7 = (*pcVar23)(uVar20,&DAT_005b3d9f,&local_1d8);
    }
    if (iVar7 != 0) {
      return 1;
    }
  }
  if (*(char *)((int)param_1 + 2) != '\0') {
    local_1d4 = *(undefined1 *)(param_3 + 2);
    puVar13 = local_3e8;
    if (local_3e8[0] == 2) {
      puVar13 = puVar19;
    }
    puVar13 = puVar13 + 2;
    local_1d8._0_1_ = SUB41(puVar13,0);
    local_1d8._1_1_ = (byte)((uint)puVar13 >> 8);
    local_1d8._2_2_ = (undefined2)((uint)puVar13 >> 0x10);
    uStack_3a4 = 0x58;
    bStack_3a3 = 0xc6;
    uStack_3a2 = 0x1ab;
    local_3a8 = (uint ******)&local_1d8;
    iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005b3d9f,&local_3a8);
    if (iVar7 != 0) {
      return 1;
    }
  }
  if (*(char *)(param_1 + 1) != '\0') {
    uVar27 = thunk_FUN_01bee35a(*(char *)(param_1 + 1),0x240);
    uVar8 = *(uint *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
    if (uVar8 < 3) {
      piVar21 = (int *)FUN_019b03e8();
    }
    else {
      piVar21 = (int *)(uVar8 - 8);
      do {
        iVar7 = *piVar21;
        bVar18 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar18);
      *piVar21 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01abc470;
    }
    puVar9 = (undefined *)piVar21[4];
    if (puVar9 == (undefined *)0x0) {
      ClearExclusiveLocal();
      if ((DAT_01d51ab0 != 0 || DAT_01d51ab4 != 0) &&
         (DAT_01d51ab0 == piVar21[2] && DAT_01d51ab4 == piVar21[3])) {
        iVar7 = 4;
        puVar9 = &DAT_0056f91c;
        goto LAB_01abb804;
      }
      if (*(char *)((int)param_1 + 3) == '\0') {
        iVar7 = piVar21[2];
        iVar25 = piVar21[3];
        local_1d8._0_1_ = (undefined1)iVar7;
        local_1d8._1_1_ = (byte)((uint)iVar7 >> 8);
        local_1d8._2_2_ = (undefined2)((uint)iVar7 >> 0x10);
        local_1d4 = (undefined1)iVar25;
        bStack_1d3 = (byte)((uint)iVar25 >> 8);
        uStack_1d2 = (undefined2)((uint)iVar25 >> 0x10);
        uStack_3a4 = 0x68;
        bStack_3a3 = 0x31;
        uStack_3a2 = 0x120;
        local_3a8 = (uint ******)&local_1d8;
        iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005319b9,&local_3a8);
        goto LAB_01abb838;
      }
    }
    else {
      iVar7 = piVar21[5] + -1;
LAB_01abb804:
      local_1d8._0_1_ = SUB41(puVar9,0);
      local_1d8._1_1_ = (byte)((uint)puVar9 >> 8);
      local_1d8._2_2_ = (undefined2)((uint)puVar9 >> 0x10);
      local_1d4 = (undefined1)iVar7;
      bStack_1d3 = (byte)((uint)iVar7 >> 8);
      uStack_1d2 = (undefined2)((uint)iVar7 >> 0x10);
      uStack_3a4 = 0xe4;
      bStack_3a3 = 0xc9;
      uStack_3a2 = 0x1ab;
      local_3a8 = (uint ******)&local_1d8;
      iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005b3d9f,&local_3a8);
LAB_01abb838:
      if (iVar7 != 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar21;
          bVar18 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar18);
        *piVar21 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019a2ffc(piVar21);
          return 1;
        }
        return 1;
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar21;
      bVar18 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar18);
    *piVar21 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar21);
    }
  }
  if (*(char *)((int)param_1 + 3) != '\0') {
    uVar27 = thunk_FUN_01bee35a(*(char *)((int)param_1 + 3),0x240);
    uVar8 = *(uint *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
    if (uVar8 < 3) {
      piVar21 = (int *)FUN_019b03e8();
    }
    else {
      piVar21 = (int *)(uVar8 - 8);
      do {
        iVar7 = *piVar21;
        bVar18 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar18);
      *piVar21 = iVar7 + 1;
      if (iVar7 < 0) {
LAB_01abc470:
                    /* WARNING: Does not return */
        pcVar23 = (code *)software_udf(0xfdee,0x1abc470);
        (*pcVar23)();
      }
    }
    iVar7 = piVar21[2];
    iVar25 = piVar21[3];
    local_1d8._0_1_ = (undefined1)iVar7;
    local_1d8._1_1_ = (byte)((uint)iVar7 >> 8);
    local_1d8._2_2_ = (undefined2)((uint)iVar7 >> 0x10);
    local_1d4 = (undefined1)iVar25;
    bStack_1d3 = (byte)((uint)iVar25 >> 8);
    uStack_1d2 = (undefined2)((uint)iVar25 >> 0x10);
    uStack_3a4 = 0x68;
    bStack_3a3 = 0x31;
    uStack_3a2 = 0x120;
    local_3a8 = (uint ******)&local_1d8;
    iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005319b9,&local_3a8);
    DataMemoryBarrier(0xb);
    do {
      iVar25 = *piVar21;
      bVar18 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar18);
    *piVar21 = iVar25 + -1;
    if (iVar7 != 0) {
      if (iVar25 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019a2ffc(piVar21);
      }
      return 1;
    }
    if (iVar25 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar21);
    }
  }
  pppppuVar10 = param_2[5];
  bVar1 = *(byte *)(param_3 + 2);
  ppppppuVar14 = (uint ******)(uint)bVar1;
  if (((uint)*pppppuVar10 & 3) == 0) goto LAB_01abc088;
  if (*pppppuVar10 == (uint ****)0x1) {
    pppppuVar10 = param_2[2];
    if (pppppuVar10 == (uint *****)0x0) goto LAB_01abba5c;
    FUN_01ab9984(&local_58,pppppuVar10);
    if (local_58 == (uint *******)0x0) {
      FUN_01ab9f1c(&local_1d8,pppppuVar10,local_50,local_4c);
      if (local_1c4 == (uint *******)0x0) {
        local_1f4 = (uint *******)0x0;
LAB_01abc440:
      }
      else {
        local_3a8._0_2_ = CONCAT11(local_1d8._1_1_,(undefined1)local_1d8);
        local_3a8._2_2_ = local_1d8._2_2_;
        uStack_3a4 = local_1d4;
        bStack_3a3 = bStack_1d3;
        uStack_3a2 = uStack_1d2;
        pppppppuStack_3a0 = local_1d0;
        uStack_39c = SUB41(local_1cc,0);
        local_39b = (byte)((uint)local_1cc >> 8);
        uStack_39a = (undefined2)((uint)local_1cc >> 0x10);
        apppppppuStack_398[0] = pppppppuStack_1c8;
        pppppuVar11 = *param_2;
        pppppuVar16 = param_2[1];
        apppppppuStack_398[1] = local_1c4;
        if (((uint)*local_1d0 & (uint)pppppuVar11) == 0 &&
            ((uint)local_1d0[1] & (uint)pppppuVar16) == 0) {
          local_200 = local_1d0;
          local_1fc = local_1cc;
          local_1f8 = pppppppuStack_1c8;
          local_204 = SUB41(pppppuVar16,0);
          bStack_203 = (byte)((uint)pppppuVar16 >> 8);
          uStack_202 = (undefined2)((uint)pppppuVar16 >> 0x10);
          local_208._0_1_ = SUB41(pppppuVar11,0);
          local_208._1_1_ = (byte)((uint)pppppuVar11 >> 8);
          local_208._2_2_ = (undefined2)((uint)pppppuVar11 >> 0x10);
          local_1f4 = local_1c4;
          local_3a8 = (uint ******)
                      CONCAT22(local_1d8._2_2_,CONCAT11(local_1d8._1_1_,(undefined1)local_1d8));
          goto LAB_01abc440;
        }
        local_1f4 = (uint *******)0x0;
        FUN_01ab4580(&pppppppuStack_3a0);
        FUN_01aba804(&local_208,param_2,pppppuVar10);
      }
      pppppppuVar26 = local_1f4;
      ppppppuVar24 = local_3a8;
    }
    else {
      local_1f4 = (uint *******)0x0;
      pppppppuVar26 = (uint *******)0x0;
      ppppppuVar24 = local_3a8;
    }
  }
  else {
    if (param_2[2] != (uint *****)0x0) {
      FUN_01ab9f1c(&local_1d8,param_2[2],pppppuVar10[2],pppppuVar10[3]);
      if (local_1c4 != (uint *******)0x0) {
        local_3a8._0_2_ = CONCAT11(local_1d8._1_1_,(undefined1)local_1d8);
        local_3a8._2_2_ = local_1d8._2_2_;
        ppppppuVar24 = (uint ******)
                       CONCAT22(local_1d8._2_2_,CONCAT11(local_1d8._1_1_,(undefined1)local_1d8));
        uStack_3a4 = local_1d4;
        bStack_3a3 = bStack_1d3;
        uStack_3a2 = uStack_1d2;
        pppppppuStack_3a0 = local_1d0;
        uStack_39c = SUB41(local_1cc,0);
        local_39b = (byte)((uint)local_1cc >> 8);
        uStack_39a = (undefined2)((uint)local_1cc >> 0x10);
        apppppppuStack_398[0] = pppppppuStack_1c8;
        pppppuVar10 = *param_2;
        pppppuVar11 = param_2[1];
        apppppppuStack_398[1] = local_1c4;
        if (((uint)*local_1d0 & (uint)pppppuVar10) == 0 &&
            ((uint)local_1d0[1] & (uint)pppppuVar11) == 0) {
          local_200 = local_1d0;
          local_1fc = local_1cc;
          local_1f8 = pppppppuStack_1c8;
          local_204 = SUB41(pppppuVar11,0);
          bStack_203 = (byte)((uint)pppppuVar11 >> 8);
          uStack_202 = (undefined2)((uint)pppppuVar11 >> 0x10);
          local_208._0_1_ = SUB41(pppppuVar10,0);
          local_208._1_1_ = (byte)((uint)pppppuVar10 >> 8);
          local_208._2_2_ = (undefined2)((uint)pppppuVar10 >> 0x10);
          pppppppuVar26 = local_1c4;
          goto LAB_01abba60;
        }
        FUN_01ab4580();
      }
    }
LAB_01abba5c:
    pppppppuVar26 = (uint *******)0x0;
    ppppppuVar24 = local_3a8;
  }
LAB_01abba60:
  pppppppuVar6 = local_1f8;
  if (pppppppuVar26 != (uint *******)0x0) {
    pppppppuVar2 = (uint *******)
                   CONCAT22(local_208._2_2_,CONCAT11(local_208._1_1_,(undefined1)local_208));
    ppppppuVar22 = (uint ******)CONCAT22(uStack_202,CONCAT11(bStack_203,local_204));
    local_38 = local_200;
    local_34 = local_1fc;
    local_30 = local_1f8;
    local_40 = pppppppuVar2;
    local_3c = ppppppuVar22;
    local_2c = pppppppuVar26;
    local_3a8 = ppppppuVar24;
    FUN_01ab4580(&local_38);
    local_58 = (uint *******)((int)pppppppuVar6 + 1);
    ppppppuVar24 = (uint ******)0x0;
    local_54 = (uint ******)(uint)((uint *******)0xfffffffe < pppppppuVar6);
    local_3a8._0_2_ = 0;
    local_3a8._2_2_ = 0;
    iVar7 = 8;
    local_50 = pppppppuVar2;
    local_4c = ppppppuVar22;
    local_48 = pppppppuVar26;
    do {
      FUN_01ab9784(&local_1d8,&local_58);
      pppppppuVar2 = local_1c4;
      pppppppuVar6 = pppppppuStack_1c8;
      ppppppuVar22 = local_1cc;
      pppppppuVar26 = local_1d0;
      if (local_1c4 == (uint *******)0x0) {
        local_3f8 = 0;
        uStack_3f6 = 0;
        local_220[0] = ppppppuVar24;
        goto LAB_01abbbec;
      }
      uVar20 = CONCAT22(uStack_1d2,CONCAT11(bStack_1d3,local_1d4));
      ppppppuVar24 = (uint ******)((int)ppppppuVar24 + 1);
      *(uint *)((int)local_3e8 + iVar7 + 0x40) =
           CONCAT22(local_1d8._2_2_,CONCAT11(local_1d8._1_1_,(undefined1)local_1d8));
      *(undefined4 *)((int)local_3e8 + iVar7 + 0x44) = uVar20;
      *(uint ********)((int)&pppppppuStack_3a0 + iVar7) = pppppppuVar26;
      *(uint *******)(&uStack_39c + iVar7) = ppppppuVar22;
      *(uint ********)((int)apppppppuStack_398 + iVar7) = pppppppuVar6;
      *(uint ********)((int)apppppppuStack_398 + iVar7 + 4) = pppppppuVar2;
      iVar7 = iVar7 + 0x18;
    } while (ppppppuVar24 != (uint ******)&DAT_00000010);
    local_220[0] = (uint ******)&DAT_00000010;
    local_40 = local_58;
    local_3c = local_54;
    local_38 = local_50;
    local_34 = local_4c;
    local_30 = local_48;
    local_2c = local_44;
    while (FUN_01ab9784(&local_208,&local_40), local_1f4 != (uint *******)0x0) {
      local_1d8._0_1_ = (undefined1)local_208;
      local_1d8._1_1_ = local_208._1_1_;
      local_1d8._2_2_ = local_208._2_2_;
      local_1d4 = local_204;
      bStack_1d3 = bStack_203;
      uStack_1d2 = uStack_202;
      local_1d0 = local_200;
      local_1cc = local_1fc;
      pppppppuStack_1c8 = local_1f8;
      local_1c4 = local_1f4;
      pppppppuVar26 = (uint *******)&pppppppuStack_3a0;
      ppppppuVar24 = (uint ******)&DAT_00000010;
      ppppppuVar22 = (uint ******)local_220;
      if (&DAT_00000010 < local_220[0]) {
        pppppppuVar26 = pppppppuStack_3a0;
        ppppppuVar24 = local_220[0];
        ppppppuVar22 = (uint ******)((uint)&local_3a8 | 4);
      }
      ppppppuVar15 = (uint ******)*ppppppuVar22;
      if (ppppppuVar15 == ppppppuVar24) {
        FUN_01ab1bd8(&local_3a8);
        ppppppuVar15 = (uint ******)CONCAT22(uStack_3a2,CONCAT11(bStack_3a3,uStack_3a4));
        pppppppuVar26 = pppppppuStack_3a0;
        ppppppuVar22 = (uint ******)((uint)&local_3a8 | 4);
      }
      FUN_01bed864(pppppppuVar26 + (int)ppppppuVar15 * 6,&local_1d8,0x18);
      *ppppppuVar22 = (uint *****)((int)*ppppppuVar22 + 1);
    }
    local_3f8 = (undefined2)local_3a8;
    uStack_3f6 = local_3a8._2_2_;
LAB_01abbbec:
    ppppppuVar22 = local_220[0];
    ppppppuVar24 = (uint ******)CONCAT22(uStack_3a2,CONCAT11(bStack_3a3,uStack_3a4));
    local_208._0_1_ = uStack_3a4;
    local_208._1_1_ = bStack_3a3;
    local_208._2_2_ = uStack_3a2;
    FUN_01bed4e2(&local_1d8,&pppppppuStack_3a0,0x180);
    pppppppuVar26 = (uint *******)&local_40;
    if (&DAT_00000010 < ppppppuVar22) {
      pppppppuVar26 = (uint *******)&local_208;
    }
    local_40 = (uint *******)ppppppuVar22;
    *pppppppuVar26 = (uint ******)0x0;
    uVar5 = local_208._2_2_;
    bVar4 = local_208._1_1_;
    uVar3 = (undefined1)local_208;
    local_214 = ppppppuVar22;
    if (&DAT_00000010 < ppppppuVar22) {
      local_214 = ppppppuVar24;
    }
    FUN_01bed4e2(&pppppppuStack_3a0,&local_1d8,0x180);
    local_218 = (uint ******)0x0;
    uStack_3a4 = uVar3;
    bStack_3a3 = bVar4;
    uStack_3a2 = uVar5;
    local_3a8._0_2_ = local_3f8;
    local_3a8._2_2_ = uStack_3f6;
    local_220[0] = (uint ******)local_40;
    if (local_214 == (uint ******)0x0) {
      FUN_01abcabc(&local_3a8);
      param_2 = (uint ******)0x0;
    }
    else {
      bVar18 = false;
      do {
        local_214 = (uint ******)((int)local_214 + -1);
        pppppppuVar26 = (uint *******)&pppppppuStack_3a0;
        if (&DAT_00000010 < local_220[0]) {
          pppppppuVar26 = pppppppuStack_3a0;
        }
        pppppppuVar26 = pppppppuVar26 + (int)local_214 * 6;
        if ((uint *******)pppppppuVar26[5] == (uint *******)0x0) {
          FUN_01abcabc(&local_3a8);
          param_2 = ppppppuVar14;
          if (bVar18) goto LAB_01abc06c;
          goto LAB_01abc088;
        }
        local_58 = (uint *******)*pppppppuVar26;
        local_54 = pppppppuVar26[1];
        local_50 = (uint *******)pppppppuVar26[2];
        local_4c = pppppppuVar26[3];
        local_48 = (uint *******)pppppppuVar26[4];
        pppppuVar10 = local_50[0xc][3];
        local_1d0 = (uint *******)local_50[0xc][4];
        local_1bf = 0;
        local_1d8._0_1_ = 0;
        local_1d8._1_1_ = 0;
        local_1d8._2_2_ = 0x8000;
        local_1b3 = 0x15;
        local_1b7 = 0x15;
        local_1d4 = SUB41(pppppuVar10,0);
        bStack_1d3 = (byte)((uint)pppppuVar10 >> 8);
        uStack_1d2 = (undefined2)((uint)pppppuVar10 >> 0x10);
        local_1cc = (uint ******)0x80000002;
        uVar20 = *param_3;
        pcVar23 = *(code **)(param_3[1] + 0x14);
        local_204 = 0;
        bStack_203 = 0x58;
        uStack_202 = 0x164;
        local_208._0_1_ = SUB41(&local_1d8,0);
        local_208._1_1_ = (byte)((uint)&local_1d8 >> 8);
        local_208._2_2_ = (undefined2)((uint)&local_1d8 >> 0x10);
        local_1c0 = bVar1;
        local_44 = (uint *******)pppppppuVar26[5];
        iVar7 = (*pcVar23)(uVar20,&DAT_00590e5f,&local_208);
        FUN_01abb3d0(&local_1d8);
        if (iVar7 != 0) goto LAB_01abbfa8;
        FUN_01ab95c0(&local_50);
        local_210 = (uint *****)FUN_01ab826c();
        if ((local_210 != (uint *****)0x0) &&
           (local_20c = &local_210, local_210[2] != (uint ****)0x0)) {
          local_1eb = 0;
          local_1ef = 0;
          local_1e3 = 0x15;
          local_1e7 = 0x15;
          local_1fc = (uint ******)0x80000002;
          local_200 = (uint *******)&DAT_00000001;
          local_208._0_1_ = 0;
          local_208._1_1_ = 0;
          local_208._2_2_ = 0x8000;
          local_204 = 0x47;
          bStack_203 = 0x2f;
          uStack_202 = 0x53;
          local_1b3 = 0x15;
          local_1bf = 0;
          local_1b7 = 0x15;
          local_1cc = (uint ******)0x80000002;
          local_1d0 = (uint *******)&DAT_00000001;
          local_1d8._0_1_ = 0;
          local_1d8._1_1_ = 0;
          local_1d8._2_2_ = 0x8000;
          local_1d4 = 0x40;
          bStack_1d3 = 0x2f;
          uStack_1d2 = 0x53;
          local_2c = (uint *******)FUN_01645800;
          local_3c = (uint ******)FUN_01645800;
          local_34 = (uint ******)&LAB_01aba94c;
          local_38 = &local_20c;
          local_1f0 = bVar1;
          local_1c0 = bVar1;
          local_40 = (uint *******)&local_208;
          local_30 = (uint *******)&local_1d8;
          iVar7 = (*pcVar23)(uVar20,&DAT_005a902e,&local_40);
          FUN_01abb3d0(&local_1d8);
          FUN_01abb3d0(&local_208);
          if (iVar7 == 0) goto LAB_01abbe64;
LAB_01abbf84:
          DataMemoryBarrier(0xb);
          do {
            uVar8 = *extraout_r1;
            bVar18 = (bool)hasExclusiveAccess(extraout_r1);
          } while (!bVar18);
          *extraout_r1 = uVar8 - 1;
          if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
            FUN_019a33c4(extraout_r1);
          }
LAB_01abbfa8:
          FUN_01ab4580(&local_50);
          FUN_01abcabc(&local_3a8);
          return 1;
        }
LAB_01abbe64:
        local_1c0 = 0;
        uStack_1be = 0;
        uStack_1ba = 0;
        local_1b3 = 0x15;
        local_1b7 = 0x15;
        local_1cc = (uint ******)0x80000002;
        local_1d0 = (uint *******)&DAT_00000001;
        local_1d4 = 0x4b;
        bStack_1d3 = 0x3b;
        uStack_1d2 = 0x53;
        local_1d8._0_1_ = 0;
        local_1d8._1_1_ = 0;
        local_1d8._2_2_ = 0x8000;
        local_208._0_1_ = SUB41(&local_1d8,0);
        local_208._1_1_ = (byte)((uint)&local_1d8 >> 8);
        local_208._2_2_ = (undefined2)((uint)&local_1d8 >> 0x10);
        local_204 = 0;
        bStack_203 = 0x58;
        uStack_202 = 0x164;
        local_1bf = bVar1;
        iVar7 = (*pcVar23)(uVar20,&DAT_00590e5f,&local_208);
        FUN_01abb3d0(&local_1d8);
        if (iVar7 != 0) goto LAB_01abbf84;
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *extraout_r1;
          bVar18 = (bool)hasExclusiveAccess(extraout_r1);
        } while (!bVar18);
        *extraout_r1 = uVar8 - 1;
        if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
          FUN_019a33c4(extraout_r1);
        }
        FUN_01ab4580(&local_50);
        ppppppuVar24 = local_214;
        bVar18 = true;
      } while (local_218 != local_214);
      FUN_01abcabc(&local_3a8);
      ppppppuVar14 = ppppppuVar24;
LAB_01abc06c:
      iVar7 = (**(code **)(param_3[1] + 0x10))(*param_3,0x20);
      param_2 = ppppppuVar14;
      if (iVar7 != 0) {
        return 1;
      }
    }
  }
LAB_01abc088:
  if (*(char *)((int)param_1 + 1) != '\0') {
    puVar13 = local_3e8;
    if (local_3e8[0] == 2) {
      puVar13 = puVar19;
    }
    uVar8 = puVar13[5];
    local_1d0 = (uint *******)puVar13[6];
    local_1b3 = 0x15;
    local_1b7 = 0x15;
    local_383 = 0x15;
    local_387 = 0x15;
    local_1cc = (uint ******)0x80000002;
    uStack_39c = 2;
    local_39b = 0;
    uStack_39a = 0x8000;
    local_200 = (uint *******)&local_3a8;
    local_1d8._0_1_ = 0;
    local_1d8._1_1_ = 0;
    local_1d8._2_2_ = 0x8000;
    local_1c0 = 0;
    uStack_1be = 0;
    uStack_1ba = 0;
    local_1d4 = (undefined1)uVar8;
    bStack_1d3 = (byte)(uVar8 >> 8);
    uStack_1d2 = (undefined2)(uVar8 >> 0x10);
    local_390 = 0;
    local_38e = 0;
    uStack_38a = 0;
    pppppppuStack_3a0 = (uint *******)&DAT_00000001;
    uStack_3a4 = 0x4b;
    bStack_3a3 = 0x3b;
    uStack_3a2 = 0x53;
    local_3a8._0_2_ = 0;
    local_3a8._2_2_ = 0x8000;
    local_1fc = (uint ******)FUN_01645800;
    local_204 = 0;
    bStack_203 = 0x58;
    uStack_202 = 0x164;
    local_208._0_1_ = SUB41(&local_1d8,0);
    local_208._1_1_ = (byte)((uint)&local_1d8 >> 8);
    local_208._2_2_ = (undefined2)((uint)&local_1d8 >> 0x10);
    local_38f = bVar1;
    local_1bf = bVar1;
    iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_0059e0e4,&local_208);
    FUN_01abb3d0(&local_3a8);
    FUN_01abb3d0(&local_1d8);
    param_2 = param_1;
    if (iVar7 != 0) {
      return 1;
    }
  }
  if (*(char *)((int)param_1 + 6) == '\0') {
    uVar8 = 0;
    ppppppuVar14 = (uint ******)0x1;
  }
  else {
    uVar8 = *puVar12;
    puVar12 = local_3e8;
    if (local_3e8[0] == 2) {
      puVar12 = puVar19;
    }
    param_2 = (uint ******)puVar12[1];
    ppppppuVar14 = (uint ******)(uVar8 ^ 1);
  }
  if (*(char *)((int)param_1 + 5) != '\0') {
    puVar12 = local_3e8;
    if (local_3e8[0] == 2) {
      puVar12 = puVar19;
    }
    uVar17 = puVar12[0xd];
    if (uVar17 != 0) {
      local_40 = (uint *******)&DAT_005319c3;
      puVar12 = local_3e8;
      if (local_3e8[0] == 2) {
        puVar12 = puVar19;
      }
      local_1d0 = (uint *******)puVar12[0xe];
      local_1d4 = (undefined1)uVar17;
      bStack_1d3 = (byte)(uVar17 >> 8);
      uStack_1d2 = (undefined2)(uVar17 >> 0x10);
      local_1cc = (uint ******)0x80000002;
      if (ppppppuVar14 == (uint ******)0x0) {
        local_40 = (uint *******)&DAT_00000001;
      }
      local_1c0 = 0;
      uStack_1be = 0;
      uStack_1ba = 0;
      local_1b3 = 0x15;
      local_1b7 = 0x15;
      local_1d8._0_1_ = 0;
      local_1d8._1_1_ = 0;
      local_1d8._2_2_ = 0x8000;
      local_390 = 0;
      local_38e = 0;
      uStack_38a = 0;
      local_1f8 = (uint *******)&local_40;
      local_383 = 0x15;
      local_387 = 0x15;
      uStack_39c = 2;
      local_39b = 0;
      uStack_39a = 0x8000;
      pppppppuStack_3a0 = (uint *******)&DAT_00000001;
      uStack_3a4 = 0x4b;
      bStack_3a3 = 0x3b;
      uStack_3a2 = 0x53;
      local_3a8._0_2_ = 0;
      local_3a8._2_2_ = 0x8000;
      local_1f4 = (uint *******)&LAB_018a13b8;
      local_200 = (uint *******)&local_3a8;
      local_1fc = (uint ******)FUN_01645800;
      local_204 = 0;
      bStack_203 = 0x58;
      uStack_202 = 0x164;
      local_208._0_1_ = SUB41(&local_1d8,0);
      local_208._1_1_ = (byte)((uint)&local_1d8 >> 8);
      local_208._2_2_ = (undefined2)((uint)&local_1d8 >> 0x10);
      local_38f = bVar1;
      local_1bf = bVar1;
      local_3c = ppppppuVar14;
      iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005a902e,&local_208);
      FUN_01abb3d0(&local_3a8);
      FUN_01abb3d0(&local_1d8);
      if (iVar7 != 0) {
        return 1;
      }
    }
  }
  if (uVar8 != 0) {
    local_208._2_2_ = 0;
    local_204 = 0;
    local_1d8._2_2_ = 0;
    local_1d4 = 0;
    local_208._0_1_ = 0;
    bStack_203 = 0;
    uStack_202 = 0;
    local_1f8 = (uint *******)((uint)local_1f8 & 0xffffff00);
    local_200 = (uint *******)0x1500;
    local_1fc = (uint ******)0x1500;
    local_1d8._0_1_ = 0;
    bStack_1d3 = 0;
    uStack_1d2 = 0;
    pppppppuStack_1c8 = (uint *******)((uint)pppppppuStack_1c8 & 0xffffff00);
    local_1d0 = (uint *******)0x1500;
    local_1cc = (uint ******)0x1500;
    apppppppuStack_398[1] = (uint *******)FUN_01645eec;
    apppppppuStack_398[0] = (uint *******)&local_1d8;
    uStack_39c = 0x2c;
    local_39b = 0xd0;
    uStack_39a = 0x12f;
    pppppppuStack_3a0 = (uint *******)&local_40;
    local_3a8 = (uint ******)&local_208;
    uStack_3a4 = 0xec;
    bStack_3a3 = 0x59;
    uStack_3a2 = 0x164;
    local_208._1_1_ = bVar1;
    local_1d8._1_1_ = bVar1;
    local_40 = (uint *******)param_2;
    iVar7 = (**(code **)(param_3[1] + 0x14))(*param_3,&DAT_005713bb,&local_3a8);
    if (iVar7 != 0) {
      return 1;
    }
  }
  uVar20 = 1;
  pppppppuStack_3a0 = (uint *******)CONCAT31(pppppppuStack_3a0._1_3_,*(undefined1 *)(param_3 + 2));
  uStack_39c = 1;
  local_39b = 0;
  uStack_3a4 = 0xc0;
  bStack_3a3 = 0xf1;
  uStack_3a2 = 0x1d2;
  local_3a8._0_2_ = SUB42(param_3,0);
  local_3a8._2_2_ = (undefined2)((uint)param_3 >> 0x10);
  FUN_01aacd68(*(undefined4 *)(param_4 + 0x10),&local_3a8,&DAT_01d2f1d8);
  if ((local_39b & 1) == 0) {
    uVar20 = (**(code **)(param_3[1] + 0x14))(*param_3,"\n",3);
  }
  return uVar20;
}

