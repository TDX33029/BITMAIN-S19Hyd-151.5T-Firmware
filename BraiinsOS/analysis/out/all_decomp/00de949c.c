// FUN_00de949c @ 00de949c size=5208 calls_out=38 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | all branches are disabled and there is no else branch

undefined8 FUN_00de949c(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *extraout_r2;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  undefined4 uVar15;
  int *piVar16;
  char *pcVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  int *unaff_r6;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  int *piVar24;
  int *piVar25;
  undefined4 uVar26;
  byte *pbVar27;
  int iVar28;
  bool bVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  int *local_18c;
  int *local_17c;
  int *local_178;
  int *local_174;
  undefined4 local_16c;
  undefined4 local_168;
  int *local_148;
  int *local_144;
  int *local_140;
  int local_13c;
  uint local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int local_128;
  undefined8 local_124;
  uint local_11c;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  piVar8 = (int *)(param_1 + 0x10);
  if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar30 = thunk_FUN_016de0ee(0,0x40,param_1 + 8);
  iVar28 = (int)uVar30 + (int)((ulonglong)uVar30 >> 0x20);
  uVar15 = *extraout_r2;
  uVar18 = extraout_r2[1];
  if (*(char *)(iVar28 + 0x38) != '\x01') {
    if (*(char *)(iVar28 + 0x38) == '\x02') {
      local_168 = 0;
      local_16c = 0;
      cVar3 = '\x02';
      goto LAB_00de9540;
    }
    FUN_015e8e6c(iVar28,FUN_01655ec4);
    *(undefined1 *)(iVar28 + 0x38) = 1;
  }
  local_168 = *(undefined4 *)(iVar28 + 0x18);
  local_16c = *(undefined4 *)(iVar28 + 0x1c);
  cVar3 = '\x01';
  *(undefined4 *)(iVar28 + 0x18) = uVar15;
  *(undefined4 *)(iVar28 + 0x1c) = uVar18;
LAB_00de9540:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x4e)) {
  case 0:
    *(undefined1 *)(param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
    uVar15 = 900;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878cd8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878cd8);
  case 3:
    pbVar27 = *(byte **)(param_1 + 0x50);
    iVar19 = *(int *)(param_1 + 0x54);
    goto joined_r0x00de95a8;
  case 4:
    piVar24 = (int *)(param_1 + 0x58);
    if (*piVar24 != -0x80000000) goto LAB_00de9c8c;
    uVar31 = FUN_00e48374(*(int *)(param_1 + 0x5c) + 8);
    piVar6 = (int *)uVar31;
    piVar16 = (int *)&DAT_80000000;
    if (((uint)(uVar31 >> 0x20) & 0xff) == 2) goto LAB_00dea528;
    iVar19 = piVar6[2];
    if (((uVar31 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
      iVar11 = FUN_015bf3f8();
      unaff_r6 = piVar6;
      if (iVar11 == 0) {
        *(undefined1 *)(piVar6 + 1) = 1;
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar6;
      bVar29 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar29);
    *piVar6 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar6,0x81,1);
    }
    if (iVar19 == -0x80000000) goto LAB_00dea528;
    piVar16 = *(int **)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) == 0) {
      piVar16 = (int *)(param_1 + 0x54);
    }
    DataMemoryBarrier(0xb);
    iVar19 = *(int *)(param_1 + 0x5c);
    if (*(char *)(*piVar16 + 0x4c) != '\0') {
      uVar31 = FUN_00e48374(iVar19 + 8);
      piVar6 = (int *)uVar31;
      if (((uint)(uVar31 >> 0x20) & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886aa4);
      }
      local_18c = (int *)piVar6[3];
      piVar16 = (int *)piVar6[2];
      local_178 = (int *)piVar6[4];
      piVar6[2] = -0x80000000;
      if ((((uVar31 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
        *(undefined1 *)(piVar6 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar6;
        bVar29 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar29);
      *piVar6 = 0;
      if (iVar19 == 2) {
        FUN_016d6968(0xf0,piVar6,0x81,1);
        iVar19 = *piVar24;
      }
      else {
        iVar19 = *piVar24;
      }
      if (iVar19 != -0x7fffffff) {
        if (iVar19 == -0x80000000) {
          piVar6 = *(int **)(param_1 + 0x5c);
          DataMemoryBarrier(0xb);
          do {
            iVar19 = *piVar6;
            bVar29 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar29);
          *piVar6 = iVar19 + -1;
          if (iVar19 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00e45594(*(undefined4 *)(param_1 + 0x5c));
          }
        }
        else if (iVar19 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
        }
      }
      *piVar24 = -0x7fffffff;
      goto LAB_00dea51c;
    }
    pcVar17 = (char *)(iVar19 + 0x20);
    param_2 = (int *)*param_2;
    do {
      if (*pcVar17 == '\0') {
        bVar29 = (bool)hasExclusiveAccess(pcVar17);
        if (bVar29) goto code_r0x00de976c;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*pcVar17 != '\0') {
        HintYield();
      }
    } while( true );
  }
  do {
    unaff_r6 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    extraout_r2[4] = uVar15;
    extraout_r2[5] = 0;
    pbVar27 = (byte *)(param_1 + 0x4c);
    *pbVar27 = 0;
    FUN_01656eb8(&local_148,0,uVar15,0,0,&DAT_01878ce8);
    iVar11 = *(int *)(param_1 + 0x30);
    uVar20 = *(uint *)(iVar11 + 8);
    DataMemoryBarrier(0xb);
    FUN_016dd1aa(&local_80,&local_148,0x50);
    iVar19 = param_1 + 0x58;
    FUN_016dd1aa(iVar19,&local_80,0x50);
    *(byte **)(param_1 + 0x50) = pbVar27;
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    cVar3 = *(char *)(iVar28 + 0x38);
    *(int *)(param_1 + 0x54) = iVar19;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    *(int *)(param_1 + 0xac) = param_1 + 0x28;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int **)(param_1 + 0xb4) = (int *)(param_1 + 0x30);
    *(int *)(param_1 + 0xb8) = iVar11 + 8;
    *(uint *)(param_1 + 0xbc) = uVar20 >> 2;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
joined_r0x00de95a8:
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar28,FUN_005bc49c);
      *(undefined1 *)(iVar28 + 0x38) = 1;
    }
    cVar3 = *(char *)(iVar28 + 0x30);
    bVar29 = cVar3 == '\x01';
    if (bVar29) {
      cVar3 = *(char *)(iVar28 + 0x31);
    }
    if (bVar29 && cVar3 == '\0') {
      FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00dea364:
      uVar4 = 3;
      goto LAB_00de9910;
    }
    if ((*(uint *)(iVar28 + 0x24) & 1) == 0) {
      uVar30 = FUN_0164e918();
      if ((uint)uVar30 < 2) {
        uVar30 = CONCAT44((int)((ulonglong)uVar30 >> 0x20),1);
      }
    }
    else {
      uVar30 = CONCAT44(*(undefined4 *)(iVar28 + 0x28),*(undefined4 *)(iVar28 + 0x2c));
    }
    uVar20 = (uint)((ulonglong)uVar30 >> 0x20);
    uVar5 = (uint)uVar30;
    uVar20 = uVar20 ^ uVar20 << 0x11;
    unaff_r6 = (int *)0x55555556;
    iVar22 = iVar19 + 0x50;
    uVar20 = uVar5 >> 0x10 ^ uVar20 >> 7 ^ uVar5 ^ uVar20;
    *(uint *)(iVar28 + 0x2c) = uVar20;
    iVar21 = iVar19 + 0x5c;
    *(uint *)(iVar28 + 0x28) = uVar5;
    uVar20 = (uint)((ulonglong)(uVar20 + uVar5) * 3 >> 0x20);
    *(undefined4 *)(iVar28 + 0x24) = 1;
    iVar11 = uVar20 - (uVar20 / 3 | uVar20 / 3 << 1);
    if (iVar11 == 2) {
      bVar29 = false;
      if ((*pbVar27 & 4) != 0) goto LAB_00de9a94;
      iVar11 = FUN_016638c8(iVar21,*param_2);
      piVar24 = (int *)0x80000003;
      bVar14 = 4;
      bVar29 = true;
      if (iVar11 != 0) goto LAB_00de9a94;
LAB_00de9bf4:
      *pbVar27 = *pbVar27 | bVar14;
    }
    else {
      if (iVar11 == 1) {
        bVar29 = false;
        if ((*pbVar27 & 2) != 0) goto LAB_00de9a94;
        FUN_00ef570c(&local_148,iVar22,param_2);
        if (local_148 == (int *)0x80000001) {
          bVar29 = true;
          goto LAB_00de9a94;
        }
LAB_00de9b88:
        bVar14 = 2;
        local_2c = local_140;
        local_30 = local_144;
        piVar24 = local_148;
        goto LAB_00de9bf4;
      }
      bVar29 = false;
      if ((*pbVar27 & 1) == 0) {
        iVar11 = FUN_01657fc4(iVar19,*param_2);
        piVar24 = (int *)0x80000001;
        bVar29 = true;
        bVar14 = 1;
        if (iVar11 == 0) goto LAB_00de9bf4;
      }
LAB_00de9a94:
      uVar5 = (uVar20 + 1) % 3;
      if (uVar5 == 0) {
        if ((*pbVar27 & 1) == 0) {
          iVar11 = FUN_01657fc4(iVar19,*param_2);
          piVar24 = (int *)0x80000001;
          bVar14 = 1;
joined_r0x00de9b0c:
          bVar29 = true;
          if (iVar11 == 0) goto LAB_00de9bf4;
        }
      }
      else if (uVar5 == 1) {
        if ((*pbVar27 & 2) == 0) {
          FUN_00ef570c(&local_148,iVar22,param_2);
          if (local_148 != (int *)0x80000001) goto LAB_00de9b88;
          bVar29 = true;
        }
      }
      else if ((*pbVar27 & 4) == 0) {
        iVar11 = FUN_016638c8(iVar21,*param_2);
        piVar24 = (int *)0x80000003;
        bVar14 = 4;
        goto joined_r0x00de9b0c;
      }
      uVar20 = (uVar20 + 2) % 3;
      if (uVar20 == 0) {
        if ((*pbVar27 & 1) == 0) {
          iVar19 = FUN_01657fc4(iVar19,*param_2);
          piVar24 = (int *)0x80000001;
          bVar14 = 1;
LAB_00de9bec:
          if (iVar19 != 0) goto LAB_00dea364;
          goto LAB_00de9bf4;
        }
      }
      else if (uVar20 == 1) {
        if ((*pbVar27 & 2) == 0) {
          FUN_00ef570c(&local_148,iVar22,param_2);
          if (local_148 == (int *)0x80000001) goto LAB_00dea364;
          goto LAB_00de9b88;
        }
      }
      else if ((*pbVar27 & 4) == 0) {
        iVar19 = FUN_016638c8(iVar21,*param_2);
        piVar24 = (int *)0x80000003;
        bVar14 = 4;
        goto LAB_00de9bec;
      }
      piVar24 = (int *)&DAT_80000004;
      if (bVar29) goto LAB_00dea364;
    }
    *(int **)(param_1 + 0x34) = piVar24;
    extraout_r2[0xc] = local_30;
    extraout_r2[0xd] = local_2c;
    FUN_00de5ee0(param_1 + 0x58);
    uVar20 = *(uint *)(param_1 + 0x34);
    iVar19 = 1;
    if (0x80000000 < uVar20) {
      iVar19 = uVar20 + 0x7fffffff;
    }
    if (iVar19 != 1) {
      if (iVar19 == 0) {
        FUN_01662df8(*(undefined4 *)(param_1 + 0x30));
      }
      else if (iVar19 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878cf8);
      }
      puVar7 = (undefined4 *)(param_1 + 0x30);
      FUN_01663cc4(*puVar7);
      piVar24 = (int *)*puVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar24;
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = iVar19 + -1;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar7);
      }
      iVar19 = *(int *)(param_1 + 0x2c);
      piVar24 = (int *)(iVar19 + 0x44);
      do {
        iVar11 = *piVar24;
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = iVar11 + -1;
      if (iVar11 == 1) {
        FUN_00e46e30(iVar19 + 8);
      }
      piVar24 = *(int **)(param_1 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar24;
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = iVar19 + -1;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aab134(*(undefined4 *)(param_1 + 0x2c));
      }
      iVar19 = *(int *)(param_1 + 0x28);
      piVar24 = (int *)(iVar19 + 0x48);
      do {
        iVar11 = *piVar24;
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = iVar11 + -1;
      if (iVar11 == 1) {
        FUN_00e46e30(iVar19 + 8);
      }
      piVar24 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar24;
        bVar29 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar29);
      *piVar24 = iVar19 + -1;
      unaff_r6 = (int *)0x0;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aab134(*(undefined4 *)(param_1 + 0x28));
      }
      goto LAB_00dea74c;
    }
    if (uVar20 == 0x80000000) {
      unaff_r6 = (int *)FUN_00f22fac();
      goto LAB_00dea62c;
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(int *)(param_1 + 0x54) = param_1 + 0x2c;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x58) = uVar20;
LAB_00de9c8c:
    piVar25 = (int *)(param_1 + 0x58);
    piVar24 = (int *)*piVar25;
    piVar6 = *(int **)(param_1 + 0x5c);
    piVar9 = *(int **)(param_1 + 0x60);
    piVar16 = (int *)&DAT_80000000;
    *piVar25 = -0x7fffffff;
    local_30 = piVar24;
    local_2c = piVar6;
    local_28 = piVar9;
    if (-0x7fffffff < (int)piVar24) {
      piVar16 = (int *)(param_1 + 0x54);
      if (*(int *)(param_1 + 0x50) != 0) {
        piVar16 = *(int **)(param_1 + 0x54);
      }
      iVar19 = *piVar16;
      unaff_r6 = (int *)(iVar19 + 8);
      do {
        if (*unaff_r6 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(unaff_r6);
          goto LAB_00de9d0c;
        }
        bVar29 = (bool)hasExclusiveAccess(unaff_r6);
      } while (!bVar29);
      *unaff_r6 = 1;
      DataMemoryBarrier(0xb);
LAB_00de9d0c:
      uVar20 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar3 = *(char *)(iVar19 + 0xc);
      }
      else {
        uVar20 = FUN_015bf3f8();
        uVar20 = uVar20 ^ 1;
        cVar3 = *(char *)(iVar19 + 0xc);
      }
      if (cVar3 != '\0') {
        uVar5 = (uint)local_144 >> 8;
        local_144 = (int *)CONCAT31((int3)uVar5,(char)uVar20);
        local_148 = unaff_r6;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_148,&DAT_0187a7c0,&DAT_01886a4c);
      }
      iVar11 = 1;
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar19 + 0x4c) == '\0') {
        iVar11 = *(int *)(iVar19 + 0x2c);
        if (iVar11 == 0) {
          piVar16 = (int *)(iVar19 + 0x34);
          if (*piVar16 == -0x80000000) {
            uVar5 = *(uint *)(iVar19 + 0x1c);
          }
          else {
            uVar5 = *(uint *)(iVar19 + 0x1c);
            if (*(uint *)(iVar19 + 0x30) <= uVar5) {
              uVar30 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
              local_140 = (int *)&DAT_00000001;
              local_144 = (int *)&DAT_00000001;
              local_148 = (int *)&DAT_00000001;
              local_11c = local_11c & 0xffff0000;
              local_128 = 0;
              local_138 = local_138 & 0xffffff00;
              local_13c = 0;
              local_134 = piVar24;
              local_130 = piVar6;
              local_12c = piVar9;
              local_124 = uVar30;
              piVar24 = (int *)thunk_FUN_016d4a50(0x30);
              if (piVar24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x30);
              }
              *piVar24 = (int)local_148;
              piVar24[1] = (int)local_144;
              piVar24[2] = (int)local_140;
              piVar24[3] = local_13c;
              piVar24[4] = local_138;
              piVar24[5] = (int)local_134;
              piVar24[6] = (int)local_130;
              piVar24[7] = (int)local_12c;
              piVar24[8] = local_128;
              *(undefined8 *)(piVar24 + 9) = local_124;
              piVar24[0xb] = local_11c;
              if (*piVar16 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_01886a74);
              }
              do {
                iVar11 = *piVar24;
                bVar29 = (bool)hasExclusiveAccess(piVar24);
              } while (!bVar29);
              *piVar24 = iVar11 + 1;
              if (iVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0xdea93c);
                (*pcVar1)();
              }
              uVar5 = *(uint *)(iVar19 + 0x34);
              uVar12 = *(uint *)(iVar19 + 0x40);
              if (uVar12 == uVar5) {
                FUN_00ef311c(piVar16);
                uVar5 = *(uint *)(iVar19 + 0x34);
                uVar12 = *(uint *)(iVar19 + 0x40);
              }
              uVar10 = *(int *)(iVar19 + 0x3c) + uVar12;
              *(uint *)(iVar19 + 0x40) = uVar12 + 1;
              uVar12 = uVar10 - uVar5;
              if (uVar10 < uVar5) {
                uVar12 = uVar10;
              }
              puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x38) + uVar12 * 8);
              *puVar7 = piVar24;
              puVar7[1] = &DAT_0187a7e8;
              if ((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
                iVar11 = FUN_015bf3f8();
                if (iVar11 == 0) {
                  *(undefined1 *)(iVar19 + 0xc) = 1;
                }
              }
              DataMemoryBarrier(0xb);
              do {
                iVar19 = *unaff_r6;
                bVar29 = (bool)hasExclusiveAccess(unaff_r6);
              } while (!bVar29);
              *unaff_r6 = 0;
              if (iVar19 == 2) {
                FUN_016d6968(0xf0,unaff_r6,0x81,1);
                iVar19 = *piVar25;
              }
              else {
                iVar19 = *piVar25;
              }
              if (iVar19 != -0x7fffffff) {
                if (iVar19 == -0x80000000) {
                  piVar16 = *(int **)(param_1 + 0x5c);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar19 = *piVar16;
                    bVar29 = (bool)hasExclusiveAccess(piVar16);
                  } while (!bVar29);
                  *piVar16 = iVar19 + -1;
                  if (iVar19 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_00e45594(*(undefined4 *)(param_1 + 0x5c));
                  }
                }
                else if (iVar19 != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
                }
              }
              piVar16 = (int *)0x80000001;
              *(undefined4 *)(param_1 + 0x58) = 0x80000000;
              *(int **)(param_1 + 0x5c) = piVar24;
              goto LAB_00dea4e4;
            }
          }
          uVar12 = *(uint *)(iVar19 + 0x10);
          if (uVar5 == uVar12) {
            FUN_01561020();
            uVar12 = *(uint *)(iVar19 + 0x10);
            uVar5 = *(uint *)(iVar19 + 0x1c);
          }
          uVar10 = *(int *)(iVar19 + 0x18) + uVar5;
          *(uint *)(iVar19 + 0x1c) = uVar5 + 1;
          iVar11 = 3;
          uVar5 = uVar10 - uVar12;
          if (uVar10 < uVar12) {
            uVar5 = uVar10;
          }
          puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x14) + uVar5 * 0xc);
          *puVar7 = piVar24;
          puVar7[1] = piVar6;
          puVar7[2] = piVar9;
          piVar6 = local_18c;
          piVar9 = local_17c;
          piVar24 = local_174;
          goto joined_r0x00de9f2c;
        }
        while (iVar11 != 0) {
          *(int *)(iVar19 + 0x2c) = iVar11 + -1;
          uVar12 = *(int *)(iVar19 + 0x28) + 1;
          puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x24) + *(int *)(iVar19 + 0x28) * 8);
          piVar16 = (int *)*puVar7;
          uVar5 = uVar12 - *(uint *)(iVar19 + 0x20);
          if (uVar12 < *(uint *)(iVar19 + 0x20)) {
            uVar5 = uVar12;
          }
          iVar11 = puVar7[1];
          *(uint *)(iVar19 + 0x28) = uVar5;
          uVar5 = *(uint *)(iVar11 + 8);
          if (uVar5 < 5) {
            uVar5 = 4;
          }
          local_80 = piVar24;
          local_7c = piVar6;
          local_78 = piVar9;
          FUN_00e49bec(&local_148,(int)piVar16 + (uVar5 - 1 & 0xfffffff8) + 8,iVar11,&local_80);
          uVar5 = local_138;
          iVar21 = local_13c;
          piVar9 = local_140;
          piVar6 = local_144;
          piVar24 = local_148;
          if (local_148 == (int *)&DAT_80000000) {
            if ((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
              iVar22 = FUN_015bf3f8();
              if (iVar22 == 0) {
                *(undefined1 *)(iVar19 + 0xc) = 1;
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar22 = *unaff_r6;
              bVar29 = (bool)hasExclusiveAccess(unaff_r6);
            } while (!bVar29);
            *unaff_r6 = 0;
            if (iVar22 == 2) {
              FUN_016d6968(0xf0,unaff_r6,0x81,1);
            }
            bVar29 = false;
            (**(code **)(uVar5 + 0xc))(iVar21);
LAB_00dea0d8:
            DataMemoryBarrier(0xb);
            do {
              iVar21 = *piVar16;
              bVar2 = (bool)hasExclusiveAccess(piVar16);
            } while (!bVar2);
            *piVar16 = iVar21 + -1;
            if (iVar21 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00aac624(piVar16,iVar11);
            }
            piVar16 = (int *)&DAT_80000000;
            local_178 = (int *)0x0;
            if (bVar29) goto LAB_00dea11c;
            goto LAB_00dea4e4;
          }
          if (local_148 == (int *)0x80000001) {
            bVar29 = true;
            goto LAB_00dea0d8;
          }
          iVar21 = (**(code **)(local_138 + 0xc))(local_13c);
          if (iVar21 == 0) {
            uVar5 = *(uint *)(iVar19 + 0x10);
            uVar12 = *(uint *)(iVar19 + 0x1c);
            if (uVar12 == uVar5) {
              FUN_01561020();
              uVar5 = *(uint *)(iVar19 + 0x10);
              uVar12 = *(uint *)(iVar19 + 0x1c);
            }
            uVar13 = *(int *)(iVar19 + 0x18) + uVar12;
            uVar10 = uVar13 - uVar5;
            if (uVar13 < uVar5) {
              uVar10 = uVar13;
            }
            *(uint *)(iVar19 + 0x1c) = uVar12 + 1;
            puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x14) + uVar10 * 0xc);
            *puVar7 = piVar24;
            puVar7[1] = piVar6;
            puVar7[2] = piVar9;
            if ((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
              iVar21 = FUN_015bf3f8();
              if (iVar21 == 0) {
                *(undefined1 *)(iVar19 + 0xc) = 1;
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar21 = *unaff_r6;
              bVar29 = (bool)hasExclusiveAccess(unaff_r6);
            } while (!bVar29);
            *unaff_r6 = 0;
            bVar29 = false;
            if (iVar21 == 2) {
              FUN_016d6968(0xf0,unaff_r6,0x81,1);
            }
            goto LAB_00dea0d8;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar21 = *piVar16;
            bVar29 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar29);
          *piVar16 = iVar21 + -1;
          if (iVar21 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac624(piVar16,iVar11);
          }
          iVar11 = *(int *)(iVar19 + 0x2c);
        }
        uVar5 = *(uint *)(iVar19 + 0x10);
        uVar12 = *(uint *)(iVar19 + 0x1c);
        if (uVar12 == uVar5) {
          FUN_01561020();
          uVar5 = *(uint *)(iVar19 + 0x10);
          uVar12 = *(uint *)(iVar19 + 0x1c);
        }
        uVar13 = *(int *)(iVar19 + 0x18) + uVar12;
        uVar10 = uVar13 - uVar5;
        if (uVar13 < uVar5) {
          uVar10 = uVar13;
        }
        *(uint *)(iVar19 + 0x1c) = uVar12 + 1;
        puVar7 = (undefined4 *)(*(int *)(iVar19 + 0x14) + uVar10 * 0xc);
        *puVar7 = piVar24;
        puVar7[1] = piVar6;
        puVar7[2] = piVar9;
LAB_00dea11c:
        if ((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar11 = FUN_015bf3f8();
          if (iVar11 == 0) {
            *(undefined1 *)(iVar19 + 0xc) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar19 = *unaff_r6;
          bVar29 = (bool)hasExclusiveAccess(unaff_r6);
        } while (!bVar29);
        *unaff_r6 = 0;
        piVar16 = (int *)&DAT_80000000;
        iVar11 = 3;
        local_178 = (int *)0x0;
        if (iVar19 != 2) goto LAB_00dea4e4;
LAB_00dea174:
        FUN_016d6968(0xf0,unaff_r6,0x81,1);
      }
      else {
joined_r0x00de9f2c:
        local_174 = piVar24;
        local_17c = piVar9;
        local_18c = piVar6;
        if ((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar21 = FUN_015bf3f8();
          if (iVar21 == 0) {
            *(undefined1 *)(iVar19 + 0xc) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar19 = *unaff_r6;
          bVar29 = (bool)hasExclusiveAccess(unaff_r6);
        } while (!bVar29);
        *unaff_r6 = 0;
        if (iVar19 == 2) goto LAB_00dea174;
      }
      if (iVar11 == 1) {
        piVar16 = local_174;
        local_178 = local_17c;
      }
      else {
        piVar16 = (int *)&DAT_80000000;
        local_178 = (int *)0x0;
        if (iVar11 != 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c3c4);
        }
      }
    }
LAB_00dea4e4:
    if (local_30 == (int *)&DAT_80000000) {
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *local_2c;
        bVar29 = (bool)hasExclusiveAccess(local_2c);
      } while (!bVar29);
      *local_2c = iVar19 + -1;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e45594(local_2c);
      }
    }
