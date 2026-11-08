// FUN_009fdef8 @ 009fdef8 size=4004 calls_out=11 calls_in=2
// strings: 

void FUN_009fdef8(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  bool bVar20;
  int local_a0;
  uint local_90;
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  char *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (0x20 < param_2) {
    local_a0 = param_6;
    local_90 = param_2;
LAB_009fdf98:
    if (param_5 == 0) {
      FUN_009f092c(param_1,local_90,param_3,param_4,1);
      return;
    }
    puVar14 = param_1 + (local_90 >> 3) * 0x31;
    puVar8 = param_1 + ((local_90 >> 3) * 8 - (local_90 >> 3)) * 4;
    if (local_90 < 0x40) {
      uVar10 = puVar8[2];
      uVar9 = param_1[1];
      uVar16 = param_1[2];
      uVar15 = uVar10;
      if (uVar16 < uVar10) {
        uVar15 = uVar16;
      }
      uVar15 = FUN_016dd50a(uVar9,puVar8[1],uVar15);
      if (uVar15 == 0) {
        uVar15 = uVar16 - uVar10;
      }
      uVar10 = 0;
      uVar11 = (uint)(0 < (int)uVar15);
      uVar17 = uVar11 - ((int)uVar15 < 0) & 0xff;
      if (uVar17 == 0) {
        if (*(byte *)(param_1 + 3) == *(byte *)(puVar8 + 3)) {
          local_60 = param_1[6];
          local_26 = false;
          local_64 = (byte *)param_1[5];
          if (local_60 != 0) {
            uVar11 = *local_64 - 0x2f;
          }
          local_48 = 0x201;
          local_46 = local_60 != 0 && uVar11 == 0;
          local_44 = (char *)puVar8[5];
          local_40 = puVar8[6];
          local_5c = 6;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c = 6;
          local_28 = 0x201;
          cVar4 = FUN_015f776c(&local_64,&local_44);
          uVar9 = param_1[1];
          uVar16 = param_1[2];
          uVar10 = (uint)(cVar4 < '\0');
        }
        else {
          uVar10 = (uint)(*(byte *)(param_1 + 3) < *(byte *)(puVar8 + 3));
        }
      }
      else if (uVar17 != 2) {
        uVar10 = uVar15 >> 0x1f;
      }
      uVar17 = puVar14[2];
      uVar15 = uVar17;
      if (uVar16 < uVar17) {
        uVar15 = uVar16;
      }
      iVar5 = FUN_016dd50a(uVar9,puVar14[1],uVar15);
      if (iVar5 == 0) {
        iVar5 = uVar16 - uVar17;
      }
      uVar16 = (uint)(0 < iVar5);
      uVar15 = uVar16 - (iVar5 < 0) & 0xff;
      puVar19 = param_1;
      if (uVar15 == 0) {
        if (*(byte *)(param_1 + 3) == *(byte *)(puVar14 + 3)) {
          local_60 = param_1[6];
          local_64 = (byte *)param_1[5];
          local_26 = false;
          if (local_60 != 0) {
            uVar16 = *local_64 - 0x2f;
          }
          local_48 = 0x201;
          local_46 = local_60 != 0 && uVar16 == 0;
          local_44 = (char *)puVar14[5];
          local_40 = puVar14[6];
          local_5c = 6;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c = 6;
          local_28 = 0x201;
          cVar4 = FUN_015f776c(&local_64,&local_44);
          uVar15 = (uint)(cVar4 < '\0');
        }
        else {
          uVar15 = 0;
          if (*(byte *)(param_1 + 3) < *(byte *)(puVar14 + 3)) {
            uVar15 = 1;
          }
        }
joined_r0x009fe230:
        if (uVar10 != uVar15) goto LAB_009fe2a0;
      }
      else {
        if (uVar15 != 2) {
          uVar15 = -(iVar5 >> 0x1f);
          goto joined_r0x009fe230;
        }
        if (uVar10 != 0) goto LAB_009fe2a0;
      }
      uVar16 = puVar14[2];
      uVar17 = puVar8[2];
      uVar15 = uVar16;
      if (uVar17 < uVar16) {
        uVar15 = uVar17;
      }
      uVar15 = FUN_016dd50a(puVar8[1],puVar14[1],uVar15);
      if (uVar15 == 0) {
        uVar15 = uVar17 - uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar15 == (int)uVar15 < 0) {
        if (*(byte *)(puVar8 + 3) == *(byte *)(puVar14 + 3)) {
          local_60 = puVar8[6];
          local_64 = (byte *)puVar8[5];
          local_26 = false;
          iVar5 = 0;
          if (local_60 != 0) {
            iVar5 = *local_64 - 0x2f;
          }
          local_48 = 0x201;
          local_46 = local_60 != 0 && iVar5 == 0;
          local_44 = (char *)puVar14[5];
          local_40 = puVar14[6];
          local_5c = 6;
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c = 6;
          local_28 = 0x201;
          cVar4 = FUN_015f776c(&local_64,&local_44);
          uVar16 = (uint)(cVar4 < '\0');
        }
        else {
          uVar16 = (uint)(*(byte *)(puVar8 + 3) < *(byte *)(puVar14 + 3));
        }
      }
      else if ((char)((0 < (int)uVar15) - ((int)uVar15 < 0)) != '\x02') {
        uVar16 = uVar15 >> 0x1f;
      }
      if (uVar10 != uVar16) {
        puVar8 = puVar14;
      }
      puVar19 = puVar8;
    }
    else {
      puVar19 = (undefined4 *)FUN_009feed8(param_1,puVar8,puVar14);
    }
LAB_009fe2a0:
    param_5 = param_5 + -1;
    uVar15 = ((uint)((int)puVar19 - (int)param_1) >> 2) * -0x49249249;
    local_80 = *puVar19;
    uStack_7c = puVar19[1];
    uStack_78 = puVar19[2];
    local_74 = puVar19[3];
    uStack_70 = puVar19[4];
    uStack_6c = puVar19[5];
    uStack_68 = puVar19[6];
    if (local_a0 != 0) {
      uVar16 = puVar19[2];
      uVar17 = *(uint *)(local_a0 + 8);
      uVar10 = uVar16;
      if (uVar17 < uVar16) {
        uVar10 = uVar17;
      }
      iVar5 = FUN_016dd50a(*(undefined4 *)(local_a0 + 4),puVar19[1],uVar10);
      if (iVar5 == 0) {
        iVar5 = uVar17 - uVar16;
      }
      if (0 < iVar5 != iVar5 < 0) {
        if (((char)((0 < iVar5) - (iVar5 < 0)) == '\x02') || (-1 < iVar5)) goto LAB_009fe72c;
        goto LAB_009fe3e8;
      }
      if (*(byte *)(local_a0 + 0xc) == *(byte *)(puVar19 + 3)) {
        local_64 = *(byte **)(local_a0 + 0x14);
        local_60 = *(int *)(local_a0 + 0x18);
        local_46 = false;
        local_44 = (char *)puVar19[5];
        local_40 = puVar19[6];
        local_26 = false;
        if (local_60 != 0) {
          local_46 = *local_64 == 0x2f;
        }
        local_5c = 6;
        local_48 = 0x201;
        if (local_40 != 0) {
          local_26 = *local_44 == '/';
        }
        local_3c = 6;
        local_28 = 0x201;
        cVar4 = FUN_015f776c(&local_64,&local_44);
        if (cVar4 < '\0') goto LAB_009fe3e8;
      }
      else if (*(byte *)(local_a0 + 0xc) < *(byte *)(puVar19 + 3)) goto LAB_009fe3e8;
      goto LAB_009fe72c;
    }
LAB_009fe3e8:
    if (local_90 <= param_4) {
      param_2 = 0;
      puVar14 = param_3 + local_90 * 7;
      puVar8 = param_1;
      uVar10 = uVar15;
      do {
        for (; puVar8 < param_1 + uVar10 * 7; puVar8 = puVar8 + 7) {
          uVar11 = puVar19[2];
          uVar17 = puVar8[2];
          uVar16 = uVar11;
          if (uVar17 < uVar11) {
            uVar16 = uVar17;
          }
          uVar16 = FUN_016dd50a(puVar8[1],puVar19[1],uVar16);
          if (uVar16 == 0) {
            uVar16 = uVar17 - uVar11;
          }
          if (0 < (int)uVar16 == (int)uVar16 < 0) {
            bVar2 = *(byte *)(puVar19 + 3);
            bVar3 = *(byte *)(puVar8 + 3);
            if (bVar3 == bVar2) {
              local_60 = puVar8[6];
              local_46 = false;
              local_64 = (byte *)puVar8[5];
              local_26 = false;
              local_44 = (char *)puVar19[5];
              local_40 = puVar19[6];
              if (local_60 != 0) {
                local_46 = *local_64 == 0x2f;
              }
              local_5c = 6;
              local_48 = 0x201;
              if (local_40 != 0) {
                local_26 = *local_44 == '/';
              }
              local_3c = 6;
              local_28 = 0x201;
              cVar4 = FUN_015f776c(&local_64,&local_44);
              uVar17 = (uint)(cVar4 < '\0');
              puVar6 = puVar14 + -7;
              if (cVar4 < '\0') {
                puVar6 = param_3;
              }
            }
            else {
              uVar17 = (uint)(bVar3 < bVar2);
              puVar6 = puVar14 + -7;
              if (bVar3 < bVar2) goto LAB_009fe588;
            }
          }
          else {
            puVar6 = puVar14 + -7;
            if ((char)((0 < (int)uVar16) - ((int)uVar16 < 0)) == '\x02') {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar16 >> 0x1f;
              if (0x7fffffff < uVar16) {
LAB_009fe588:
                puVar6 = param_3;
              }
            }
          }
          puVar14 = puVar14 + -7;
          puVar6 = puVar6 + param_2 * 7;
          uVar9 = puVar8[1];
          uVar12 = puVar8[2];
          *puVar6 = *puVar8;
          puVar6[1] = uVar9;
          puVar6[2] = uVar12;
          uVar9 = puVar8[4];
          uVar12 = puVar8[5];
          uVar13 = puVar8[6];
          puVar6[3] = puVar8[3];
          puVar6[4] = uVar9;
          puVar6[5] = uVar12;
          puVar6[6] = uVar13;
          param_2 = param_2 + uVar17;
        }
        if (uVar10 == local_90) goto LAB_009fe5cc;
        puVar14 = puVar14 + -7;
        uVar9 = puVar8[1];
        uVar12 = puVar8[2];
        puVar6 = puVar14 + param_2 * 7;
        *puVar6 = *puVar8;
        puVar6[1] = uVar9;
        puVar6[2] = uVar12;
        uVar9 = puVar8[4];
        uVar12 = puVar8[5];
        uVar13 = puVar8[6];
        puVar6[3] = puVar8[3];
        puVar6[4] = uVar9;
        puVar6[5] = uVar12;
        puVar6[6] = uVar13;
        puVar8 = puVar8 + 7;
        uVar10 = local_90;
      } while( true );
    }
    goto LAB_009fee84;
  }
LAB_009fdf1c:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_90 = param_2 >> 1;
    iVar5 = local_90 * 8 - (param_2 >> 1);
    puVar14 = param_3 + iVar5;
    puVar8 = param_1 + iVar5;
    if (param_2 < 8) {
      uVar9 = param_1[1];
      uVar12 = param_1[2];
      uVar15 = 1;
      *param_3 = *param_1;
      param_3[1] = uVar9;
      param_3[2] = uVar12;
      uVar9 = param_1[4];
      uVar12 = param_1[5];
      uVar13 = param_1[6];
      param_3[3] = param_1[3];
      param_3[4] = uVar9;
      param_3[5] = uVar12;
      param_3[6] = uVar13;
      uVar9 = puVar8[1];
      uVar12 = puVar8[2];
      *puVar14 = *puVar8;
      puVar14[1] = uVar9;
      puVar14[2] = uVar12;
      uVar9 = puVar8[4];
      uVar12 = puVar8[5];
      uVar13 = puVar8[6];
      puVar14[3] = puVar8[3];
      puVar14[4] = uVar9;
      puVar14[5] = uVar12;
      puVar14[6] = uVar13;
    }
    else {
      FUN_009f7bbc(param_1,param_3);
      FUN_009f7bbc(puVar8,puVar14);
      uVar15 = 4;
    }
    if (uVar15 < local_90) {
      iVar18 = local_90 - uVar15;
      iVar5 = uVar15 * 0x1c;
      do {
        puVar19 = (undefined4 *)((int)param_1 + iVar5);
        puVar8 = (undefined4 *)((int)param_3 + iVar5);
        uVar9 = puVar19[1];
        uVar12 = puVar19[2];
        *puVar8 = *puVar19;
        puVar8[1] = uVar9;
        puVar8[2] = uVar12;
        uVar9 = puVar19[4];
        uVar12 = puVar19[5];
        uVar13 = puVar19[6];
        puVar8[3] = puVar19[3];
        puVar8[4] = uVar9;
        puVar8[5] = uVar12;
        puVar8[6] = uVar13;
        FUN_009f78d4(param_3);
        iVar5 = iVar5 + 0x1c;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    if (uVar15 < param_2 - local_90) {
      iVar5 = (uVar15 + local_90) - param_2;
      puVar8 = param_3 + local_90 * 7 + uVar15 * 7;
      puVar19 = param_1 + local_90 * 7 + uVar15 * 7;
      do {
        uVar9 = puVar19[1];
        uVar12 = puVar19[2];
        *puVar8 = *puVar19;
        puVar8[1] = uVar9;
        puVar8[2] = uVar12;
        uVar9 = puVar19[4];
        uVar12 = puVar19[5];
        uVar13 = puVar19[6];
        puVar8[3] = puVar19[3];
        puVar8[4] = uVar9;
        puVar8[5] = uVar12;
        puVar8[6] = uVar13;
        FUN_009f78d4(puVar14,puVar8);
        puVar19 = puVar19 + 7;
        puVar8 = puVar8 + 7;
        bVar20 = iVar5 != -1;
        iVar5 = iVar5 + 1;
      } while (bVar20);
    }
    iVar5 = 0;
    puVar8 = param_3 + param_2 * 7;
    local_88 = puVar14 + -7;
    do {
      puVar19 = puVar8 + -7;
      uVar10 = param_3[2];
      uVar16 = puVar14[2];
      uVar15 = uVar10;
      if (uVar16 < uVar10) {
        uVar15 = uVar16;
      }
      uVar15 = FUN_016dd50a(puVar14[1],param_3[1],uVar15);
      if (uVar15 == 0) {
        uVar15 = uVar16 - uVar10;
      }
      uVar10 = 0;
      puVar6 = param_3;
      if ((char)((0 < (int)uVar15) - ((int)uVar15 < 0)) != '\x02') {
        if (0 < (int)uVar15 == (int)uVar15 < 0) {
          bVar2 = *(byte *)(param_3 + 3);
          bVar3 = *(byte *)(puVar14 + 3);
          if (bVar3 == bVar2) {
            local_60 = puVar14[6];
            local_46 = false;
            local_64 = (byte *)puVar14[5];
            local_26 = false;
            local_44 = (char *)param_3[5];
            local_40 = param_3[6];
            if (local_60 != 0) {
              local_46 = *local_64 == 0x2f;
            }
            local_5c = 6;
            local_48 = 0x201;
            if (local_40 != 0) {
              local_26 = *local_44 == '/';
            }
            local_3c = 6;
            local_28 = 0x201;
            cVar4 = FUN_015f776c(&local_64,&local_44);
            uVar10 = (uint)(cVar4 < '\0');
            if (cVar4 < '\0') {
              puVar6 = puVar14;
            }
          }
          else {
            uVar10 = (uint)(bVar3 < bVar2);
            if (bVar3 < bVar2) goto LAB_009fec80;
          }
        }
        else {
          uVar10 = uVar15 >> 0x1f;
          if (0x7fffffff < uVar15) {
LAB_009fec80:
            puVar6 = puVar14;
          }
        }
      }
      uVar9 = puVar6[1];
      uVar12 = puVar6[2];
      puVar7 = (undefined4 *)((int)param_1 + iVar5);
      *puVar7 = *puVar6;
      puVar7[1] = uVar9;
      puVar7[2] = uVar12;
      uVar9 = puVar6[4];
      uVar12 = puVar6[5];
      uVar13 = puVar6[6];
      puVar7[3] = puVar6[3];
      puVar7[4] = uVar9;
      puVar7[5] = uVar12;
      puVar7[6] = uVar13;
      uVar16 = puVar8[-5];
      uVar17 = local_88[2];
      uVar15 = uVar17;
      if (uVar16 < uVar17) {
        uVar15 = uVar16;
      }
      uVar15 = FUN_016dd50a(puVar8[-6],local_88[1],uVar15);
      if (uVar15 == 0) {
        uVar15 = uVar16 - uVar17;
      }
      uVar16 = 0;
      puVar6 = puVar19;
      if ((char)((0 < (int)uVar15) - ((int)uVar15 < 0)) != '\x02') {
        if (0 < (int)uVar15 == (int)uVar15 < 0) {
          bVar2 = *(byte *)(puVar8 + -4);
          bVar3 = *(byte *)(local_88 + 3);
          if (bVar2 == bVar3) {
            local_60 = puVar8[-1];
            local_46 = 0;
            local_64 = (byte *)puVar8[-2];
            if (local_60 != 0) {
              local_46 = *local_64;
            }
            local_44 = (char *)local_88[5];
            local_40 = local_88[6];
            if (local_60 != 0) {
              local_46 = local_46 == 0x2f;
            }
            local_5c = 6;
            local_48 = 0x201;
            if (local_40 != 0) {
              uVar16 = (uint)(*local_44 == '/');
            }
            local_3c = 6;
            local_26 = (undefined1)uVar16;
            local_28 = 0x201;
            cVar4 = FUN_015f776c(&local_64,&local_44);
            uVar16 = (uint)(cVar4 < '\0');
            if (cVar4 < '\0') {
              puVar6 = local_88;
            }
          }
          else {
            uVar16 = (uint)(bVar2 < bVar3);
            if (bVar2 < bVar3) goto LAB_009feaf4;
          }
        }
        else {
          uVar16 = uVar15 >> 0x1f;
          if ((int)uVar15 < 0) {
LAB_009feaf4:
            puVar6 = local_88;
          }
        }
      }
      puVar8 = (undefined4 *)((int)param_1 + ((param_2 * 0x1c + -0x1c) - iVar5));
      iVar5 = iVar5 + 0x1c;
      puVar14 = puVar14 + uVar10 * 7;
      param_3 = param_3 + (uVar10 ^ 1) * 7;
      uVar9 = puVar6[1];
      uVar12 = puVar6[2];
      *puVar8 = *puVar6;
      puVar8[1] = uVar9;
      puVar8[2] = uVar12;
      uVar9 = puVar6[4];
      uVar12 = puVar6[5];
      uVar13 = puVar6[6];
      puVar8[3] = puVar6[3];
      puVar8[4] = uVar9;
      puVar8[5] = uVar12;
      puVar8[6] = uVar13;
      local_88 = local_88 + uVar16 * -7;
      puVar8 = puVar19 + uVar16 * 7;
      local_90 = local_90 - 1;
    } while (local_90 != 0);
    local_88 = local_88 + 7;
    if ((param_2 & 1) != 0) {
      bVar20 = local_88 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar5);
      puVar19 = puVar14;
      if (!bVar20) {
        puVar19 = param_3;
      }
      uVar9 = puVar19[1];
      uVar12 = puVar19[2];
      *param_1 = *puVar19;
      param_1[1] = uVar9;
      param_1[2] = uVar12;
      uVar9 = puVar19[4];
      uVar12 = puVar19[5];
      uVar13 = puVar19[6];
      param_1[3] = puVar19[3];
      param_1[4] = uVar9;
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      puVar14 = puVar14 + (uint)bVar20 * 7;
      param_3 = param_3 + (uint)!bVar20 * 7;
    }
    puVar19 = local_88;
    if (param_3 == local_88) {
      puVar19 = puVar8;
    }
    if (param_3 == local_88 && puVar14 == puVar19) {
      return;
    }
    FUN_00fb7254();
  }
LAB_009fee84:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x9fee84);
  (*pcVar1)();
