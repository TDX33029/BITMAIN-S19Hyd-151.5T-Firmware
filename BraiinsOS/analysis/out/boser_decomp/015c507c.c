// FUN_015c507c @ 015c507c size=4720 calls_out=24 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015c507c(undefined4 *param_1,int param_2,int param_3,uint *param_4,undefined4 param_5,
                 byte *param_6,ushort *param_7)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *****pppppiVar12;
  int iVar13;
  undefined4 uVar14;
  int *****pppppiVar15;
  ushort uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  int *******pppppppiVar19;
  int *****pppppiVar20;
  int *piVar21;
  int ******ppppppiVar22;
  int *piVar23;
  int ******ppppppiVar24;
  int ******ppppppiVar25;
  undefined4 uVar26;
  uint uVar27;
  int *******pppppppiVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_18c;
  int local_188;
  int *****local_184;
  int ******local_180;
  undefined4 local_17c;
  int ******local_178;
  int ******local_174;
  int local_170;
  int ******local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *****local_144;
  int local_140;
  int ******local_13c;
  undefined4 local_138;
  int *****local_134;
  int ******local_130;
  int *****local_12c;
  int *******local_128;
  int *****local_124;
  int *******local_120;
  int *****local_11c;
  int *******local_118;
  int *****local_114;
  int *****local_110;
  int *******pppppppiStack_10c;
  int *****local_108;
  undefined4 local_104;
  int local_fc;
  char *local_f8;
  int ******local_f4;
  int ******local_f0;
  undefined4 local_b8;
  int *****local_b4;
  int *******local_b0;
  int ******local_ac;
  char *local_a8;
  int ******local_a4;
  undefined *local_a0;
  int *******local_98;
  int *****local_94;
  int *******local_90;
  int *****local_8c;
  int *******local_88;
  int *****local_84;
  int *******pppppppiStack_80;
  int *****pppppiStack_7c;
  int *******local_78;
  int *****local_74;
  int *****pppppiStack_70;
  int *******local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *******local_60;
  int local_5c;
  int *******local_58;
  int *****pppppiStack_54;
  undefined4 uStack_50;
  char local_4c;
  int *******local_48;
  int ******local_44;
  char *local_40;
  int ******local_3c;
  int *******local_38;
  int ******local_34;
  int local_30;
  
  if (param_6 == (byte *)0x0) {
    if (param_4[1] == 2) {
      param_6 = (byte *)FUN_015f2b40(param_3);
    }
    else {
      param_6 = (byte *)FUN_015f2bc0(param_3);
    }
    if (param_6 == (byte *)0x0) goto LAB_015c5124;
  }
  bVar6 = *param_6;
  iVar9 = 0x28;
  uVar14 = *(undefined4 *)(param_3 + 0x20);
  if (bVar6 == 2) {
    iVar9 = 0x24;
  }
  pppppppiVar28 = *(int ********)(param_3 + iVar9);
  local_184 = *(int ******)(param_3 + 0x30);
  iVar9 = *(int *)(param_3 + 0x34);
  if (*(short *)(param_2 + 0x38) < 0) {
    if (*(int *)(param_2 + 0x1c) == 0 && *(int *)(param_2 + 0x34) == 0) {
LAB_015c5124:
      param_1[1] = 0;
      *param_1 = 2;
      param_1[2] = 4;
      param_1[3] = 0;
      return;
    }
    local_17c = 8;
    local_180 = (int ******)&DAT_0056ff98;
  }
  else {
    local_17c = 5;
    local_180 = (int ******)&DAT_0050c2f4;
  }
  if (4 < DAT_01d51b00) {
    local_178 = *(int *******)(param_2 + 0x10);
    local_38 = *(int ********)(param_2 + 0x1c);
    local_48 = *(int ********)(param_2 + 0x28);
    local_b0 = *(int ********)(param_2 + 0x34);
    local_118 = (int *******)&local_b0;
    local_120 = (int *******)&local_48;
    local_128 = (int *******)&local_38;
    local_130 = (int ******)&local_178;
    local_138 = (char *)&local_180;
    local_134 = (int *****)&LAB_018a13b8;
    local_8c = (int *****)0x17;
    local_94 = (int *****)0x17;
    local_114 = (int *****)FUN_012fd02c;
    local_11c = (int *****)FUN_012fd02c;
    local_124 = (int *****)FUN_012fd02c;
    local_12c = (int *****)FUN_012fd02c;
    local_88 = (int *******)&DAT_01cfc888;
    local_90 = (int *******)0x4b3d9f;
    local_98 = (int *******)0x4b3d9f;
    FUN_015fb650(&DAT_00593e25,&local_138,5,&local_98);
  }
  bVar1 = *param_6;
  uVar27 = (uint)bVar1;
  if (uVar27 == 2) {
    local_18c = *param_4;
    pppppppiVar19 = *(int ********)(param_6 + 6);
    local_138 = (char *)pppppppiVar19;
    local_48 = pppppppiVar19;
    iVar10 = FUN_01be9b78(local_18c,0,0x20,&local_138,4);
    if (iVar10 == -1) {
      puVar11 = (undefined4 *)FUN_01be3244();
      local_ac = (int ******)*puVar11;
      local_b0 = (int *******)0x0;
      if (3 < DAT_01d51b00) {
        local_90 = (int *******)&local_b0;
        local_8c = (int *****)FUN_019a7d7c;
        local_98 = (int *******)&local_48;
        local_94 = (int *****)FUN_013095bc;
        local_128 = (int *******)&DAT_01cfc898;
        local_12c = (int *****)0x17;
        local_130 = (int ******)0x4b3d9f;
        local_134 = (int *****)0x17;
        local_138 = "m";
        FUN_015fb650(&DAT_0057a49b,&local_98,4,&local_138);
      }
      uVar30 = FUN_005ef5e8(&local_b0);
      if (((uint)uVar30 & 0xff) == 9) {
        if (iVar9 < 0) {
          uVar26 = 0;
          iVar9 = (int)((ulonglong)uVar30 >> 0x20);
LAB_015c5310:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar26,iVar9);
        }
        if (iVar9 == 0) {
          iVar10 = 0;
          iVar13 = 1;
        }
        else {
          uVar26 = 1;
          iVar13 = FUN_01298504(iVar9,1);
          if (iVar13 == 0) goto LAB_015c5310;
          iVar10 = iVar9;
        }
        FUN_01bed4e2(iVar13,local_184,iVar9);
        *(undefined2 *)((int)param_1 + 0x46) = 0x200;
        *(int ********)((int)param_1 + 0x1a) = pppppppiVar19;
        *(undefined1 *)(param_1 + 5) = 2;
        bVar6 = param_6[1];
        uVar26 = *(undefined4 *)(param_6 + 2);
        uVar18 = *(undefined4 *)(param_6 + 10);
        bVar1 = param_6[0xe];
        *param_1 = 1;
        param_1[1] = uVar14;
        param_1[2] = iVar10;
        param_1[3] = iVar13;
        param_1[4] = iVar9;
        *(byte *)((int)param_1 + 0x22) = bVar1;
        *(undefined4 *)((int)param_1 + 0x1e) = uVar18;
        *(undefined4 *)((int)param_1 + 0x16) = uVar26;
        *(byte *)((int)param_1 + 0x15) = bVar6;
      }
      else {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
      }
      ppppppiVar24 = local_ac;
      uVar2 = local_b0._0_1_;
      goto LAB_015c62fc;
    }
  }
  else {
    ppppppiVar24 = *(int *******)(param_6 + 0x11);
    FUN_01bed4e2(&local_ac,param_6 + 0x15,0xc);
    local_18c = *param_4;
    local_b0 = (int *******)ppppppiVar24;
    FUN_01979dd0(&local_38,local_18c,0x29,0x11,uVar14);
    if ((char)local_38 != '\x04') {
      local_44 = local_34;
      local_48 = local_38;
      if (3 < DAT_01d51b00) {
        local_90 = (int *******)&local_48;
        local_8c = (int *****)FUN_019a7d7c;
        local_98 = (int *******)&local_b0;
        local_94 = (int *****)FUN_01308e28;
        local_128 = (int *******)&DAT_01cfc8a8;
        local_12c = (int *****)0x17;
        local_130 = (int ******)0x4b3d9f;
        local_134 = (int *****)0x17;
        local_138 = "m";
        FUN_015fb650(&DAT_005b0cd1,&local_98,4,&local_138);
      }
      uVar30 = FUN_005ef5e8(&local_48);
      if (((uint)uVar30 & 0xff) == 9) {
        if (iVar9 < 0) {
          uVar26 = 0;
          iVar9 = (int)((ulonglong)uVar30 >> 0x20);
LAB_015c5be8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar26,iVar9);
        }
        if (iVar9 == 0) {
          iVar10 = 1;
          local_188 = 0;
        }
        else {
          uVar26 = 1;
          iVar10 = FUN_01298504(iVar9,1);
          if (iVar10 == 0) goto LAB_015c5be8;
          local_188 = iVar9;
        }
        FUN_01bed4e2(iVar10,local_184,iVar9);
        bVar29 = (bVar1 & 1) != 0;
        bVar6 = param_6[0x31];
        if (bVar29) {
          local_184 = (int *****)(uint)*(ushort *)(param_6 + 0xf);
          local_1a0 = *(undefined4 *)(param_6 + 6);
          pppppppiVar28 = (int *******)(uint)param_6[0xe];
          uVar27 = *(uint *)(param_6 + 10);
          local_19c = *(undefined4 *)(param_6 + 2);
          local_18c = (uint)param_6[1];
        }
        FUN_01bed4e2((int)param_1 + 0x25,param_6 + 0x11,0x10);
        FUN_01bed4e2((int)param_1 + 0x35,param_6 + 0x21,0x10);
        *(byte *)((int)param_1 + 0x45) = bVar6;
        *(undefined2 *)((int)param_1 + 0x46) = 0x200;
        *(short *)((int)param_1 + 0x23) = (short)local_184;
        *(undefined4 *)((int)param_1 + 0x1a) = local_1a0;
        *(undefined4 *)((int)param_1 + 0x16) = local_19c;
        *(char *)((int)param_1 + 0x15) = (char)local_18c;
        *param_1 = 1;
        param_1[1] = uVar14;
        param_1[2] = local_188;
        *(char *)((int)param_1 + 0x22) = (char)pppppppiVar28;
        *(uint *)((int)param_1 + 0x1e) = uVar27;
        *(bool *)(param_1 + 5) = bVar29;
        param_1[3] = iVar10;
        param_1[4] = iVar9;
      }
      else {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
      }
      ppppppiVar24 = local_44;
      uVar2 = local_48._0_1_;
LAB_015c62fc:
      FUN_0069d8a4(uVar2,ppppppiVar24);
      return;
    }
  }
  local_a8 = (char *)0x0;
  local_ac = (int ******)0x8;
  local_b0 = (int *******)0x0;
  FUN_015e5a74(&local_138,pppppppiVar28);
  local_4c = bVar6 == 2;
  local_58 = local_b0;
  pppppiStack_54 = (int *****)local_ac;
  uStack_50 = local_a8;
  local_98 = (int *******)local_138;
  local_94 = local_134;
  local_90 = (int *******)local_130;
  local_8c = local_12c;
  local_88 = local_128;
  local_84 = local_124;
  pppppppiStack_80 = local_120;
  pppppiStack_7c = local_11c;
  local_78 = local_118;
  local_74 = local_114;
  pppppiStack_70 = local_110;
  local_6c = pppppppiStack_10c;
  local_68 = local_108;
  local_64 = local_104;
  local_60 = pppppppiVar28;
  local_5c = param_2;
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar11 = (undefined4 *)(*(int *)(param_2 + 0xc) + 8);
    iVar10 = *(int *)(param_2 + 0x10) * 0x14;
    do {
      pppppppiVar28 = local_6c;
      bVar6 = FUN_015e2738(&local_98,puVar11[-1],*puVar11);
      if (bVar6 == 2) {
        FUN_015e9368(&local_74,(uint)*(ushort *)(puVar11 + 1) << 8);
        FUN_015e9368(&local_74,
                     *(ushort *)((int)puVar11 + 6) << 8 | *(ushort *)((int)puVar11 + 6) >> 8);
        if (local_78 < local_6c) {
          if (pppppppiVar28 <= local_6c) {
            local_6c = pppppppiVar28;
          }
          FUN_015dd568(&local_98,pppppppiVar28);
          goto LAB_015c5488;
        }
LAB_015c5504:
        local_68 = (int *****)CONCAT22(local_68._2_2_,(short)local_68 + 1);
      }
      else {
        if (pppppppiVar28 <= local_6c) {
          local_6c = pppppppiVar28;
        }
        FUN_015dd568(&local_98,pppppppiVar28);
        if ((bVar6 & 1) != 0) {
LAB_015c5488:
          if ((short)local_68 == 0) {
            uVar27 = (uint)local_68 >> 0x10;
            bVar29 = uVar27 == 0;
            if (bVar29) {
              uVar27 = (uint)local_64 & 0xffff;
            }
            if ((bVar29 && uVar27 == 0) && (local_64._2_2_ == 0)) goto LAB_015c553c;
          }
          FUN_015e5bac(&local_98);
          pppppppiVar28 = local_6c;
          cVar7 = FUN_015e2738(&local_98,puVar11[-1],*puVar11);
          if (cVar7 == '\x02') {
            FUN_015e9368(&local_74,(uint)*(ushort *)(puVar11 + 1) << 8);
            FUN_015e9368(&local_74,
                         *(ushort *)((int)puVar11 + 6) << 8 | *(ushort *)((int)puVar11 + 6) >> 8);
            if (local_6c <= local_78) goto LAB_015c5504;
          }
          if (pppppppiVar28 <= local_6c) {
            local_6c = pppppppiVar28;
          }
          FUN_015dd568(&local_98,pppppppiVar28);
        }
      }
LAB_015c553c:
      puVar11 = puVar11 + 5;
      iVar10 = iVar10 + -0x14;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar10 = *(int *)(param_2 + 0x1c) << 4;
    piVar21 = (int *)(*(int *)(param_2 + 0x18) + 4);
    do {
      piVar23 = piVar21 + 1;
      local_48 = (int *******)CONCAT31(local_48._1_3_,1);
      bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                           *(undefined4 *)(*piVar21 + 0x18),*piVar23,piVar21[2]);
      if (bVar6 == 2) {
LAB_015c55a4:
        local_68 = (int *****)CONCAT22(local_68._2_2_ + 1,(short)local_68);
      }
      else if ((bVar6 & 1) != 0) {
        if ((short)local_68 == 0) {
          uVar27 = (uint)local_68 >> 0x10;
          bVar29 = uVar27 == 0;
          if (bVar29) {
            uVar27 = (uint)local_64 & 0xffff;
          }
          if ((!bVar29 || uVar27 != 0) || (local_64._2_2_ != 0)) goto LAB_015c55dc;
        }
        else {
LAB_015c55dc:
          FUN_015e5bac(&local_98);
          bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                               *(undefined4 *)(*piVar21 + 0x18),*piVar23,piVar21[2]);
          if (bVar6 == 2) goto LAB_015c55a4;
          if ((bVar6 & 1) == 0) goto LAB_015c5700;
        }
        local_78 = (int *******)0x22f8;
        if (local_4c != '\0') {
          local_78 = (int *******)0x230c;
        }
        cVar7 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                             *(undefined4 *)(*piVar21 + 0x18),*piVar23,piVar21[2]);
        if (cVar7 == '\x02') {
          local_68 = (int *****)CONCAT22(local_68._2_2_ + 1,(short)local_68);
          FUN_015e5bac(&local_98);
        }
        else {
          local_78 = local_60;
          if (3 < DAT_01d51b00) {
            local_b0 = (int *******)&local_48;
            local_ac = (int ******)FUN_015e5efc;
            local_12c = (int *****)0x13;
            local_128 = (int *******)&DAT_01cfd4a8;
            local_134 = (int *****)0x13;
            local_130 = (int ******)0x4b3c6f;
            local_138 = "m";
            FUN_015fb650(&DAT_00581e45,&local_b0,4,&local_138);
          }
        }
      }
