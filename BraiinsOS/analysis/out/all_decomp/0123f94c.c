// FUN_0123f94c @ 0123f94c size=3432 calls_out=10 calls_in=2
// strings: 

void FUN_0123f94c(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  bool bVar21;
  int local_70;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_2 < 0x21) {
LAB_0123f96c:
    if (param_2 < 2) {
      return;
    }
    if (param_2 + 0x10 <= param_4) {
      uVar11 = param_2 >> 1;
      if (param_2 < 0x10) {
        puVar8 = param_3 + uVar11 * 3;
        puVar19 = param_1 + uVar11 * 3;
        if (param_2 < 8) {
          uVar20 = param_1[1];
          uVar17 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = uVar20;
          param_3[2] = uVar17;
          uVar17 = puVar19[1];
          uVar20 = puVar19[2];
          *puVar8 = *puVar19;
          puVar8[1] = uVar17;
          puVar8[2] = uVar20;
          uVar2 = 1;
        }
        else {
          FUN_011bc898(param_1,param_3);
          FUN_011bc898(puVar19,puVar8);
          uVar2 = 4;
        }
      }
      else {
        FUN_011bc4d8(param_1,param_3,param_3 + param_2 * 3);
        FUN_011bc4d8(param_1 + uVar11 * 3,param_3 + uVar11 * 3,param_3 + param_2 * 3 + 0x18);
        uVar2 = 8;
      }
      if (uVar2 < uVar11) {
        local_38 = uVar2 * 0xc;
        uVar15 = uVar2;
        do {
          puVar19 = param_1 + uVar15 * 3;
          uVar17 = puVar19[1];
          uVar16 = puVar19[2];
          puVar8 = param_3 + uVar15 * 3;
          *puVar8 = *puVar19;
          uVar14 = puVar8[-1];
          puVar8[1] = uVar17;
          puVar8[2] = uVar16;
          uVar6 = uVar14;
          if (uVar16 < uVar14) {
            uVar6 = uVar16;
          }
          uVar6 = FUN_016dd50a(uVar17,puVar8[-2],uVar6);
          if (uVar6 == 0) {
            uVar6 = uVar16 - uVar14;
          }
          if (0x7fffffff < uVar6) {
            uVar20 = *puVar8;
            iVar18 = local_38;
            do {
              iVar9 = iVar18;
              *(undefined4 *)((int)param_3 + iVar9) = *(undefined4 *)((int)param_3 + iVar9 + -0xc);
              *(undefined4 *)((int)param_3 + iVar9 + 4) = *(undefined4 *)((int)param_3 + iVar9 + -8)
              ;
              *(undefined4 *)((int)param_3 + iVar9 + 8) = *(undefined4 *)((int)param_3 + iVar9 + -4)
              ;
              if (iVar9 == 0xc) {
                puVar19 = param_3;
                goto LAB_012402d0;
              }
              uVar14 = *(uint *)((int)param_3 + iVar9 + -0x10);
              uVar6 = uVar14;
              if (uVar16 < uVar14) {
                uVar6 = uVar16;
              }
              iVar7 = FUN_016dd50a(uVar17,*(undefined4 *)((int)param_3 + iVar9 + -0x14),uVar6);
              if (iVar7 == 0) {
                iVar7 = uVar16 - uVar14;
              }
              iVar18 = iVar9 + -0xc;
            } while (iVar7 < 0);
            puVar19 = (undefined4 *)((int)param_3 + iVar9 + -0xc);
LAB_012402d0:
            *puVar19 = uVar20;
            *(undefined4 *)((int)param_3 + iVar9 + -8) = uVar17;
            *(uint *)((int)param_3 + iVar9 + -4) = uVar16;
          }
          uVar15 = uVar15 + 1;
          local_38 = local_38 + 0xc;
        } while (uVar15 != uVar11);
      }
      puVar19 = param_3 + uVar11 * 3;
      if (uVar2 < param_2 - uVar11) {
        local_40 = 0xc;
        uVar15 = uVar2;
        local_44 = puVar19;
        do {
          puVar8 = param_1 + uVar11 * 3 + uVar15 * 3;
          uVar17 = puVar8[1];
          uVar16 = puVar8[2];
          puVar3 = puVar19 + uVar15 * 3;
          *puVar3 = *puVar8;
          uVar14 = puVar3[-1];
          puVar3[1] = uVar17;
          puVar3[2] = uVar16;
          uVar6 = uVar14;
          if (uVar16 < uVar14) {
            uVar6 = uVar16;
          }
          uVar6 = FUN_016dd50a(uVar17,puVar3[-2],uVar6);
          if (uVar6 == 0) {
            uVar6 = uVar16 - uVar14;
          }
          if (0x7fffffff < uVar6) {
            uVar20 = *puVar3;
            iVar18 = local_40;
            puVar8 = local_44;
            do {
              puVar3 = puVar8;
              uVar13 = puVar3[uVar2 * 3 + -1];
              uVar12 = puVar3[uVar2 * 3 + -2];
              puVar3[uVar2 * 3] = puVar3[uVar2 * 3 + -3];
              puVar3[uVar2 * 3 + 1] = uVar12;
              puVar3[uVar2 * 3 + 2] = uVar13;
              if (uVar2 * 0xc == iVar18) {
                puVar8 = puVar19;
                goto LAB_012403f8;
              }
              uVar14 = puVar3[uVar2 * 3 + -4];
              uVar6 = uVar14;
              if (uVar16 < uVar14) {
                uVar6 = uVar16;
              }
              iVar9 = FUN_016dd50a(uVar17,puVar3[uVar2 * 3 + -5],uVar6);
              iVar18 = iVar18 + 0xc;
              if (iVar9 == 0) {
                iVar9 = uVar16 - uVar14;
              }
              puVar8 = puVar3 + -3;
            } while (iVar9 < 0);
            puVar8 = puVar3 + -3 + uVar2 * 3;
LAB_012403f8:
            *puVar8 = uVar20;
            puVar3[uVar2 * 3 + -2] = uVar17;
            puVar3[uVar2 * 3 + -1] = uVar16;
          }
          uVar15 = uVar15 + 1;
          local_40 = local_40 + -0xc;
          local_44 = local_44 + 3;
        } while (uVar15 != param_2 - uVar11);
      }
      iVar18 = 0;
      puVar8 = puVar19 + -3;
      puVar3 = param_3 + param_2 * 3 + -3;
      do {
        uVar6 = param_3[2];
        uVar15 = puVar19[2];
        uVar2 = uVar6;
        if (uVar15 < uVar6) {
          uVar2 = uVar15;
        }
        uVar2 = FUN_016dd50a(puVar19[1],param_3[1],uVar2);
        if (uVar2 == 0) {
          uVar2 = uVar15 - uVar6;
        }
        puVar4 = puVar19;
        if (uVar2 < 0x80000000) {
          puVar4 = param_3;
        }
        uVar17 = puVar4[1];
        uVar20 = puVar4[2];
        puVar10 = (undefined4 *)((int)param_1 + iVar18);
        *puVar10 = *puVar4;
        uVar14 = puVar8[2];
        uVar6 = puVar3[2];
        puVar10[1] = uVar17;
        puVar10[2] = uVar20;
        uVar15 = uVar14;
        if (uVar6 < uVar14) {
          uVar15 = uVar6;
        }
        uVar15 = FUN_016dd50a(puVar3[1],puVar8[1],uVar15);
        if (uVar15 == 0) {
          uVar15 = uVar6 - uVar14;
        }
        puVar4 = puVar8;
        if (uVar15 < 0x80000000) {
          puVar4 = puVar3;
        }
        uVar20 = puVar4[1];
        uVar17 = puVar4[2];
        puVar10 = (undefined4 *)((int)param_1 + ((param_2 * 0xc + -0xc) - iVar18));
        *puVar10 = *puVar4;
        iVar18 = iVar18 + 0xc;
        puVar10[1] = uVar20;
        puVar10[2] = uVar17;
        puVar19 = puVar19 + (uVar2 >> 0x1f | (uVar2 >> 0x1f) << 1);
        uVar2 = uVar2 >> 0x1f ^ 1;
        param_3 = param_3 + (uVar2 | uVar2 << 1);
        puVar8 = puVar8 + ((int)uVar15 >> 0x1f) * 3;
        puVar3 = puVar3 + ~((int)uVar15 >> 0x1f) * 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      puVar8 = puVar8 + 3;
      if ((param_2 & 1) != 0) {
        bVar21 = puVar8 <= param_3;
        puVar4 = puVar19;
        if (!bVar21) {
          puVar4 = param_3;
        }
        uVar17 = *puVar4;
        uVar20 = puVar4[1];
        param_1 = (undefined4 *)((int)param_1 + iVar18);
        param_1[2] = puVar4[2];
        *param_1 = uVar17;
        param_1[1] = uVar20;
        puVar19 = puVar19 + ((uint)bVar21 | (uint)bVar21 << 1);
        param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1);
      }
      bVar21 = param_3 == puVar8;
      if (bVar21) {
        puVar8 = puVar3 + 3;
      }
      if (bVar21 && puVar19 == puVar8) {
        return;
      }
      FUN_00fb7254();
    }
LAB_0124069c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x124069c);
    (*pcVar1)();
  }
  local_70 = param_6;
