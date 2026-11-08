// FUN_00a9c664 @ 00a9c664 size=7188 calls_out=37 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffa8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00a9c664(uint param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined3 uVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint ****ppppuVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint ******ppppppuVar18;
  undefined4 uVar19;
  undefined *puVar20;
  code *pcVar21;
  uint ******ppppppuVar22;
  uint *******pppppppuVar23;
  uint ******ppppppuVar24;
  uint *******pppppppuVar25;
  uint uVar26;
  uint uVar27;
  uint *******pppppppuVar28;
  uint uVar29;
  uint uVar30;
  undefined1 uVar31;
  uint *****pppppuVar32;
  uint uVar33;
  char *pcVar34;
  uint uVar35;
  char *pcVar36;
  byte bVar37;
  uint *****pppppuVar38;
  uint ******ppppppuVar39;
  undefined4 uVar40;
  uint *******pppppppuVar41;
  int *piVar42;
  uint uVar43;
  uint ****ppppuVar44;
  uint uVar45;
  int *piVar46;
  undefined4 uVar47;
  uint *******pppppppuVar48;
  uint *******pppppppuVar49;
  undefined8 uVar50;
  ulonglong uVar51;
  uint *******local_144;
  uint *****local_e0;
  uint *******local_dc;
  uint *******local_d8;
  uint *******local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  uint *******local_c8;
  undefined4 local_c4;
  uint ******local_c0;
  uint ******local_bc;
  uint *******local_b8;
  undefined4 local_b4;
  undefined4 *local_b0;
  uint *******local_ac;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  uint ******local_98;
  undefined4 local_94;
  uint *******local_90;
  uint *******pppppppuStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint *******local_78;
  uint *******local_74;
  undefined4 uStack_70;
  uint *******pppppppuStack_6c;
  uint *******local_68;
  undefined *local_64;
  uint *******local_60;
  uint *******local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *******local_50;
  undefined *local_4c;
  uint *******local_48;
  uint ******local_44;
  undefined *local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  uint local_2c;
  
  local_54 = (uint *******)CONCAT13(local_54._3_1_,CONCAT21(local_54._1_2_,(undefined1)local_54));
  local_58 = (uint *******)CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(undefined1)local_58));
  if (*(uint *)(param_1 + 8) != 2) {
    iVar8 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar8 = iVar8 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar8,param_1);
  }
  piVar9 = (int *)(param_1 + 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x36)) {
  case 0:
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186de6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186de6c);
  case 3:
    pppppuVar38 = *(uint ******)(param_1 + 0x40);
    piVar46 = (int *)(param_1 + 0x38);
    if (pppppuVar38 == (uint *****)0x0) goto LAB_00a9cc98;
    piVar42 = (int *)(param_1 + 0x3c);
    piVar10 = (int *)*piVar42;
    if (*(int *)(param_1 + 0x38) == 0) {
      piVar10 = piVar42;
    }
    FUN_00a8f8ec(&local_60,*piVar10 + 8);
    if (local_60 == (uint *******)0x0) {
      if ((uint *****)((uint)local_5c & 0xff) != (uint *****)&SUB_00000002) {
        do {
          ppppuVar11 = *pppppuVar38;
          bVar2 = (bool)hasExclusiveAccess(pppppuVar38);
        } while (!bVar2);
        *pppppuVar38 = (uint ****)((int)ppppuVar11 + 1);
        if (-1 < (int)ppppuVar11) {
          pppppuVar32 = pppppuVar38 + 10;
          ppppuVar11 = (uint ****)*param_2;
          do {
            if (*(char *)pppppuVar32 == '\0') {
              bVar2 = (bool)hasExclusiveAccess(pppppuVar32);
              if (bVar2) goto code_r0x00a9c80c;
            }
            else {
              ClearExclusiveLocal();
            }
            while (*(char *)pppppuVar32 != '\0') {
              HintYield();
            }
          } while( true );
        }
LAB_00a9e448:
                    /* WARNING: Does not return */
        pcVar21 = (code *)software_udf(0xfdee,0xa9e448);
        (*pcVar21)();
      }
      pppppppuVar25 = (uint *******)0x0;
    }
    else {
      local_90 = (uint *******)CONCAT13((undefined1)local_58,local_5c._1_3_);
      uStack_88._3_1_ = SUB41(local_50,0);
      uStack_84._0_3_ = (undefined3)((uint)local_50 >> 8);
      pppppppuStack_8c = (uint *******)CONCAT13((undefined1)local_54,(int3)((uint)local_58 >> 8));
      uStack_88 = (uint *******)CONCAT13(uStack_88._3_1_,(int3)((uint)local_54 >> 8));
      pppppuVar38 = (uint *****)((uint)local_5c & 0xff);
      pppppppuVar25 = local_60;
    }
    bVar37 = (byte)pppppuVar38;
    goto LAB_00a9ce64;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x9c)) {
    case 0:
      piVar46 = *(int **)(param_1 + 0x98);
      goto LAB_00a9d168;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187886c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187886c);
    case 3:
      uVar19 = *(undefined4 *)(param_1 + 0x90);
      puVar20 = *(undefined **)(param_1 + 0x94);
      goto LAB_00a9d1b4;
    }
  }
LAB_00a9cc78:
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(int **)(param_1 + 0x3c) = piVar9;
  *(undefined4 *)(param_1 + 0x40) = 0;
LAB_00a9cc98:
  piVar10 = (int *)(param_1 + 0x40);
  piVar46 = (int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar46 = *(int **)(param_1 + 0x3c);
  }
  iVar8 = *piVar46;
  ppppppuVar39 = (uint ******)(iVar8 + 8);
  do {
    if (*ppppppuVar39 != (uint *****)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppppppuVar39);
      goto LAB_00a9cce4;
    }
    bVar2 = (bool)hasExclusiveAccess(ppppppuVar39);
  } while (!bVar2);
  *ppppppuVar39 = (uint *****)0x1;
  DataMemoryBarrier(0xb);