LAB_00dea51c:
    if (piVar16 == (int *)0x80000001) goto LAB_00de990c;
LAB_00dea528:
    FUN_00de5f68(param_1 + 0x50);
    if (piVar16 != (int *)&DAT_80000000) break;
    uVar15 = 0x1c20;
    *(undefined1 *)(param_1 + 0x4d) = 0;
  } while( true );
  local_144 = local_18c;
  local_140 = local_178;
  local_148 = piVar16;
  unaff_r6 = (int *)FUN_00f22b18(&local_148);
LAB_00dea62c:
  puVar7 = (undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_01663cc4(*puVar7);
  piVar24 = (int *)*puVar7;
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar24;
    bVar29 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar29);
  *piVar24 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar7);
  }
  iVar19 = *(int *)(param_1 + 0x2c);
  piVar24 = (int *)(iVar19 + 0x44);
  do {
    iVar11 = *piVar24;
    bVar29 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar29);
  *piVar24 = iVar11 + -1;
  if (iVar11 == 1) {
    FUN_00e46e30(iVar19 + 8);
  }
  piVar24 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar24;
    bVar29 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar29);
  *piVar24 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(*(undefined4 *)(param_1 + 0x2c));
  }
  iVar19 = *(int *)(param_1 + 0x28);
  piVar24 = (int *)(iVar19 + 0x48);
  do {
    iVar11 = *piVar24;
    bVar29 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar29);
  *piVar24 = iVar11 + -1;
  if (iVar11 == 1) {
    FUN_00e46e30(iVar19 + 8);
  }
  piVar24 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar24;
    bVar29 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar29);
  *piVar24 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aab134(*(undefined4 *)(param_1 + 0x28));
  }
