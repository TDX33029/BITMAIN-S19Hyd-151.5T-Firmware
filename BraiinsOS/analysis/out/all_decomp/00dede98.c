// FUN_00dede98 @ 00dede98 size=6460 calls_out=46 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

undefined8 FUN_00dede98(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint ******ppppppuVar4;
  int *piVar5;
  uint ****ppppuVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint ***pppuVar15;
  int extraout_r2;
  undefined *puVar16;
  uint *extraout_r3;
  undefined1 uVar17;
  uint *****pppppuVar18;
  undefined4 *puVar19;
  uint ******ppppppuVar20;
  uint ****ppppuVar21;
  uint *****pppppuVar22;
  undefined4 *puVar23;
  uint ******ppppppuVar24;
  char *pcVar25;
  uint ******ppppppuVar26;
  int iVar27;
  uint ******unaff_r9;
  uint ******ppppppuVar28;
  int *piVar29;
  uint *****pppppuVar30;
  uint *****pppppuVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined4 local_bd0;
  uint *****local_bbc;
  uint ******local_bb4;
  undefined1 *local_bb0;
  int local_bac;
  uint ******local_b90;
  uint ******local_b8c;
  int *local_b88;
  uint ******local_b80;
  int local_b7c;
  uint ******local_b78;
  uint ******local_b74;
  uint ******local_b70;
  undefined4 local_b6c;
  uint ******local_b68;
  uint ******ppppppuStack_b64;
  int *local_b60;
  undefined4 local_9b0;
  undefined1 local_9ac;
  uint ******local_9a8;
  undefined1 *local_9a4;
  uint ******local_9a0;
  uint ******local_99c;
  uint ******local_998;
  undefined4 local_994;
  undefined4 local_990;
  uint ******local_7c8;
  uint ******local_7c4;
  undefined *local_7c0;
  uint ******local_7bc;
  uint ******local_7b8;
  undefined *local_7b4;
  undefined4 *local_5f8;
  uint *****local_5f0;
  uint ******local_5ec;
  uint ******local_420;
  uint ******local_41c;
  uint ******local_418;
  undefined4 local_414;
  uint ******local_410;
  int local_40c;
  uint *****local_408;
  undefined4 local_3f8;
  undefined1 auStack_3f4 [72];
  uint ******local_3ac;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint ****local_210;
  uint ******local_20c;
  uint ******local_200;
  undefined4 *local_1fc;
  undefined4 *local_1f8;
  int *local_2c;
  undefined1 uStack_25;
  
  piVar11 = (int *)(param_1 + 0x10);
  if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar33 = thunk_FUN_016de0ee(0,0x40,param_1,param_1 + 8);
  ppppppuVar24 = (uint ******)((int)uVar33 + (int)((ulonglong)uVar33 >> 0x20));
  pppppuVar18 = (uint *****)*extraout_r3;
  pppppuVar22 = (uint *****)extraout_r3[1];
  if (*(char *)(ppppppuVar24 + 0xe) == '\x01') {
LAB_00dedf3c:
    pppppuVar30 = ppppppuVar24[6];
    local_bbc = ppppppuVar24[7];
    cVar3 = '\x01';
    ppppppuVar24[6] = pppppuVar18;
    ppppppuVar24[7] = pppppuVar22;
  }
  else {
    if (*(char *)(ppppppuVar24 + 0xe) != '\x02') {
      FUN_015e8e6c(ppppppuVar24,FUN_01655ec4);
      *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
      goto LAB_00dedf3c;
    }
    pppppuVar30 = (uint *****)0x0;
    local_bbc = (uint *****)0x0;
    cVar3 = '\x02';
  }
  puVar12 = (undefined4 *)((uint)&local_420 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(extraout_r2 + 0xf0)) {
  case 0:
    *(undefined4 *)(extraout_r2 + 0x2c) = *(undefined4 *)(extraout_r2 + 0x18);
    *(undefined4 *)(extraout_r2 + 0x30) = *(undefined4 *)(extraout_r2 + 0x1c);
    *(undefined4 *)(extraout_r2 + 0x34) = *(undefined4 *)(extraout_r2 + 0x20);
    pppppuVar18 = *(uint ******)(extraout_r2 + 0x24);
    uVar13 = *(undefined4 *)(extraout_r2 + 0x28);
    *(undefined1 *)(extraout_r2 + 0xec) = 0;
    *(uint ******)(extraout_r2 + 0x38) = pppppuVar18;
    *(undefined4 *)(extraout_r2 + 0x3c) = uVar13;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878f38);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878f38);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(extraout_r2 + 0xec)) {
    case 0:
      pppppuVar18 = *(uint ******)(extraout_r2 + 0x38);
      uVar13 = *(undefined4 *)(extraout_r2 + 0x3c);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01878f78);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01878f78);
    case 3:
      ppppppuVar26 = *(uint *******)(extraout_r2 + 0xe4);
      piVar5 = *(int **)(extraout_r2 + 0xe8);
      goto joined_r0x00dee0c8;
    }
  }
  *(undefined4 *)(extraout_r2 + 0x44) = *(undefined4 *)(extraout_r2 + 0x30);
  puVar23 = (undefined4 *)(extraout_r2 + 0x50);
  *puVar23 = uVar13;
  unaff_r9 = (uint ******)(extraout_r2 + 0x4c);
  *unaff_r9 = pppppuVar18;
  local_bb4 = (uint ******)(extraout_r2 + 0x40);
  *local_bb4 = *(uint ******)(extraout_r2 + 0x2c);
  *(undefined4 *)(extraout_r2 + 0x48) = *(undefined4 *)(extraout_r2 + 0x34);
  FUN_015f438c(&local_420,*(undefined4 *)(extraout_r2 + 0x44),*(undefined4 *)(extraout_r2 + 0x48));
  ppppppuVar26 = local_41c;
  if ((((uint)local_420 & 0xff) < 5) && (((uint)local_420 & 0xff) != 3)) {
    pcVar25 = *(char **)(extraout_r2 + 0x44);
    iVar27 = *(int *)(extraout_r2 + 0x48);
    if (iVar27 == 0) goto LAB_00dee070;
LAB_00dee064:
    if (*pcVar25 != '\0') goto LAB_00dee070;
    FUN_016dd606(&local_420,0,0x6b);
    if (iVar27 - 1U < 0x6c) {
      FUN_016dd1aa(&local_420,pcVar25 + 1);
      ppppppuVar26 = local_420;
      FUN_016dd1aa(&local_7c0,(uint)&local_420 | 1,0x6a);
      ppppppuVar26 = (uint ******)((int)ppppppuVar26 << 0x18 | 1);
      local_3ac = (uint ******)(iVar27 + 2);
      goto LAB_00dee188;
    }
    ppppppuVar26 = (uint ******)&SUB_00000002;
    ppppppuVar4 = (uint ******)&DAT_018a4778;
LAB_00dee3d0:
    local_420 = ppppppuVar26;
    local_41c = ppppppuVar4;
    ppppppuVar4 = (uint ******)FUN_00f1d778(&local_420);
LAB_00dee3e4:
    FUN_01663cc4(*puVar23);
    piVar5 = (int *)*puVar23;
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar5;
      bVar32 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar32);
    *piVar5 = iVar27 + -1;
    if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar23);
    }
    pppppuVar22 = *unaff_r9;
    DataMemoryBarrier(0xb);
    pppppuVar18 = pppppuVar22 + 0x11;
    do {
      ppppuVar6 = *pppppuVar18;
      bVar32 = (bool)hasExclusiveAccess(pppppuVar18);
    } while (!bVar32);
    *pppppuVar18 = (uint ****)((int)ppppuVar6 + -1);
    DataMemoryBarrier(0xb);
    if (ppppuVar6 == (uint ****)0x1) {
      pppppuVar18 = pppppuVar22 + 4;
      if (*(char *)pppppuVar18 == '\0') {
        bVar32 = (bool)hasExclusiveAccess(pppppuVar18);
        if (!bVar32) goto LAB_00dee470;
        *(char *)pppppuVar18 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00dee470:
        FUN_01280da8(pppppuVar18);
      }
      FUN_0128236c(pppppuVar18);
      *(undefined1 *)(pppppuVar22 + 0xb) = 1;
      FUN_0072a978(pppppuVar22 + 2,pppppuVar18);
    }
    pppppuVar18 = *unaff_r9;
    DataMemoryBarrier(0xb);
    do {
      ppppuVar6 = *pppppuVar18;
      bVar32 = (bool)hasExclusiveAccess(pppppuVar18);
    } while (!bVar32);
    *pppppuVar18 = (uint ****)((int)ppppuVar6 + -1);
    if (ppppuVar6 == (uint ****)0x1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(*unaff_r9);
    }
    if (*local_bb4 != (uint *****)0x0) {
LAB_00dee4d4:
      thunk_FUN_016d3fb4(*(undefined4 *)(extraout_r2 + 0x44));
    }
  }
  else {
    pppppuVar18 = local_41c[1];
    pppppuVar22 = *local_41c;
    ppppuVar6 = *pppppuVar18;
    if (ppppuVar6 != (uint ****)0x0) {
      (*(code *)ppppuVar6)(pppppuVar22);
    }
    if (pppppuVar18[1] != (uint ****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar22);
    }
    thunk_FUN_016d3fb4(ppppppuVar26);
    pcVar25 = *(char **)(extraout_r2 + 0x44);
    iVar27 = *(int *)(extraout_r2 + 0x48);
    if (iVar27 != 0) goto LAB_00dee064;
LAB_00dee070:
    FUN_015f03ac(&local_420,pcVar25,iVar27);
    ppppppuVar26 = local_41c;
    if (((uint)local_420 & 1) != 0) {
      puVar12 = (undefined4 *)((uint)&local_420 | 4);
      ppppppuVar26 = (uint ******)*puVar12;
      ppppppuVar4 = (uint ******)puVar12[1];
      goto LAB_00dee3d0;
    }
    FUN_016dd1aa(&local_7c0,&local_418,0x6a);
LAB_00dee188:
    local_7c8 = local_3ac;
    local_7c4 = ppppppuVar26;
    FUN_0126ddd8(&local_420,&local_7c8);
    if ((char)local_420 != '\x04') {
      ppppppuVar26 = local_420;
      ppppppuVar4 = local_41c;
      goto LAB_00dee3d0;
    }
    FUN_005c8b90(&local_420,local_41c,&DAT_01878f58);
    ppppppuVar26 = local_41c;
    ppppppuVar4 = local_418;
    if (local_420 == (uint ******)&SUB_00000002) goto LAB_00dee3d0;
    puVar19 = (undefined4 *)(extraout_r2 + 0x54);
    *puVar19 = local_420;
    extraout_r3[0x14] = (uint)local_41c;
    extraout_r3[0x15] = (uint)local_418;
    *(undefined4 *)(extraout_r2 + 0x60) = local_414;
    FUN_015f49f8(&local_420,*(undefined4 *)(extraout_r2 + 0x44),*(undefined4 *)(extraout_r2 + 0x48))
    ;
    if (((char)local_420 != '\x04') && (((uint)local_420 & 0xff) != 4)) {
      ppppppuVar4 = (uint ******)FUN_00f1d778(&local_420);
      FUN_005e6cdc(puVar19);
      if (*(int *)(extraout_r2 + 0x60) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(puVar19);
      goto LAB_00dee3e4;
    }
    if (DAT_018d9130 < 3) {
      unaff_r9 = (uint ******)&DAT_018daa64;
      uVar8 = (uint)DAT_018daab4;
      if (uVar8 - 1 < 2) {
LAB_00dee24c:
        if (uVar8 != 2) {
          puVar16 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          pcVar25 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar27 = (**(code **)(puVar16 + 0x14))(pcVar25);
          if (iVar27 == 0) goto LAB_00dee720;
        }
        local_b70 = (uint ******)(DAT_018daaac + 0x1c);
        if (*(uint *******)(DAT_018daaac + 0x20) == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878f68);
        }
        local_7c0 = *(undefined **)(DAT_018daaac + 0x24);
        local_7bc = *(uint *******)(DAT_018daaac + 0x28);
        local_99c = &local_5f0;
        local_b78 = (uint ******)&local_9a0;
        local_5ec = (uint ******)&local_200;
        puVar16 = &DAT_018ae394;
        local_7b8 = (uint ******)0x0;
        local_b74 = (uint ******)&DAT_00000001;
        local_998 = (uint ******)&DAT_018abb78;
        local_420 = (uint ******)&DAT_00000001;
        local_410 = (uint ******)&local_b78;
        local_5f0 = (uint *****)&DAT_00572d9e;
        local_1fc = &DAT_006043a8;
        local_41c = (uint ******)0x0;
        DataMemoryBarrier(0xb);
        pcVar25 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_9a0 = (uint ******)&local_7c8;
        local_7c8 = (uint ******)*local_b70;
        local_7c4 = *(uint *******)(DAT_018daaac + 0x20);
        local_40c = DAT_018daaac;
        local_200 = local_bb4;
        iVar27 = (**(code **)(puVar16 + 0x28))(pcVar25,&local_420);
        if (iVar27 != 0) {
          (**(code **)(puVar16 + 0x2c))(pcVar25,&local_420);
        }
      }
      else if (uVar8 != 0) {
        uVar8 = FUN_0169ac90(&DAT_018daaac);
        uVar8 = uVar8 & 0xff;
        if (uVar8 != 0) goto LAB_00dee24c;
      }
    }
LAB_00dee720:
    iVar27 = *(int *)(extraout_r2 + 0x50);
    ppppppuVar26 = (uint ******)(extraout_r2 + 0xed);
    *(byte *)ppppppuVar26 = 0;
    uVar8 = *(uint *)(iVar27 + 8);
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(extraout_r2 + 100);
    *piVar5 = extraout_r2 + 0x54;
    cVar3 = *(char *)(ppppppuVar24 + 0xe);
    *(uint *******)(extraout_r2 + 0xe4) = ppppppuVar26;
    *(undefined1 *)(extraout_r2 + 0xe0) = 0;
    *(undefined4 *)(extraout_r2 + 0xdc) = 0;
    *(int **)(extraout_r2 + 0xc0) = (int *)(extraout_r2 + 0x50);
    *(int *)(extraout_r2 + 0xc4) = iVar27 + 8;
    *(uint *)(extraout_r2 + 200) = uVar8 >> 2;
    *(undefined4 *)(extraout_r2 + 0xcc) = 0;
    *(undefined4 *)(extraout_r2 + 0xd0) = 0;
    *(undefined4 *)(extraout_r2 + 0xd4) = 0;
    *(undefined1 *)(extraout_r2 + 0xbc) = 0;
    *(int **)(extraout_r2 + 0xe8) = piVar5;
joined_r0x00dee0c8:
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(ppppppuVar24,FUN_005bc49c);
      *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
    }
    local_bb0 = (undefined1 *)(extraout_r2 + 0xec);
    cVar3 = *(char *)(ppppppuVar24 + 0xc);
    bVar32 = cVar3 == '\x01';
    if (bVar32) {
      cVar3 = *(char *)((int)ppppppuVar24 + 0x31);
    }
    if (bVar32 && cVar3 == '\0') {
      FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00dee4f4:
      *local_bb0 = 3;
      uVar17 = 3;
      iVar27 = 1;
      goto LAB_00deef7c;
    }
    if (((uint)ppppppuVar24[9] & 1) == 0) {
      uVar33 = FUN_0164e918();
      if ((uint)uVar33 < 2) {
        uVar33 = CONCAT44((int)((ulonglong)uVar33 >> 0x20),1);
      }
    }
    else {
      uVar33 = CONCAT44(ppppppuVar24[10],ppppppuVar24[0xb]);
    }
    uVar8 = (uint)((ulonglong)uVar33 >> 0x20);
    pppppuVar22 = (uint *****)uVar33;
    uVar8 = uVar8 ^ uVar8 << 0x11;
    ppppppuVar24[10] = pppppuVar22;
    ppppppuVar24[9] = (uint *****)0x1;
    pppppuVar18 = (uint *****)((uint)pppppuVar22 >> 0x10 ^ uVar8 >> 7 ^ (uint)pppppuVar22 ^ uVar8);
    ppppppuVar24[0xb] = pppppuVar18;
    bVar10 = *(byte *)ppppppuVar26;
    uVar8 = (uint)bVar10;
    if ((int)pppppuVar18 + (int)pppppuVar22 < 0) {
      uVar14 = (uVar8 & 2) >> 1;
      if ((bVar10 & 2) != 0) {
LAB_00dee864:
        if ((uVar8 & 1) != 0) goto LAB_00dee8e4;
        FUN_00dadff4(&local_420,piVar5,param_2);
        if (local_420 != (uint ******)0x3) goto LAB_00dee8f4;
        goto LAB_00dee4f4;
      }
      iVar27 = FUN_016638c8(piVar5 + 0x17,*param_2);
      bVar10 = 2;
      ppppppuVar4 = (uint ******)0x3;
      if (iVar27 != 0) {
        uVar8 = (uint)*(byte *)ppppppuVar26;
        goto LAB_00dee864;
      }
LAB_00dee90c:
      *(byte *)ppppppuVar26 = *(byte *)ppppppuVar26 | bVar10;
    }
    else {
      uVar14 = uVar8 & 1;
      if ((bVar10 & 1) == 0) {
        FUN_00dadff4(&local_420,piVar5,param_2);
        if (local_420 == (uint ******)0x3) {
          uVar8 = (uint)*(byte *)ppppppuVar26;
          goto LAB_00dee8b8;
        }
LAB_00dee8f4:
        bVar10 = 1;
        local_bb4 = local_418;
        local_bd0 = local_414;
        ppppppuVar4 = local_420;
        unaff_r9 = local_41c;
        goto LAB_00dee90c;
      }
LAB_00dee8b8:
      if ((uVar8 & 2) == 0) {
        iVar27 = FUN_016638c8(piVar5 + 0x17,*param_2);
        ppppppuVar4 = (uint ******)0x3;
        bVar10 = 2;
        if (iVar27 == 0) goto LAB_00dee90c;
        goto LAB_00dee4f4;
      }
LAB_00dee8e4:
      ppppppuVar4 = (uint ******)&DAT_00000004;
      if (uVar14 != 1) goto LAB_00dee4f4;
    }
    FUN_00de080c(extraout_r2 + 100);
    puVar7 = (undefined1 *)((int)ppppppuVar4 + -2);
    if (ppppppuVar4 < &SUB_00000002) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 == (undefined1 *)0x0) {
      if (ppppppuVar4 == (uint ******)&SUB_00000002) {
        local_b8c = local_bb4;
        local_b90 = unaff_r9;
        if (DAT_018d9130 < 4) {
          uVar8 = (uint)DAT_018daac0;
          if (1 < uVar8 - 1) {
            if (uVar8 != 0) {
              uVar8 = FUN_0169ac90(&DAT_018daab8);
              uVar8 = uVar8 & 0xff;
              if (uVar8 != 0) goto LAB_00dee974;
            }
            goto LAB_00deed18;
          }
LAB_00dee974:
          if (uVar8 != 2) {
            puVar16 = &DAT_018ae394;
            DataMemoryBarrier(0xb);
            pcVar25 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar27 = (**(code **)(puVar16 + 0x14))(pcVar25);
            if (iVar27 == 0) goto LAB_00deed18;
          }
          ppppppuVar26 = *(uint *******)(DAT_018daab8 + 0x1c);
          ppppppuVar4 = *(uint *******)(DAT_018daab8 + 0x20);
          if (ppppppuVar4 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878f98);
          }
          local_b70 = *(uint *******)(DAT_018daab8 + 0x24);
          local_b6c = *(undefined4 *)(DAT_018daab8 + 0x28);
          local_b68 = (uint ******)0x0;
          local_5ec = (uint ******)&DAT_0000001b;
          local_5f0 = (uint *****)&DAT_0035834c;
          local_b78 = ppppppuVar26;
          local_b74 = ppppppuVar4;
          if (ppppppuVar4 == (uint ******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878f98);
          }
          local_7b8 = (uint ******)&local_b80;
          local_7bc = (uint ******)&local_9a0;
          local_7c4 = &local_5f0;
          local_7c8 = (uint ******)&local_b78;
          local_200 = (uint ******)&local_7c8;
          local_1fc = (undefined4 *)0x2;
          local_b80 = (uint ******)&local_b90;
          local_410 = (uint ******)&local_200;
          local_990 = 1;
          puVar16 = &DAT_018ae394;
          local_7b4 = &DAT_0187b3ac;
          local_7c0 = &DAT_018abb78;
          local_41c = (uint ******)0x0;
          local_420 = (uint ******)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar25 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_9a0 = ppppppuVar26;
          local_99c = ppppppuVar4;
          local_998 = local_b70;
          local_994 = local_b6c;
          local_40c = DAT_018daab8;
          local_1f8 = (undefined4 *)(DAT_018daab8 + 0x1c);
          iVar27 = (**(code **)(puVar16 + 0x28))(pcVar25,&local_420);
          if (iVar27 != 0) {
            (**(code **)(puVar16 + 0x2c))(pcVar25,&local_420);
          }
          ppppppuVar26 = local_b8c;
        }
        else {
LAB_00deed18:
          ppppppuVar26 = local_b8c;
        }
        local_b8c = ppppppuVar26;
        if ((char)local_b90 == '\x03') {
          pppppuVar18 = *ppppppuVar26;
          pppppuVar22 = ppppppuVar26[1];
          ppppuVar6 = *pppppuVar22;
          if (ppppuVar6 != (uint ****)0x0) {
            (*(code *)ppppuVar6)(pppppuVar18);
          }
          if (pppppuVar22[1] != (uint ****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar18);
          }
          thunk_FUN_016d3fb4(ppppppuVar26);
        }
      }
      else {
        piVar5 = *(int **)(extraout_r2 + 0x4c);
        do {
          iVar27 = *piVar5;
          bVar32 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar32);
        *piVar5 = iVar27 + 1;
        if (iVar27 < 0) goto LAB_00def9bc;
        piVar29 = piVar5 + 4;
        if ((char)*piVar29 == '\0') {
          bVar32 = (bool)hasExclusiveAccess(piVar29);
          if (!bVar32) goto LAB_00deeb80;
          *(char *)piVar29 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_00deeb80:
          FUN_01280da8(piVar29);
        }
        FUN_0128236c(piVar29);
        iVar27 = piVar5[10];
        if (iVar27 == 0) {
          *(undefined1 *)(piVar5 + 0xb) = 0;
        }
        else {
          if (iVar27 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("max receivers",0x1b,&DAT_0187ab30);
          }
          if (iVar27 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187ab40);
          }
        }
        ppppppuVar26 = (uint ******)piVar5[6];
        ppppppuVar28 = (uint ******)piVar5[7];
        piVar5[10] = iVar27 + 1;
        FUN_01282570(piVar29);
        if ((char)*piVar29 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar32 = (bool)hasExclusiveAccess(piVar29);
            if (bVar32) {
              *(char *)piVar29 = '\0';
              goto LAB_00deec20;
            }
          } while ((char)*piVar29 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(piVar29);
LAB_00deec20:
        local_b90 = ppppppuVar26;
        local_b8c = ppppppuVar28;
        local_b88 = piVar5;
        local_9b0 = FUN_01663af4(*(undefined4 *)(extraout_r2 + 0x50));
        do {
          do {
            local_b80 = DAT_018d9200;
            local_b7c = DAT_018d9204;
            ppppppuVar20 = (uint ******)((int)DAT_018d9200 + 1);
            iVar27 = DAT_018d9204 + (uint)((uint ******)0xfffffffe < DAT_018d9200);
            bVar32 = (bool)hasExclusiveAccess(0x18d9200);
          } while (!bVar32);
          bVar32 = DAT_018d9200 == (uint ******)0x0;
          bVar2 = DAT_018d9204 == 0;
          DAT_018d9200 = ppppppuVar20;
          DAT_018d9204 = iVar27;
        } while (bVar32 && bVar2);
        local_b70 = local_bb4;
        local_9a4 = &uStack_25;
        local_9a8 = (uint ******)&local_b80;
        local_9ac = 0;
        local_b6c = local_bd0;
        local_b78 = ppppppuVar4;
        local_b74 = unaff_r9;
        local_b68 = ppppppuVar26;
        ppppppuStack_b64 = ppppppuVar28;
        local_b60 = piVar5;
        if (*(char *)(ppppppuVar24 + 0xe) != '\x01') {
          if (*(char *)(ppppppuVar24 + 0xe) == '\x02') {
            uVar17 = 1;
            FUN_00e4bcd4(&local_b78);
            goto LAB_00deecd8;
          }
          FUN_015e8e6c(ppppppuVar24,FUN_005bc49c);
          *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
        }
        FUN_016dd1aa(&local_9a0,&local_b78,0x1d8);
        if ((uint *****)0x7ffffffe < *ppppppuVar24) {
          FUN_00fb71b0(&DAT_018accb0);
          goto LAB_00def9bc;
        }
        *ppppppuVar24 = (uint *****)((int)*ppppppuVar24 + 1);
        pppppuVar18 = ppppppuVar24[1];
        FUN_016dd1aa(&local_7c8,&local_b78,0x1d8);
        if (pppppuVar18 == (uint *****)0x2) {
          FUN_00e4bcd4(&local_7c8);
          uVar17 = 0;
          *ppppppuVar24 = (uint *****)((int)*ppppppuVar24 - 1);
LAB_00deecd8:
          local_7c8 = (uint ******)CONCAT31(local_7c8._1_3_,uVar17);
          local_41c = (uint ******)&LAB_0164eda0;
          local_420 = (uint ******)&local_7c8;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00590e71,&local_420,&DAT_01878f88);
        }
        FUN_016dd1aa(&local_5f0,&local_b78,0x1d0);
        ppppppuVar4 = (uint ******)*local_5f8;
        ppppppuVar26 = (uint ******)local_5f8[1];
        if (((uint)pppppuVar18 & 1) == 0) {
          pppppuVar18 = ppppppuVar24[2];
          do {
            ppppuVar6 = *pppppuVar18;
            bVar32 = (bool)hasExclusiveAccess(pppppuVar18);
          } while (!bVar32);
          *pppppuVar18 = (uint ****)((int)ppppuVar6 + 1);
          if ((int)ppppuVar6 < 0) goto LAB_00def9bc;
          ppppuVar6 = pppppuVar18[0x8e];
          ppppuVar21 = (uint ****)0x0;
          ppppppuVar28 = ppppppuVar24;
          if (ppppuVar6 != (uint ****)0x0) {
            do {
              pppuVar15 = *ppppuVar6;
              bVar32 = (bool)hasExclusiveAccess(ppppuVar6);
            } while (!bVar32);
            *ppppuVar6 = (uint ***)((int)pppuVar15 + 1);
            if ((int)pppuVar15 < 0) goto LAB_00def9bc;
            ppppuVar21 = pppppuVar18[0x8e];
            ppppppuVar28 = (uint ******)pppppuVar18[0x8f];
          }
          FUN_016dd1aa((uint)&local_200 | 4,&local_5f0,0x1d0);
          local_418 = (uint ******)&PTR_LAB_0187931c;
          local_420 = (uint ******)0xcc;
          puVar12[4] = ppppppuVar4;
          puVar12[5] = ppppppuVar26;
          *puVar12 = 0;
          puVar12[1] = 0;
          local_41c = (uint ******)0x0;
          local_3f8 = 0;
          local_408 = pppppuVar18;
          FUN_016dd1aa(auStack_3f4,&local_200,0x1d4);
          local_218 = 0;
          local_21c = 0;
          local_220 = 0;
          local_2c = (int *)0x0;
          local_210 = ppppuVar21;
          local_20c = ppppppuVar28;
          iVar27 = FUN_016d51b0(&local_2c,0x20,0x220);
          piVar5 = local_2c;
          if ((iVar27 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(0x20,0x220);
          }
          FUN_016dd1aa(local_2c,&local_420,0x220);
          iVar27 = FUN_00ee0238(pppppuVar18 + 0x40,piVar5,piVar5);
          local_420 = ppppppuVar4;
          local_41c = ppppppuVar26;
          if (pppppuVar18[0x8c] != (uint ****)0x0) {
            (*(code *)pppppuVar18[0x8d][5])
                      ((int)pppppuVar18[0x8c] + ((int)pppppuVar18[0x8d][2] - 1U & 0xfffffff8) + 8,
                       &local_420);
          }
          if (iVar27 != 0) {
            FUN_01659ec0(ppppppuVar24[2],iVar27);
          }
        }
        else {
          pppppuVar18 = ppppppuVar24[2];
          do {
            ppppuVar6 = *pppppuVar18;
            bVar32 = (bool)hasExclusiveAccess(pppppuVar18);
          } while (!bVar32);
          *pppppuVar18 = (uint ****)((int)ppppuVar6 + 1);
          if ((int)ppppuVar6 < 0) {
LAB_00def9bc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xdef9bc);
            (*pcVar1)();
          }
          ppppuVar6 = pppppuVar18[0x5c];
          ppppuVar21 = (uint ****)0x0;
          if (ppppuVar6 != (uint ****)0x0) {
            do {
              pppuVar15 = *ppppuVar6;
              bVar32 = (bool)hasExclusiveAccess(ppppuVar6);
            } while (!bVar32);
            *ppppuVar6 = (uint ***)((int)pppuVar15 + 1);
            if ((int)pppuVar15 < 0) goto LAB_00def9bc;
            ppppuVar21 = pppppuVar18[0x5c];
            ppppppuVar28 = (uint ******)pppppuVar18[0x5d];
          }
          FUN_016dd1aa((uint)&local_200 | 4,&local_5f0,0x1d0);
          local_418 = (uint ******)&PTR_LAB_0187945c;
          local_420 = (uint ******)0xcc;
          puVar12[4] = ppppppuVar4;
          puVar12[5] = ppppppuVar26;
          *puVar12 = 0;
          puVar12[1] = 0;
          local_41c = (uint ******)0x0;
          local_3f8 = 0;
          local_408 = pppppuVar18;
          FUN_016dd1aa(auStack_3f4,&local_200,0x1d4);
          local_218 = 0;
          local_21c = 0;
          local_220 = 0;
          local_2c = (int *)0x0;
          local_210 = ppppuVar21;
          local_20c = ppppppuVar28;
          iVar27 = FUN_016d51b0(&local_2c,0x20,0x220);
          piVar5 = local_2c;
          if ((iVar27 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(0x20,0x220);
          }
          FUN_016dd1aa(local_2c,&local_420,0x220);
          ppppppuVar28 = (uint ******)FUN_00ee0238(pppppuVar18 + 0x14,piVar5,piVar5);
          local_420 = ppppppuVar4;
          local_41c = ppppppuVar26;
          if (pppppuVar18[0x5a] != (uint ****)0x0) {
            (*(code *)pppppuVar18[0x5b][5])
                      ((int)pppppuVar18[0x5a] + ((int)pppppuVar18[0x5b][2] - 1U & 0xfffffff8) + 8,
                       &local_420);
          }
          if (ppppppuVar28 != (uint ******)0x0) {
            local_200 = (uint ******)((uint)local_200 & 0xffffff00);
            local_418 = (uint ******)&local_200;
            local_420 = (uint ******)(pppppuVar18 + 2);
            local_41c = ppppppuVar28;
            FUN_0164511c(&local_420);
          }
        }
        *ppppppuVar24 = (uint *****)((int)*ppppppuVar24 - 1);
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar32 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar32) goto LAB_00def868;
          *piVar5 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00def868:
          (**(code **)(piVar5[2] + 0x10))(piVar5);
        }
      }
      goto LAB_00dee720;
    }
    if (puVar7 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878fb8);
    }
    if (DAT_018d9130 < 3) {
      uVar8 = (uint)DAT_018daaa8;
      if (uVar8 - 1 < 2) {
LAB_00deefdc:
        if (uVar8 != 2) {
          DataMemoryBarrier(0xb);
          pcVar25 = s_SetGloba_00414c05;
          puVar16 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar27 = (**(code **)(puVar16 + 0x14))(pcVar25);
          if (iVar27 == 0) goto LAB_00def1fc;
        }
        if (*(uint *******)(DAT_018daaa0 + 0x20) == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878fa8);
        }
        local_99c = (uint ******)&local_200;
        local_7c0 = *(undefined **)(DAT_018daaa0 + 0x24);
        local_7bc = *(uint *******)(DAT_018daaa0 + 0x28);
        local_9a0 = (uint ******)&local_7c8;
        local_b78 = (uint ******)&local_9a0;
        local_7b8 = (uint ******)0x0;
        local_b74 = (uint ******)&DAT_00000001;
        local_420 = (uint ******)&DAT_00000001;
        local_410 = (uint ******)&local_b78;
        local_998 = (uint ******)&DAT_018abb78;
        local_1fc = (undefined4 *)0x53;
        local_200 = (uint ******)&DAT_00358359;
        local_41c = (uint ******)0x0;
        DataMemoryBarrier(0xb);
        pcVar25 = s_SetGloba_00414c05;
        puVar16 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_b70 = (uint ******)(DAT_018daaa0 + 0x1c);
        local_7c8 = *(uint *******)(DAT_018daaa0 + 0x1c);
        local_7c4 = *(uint *******)(DAT_018daaa0 + 0x20);
        local_40c = DAT_018daaa0;
        iVar27 = (**(code **)(puVar16 + 0x28))(pcVar25,&local_420);
        if (iVar27 != 0) {
          (**(code **)(puVar16 + 0x2c))(pcVar25,&local_420);
        }
      }
      else if (uVar8 != 0) {
        uVar8 = FUN_0169ac90(&DAT_018daaa0);
        uVar8 = uVar8 & 0xff;
        if (uVar8 != 0) goto LAB_00deefdc;
      }
    }