LAB_00a9cce4:
  uVar45 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar7 = *(char *)(iVar8 + 0xc);
  }
  else {
    uVar45 = FUN_015bf3f8();
    uVar45 = uVar45 ^ 1;
    cVar7 = *(char *)(iVar8 + 0xc);
  }
  if (cVar7 != '\0') {
    local_5c._1_3_ = (undefined3)((uint)local_5c >> 8);
    local_5c = (uint *******)CONCAT31(local_5c._1_3_,(char)uVar45);
    local_60 = (uint *******)ppppppuVar39;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_0186dc58,&DAT_01886a4c);
  }
  FUN_00a8dea4(iVar8 + 0x10,1);
  uVar29 = param_1;
  if (*(int *)(iVar8 + 0x1c) == 0) {
LAB_00a9cde0:
    bVar37 = (byte)uVar29;
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar8 + 0x4c) != '\0') {
      if (((uVar45 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
        *(undefined1 *)(iVar8 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        pppppuVar38 = *ppppppuVar39;
        bVar2 = (bool)hasExclusiveAccess(ppppppuVar39);
      } while (!bVar2);
      *ppppppuVar39 = (uint *****)0x0;
      if (pppppuVar38 == (uint *****)0x2) {
        FUN_016d6968(0xf0,ppppppuVar39,0x81,1);
      }
      pppppppuVar25 = (uint *******)0x0;
      goto LAB_00a9ce34;
    }
    local_34 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    local_5c = (uint *******)&DAT_00000001;
    local_60 = (uint *******)&DAT_00000001;
    local_2c = local_2c & 0xffff0000;
    local_38 = 0;
    local_58 = (uint *******)0x0;
    piVar9 = (int *)thunk_FUN_016d4a50(0x38);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x38);
    }
    *piVar9 = (int)local_60;
    piVar9[1] = (int)local_5c;
    piVar9[2] = (int)local_58;
    piVar9[3] = (int)local_54;
    piVar9[4] = (int)local_50;
    piVar9[5] = (int)local_4c;
    piVar9[6] = (int)local_48;
    piVar9[7] = (int)local_44;
    piVar9[8] = (int)local_40;
    piVar9[9] = local_3c;
    piVar9[10] = local_38;
    *(undefined8 *)(piVar9 + 0xb) = local_34;
    piVar9[0xd] = local_2c;
    do {
      iVar13 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar13 + 1;
    if (iVar13 < 0) goto LAB_00a9e448;
    uVar29 = *(uint *)(iVar8 + 0x20);
    uVar26 = *(uint *)(iVar8 + 0x2c);
    if (uVar26 == uVar29) {
      FUN_00aa2a4c();
      uVar29 = *(uint *)(iVar8 + 0x20);
      uVar26 = *(uint *)(iVar8 + 0x2c);
    }
    uVar27 = *(int *)(iVar8 + 0x28) + uVar26;
    *(uint *)(iVar8 + 0x2c) = uVar26 + 1;
    uVar26 = uVar27 - uVar29;
    if (uVar27 < uVar29) {
      uVar26 = uVar27;
    }
    puVar12 = (undefined4 *)(*(int *)(iVar8 + 0x24) + uVar26 * 8);
    *puVar12 = piVar9;
    puVar12[1] = &DAT_0186dcc0;
    if ((uVar45 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
      iVar13 = FUN_015bf3f8();
      if (iVar13 == 0) {
        *(undefined1 *)(iVar8 + 0xc) = 1;
      }
    }
    DataMemoryBarrier(0xb);
    do {
      pppppuVar38 = *ppppppuVar39;
      bVar2 = (bool)hasExclusiveAccess(ppppppuVar39);
    } while (!bVar2);
    *ppppppuVar39 = (uint *****)0x0;
    if (pppppuVar38 == (uint *****)0x2) {
      FUN_016d6968(0xf0,ppppppuVar39,0x81,1);
      piVar46 = (int *)*piVar10;
    }
    else {
      piVar46 = (int *)*piVar10;
    }
    if (piVar46 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar46;
        bVar2 = (bool)hasExclusiveAccess(piVar46);
      } while (!bVar2);
      *piVar46 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaafd4(*piVar10);
      }
    }
    *piVar10 = (int)piVar9;
    uVar50 = local_34;
    goto LAB_00a9d6f8;
  }
  *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + -1;
  uVar29 = *(int *)(iVar8 + 0x18) + 1;
  puVar12 = (undefined4 *)(*(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0x18) * 0x14);
  pppppppuVar25 = (uint *******)*puVar12;
  uVar26 = uVar29 - *(uint *)(iVar8 + 0x10);
  if (uVar29 < *(uint *)(iVar8 + 0x10)) {
    uVar26 = uVar29;
  }
  bVar37 = *(byte *)(puVar12 + 1);
  uVar29 = (uint)bVar37;
  *(uint *)(iVar8 + 0x18) = uVar26;
  if (pppppppuVar25 == (uint *******)0x0) goto LAB_00a9cde0;
  local_60 = *(uint ********)((int)puVar12 + 5);
  local_5c = *(uint ********)((int)puVar12 + 9);
  local_58 = *(uint ********)((int)puVar12 + 0xd);
  local_54._0_3_ = (undefined3)((uint)puVar12[4] >> 8);
  if (((uVar45 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(iVar8 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    pppppuVar38 = *ppppppuVar39;
    bVar2 = (bool)hasExclusiveAccess(ppppppuVar39);
  } while (!bVar2);
  *ppppppuVar39 = (uint *****)0x0;
  if (pppppuVar38 == (uint *****)0x2) {
    FUN_016d6968(0xf0,ppppppuVar39,0x81,1);
  }
  pppppppuStack_6c = (uint *******)CONCAT13(pppppppuStack_6c._3_1_,(int3)local_54);
  uStack_70 = local_58;
  local_78 = local_60;
  local_74 = local_5c;
LAB_00a9ce34:
  uStack_84 = CONCAT13(uStack_84._3_1_,(int3)local_54);
  uStack_88 = local_58;
  local_90 = local_60;
  pppppppuStack_8c = local_5c;
LAB_00a9ce64:
  pppppppuVar28 = uStack_88;
  pppppppuVar23 = pppppppuStack_8c;
  pppppppuVar48 = local_90;
  puVar12 = (undefined4 *)(param_1 + 0x38);
  uVar31 = uStack_88._3_1_;
  uVar6 = (undefined3)uStack_84;
  FUN_00a9ba0c(puVar12);
  if (pppppppuVar25 == (uint *******)0x0) goto LAB_00a9cfb0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(uint ********)(param_1 + 0x45) = pppppppuVar28;
  *(byte *)(param_1 + 0x3c) = bVar37;
  *(uint ********)(param_1 + 0x38) = pppppppuVar25;
  *(undefined2 *)(param_1 + 0x33) = 0x101;
  *(uint ********)(param_1 + 0x3d) = pppppppuVar48;
  *(uint ********)(param_1 + 0x41) = pppppppuVar23;
  *(uint *)(param_1 + 0x48) = CONCAT31(uVar6,uVar31);
  piVar46 = *(int **)(param_1 + 0x24);
  if (piVar46 == (int *)0xffffffff) {
LAB_00a9cf2c:
    pppppppuVar48 = pppppppuVar25 + 0x11;
    do {
      ppppppuVar39 = *pppppppuVar48;
      bVar2 = (bool)hasExclusiveAccess(pppppppuVar48);
    } while (!bVar2);
    *pppppppuVar48 = (uint ******)((int)ppppppuVar39 - 1);
    if (ppppppuVar39 == (uint ******)0x1) {
      FUN_00a8e328(pppppppuVar25 + 2);
    }
    piVar46 = (int *)*puVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*puVar12);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
    }
LAB_00a9cfb0:
    *(undefined1 *)(param_1 + 0x35) = 0;
    *(undefined2 *)(param_1 + 0x33) = 0;
    if (*(int *)(param_1 + 0x24) != -1) {
      piVar46 = (int *)(*(int *)(param_1 + 0x24) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar46;
        bVar2 = (bool)hasExclusiveAccess(piVar46);
      } while (!bVar2);
      *piVar46 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
    iVar8 = *piVar9;
    piVar46 = (int *)(iVar8 + 0x48);
    do {
      iVar13 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar13 + -1;
    if (iVar13 == 1) {
      FUN_00a8db58(iVar8 + 8);
    }
    uVar50 = CONCAT44(local_34._4_4_,(undefined4)local_34);
    piVar46 = (int *)*piVar9;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar8 + -1;
    uVar19 = 0;
    uVar31 = 1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaac8c(*piVar9);
      uVar50 = CONCAT44(local_34._4_4_,(undefined4)local_34);
    }
    goto LAB_00a9d064;
  }
  iVar8 = *piVar46;
  do {
    if (iVar8 == 0) {
      pppppppuVar25 = (uint *******)*puVar12;
      goto LAB_00a9cf2c;
    }
    if (iVar8 < 0) {
      local_5c = (uint *******)&DAT_0157d360;
      local_60 = (uint *******)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_60,&DAT_018ae288);
    }
    iVar13 = *piVar46;
    if (iVar13 == iVar8) {
      bVar1 = (bool)hasExclusiveAccess(piVar46);
      if (bVar1) {
        *piVar46 = iVar8 + 1;
      }
      bVar2 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    iVar8 = iVar13;
  } while (!bVar2);
  uVar40 = *(undefined4 *)(param_1 + 0x3c);
  iVar8 = 1;
  iVar13 = *(int *)(param_1 + 0x40);
  uVar47 = *(undefined4 *)(param_1 + 0x44);
  uVar19 = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x31) = 0x101;
  *(int **)(param_1 + 0x4c) = piVar46;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = uVar40;
  *(int *)(param_1 + 0x58) = iVar13;
  if ((iVar13 != 0) && (iVar8 = thunk_FUN_016d4a50(iVar13), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,iVar13);
  }
  FUN_016dd1aa(iVar8,uVar40,iVar13);
  piVar46 = piVar46 + 2;
  *(int *)(param_1 + 0x60) = iVar8;
  *(undefined4 *)(param_1 + 0x68) = uVar47;
  *(int **)(param_1 + 0x98) = piVar46;
  *(int *)(param_1 + 100) = iVar13;
  *(undefined4 *)(param_1 + 0x6c) = uVar19;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
LAB_00a9d168:
  *(undefined4 *)(param_1 + 0x70) = 10;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x6c);
  local_60 = *(uint ********)(param_1 + 0x70);
  local_5c = *(uint ********)(param_1 + 0x74);
  local_58 = *(uint ********)(param_1 + 0x78);
  local_54 = *(uint ********)(param_1 + 0x7c);
  local_50 = *(uint ********)(param_1 + 0x80);
  local_4c = *(undefined **)(param_1 + 0x84);
  local_48 = *(uint ********)(param_1 + 0x88);
  local_44 = *(uint *******)(param_1 + 0x8c);
  uVar19 = FUN_00aa4d1c(*piVar46);
  puVar20 = &DAT_0186df74;
  *(undefined4 *)(param_1 + 0x90) = uVar19;
  *(undefined **)(param_1 + 0x94) = &DAT_0186df74;
