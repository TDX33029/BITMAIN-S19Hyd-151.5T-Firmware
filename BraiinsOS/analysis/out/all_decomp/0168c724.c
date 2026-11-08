// FUN_0168c724 @ 0168c724 size=1912 calls_out=14 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

int FUN_0168c724(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int ****ppppiVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint ***pppuVar18;
  code *pcVar19;
  undefined4 uVar20;
  uint ***pppuVar21;
  char *pcVar22;
  bool bVar23;
  uint **local_64;
  undefined8 local_60;
  int ****local_58;
  char *local_54;
  int ****local_50;
  undefined1 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34;
  uint ***local_30;
  int local_2c;
  int local_28;
  
  uVar20 = *param_2;
  iVar16 = param_2[1];
  bVar23 = false;
  local_60 = CONCAT44(local_60._4_4_,(uint **)local_60);
  if ((*param_1 == 1) &&
     (local_60 = CONCAT44(local_60._4_4_,(uint **)local_60), param_1[9] != -0x80000000)) {
    uVar17 = param_1[1];
    pcVar22 = (char *)param_1[10];
    uVar13 = param_1[0xb];
    iVar3 = param_1[2];
    if (uVar13 == 0) {
      iVar4 = 0;
      uVar11 = uVar17;
    }
    else {
      uVar11 = uVar13 - 1;
      if (uVar17 <= uVar13 - 1) {
        uVar11 = uVar17;
      }
      if (uVar13 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar11,uVar13,&DAT_018ade58);
      }
      uVar9 = 0;
      do {
        uVar5 = uVar9;
        if (uVar11 == uVar5) {
          pcVar7 = pcVar22;
          goto LAB_0168c8d8;
        }
        uVar9 = uVar5 + 1;
      } while (pcVar22[(uVar11 - 1) - uVar5] != '\n');
      uVar9 = uVar11 - uVar5;
      if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar9,uVar13,&DAT_018ade48);
      }
      pcVar7 = pcVar22 + uVar9;
      if (uVar9 == 0) {
LAB_0168c8d8:
        iVar4 = 0;
        uVar9 = 0;
      }
      else {
        iVar4 = 0;
        iVar6 = (uVar11 - (uVar5 + 1)) + 1;
        pcVar10 = pcVar22;
        do {
          if (*pcVar10 == '\n') {
            iVar4 = iVar4 + 1;
          }
          iVar6 = iVar6 + -1;
          pcVar10 = pcVar10 + 1;
        } while (iVar6 != 0);
      }
      uVar5 = uVar11;
      if ((uVar13 <= uVar11) || (uVar5 = uVar11 + 1, uVar5 < uVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar9,uVar5,uVar13,&DAT_018ade38);
      }
      FUN_00fab1e0(&local_58,pcVar7,uVar5 - uVar9);
      if (local_58 == (int ****)0x1) {
        iVar6 = uVar11 - uVar9;
      }
      else {
        if (&DAT_0000000f < local_50) {
          iVar6 = FUN_00fa9978();
        }
        else {
          iVar6 = 0;
          for (; local_50 != (int ****)0x0; local_50 = (int ****)((int)local_50 + -1)) {
            if (-0x41 < *local_54) {
              iVar6 = iVar6 + 1;
            }
            local_54 = local_54 + 1;
          }
        }
        iVar6 = iVar6 + -1;
      }
      uVar11 = (uVar17 - uVar11) + iVar6;
    }
    local_64 = (uint **)(iVar4 + 1);
    local_30 = (uint ***)(uVar11 + 1);
    iVar6 = FUN_00fabc64(local_64,&local_58);
    iVar12 = (int)&local_58 + iVar6;
    uVar9 = 10 - iVar6;
    if (iVar6 == 10) {
      FUN_016dd1aa(1,iVar12,0);
    }
    else {
      iVar6 = thunk_FUN_016d4a50(uVar9);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar9);
      }
      FUN_016dd1aa(iVar6,iVar12,uVar9);
      thunk_FUN_016d3fb4(iVar6);
    }
    local_34 = 1;
    local_40 = 1;
    local_3c = 0;
    local_4c = (undefined1 *)0x0;
    local_44 = 10;
    local_58 = (int ****)0xa;
    local_54 = pcVar22;
    local_50 = (int ****)uVar13;
    local_48 = uVar13;
    local_38 = uVar13;
    if (iVar4 != 0) {
      do {
        iVar6 = FUN_015bb1b4(&local_58);
        if (iVar6 == 0) goto LAB_0168ce2c;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_60 = FUN_015bb1b4(&local_58);
    uVar13 = (uint)((ulonglong)local_60 >> 0x20);
    if ((int)local_60 == 0) {
LAB_0168ce2c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_004147c1,0x11,&DAT_018ade28);
    }
    uVar5 = uVar13 - uVar11;
    bVar23 = false;
    local_50 = (int ****)&local_30;
    local_58 = (int ****)&local_64;
    if (uVar13 < uVar11) {
      uVar5 = 0;
    }
    local_4c = &LAB_00fac484;
    local_54 = &LAB_00fac484;
    if (iVar3 - uVar17 <= uVar5) {
      uVar5 = iVar3 - uVar17;
    }
    iVar3 = FUN_00fa948c(uVar20,iVar16,&DAT_0058ade9,&local_58);
    if (iVar3 == 0) {
      uVar17 = 0;
      do {
        if ((bVar23) || (uVar9 < uVar17)) {
          pcVar19 = *(code **)(iVar16 + 0xc);
          iVar3 = (*pcVar19)(uVar20,&DAT_004147d2,2);
          if (iVar3 != 0) {
            return 1;
          }
          local_58 = (int ****)&local_64;
          local_54 = &LAB_00fac484;
          iVar3 = FUN_00fa948c(uVar20,iVar16,&DAT_0057e9cc,&local_58);
          if (iVar3 != 0) {
            return 1;
          }
          local_58 = (int ****)&local_60;
          local_54 = (char *)&DAT_0157d360;
          iVar3 = FUN_00fa948c(uVar20,iVar16,&DAT_00580c3b,&local_58);
          if (iVar3 != 0) {
            return 1;
          }
          uVar17 = 0;
          bVar23 = false;
          while ((!bVar23 && (uVar17 <= uVar9))) {
            iVar3 = (*pcVar19)(uVar20,&DAT_0041545b,1);
            bVar23 = uVar17 < uVar9;
            uVar17 = uVar17 + bVar23;
            bVar23 = !bVar23;
            if (iVar3 != 0) {
              return 1;
            }
          }
          iVar3 = (*pcVar19)(uVar20,&DAT_00414ce3,1);
          if (iVar3 != 0) {
            return 1;
          }
          uVar17 = 0;
          bVar23 = false;
          while ((!bVar23 && (uVar17 <= uVar11))) {
            iVar3 = (*pcVar19)(uVar20,&DAT_0041545b,1);
            bVar23 = uVar17 < uVar11;
            uVar17 = uVar17 + bVar23;
            bVar23 = !bVar23;
            if (iVar3 != 0) {
              return 1;
            }
          }
          iVar3 = (*pcVar19)(uVar20,&DAT_004147d4,1);
          if (iVar3 != 0) {
            return 1;
          }
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          while (uVar5 = uVar5 - 1, uVar5 != 0) {
            iVar3 = (*pcVar19)(uVar20,&DAT_004147d4,1);
            if (iVar3 != 0) {
              return 1;
            }
          }
          bVar23 = true;
          iVar3 = (*pcVar19)(uVar20,&DAT_0041950e,1);
          if (iVar3 != 0) {
            return 1;
          }
          goto LAB_0168c754;
        }
        iVar3 = (**(code **)(iVar16 + 0xc))(uVar20,&DAT_0041545b,1);
        bVar23 = uVar17 < uVar9;
        uVar17 = uVar17 + bVar23;
        bVar23 = !bVar23;
      } while (iVar3 == 0);
    }
    return 1;
  }