LAB_015c5700:
      piVar21 = piVar21 + 4;
      iVar10 = iVar10 + -0x10;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar10 = *(int *)(param_2 + 0x28) << 3;
    piVar21 = (int *)(*(int *)(param_2 + 0x24) + 4);
    do {
      local_48 = (int *******)CONCAT31(local_48._1_3_,2);
      bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                           *(undefined4 *)(*piVar21 + 0x18),0,0);
      if (bVar6 == 2) {
LAB_015c5764:
        local_64 = (int *****)CONCAT22(local_64._2_2_,(short)local_64 + 1);
      }
      else if ((bVar6 & 1) != 0) {
        if ((short)local_68 == 0) {
          uVar27 = (uint)local_68 >> 0x10;
          bVar29 = uVar27 == 0;
          if (bVar29) {
            uVar27 = (uint)local_64 & 0xffff;
          }
          if ((!bVar29 || uVar27 != 0) || (local_64._2_2_ != 0)) goto LAB_015c579c;
        }
        else {
LAB_015c579c:
          FUN_015e5bac(&local_98);
          bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                               *(undefined4 *)(*piVar21 + 0x18),0,0);
          if (bVar6 == 2) goto LAB_015c5764;
          if ((bVar6 & 1) == 0) goto LAB_015c58ac;
        }
        local_78 = (int *******)0x22f8;
        if (local_4c != '\0') {
          local_78 = (int *******)0x230c;
        }
        cVar7 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                             *(undefined4 *)(*piVar21 + 0x18),0,0);
        if (cVar7 == '\x02') {
          local_64 = (int *****)CONCAT22(local_64._2_2_,(short)local_64 + 1);
          FUN_015e5bac(&local_98);
        }
        else {
          local_78 = local_60;
          if (3 < DAT_01d51b00) {
            local_b0 = (int *******)&local_48;
            local_ac = (int ******)FUN_015e5efc;
            local_12c = (int *****)0x13;
            local_128 = (int *******)&DAT_01cfd4a8;
            local_134 = (int *****)0x13;
            local_130 = (int ******)0x4b3c6f;
            local_138 = "m";
            FUN_015fb650(&DAT_00581e45,&local_b0,4,&local_138);
          }
        }
      }