LAB_00a9d1b4:
  uVar51 = (**(code **)(puVar20 + 0xc))(uVar19,param_2);
  ppppuVar11 = (uint ****)(uVar51 >> 0x20);
  if ((uVar51 & 1) == 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x90);
    puVar12 = *(undefined4 **)(param_1 + 0x94);
    pcVar21 = (code *)*puVar12;
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(uVar19);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_016d3fb4(uVar19);
    }
    *(undefined1 *)(param_1 + 0x9c) = 1;
    if ((uVar51 & 1) != 0) goto LAB_00a9d558;
    FUN_00a9bb4c(param_1 + 0x60);
    if (ppppuVar11 == (uint ****)0x0) {
      iVar8 = *(int *)(param_1 + 0x4c);
      pcVar34 = (char *)(iVar8 + 0x10);
      if (*pcVar34 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(pcVar34);
        if (!bVar2) goto LAB_00a9d718;
        *pcVar34 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00a9d718:
        FUN_01280da8(pcVar34);
      }
      FUN_0128236c(pcVar34);
      pppppppuVar48 = *(uint ********)(param_1 + 0x54);
      pppppppuVar25 = *(uint ********)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x32) = 0;
      FUN_00ac348c(&local_60);
      lVar3 = ZEXT48((byte *)((int)local_50 + (int)pppppppuVar25)) * 0x4c957f2d;
      uVar45 = (uint)lVar3;
      iVar13 = (int)(local_4c + CARRY4((uint)local_50,(uint)pppppppuVar25)) * 0x4c957f2d +
               ((int)local_50 + (int)pppppppuVar25) * 0x5851f42d + (int)((ulonglong)lVar3 >> 0x20);
      if (pppppppuVar25 < &DAT_00000009) {
        if (pppppppuVar25 < &SUB_00000002) {
          if (pppppppuVar25 == (uint *******)&DAT_00000001) {
            ppppppuVar22 = (uint ******)(uint)*(byte *)pppppppuVar48;
            ppppppuVar39 = ppppppuVar22;
          }
          else {
            ppppppuVar39 = (uint ******)0x0;
            ppppppuVar22 = (uint ******)0x0;
          }
        }
        else if (pppppppuVar25 < &DAT_00000004) {
          ppppppuVar22 = (uint ******)(uint)((byte *)((int)pppppppuVar48 + (int)pppppppuVar25))[-1];
          ppppppuVar39 = (uint ******)(uint)*(ushort *)pppppppuVar48;
        }
        else {
          ppppppuVar22 = *(uint *******)((byte *)((int)pppppppuVar48 + (int)pppppppuVar25) + -4);
          ppppppuVar39 = *pppppppuVar48;
        }
        uVar27 = (uint)local_60 ^ (uint)ppppppuVar39;
        uVar30 = (int)local_54 << 0x18 | ((uint)local_54 >> 8 & 0xff) << 0x10 |
                 ((uint)local_54 >> 0x10 & 0xff) << 8 | (uint)local_54 >> 0x18;
        uVar26 = (uint)local_58 ^ (uint)ppppppuVar22;
        lVar3 = (ulonglong)uVar27 * (ulonglong)uVar30;
        uVar29 = (int)local_5c << 0x18 | ((uint)local_5c >> 8 & 0xff) << 0x10 |
                 ((uint)local_5c >> 0x10 & 0xff) << 8 | (uint)local_5c >> 0x18;
        lVar4 = (ulonglong)~uVar26 * (ulonglong)uVar29;
        uVar33 = (uint)lVar4;
        uVar29 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                 uVar27 >> 0x18) * ~uVar26 +
                 uVar29 * ~(uint)local_54 + (int)((ulonglong)lVar4 >> 0x20);
        uVar26 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                 uVar33 >> 0x18) ^ (int)local_44 + (uint)CARRY4((uint)local_48,uVar45) + iVar13 ^
                 (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                 uVar26 >> 0x18) * uVar27 + uVar30 * (int)local_5c + (int)((ulonglong)lVar3 >> 0x20)
        ;
        uVar45 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18) ^ (int)local_48 + uVar45 ^ (uint)lVar3;
      }
      else {
        if (&DAT_00000010 < pppppppuVar25) {
          pbVar14 = (byte *)((int)pppppppuVar48 + (int)pppppppuVar25);
          uVar26 = (uint)local_60 ^ *(uint *)(pbVar14 + -0x10);
          uVar29 = (uint)local_54 ^ *(uint *)(pbVar14 + -4);
          uVar35 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          uVar33 = (uint)local_58 ^ *(uint *)(pbVar14 + -8);
          uVar27 = (uint)local_5c ^ *(uint *)(pbVar14 + -0xc);
          lVar3 = (ulonglong)uVar26 * (ulonglong)uVar35;
          uVar30 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                   uVar27 >> 0x18;
          lVar4 = (ulonglong)~uVar33 * (ulonglong)uVar30;
          uVar43 = (uint)lVar4;
          uVar29 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                   uVar26 >> 0x18) * ~uVar33 + uVar30 * ~uVar29 + (int)((ulonglong)lVar4 >> 0x20);
          uVar26 = (uVar43 << 0x18 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
                   uVar43 >> 0x18) ^ (int)local_44 + (uint)CARRY4((uint)local_48,uVar45) + iVar13 ^
                   (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                   uVar33 >> 0x18) * uVar26 + uVar35 * uVar27 + (int)((ulonglong)lVar3 >> 0x20);
          uVar45 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8
                   | uVar29 >> 0x18) ^ (int)local_48 + uVar45 ^ (uint)lVar3;
          uVar29 = uVar26 << 0x17 | uVar45 >> 9;
          uVar45 = uVar45 << 0x17 | uVar26 >> 9;
          pppppppuVar23 = pppppppuVar25;
          pppppppuVar28 = pppppppuVar48;
          do {
            pppppppuVar49 = pppppppuVar28 + 2;
            pppppppuVar23 = pppppppuVar23 + -4;
            uVar27 = (uint)*pppppppuVar49 ^ ~(uint)local_58;
            uVar33 = (uint)local_5c ^ (uint)pppppppuVar28[1];
            pppppppuVar41 = pppppppuVar28 + 3;
            uVar26 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                     uVar33 >> 0x18;
            ppppppuVar39 = *pppppppuVar28;
            pppppppuVar28 = pppppppuVar28 + 4;
            lVar3 = (ulonglong)uVar27 * (ulonglong)uVar26;
            uVar43 = (uint)lVar3;
            uVar30 = (uint)local_60 ^ (uint)ppppppuVar39;
            uVar26 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
                     uVar30 >> 0x18) * uVar27 +
                     uVar26 * ((uint)*pppppppuVar41 ^ ~(uint)local_54) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar27 = (uint)local_54 ^ (uint)*pppppppuVar41;
            uVar27 = uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                     uVar27 >> 0x18;
            lVar3 = (ulonglong)uVar30 * (ulonglong)uVar27;
            uVar35 = (uint)local_58 ^ (uint)*pppppppuVar49;
            uVar26 = (uVar26 * 0x1000000 | (uVar26 >> 8 & 0xff) << 0x10 |
                      (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) ^ uVar45 + (int)local_48 ^
                     (uint)lVar3;
            uVar45 = (uVar43 << 0x18 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
                     uVar43 >> 0x18) ^ (int)local_44 + CARRY4(uVar45,(uint)local_48) + uVar29 ^
                     (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                     uVar35 >> 0x18) * uVar30 + uVar27 * uVar33 + (int)((ulonglong)lVar3 >> 0x20);
            uVar29 = uVar45 << 0x17 | uVar26 >> 9;
            uVar45 = uVar26 << 0x17 | uVar45 >> 9;
          } while (&DAT_00000010 < pppppppuVar23);
          goto LAB_00a9dad8;
        }
        uVar29 = (uint)local_60 ^ (uint)*pppppppuVar48;
        uVar26 = (uint)local_5c ^ (uint)pppppppuVar48[1];
        uVar33 = (uint)local_54 ^ *(uint *)((byte *)((int)pppppppuVar48 + (int)pppppppuVar25) + -4);
        uVar35 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                 uVar33 >> 0x18;
        uVar30 = (uint)local_58 ^ *(uint *)((byte *)((int)pppppppuVar48 + (int)pppppppuVar25) + -8);
        lVar3 = (ulonglong)uVar29 * (ulonglong)uVar35;
        uVar27 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                 uVar26 >> 0x18;
        lVar4 = (ulonglong)~uVar30 * (ulonglong)uVar27;
        uVar43 = (uint)lVar4;
        uVar27 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18) * ~uVar30 + uVar27 * ~uVar33 + (int)((ulonglong)lVar4 >> 0x20);
        uVar26 = (uVar43 << 0x18 | (uVar43 >> 8 & 0xff) << 0x10 | (uVar43 >> 0x10 & 0xff) << 8 |
                 uVar43 >> 0x18) ^ (int)local_44 + (uint)CARRY4((uint)local_48,uVar45) + iVar13 ^
                 (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
                 uVar30 >> 0x18) * uVar29 + uVar35 * uVar26 + (int)((ulonglong)lVar3 >> 0x20);
        uVar45 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                 uVar27 >> 0x18) ^ (int)local_48 + uVar45 ^ (uint)lVar3;
      }
      uVar29 = uVar26 << 0x17 | uVar45 >> 9;
      uVar45 = uVar45 << 0x17 | uVar26 >> 9;