LAB_00def1fc:
    FUN_005e6cdc(extraout_r2 + 0x54);
    if (*(int *)(extraout_r2 + 0x60) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(extraout_r2 + 0x54);
    puVar12 = (undefined4 *)(extraout_r2 + 0x50);
    FUN_01663cc4(*puVar12);
    piVar5 = (int *)*puVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar5;
      bVar32 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar32);
    *piVar5 = iVar27 + -1;
    if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar12);
    }
    piVar29 = (int *)(extraout_r2 + 0x4c);
    iVar27 = *piVar29;
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(iVar27 + 0x44);
    do {
      iVar9 = *piVar5;
      bVar32 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar32);
    *piVar5 = iVar9 + -1;
    DataMemoryBarrier(0xb);
    if (iVar9 == 1) {
      pcVar25 = (char *)(iVar27 + 0x10);
      if (*pcVar25 == '\0') {
        bVar32 = (bool)hasExclusiveAccess(pcVar25);
        if (!bVar32) goto LAB_00def2c8;
        *pcVar25 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00def2c8:
        FUN_01280da8(pcVar25);
      }
      FUN_0128236c(pcVar25);
      *(undefined1 *)(iVar27 + 0x2c) = 1;
      FUN_0072a978(iVar27 + 8,pcVar25);
    }
    piVar5 = (int *)*piVar29;
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar5;
      bVar32 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar32);
    *piVar5 = iVar27 + -1;
    if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e454dc(*piVar29);
    }
    if (*(int *)(extraout_r2 + 0x40) != 0) {
      ppppppuVar4 = (uint ******)0x0;
      goto LAB_00dee4d4;
    }
    ppppppuVar4 = (uint ******)0x0;
  }
  local_bac = extraout_r2 + 0x2c;
  local_bb0 = (undefined1 *)(extraout_r2 + 0xec);
  *local_bb0 = 1;
  FUN_00de0458(local_bac);
  iVar27 = 0;
  ppppppuVar26 = (uint ******)0x0;
  local_b80 = ppppppuVar4;
  if (ppppppuVar4 != (uint ******)0x0) {
    local_b90 = (uint ******)&local_b80;
    if (DAT_018d9130 < 4) {
      uVar8 = (uint)DAT_018daa9c;
      if (uVar8 - 1 < 2) {
LAB_00deedc4:
        if (uVar8 != 2) {
          puVar16 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          pcVar25 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar9 = (**(code **)(puVar16 + 0x14))(pcVar25);
          if (iVar9 == 0) goto LAB_00deef70;
        }
        if (*(int *)(DAT_018daa94 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878f48);
        }
        local_7c4 = *(uint *******)(DAT_018daa94 + 0x20);
        local_7c0 = *(undefined **)(DAT_018daa94 + 0x24);
        local_7bc = *(uint *******)(DAT_018daa94 + 0x28);
        local_9a0 = (uint ******)&local_7c8;
        local_99c = &local_5f0;
        local_b70 = (uint ******)(DAT_018daa94 + 0x1c);
        local_7c8 = (uint ******)*local_b70;
        local_5ec = (uint ******)&local_200;
        local_200 = (uint ******)&local_b90;
        local_7b8 = (uint ******)0x0;
        local_998 = (uint ******)&DAT_018abb78;
        local_b78 = (uint ******)&local_9a0;
        local_5f0 = (uint *****)&DAT_00591ec0;
        local_1fc = (undefined4 *)&LAB_00f1eff0;
        local_b74 = (uint ******)&DAT_00000001;
        local_420 = (uint ******)&DAT_00000001;
        local_410 = (uint ******)&local_b78;
        local_41c = (uint ******)0x0;
        DataMemoryBarrier(0xb);
        pcVar25 = s_SetGloba_00414c05;
        puVar16 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar25 = DAT_018daa74, puVar16 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_40c = DAT_018daa94;
        iVar9 = (**(code **)(puVar16 + 0x28))(pcVar25,&local_420);
        if (iVar9 != 0) {
          (**(code **)(puVar16 + 0x2c))(pcVar25,&local_420);
        }
      }
      else if (uVar8 != 0) {
        uVar8 = FUN_0169ac90(&DAT_018daa94);
        uVar8 = uVar8 & 0xff;
        if (uVar8 != 0) goto LAB_00deedc4;
      }
    }
LAB_00deef70:
    ppppppuVar26 = local_b80;
  }
  uVar17 = 1;
