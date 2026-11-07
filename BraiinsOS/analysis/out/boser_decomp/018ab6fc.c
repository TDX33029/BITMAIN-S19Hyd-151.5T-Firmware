// FUN_018ab6fc @ 018ab6fc size=1180 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018ab6fc(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  uint uVar9;
  char cVar10;
  ushort unaff_r8;
  byte unaff_r10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint local_98;
  undefined *local_94;
  undefined4 local_90;
  ushort local_8c;
  int local_78;
  undefined *local_74;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  char local_30;
  byte bStack_2f;
  ushort uStack_2e;
  undefined *local_2c;
  undefined4 local_28;
  
  FUN_018c41e4(&local_34);
  puVar7 = local_28;
  puVar6 = local_2c;
  uVar4 = CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
  if (local_34 == 1) {
    *param_1 = 0x80000000;
    param_1[1] = uVar4;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    return;
  }
  uVar12 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar12 == (ushort *)0x0) || ((int)((ulonglong)uVar12 >> 0x20) != 2)) {
    local_74 = (undefined *)0x2;
    cVar10 = '\v';
    local_94 = &DAT_005239af;
  }
  else {
    uVar1 = *(ushort *)uVar12;
    uVar12 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    uVar11 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      local_68 = (undefined1)uVar12;
      local_5c._2_2_ = 0;
      local_66 = (undefined2)((ulonglong)uVar12 >> 0x10);
      local_67 = (undefined1)((ulonglong)uVar12 >> 8);
      local_60 = 0;
      local_54 = 0;
      local_78 = 4;
      local_58 = 4;
      local_5c = 0;
      if (uVar11 == 0) {
        local_5c._1_1_ = 0;
        local_5c._0_1_ = 0;
      }
      else {
        local_64 = uVar11;
        uVar12 = CONCAT44(param_2,local_90);
        do {
          iVar5 = local_54;
          FUN_018be4cc(&local_34,&local_68);
          uVar1 = local_34._2_2_;
          if ((char)local_34 != '\x14') {
            uVar11 = local_34 >> 8 & 0xff;
            local_94 = (undefined *)CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
            local_74 = local_2c;
            cVar10 = (char)local_34;
            unaff_r8 = local_34._2_2_;
LAB_018aba88:
            unaff_r10 = (byte)uVar11;
LAB_018abb40:
            FUN_018aa5c8(&local_5c);
            goto LAB_018abb48;
          }
          uVar3 = CONCAT11(bStack_2f,local_30);
          uVar11 = (uint)local_34._2_2_;
          uVar13 = FUN_018beed0(&local_68,2);
          if (((ushort *)uVar13 == (ushort *)0x0) || ((int)((ulonglong)uVar13 >> 0x20) != 2)) {
            local_74 = (undefined *)0x2;
            local_94 = &DAT_005239af;
            cVar10 = '\v';
            unaff_r8 = local_8c;
            goto LAB_018aba88;
          }
          uVar2 = *(ushort *)uVar13;
          local_8c = uVar2 << 8 | uVar2 >> 8;
          uVar13 = FUN_018beed0(&local_68);
          local_3c = (uint)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 == 0) {
            cVar10 = '\n';
            local_74 = (undefined *)0x0;
LAB_018abb04:
            local_94 = (undefined *)((ulonglong)uVar12 >> 0x20);
            unaff_r10 = (byte)((ulonglong)uVar12 >> 8);
            unaff_r8 = (ushort)((ulonglong)uVar12 >> 0x10);
            goto LAB_018abb40;
          }
          local_40 = (undefined1)uVar13;
          local_38 = 0;
          local_3e = (undefined2)((ulonglong)uVar13 >> 0x10);
          local_3f = (undefined1)((ulonglong)uVar13 >> 8);
          if (uVar11 == 0xd) {
            FUN_018a9a58(&local_34,&local_40);
            uVar11 = CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
            uVar12 = CONCAT44(local_2c,uVar11);
            if (local_34 != 0) {
              cVar10 = local_30;
              local_74 = local_28;
              goto LAB_018abb04;
            }
            if (local_28 == (undefined *)0x0) {
              FUN_0134aee0(uVar11,local_2c,2,4);
              cVar10 = '\r';
              unaff_r10 = (byte)local_98;
              goto LAB_018abb40;
            }
            local_98 = uVar11 >> 8;
            uVar11 = 0x80000000;
          }
          else if (uVar11 == 0x1b) {
            FUN_018a98e4(&local_34,&local_40);
            local_98 = (uint)bStack_2f;
            local_74 = local_28;
            uVar11 = 0x80000001;
            local_94 = local_2c;
            cVar10 = local_30;
            unaff_r8 = uStack_2e;
            unaff_r10 = bStack_2f;
            if (local_34 != 0) goto LAB_018abb40;
          }
          else {
            FUN_018c3e74(&local_34,&local_40);
            local_98 = (uint)bStack_2f;
            local_28 = (undefined *)CONCAT22(uVar3,uVar1);
            uVar11 = local_34;
          }
          local_74 = local_28;
          local_94 = local_2c;
          unaff_r8 = uStack_2e;
          unaff_r10 = (byte)local_98;
          if (local_38 < local_3c) {
            uVar9 = 2;
            if ((int)uVar11 < 0) {
              uVar9 = uVar11 ^ 0x80000000;
            }
            local_34 = uVar11;
            bStack_2f = unaff_r10;
            if (uVar9 == 0) {
              FUN_0134aee0(CONCAT22(uStack_2e,CONCAT11(unaff_r10,local_30)),local_2c,2,4);
            }
            else if (uVar9 == 1) {
              FUN_018a8274(&local_30);
            }
            else {
              FUN_0134bd64(uVar11,CONCAT22(uStack_2e,CONCAT11(unaff_r10,local_30)));
            }
            cVar10 = '\x0e';
            local_74 = (undefined *)0x10;
            local_94 = &DAT_0056ad68;
            goto LAB_018abb40;
          }
          cVar10 = local_30;
          if (uVar11 == 0x80000002) goto LAB_018abb40;
          local_44 = local_28;
          local_4c = CONCAT31(CONCAT21(uStack_2e,unaff_r10),local_30);
          local_50 = uVar11;
          local_48 = local_2c;
          if (iVar5 == local_5c) {
            FUN_018fa978(&local_5c);
            local_78 = local_58;
          }
          puVar8 = (uint *)(local_78 + iVar5 * 0x10);
          local_54 = iVar5 + 1;
          *puVar8 = local_50;
          puVar8[1] = local_4c;
          puVar8[2] = (uint)local_48;
          puVar8[3] = (uint)local_44;
          uVar12 = uVar13;
        } while (local_60 < local_64);
      }
      *(undefined1 *)(param_1 + 3) = (undefined1)local_5c;
      *param_1 = uVar4;
      *(undefined2 *)((int)param_1 + 0xe) = local_5c._2_2_;
      param_1[4] = local_58;
      param_1[5] = local_54;
      *(undefined1 *)((int)param_1 + 0xd) = local_5c._1_1_;
      param_1[1] = puVar6;
      param_1[2] = puVar7;
      return;
    }
    local_94 = (undefined *)0x0;
    cVar10 = '\n';
    local_74 = (undefined *)0x0;
    unaff_r10 = 0;
    unaff_r8 = 0;
  }
LAB_018abb48:
  *(ushort *)((int)param_1 + 6) = unaff_r8;
  *param_1 = 0x80000000;
  *(byte *)((int)param_1 + 5) = unaff_r10;
  param_1[2] = local_94;
  param_1[3] = local_74;
  *(char *)(param_1 + 1) = cVar10;
  FUN_0134bd64(uVar4,puVar6);
  return;
}