LAB_00a9dad8:
      uVar26 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18;
      lVar3 = (ulonglong)uVar26 * 0xb36a80d2;
      uVar30 = (uint)lVar3;
      uVar27 = uVar45 ^ 0xff;
      uVar45 = (uVar27 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
               uVar45 >> 0x18) * -0x4c957f2e +
               uVar26 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar29 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
               uVar30 >> 0x18) ^
               uVar29 * 0x2df45158 +
               uVar27 * 0x2d7f954c + (int)((ulonglong)uVar27 * 0x2df45158 >> 0x20);
      uVar26 = (uVar45 * 0x1000000 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
               uVar45 >> 0x18) ^ (uint)((ulonglong)uVar27 * 0x2df45158);
      uVar33 = (int)local_44 << 0x18 | ((uint)local_44 >> 8 & 0xff) << 0x10 |
               ((uint)local_44 >> 0x10 & 0xff) << 8 | (uint)local_44 >> 0x18;
      lVar3 = (ulonglong)uVar33 * (ulonglong)uVar26;
      uVar45 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18;
      lVar4 = (ulonglong)~(uint)local_48 * (ulonglong)uVar45;
      uVar27 = (uint)lVar4;
      uVar45 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
               uVar26 >> 0x18) * ~(uint)local_48 +
               uVar45 * ~(uint)local_44 + (int)((ulonglong)lVar4 >> 0x20);
      uVar30 = *(uint *)(iVar8 + 0x50);
      iVar13 = 0;
      uVar27 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
               uVar27 >> 0x18) ^
               uVar29 * uVar33 +
               uVar26 * ((int)local_48 << 0x18 | ((uint)local_48 >> 8 & 0xff) << 0x10 |
                         ((uint)local_48 >> 0x10 & 0xff) << 8 | (uint)local_48 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar45 = (uVar45 * 0x1000000 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
               uVar45 >> 0x18) ^ (uint)lVar3;
      uVar29 = uVar27;
      if ((uVar26 & 0x20) != 0) {
        uVar29 = uVar45;
        uVar45 = uVar27;
      }
      uVar29 = uVar45 << (uVar26 & 0x1f) | (uVar29 >> 1) >> (~uVar26 & 0x1f);
      iVar15 = *(int *)(iVar8 + 0x4c);
      uVar45 = uVar29;
      do {
        uVar45 = uVar30 & uVar45;
        uVar26 = *(uint *)(iVar15 + uVar45);
        uVar27 = uVar26 ^ (uVar29 >> 0x19) * 0x1010101;
        for (uVar27 = ~uVar27 & 0x80808080 & uVar27 + 0xfefefeff; uVar27 != 0;
            uVar27 = uVar27 - 1 & uVar27) {
          uVar33 = uVar45 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                           (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3) &
                   uVar30;
          iVar16 = iVar15 + -0x10 + uVar33 * -0x10;
          if ((pppppppuVar25 == *(uint ********)(iVar16 + 8)) &&
             (iVar16 = thunk_FUN_016dd50a(pppppppuVar48,*(undefined4 *)(iVar16 + 4),pppppppuVar25),
             iVar16 == 0)) {
            if ((DAT_018d9130 < 4) && (DAT_018da5b0 != '\0')) {
              iVar15 = iVar15 + uVar33 * -0x10;
              if (DAT_018da5b0 == '\x01') {
LAB_00a9dce0:
                puVar20 = &DAT_018ae394;
                DataMemoryBarrier(0xb);
                pcVar36 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) &&
                   (pcVar36 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar36 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                iVar8 = (**(code **)(puVar20 + 0x14))(pcVar36,DAT_018da5a8);
                if (iVar8 == 0) goto joined_r0x00a9dddc;
              }
              else if (DAT_018da5b0 != '\x02') {
                cVar7 = FUN_0169ac90(&DAT_018da5a8);
                if (cVar7 == '\0') goto joined_r0x00a9dddc;
                if (cVar7 != '\x02') goto LAB_00a9dce0;
              }
              puVar12 = (undefined4 *)(DAT_018da5a8 + 0x1c);
              pppppppuVar23 = (uint *******)*puVar12;
              pppppppuVar28 = *(uint ********)(DAT_018da5a8 + 0x20);
              if (pppppppuVar28 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186deac);
              }
              pppppppuStack_a4 = *(uint ********)(DAT_018da5a8 + 0x24);
              uStack_a0 = *(undefined4 *)(DAT_018da5a8 + 0x28);
              uVar19 = 0;
              local_9c = 0;
              local_94 = 0x4f;
              local_98 = (uint ******)&DAT_0034e179;
              local_ac = pppppppuVar23;
              pppppppuStack_a8 = pppppppuVar28;
              if (pppppppuVar28 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186deac);
              }
              pppppppuVar49 = (uint *******)&DAT_00000001;
              local_80 = 1;
              pppppppuVar41 = *(uint ********)(iVar15 + -8);
              local_90 = pppppppuVar23;
              pppppppuStack_8c = pppppppuVar28;
              uStack_88 = pppppppuStack_a4;
              uStack_84 = uStack_a0;
              if ((int)pppppppuVar41 < 0) {
LAB_00a9ddb4:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar19,local_144);
              }
              uVar19 = *(undefined4 *)(iVar15 + -0xc);
              pppppppuVar23 = (uint *******)0x0;
              if (pppppppuVar41 != (uint *******)0x0) {
                pppppppuVar49 = (uint *******)thunk_FUN_016d4a50(pppppppuVar41,local_144);
                if (pppppppuVar49 == (uint *******)0x0) {
                  uVar19 = 1;
                  local_144 = pppppppuVar41;
                  goto LAB_00a9ddb4;
                }
                pppppppuVar23 = pppppppuVar41;
              }
              FUN_016dd1aa(pppppppuVar49,uVar19,pppppppuVar41);
              local_c8 = (uint *******)&local_dc;
              local_64 = &DAT_0186debc;
              local_68 = (uint *******)&local_c8;
              pppppppuStack_6c = (uint *******)&local_90;
              local_74 = &local_98;
              local_78 = (uint *******)&local_ac;
              uStack_70 = (uint *******)&DAT_018abb78;
              local_b8 = (uint *******)&local_78;
              local_b4 = 2;
              local_4c = DAT_018da5a8;
              puVar20 = &DAT_018ae394;
              local_50 = (uint *******)&local_b8;
              local_5c = (uint *******)0x0;
              local_60 = (uint *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar36 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar36 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar36 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              local_dc = pppppppuVar23;
              local_d8 = pppppppuVar49;
              local_d4 = pppppppuVar41;
              local_b0 = puVar12;
              iVar8 = (**(code **)(puVar20 + 0x28))(pcVar36,&local_60);
              if (iVar8 != 0) {
                (**(code **)(puVar20 + 0x2c))(pcVar36,&local_60);
              }
              local_144 = pppppppuVar49;
              if (local_dc != (uint *******)0x0) {
                thunk_FUN_016d3fb4(local_d8);
              }
            }
joined_r0x00a9dddc:
            if (pppppppuVar25 != (uint *******)0x0) {
              thunk_FUN_016d3fb4(pppppppuVar48);
            }
            goto LAB_00a9dde8;
          }
        }
        if ((uVar26 & 0x80808080 & uVar26 << 1) != 0) goto LAB_00a9dffc;
        iVar13 = iVar13 + 4;
        uVar45 = iVar13 + uVar45;
      } while( true );
    }
    local_e0 = (uint *****)ppppuVar11;
    if ((DAT_018d9130 < 4) && (DAT_018da5bc != '\0')) {
      if (DAT_018da5bc == '\x01') {
LAB_00a9d268:
        DataMemoryBarrier(0xb);
        pcVar34 = s_SetGloba_00414c05;
        puVar20 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar34 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar34 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar8 = (**(code **)(puVar20 + 0x14))(pcVar34,DAT_018da5b4);
        if (iVar8 == 0) goto LAB_00a9d440;
      }
      else if (DAT_018da5bc != '\x02') {
        cVar7 = FUN_0169ac90(&DAT_018da5b4);
        if (cVar7 == '\0') goto LAB_00a9d440;
        if (cVar7 != '\x02') goto LAB_00a9d268;
      }
      pppppppuVar25 = *(uint ********)(DAT_018da5b4 + 0x20);
      if (pppppppuVar25 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186de7c);
      }
      local_d4 = *(uint ********)(DAT_018da5b4 + 0x24);
      uStack_d0 = *(undefined4 *)(DAT_018da5b4 + 0x28);
      local_dc = *(uint ********)(DAT_018da5b4 + 0x1c);
      local_cc = 0;
      local_c4 = 0x43;
      local_c8 = (uint *******)&DAT_0034e158;
      local_d8 = pppppppuVar25;
      if (pppppppuVar25 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186de7c);
      }
      local_c0 = &local_e0;
      local_9c = 1;
      local_ac = local_dc;
      pppppppuStack_a8 = pppppppuVar25;
      pppppppuStack_a4 = local_d4;
      uStack_a0 = uStack_d0;
      if (pppppppuVar25 < (uint *******)0x3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186de7c);
      }
      local_44 = (uint ******)&local_bc;
      local_48 = (uint *******)&local_90;
      local_50 = &local_c0;
      local_54 = (uint *******)&local_ac;
      local_5c = (uint *******)&local_c8;
      local_80 = 2;
      local_60 = (uint *******)&local_dc;
      local_b4 = 3;
      local_b8 = (uint *******)&local_60;
      local_98 = *(uint *******)(param_1 + 0x54);
      local_94 = *(undefined4 *)(param_1 + 0x58);
      local_bc = (uint ******)&local_98;
      local_68 = (uint *******)&local_b8;
      local_40 = &DAT_0186de9c;
      local_4c = &DAT_0186de8c;
      local_58 = (uint *******)&DAT_018abb78;
      local_74 = (uint *******)0x0;
      local_78 = (uint *******)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar34 = s_SetGloba_00414c05;
      puVar20 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar34 = DAT_018daa74, puVar20 = DAT_018daa78, DAT_018daa70 != 0)
         ) {
        pcVar34 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_b0 = (undefined4 *)(DAT_018da5b4 + 0x1c);
      local_90 = local_dc;
      pppppppuStack_8c = pppppppuVar25;
      uStack_88 = local_d4;
      uStack_84 = uStack_d0;
      local_64 = DAT_018da5b4;
      iVar8 = (**(code **)(puVar20 + 0x28))(pcVar34,&local_78);
      if (iVar8 != 0) {
        (**(code **)(puVar20 + 0x2c))(pcVar34,&local_78);
      }
    }
