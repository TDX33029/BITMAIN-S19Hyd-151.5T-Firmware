// FUN_018ab178 @ 018ab178 size=1216 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018ab178(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  undefined8 uVar23;
  char *local_8c;
  char *local_88;
  char *local_7c;
  uint local_78;
  int local_64;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  char *local_2c;
  undefined4 local_28;
  
  uVar23 = FUN_018beed0(param_2,4);
  if (((uint *)uVar23 != (uint *)0x0) && ((int)((ulonglong)uVar23 >> 0x20) == 4)) {
    uVar19 = *(uint *)uVar23;
    uVar23 = FUN_018beed0(param_2,4);
    if (((uint *)uVar23 != (uint *)0x0) && ((int)((ulonglong)uVar23 >> 0x20) == 4)) {
      uVar12 = *(uint *)uVar23;
      FUN_018c41e4(&local_34,param_2);
      pcVar10 = local_28;
      pcVar8 = local_2c;
      uVar3 = CONCAT22(uStack_2e,local_30);
      if (local_34 == 1) {
        param_1[2] = local_2c;
        *param_1 = 0x80000000;
        param_1[1] = uVar3;
        param_1[3] = local_28;
        return;
      }
      FUN_018c4324(&local_34,param_2);
      pcVar11 = local_28;
      pcVar9 = local_2c;
      uVar4 = CONCAT22(uStack_2e,local_30);
      if (local_34 == 0) {
        uVar23 = FUN_018beed0(param_2,2);
        if (((ushort *)uVar23 == (ushort *)0x0) || ((int)((ulonglong)uVar23 >> 0x20) != 2)) {
          pcVar22 = (char *)0x2;
          uVar16 = 0xb;
          pcVar20 = &DAT_005239af;
        }
        else {
          uVar1 = *(ushort *)uVar23;
          uVar23 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
          if ((int)uVar23 != 0) {
            local_50 = 0;
            local_44 = 0;
            local_64 = 4;
            local_48 = 4;
            local_4c = 0;
            if ((int)((ulonglong)uVar23 >> 0x20) != 0) {
              iVar15 = 8;
              local_88 = (char *)0x0;
              pcVar21 = pcVar8;
              do {
                iVar6 = local_44;
                uVar5 = CONCAT44(local_7c,pcVar21);
                local_58 = uVar23;
                FUN_018be4cc(&local_34,&local_58);
                uVar7 = local_30;
                uVar16 = local_34 & 0xff;
                uVar1 = local_34._2_2_;
                if (uVar16 != 0x14) {
                  local_78 = (uint)local_34._2_2_;
                  pcVar20 = (char *)CONCAT22(uStack_2e,local_30);
                  uVar18 = (local_34 >> 8 & 0xff) << 8;
                  pcVar22 = local_2c;
LAB_018ab5e4:
                  uVar16 = uVar18 | local_78 << 0x10 | uVar16;
LAB_018ab5f4:
                  FUN_0161ac8c(&local_4c);
                  goto LAB_018ab60c;
                }
                uVar23 = FUN_018beed0(&local_58,2);
                uVar16 = 0xb;
                uVar18 = 0;
                pcVar20 = &DAT_005239af;
                if (((ushort *)uVar23 == (ushort *)0x0) || ((int)((ulonglong)uVar23 >> 0x20) != 2))
                {
                  pcVar22 = (char *)0x2;
                  goto LAB_018ab5e4;
                }
                uVar2 = *(ushort *)uVar23;
                local_78 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                uVar23 = FUN_018beed0(&local_58);
                if ((int)uVar23 == 0) {
                  uVar18 = 0x80000001;
                  uVar17 = (uint)pcVar21 & 0xffff0000;
                  uVar16 = 10;
                  pcVar22 = (char *)0x0;
                  pcVar20 = local_7c;
                }
                else {
                  local_38 = 0;
                  uVar5 = uVar23;
                  local_40 = uVar23;
                  if (uVar1 == 0x16) {
                    uVar23 = FUN_018beed0(&local_40,4);
                    uVar18 = 0x80000001;
                    uVar16 = 0xb;
                    uVar17 = 0;
                    pcVar22 = (char *)0x3;
                    if (((uint *)uVar23 != (uint *)0x0) && ((int)((ulonglong)uVar23 >> 0x20) == 4))
                    {
                      if (local_38 < local_40._4_4_) goto LAB_018ab460;
                      uVar16 = *(uint *)uVar23;
                      pcVar21 = (char *)(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
                      uVar18 = 0x80000000;
                      goto LAB_018ab498;
                    }
                    pcVar21 = (char *)0x0;
                    pcVar20 = "u32";
                  }
                  else {
                    FUN_018c3e74(&local_34,&local_40);
                    local_28 = (char *)CONCAT22(uVar7,uVar1);
                    pcVar21 = (char *)CONCAT22(uStack_2e,local_30);
                    local_8c = local_2c;
                    local_88 = local_28;
                    if (local_38 < local_40._4_4_) {
                      if (local_34 != 0x80000000) {
                        FUN_0134bd64(local_34,pcVar21);
                      }
LAB_018ab460:
                      uVar18 = 0x80000001;
                      uVar16 = 0xe;
                      pcVar20 = 
                      "NewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
                      ;
                      pcVar22 = (char *)0x19;
                    }
                    else {
                      uVar18 = local_34;
LAB_018ab498:
                      uVar16 = (uint)pcVar21 & 0xff;
                      pcVar20 = local_8c;
                      pcVar22 = local_88;
                    }
                    uVar17 = (uint)pcVar21 & 0xffff0000;
                  }
                }
                local_7c = (char *)((ulonglong)uVar5 >> 0x20);
                uVar16 = uVar17 | (uint)pcVar21 & 0xff00 | uVar16;
                if (uVar18 == 0x80000001) goto LAB_018ab5f4;
                uVar23 = local_58;
                if (iVar6 == local_4c) {
                  FUN_018fa978(&local_4c);
                  local_64 = local_48;
                  uVar23 = local_58;
                }
                local_58._4_4_ = (uint)((ulonglong)uVar23 >> 0x20);
                puVar13 = (uint *)(local_64 + iVar6 * 0x10);
                *puVar13 = uVar18;
                local_44 = iVar6 + 1;
                puVar13[1] = uVar16;
                puVar14 = (undefined4 *)(local_64 + iVar15);
                *puVar14 = pcVar20;
                iVar15 = iVar15 + 0x10;
                puVar14[1] = pcVar22;
                pcVar21 = (char *)uVar5;
              } while (local_50 < local_58._4_4_);
            }
            param_1[7] = local_48;
            param_1[8] = local_44;
            param_1[3] = uVar4;
            *param_1 = uVar3;
            param_1[1] = pcVar8;
            param_1[2] = pcVar10;
            param_1[4] = pcVar9;
            param_1[5] = pcVar11;
            param_1[6] = local_4c;
            param_1[9] = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18;
            param_1[10] = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18;
            return;
          }
          pcVar20 = (char *)0x0;
          uVar16 = 10;
          pcVar22 = (char *)0x0;
        }
LAB_018ab60c:
        *param_1 = 0x80000000;
        param_1[1] = uVar16;
        param_1[2] = pcVar20;
        param_1[3] = pcVar22;
        FUN_0134bd64(uVar4,pcVar9);
      }
      else {
        param_1[3] = local_28;
        *param_1 = 0x80000000;
        param_1[1] = uVar4;
        param_1[2] = local_2c;
      }
      FUN_0134bd64(uVar3,pcVar8);
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xb;
  *param_1 = 0x80000000;
  param_1[2] = "u32";
  param_1[3] = 3;
  return;
}

