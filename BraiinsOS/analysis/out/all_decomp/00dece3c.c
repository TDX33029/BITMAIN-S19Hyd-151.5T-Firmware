// FUN_00dece3c @ 00dece3c size=3032 calls_out=20 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

bool FUN_00dece3c(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int *******pppppppiVar8;
  undefined4 ******ppppppuVar9;
  undefined ***pppuVar10;
  char *pcVar11;
  int ******ppppppiVar12;
  int *******pppppppiVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 uVar17;
  int ******ppppppiVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  int *piVar22;
  undefined ***pppuVar23;
  uint uVar24;
  int *piVar25;
  char *pcVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  undefined *puVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  uint local_3b90;
  uint local_3b8c;
  int local_3b60;
  undefined4 local_3b50;
  undefined4 local_3b4c;
  int local_3b48;
  undefined *local_3b44 [37];
  undefined4 local_3ab0;
  undefined4 uStack_3aac;
  int iStack_3aa8;
  undefined1 auStack_3aa4 [148];
  undefined4 ******local_3a10;
  undefined ***local_3a0c;
  undefined **ppuStack_3a08;
  undefined4 uStack_3a04;
  int *******pppppppiStack_3a00;
  int iStack_39fc;
  int *local_39f8;
  undefined4 uStack_39f4;
  undefined4 uStack_39f0;
  undefined4 uStack_39ec;
  undefined4 uStack_39e8;
  undefined4 uStack_39e4;
  uint local_39e0;
  int local_39dc;
  undefined4 *******local_39d8;
  int local_39d4;
  int *local_39d0;
  undefined4 local_3938;
  int iStack_3934;
  undefined4 local_3930;
  undefined4 ******local_392c;
  undefined ***pppuStack_3928;
  undefined **ppuStack_3924;
  undefined4 uStack_3920;
  int *******pppppppiStack_391c;
  int iStack_3918;
  int *local_3914;
  undefined4 uStack_3910;
  undefined4 uStack_390c;
  undefined4 uStack_3908;
  undefined4 uStack_3904;
  undefined4 uStack_3900;
  int *local_38fc;
  int *local_38f8;
  undefined1 local_3060;
  uint *local_3058;
  undefined1 *local_3054;
  int *******local_3050;
  int ******local_304c;
  int *local_3048;
  int local_3044;
  int *local_3040;
  int local_303c;
  int *local_3038;
  int local_3034;
  undefined4 *******local_26c8;
  int local_26c4;
  int *local_26c0;
  int *******local_26bc;
  int ******local_26b8;
  undefined4 *local_1d48;
  undefined **local_1d40;
  undefined1 *local_1d3c;
  int *******local_13c0;
  undefined ***local_13bc;
  undefined **local_13b8;
  undefined4 uStack_13b4;
  int *******local_13b0;
  int local_13ac;
  int *local_13a8;
  undefined4 uStack_13a4;
  undefined4 uStack_13a0;
  undefined4 uStack_139c;
  undefined4 local_1398;
  undefined4 auStack_1394 [609];
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  int local_a00;
  int local_9fc;
  undefined *local_9d0 [610];
  int *local_48;
  undefined1 auStack_41 [29];
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  puVar20 = (undefined4 *)((uint)&local_13c0 | 0x10);
  uVar32 = thunk_FUN_016de0ee(param_1,0x40);
  puVar29 = (uint *)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
  uVar24 = *(uint *)(param_1 + 8);
  uVar27 = *(uint *)(param_1 + 0xc);
  if ((char)puVar29[0xe] != '\x01') {
    local_3b8c = 0;
    local_3b90 = 0;
    if ((char)puVar29[0xe] == '\x02') goto LAB_00dececc;
    FUN_015e8e6c(puVar29,FUN_01655ec4);
    *(undefined1 *)(puVar29 + 0xe) = 1;
  }
  local_3b8c = puVar29[6];
  local_3b90 = puVar29[7];
  puVar29[6] = uVar24;
  puVar29[7] = uVar27;
LAB_00dececc:
  piVar6 = (int *)((uint)&local_13c0 | 4);
LAB_00decf64:
  do {
    FUN_00ec0ba0(&local_3b50,param_1 + 0x18,param_2);
    if (local_3b48 == 5) break;
    if (local_3b48 == 3) {
      local_9d0[0] = local_3b44[0];
      if (DAT_018d9130 < 4) {
        uVar24 = (uint)DAT_018da988;
        if (uVar24 - 1 < 2) {
LAB_00ded720:
          puVar30 = &DAT_018ae394;
          pcVar26 = s_SetGloba_00414c05;
          if (uVar24 != 2) {
            DataMemoryBarrier(0xb);
            pcVar11 = pcVar26;
            puVar5 = puVar30;
            if ((DAT_018dd984 == 2) &&
               (pcVar11 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar7 = (**(code **)(puVar5 + 0x14))(pcVar11);
            if (iVar7 == 0) goto LAB_00ded8ec;
          }
          if (*(int *)(DAT_018da980 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01856820);
          }
          local_304c = (int ******)&local_3a10;
          local_26c4 = *(int *)(DAT_018da980 + 0x20);
          local_26c0 = *(int **)(DAT_018da980 + 0x24);
          local_26bc = *(int ********)(DAT_018da980 + 0x28);
          local_3050 = (int *******)&local_26c8;
          local_39d0 = (int *)(DAT_018da980 + 0x1c);
          local_26c8 = (undefined4 *******)*local_39d0;
          local_3a0c = &local_1d40;
          local_3048 = (int *)&DAT_018abb78;
          local_26b8 = (int ******)0x0;
          local_3a10 = (undefined4 ******)&DAT_005735cd;
          local_1d40 = local_9d0;
          local_1d3c = &LAB_00f21080;
          local_39d8 = &local_3050;
          local_39d4 = 1;
          local_13c0 = (int *******)&DAT_00000001;
          local_13b0 = (int *******)&local_39d8;
          local_13bc = (undefined ***)0x0;
          DataMemoryBarrier(0xb);
          if ((DAT_018dd984 == 2) &&
             (pcVar26 = DAT_018daa74, puVar30 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_13ac = DAT_018da980;
          iVar7 = (**(code **)(puVar30 + 0x28))(pcVar26,&local_13c0);
          if (iVar7 != 0) {
            (**(code **)(puVar30 + 0x2c))(pcVar26,&local_13c0);
          }
        }
        else if (uVar24 != 0) {
          uVar24 = FUN_0169ac90(&DAT_018da980);
          uVar24 = uVar24 & 0xff;
          if (uVar24 != 0) goto LAB_00ded720;
        }
      }
LAB_00ded8ec:
      FUN_005c6044(local_9d0);
      break;
    }
    if (local_3b48 == 4) break;
    local_3ab0 = local_3b50;
    uStack_3aac = local_3b4c;
    iStack_3aa8 = local_3b48;
    FUN_016dd1aa(auStack_3aa4,local_3b44,0x94);
    piVar25 = *(int **)(param_1 + 0x160);
    do {
      iVar7 = *piVar25;
      bVar3 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar3);
    *piVar25 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_00ded9e0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xded9e0);
      (*pcVar1)();
    }
    uVar21 = *(undefined4 *)(param_1 + 0x128);
    ppppppiVar18 = *(int *******)(param_1 + 0x140);
    uVar31 = *(undefined4 *)(param_1 + 0x120);
    local_3b60 = *(int *)(param_1 + 0x124);
    pppppppiVar8 = *(int ********)(param_1 + 0x13c);
    do {
      ppppppiVar12 = *pppppppiVar8;
      bVar3 = (bool)hasExclusiveAccess(pppppppiVar8);
    } while (!bVar3);
    *pppppppiVar8 = (int ******)((int)ppppppiVar12 + 1);
    if ((int)ppppppiVar12 < 0) goto LAB_00ded9e0;
    pppppppiVar13 = pppppppiVar8 + 0x31;
    do {
      bVar3 = (bool)hasExclusiveAccess(pppppppiVar13);
    } while (!bVar3);
    *pppppppiVar13 = (int ******)((int)*pppppppiVar13 + 1);
    piVar16 = *(int **)(param_1 + 0x144);
    iVar7 = *(int *)(param_1 + 0x148);
    do {
      iVar14 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = iVar14 + 1;
    if (iVar14 < 0) goto LAB_00ded9e0;
    piVar19 = piVar16 + 0x29;
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar3);
    *piVar19 = *piVar19 + 1;
    piVar19 = *(int **)(param_1 + 0x14c);
    iVar14 = *(int *)(param_1 + 0x150);
    do {
      iVar15 = *piVar19;
      bVar3 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar3);
    *piVar19 = iVar15 + 1;
    if (iVar15 < 0) goto LAB_00ded9e0;
    piVar22 = piVar19 + 0x31;
    do {
      bVar3 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar3);
    *piVar22 = *piVar22 + 1;
    piVar22 = *(int **)(param_1 + 0x154);
    uVar2 = *(undefined2 *)(param_1 + 0x158);
    do {
      iVar15 = *piVar22;
      bVar3 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar3);
    *piVar22 = iVar15 + 1;
    if (iVar15 < 0) goto LAB_00ded9e0;
    local_3034 = CONCAT22(local_3034._2_2_,uVar2);
    piVar28 = *(int **)(param_1 + 0x15c);
    local_3050 = pppppppiVar8;
    local_304c = ppppppiVar18;
    local_3048 = piVar16;
    local_3044 = iVar7;
    local_3040 = piVar19;
    local_303c = iVar14;
    local_3038 = piVar22;
    if (piVar28 != (int *)0x0) {
      do {
        iVar7 = *piVar28;
        bVar3 = (bool)hasExclusiveAccess(piVar28);
      } while (!bVar3);
      *piVar28 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00ded9e0;
    }
    FUN_00f206e4(&local_39d8,*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138));
    local_26bc = local_3050;
    local_26b8 = local_304c;
    local_26c4 = local_39d4;
    local_26c8 = local_39d8;
    local_26c0 = local_39d0;
    *piVar6 = (int)local_39d8;
    piVar6[1] = local_39d4;
    piVar6[2] = (int)local_39d0;
    piVar6[3] = (int)local_3050;
    piVar6[4] = (int)local_304c;
    piVar6[5] = (int)local_3048;
    piVar6[6] = local_3044;
    piVar6[7] = (int)local_3040;
    piVar6[8] = local_303c;
    piVar6[9] = (int)local_3038;
    piVar6[10] = local_3034;
    local_3a10 = local_13c0;
    local_3a0c = local_13bc;
    ppuStack_3a08 = local_13b8;
    uStack_3a04 = uStack_13b4;
    pppppppiStack_3a00 = local_13b0;
    iStack_39fc = local_13ac;
    local_39f8 = local_13a8;
    uStack_39f4 = uStack_13a4;
    uStack_39f0 = uStack_13a0;
    uStack_39ec = uStack_139c;
    uStack_39e8 = local_1398;
    uStack_39e4 = auStack_1394[0];
    do {
      do {
        local_39e0 = DAT_018d9200;
        local_39dc = DAT_018d9204;
        uVar24 = DAT_018d9200 + 1;
        iVar7 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
        bVar3 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar3);
      bVar3 = DAT_018d9200 == 0;
      bVar4 = DAT_018d9204 == 0;
      DAT_018d9200 = uVar24;
      DAT_018d9204 = iVar7;
    } while (bVar3 && bVar4);
    FUN_016dd1aa(&local_39d8,&local_3ab0,0xa0);
    local_392c = local_3a10;
    pppuStack_3928 = local_3a0c;
    ppuStack_3924 = ppuStack_3a08;
    uStack_3920 = uStack_3a04;
    pppppppiStack_391c = pppppppiStack_3a00;
    iStack_3918 = iStack_39fc;
    local_3914 = local_39f8;
    uStack_3910 = uStack_39f4;
    uStack_390c = uStack_39f0;
    uStack_3908 = uStack_39ec;
    uStack_3904 = uStack_39e8;
    uStack_3900 = uStack_39e4;
    local_3054 = auStack_41;
    local_3058 = &local_39e0;
    local_3060 = 0;
    local_3930 = uVar21;
    local_38fc = piVar28;
    local_38f8 = piVar25;
    local_3938 = uVar31;
    iStack_3934 = local_3b60;
    if ((char)puVar29[0xe] != '\x01') {
      if ((char)puVar29[0xe] == '\x02') {
        uVar17 = 1;
        FUN_00e4c1a8(&local_39d8);
        goto LAB_00ded698;
      }
      FUN_015e8e6c(puVar29,FUN_005bc49c);
      *(undefined1 *)(puVar29 + 0xe) = 1;
    }
    FUN_016dd1aa(&local_3050,&local_39d8,0x988);
    if (0x7ffffffe < *puVar29) {
      FUN_00fb71b0(&DAT_018accb0);
      goto LAB_00ded9e0;
    }
    *puVar29 = *puVar29 + 1;
    uVar24 = puVar29[1];
    FUN_016dd1aa(&local_26c8,&local_39d8,0x988);
    if (uVar24 == 2) {
      FUN_00e4c1a8(&local_26c8);
      uVar17 = 0;
      *puVar29 = *puVar29 - 1;
LAB_00ded698:
      local_26c8 = (undefined4 *******)CONCAT31(local_26c8._1_3_,uVar17);
      local_13c0 = (int *******)&local_26c8;
      local_13bc = (undefined ***)&LAB_0164eda0;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_13c0,&DAT_01856810);
    }
    FUN_016dd1aa(&local_1d40,&local_39d8,0x980);
    ppppppuVar9 = (undefined4 ******)*local_1d48;
    pppuVar23 = (undefined ***)local_1d48[1];
    if ((uVar24 & 1) == 0) {
      piVar25 = (int *)puVar29[2];
      do {
        iVar7 = *piVar25;
        bVar3 = (bool)hasExclusiveAccess(piVar25);
      } while (!bVar3);
      *piVar25 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00ded9e0;
      piVar16 = (int *)piVar25[0x8e];
      if (piVar16 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        do {
          iVar7 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_00ded9e0;
        iVar7 = piVar25[0x8e];
        local_3b60 = piVar25[0x8f];
      }
      FUN_016dd1aa((uint)local_9d0 | 4,&local_1d40,0x980);
      puVar20[4] = ppppppuVar9;
      puVar20[5] = pppuVar23;
      *puVar20 = 0;
      puVar20[1] = 0;
      local_13c0 = (int *******)0xcc;
      local_13bc = (undefined ***)0x0;
      local_13b8 = &PTR_LAB_01879254;
      local_1398 = 0;
      local_13a8 = piVar25;
      FUN_016dd1aa(auStack_1394,local_9d0,0x984);
      local_9fc = local_3b60;
      local_a10 = 0;
      local_a0c = 0;
      local_a08 = 0;
      local_48 = (int *)0x0;
      local_a00 = iVar7;
      iVar7 = FUN_016d51b0(&local_48,0x20,0x9e0);
      piVar16 = local_48;
      if ((iVar7 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0x9e0);
      }
      FUN_016dd1aa(local_48,&local_13c0,0x9e0);
      iVar7 = FUN_00ee0238(piVar25 + 0x40,piVar16,piVar16);
      local_13c0 = (int *******)ppppppuVar9;
      local_13bc = pppuVar23;
      if (piVar25[0x8c] != 0) {
        (**(code **)(piVar25[0x8d] + 0x14))
                  (piVar25[0x8c] + (*(int *)(piVar25[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_13c0);
      }
      if (iVar7 != 0) {
        FUN_01659ec0(puVar29[2],iVar7);
      }
    }
    else {
      piVar25 = (int *)puVar29[2];
      do {
        iVar7 = *piVar25;
        bVar3 = (bool)hasExclusiveAccess(piVar25);
      } while (!bVar3);
      *piVar25 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00ded9e0;
      piVar16 = (int *)piVar25[0x5c];
      if (piVar16 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        do {
          iVar7 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_00ded9e0;
        iVar7 = piVar25[0x5c];
        local_3b60 = piVar25[0x5d];
      }
      FUN_016dd1aa((uint)local_9d0 | 4,&local_1d40,0x980);
      *puVar20 = 0;
      puVar20[4] = ppppppuVar9;
      puVar20[5] = pppuVar23;
      puVar20[1] = 0;
      local_13c0 = (int *******)0xcc;
      local_13bc = (undefined ***)0x0;
      local_13b8 = &PTR_LAB_018791b4;
      local_1398 = 0;
      local_13a8 = piVar25;
      FUN_016dd1aa(auStack_1394,local_9d0,0x984);
      local_9fc = local_3b60;
      local_a10 = 0;
      local_a0c = 0;
      local_a08 = 0;
      local_48 = (int *)0x0;
      local_a00 = iVar7;
      iVar7 = FUN_016d51b0(&local_48,0x20,0x9e0);
      piVar16 = local_48;
      if ((iVar7 != 0) || (local_48 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0x9e0);
      }
      FUN_016dd1aa(local_48,&local_13c0,0x9e0);
      pppuVar10 = (undefined ***)FUN_00ee0238(piVar25 + 0x14,piVar16,piVar16);
      local_13c0 = (int *******)ppppppuVar9;
      local_13bc = pppuVar23;
      if (piVar25[0x5a] != 0) {
        (**(code **)(piVar25[0x5b] + 0x14))
                  (piVar25[0x5a] + (*(int *)(piVar25[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_13c0);
      }
      if (pppuVar10 != (undefined ***)0x0) {
        local_9d0[0] = (undefined *)((uint)local_9d0[0] & 0xffffff00);
        local_13c0 = (int *******)(piVar25 + 2);
        local_13b8 = local_9d0;
        local_13bc = pppuVar10;
        FUN_0164511c(&local_13c0);
      }
    }
    *puVar29 = *puVar29 - 1;
    if (*piVar16 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar16);
      if (bVar3) {
        *piVar16 = 0x84;
        goto LAB_00decf64;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar16[2] + 0x10))(piVar16);
  } while( true );
  if ((char)puVar29[0xe] != '\x01') {
    if ((char)puVar29[0xe] == '\x02') goto joined_r0x00ded9c0;
    FUN_015e8e6c(puVar29,FUN_01655ec4);
    *(undefined1 *)(puVar29 + 0xe) = 1;
  }
  puVar29[6] = local_3b8c;
  puVar29[7] = local_3b90;
joined_r0x00ded9c0:
  if (local_3b48 != 5) {
    local_13c0 = (int *******)0x2;
    FUN_00dedd04(param_1,&local_13c0);
  }
  return local_3b48 == 5;
}