LAB_00deef7c:
  *(undefined1 *)(extraout_r2 + 0xf0) = uVar17;
  if (*(char *)(ppppppuVar24 + 0xe) == '\x01') {
LAB_00def36c:
    ppppppuVar24[6] = pppppuVar30;
    ppppppuVar24[7] = local_bbc;
    cVar3 = '\x01';
    if (iVar27 != 0) goto LAB_00def410;
  }
  else {
    if (*(char *)(ppppppuVar24 + 0xe) != '\x02') {
      FUN_015e8e6c(ppppppuVar24,FUN_01655ec4);
      *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
      goto LAB_00def36c;
    }
    if (iVar27 != 0) goto LAB_00def410;
    cVar3 = '\x02';
  }
  local_420 = (uint ******)0x2;
  pppppuVar18 = (uint *****)*extraout_r3;
  pppppuVar22 = (uint *****)extraout_r3[1];
  if (cVar3 == '\x01') {
LAB_00def3cc:
    pppppuVar31 = ppppppuVar24[6];
    pppppuVar30 = ppppppuVar24[7];
    ppppppuVar24[6] = pppppuVar18;
    ppppppuVar24[7] = pppppuVar22;
  }
  else {
    pppppuVar31 = (uint *****)0x0;
    pppppuVar30 = (uint *****)0x0;
    if (cVar3 != '\x02') {
      FUN_015e8e6c(ppppppuVar24,FUN_01655ec4);
      *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
      goto LAB_00def3cc;
    }
  }
  FUN_00de0200(piVar11);
  FUN_016dd1aa(piVar11,&local_420,0xe8);
  if (*(char *)(ppppppuVar24 + 0xe) != '\x01') {
    if (*(char *)(ppppppuVar24 + 0xe) == '\x02') {
LAB_00def410:
      return CONCAT44(ppppppuVar26,iVar27);
    }
    FUN_015e8e6c(ppppppuVar24,FUN_01655ec4);
    *(undefined1 *)(ppppppuVar24 + 0xe) = 1;
  }
  ppppppuVar24[6] = pppppuVar31;
  ppppppuVar24[7] = pppppuVar30;
  return CONCAT44(ppppppuVar26,iVar27);
}

