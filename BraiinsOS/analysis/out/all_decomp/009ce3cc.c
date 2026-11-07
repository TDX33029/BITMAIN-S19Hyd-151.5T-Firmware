// FUN_009ce3cc @ 009ce3cc size=3864 calls_out=8 calls_in=2
// strings: 

void FUN_009ce3cc(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  code *pcVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  code *pcVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  int iVar30;
  undefined4 uVar31;
  bool bVar32;
  bool bVar33;
  uint local_60;
  undefined4 *local_50;
  int local_4c;
  undefined4 *local_48;
  uint local_44;
  int local_40;
  int local_38;
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  
  if (0x20 < param_2) {
    local_48 = param_6;
LAB_009ce46c:
    uVar18 = param_2;
    do {
      if (param_5 == 0) {
        FUN_009d7130(param_1,uVar18,param_3,param_4,1);
        return;
      }
      puVar6 = param_1 + (uVar18 >> 3) * 8;
      puVar4 = param_1 + ((uVar18 >> 3) * 8 - (uVar18 >> 3)) * 2;
      if (uVar18 < 0x40) {
        uVar31 = *param_1;
        pcVar22 = *(code **)(param_1[1] + 0x28);
        uVar13 = *puVar6;
        iVar16 = puVar6[1];
        uVar11 = (*pcVar22)(uVar31);
        pcVar19 = *(code **)(iVar16 + 0x28);
        uVar12 = (*pcVar19)(uVar13);
        uVar14 = *puVar4;
        iVar16 = puVar4[1];
        uVar2 = (*pcVar22)(uVar31);
        pcVar22 = *(code **)(iVar16 + 0x28);
        uVar7 = (*pcVar22)(uVar14);
        puVar3 = param_1;
        if (uVar11 < uVar12 == uVar2 < uVar7) {
          uVar2 = (*pcVar19)(uVar13);
          uVar7 = (*pcVar22)(uVar14);
          puVar3 = puVar6;
          if (uVar11 < uVar12 != uVar2 < uVar7) {
            puVar3 = puVar4;
          }
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_009cfa10(param_1,puVar6,puVar4);
      }
      param_5 = param_5 + -1;
      uVar31 = *puVar3;
      iVar16 = puVar3[1];
      uVar11 = (uint)((int)puVar3 - (int)param_1) >> 3;
      local_2c = uVar31;
      local_28 = iVar16;
      if (local_48 != (undefined4 *)0x0) {
        uVar12 = (**(code **)(local_48[1] + 0x28))(*local_48);
        uVar2 = (**(code **)(iVar16 + 0x28))(uVar31);
        if (uVar2 <= uVar12) goto LAB_009ce84c;
      }
      if (param_4 < uVar18) goto LAB_009cf2c8;
      puVar4 = param_3 + uVar18 * 2;
      param_2 = 0;
      uVar12 = uVar11;
      puVar6 = param_1;
      while( true ) {
        iVar16 = uVar12 - 3;
        if (uVar12 < 3) {
          iVar16 = 0;
        }
        if (puVar6 < param_1 + iVar16 * 2) {
          uVar31 = *puVar3;
          iVar30 = puVar3[1];
          do {
            uVar2 = (**(code **)(puVar6[1] + 0x28))(*puVar6);
            pcVar19 = *(code **)(iVar30 + 0x28);
            uVar7 = (*pcVar19)(uVar31);
            puVar20 = param_3;
            if (uVar7 <= uVar2) {
              puVar20 = puVar4 + -2;
            }
            uVar14 = puVar6[1];
            iVar15 = puVar6[3];
            uVar13 = puVar6[2];
            iVar25 = param_2 * 2;
            puVar20[iVar25] = *puVar6;
            if (uVar7 > uVar2) {
              param_2 = param_2 + 1;
            }
            (puVar20 + iVar25)[1] = uVar14;
            uVar2 = (**(code **)(iVar15 + 0x28))(uVar13);
            uVar7 = (*pcVar19)(uVar31);
            puVar20 = param_3;
            if (uVar7 <= uVar2) {
              puVar20 = puVar4 + -4;
            }
            iVar15 = puVar6[5];
            uVar14 = puVar6[3];
            uVar13 = puVar6[4];
            iVar25 = param_2 * 2;
            puVar20[iVar25] = puVar6[2];
            if (uVar7 > uVar2) {
              param_2 = param_2 + 1;
            }
            (puVar20 + iVar25)[1] = uVar14;
            uVar2 = (**(code **)(iVar15 + 0x28))(uVar13);
            uVar7 = (*pcVar19)(uVar31);
            puVar20 = param_3;
            if (uVar7 <= uVar2) {
              puVar20 = puVar4 + -6;
            }
            iVar15 = puVar6[7];
            uVar14 = puVar6[5];
            uVar13 = puVar6[6];
            iVar25 = param_2 * 2;
            puVar20[iVar25] = puVar6[4];
            if (uVar7 > uVar2) {
              param_2 = param_2 + 1;
            }
            (puVar20 + iVar25)[1] = uVar14;
            uVar2 = (**(code **)(iVar15 + 0x28))(uVar13);
            uVar7 = (*pcVar19)(uVar31);
            puVar4 = puVar4 + -8;
            puVar20 = puVar6 + 6;
            uVar13 = puVar6[7];
            puVar6 = puVar6 + 8;
            puVar5 = puVar4;
            if (uVar2 < uVar7) {
              puVar5 = param_3;
            }
            iVar25 = param_2 * 2;
            puVar5[iVar25] = *puVar20;
            if (uVar2 < uVar7) {
              param_2 = param_2 + 1;
            }
            (puVar5 + iVar25)[1] = uVar13;
          } while (puVar6 < param_1 + iVar16 * 2);
        }
        if (puVar6 < param_1 + uVar12 * 2) {
          uVar31 = *puVar3;
          iVar16 = puVar3[1];
          do {
            uVar2 = (**(code **)(puVar6[1] + 0x28))(*puVar6);
            uVar7 = (**(code **)(iVar16 + 0x28))(uVar31);
            puVar4 = puVar4 + -2;
            uVar13 = *puVar6;
            uVar14 = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar20 = puVar4;
            if (uVar2 < uVar7) {
              puVar20 = param_3;
            }
            iVar30 = param_2 * 2;
            puVar20[iVar30] = uVar13;
            if (uVar2 < uVar7) {
              param_2 = param_2 + 1;
            }
            (puVar20 + iVar30)[1] = uVar14;
          } while (puVar6 < param_1 + uVar12 * 2);
        }
        if (uVar12 == uVar18) break;
        puVar4 = puVar4 + -2;
        uVar31 = *puVar6;
        uVar13 = puVar6[1];
        puVar6 = puVar6 + 2;
        puVar4[param_2 * 2] = uVar31;
        (puVar4 + param_2 * 2)[1] = uVar13;
        uVar12 = uVar18;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 3);
      iVar16 = uVar18 - param_2;
      if (iVar16 != 0) {
        puVar6 = param_1 + param_2 * 2;
        puVar4 = param_3 + uVar18 * 2 + -2;
        iVar30 = iVar16;
        do {
          uVar31 = *puVar4;
          uVar13 = puVar4[1];
          puVar4 = puVar4 + -2;
          *puVar6 = uVar31;
          puVar6[1] = uVar13;
          puVar6 = puVar6 + 2;
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
      if (param_2 == 0) goto LAB_009ce84c;
      if (uVar18 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_009ce3cc(param_1 + param_2 * 2,iVar16,param_3,param_4,param_5,&local_2c);
      uVar18 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_009ce3f0:
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_009cf2c8;
  local_30 = param_3 + param_2 * 2;
  local_44 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar31 = param_1[1];
      uVar13 = param_1[local_44 * 2];
      *param_3 = *param_1;
      param_3[1] = uVar31;
      param_3[local_44 * 2] = uVar13;
      (param_3 + local_44 * 2)[1] = (param_1 + local_44 * 2)[1];
      local_60 = 1;
      if (1 < local_44) goto LAB_009ceeb8;
    }
    else {
      uVar31 = *param_1;
      iVar16 = param_1[1];
      uVar18 = (**(code **)(param_1[3] + 0x28))(param_1[2]);
      uVar11 = (**(code **)(iVar16 + 0x28))(uVar31);
      uVar31 = param_1[4];
      iVar16 = param_1[5];
      uVar12 = (**(code **)(param_1[7] + 0x28))(param_1[6]);
      uVar2 = (uint)(uVar11 <= uVar18);
      uVar11 = (uint)(uVar11 > uVar18);
      uVar7 = (**(code **)(iVar16 + 0x28))(uVar31);
      uVar18 = 2;
      if (uVar12 < uVar7) {
        uVar18 = 3;
      }
      puVar4 = param_1 + uVar18 * 2;
      puVar6 = param_1 + uVar11 * 2;
      uVar31 = *puVar6;
      uVar27 = 3;
      if (uVar12 < uVar7) {
        uVar27 = 2;
      }
      iVar16 = puVar6[1];
      uVar7 = (**(code **)(puVar4[1] + 0x28))(*puVar4);
      uVar8 = (**(code **)(iVar16 + 0x28))(uVar31);
      puVar5 = param_1 + uVar27 * 2;
      puVar20 = param_1 + uVar2 * 2;
      uVar31 = *puVar20;
      iVar16 = puVar20[1];
      uVar9 = (**(code **)(puVar5[1] + 0x28))(*puVar5);
      uVar10 = (**(code **)(iVar16 + 0x28))(uVar31);
      puVar3 = puVar20;
      uVar12 = uVar2;
      if (uVar9 < uVar10) {
        puVar3 = puVar4;
        uVar12 = uVar18;
      }
      puVar28 = puVar4;
      puVar21 = puVar6;
      if (uVar7 < uVar8) {
        uVar12 = uVar11;
        puVar28 = puVar20;
        uVar18 = uVar2;
        puVar21 = puVar4;
        puVar3 = puVar6;
      }
      if (uVar9 < uVar10) {
        puVar28 = puVar5;
      }
      else {
        puVar20 = puVar5;
      }
      if (uVar9 < uVar10) {
        uVar18 = uVar27;
      }
      iVar16 = puVar3[1];
      uVar31 = param_1[uVar12 * 2];
      uVar18 = (**(code **)(puVar28[1] + 0x28))(param_1[uVar18 * 2]);
      uVar11 = (**(code **)(iVar16 + 0x28))(uVar31);
      uVar13 = *puVar20;
      uVar31 = puVar20[1];
      if (uVar18 < uVar11) {
        puVar4 = puVar28;
        puVar28 = puVar3;
      }
      else {
        puVar4 = puVar3;
      }
      uVar14 = *puVar21;
      puVar6 = param_1 + local_44 * 2;
      uVar17 = *puVar6;
      iVar16 = puVar6[3];
      uVar26 = *puVar28;
      uVar29 = puVar28[1];
      param_3[1] = puVar21[1];
      *param_3 = uVar14;
      uVar14 = puVar6[2];
      pcVar19 = *(code **)(iVar16 + 0x28);
      uVar23 = puVar4[1];
      iVar16 = puVar6[1];
      param_3[2] = *puVar4;
      param_3[3] = uVar23;
      param_3[4] = uVar26;
      param_3[5] = uVar29;
      param_3[6] = uVar13;
      param_3[7] = uVar31;
      uVar18 = (*pcVar19)(uVar14);
      uVar11 = (**(code **)(iVar16 + 0x28))(uVar17);
      uVar31 = puVar6[4];
      iVar16 = puVar6[5];
      uVar12 = (**(code **)(puVar6[7] + 0x28))(puVar6[6]);
      uVar2 = (uint)(uVar11 <= uVar18);
      uVar7 = (uint)(uVar11 > uVar18);
      uVar11 = (**(code **)(iVar16 + 0x28))(uVar31);
      uVar18 = 2;
      if (uVar12 < uVar11) {
        uVar18 = 3;
      }
      puVar4 = puVar6 + uVar18 * 2;
      puVar3 = puVar6 + uVar7 * 2;
      uVar31 = *puVar3;
      uVar27 = 3;
      if (uVar12 < uVar11) {
        uVar27 = 2;
      }
      iVar16 = puVar3[1];
      uVar12 = (**(code **)(puVar4[1] + 0x28))(*puVar4);
      uVar8 = (**(code **)(iVar16 + 0x28))(uVar31);
      puVar28 = puVar6 + uVar27 * 2;
      puVar5 = puVar6 + uVar2 * 2;
      uVar31 = *puVar5;
      iVar16 = puVar5[1];
      uVar9 = (**(code **)(puVar28[1] + 0x28))(*puVar28);
      uVar10 = (**(code **)(iVar16 + 0x28))(uVar31);
      puVar20 = puVar5;
      uVar11 = uVar2;
      if (uVar9 < uVar10) {
        puVar20 = puVar4;
        uVar11 = uVar18;
      }
      puVar21 = puVar4;
      puVar1 = puVar3;
      if (uVar12 < uVar8) {
        uVar11 = uVar7;
        puVar21 = puVar5;
        uVar18 = uVar2;
        puVar1 = puVar4;
        puVar20 = puVar3;
      }
      if (uVar9 < uVar10) {
        puVar21 = puVar28;
      }
      if (uVar9 >= uVar10) {
        uVar27 = uVar18;
        puVar5 = puVar28;
      }
      uVar31 = puVar6[uVar11 * 2];
      iVar16 = puVar20[1];
      uVar18 = (**(code **)(puVar21[1] + 0x28))(puVar6[uVar27 * 2]);
      uVar11 = (**(code **)(iVar16 + 0x28))(uVar31);
      puVar4 = puVar21;
      if (uVar18 < uVar11) {
        puVar4 = puVar20;
        puVar20 = puVar21;
      }
      uVar14 = *puVar5;
      uVar29 = puVar5[1];
      uVar26 = puVar1[1];
      uVar31 = *puVar20;
      uVar13 = puVar20[1];
      uVar17 = *puVar4;
      uVar23 = puVar4[1];
      puVar4 = param_3 + local_44 * 2;
      *puVar4 = *puVar1;
      puVar4[2] = uVar31;
      puVar4[3] = uVar13;
      puVar4[4] = uVar17;
      puVar4[5] = uVar23;
      puVar4[1] = uVar26;
      puVar4[6] = uVar14;
      puVar4[7] = uVar29;
      local_60 = 4;
      if (4 < local_44) {
LAB_009ceeb8:
        iVar16 = local_60 << 3;
        local_40 = local_60 * 8 + -8;
        uVar18 = local_60;
        do {
          iVar30 = (param_1 + uVar18 * 2)[1];
          puVar4 = param_3 + uVar18 * 2;
          *puVar4 = param_1[uVar18 * 2];
          pcVar19 = *(code **)(iVar30 + 0x28);
          uVar31 = puVar4[-2];
          iVar25 = puVar4[-1];
          puVar4[1] = iVar30;
          uVar11 = (*pcVar19)();
          uVar12 = (**(code **)(iVar25 + 0x28))(uVar31);
          if (uVar11 < uVar12) {
            uVar31 = *puVar4;
            iVar15 = puVar4[1];
            iVar30 = local_40;
            iVar25 = iVar16;
            do {
              uVar13 = ((undefined4 *)((int)param_3 + iVar30))[1];
              *(undefined4 *)((int)param_3 + iVar25) = *(undefined4 *)((int)param_3 + iVar30);
              ((undefined4 *)((int)param_3 + iVar25))[1] = uVar13;
              if (iVar30 == 0) {
                puVar4 = param_3;
                goto LAB_009ceed4;
              }
              uVar13 = *(undefined4 *)((int)param_3 + iVar25 + -0x10);
              iVar24 = *(int *)((int)param_3 + iVar25 + -0xc);
              uVar11 = (**(code **)(iVar15 + 0x28))(uVar31);
              uVar12 = (**(code **)(iVar24 + 0x28))(uVar13);
              iVar30 = iVar30 + -8;
              iVar25 = iVar25 + -8;
            } while (uVar11 < uVar12);
            puVar4 = (undefined4 *)((int)param_3 + iVar25);
LAB_009ceed4:
            *puVar4 = uVar31;
            puVar4[1] = iVar15;
          }
          uVar18 = uVar18 + 1;
          iVar16 = iVar16 + 8;
          local_40 = local_40 + 8;
        } while (uVar18 != local_44);
      }
    }
  }
  else {
    FUN_009cf354(param_1,param_3,local_30);
    FUN_009cf354(param_1 + local_44 * 2,param_3 + local_44 * 2,local_30 + 0x10);
    local_60 = 8;
    if (8 < local_44) goto LAB_009ceeb8;
  }
  puVar4 = param_3 + local_44 * 2;
  if (local_60 < param_2 - local_44) {
    local_48 = param_3 + local_44 * 2 + -2;
    local_4c = 8;
    uVar18 = local_60;
    local_50 = puVar4;
    do {
      iVar16 = (param_1 + local_44 * 2 + uVar18 * 2)[1];
      puVar6 = puVar4 + uVar18 * 2;
      *puVar6 = param_1[local_44 * 2 + uVar18 * 2];
      pcVar19 = *(code **)(iVar16 + 0x28);
      uVar31 = puVar6[-2];
      iVar30 = puVar6[-1];
      puVar6[1] = iVar16;
      uVar11 = (*pcVar19)();
      uVar12 = (**(code **)(iVar30 + 0x28))(uVar31);
      if (uVar11 < uVar12) {
        uVar31 = *puVar6;
        iVar30 = puVar6[1];
        iVar16 = local_4c;
        puVar6 = local_50;
        puVar3 = local_48;
        do {
          uVar13 = (puVar3 + local_60 * 2)[1];
          puVar6[local_60 * 2] = puVar3[local_60 * 2];
          (puVar6 + local_60 * 2)[1] = uVar13;
          if (local_60 * 8 == iVar16) {
            puVar6 = puVar4;
            goto LAB_009cf01c;
          }
          uVar13 = puVar6[local_60 * 2 + -4];
          iVar25 = puVar6[local_60 * 2 + -3];
          uVar11 = (**(code **)(iVar30 + 0x28))(uVar31);
          uVar12 = (**(code **)(iVar25 + 0x28))(uVar13);
          iVar16 = iVar16 + 8;
          puVar3 = puVar3 + -2;
          puVar6 = puVar6 + -2;
        } while (uVar11 < uVar12);
        puVar6 = puVar6 + local_60 * 2;
LAB_009cf01c:
        *puVar6 = uVar31;
        puVar6[1] = iVar30;
      }
      local_4c = local_4c + -8;
      uVar18 = uVar18 + 1;
      local_48 = local_48 + 2;
      local_50 = local_50 + 2;
    } while (uVar18 != param_2 - local_44);
  }
  puVar6 = puVar4 + -2;
  local_30 = local_30 + -2;
  local_38 = 0;
  do {
    uVar31 = *param_3;
    iVar16 = param_3[1];
    uVar18 = (**(code **)(puVar4[1] + 0x28))(*puVar4);
    uVar11 = (**(code **)(iVar16 + 0x28))(uVar31);
    bVar32 = uVar11 <= uVar18;
    puVar3 = param_3;
    if (!bVar32) {
      puVar3 = puVar4;
    }
    uVar13 = *puVar6;
    iVar16 = puVar6[1];
    uVar31 = puVar3[1];
    *(undefined4 *)((int)param_1 + local_38) = *puVar3;
    ((undefined4 *)((int)param_1 + local_38))[1] = uVar31;
    uVar18 = (**(code **)(local_30[1] + 0x28))(*local_30);
    uVar11 = (**(code **)(iVar16 + 0x28))(uVar13);
    param_3 = param_3 + (uint)bVar32 * 2;
    bVar33 = uVar18 < uVar11;
    puVar4 = puVar4 + (uint)!bVar32 * 2;
    puVar3 = local_30;
    if (bVar33) {
      puVar3 = puVar6;
    }
    uVar31 = puVar3[1];
    puVar20 = (undefined4 *)((int)param_1 + ((param_2 * 8 + -8) - local_38));
    *puVar20 = *puVar3;
    iVar16 = 0;
    if (bVar33) {
      iVar16 = -1;
    }
    local_38 = local_38 + 8;
    puVar6 = puVar6 + iVar16 * 2;
    iVar16 = 0;
    if (!bVar33) {
      iVar16 = -1;
    }
    puVar20[1] = uVar31;
    local_30 = local_30 + iVar16 * 2;
    local_44 = local_44 - 1;
  } while (local_44 != 0);
  puVar6 = puVar6 + 2;
  if ((param_2 & 1) != 0) {
    bVar32 = puVar6 <= param_3;
    puVar3 = puVar4;
    if (!bVar32) {
      puVar3 = param_3;
    }
    uVar31 = puVar3[1];
    *(undefined4 *)((int)param_1 + local_38) = *puVar3;
    ((undefined4 *)((int)param_1 + local_38))[1] = uVar31;
    puVar4 = puVar4 + (uint)bVar32 * 2;
    param_3 = param_3 + (uint)!bVar32 * 2;
  }
  bVar32 = param_3 == puVar6;
  if (bVar32) {
    puVar6 = local_30 + 2;
  }
  if (bVar32 && puVar4 == puVar6) {
    return;
  }
  FUN_00fb7254();
LAB_009cf2c8:
                    /* WARNING: Does not return */
  pcVar19 = (code *)software_udf(0xfdee,0x9cf2c8);
  (*pcVar19)();
LAB_009ce84c:
  if (param_4 < uVar18) goto LAB_009cf2c8;
  puVar6 = param_3 + uVar18 * 2;
  uVar12 = 0;
  puVar4 = param_1;
  while( true ) {
    iVar16 = uVar11 - 3;
    if (uVar11 < 3) {
      iVar16 = 0;
    }
    if (puVar4 < param_1 + iVar16 * 2) {
      uVar31 = *puVar3;
      pcVar19 = *(code **)(puVar3[1] + 0x28);
      do {
        uVar13 = *puVar4;
        iVar30 = puVar4[1];
        uVar2 = (*pcVar19)(uVar31);
        uVar7 = (**(code **)(iVar30 + 0x28))(uVar13);
        puVar20 = param_3;
        if (uVar2 < uVar7) {
          puVar20 = puVar6 + -2;
        }
        uVar13 = puVar4[1];
        uVar14 = puVar4[2];
        iVar25 = puVar4[3];
        iVar30 = uVar12 * 2;
        puVar20[iVar30] = *puVar4;
        if (uVar2 >= uVar7) {
          uVar12 = uVar12 + 1;
        }
        (puVar20 + iVar30)[1] = uVar13;
        uVar2 = (*pcVar19)(uVar31);
        uVar7 = (**(code **)(iVar25 + 0x28))(uVar14);
        iVar30 = puVar4[5];
        puVar20 = param_3;
        if (uVar2 < uVar7) {
          puVar20 = puVar6 + -4;
        }
        uVar13 = puVar4[3];
        uVar14 = puVar4[4];
        iVar25 = uVar12 * 2;
        puVar20[iVar25] = puVar4[2];
        if (uVar2 >= uVar7) {
          uVar12 = uVar12 + 1;
        }
        (puVar20 + iVar25)[1] = uVar13;
        uVar2 = (*pcVar19)(uVar31);
        uVar7 = (**(code **)(iVar30 + 0x28))(uVar14);
        iVar30 = puVar4[7];
        puVar20 = param_3;
        if (uVar2 < uVar7) {
          puVar20 = puVar6 + -6;
        }
        uVar13 = puVar4[5];
        uVar14 = puVar4[6];
        iVar25 = uVar12 * 2;
        puVar20[iVar25] = puVar4[4];
        if (uVar2 >= uVar7) {
          uVar12 = uVar12 + 1;
        }
        (puVar20 + iVar25)[1] = uVar13;
        uVar2 = (*pcVar19)(uVar31);
        uVar7 = (**(code **)(iVar30 + 0x28))(uVar14);
        puVar6 = puVar6 + -8;
        puVar20 = puVar4 + 6;
        uVar13 = puVar4[7];
        puVar4 = puVar4 + 8;
        puVar5 = puVar6;
        if (uVar7 <= uVar2) {
          puVar5 = param_3;
        }
        iVar30 = uVar12 * 2;
        puVar5[iVar30] = *puVar20;
        if (uVar7 <= uVar2) {
          uVar12 = uVar12 + 1;
        }
        (puVar5 + iVar30)[1] = uVar13;
      } while (puVar4 < param_1 + iVar16 * 2);
    }
    if (puVar4 < param_1 + uVar11 * 2) {
      uVar31 = *puVar3;
      pcVar19 = *(code **)(puVar3[1] + 0x28);
      do {
        uVar13 = *puVar4;
        iVar16 = puVar4[1];
        uVar2 = (*pcVar19)(uVar31);
        uVar7 = (**(code **)(iVar16 + 0x28))(uVar13);
        puVar6 = puVar6 + -2;
        uVar13 = *puVar4;
        uVar14 = puVar4[1];
        puVar4 = puVar4 + 2;
        puVar20 = puVar6;
        if (uVar7 <= uVar2) {
          puVar20 = param_3;
        }
        iVar16 = uVar12 * 2;
        puVar20[iVar16] = uVar13;
        if (uVar7 <= uVar2) {
          uVar12 = uVar12 + 1;
        }
        (puVar20 + iVar16)[1] = uVar14;
      } while (puVar4 < param_1 + uVar11 * 2);
    }
    if (uVar11 == uVar18) break;
    puVar6 = puVar6 + -2;
    uVar31 = *puVar4;
    uVar13 = puVar4[1];
    puVar4 = puVar4 + 2;
    iVar16 = uVar12 * 2;
    param_3[iVar16] = uVar31;
    uVar12 = uVar12 + 1;
    (param_3 + iVar16)[1] = uVar13;
    uVar11 = uVar18;
  }
  FUN_016dd1aa(param_1,param_3,uVar12 << 3);
  param_2 = uVar18 - uVar12;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar12 * 2;
  puVar6 = param_3 + uVar18 * 2 + -2;
  uVar11 = param_2;
  puVar4 = param_1;
  do {
    uVar31 = *puVar6;
    uVar13 = puVar6[1];
    puVar6 = puVar6 + -2;
    *puVar4 = uVar31;
    puVar4[1] = uVar13;
    puVar4 = puVar4 + 2;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (uVar18 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar12,uVar18,uVar18,&DAT_018af348);
  }
  local_48 = (undefined4 *)0x0;
  if (param_2 < 0x21) goto LAB_009ce3f0;
  goto LAB_009ce46c;
}