LAB_00dea74c:
  *(undefined1 *)(param_1 + 0x4e) = 1;
  iVar19 = 0;
  cVar3 = *(char *)(iVar28 + 0x38);
  if (cVar3 == '\x01') goto LAB_00dea7f8;
LAB_00dea764:
  if (cVar3 != '\x02') {
    FUN_015e8e6c(iVar28,FUN_01655ec4);
    *(undefined1 *)(iVar28 + 0x38) = 1;
    goto LAB_00dea7f8;
  }
  if (iVar19 != 0) goto LAB_00dea894;
  cVar3 = '\x02';
  goto LAB_00dea810;
code_r0x00de976c:
  *pcVar17 = '\x01';
  DataMemoryBarrier(0xb);
  cVar3 = *(char *)(iVar19 + 0x2c);
  DataMemoryBarrier(0xb);
  unaff_r6 = (int *)*param_2;
  iVar11 = param_2[1];
  bVar29 = *(int *)(iVar19 + 0x28) == iVar11;
  if (bVar29) {
    param_2 = *(int **)(iVar19 + 0x24);
  }
  if (!bVar29 || param_2 != unaff_r6) {
    uVar30 = (*(code *)*unaff_r6)(iVar11);
    (**(code **)(*(int *)(iVar19 + 0x24) + 0xc))(*(undefined4 *)(iVar19 + 0x28));
    *(undefined8 *)(iVar19 + 0x24) = uVar30;
    if (cVar3 != '\0') {
      (*(code *)unaff_r6[2])(iVar11);
    }
  }
  DataMemoryBarrier(0xb);
  *pcVar17 = '\0';
