// FUN_018e85a8 @ 018e85a8 size=1448 calls_out=13 calls_in=1
// strings: 

void FUN_018e85a8(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *extraout_r2_02;
  undefined1 *puVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_r9;
  undefined1 *puVar14;
  char cVar15;
  undefined8 uVar16;
  undefined *local_a0;
  uint local_9c;
  uint local_94;
  undefined *local_90;
  uint local_8c;
  undefined *local_80;
  int local_7c;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined8 local_4c;
  uint local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined8 local_2c;
  
  uVar2 = CONCAT44(local_90,unaff_r9);
  FUN_01935b68(&local_40);
  puVar6 = local_34;
  puVar5 = local_38;
  puVar4 = local_3c;
  if (local_40 == (undefined1 *)0x1) {
    param_1[3] = local_34;
    *param_1 = 0x80000000;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    return;
  }
  FUN_01930f74(&local_40,&DAT_0056a6b8,param_2);
  if ((char)local_40 == '\x18') {
    uVar16 = FUN_0192fac8(param_2,local_3c);
    uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 != 0) {
      uVar13 = 0;
      local_78 = (undefined1)uVar16;
      local_7c = 4;
      local_70 = 0;
      local_75 = (undefined1)((ulonglong)uVar16 >> 0x18);
      local_77 = (undefined2)((ulonglong)uVar16 >> 8);
      local_64 = 0;
      local_68 = 4;
      local_6c = 0;
      if (uVar12 == 0) {
        uVar12 = 0;
        local_6c._0_1_ = 0;
      }
      else {
        uVar10 = 0;
        local_7c = 4;
        local_8c = 0;
        local_94 = 0;
        local_74 = uVar12;
        do {
          uVar13 = local_64;
          local_90 = (undefined *)((ulonglong)uVar2 >> 0x20);
          FUN_0190d660(&local_40,&local_78);
          puVar11 = local_3c;
          uVar3 = local_40._2_2_;
          if ((char)local_40 != '\x18') {
            uVar12 = (uint)local_3c >> 0x10;
            pcVar8 = (char *)((uint)local_3c & 0xffff);
            local_9c = (uint)local_40._2_2_;
            uVar13 = (uint)local_40 >> 8 & 0xff;
            local_80 = local_38;
            cVar15 = (char)local_40;
LAB_018e8a9c:
            puVar11 = (undefined *)(((uint)pcVar8 & 0xffff) + uVar12 * 0x10000);
            uVar12 = uVar13 & 0xff | local_9c << 8;
LAB_018e8ac0:
            FUN_018e6554(&local_6c);
            local_3c = puVar11;
            goto LAB_018e8ac8;
          }
          uVar16 = FUN_0192fac8(&local_78,2);
          if (((ushort *)uVar16 == (ushort *)0x0) || ((int)((ulonglong)uVar16 >> 0x20) != 2)) {
            local_80 = (undefined *)0x3;
            pcVar8 = "u16";
            uVar12 = 0x52;
            uVar13 = extraout_r2;
            cVar15 = '\f';
            goto LAB_018e8a9c;
          }
          uVar1 = *(ushort *)uVar16;
          local_9c = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
          uVar16 = FUN_0192fac8(&local_78);
          if ((int)uVar16 == 0) {
            local_94 = ((uint)uVar2 & 0xffff) >> 8;
            local_8c = (uint)uVar2 >> 0x10;
            puVar14 = &DAT_80000004;
            local_80 = (undefined *)0x0;
            uVar10 = (uint)local_90 >> 0x10;
            cVar15 = '\v';
            local_a0 = local_90;
          }
          else {
            local_44 = 0;
            local_4c = uVar16;
            uVar2 = uVar16;
            if (uVar3 == 0xd) {
              FUN_018e46fc(&local_40,&local_4c);
              if (local_40 == (undefined1 *)0x0) {
                if (local_34 != (undefined *)0x0) {
                  puVar14 = (undefined1 *)0x80000001;
                  uVar16 = local_4c;
                  goto LAB_018e8874;
                }
                FUN_0134aee0(local_3c,local_38,2,4);
                puVar14 = &DAT_80000004;
                cVar15 = '\x0e';
              }
              else {
                local_94 = ((uint)local_3c & 0xffff) >> 8;
                uVar10 = (uint)local_38 >> 0x10;
                local_8c = (uint)local_3c >> 0x10;
                cVar15 = (char)local_3c;
                puVar14 = &DAT_80000004;
                local_80 = local_34;
                local_a0 = local_38;
              }
            }
            else {
              if (uVar3 == 0x16) {
                FUN_018e6234(&local_40,&local_4c);
                puVar14 = (undefined1 *)0x80000003;
                if (local_40 == (undefined1 *)0x0) {
LAB_018e886c:
                  uVar16 = local_4c;
                  goto LAB_018e8874;
                }
                local_80 = local_34;
                local_8c = (uint)local_3c >> 0x10;
                local_94 = ((uint)local_3c & 0xffff) >> 8;
                cVar15 = (char)local_3c;
                local_a0 = local_38;
              }
              else {
                if (uVar3 != 0x1e) {
                  local_30 = (undefined *)0x80000000;
                  local_44 = (uint)((ulonglong)uVar16 >> 0x20);
                  local_2c = uVar16;
                  FUN_01935918(&local_40,&local_30);
                  local_34 = (undefined *)CONCAT22((short)puVar11,uVar3);
                  puVar14 = local_40;
                  uVar16 = local_4c;
LAB_018e8874:
                  local_4c._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
                  puVar11 = local_3c;
                  local_4c = uVar16;
                  if (local_44 < local_4c._4_4_) {
                    puVar9 = (undefined1 *)0x3;
                    if ((undefined1 *)0x80000000 < puVar14) {
                      puVar9 = puVar14 + 0x7fffffff;
                    }
                    local_40 = puVar14;
                    if (puVar9 == (undefined1 *)0x0) {
LAB_018e88b8:
                      FUN_0134aee0(local_3c,local_38,2,4);
                      puVar11 = extraout_r2_00;
                    }
                    else if (puVar9 == (undefined1 *)0x1) {
                      FUN_018e26a0(&local_3c);
                      puVar11 = extraout_r2_01;
                    }
                    else {
                      if (puVar9 == (undefined1 *)0x2) goto LAB_018e88b8;
                      if (puVar14 != (undefined1 *)0x80000000) {
                        FUN_0134bd64(puVar14,local_3c);
                        puVar11 = extraout_r2_02;
                      }
                    }
                    local_80 = (undefined *)0x10;
                    cVar15 = '\x0f';
                    puVar14 = &DAT_80000004;
                    local_a0 = &DAT_0056ad68;
                  }
                  else {
                    cVar15 = (char)local_3c;
                    local_a0 = local_38;
                    local_80 = local_34;
                  }
                  local_8c = (uint)puVar11 >> 0x10;
                  local_94 = ((uint)puVar11 & 0xffff) >> 8;
                  uVar10 = (uint)local_a0 >> 0x10;
                  goto LAB_018e898c;
                }
                FUN_018e4584(&local_40,&local_4c);
                if (local_40 == (undefined1 *)0x0) {
                  local_2c._4_4_ = local_34;
                  local_2c._0_4_ = local_38;
                  local_30 = local_3c;
                  if (local_34 != (undefined *)0x0) {
                    puVar14 = (undefined1 *)0x80000002;
                    local_2c = CONCAT44(local_34,local_38);
                    goto LAB_018e886c;
                  }
                  FUN_018e26a0(&local_30);
                  cVar15 = '\x16';
                  local_80 = (undefined *)0x12;
                  local_a0 = &DAT_00520f63;
                }
                else {
                  local_80 = local_34;
                  local_8c = (uint)local_3c >> 0x10;
                  local_94 = ((uint)local_3c & 0xffff) >> 8;
                  cVar15 = (char)local_3c;
                  local_a0 = local_38;
                }
              }
              uVar10 = (uint)local_a0 >> 0x10;
              puVar14 = &DAT_80000004;
            }
          }
LAB_018e898c:
          puVar11 = (undefined *)(((uint)local_a0 & 0xffff) + uVar10 * 0x10000);
          uVar12 = local_94 | local_8c << 8;
          if (puVar14 == &DAT_80000004) goto LAB_018e8ac0;
          *(char *)((undefined2 *)((uint)&local_60 | 5) + 1) = (char)(local_8c >> 8);
          *(undefined2 *)((uint)&local_60 | 5) = (short)uVar12;
          local_5c = CONCAT31(local_5c._1_3_,cVar15);
          local_54 = local_80;
          local_60 = puVar14;
          local_58 = puVar11;
          if (uVar13 == local_6c) {
            FUN_018fa978(&local_6c);
            local_7c = local_68;
          }
          puVar7 = (undefined4 *)(local_7c + uVar13 * 0x10);
          uVar13 = uVar13 + 1;
          *puVar7 = local_60;
          puVar7[1] = local_5c;
          puVar7[2] = local_58;
          puVar7[3] = local_54;
          local_64 = uVar13;
        } while (local_70 < local_74);
        uVar12 = local_6c >> 8;
      }
      *(short *)((int)param_1 + 0xd) = (short)uVar12;
      *(char *)((int)param_1 + 0xf) = (char)(uVar12 >> 0x10);
      *(undefined1 *)(param_1 + 3) = (undefined1)local_6c;
      *param_1 = puVar4;
      param_1[4] = local_7c;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[5] = uVar13;
      return;
    }
    uVar12 = 0;
    local_80 = (undefined *)0x0;
    local_3c = puVar6;
    cVar15 = '\v';
  }
  else {
    uVar12 = (uint)local_40 >> 8;
    local_80 = local_38;
    cVar15 = (char)local_40;
  }
LAB_018e8ac8:
  *param_1 = 0x80000000;
  param_1[2] = local_3c;
  *(char *)((int)param_1 + 7) = (char)(uVar12 >> 0x10);
  *(short *)((int)param_1 + 5) = (short)uVar12;
  *(char *)(param_1 + 1) = cVar15;
  param_1[3] = local_80;
  FUN_0134bd64(puVar4,puVar5);
  return;
}