LAB_00a9d440:
    (*(code *)**local_e0)();
    *(undefined1 *)(param_1 + 0x31) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    }
    iVar8 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x32) = 0;
    piVar46 = (int *)(iVar8 + 0x44);
    do {
      iVar13 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar13 + -1;
    if (iVar13 == 1) {
      FUN_00a8e328(iVar8 + 8);
    }
    piVar46 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x50));
    }
    piVar46 = *(int **)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x30) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaa68(*(undefined4 *)(param_1 + 0x4c));
    }
    goto LAB_00a9decc;
  }
  *(undefined1 *)(param_1 + 0x9c) = 3;
LAB_00a9d558:
  uVar50 = CONCAT44(local_34._4_4_,(undefined4)local_34);
  uVar19 = 1;
  uVar31 = 4;
  goto LAB_00a9d064;
LAB_00a9dffc:
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_54 = *(uint ********)(param_1 + 0x50);
  uVar26 = *(uint *)(iVar8 + 0x50);
  puVar17 = *(uint **)(iVar8 + 0x4c);
  uVar45 = uVar26 & uVar29;
  uVar27 = *(uint *)((int)puVar17 + uVar45) & 0x80808080;
  if (uVar27 == 0) {
    iVar13 = 4;
    do {
      uVar45 = uVar45 + iVar13;
      iVar13 = iVar13 + 4;
      uVar45 = uVar45 & uVar26;
      uVar27 = *(uint *)((int)puVar17 + uVar45) & 0x80808080;
    } while (uVar27 == 0);
  }
  uVar45 = uVar45 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                   (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3) & uVar26;
  bVar37 = *(byte *)((int)puVar17 + uVar45);
  if (-1 < (char)bVar37) {
    uVar45 = *puVar17 & 0x80808080;
    uVar45 = LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 |
                     (uVar45 >> 0x10 & 0xff) << 8 | uVar45 >> 0x18);
    bVar37 = *(byte *)((int)puVar17 + (uVar45 >> 3));
    uVar45 = uVar45 >> 3;
  }
  bVar5 = (byte)(uVar29 >> 0x18);
  local_60 = pppppppuVar25;
  local_5c = pppppppuVar48;
  local_58 = pppppppuVar25;
  if (((bVar37 & 1) == 0) || (*(int *)(iVar8 + 0x54) != 0)) {
    iVar13 = *(int *)(iVar8 + 0x54) - (bVar37 & 1);
    *(byte *)((int)puVar17 + uVar45) = bVar5 >> 1;
  }
  else {
    FUN_00a66d18(iVar8 + 0x4c);
    uVar26 = *(uint *)(iVar8 + 0x50);
    puVar17 = *(uint **)(iVar8 + 0x4c);
    uVar29 = uVar26 & uVar29;
    uVar45 = *(uint *)((int)puVar17 + uVar29) & 0x80808080;
    if (uVar45 == 0) {
      iVar13 = 4;
      do {
        uVar29 = uVar29 + iVar13;
        iVar13 = iVar13 + 4;
        uVar29 = uVar29 & uVar26;
        uVar45 = *(uint *)((int)puVar17 + uVar29) & 0x80808080;
      } while (uVar45 == 0);
    }
    uVar45 = uVar29 + ((uint)LZCOUNT(uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 |
                                     (uVar45 >> 0x10 & 0xff) << 8 | uVar45 >> 0x18) >> 3) & uVar26;
    uVar29 = (uint)*(char *)((int)puVar17 + uVar45);
    if (-1 < (int)uVar29) {
      uVar45 = *puVar17 & 0x80808080;
      uVar45 = LZCOUNT((*puVar17 & 0x80) << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 |
                       (uVar45 >> 0x10 & 0xff) << 8 | uVar45 >> 0x18);
      uVar29 = (uint)*(byte *)((int)puVar17 + (uVar45 >> 3));
      uVar45 = uVar45 >> 3;
    }
    iVar13 = *(int *)(iVar8 + 0x54);
    *(byte *)((int)puVar17 + uVar45) = bVar5 >> 1;
    iVar13 = iVar13 - (uVar29 & 1);
  }
  *(int *)(iVar8 + 0x54) = iVar13;
  *(byte *)((int)puVar17 + (uVar45 - 4 & uVar26) + 4) = bVar5 >> 1;
  *(int *)(iVar8 + 0x58) = *(int *)(iVar8 + 0x58) + 1;
  puVar17[uVar45 * -4 + -4] = (uint)local_60;
  puVar17[uVar45 * -4 + -3] = (uint)local_5c;
  puVar17[uVar45 * -4 + -1] = (uint)local_54;
  puVar17[uVar45 * -4 + -2] = (uint)local_58;