LAB_0123f9e8:
  uVar11 = param_2;
  do {
    if (param_5 == 0) {
      FUN_0123f244(param_1,uVar11,param_3,param_4,1);
      return;
    }
    puVar8 = param_1 + (uVar11 >> 3) * 0x15;
    puVar19 = param_1 + (uVar11 >> 3) * 0xc;
    if (uVar11 < 0x40) {
      uVar6 = puVar19[2];
      uVar17 = puVar19[1];
      uVar20 = param_1[1];
      uVar15 = param_1[2];
      uVar2 = uVar6;
      if (uVar15 < uVar6) {
        uVar2 = uVar15;
      }
      iVar18 = FUN_016dd50a(uVar20,uVar17,uVar2);
      uVar2 = puVar8[2];
      if (iVar18 == 0) {
        iVar18 = uVar15 - uVar6;
      }
      uVar12 = puVar8[1];
      uVar16 = (uint)(0 < iVar18) - (uint)(iVar18 < 0);
      uVar14 = uVar2;
      if (uVar15 < uVar2) {
        uVar14 = uVar15;
      }
      iVar18 = FUN_016dd50a(uVar20,uVar12,uVar14);
      if (iVar18 == 0) {
        iVar18 = uVar15 - uVar2;
      }
      puVar3 = param_1;
      if (-1 < (int)((uint)(0 < iVar18) - (uint)(iVar18 < 0) ^ uVar16)) {
        uVar15 = uVar2;
        if (uVar6 < uVar2) {
          uVar15 = uVar6;
        }
        iVar18 = FUN_016dd50a(uVar17,uVar12,uVar15);
        if (iVar18 == 0) {
          iVar18 = uVar6 - uVar2;
        }
        puVar3 = puVar19;
        if ((int)((uint)(0 < iVar18) - (uint)(iVar18 < 0) ^ uVar16) < 0) {
          puVar3 = puVar8;
        }
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_0124f8a4(param_1,puVar19,puVar8);
    }
    local_2c = puVar3[1];
    local_28 = puVar3[2];
    local_30 = *puVar3;
    uVar2 = ((uint)((int)puVar3 - (int)param_1) >> 2) * -0x55555555;
    param_5 = param_5 + -1;
    if (local_70 != 0) {
      uVar14 = puVar3[2];
      uVar6 = *(uint *)(local_70 + 8);
      uVar15 = uVar14;
      if (uVar6 < uVar14) {
        uVar15 = uVar6;
      }
      uVar15 = FUN_016dd50a(*(undefined4 *)(local_70 + 4),puVar3[1],uVar15);
      if (uVar15 == 0) {
        uVar15 = uVar6 - uVar14;
      }
      if (uVar15 < 0x80000000) break;
    }
    if (param_4 < uVar11) goto LAB_0124069c;
    param_2 = 0;
    puVar19 = param_3 + uVar11 * 3;
    uVar15 = uVar2;
    local_3c = param_1;
    while( true ) {
      iVar18 = uVar15 - 3;
      if (uVar15 < 3) {
        iVar18 = 0;
      }
      if (local_3c < param_1 + iVar18 * 3) {
        iVar9 = 0;
        puVar8 = local_3c;
        do {
          uVar16 = puVar3[2];
          uVar14 = *(uint *)((int)local_3c + (8 - iVar9));
          uVar6 = uVar16;
          if (uVar14 < uVar16) {
            uVar6 = uVar14;
          }
          iVar7 = FUN_016dd50a(*(undefined4 *)((int)local_3c + (4 - iVar9)),puVar3[1],uVar6);
          if (iVar7 == 0) {
            iVar7 = uVar14 - uVar16;
          }
          puVar4 = param_3;
          if (-1 < iVar7) {
            puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0xc);
          }
          uVar17 = puVar8[1];
          uVar20 = puVar8[2];
          puVar4 = puVar4 + param_2 * 3;
          *puVar4 = *puVar8;
          uVar16 = puVar3[2];
          uVar14 = *(uint *)((int)local_3c + (0x14 - iVar9));
          puVar4[1] = uVar17;
          puVar4[2] = uVar20;
          uVar6 = uVar16;
          if (uVar14 < uVar16) {
            uVar6 = uVar14;
          }
          iVar5 = FUN_016dd50a(*(undefined4 *)((int)local_3c + (0x10 - iVar9)),puVar3[1],uVar6);
          if (iVar5 == 0) {
            iVar5 = uVar14 - uVar16;
          }
          puVar4 = param_3;
          if (-1 < iVar5) {
            puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x18);
          }
          iVar7 = param_2 - (iVar7 >> 0x1f);
          uVar20 = *(undefined4 *)((int)local_3c + (0x10 - iVar9));
          uVar12 = *(undefined4 *)((int)local_3c + (0x14 - iVar9));
          puVar4 = puVar4 + iVar7 * 3;
          *puVar4 = *(undefined4 *)((int)local_3c + (0xc - iVar9));
          iVar7 = iVar7 - (iVar5 >> 0x1f);
          uVar17 = *(undefined4 *)((int)local_3c + (0x1c - iVar9));
          puVar4[1] = uVar20;
          puVar4[2] = uVar12;
          uVar16 = puVar3[2];
          uVar14 = *(uint *)((int)local_3c + (0x20 - iVar9));
          uVar6 = uVar16;
          if (uVar14 < uVar16) {
            uVar6 = uVar14;
          }
          iVar5 = FUN_016dd50a(uVar17,puVar3[1],uVar6);
          if (iVar5 == 0) {
            iVar5 = uVar14 - uVar16;
          }
          puVar4 = param_3;
          if (-1 < iVar5) {
            puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x24);
          }
          uVar17 = puVar8[7];
          uVar20 = puVar8[8];
          iVar5 = iVar7 - (iVar5 >> 0x1f);
          puVar4 = puVar4 + iVar7 * 3;
          *puVar4 = puVar8[6];
          uVar16 = *(uint *)((int)local_3c + (0x2c - iVar9));
          puVar4[1] = uVar17;
          puVar4[2] = uVar20;
          uVar14 = puVar3[2];
          uVar6 = uVar14;
          if (uVar16 < uVar14) {
            uVar6 = uVar16;
          }
          iVar7 = FUN_016dd50a(*(undefined4 *)((int)local_3c + (0x28 - iVar9)),puVar3[1],uVar6);
          if (iVar7 == 0) {
            iVar7 = uVar16 - uVar14;
          }
          puVar4 = param_3;
          if (-1 < iVar7) {
            puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x30);
          }
          uVar17 = *(undefined4 *)((int)local_3c + (0x28 - iVar9));
          uVar20 = *(undefined4 *)((int)local_3c + (0x2c - iVar9));
          param_2 = iVar5 - (iVar7 >> 0x1f);
          puVar4 = puVar4 + iVar5 * 3;
          *puVar4 = *(undefined4 *)((int)local_3c + (0x24 - iVar9));
          iVar9 = iVar9 + -0x30;
          puVar8 = puVar8 + 0xc;
          puVar4[1] = uVar17;
          puVar4[2] = uVar20;
        } while (puVar8 < param_1 + iVar18 * 3);
        puVar19 = (undefined4 *)((int)puVar19 + iVar9);
        local_3c = puVar8;
      }
      for (; local_3c < param_1 + uVar15 * 3; local_3c = local_3c + 3) {
        uVar16 = puVar3[2];
        uVar14 = local_3c[2];
        uVar6 = uVar16;
        if (uVar14 < uVar16) {
          uVar6 = uVar14;
        }
        iVar18 = FUN_016dd50a(local_3c[1],puVar3[1],uVar6);
        puVar19 = puVar19 + -3;
        if (iVar18 == 0) {
          iVar18 = uVar14 - uVar16;
        }
        puVar8 = puVar19;
        if (iVar18 < 0) {
          puVar8 = param_3;
        }
        uVar17 = local_3c[1];
        uVar20 = local_3c[2];
        puVar8 = puVar8 + param_2 * 3;
        *puVar8 = *local_3c;
        puVar8[1] = uVar17;
        puVar8[2] = uVar20;
        param_2 = param_2 - (iVar18 >> 0x1f);
      }
      if (uVar15 == uVar11) break;
      puVar19 = puVar19 + -3;
      uVar17 = local_3c[1];
      uVar20 = local_3c[2];
      puVar8 = puVar19 + param_2 * 3;
      *puVar8 = *local_3c;
      local_3c = local_3c + 3;
      puVar8[1] = uVar17;
      puVar8[2] = uVar20;
      uVar15 = uVar11;
    }
    FUN_016dd1aa(param_1,param_3,param_2 * 0xc);
    iVar18 = uVar11 - param_2;
    if (iVar18 != 0) {
      puVar19 = param_3 + uVar11 * 3 + -3;
      puVar8 = param_1 + param_2 * 3;
      iVar9 = iVar18;
      do {
        uVar12 = *puVar19;
        iVar9 = iVar9 + -1;
        uVar20 = puVar19[1];
        uVar17 = puVar19[2];
        puVar19 = puVar19 + -3;
        *puVar8 = uVar12;
        puVar8[1] = uVar20;
        puVar8[2] = uVar17;
        puVar8 = puVar8 + 3;
      } while (iVar9 != 0);
    }
    if (param_2 == 0) break;
    if (uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_0123f94c(param_1 + param_2 * 3,iVar18,param_3,param_4,param_5,&local_30);
    uVar11 = param_2;
    if (param_2 < 0x21) goto LAB_0123f96c;
  } while( true );
  if (param_4 < uVar11) goto LAB_0124069c;
  uVar15 = 0;
  puVar19 = param_3 + uVar11 * 3;
  local_3c = param_1;
  while( true ) {
    iVar18 = uVar2 - 3;
    if (uVar2 < 3) {
      iVar18 = 0;
    }
    if (local_3c < param_1 + iVar18 * 3) {
      iVar9 = 0;
      puVar8 = local_3c;
      do {
        uVar14 = *(uint *)((int)local_3c + (8 - iVar9));
        uVar16 = puVar3[2];
        uVar6 = uVar14;
        if (uVar16 < uVar14) {
          uVar6 = uVar16;
        }
        uVar6 = FUN_016dd50a(puVar3[1],*(undefined4 *)((int)local_3c + (4 - iVar9)),uVar6);
        if (uVar6 == 0) {
          uVar6 = uVar16 - uVar14;
        }
        uVar14 = uVar15;
        if (-1 < (int)uVar6) {
          uVar14 = uVar15 + 1;
        }
        puVar4 = param_3;
        if (0x7fffffff < uVar6) {
          puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0xc);
        }
        uVar17 = puVar8[1];
        uVar20 = puVar8[2];
        puVar4 = puVar4 + uVar15 * 3;
        *puVar4 = *puVar8;
        uVar6 = *(uint *)((int)local_3c + (0x14 - iVar9));
        uVar16 = puVar3[2];
        puVar4[1] = uVar17;
        puVar4[2] = uVar20;
        uVar15 = uVar6;
        if (uVar16 < uVar6) {
          uVar15 = uVar16;
        }
        uVar15 = FUN_016dd50a(puVar3[1],*(undefined4 *)((int)local_3c + (0x10 - iVar9)),uVar15);
        if (uVar15 == 0) {
          uVar15 = uVar16 - uVar6;
        }
        puVar4 = param_3;
        if (0x7fffffff < uVar15) {
          puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x18);
        }
        uVar17 = *(undefined4 *)((int)local_3c + (0x10 - iVar9));
        uVar20 = *(undefined4 *)((int)local_3c + (0x14 - iVar9));
        uVar6 = uVar14;
        if (uVar15 < 0x80000000) {
          uVar6 = uVar14 + 1;
        }
        puVar4 = puVar4 + uVar14 * 3;
        *puVar4 = *(undefined4 *)((int)local_3c + (0xc - iVar9));
        uVar14 = *(uint *)((int)local_3c + (0x20 - iVar9));
        uVar16 = puVar3[2];
        puVar4[1] = uVar17;
        puVar4[2] = uVar20;
        uVar15 = uVar14;
        if (uVar16 < uVar14) {
          uVar15 = uVar16;
        }
        uVar15 = FUN_016dd50a(puVar3[1],*(undefined4 *)((int)local_3c + (0x1c - iVar9)),uVar15);
        if (uVar15 == 0) {
          uVar15 = uVar16 - uVar14;
        }
        puVar4 = param_3;
        if (0x7fffffff < uVar15) {
          puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x24);
        }
        uVar17 = puVar8[7];
        uVar20 = puVar8[8];
        uVar14 = uVar6;
        if (uVar15 < 0x80000000) {
          uVar14 = uVar6 + 1;
        }
        puVar4 = puVar4 + uVar6 * 3;
        *puVar4 = puVar8[6];
        uVar16 = *(uint *)((int)local_3c + (0x2c - iVar9));
        uVar6 = puVar3[2];
        puVar4[1] = uVar17;
        puVar4[2] = uVar20;
        uVar15 = uVar16;
        if (uVar6 < uVar16) {
          uVar15 = uVar6;
        }
        uVar15 = FUN_016dd50a(puVar3[1],*(undefined4 *)((int)local_3c + (0x28 - iVar9)),uVar15);
        iVar7 = 0x24 - iVar9;
        if (uVar15 == 0) {
          uVar15 = uVar6 - uVar16;
        }
        uVar17 = *(undefined4 *)((int)local_3c + (0x28 - iVar9));
        uVar20 = *(undefined4 *)((int)local_3c + (0x2c - iVar9));
        if (uVar15 < 0x80000000) {
          uVar15 = uVar14 + 1;
          puVar4 = param_3;
        }
        else {
          uVar15 = uVar14;
          puVar4 = (undefined4 *)((int)puVar19 + iVar9 + -0x30);
        }
        iVar9 = iVar9 + -0x30;
        puVar8 = puVar8 + 0xc;
        puVar4 = puVar4 + uVar14 * 3;
        *puVar4 = *(undefined4 *)((int)local_3c + iVar7);
        puVar4[1] = uVar17;
        puVar4[2] = uVar20;
      } while (puVar8 < param_1 + iVar18 * 3);
      puVar19 = (undefined4 *)((int)puVar19 + iVar9);
      local_3c = puVar8;
    }
    uVar6 = uVar15;
    for (; local_3c < param_1 + uVar2 * 3; local_3c = local_3c + 3) {
      uVar16 = local_3c[2];
      uVar14 = puVar3[2];
      uVar15 = uVar16;
      if (uVar14 < uVar16) {
        uVar15 = uVar14;
      }
      uVar15 = FUN_016dd50a(puVar3[1],local_3c[1],uVar15);
      puVar19 = puVar19 + -3;
      if (uVar15 == 0) {
        uVar15 = uVar14 - uVar16;
      }
      puVar8 = puVar19;
      if (uVar15 < 0x80000000) {
        puVar8 = param_3;
      }
      uVar17 = local_3c[1];
      uVar20 = local_3c[2];
      uVar14 = uVar6;
      if (uVar15 < 0x80000000) {
        uVar14 = uVar6 + 1;
      }
      puVar8 = puVar8 + uVar6 * 3;
      *puVar8 = *local_3c;
      puVar8[1] = uVar17;
      puVar8[2] = uVar20;
      uVar6 = uVar14;
    }
    if (uVar2 == uVar11) break;
    uVar17 = local_3c[1];
    uVar20 = local_3c[2];
    uVar15 = uVar6 + 1;
    puVar19 = puVar19 + -3;
    puVar8 = param_3 + uVar6 * 3;
    *puVar8 = *local_3c;
    local_3c = local_3c + 3;
    puVar8[1] = uVar17;
    puVar8[2] = uVar20;
    uVar2 = uVar11;
  }
  FUN_016dd1aa(param_1,param_3,uVar6 * 0xc);
  param_2 = uVar11 - uVar6;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar6 * 3;
  puVar8 = param_3 + uVar11 * 3 + -3;
  puVar19 = param_1;
  uVar2 = param_2;
  do {
    uVar17 = *puVar8;
    uVar12 = puVar8[1];
    uVar2 = uVar2 - 1;
    uVar20 = puVar8[2];
    puVar8 = puVar8 + -3;
    *puVar19 = uVar17;
    puVar19[1] = uVar12;
    puVar19[2] = uVar20;
    puVar19 = puVar19 + 3;
  } while (uVar2 != 0);
  if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar11,uVar11,&DAT_018af348);
  }
  local_70 = 0;
  if (param_2 < 0x21) goto LAB_0123f96c;
  goto LAB_0123f9e8;
}