LAB_015c58ac:
      piVar21 = piVar21 + 2;
      iVar10 = iVar10 + -8;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar10 = *(int *)(param_2 + 0x34) << 3;
    piVar21 = (int *)(*(int *)(param_2 + 0x30) + 4);
    do {
      local_48 = (int *******)CONCAT31(local_48._1_3_,3);
      bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                           *(undefined4 *)(*piVar21 + 0x18),0,0);
      if (bVar6 == 2) {
LAB_015c5914:
        local_64 = (int *****)CONCAT22(local_64._2_2_ + 1,(short)local_64);
      }
      else if ((bVar6 & 1) != 0) {
        if ((short)local_68 == 0) {
          uVar27 = (uint)local_68 >> 0x10;
          bVar29 = uVar27 == 0;
          if (bVar29) {
            uVar27 = (uint)local_64 & 0xffff;
          }
          if ((!bVar29 || uVar27 != 0) || (local_64._2_2_ != 0)) goto LAB_015c594c;
        }
        else {
LAB_015c594c:
          FUN_015e5bac(&local_98);
          bVar6 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                               *(undefined4 *)(*piVar21 + 0x18),0,0);
          if (bVar6 == 2) goto LAB_015c5914;
          if ((bVar6 & 1) == 0) goto LAB_015c5a5c;
        }
        local_78 = (int *******)0x22f8;
        if (local_4c != '\0') {
          local_78 = (int *******)0x230c;
        }
        cVar7 = FUN_015e5d88(&local_98,piVar21[-1],*(undefined4 *)(*piVar21 + 0x10),
                             *(undefined4 *)(*piVar21 + 0x18),0,0);
        if (cVar7 == '\x02') {
          local_64 = (int *****)CONCAT22(local_64._2_2_ + 1,(short)local_64);
          FUN_015e5bac(&local_98);
        }
        else {
          local_78 = local_60;
          if (3 < DAT_01d51b00) {
            local_b0 = (int *******)&local_48;
            local_ac = (int ******)FUN_015e5efc;
            local_12c = (int *****)0x13;
            local_128 = (int *******)&DAT_01cfd4a8;
            local_134 = (int *****)0x13;
            local_130 = (int ******)0x4b3c6f;
            local_138 = "m";
            FUN_015fb650(&DAT_00581e45,&local_b0,4,&local_138);
          }
        }
      }