LAB_0168c754:
  local_58 = (int ****)(param_1 + 3);
  local_54 = (char *)&DAT_006043a8;
  iVar3 = FUN_00fa948c(uVar20,iVar16,&DAT_00580c3b,&local_58);
  if (iVar3 == 0 && !bVar23) {
    iVar3 = param_1[8];
    if (iVar3 == 0) {
      return 0;
    }
    uVar17 = iVar3 * 0xc - 0xc;
    iVar4 = iVar3 * 0xc;
    iVar12 = param_1[7];
    pppuVar21 = (uint ***)((uVar17 >> 2) * -0x55555555);
    iVar6 = iVar12;
    while (iVar4 != 0) {
      puVar1 = (uint *)(iVar6 + 8);
      iVar4 = iVar4 + -0xc;
      iVar6 = iVar6 + 0xc;
      bVar23 = CARRY4(*puVar1,(uint)pppuVar21);
      pppuVar21 = (uint ***)(*puVar1 + (int)pppuVar21);
      if (bVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
      }
    }
    if ((uint ***)0x7fffffff < pppuVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    if (pppuVar21 == (uint ***)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(pppuVar21);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,pppuVar21);
      }
    }
    pppuVar18 = *(uint ****)(iVar12 + 8);
    uVar15 = *(undefined4 *)(iVar12 + 4);
    local_50 = (int ****)0x0;
    local_58 = (int ****)pppuVar21;
    local_54 = (char *)iVar4;
    if (pppuVar21 < pppuVar18) {
      FUN_0166e728(&local_58,0,pppuVar18,1,1);
    }
    ppppiVar2 = local_50;
    pcVar22 = local_54;
    FUN_016dd1aa((int)local_54 + (int)local_50,uVar15,pppuVar18);
    iVar4 = (int)pppuVar21 - ((int)ppppiVar2 + (int)pppuVar18);
    if (iVar3 != 1) {
      puVar8 = (undefined1 *)((int)pcVar22 + (int)ppppiVar2 + (int)pppuVar18);
      puVar14 = (undefined4 *)(iVar12 + 0x10);
      do {
        if (iVar4 == 0) {
LAB_0168cd58:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
        }
        uVar15 = *puVar14;
        uVar13 = puVar14[1];
        *puVar8 = 0x2e;
        if (iVar4 - 1U < uVar13) goto LAB_0168cd58;
        puVar14 = puVar14 + 3;
        FUN_016dd1aa(puVar8 + 1,uVar15,uVar13);
        iVar4 = (iVar4 - 1U) - uVar13;
        puVar8 = puVar8 + 1 + uVar13;
        uVar17 = uVar17 - 0xc;
      } while (uVar17 != 0);
    }
    local_28 = (int)pppuVar21 - iVar4;
    local_30 = (uint ***)local_58;
    local_2c = (int)local_54;
    local_54 = (char *)&DAT_006043a8;
    local_58 = (int ****)&local_30;
    iVar3 = FUN_00fa948c(uVar20,iVar16,&DAT_005878bf,&local_58);
    if (local_30 != (uint ***)0x0) {
      thunk_FUN_016d3fb4(local_2c);
      return iVar3;
    }
  }
  return iVar3;
}