LAB_009fe5cc:
  FUN_016dd1aa(param_1,param_3,param_2 * 0x1c);
  iVar5 = local_90 - param_2;
  if (iVar5 != 0) {
    puVar8 = param_1 + param_2 * 7;
    iVar18 = iVar5;
    puVar14 = param_3 + local_90 * 7 + -7;
    do {
      uVar9 = puVar14[1];
      uVar12 = puVar14[2];
      iVar18 = iVar18 + -1;
      *puVar8 = *puVar14;
      puVar8[1] = uVar9;
      puVar8[2] = uVar12;
      uVar9 = puVar14[4];
      uVar12 = puVar14[5];
      uVar13 = puVar14[6];
      puVar8[3] = puVar14[3];
      puVar8[4] = uVar9;
      puVar8[5] = uVar12;
      puVar8[6] = uVar13;
      puVar8 = puVar8 + 7;
      puVar14 = puVar14 + -7;
    } while (iVar18 != 0);
  }
  if (param_2 == 0) {
LAB_009fe72c:
    if (local_90 <= param_4) {
      uVar10 = 0;
      puVar14 = param_3 + local_90 * 7;
      puVar8 = param_1;
      do {
        uVar16 = uVar10;
        for (; puVar8 < param_1 + uVar15 * 7; puVar8 = puVar8 + 7) {
          uVar11 = puVar8[2];
          uVar17 = puVar19[2];
          uVar10 = uVar11;
          if (uVar17 < uVar11) {
            uVar10 = uVar17;
          }
          uVar10 = FUN_016dd50a(puVar19[1],puVar8[1],uVar10);
          if (uVar10 == 0) {
            uVar10 = uVar17 - uVar11;
          }
          uVar11 = (uint)(0 < (int)uVar10);
          uVar17 = uVar11 - ((int)uVar10 < 0) & 0xff;
          puVar6 = param_3;
          if (uVar17 == 0) {
            bVar2 = *(byte *)(puVar8 + 3);
            bVar3 = *(byte *)(puVar19 + 3);
            if (bVar3 == bVar2) {
              local_60 = puVar19[6];
              local_46 = 0;
              local_64 = (byte *)puVar19[5];
              bVar20 = local_60 != 0;
              local_26 = false;
              if (bVar20) {
                uVar11 = *local_64 - 0x2f;
              }
              local_48 = 0x201;
              if (bVar20) {
                uVar11 = LZCOUNT(uVar11);
              }
              local_5c = 6;
              if (bVar20) {
                local_46 = (byte)(uVar11 >> 5);
              }
              local_44 = (char *)puVar8[5];
              local_40 = puVar8[6];
              if (local_40 != 0) {
                local_26 = *local_44 == '/';
              }
              local_3c = 6;
              local_28 = 0x201;
              cVar4 = FUN_015f776c(&local_64,&local_44);
              uVar17 = (uint)((uint)(int)cVar4 < 0x80000000);
              if (cVar4 < 0) {
                puVar6 = puVar14 + -7;
              }
            }
            else {
              uVar17 = (uint)(bVar2 <= bVar3);
              if (bVar2 > bVar3) goto LAB_009fe8d8;
            }
          }
          else if (uVar17 == 2) {
            uVar17 = 1;
          }
          else {
            uVar17 = ~uVar10 >> 0x1f;
            if (0x7fffffff < uVar10) {
LAB_009fe8d8:
              puVar6 = puVar14 + -7;
            }
          }
          puVar14 = puVar14 + -7;
          puVar6 = puVar6 + uVar16 * 7;
          uVar9 = puVar8[1];
          uVar12 = puVar8[2];
          *puVar6 = *puVar8;
          puVar6[1] = uVar9;
          puVar6[2] = uVar12;
          uVar9 = puVar8[4];
          uVar12 = puVar8[5];
          uVar13 = puVar8[6];
          puVar6[3] = puVar8[3];
          puVar6[4] = uVar9;
          puVar6[5] = uVar12;
          puVar6[6] = uVar13;
          uVar16 = uVar16 + uVar17;
        }
        if (uVar15 == local_90) goto LAB_009fe920;
        uVar10 = uVar16 + 1;
        puVar6 = param_3 + uVar16 * 7;
        uVar9 = puVar8[1];
        uVar12 = puVar8[2];
        puVar14 = puVar14 + -7;
        *puVar6 = *puVar8;
        puVar6[1] = uVar9;
        puVar6[2] = uVar12;
        uVar9 = puVar8[4];
        uVar12 = puVar8[5];
        uVar13 = puVar8[6];
        puVar6[3] = puVar8[3];
        puVar6[4] = uVar9;
        puVar6[5] = uVar12;
        puVar6[6] = uVar13;
        uVar15 = local_90;
        puVar8 = puVar8 + 7;
      } while( true );
    }
    goto LAB_009fee84;
  }
  if (local_90 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_009fdef8(param_1 + param_2 * 7,iVar5,param_3,param_4,param_5,&local_80);
  local_90 = param_2;
  if (param_2 < 0x21) goto LAB_009fdf1c;
  goto LAB_009fdf98;
LAB_009fe920:
  FUN_016dd1aa(param_1,param_3,uVar16 * 0x1c);
  param_2 = local_90 - uVar16;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar16 * 7;
  puVar8 = param_1;
  puVar14 = param_3 + local_90 * 7 + -7;
  uVar15 = param_2;
  do {
    uVar9 = puVar14[1];
    uVar12 = puVar14[2];
    uVar15 = uVar15 - 1;
    *puVar8 = *puVar14;
    puVar8[1] = uVar9;
    puVar8[2] = uVar12;
    uVar9 = puVar14[4];
    uVar12 = puVar14[5];
    uVar13 = puVar14[6];
    puVar8[3] = puVar14[3];
    puVar8[4] = uVar9;
    puVar8[5] = uVar12;
    puVar8[6] = uVar13;
    puVar8 = puVar8 + 7;
    puVar14 = puVar14 + -7;
  } while (uVar15 != 0);
  if (local_90 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar16,local_90,local_90,&DAT_018af348);
  }
  local_a0 = 0;
  local_90 = param_2;
  if (param_2 < 0x21) goto LAB_009fdf1c;
  goto LAB_009fdf98;
}