LAB_015c5a5c:
      piVar21 = piVar21 + 2;
      iVar10 = iVar10 + -8;
    } while (iVar10 != 0);
  }
  FUN_01bed4e2(&local_138,&local_98,0x50);
  if ((short)local_108 == 0) {
    uVar27 = (uint)local_108 >> 0x10;
    bVar29 = uVar27 == 0;
    if (bVar29) {
      uVar27 = (uint)local_104 & 0xffff;
    }
    if (((bVar29 && uVar27 == 0) && (local_104._2_2_ == 0)) && (local_f0 != (int ******)0x0))
    goto LAB_015c5aac;
  }
  FUN_015e5bac(&local_138);
LAB_015c5aac:
  ppppppiVar24 = local_f0;
  if (-1 < *(short *)(local_fc + 0x38)) {
    if (local_f0 == (int ******)0x0) {
      ppppppiVar24 = (int ******)0x0;
    }
    else {
      iVar10 = (int)local_f0 * 0x38;
      puVar17 = &DAT_01cfd488;
      ppppppiVar22 = local_f4;
      while (iVar10 = iVar10 + -0x38, iVar10 != 0) {
        pppppiVar15 = ppppppiVar22[0xb];
        if (pppppiVar15 < (int *****)0x3) {
          uVar14 = 2;
LAB_015c632c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14,pppppiVar15,puVar17);
        }
        if (pppppiVar15 == (int *****)0x3) {
          pppppiVar15 = (int *****)0x3;
          uVar14 = 3;
          puVar17 = &DAT_01cfd498;
          goto LAB_015c632c;
        }
        *(ushort *)((int)ppppppiVar22[10] + 2) = *(ushort *)((int)ppppppiVar22[10] + 2) | 2;
        ppppppiVar22 = ppppppiVar22 + 0xe;
      }
    }
  }
  FUN_0134bd64(local_114,local_110);
  FUN_015d1bd4(&local_138);
  iVar10 = 0;
  local_40 = local_f8;
  local_3c = local_f4 + (int)ppppppiVar24 * 0xe;
  local_44 = local_f4;
  local_48 = (int *******)local_f4;
  if (ppppppiVar24 == (int ******)0x0) {
    local_34 = (int ******)&SUB_00000004;
    ppppppiVar24 = (int ******)0x0;
  }
  else {
    local_34 = (int ******)FUN_01298504((int)ppppppiVar24 * 0xc,4);
    if (local_34 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)ppppppiVar24 * 0xc);
    }
  }
  ppppppiVar22 = local_3c;
  local_30 = 0;
  local_b0 = local_48;
  local_ac = local_44;
  local_a8 = local_40;
  local_a4 = local_3c;
  local_38 = (int *******)ppppppiVar24;
  if (local_44 != local_3c) {
    iVar10 = 0;
    ppppppiVar24 = local_44;
    ppppppiVar25 = local_34;
    do {
      local_98 = (int *******)*ppppppiVar24;
      local_94 = ppppppiVar24[1];
      local_90 = (int *******)ppppppiVar24[2];
      local_8c = ppppppiVar24[3];
      local_88 = (int *******)ppppppiVar24[4];
      local_84 = ppppppiVar24[5];
      pppppppiStack_80 = (int *******)ppppppiVar24[6];
      pppppiStack_7c = ppppppiVar24[7];
      local_78 = (int *******)ppppppiVar24[8];
      local_74 = ppppppiVar24[9];
      pppppiStack_70 = ppppppiVar24[10];
      local_6c = (int *******)ppppppiVar24[0xb];
      local_68 = ppppppiVar24[0xc];
      local_64 = ppppppiVar24[0xd];
      local_138 = (char *)*ppppppiVar24;
      local_134 = ppppppiVar24[1];
      local_130 = (int ******)ppppppiVar24[2];
      local_12c = ppppppiVar24[3];
      local_128 = (int *******)ppppppiVar24[4];
      local_124 = ppppppiVar24[5];
      local_120 = (int *******)ppppppiVar24[6];
      local_11c = ppppppiVar24[7];
      local_118 = (int *******)ppppppiVar24[8];
      local_114 = ppppppiVar24[9];
      local_110 = ppppppiVar24[10];
      pppppppiStack_10c = (int *******)ppppppiVar24[0xb];
      local_108 = ppppppiVar24[0xc];
      local_104 = ppppppiVar24[0xd];
      FUN_015d1bd4(&local_138);
      ppppppiVar24 = ppppppiVar24 + 0xe;
      iVar10 = iVar10 + 1;
      *ppppppiVar25 = local_74;
      ppppppiVar25[1] = pppppiStack_70;
      ppppppiVar25[2] = (int *****)local_6c;
      ppppppiVar25 = ppppppiVar25 + 3;
    } while (ppppppiVar24 != ppppppiVar22);
    local_ac = ppppppiVar24;
  }
  local_30 = iVar10;
  FUN_015fad60(&local_b0);
  local_178 = (int ******)local_38;
  local_174 = local_34;
  local_170 = local_30;
  if (local_30 != 0) {
    iVar10 = local_30 * 0xc;
    uVar3 = param_7[0xe];
    ppppppiVar24 = local_34 + 1;
    uVar4 = *param_7;
    pppppiVar15 = *(int ******)(param_7 + 1);
    pppppiVar12 = *(int ******)(param_7 + 10);
    pppppppiVar28 = *(int ********)(param_7 + 0xc);
    uVar5 = param_7[3];
    do {
      if (uVar4 == 2) {
        FUN_015d0394(*ppppppiVar24,ppppppiVar24[1],local_184,iVar9,uVar14,param_6,local_18c,param_5)
        ;
      }
      else {
        local_168 = *(int *******)param_7;
        uStack_164 = *(undefined4 *)(param_7 + 2);
        uStack_160 = *(undefined4 *)(param_7 + 4);
        uStack_15c = *(undefined4 *)(param_7 + 6);
        local_158 = *(undefined4 *)(param_7 + 8);
        uStack_154 = *(undefined4 *)(param_7 + 10);
        uStack_150 = *(undefined4 *)(param_7 + 0xc);
        uStack_14c = *(undefined4 *)(param_7 + 0xe);
        pppppiVar20 = *ppppppiVar24;
        ppppppiVar22 = (int ******)ppppppiVar24[1];
        local_13c = (int ******)0x22f8;
        if ((short)local_168 == 0) {
          local_13c = (int ******)0x230c;
        }
        local_144 = local_184;
        local_140 = iVar9;
        if (local_13c < ppppppiVar22) {
          if (3 < DAT_01d51b00) {
            local_90 = &local_13c;
            local_8c = (int *****)FUN_012fd02c;
            local_94 = (int *****)FUN_012fd02c;
            local_98 = (int *******)&local_b0;
            local_12c = (int *****)0x17;
            local_128 = (int *******)&DAT_01cfc798;
            local_134 = (int *****)0x17;
            local_130 = (int ******)0x4b3d9f;
            local_138 = "m";
            local_b0 = (int *******)ppppppiVar22;
            FUN_015fb650(&DAT_0058081b,&local_98,4,&local_138);
          }
        }
        else {
          if ((uVar4 & 1) == 0) {
            FUN_01bed93e(&local_130,0,0x78);
            local_b8 = 0x10;
            uVar8 = 2;
            local_134 = pppppiVar15;
            uVar16 = uVar5 << 8 | uVar5 >> 8;
          }
          else {
            local_130 = *(int *******)(param_7 + 2);
            local_12c = *(int ******)(param_7 + 4);
            local_128 = *(int ********)(param_7 + 6);
            local_124 = *(int ******)(param_7 + 8);
            local_120 = pppppppiVar28;
            FUN_01bed93e(&local_11c,0,100);
            local_b8 = 0x1c;
            uVar8 = 10;
            local_134 = pppppiVar12;
            uVar16 = uVar3 << 8 | uVar3 >> 8;
          }
          local_138 = (char *)CONCAT22(uVar16,uVar8);
          FUN_01979f18(&local_38,local_18c,pppppiVar20,ppppppiVar22,&local_138);
          if ((char)local_38 == '\x04') {
            local_48 = (int *******)local_34;
            if (4 < DAT_01d51b00) {
              local_88 = &local_168;
              local_90 = (int *******)&local_144;
              local_98 = (int *******)&local_48;
              local_84 = (int *****)FUN_0130a2f8;
              local_8c = (int *****)&LAB_018a13b8;
              local_94 = (int *****)FUN_012fd02c;
              local_a4 = (int ******)&DAT_00000017;
              local_a0 = &DAT_01cfc778;
              local_ac = (int ******)&DAT_00000017;
              local_a8 = "m";
              local_b0 = (int *******)0x4b3d9f;
              FUN_015fb650(&DAT_0059b12d,&local_98,5,&local_b0);
            }
          }
          else {
            local_44 = local_34;
            local_48 = local_38;
            pppppppiVar19 = local_38;
            if (4 < DAT_01d51b00) {
              local_b4 = (int *****)&local_144;
              local_84 = (int *****)FUN_019a7d7c;
              local_88 = (int *******)&local_48;
              local_8c = (int *****)&LAB_01a6029c;
              local_90 = (int *******)&local_b4;
              local_94 = (int *****)FUN_0130a2f8;
              local_98 = &local_168;
              local_a4 = (int ******)&DAT_00000017;
              local_a0 = &DAT_01cfc788;
              local_ac = (int ******)&DAT_00000017;
              local_a8 = "m";
              local_b0 = (int *******)0x4b3d9f;
              FUN_015fb650(&DAT_005a3dec,&local_98,5,&local_b0);
              pppppppiVar19 = (int *******)((uint)local_48 & 0xff);
            }
            FUN_0069d8a4(pppppppiVar19,local_44);
          }
        }
      }
      ppppppiVar24 = ppppppiVar24 + 3;
      iVar10 = iVar10 + -0xc;
    } while (iVar10 != 0);
  }
  param_1[1] = local_178;
  param_1[2] = local_174;
  param_1[3] = local_170;
  *param_1 = 2;
  return;
}