LAB_00de990c:
  uVar4 = 4;
LAB_00de9910:
  iVar19 = 1;
  *(undefined1 *)(param_1 + 0x4e) = uVar4;
  cVar3 = *(char *)(iVar28 + 0x38);
  if (cVar3 != '\x01') goto LAB_00dea764;
LAB_00dea7f8:
  *(undefined4 *)(iVar28 + 0x18) = local_168;
  *(undefined4 *)(iVar28 + 0x1c) = local_16c;
  cVar3 = '\x01';
  if (iVar19 != 0) goto LAB_00dea894;
LAB_00dea810:
  local_148 = (int *)0x2;
  uVar15 = *extraout_r2;
  uVar18 = extraout_r2[1];
  if (cVar3 == '\x01') {
LAB_00dea854:
    uVar23 = *(undefined4 *)(iVar28 + 0x18);
    uVar26 = *(undefined4 *)(iVar28 + 0x1c);
    *(undefined4 *)(iVar28 + 0x18) = uVar15;
    *(undefined4 *)(iVar28 + 0x1c) = uVar18;
  }
  else {
    uVar23 = 0;
    uVar26 = 0;
    if (cVar3 != '\x02') {
      FUN_015e8e6c(iVar28,FUN_01655ec4);
      *(undefined1 *)(iVar28 + 0x38) = 1;
      goto LAB_00dea854;
    }
  }
  FUN_00de61a8(piVar8);
  FUN_016dd1aa(piVar8,&local_148,200);
  if (*(char *)(iVar28 + 0x38) != '\x01') {
    if (*(char *)(iVar28 + 0x38) == '\x02') {
LAB_00dea894:
      return CONCAT44(unaff_r6,iVar19);
    }
    FUN_015e8e6c(iVar28,FUN_01655ec4);
    *(undefined1 *)(iVar28 + 0x38) = 1;
  }
  *(undefined4 *)(iVar28 + 0x18) = uVar23;
  *(undefined4 *)(iVar28 + 0x1c) = uVar26;
  return CONCAT44(unaff_r6,iVar19);
}

