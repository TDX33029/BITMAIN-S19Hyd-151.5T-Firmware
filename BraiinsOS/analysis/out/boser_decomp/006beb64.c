// FUN_006beb64 @ 006beb64 size=2092 calls_out=12 calls_in=2
// strings: 

void FUN_006beb64(int *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  uint local_a4;
  int local_84;
  int local_80;
  uint local_70;
  undefined1 *local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  undefined1 *local_5c;
  uint *local_58;
  undefined2 *local_54;
  undefined4 *local_50;
  undefined1 *local_4c;
  int *local_48;
  undefined1 *local_44;
  uint local_40 [2];
  undefined4 *local_38;
  undefined4 local_34;
  uint *local_30;
  undefined2 *local_2c;
  uint uStack_28;
  
  if (*(int *)(param_4 + 0x10) == 0) {
    return;
  }
  iVar20 = *(int *)(param_4 + 0xc);
  iVar6 = *(int *)(param_4 + 0x10) * 0x5c + iVar20;
  piVar7 = param_1 + 4;
LAB_006bebb0:
  uVar8 = *(int *)(iVar20 + 0x10) + 0x80000001U & *(int *)(iVar20 + 0x10) >> 0x1f;
  if (uVar8 == 0) {
    piVar16 = (int *)(iVar20 + 0x44);
    piVar23 = (int *)(iVar20 + 0x54);
    if (*(int *)(iVar20 + 0x54) == 0) {
      piVar23 = piVar16;
    }
    local_6c = (undefined1 *)piVar23[1];
    local_70 = *piVar23 + 8;
    local_68 = param_2;
    local_64 = param_3;
    local_60 = local_70;
    local_5c = local_6c;
    if (param_1[3] != 0) {
      uVar9 = FUN_006c5c94(*piVar7,param_1[5],param_1[6],param_1[7],&local_68);
      uVar8 = uVar9 >> 0x19;
      iVar25 = *param_1;
      uVar24 = param_1[1];
      local_84 = 0;
      while( true ) {
        uVar9 = uVar24 & uVar9;
        uVar11 = *(uint *)(iVar25 + uVar9);
        uVar10 = uVar11 ^ uVar8 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar12 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar24;
          iVar26 = FUN_006c1dd0(&local_68,iVar25 + -0x14 + uVar12 * -0x14);
          uVar10 = uVar10 - 1 & uVar10;
          if (iVar26 != 0) {
            iVar25 = iVar25 + uVar12 * -0x14;
            puVar21 = *(undefined4 **)(iVar25 + -4);
            if ((puVar21[0x10] != *(int *)(iVar20 + 0x48)) ||
               (iVar26 = thunk_FUN_01bed842(puVar21[0xf] + 8,*piVar16 + 8), iVar26 != 0)) {
              iVar26 = param_1[0x10];
              puVar14 = (undefined4 *)thunk_FUN_01be5118(0x10);
              if (puVar14 == (undefined4 *)0x0) goto LAB_006bf384;
              uVar17 = puVar21[1];
              uVar18 = *(undefined4 *)(iVar20 + 8);
              uVar19 = *(undefined4 *)(iVar20 + 0xc);
              *puVar14 = *puVar21;
              puVar14[1] = uVar17;
              puVar14[2] = uVar18;
              puVar14[3] = uVar19;
              local_34 = 2;
              local_40[1] = 2;
              local_44 = &LAB_00701524;
              local_4c = &LAB_00701524;
              local_50 = puVar21 + 0xf;
              local_54 = &DAT_0132b6a0;
              local_58 = &local_70;
              local_48 = piVar16;
              local_38 = puVar14;
              FUN_00664898(&local_30,&DAT_005a0687,&local_58);
              local_58 = local_30;
              local_54 = local_2c;
              local_50 = (undefined4 *)uStack_28;
              FUN_006d6c3c(iVar26,local_40 + 1,&local_58);
              puVar21 = *(undefined4 **)(iVar25 + -4);
            }
            iVar26 = puVar21[4];
            if (iVar26 != *(int *)(iVar20 + 0x18)) {
              iVar26 = param_1[0x10];
              puVar14 = (undefined4 *)thunk_FUN_01be5118(0x10);
              if (puVar14 == (undefined4 *)0x0) goto LAB_006bf384;
              uVar17 = puVar21[1];
              uVar18 = *(undefined4 *)(iVar20 + 8);
              uVar19 = *(undefined4 *)(iVar20 + 0xc);
              *puVar14 = *puVar21;
              puVar14[1] = uVar17;
              puVar14[2] = uVar18;
              puVar14[3] = uVar19;
              local_34 = 2;
              local_40[1] = 2;
              local_2c = &DAT_0132b6a0;
              local_30 = &local_70;
              local_38 = puVar14;
              FUN_00664898(&local_58,&DAT_00593770,&local_30);
              local_30 = local_58;
              local_2c = local_54;
              uStack_28 = (uint)local_50;
              FUN_006d6c3c(iVar26,local_40 + 1,&local_30);
              puVar21 = *(undefined4 **)(iVar25 + -4);
              iVar26 = puVar21[4];
            }
            if (iVar26 == 0) goto LAB_006bf334;
            uVar9 = puVar21[3];
            uVar17 = *(undefined4 *)(iVar20 + 8);
            uVar18 = *(undefined4 *)(iVar20 + 0xc);
            uVar8 = uVar9;
            goto LAB_006bf000;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_84 = local_84 + 4;
        uVar9 = uVar9 + local_84;
      }
    }
    local_58 = local_68;
    local_54 = (undefined2 *)local_64;
    local_50 = (undefined4 *)local_60;
    local_4c = local_5c;
    uVar8 = FUN_006c5c94(*piVar7,param_1[5],param_1[6],param_1[7],&local_68);
    if (param_1[2] == 0) {
      FUN_006b9e5c(param_1,piVar7);
    }
    puVar28 = (uint *)*param_1;
    uVar24 = param_1[1];
    bVar5 = false;
    local_84 = 0;
    uVar9 = uVar8;
    do {
      uVar9 = uVar24 & uVar9;
      uVar11 = *(uint *)((int)puVar28 + uVar9);
      uVar10 = uVar11 ^ (uVar8 >> 0x19) * 0x1010101;
      uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
      while (uVar10 != 0) {
        uVar12 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar24;
        iVar25 = FUN_006c1dd0(&local_58,puVar28 + uVar12 * -5 + -5);
        uVar10 = uVar10 - 1 & uVar10;
        if (iVar25 != 0) goto LAB_006bf320;
      }
      uVar10 = uVar11 & 0x80808080;
      uVar12 = local_a4;
      if (bVar5) {
LAB_006bf26c:
        if ((uVar10 & uVar11 << 1) != 0) goto LAB_006bf2c4;
        bVar5 = true;
        local_a4 = uVar12;
      }
      else {
        if (uVar10 != 0) {
          uVar12 = uVar9 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar24;
          goto LAB_006bf26c;
        }
        bVar5 = false;
      }
      local_84 = local_84 + 4;
      uVar9 = local_84 + uVar9;
    } while( true );
  }
  if (uVar8 == 1) {
    piVar23 = *(int **)(param_1[0x10] + 0x28);
    if (piVar23[3] != 0) {
      iVar26 = *(int *)(iVar20 + 0x34);
      iVar29 = *(int *)(iVar20 + 0x30) + 8;
      uVar9 = FUN_01a60560(piVar23[4],piVar23[5],piVar23[6],piVar23[7],iVar29,iVar26);
      uVar8 = uVar9 >> 0x19;
      iVar25 = *piVar23;
      uVar24 = piVar23[1];
      local_80 = 0;
      while( true ) {
        uVar9 = uVar24 & uVar9;
        uVar10 = *(uint *)(iVar25 + uVar9);
        uVar11 = uVar10 ^ uVar8 * 0x1010101;
        uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
        while (uVar11 != 0) {
          uVar12 = uVar11 >> 8;
          uVar1 = uVar11 >> 0x10;
          uVar2 = uVar11 >> 0x18;
          uVar3 = uVar11 << 0x18;
          uVar11 = uVar11 - 1 & uVar11;
          uVar12 = uVar9 + ((uint)LZCOUNT(uVar3 | (uVar12 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                          uVar2) >> 3) & uVar24;
          piVar23 = (int *)(iVar25 + -0x48 + uVar12 * -0x48);
          if ((iVar26 == piVar23[1]) &&
             (iVar13 = thunk_FUN_01bed842(iVar29,*piVar23 + 8,iVar26), iVar13 == 0)) {
            iVar25 = *(int *)(iVar25 + uVar12 * -0x48 + -8);
            iVar26 = FUN_006e6200(param_1 + 8,iVar29,iVar26);
            if (iVar26 != 0) goto LAB_006bf334;
            iVar25 = iVar25 + 8;
            goto LAB_006bf2b4;
          }
        }
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
        local_80 = local_80 + 4;
        uVar9 = uVar9 + local_80;
      }
    }
  }
  else {
    if (*(int *)(iVar20 + 0x4c) == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(iVar20 + 0x4c) + 8;
    }
LAB_006bf2b4:
    FUN_006beb64(param_1,iVar25);
  }
  goto LAB_006bf334;
LAB_006bf000:
  do {
    iVar13 = *(int *)(uVar8 + 8);
    iVar22 = *(int *)(uVar8 + 0xc);
    uVar24 = uVar8 + 0x48;
    iVar27 = *(int *)(iVar20 + 0x14);
    local_40[0] = uVar8;
    for (iVar29 = *(int *)(iVar20 + 0x18) * 0x48; iVar29 != 0; iVar29 = iVar29 + -0x48) {
      if ((*(int *)(iVar27 + 0xc) == iVar22) &&
         (iVar15 = thunk_FUN_01bed842(*(int *)(iVar27 + 8) + 8,iVar13 + 8,iVar22), iVar15 == 0)) {
        iVar29 = FUN_006de400(uVar8 + 0x18,iVar27 + 0x18);
        if (iVar29 != 0) goto LAB_006bf110;
        break;
      }
      iVar27 = iVar27 + 0x48;
    }
    iVar29 = param_1[0x10];
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar21 == (undefined4 *)0x0) {
LAB_006bf384:
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    uVar19 = (*(undefined4 **)(iVar25 + -4))[1];
    *puVar21 = **(undefined4 **)(iVar25 + -4);
    puVar21[1] = uVar19;
    puVar21[2] = uVar17;
    puVar21[3] = uVar18;
    local_34 = 2;
    local_40[1] = 2;
    local_2c = (undefined2 *)&LAB_006dffb8;
    local_30 = local_40;
    local_38 = puVar21;
    FUN_00664898(&local_58,&DAT_00593770,&local_30);
    local_30 = local_58;
    local_2c = local_54;
    uStack_28 = (uint)local_50;
    FUN_006d6c3c(iVar29,local_40 + 1,&local_30);
LAB_006bf110:
    uVar8 = uVar24;
  } while (uVar24 != uVar9 + iVar26 * 0x48);
  goto LAB_006bf334;
LAB_006bf2c4:
  uVar9 = (uint)*(char *)((int)puVar28 + uVar12);
  if (-1 < (int)uVar9) {
    uVar9 = *puVar28 & 0x80808080;
    uVar12 = LZCOUNT((*puVar28 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                     (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
    uVar9 = (uint)*(byte *)((int)puVar28 + (uVar12 >> 3));
    uVar12 = uVar12 >> 3;
  }
  iVar25 = param_1[2];
  iVar26 = param_1[3];
  bVar4 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)puVar28 + uVar12) = bVar4;
  param_1[2] = iVar25 - (uVar9 & 1);
  param_1[3] = iVar26 + 1;
  *(byte *)((int)puVar28 + (uVar24 & uVar12 - 4) + 4) = bVar4;
  puVar28[uVar12 * -5 + -5] = (uint)local_68;
  puVar28[uVar12 * -5 + -4] = local_64;
  puVar28[uVar12 * -5 + -3] = local_60;
  puVar28[uVar12 * -5 + -2] = (uint)local_5c;
LAB_006bf320:
  puVar28[uVar12 * -5 + -1] = iVar20 + 8;
LAB_006bf334:
  iVar20 = iVar20 + 0x5c;
  if (iVar20 == iVar6) {
    return;
  }
  goto LAB_006bebb0;
}