LAB_00a9dde8:
  FUN_01282570(pcVar34);
  if (*pcVar34 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar34);
      if (bVar2) {
        *pcVar34 = '\0';
        goto LAB_00a9de28;
      }
    } while (*pcVar34 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar34);
LAB_00a9de28:
  *(undefined2 *)(param_1 + 0x31) = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar8 = *(int *)(param_1 + 0x50);
    piVar46 = (int *)(iVar8 + 0x44);
    do {
      iVar13 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar13 + -1;
    if (iVar13 == 1) {
      FUN_00a8e328(iVar8 + 8);
    }
    piVar46 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar46;
      bVar2 = (bool)hasExclusiveAccess(piVar46);
    } while (!bVar2);
    *piVar46 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x50));
    }
  }
  piVar46 = *(int **)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x30) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar46;
    bVar2 = (bool)hasExclusiveAccess(piVar46);
  } while (!bVar2);
  *piVar46 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaa68(*(undefined4 *)(param_1 + 0x4c));
  }
LAB_00a9decc:
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  goto LAB_00a9cc78;
code_r0x00a9c80c:
  *(char *)pppppuVar32 = '\x01';
  DataMemoryBarrier(0xb);
  cVar7 = *(char *)(pppppuVar38 + 0xd);
  DataMemoryBarrier(0xb);
  ppppuVar44 = (uint ****)*ppppuVar11;
  pppppppuVar25 = (uint *******)ppppuVar11[1];
  if ((uint *******)pppppuVar38[0xc] == pppppppuVar25) {
    ppppuVar11 = pppppuVar38[0xb];
  }
  if ((uint *******)pppppuVar38[0xc] == pppppppuVar25 && ppppuVar11 == ppppuVar44) {
    DataMemoryBarrier(0xb);
    *(char *)pppppuVar32 = '\0';
    if (cVar7 == '\0') goto LAB_00a9c9cc;
  }
  else {
    uVar50 = (*(code *)*ppppuVar44)(pppppppuVar25);
    (*(code *)pppppuVar38[0xb][3])(pppppuVar38[0xc]);
    *(undefined8 *)(pppppuVar38 + 0xb) = uVar50;
    if (cVar7 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)pppppuVar32 = '\0';
LAB_00a9c9cc:
      bVar2 = true;
      goto LAB_00a9c9d0;
    }
    (*(code *)ppppuVar44[2])(pppppppuVar25);
    DataMemoryBarrier(0xb);
    *(char *)pppppuVar32 = '\0';
  }
  piVar10 = (int *)*piVar42;
  if (*piVar46 == 0) {
    piVar10 = piVar42;
  }
  pppppppuVar25 = (uint *******)*piVar10;
  pppppppuVar48 = pppppppuVar25 + 2;
  do {
    if (*pppppppuVar48 != (uint ******)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(pppppppuVar48);
      goto LAB_00a9c8fc;
    }
    bVar2 = (bool)hasExclusiveAccess(pppppppuVar48);
  } while (!bVar2);
  *pppppppuVar48 = (uint ******)0x1;
  DataMemoryBarrier(0xb);
