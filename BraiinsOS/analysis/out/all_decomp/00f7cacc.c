// FUN_00f7cacc @ 00f7cacc size=5644 calls_out=33 calls_in=4
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00f7cacc(undefined4 *param_1,int param_2,uint param_3,uint param_4,int param_5,
                 uint *param_6,uint param_7,int *param_8,int param_9)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint *******pppppppuVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *******pppppppuVar12;
  int *piVar13;
  uint *******pppppppuVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint *puVar18;
  int iVar19;
  uint *******pppppppuVar20;
  uint ******ppppppuVar21;
  char *pcVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  uint *******pppppppuVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint *******pppppppuVar29;
  int iVar30;
  uint *******pppppppuVar31;
  int *piVar32;
  uint *******pppppppuVar33;
  uint *******pppppppuVar34;
  int iVar35;
  int iVar36;
  uint *******pppppppuVar37;
  uint *******pppppppuVar38;
  bool bVar39;
  undefined8 uVar40;
  uint *******local_e0;
  uint *******local_d0;
  uint *******local_c0;
  uint *******local_a0;
  uint *******local_9c;
  uint *******local_98;
  uint *******local_94;
  int *local_90;
  uint local_88;
  undefined4 *local_84;
  uint local_80;
  uint local_78;
  undefined4 *local_74;
  uint local_70;
  uint ******local_68;
  int *local_64;
  uint ******local_60;
  uint *******local_58;
  uint *******local_54;
  uint *******local_50;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  uint *******local_2c;
  undefined1 uStack_25;
  
  iVar10 = FUN_00f7e5b4(param_2,param_9);
  if (iVar10 != 0) {
LAB_00f7cb00:
    *param_1 = 0x80000009;
    param_1[1] = iVar10;
    goto LAB_00f7cb0c;
  }
  uVar27 = param_4 & 0xff;
  if (uVar27 == 2) {
    iVar10 = *(int *)(param_2 + 8);
    pppppppuVar38 = (uint *******)param_6[2];
    uVar25 = (uint)*(byte *)(iVar10 + 0x144);
    bVar39 = (*(byte *)(iVar10 + 0x144) & 1) == 0;
    if (bVar39) {
      uVar25 = *(uint *)(iVar10 + 0x148);
    }
    if (!bVar39 || (uVar25 & 1) != 0) goto joined_r0x00f7cb68;
    if ((*(uint *)(param_5 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_01880374);
    }
    pppppppuVar37 = *(uint ********)(param_5 + 0xc);
    pppppppuVar31 = *(uint ********)(param_5 + 0x10);
    if ((pppppppuVar38 == (uint *******)0x0) && (pppppppuVar37 != (uint *******)0x0)) {
      if (pppppppuVar31 != (uint *******)0x0) {
        piVar32 = &DAT_0035e2f0;
        if (*(int *)(param_5 + 0x28) != 5) {
          piVar32 = (int *)(param_5 + 0x28);
        }
                    /* WARNING: Could not recover jumptable at 0x00f7cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00f7cc50 + *(int *)(&DAT_00f7cc50 + *piVar32 * 4)))(1,&UNK_018805c4);
        return;
      }
      local_50 = (uint *******)0x0;
      local_54 = (uint *******)&DAT_00000004;
      local_58 = (uint *******)0x0;
      iVar23 = 0;
      iVar30 = 4;
      do {
        iVar35 = iVar30;
        if (iVar23 == 0) {
          local_60 = (uint ******)0x0;
          local_64 = (int *)&DAT_00000004;
          local_68 = (uint ******)0x0;
          goto LAB_00f7ddec;
        }
        iVar23 = iVar23 + -0x24;
        iVar30 = iVar35 + 0x24;
      } while (*(char *)(iVar35 + 0x20) != '\0');
      iVar30 = *(int *)(iVar35 + 0x1c);
      uVar17 = 0;
      if (iVar30 < 0) {
LAB_00f7dc7c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar17,iVar30);
      }
      uVar17 = *(undefined4 *)(iVar35 + 0x18);
      if (iVar30 == 0) {
        iVar23 = 0;
        iVar19 = 1;
      }
      else {
        iVar19 = thunk_FUN_016d4a50(iVar30);
        iVar23 = iVar30;
        if (iVar19 == 0) {
          uVar17 = 1;
          goto LAB_00f7dc7c;
        }
      }
      FUN_016dd1aa(iVar19,uVar17,iVar30);
      local_9c = (uint *******)thunk_FUN_016d4a50(0x30);
      if (local_9c == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x30);
      }
      *local_9c = (uint ******)iVar23;
      local_9c[2] = (uint ******)iVar30;
      local_9c[1] = (uint ******)iVar19;
      local_a0 = (uint *******)0x4;
      iVar30 = iVar35 + 0x24;
      ppppppuVar21 = (uint ******)0x1;
      pppppppuVar38 = local_9c;
      while (iVar35 = iVar30, iVar35 != 4) {
        iVar30 = iVar35 + 0x24;
        if (*(char *)(iVar35 + 0x20) == '\0') {
          iVar19 = *(int *)(iVar35 + 0x1c);
          uVar17 = 0;
          local_98 = (uint *******)ppppppuVar21;
          if (iVar19 < 0) {
LAB_00f7e1c0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar17,iVar23);
          }
          uVar17 = *(undefined4 *)(iVar35 + 0x18);
          if (iVar19 == 0) {
            iVar36 = 0;
            iVar23 = 1;
          }
          else {
            iVar23 = thunk_FUN_016d4a50(iVar19);
            if (iVar23 == 0) {
              uVar17 = 1;
              iVar23 = iVar19;
              goto LAB_00f7e1c0;
            }
            iVar36 = iVar19;
          }
          FUN_016dd1aa(iVar23,uVar17,iVar19);
          if ((uint *******)ppppppuVar21 == local_a0) {
            FUN_00f991dc(&local_a0,ppppppuVar21,1,4,0xc);
            pppppppuVar38 = local_9c;
          }
          piVar32 = (int *)(pppppppuVar38 + (int)ppppppuVar21 * 3);
          *piVar32 = iVar36;
          piVar32[1] = iVar23;
          piVar32[2] = iVar19;
          ppppppuVar21 = (uint ******)((int)ppppppuVar21 + 1);
        }
      }
      local_68 = (uint ******)local_a0;
      local_64 = (int *)local_9c;
      local_60 = ppppppuVar21;
LAB_00f7ddec:
      ppppppuVar21 = local_60;
      piVar32 = local_64;
      local_30 = (uint *******)0x0;
      local_9c = (uint *******)&DAT_01880404;
      local_a0 = (uint *******)&local_38;
      local_38 = (uint *******)0x0;
      local_94 = (uint *******)0x0;
      local_34 = (uint *******)&DAT_00000001;
      local_98 = (uint *******)&DAT_60000020;
      iVar30 = FUN_00f9d654(param_5,&local_a0);
      if (iVar30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188041c,&DAT_018af130);
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = local_30;
      local_98 = (uint *******)0x0;
      local_9c = (uint *******)&DAT_00000001;
      local_a0 = (uint *******)0x0;
      uVar17 = FUN_00f94b78(iVar10,&local_a0,piVar32,ppppppuVar21,&local_48);
      piVar13 = piVar32 + 1;
      for (; ppppppuVar21 != (uint ******)0x0; ppppppuVar21 = (uint ******)((int)ppppppuVar21 + -1))
      {
        if (piVar13[-1] != 0) {
          thunk_FUN_016d3fb4(*piVar13);
        }
        piVar13 = piVar13 + 3;
      }
      if (local_68 != (uint ******)0x0) {
        thunk_FUN_016d3fb4(piVar32);
      }
      pppppppuVar38 = local_54;
      pppppppuVar31 = local_54 + 3;
      for (pppppppuVar37 = local_50; pppppppuVar37 != (uint *******)0x0;
          pppppppuVar37 = (uint *******)((int)pppppppuVar37 + -1)) {
        if (((uint)*pppppppuVar31 & 0x7fffffff) == 0) {
          ppppppuVar21 = pppppppuVar31[-3];
        }
        else {
          thunk_FUN_016d3fb4(pppppppuVar31[1]);
          ppppppuVar21 = pppppppuVar31[-3];
        }
        if (ppppppuVar21 != (uint ******)0x0) {
          thunk_FUN_016d3fb4(pppppppuVar31[-2]);
        }
        pppppppuVar31 = pppppppuVar31 + 9;
      }
      if (local_58 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar38);
      }
    }
    else if (pppppppuVar37 == pppppppuVar31) {
      if (pppppppuVar37 == pppppppuVar38) goto joined_r0x00f7cb68;
      local_30 = (uint *******)0x0;
      local_9c = (uint *******)&DAT_01880404;
      local_a0 = (uint *******)&local_38;
      local_38 = (uint *******)0x0;
      local_94 = (uint *******)0x0;
      local_34 = (uint *******)&DAT_00000001;
      local_98 = (uint *******)&DAT_60000020;
      iVar30 = FUN_00f9d654(param_5,&local_a0);
      if (iVar30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188041c,&DAT_018af130);
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = local_30;
      FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
      FUN_00fa04ec(&local_38,&local_a0,4,0);
      uVar17 = FUN_00f97b18(iVar10,&local_48,pppppppuVar37,pppppppuVar38,&local_38);
    }
    else if (pppppppuVar38 < pppppppuVar37) {
      local_30 = (uint *******)0x0;
      local_9c = (uint *******)&DAT_01880404;
      local_a0 = (uint *******)&local_38;
      local_38 = (uint *******)0x0;
      local_94 = (uint *******)0x0;
      local_34 = (uint *******)&DAT_00000001;
      local_98 = (uint *******)&DAT_60000020;
      iVar30 = FUN_00f9d654(param_5,&local_a0);
      if (iVar30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188041c,&DAT_018af130);
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = local_30;
      FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
      FUN_00fa04ec(&local_38,&local_a0,4,0);
      uVar17 = FUN_00f95d50(iVar10,&local_48,pppppppuVar37,pppppppuVar38,&local_38);
    }
    else {
      if (pppppppuVar38 <= pppppppuVar31) goto joined_r0x00f7cb68;
      iVar30 = param_6[1] + (int)pppppppuVar38 * 0xc;
      FUN_006008c8(&local_38,*(undefined4 *)(iVar30 + -8),*(undefined4 *)(iVar30 + -4));
      if (local_38 == (uint *******)&DAT_80000000) {
        FUN_00f990ec(&local_a0,local_30,1,1);
        if (local_a0 == (uint *******)&DAT_00000001) goto LAB_00f7e050;
        FUN_016dd1aa(local_98,local_34,local_30);
        local_54 = local_98;
        local_58 = local_9c;
      }
      else {
        local_58 = local_38;
        local_54 = local_34;
      }
      local_50 = local_30;
      local_30 = (uint *******)0x0;
      local_38 = (uint *******)0x0;
      local_94 = (uint *******)0x0;
      local_34 = (uint *******)&DAT_00000001;
      local_98 = (uint *******)&DAT_60000020;
      local_9c = (uint *******)&DAT_01880404;
      local_a0 = (uint *******)&local_38;
      iVar30 = FUN_00f9d654(param_5,&local_a0);
      if (iVar30 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188041c,&DAT_018af130);
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = local_30;
      FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
      FUN_00fa04ec(&local_38,&local_a0,4,0);
      uVar17 = FUN_00f95f9c(iVar10,&local_58,&local_48,&local_38);
    }
    *param_1 = 0x80000009;
    param_1[1] = uVar17;
    goto LAB_00f7cb0c;
  }
  pppppppuVar38 = (uint *******)param_6[2];
joined_r0x00f7cb68:
  if (pppppppuVar38 == (uint *******)0x0) {
    uVar25 = *(uint *)(param_5 + 0xe0);
    if (uVar25 == 0) {
      pppppppuVar38 = (uint *******)0x0;
    }
    else {
      iVar10 = *(int *)(param_5 + 0xdc);
      pppppppuVar38 = (uint *******)0x0;
      if (*param_6 < uVar25) {
        FUN_00f991dc(param_6,0,uVar25,4,0xc);
        pppppppuVar38 = (uint *******)param_6[2];
      }
      param_8 = (int *)(iVar10 + 4);
      piVar32 = (int *)(param_6[1] + (int)pppppppuVar38 * 0xc + 8);
      iVar10 = param_5;
      do {
        iVar30 = *param_8;
        uVar17 = 0;
        if (iVar30 < 0) {
LAB_00f7e184:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar17,iVar10);
        }
        iVar23 = param_8[-1];
        if (iVar30 == 0) {
          iVar10 = 1;
          iVar35 = 0;
        }
        else {
          iVar10 = thunk_FUN_016d4a50(iVar30,iVar23);
          if (iVar10 == 0) {
            uVar17 = 1;
            iVar10 = iVar30;
            goto LAB_00f7e184;
          }
          iVar35 = iVar30;
        }
        param_8 = param_8 + 2;
        FUN_016dd1aa(iVar10,iVar23,iVar30);
        pppppppuVar38 = (uint *******)((int)pppppppuVar38 + 1);
        piVar32[-1] = iVar10;
        piVar32[-2] = iVar35;
        uVar25 = uVar25 - 1;
        *piVar32 = iVar30;
        piVar32 = piVar32 + 3;
      } while (uVar25 != 0);
      param_7 = 0;
      param_6[2] = (uint)pppppppuVar38;
    }
  }
  puVar11 = *(undefined1 **)(param_5 + 0x38);
  if ((puVar11 != &DAT_00110000) &&
     ((((*(uint *)(*(int *)(param_2 + 8) + 0x144) | *(uint *)(*(int *)(param_2 + 8) + 0x148)) & 0x40
       ) == 0 || (param_7 & 1) == 0 || (param_8 != (int *)0x0)))) {
    if (puVar11 < (undefined1 *)0x80) {
      local_58 = (uint *******)((uint)puVar11 & 0xff);
      pppppppuVar37 = (uint *******)&DAT_00000001;
    }
    else {
      uVar7 = SUB41(puVar11,0);
      uVar5 = (undefined1)((uint)puVar11 >> 6);
      if (puVar11 < (undefined1 *)0x800) {
        local_58 = (uint *******)((CONCAT11(uVar7,uVar5) & 0x3fff | 0x8000) | 0xc0);
        pppppppuVar37 = (uint *******)&SUB_00000002;
      }
      else {
        bVar1 = (byte)((uint)puVar11 >> 0xc);
        if ((uint)puVar11 >> 0x10 == 0) {
          bVar8 = bVar1 | 0xe0;
          local_58._1_3_ = (CONCAT11(uVar7,uVar5) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
          pppppppuVar37 = (uint *******)0x3;
        }
        else {
          pppppppuVar37 = (uint *******)&DAT_00000004;
          bVar8 = (byte)((uint)puVar11 >> 0x12) | 0xf0;
          local_58._1_3_ = CONCAT21(CONCAT11(uVar7,uVar5),bVar1) & 0x3f3f3f | 0x808080;
        }
        local_58 = (uint *******)CONCAT31(local_58._1_3_,bVar8);
      }
    }
    if (pppppppuVar38 == (uint *******)0x0) {
      local_c0 = (uint *******)&DAT_00000004;
      local_48 = (uint *******)0x0;
    }
    else {
      local_c0 = (uint *******)thunk_FUN_016d4a50((uint *******)((int)pppppppuVar38 * 0xc));
      if (local_c0 == (uint *******)0x0) {
        local_9c = (uint *******)&DAT_00000004;
        local_98 = (uint *******)((int)pppppppuVar38 * 0xc);
LAB_00f7e050:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_9c,local_98);
      }
      local_48 = pppppppuVar38;
    }
    pppppppuVar20 = (uint *******)*param_6;
    pppppppuVar29 = (uint *******)param_6[1];
    local_40 = (uint *******)0x0;
    pppppppuVar12 = pppppppuVar29 + (int)pppppppuVar38 * 3;
    local_90 = (int *)0x0;
    pppppppuVar31 = pppppppuVar29;
    local_a0 = pppppppuVar29;
    local_9c = pppppppuVar29;
    local_98 = pppppppuVar20;
    local_94 = pppppppuVar12;
    local_44 = local_c0;
    if (pppppppuVar38 != (uint *******)0x0) {
      piVar32 = (int *)0x0;
      pppppppuVar38 = pppppppuVar29;
      pppppppuVar33 = (uint *******)0x0;
      do {
        pppppppuVar31 = pppppppuVar38 + 3;
        ppppppuVar21 = *pppppppuVar38;
        local_9c = pppppppuVar31;
        if (ppppppuVar21 == (uint ******)0x80000000) goto LAB_00f7d11c;
        pppppppuVar26 = (uint *******)pppppppuVar38[1];
        pppppppuVar38 = (uint *******)pppppppuVar38[2];
        piVar13 = (int *)((int)piVar32 + 1);
        local_90 = piVar13;
        if (pppppppuVar38 < pppppppuVar37) {
LAB_00f7d0b8:
          if (pppppppuVar33 == local_48) {
            FUN_015f37b0(&local_48);
          }
          pppppppuVar34 = (uint *******)((int)pppppppuVar33 + 1);
          local_c0 = local_44;
          pppppppuVar33 = local_44 + (int)pppppppuVar33 * 3;
          *pppppppuVar33 = ppppppuVar21;
          pppppppuVar33[1] = (uint ******)pppppppuVar26;
          pppppppuVar33[2] = (uint ******)pppppppuVar38;
          local_40 = pppppppuVar34;
        }
        else {
          if (pppppppuVar38 != pppppppuVar37) {
            pppppppuVar34 = (uint *******)0x0;
            do {
              if (pppppppuVar38 < pppppppuVar34) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c((undefined1 *)((int)pppppppuVar38 + 1),pppppppuVar38,pppppppuVar38,
                             &DAT_01880a74);
              }
              if ((pppppppuVar37 <= (uint *******)((int)pppppppuVar38 - (int)pppppppuVar34)) &&
                 (iVar10 = thunk_FUN_016dd50a(&local_58,
                                              (undefined1 *)
                                              ((int)pppppppuVar26 + (int)pppppppuVar34),
                                              pppppppuVar37), iVar10 == 0)) goto LAB_00f7cf74;
              pppppppuVar34 = (uint *******)((int)pppppppuVar34 + 1);
            } while (pppppppuVar34 != (uint *******)((int)pppppppuVar38 - (int)pppppppuVar37));
          }
          iVar10 = thunk_FUN_016dd50a(&local_58,
                                      (undefined1 *)
                                      ((int)pppppppuVar26 +
                                      ((int)pppppppuVar38 - (int)pppppppuVar37)),pppppppuVar37);
          if (iVar10 != 0) goto LAB_00f7d0b8;
LAB_00f7cf74:
          uVar25 = *(uint *)(*(int *)(param_2 + 8) + 0x144) |
                   *(uint *)(*(int *)(param_2 + 8) + 0x148);
          bVar39 = (uVar25 & 0x40) != 0;
          if (bVar39) {
            uVar25 = param_7;
          }
          if ((bVar39 && (uVar25 & 1) != 0) && (param_8 == piVar32)) goto LAB_00f7d0b8;
          iVar10 = (int)pppppppuVar33 * 0xc;
          pppppppuVar6 = pppppppuVar26;
          pppppppuVar34 = pppppppuVar33;
          while (pppppppuVar6 != (uint *******)0x0) {
            FUN_00fa7adc(&local_38,pppppppuVar6,pppppppuVar38,&local_58,pppppppuVar37);
            uVar17 = 0;
            local_d0 = (uint *******)0x0;
            pppppppuVar33 = pppppppuVar38;
            if (local_38 != (uint *******)0x0) {
              local_d0 = local_30;
              pppppppuVar38 = local_2c;
              pppppppuVar6 = local_38;
              pppppppuVar33 = local_34;
            }
            if ((int)pppppppuVar33 < 0) {
LAB_00f7e198:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar17,local_e0);
            }
            if (pppppppuVar33 == (uint *******)0x0) {
              local_e0 = (uint *******)0x0;
              pppppppuVar14 = (uint *******)&DAT_00000001;
            }
            else {
              pppppppuVar14 = (uint *******)thunk_FUN_016d4a50(pppppppuVar33);
              local_e0 = pppppppuVar33;
              if (pppppppuVar14 == (uint *******)0x0) {
                uVar17 = 1;
                goto LAB_00f7e198;
              }
            }
            FUN_016dd1aa(pppppppuVar14,pppppppuVar6,pppppppuVar33);
            if (pppppppuVar34 == local_48) {
              FUN_00f991dc(&local_48,pppppppuVar34,1,4,0xc);
              local_c0 = local_44;
            }
            pppppppuVar34 = (uint *******)((int)pppppppuVar34 + 1);
            puVar28 = (undefined4 *)((int)local_c0 + iVar10);
            *puVar28 = local_e0;
            iVar10 = iVar10 + 0xc;
            puVar28[1] = pppppppuVar14;
            puVar28[2] = pppppppuVar33;
            local_e0 = pppppppuVar14;
            local_40 = pppppppuVar34;
            pppppppuVar6 = local_d0;
          }
          if (ppppppuVar21 != (uint ******)0x0) {
            thunk_FUN_016d3fb4(pppppppuVar26);
          }
        }
        piVar32 = piVar13;
        pppppppuVar38 = pppppppuVar31;
        pppppppuVar33 = pppppppuVar34;
      } while (pppppppuVar31 != pppppppuVar12);
      pppppppuVar31 = pppppppuVar12;
    }
LAB_00f7d11c:
    pppppppuVar38 = pppppppuVar31 + 1;
    for (iVar10 = ((uint)((int)pppppppuVar12 - (int)pppppppuVar31) >> 2) * -0x55555555; iVar10 != 0;
        iVar10 = iVar10 + -1) {
      if (pppppppuVar38[-1] != (uint ******)0x0) {
        thunk_FUN_016d3fb4(*pppppppuVar38);
      }
      pppppppuVar38 = pppppppuVar38 + 3;
    }
    if (pppppppuVar20 != (uint *******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar29);
    }
    *param_6 = (uint)local_48;
    param_6[1] = (uint)local_44;
    param_6[2] = (uint)local_40;
  }
  param_3 = param_3 & 0xff;
  cVar9 = '\0';
  if (*(char *)(param_5 + 0x130) != '\t') {
    cVar9 = *(char *)(param_5 + 0x130);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar9) {
  case '\0':
    bVar39 = param_3 == 1;
    uVar17 = *(undefined4 *)(param_5 + 0x114);
    if (param_3 < 2) {
      bVar39 = uVar27 == 2;
    }
    iVar10 = *(int *)(param_5 + 0x118);
    if (bVar39) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
    iVar30 = FUN_00f9c438(param_9,uVar17,iVar10);
    if ((iVar30 == 0) ||
       (iVar30 = *(int *)(param_2 + 8),
       ((*(uint *)(iVar30 + 0x144) | *(uint *)(iVar30 + 0x148)) & 8) != 0)) {
LAB_00f7d270:
      FUN_00f7e8ac(param_2,param_9,param_5,param_4);
      goto LAB_00f7d368;
    }
    piVar32 = (int *)(*(int *)(param_5 + 0x4c) + 4);
    for (iVar23 = *(int *)(param_5 + 0x50) << 3; iVar23 != 0; iVar23 = iVar23 + -8) {
      if ((*piVar32 == iVar10) &&
         (iVar35 = thunk_FUN_016dd50a(piVar32[-1],uVar17,iVar10), iVar35 == 0)) goto LAB_00f7d270;
      piVar32 = piVar32 + 2;
    }
    FUN_00f7fa34(&local_58,param_5);
    pppppppuVar38 = (uint *******)thunk_FUN_016d4a50(0xc);
    if (pppppppuVar38 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    FUN_00f7fa34(&local_a0,param_5);
    *pppppppuVar38 = (uint ******)local_a0;
    pppppppuVar38[1] = (uint ******)local_9c;
    pppppppuVar38[2] = (uint ******)local_98;
    local_40 = (uint *******)&DAT_00000001;
    local_48 = (uint *******)&DAT_00000001;
    local_44 = pppppppuVar38;
    FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
    FUN_00fa04ec(&local_38,&local_a0,4,0);
    iVar10 = FUN_00f96f50(iVar30,&local_58,&local_48,&local_38);
    goto LAB_00f7cb00;
  case '\x01':
    bVar39 = param_3 == 1;
    if (param_3 < 2) {
      bVar39 = uVar27 == 2;
    }
    if (bVar39) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
    FUN_00f7e8ac(param_2,param_9,param_5,param_4);
LAB_00f7d368:
    iVar10 = FUN_00f7fb00(param_2,param_5,param_6,param_4,param_9);
    if (iVar10 == 0) {
      *param_1 = 0x80000002;
      return;
    }
    *param_1 = 0x80000009;
    param_1[1] = iVar10;
    return;
  case '\x02':
    uVar27 = param_6[2];
    if (uVar27 == 0) {
      puVar28 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar28 == (undefined4 *)0x0) {
LAB_00f7e064:
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      puVar16 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4();
      }
      *puVar16 = 0x65757274;
      *puVar28 = 4;
      puVar28[1] = puVar16;
      puVar28[2] = 4;
      local_88 = 1;
      local_80 = 1;
      local_84 = puVar28;
    }
    else {
      local_88 = *param_6;
      local_80 = param_6[2];
      local_84 = (undefined4 *)param_6[1];
    }
    uVar17 = *(undefined4 *)(param_5 + 0x114);
    iVar30 = *(int *)(param_5 + 0x118);
    iVar10 = FUN_00f9c438(param_9,uVar17,iVar30);
    if ((iVar10 == 0) ||
       (iVar10 = *(int *)(param_2 + 8),
       ((*(uint *)(iVar10 + 0x144) | *(uint *)(iVar10 + 0x148)) & 8) != 0)) {
LAB_00f7d700:
      FUN_00f7e8ac(param_2,param_9,param_5,param_4);
      iVar10 = FUN_00f7fb00(param_2,param_5,&local_88,param_4,param_9);
      goto LAB_00f7d860;
    }
    piVar32 = (int *)(*(int *)(param_5 + 0x4c) + 4);
    for (iVar23 = *(int *)(param_5 + 0x50) << 3; iVar23 != 0; iVar23 = iVar23 + -8) {
      if ((*piVar32 == iVar30) &&
         (iVar35 = thunk_FUN_016dd50a(piVar32[-1],uVar17,iVar30), iVar35 == 0)) goto LAB_00f7d700;
      piVar32 = piVar32 + 2;
    }
    FUN_00f7fa34(&local_58,param_5);
    pppppppuVar38 = (uint *******)thunk_FUN_016d4a50(0xc);
    if (pppppppuVar38 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    FUN_00f7fa34(&local_a0,param_5);
    *pppppppuVar38 = (uint ******)local_a0;
    pppppppuVar38[1] = (uint ******)local_9c;
    pppppppuVar38[2] = (uint ******)local_98;
    local_40 = (uint *******)&DAT_00000001;
    local_48 = (uint *******)&DAT_00000001;
    local_44 = pppppppuVar38;
    FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
    FUN_00fa04ec(&local_38,&local_a0,4,0);
    uVar17 = FUN_00f96f50(iVar10,&local_58,&local_48,&local_38);
    *param_1 = 0x80000009;
    param_1[1] = uVar17;
    puVar18 = &local_88;
LAB_00f7dbbc:
    FUN_00fa0494(puVar18);
    goto joined_r0x00f7dbc4;
  case '\x03':
    uVar27 = param_6[2];
    if (uVar27 == 0) {
      local_74 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_74 == (undefined4 *)0x0) goto LAB_00f7e064;
      puVar28 = (undefined4 *)thunk_FUN_016d4a50(5);
      if (puVar28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4();
      }
      *(undefined1 *)(puVar28 + 1) = 0x65;
      *puVar28 = 0x736c6166;
      *local_74 = 5;
      local_74[1] = puVar28;
      local_74[2] = 5;
      local_78 = 1;
      local_70 = 1;
    }
    else {
      local_78 = *param_6;
      local_74 = (undefined4 *)param_6[1];
      local_70 = param_6[2];
    }
    uVar17 = *(undefined4 *)(param_5 + 0x114);
    iVar30 = *(int *)(param_5 + 0x118);
    iVar10 = FUN_00f9c438(param_9,uVar17,iVar30);
    if ((iVar10 != 0) &&
       (iVar10 = *(int *)(param_2 + 8),
       ((*(uint *)(iVar10 + 0x144) | *(uint *)(iVar10 + 0x148)) & 8) == 0)) {
      piVar32 = (int *)(*(int *)(param_5 + 0x4c) + 4);
      for (iVar23 = *(int *)(param_5 + 0x50) << 3; iVar23 != 0; iVar23 = iVar23 + -8) {
        if ((*piVar32 == iVar30) &&
           (iVar35 = thunk_FUN_016dd50a(piVar32[-1],uVar17,iVar30), iVar35 == 0)) goto LAB_00f7d828;
        piVar32 = piVar32 + 2;
      }
      FUN_00f7fa34(&local_58,param_5);
      pppppppuVar38 = (uint *******)thunk_FUN_016d4a50(0xc);
      if (pppppppuVar38 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      FUN_00f7fa34(&local_a0,param_5);
      *pppppppuVar38 = (uint ******)local_a0;
      pppppppuVar38[1] = (uint ******)local_9c;
      pppppppuVar38[2] = (uint ******)local_98;
      local_40 = (uint *******)&DAT_00000001;
      local_48 = (uint *******)&DAT_00000001;
      local_44 = pppppppuVar38;
      FUN_00fa1634(&local_a0,*(undefined4 *)(param_2 + 8));
      FUN_00fa04ec(&local_38,&local_a0,4,0);
      uVar17 = FUN_00f96f50(iVar10,&local_58,&local_48,&local_38);
      *param_1 = 0x80000009;
      param_1[1] = uVar17;
      puVar18 = &local_78;
      goto LAB_00f7dbbc;
    }
LAB_00f7d828:
    FUN_00f7e8ac(param_2,param_9,param_5,param_4);
    iVar10 = FUN_00f7fb00(param_2,param_5,&local_78,param_4,param_9);
    goto LAB_00f7d860;
  case '\x04':
    uVar27 = param_6[2];
    if (uVar27 == 0) {
      uVar17 = *(undefined4 *)(param_5 + 0x114);
      uVar24 = *(undefined4 *)(param_5 + 0x118);
      pcVar15 = (char *)FUN_00f93898(param_9 + 0x20);
      pcVar22 = "";
      if (pcVar15 != (char *)0x0) {
        pcVar22 = pcVar15;
      }
      cVar9 = *pcVar22;
      pppppppuVar38 = (uint *******)thunk_FUN_016d4a50(0xc);
      if (pppppppuVar38 == (uint *******)0x0) goto LAB_00f7e064;
      bVar1 = UnsignedSaturate(cVar9 + '\x01',0x10);
      uVar2 = UnsignedSaturate(0,0x10);
      uVar3 = UnsignedSaturate(0,0x10);
      uVar4 = UnsignedSaturate(0,0x10);
      uVar40 = FUN_00fabbd4((uint)uVar4 << 0x18 | (uint)uVar3 << 0x10 | (uint)uVar2 << 8 |
                            (uint)bVar1,&local_48);
      ppppppuVar21 = (uint ******)((ulonglong)uVar40 >> 0x20);
      FUN_00f990ec(&local_a0,ppppppuVar21,1,1);
      pppppppuVar31 = local_98;
      pppppppuVar37 = local_9c;
      if (local_a0 == (uint *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_9c,local_98);
      }
      FUN_016dd1aa(local_98,(int)uVar40,ppppppuVar21);
      pppppppuVar38[2] = ppppppuVar21;
      *pppppppuVar38 = (uint ******)pppppppuVar37;
      pppppppuVar38[1] = (uint ******)pppppppuVar31;
      local_30 = (uint *******)&DAT_00000001;
      local_38 = (uint *******)&DAT_00000001;
      local_34 = pppppppuVar38;
    }
    else {
      local_38 = (uint *******)*param_6;
      local_30 = (uint *******)param_6[2];
      uVar17 = *(undefined4 *)(param_5 + 0x114);
      uVar24 = *(undefined4 *)(param_5 + 0x118);
      local_34 = (uint *******)param_6[1];
    }
    FUN_00f9c438(param_9,uVar17,uVar24);
    FUN_00f7e8ac(param_2,param_9,param_5,param_4);
    iVar10 = FUN_00f7fb00(param_2,param_5,&local_38,param_4,param_9);
LAB_00f7d860:
    if (iVar10 != 0) {
      *param_1 = 0x80000009;
      param_1[1] = iVar10;
joined_r0x00f7dbc4:
      if (uVar27 != 0) {
        return;
      }
LAB_00f7cb0c:
      uVar25 = param_6[1];
      puVar28 = (undefined4 *)(uVar25 + 4);
      for (uVar27 = param_6[2]; uVar27 != 0; uVar27 = uVar27 - 1) {
        if (puVar28[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar28);
        }
        puVar28 = puVar28 + 3;
      }
      goto LAB_00f7d508;
    }
    *param_1 = 0x80000002;
    if (uVar27 != 0) {
      return;
    }
    uVar27 = 0;
    goto LAB_00f7d4d4;
  case '\x05':
    FUN_00f8f414(&local_a0,*(undefined4 *)(param_2 + 8),param_3 - 1 < 3);
    uVar17 = FUN_00f95a14(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\x06':
    FUN_00f8f414(&local_a0,*(undefined4 *)(param_2 + 8),0);
    uVar17 = FUN_00f95a14(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\a':
    FUN_00f8f414(&local_a0,*(undefined4 *)(param_2 + 8),1);
    uVar17 = FUN_00f95a14(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\b':
    iVar10 = *(int *)(param_2 + 8);
    if (param_3 - 1 < 3) {
      local_58 = *(uint ********)(iVar10 + 0x13c);
      iVar30 = 0x140;
      if (local_58 == (uint *******)0x0) {
        iVar30 = 0x138;
        local_58 = *(uint ********)(iVar10 + 0x134);
        goto LAB_00f7d440;
      }
LAB_00f7d448:
      local_54 = *(uint ********)(iVar10 + iVar30);
    }
    else {
      local_58 = *(uint ********)(iVar10 + 0x134);
      iVar30 = 0x138;
      if (local_58 != (uint *******)0x0) goto LAB_00f7d448;
      local_58 = *(uint ********)(iVar10 + 0x13c);
      iVar30 = 0x140;
LAB_00f7d440:
      if (local_58 != (uint *******)0x0) goto LAB_00f7d448;
      local_54 = (uint *******)0x0;
      local_58 = (uint *******)&DAT_00000001;
    }
    iVar30 = 0x94;
    iVar23 = 0x90;
    if (*(int *)(iVar10 + 0x8c) == -0x80000000) {
      iVar30 = 0x120;
      iVar23 = 0x11c;
    }
    local_44 = *(uint ********)(iVar10 + iVar30);
    local_48 = *(uint ********)(iVar10 + iVar23);
    local_98 = (uint *******)&local_58;
    local_a0 = (uint *******)&local_48;
    local_94 = (uint *******)&DAT_0157d360;
    local_9c = (uint *******)&DAT_0157d360;
    FUN_00600d2c(&local_38,&DAT_005831a1,&local_a0);
    uVar17 = FUN_00f95a14(0xe,*(undefined4 *)(param_2 + 8),&local_38);
  }
  uVar27 = param_6[2];
  *param_1 = 0x80000009;
  param_1[1] = uVar17;
LAB_00f7d4d4:
  uVar25 = param_6[1];
  puVar28 = (undefined4 *)(uVar25 + 4);
  for (; uVar27 != 0; uVar27 = uVar27 - 1) {
    if (puVar28[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar28);
    }
    puVar28 = puVar28 + 3;
  }
LAB_00f7d508:
  if (*param_6 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(uVar25);
  return;
}

