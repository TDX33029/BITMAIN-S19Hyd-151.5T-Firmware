// FUN_015cb12c @ 015cb12c size=1688 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015cb12c(undefined4 *param_1,uint *param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r1;
  int iVar9;
  uint *puVar10;
  uint extraout_r3;
  uint uVar11;
  uint *unaff_r4;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 uVar17;
  ushort *extraout_r12;
  ushort *extraout_r12_00;
  undefined2 local_94;
  undefined1 local_92;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint *local_7c;
  int *local_78;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  ushort *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  undefined4 local_48;
  uint local_44;
  uint *local_40;
  uint *local_3c;
  ushort local_38;
  undefined4 uStack_36;
  ushort local_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  cVar5 = (char)param_2[0x52];
  if (cVar5 == 'S') {
    if ((*param_2 & 1) != 0) {
      uVar13 = param_2[0x3c];
      if (uVar13 != 0) {
        unaff_r4 = (uint *)param_2[0x3d];
      }
      uVar8 = param_2[2];
      uVar6 = param_2[3];
      local_88 = param_2 + 0x2e;
      puVar16 = &local_90;
      uVar14 = 0;
      local_90 = param_2[0x34];
      local_8c = param_2[0x35];
      local_84 = param_2[0x40] + 8;
      local_64 = 0;
      local_80 = 0;
      FUN_015defdc(&local_48,puVar16);
      uVar15 = uStack_36;
      if ((char)local_48 == 'R') {
        if (local_80 == 0) {
          local_48._0_1_ = 'E';
          uVar6 = extraout_r1;
          uVar13 = extraout_r3;
          goto LAB_015cb2e8;
        }
        puVar10 = (uint *)0x76;
        if (*(ushort *)((int)param_2 + 0xda) < 5) {
          puVar10 = (uint *)0x2130;
        }
        if (*local_78 == 1) {
          local_58 = (uint *)local_78[2];
          local_54 = (uint *)local_78[3];
        }
        else {
          local_54 = (uint *)local_78[1];
          if (&DAT_00000005 < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_54,5,&DAT_018822e4);
          }
          local_58 = (uint *)(local_78 + 2);
        }
        local_50 = &local_80;
        local_5c = (ushort *)local_7c;
        local_60 = local_80;
        if (local_54 == (uint *)0x0) {
          uVar4 = uStack_36._2_2_;
          if ((local_6c & 1) == 0) {
            local_68 = 0;
            local_6c = 1;
          }
LAB_015cb4b4:
          uStack_36._2_2_ = uVar4;
          uStack_36 = uVar15;
          uVar4 = uStack_36._2_2_;
          uVar15 = 0;
          uVar7 = 0x2e;
          uVar11 = 0;
          uVar14 = 0;
          uVar3 = uStack_36;
          uStack_36._2_2_ = uVar4;
        }
        else {
          do {
            uStack_36 = uVar15;
            uVar4 = uStack_36._2_2_;
            puVar2 = local_50;
            puVar12 = local_58;
            puVar16 = (uint *)((int)local_54 + -1);
            if (puVar16 == (uint *)0xffffffff) {
              uVar15 = uStack_36;
              if (local_50[5] == 0) {
                puVar10 = (uint *)*local_50;
                uVar14 = local_60 - (int)puVar10;
                local_50[5] = 1;
                uStack_36._2_2_ = uVar4;
                uVar15 = uStack_36;
                puVar2[6] = uVar14;
                uStack_36 = uVar15;
                uVar15 = uStack_36;
                uVar4 = uStack_36._2_2_;
              }
              goto LAB_015cb4b4;
            }
            uVar15 = uStack_36;
            uStack_36._2_2_ = uVar4;
            FUN_015d5608(&local_48,&local_60,*(undefined4 *)(local_50[3] + 0x20),local_58);
            uVar15 = uStack_36;
            if (local_48 == 0x2e && local_44 == 0) {
              uVar6 = (uint)local_40 >> 0x10 | (int)local_3c << 0x10;
              uVar14 = uVar15 >> 0x10 | (uint)local_32 << 0x10;
              puVar16 = (uint *)((uint)local_40 >> 8);
              unaff_r4 = (uint *)((uint)local_38 | uVar15 << 0x10);
              uVar13 = (uint)local_3c >> 0x10;
              local_48._0_1_ = (char)local_40;
              goto LAB_015cb2e8;
            }
            local_58 = (uint *)((int)puVar12 + 0x10);
            local_7c = (uint *)(uint)local_38;
            local_54 = puVar16;
          } while (local_7c != puVar10);
          local_38 = (ushort)puVar10;
          uStack_36._2_2_ = SUB42(uVar15,2);
          FUN_015d855c(&local_60,&local_48);
          uStack_36 = uVar15;
          uVar3 = uStack_36;
          uVar11 = local_60 >> 0x10 | (int)local_5c << 0x10;
          uVar15 = local_60 >> 8;
          uVar14 = (uint)local_5c >> 0x10;
          uVar7 = local_60;
          puVar10 = local_58;
          puVar16 = local_54;
          local_7c = (uint *)extraout_r12;
        }
        uStack_36 = uVar3;
        uVar4 = uStack_36._2_2_;
        local_44 = uVar14 << 0x10 | uVar11 >> 0x10;
        puVar12 = (uint *)*param_5;
        local_48 = uVar11 << 0x10 | (uVar15 & 0xff) << 8 | uVar7 & 0xff;
        if (local_48 == 0x2e && local_44 == 0) {
          local_8c = 0;
          local_88 = (uint *)0x0;
          uVar15 = uStack_36;
LAB_015cb544:
          do {
            uStack_36._2_2_ = uVar4;
            uStack_36 = uVar15;
            uVar4 = uStack_36._2_2_;
            uVar14 = *puVar12;
            bVar1 = (bool)hasExclusiveAccess(puVar12);
            uVar15 = uStack_36;
          } while (!bVar1);
          *puVar12 = uVar14 + 1;
          uVar15 = uVar14;
          if (uVar14 < 0x80000000) {
            local_7c = (uint *)&local_38;
            uVar15 = uVar8;
          }
          if ((int)uVar14 < 0) {
            software_udf(0xfdee,0x15cb608);
            return;
          }
          param_1[8] = uVar15;
          param_1[9] = uVar6;
          param_1[10] = uVar13;
          param_1[0xb] = unaff_r4;
          param_1[0xc] = local_8c;
          param_1[0xd] = local_88;
          param_1[0xe] = puVar12;
          param_1[0xf] = local_64;
          *local_7c = param_3;
          uStack_36._2_2_ = uVar4;
          uVar13 = uStack_36;
          *(int *)((int)local_7c + 4) = param_4;
          *(uint **)((int)local_7c + 8) = param_2;
          *(int **)((int)local_7c + 0xc) = param_5;
          *param_1 = param_2;
          param_1[1] = param_5;
          param_1[2] = param_2;
          param_1[3] = param_2;
          param_1[4] = CONCAT42(uVar13,local_38);
          param_1[5] = CONCAT22(local_32,uStack_36._2_2_);
          param_1[6] = uStack_30;
          param_1[7] = uStack_2c;
          return;
        }
        local_40 = puVar10;
        local_3c = puVar16;
        uVar15 = uStack_36;
        uStack_36._2_2_ = uVar4;
        FUN_015d2860(&local_90,puVar12 + 2,*(undefined1 *)((int)param_2 + 0xd9),param_2[0x41],
                     &local_48);
        uVar15 = uStack_36;
        if ((char)local_90 == 'R') {
          local_7c = (uint *)extraout_r12_00;
          uVar4 = uStack_36._2_2_;
          goto LAB_015cb544;
        }
        uVar15 = local_90 >> 8;
        local_44 = local_8c;
        unaff_r4 = local_88;
        uVar14 = local_84;
        local_48._0_1_ = (char)local_90;
      }
      else {
        puVar10 = (uint *)((uint)&local_48 | 2);
        puVar16 = (uint *)(local_48 >> 8 & 0xff);
        uVar6 = *puVar10;
        unaff_r4 = *(uint **)((int)puVar10 + 6);
        uVar14 = *(uint *)((int)puVar10 + 10);
        uVar13 = (uint)(ushort)puVar10[1];
LAB_015cb2e8:
        uVar15 = (uint)puVar16 & 0xff | uVar6 << 8;
        local_44 = uVar6 >> 0x10 | uVar13 << 0x10;
      }
      cVar5 = (char)param_2[0x52];
      local_48 = CONCAT13((char)(uVar15 >> 0x10),CONCAT21((short)uVar15,(char)local_48));
      local_40 = unaff_r4;
      local_3c = (uint *)uVar14;
      if (cVar5 == 'S') {
        FUN_015e0e44(param_2 + 0x52,&local_48);
        cVar5 = (char)param_2[0x52];
        if (cVar5 != 'R') goto LAB_015cb70c;
LAB_015cb324:
        local_7c = (uint *)param_2[0x53];
        if (local_7c == (uint *)0x0) {
          uVar17 = 0;
          local_80 = *param_5 + 8;
          local_7c = param_2;
        }
        else {
          uVar17 = 2;
          local_80 = local_7c[0x46] + 8;
        }
      }
      else {
        if (cVar5 == 'R') goto LAB_015cb324;
LAB_015cb70c:
        local_94 = *(undefined2 *)((int)param_2 + 0x14d);
        local_92 = *(undefined1 *)((int)param_2 + 0x14f);
        uVar17 = (undefined1)param_2[0x53];
        local_80 = param_2[0x54];
        local_7c = (uint *)param_2[0x55];
        local_60 = (uint)*(uint3 *)((int)param_2 + 0x149);
      }
      local_88 = (uint *)CONCAT13(local_60._2_1_,CONCAT21((undefined2)local_60,cVar5));
      local_84 = CONCAT13(local_92,CONCAT21(local_94,uVar17));
      goto LAB_015cb770;
    }
    FUN_015e0df4(param_2 + 0x52);
    cVar5 = (char)param_2[0x52];
    if (cVar5 == 'R') {
      local_7c = (uint *)param_2[0x53];
      if (local_7c == (uint *)0x0) {
        iVar9 = *param_5;
        goto LAB_015cb29c;
      }
      uVar17 = 2;
      local_80 = local_7c[0x46] + 8;
    }
    else {
      uVar17 = (undefined1)param_2[0x53];
      local_80 = param_2[0x54];
      local_7c = (uint *)param_2[0x55];
      local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                          *(undefined2 *)((int)param_2 + 0x149));
      local_60 = (uint)*(uint3 *)((int)param_2 + 0x14d);
    }
  }
  else if (cVar5 == 'R') {
    local_7c = (uint *)param_2[0x53];
    if (local_7c == (uint *)0x0) {
      iVar9 = *param_5;
LAB_015cb29c:
      uVar17 = 0;
      local_80 = iVar9 + 8;
      local_7c = param_2;
    }
    else {
      local_80 = local_7c[0x46] + 8;
      uVar17 = 2;
    }
  }
  else {
    uVar17 = (undefined1)param_2[0x53];
    local_80 = param_2[0x54];
    local_7c = (uint *)param_2[0x55];
    local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                        *(undefined2 *)((int)param_2 + 0x149));
    local_60 = (uint)*(uint3 *)((int)param_2 + 0x14d);
  }
  local_88 = (uint *)CONCAT13(local_48._2_1_,(int3)CONCAT31((int3)local_48,cVar5));
  local_84 = CONCAT13(local_60._2_1_,(int3)CONCAT31((int3)local_60,uVar17));
LAB_015cb770:
  local_90 = 0;
  local_54 = (uint *)param_5;
  local_60 = param_3;
  local_5c = (ushort *)param_4;
  local_58 = param_2;
  FUN_015cee90(param_1 + 2,&local_60,&local_88);
  *param_1 = 0;
  return;
}