LAB_00a9c8fc:
  uVar45 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    bVar37 = *(byte *)(pppppppuVar25 + 3);
  }
  else {
    uVar45 = FUN_015bf3f8();
    uVar45 = uVar45 ^ 1;
    bVar37 = *(byte *)(pppppppuVar25 + 3);
  }
  if (bVar37 != 0) {
    local_5c._1_3_ = (undefined3)((uint)local_5c >> 8);
    local_5c = (uint *******)CONCAT31(local_5c._1_3_,(char)uVar45);
    local_60 = pppppppuVar48;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_0186dc58,&DAT_01886a4c);
  }
  ppppppuVar22 = pppppppuVar25[8];
  ppppppuVar39 = pppppppuVar25[0xb];
  if (ppppppuVar39 == ppppppuVar22) {
    FUN_00aa2a4c();
    ppppppuVar22 = pppppppuVar25[8];
    ppppppuVar39 = pppppppuVar25[0xb];
  }
  ppppppuVar24 = pppppppuVar25[9];
  pppppppuVar25[0xb] = (uint ******)((int)ppppppuVar39 + 1);
  ppppppuVar39 = (uint ******)((int)pppppppuVar25[10] + (int)ppppppuVar39);
  ppppppuVar18 = (uint ******)((int)ppppppuVar39 - (int)ppppppuVar22);
  if (ppppppuVar39 < ppppppuVar22) {
    ppppppuVar18 = ppppppuVar39;
  }
  ppppppuVar24[(int)ppppppuVar18 * 2] = pppppuVar38;
  (ppppppuVar24 + (int)ppppppuVar18 * 2)[1] = (uint *****)&DAT_0186dcc0;
  if (((uVar45 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(byte *)(pppppppuVar25 + 3) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    ppppppuVar39 = *pppppppuVar48;
    bVar2 = (bool)hasExclusiveAccess(pppppppuVar48);
  } while (!bVar2);
  *pppppppuVar48 = (uint ******)0x0;
  bVar2 = false;
  if (ppppppuVar39 == (uint ******)0x2) {
    FUN_016d6968(0xf0,pppppppuVar48,0x81,1);
  }
LAB_00a9c9d0:
  piVar10 = (int *)*piVar42;
  if (*piVar46 == 0) {
    piVar10 = piVar42;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar10 + 0x4c) == '\0') {
    bVar1 = true;
  }
  else {
    piVar10 = (int *)*piVar42;
    if (*piVar46 == 0) {
      piVar10 = piVar42;
    }
    FUN_00a8f8ec(&local_60,*piVar10 + 8);
    if (local_60 != (uint *******)0x0) {
      piVar42 = (int *)((uint)local_5c & 0xff);
      local_78 = (uint *******)CONCAT13((undefined1)local_58,local_5c._1_3_);
      local_74 = (uint *******)CONCAT13((undefined1)local_54,(int3)((uint)local_58 >> 8));
      uStack_70 = (uint *******)CONCAT13(local_50._0_1_,(int3)((uint)local_54 >> 8));
      pppppppuStack_6c._0_3_ = (undefined3)((uint)local_50 >> 8);
    }
    bVar1 = false;
    local_90 = local_78;
    pppppppuStack_8c = local_74;
    uStack_88 = uStack_70;
    uStack_84 = CONCAT13(uStack_84._3_1_,pppppppuStack_6c._0_3_);
    pppppppuVar25 = local_60;
  }
  uVar50 = CONCAT44(local_34._4_4_,(undefined4)local_34);
  bVar37 = (byte)piVar42;
  if (bVar2) {
    DataMemoryBarrier(0xb);
    do {
      ppppuVar11 = *pppppuVar38;
      bVar2 = (bool)hasExclusiveAccess(pppppuVar38);
    } while (!bVar2);
    *pppppuVar38 = (uint ****)((int)ppppuVar11 + -1);
    if (ppppuVar11 == (uint ****)0x1) {
      DataMemoryBarrier(0xb);
      FUN_00aaafd4(pppppuVar38);
    }
    uVar50 = CONCAT44(local_34._4_4_,(undefined4)local_34);
  }
  if (!bVar1) goto LAB_00a9ce64;
LAB_00a9d6f8:
  uVar19 = 1;
  uVar31 = 3;
LAB_00a9d064:
  *(undefined1 *)(param_1 + 0x36) = uVar31;
  if (*(uint *)(param_1 + 8) != 2) {
    iVar8 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar8 = iVar8 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    local_34 = uVar50;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar8,param_1);
  }
  return uVar19;
}

