// FUN_018e7e7c @ 018e7e7c size=1324 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018e7e7c(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint3 uVar5;
  int iVar6;
  ushort uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char *local_a4;
  char *local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  undefined1 auStack_70 [12];
  undefined8 local_64;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_4c;
  uint local_44;
  undefined4 local_40;
  char local_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  char *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  
  uVar25 = CONCAT44(local_90,local_8c);
  uVar24 = FUN_0192fac8(param_2,4);
  if (((uint *)uVar24 != (uint *)0x0) && ((int)((ulonglong)uVar24 >> 0x20) == 4)) {
    uVar21 = *(uint *)uVar24;
    uVar24 = FUN_0192fac8(param_2,4);
    if (((uint *)uVar24 != (uint *)0x0) && ((int)((ulonglong)uVar24 >> 0x20) == 4)) {
      uVar22 = *(uint *)uVar24;
      FUN_01935b68(&local_40,param_2);
      pcVar9 = local_34;
      pcVar8 = local_38;
      uVar4 = CONCAT13(uStack_39,CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c)));
      if (local_40 == 1) {
        param_1[3] = local_34;
        *param_1 = 0x80000000;
        param_1[1] = uVar4;
        param_1[2] = local_38;
        return;
      }
      FUN_01935ea0(&local_40,param_2);
      pcVar10 = local_34;
      pcVar15 = local_38;
      cVar20 = local_3c;
      if (local_40 == 1) {
        cVar20 = '\x15';
        if (local_3c != '\x17') {
          FUN_01bed4e2(auStack_70,&uStack_3b,0xb);
          cVar20 = local_3c;
        }
        FUN_01bed4e2((int)param_1 + 5,auStack_70,0xb);
        *(char *)(param_1 + 1) = cVar20;
        *param_1 = 0x80000000;
      }
      else {
        uVar5 = CONCAT12(uStack_39,CONCAT11(uStack_3a,uStack_3b));
        pcVar23 = (char *)(uint)uVar5;
        piVar11 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *piVar11 = 1;
        piVar11[1] = 1;
        piVar11[2] = CONCAT31(uVar5,cVar20);
        piVar11[3] = (int)pcVar15;
        piVar11[4] = (int)pcVar10;
        FUN_01930f74(&local_40,&DAT_0056a6b8,param_2);
        if ((char)local_40 == '\x18') {
          uVar24 = FUN_0192fac8(param_2,CONCAT13(uStack_39,
                                                 CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c))));
          if ((int)uVar24 != 0) {
            local_5c = 0;
            local_50 = 0;
            local_84 = 4;
            local_54 = 4;
            local_58 = 0;
            if ((int)((ulonglong)uVar24 >> 0x20) != 0) {
              iVar16 = 8;
              local_a0 = (char *)0x0;
              do {
                iVar6 = local_50;
                local_8c = (uint)uVar25;
                local_64 = uVar24;
                FUN_0190d660(&local_40,&local_64);
                uVar17 = local_40 & 0xff;
                uVar7 = local_40._2_2_;
                if (uVar17 != 0x18) {
                  local_88 = (uint)local_40._2_2_;
                  pcVar15 = (char *)CONCAT22(CONCAT11(uStack_39,uStack_3a),
                                             CONCAT11(uStack_3b,local_3c));
                  uVar18 = (local_40 >> 8 & 0xff) << 8;
                  pcVar23 = local_38;
LAB_018e82e4:
                  uVar17 = uVar18 | local_88 << 0x10 | uVar17;
LAB_018e82ec:
                  FUN_0161a99c(&local_58);
                  goto LAB_018e82f8;
                }
                uVar3 = CONCAT11(uStack_3b,local_3c);
                uVar24 = FUN_0192fac8(&local_64,2);
                uVar17 = 0xc;
                uVar18 = 0;
                if (((ushort *)uVar24 == (ushort *)0x0) || ((int)((ulonglong)uVar24 >> 0x20) != 2))
                {
                  pcVar15 = "u16";
                  pcVar23 = (char *)0x3;
                  goto LAB_018e82e4;
                }
                uVar1 = *(ushort *)uVar24;
                local_88 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
                uVar24 = FUN_0192fac8(&local_64);
                uVar17 = (uint)((ulonglong)uVar24 >> 0x20);
                iVar12 = (int)uVar24;
                if (iVar12 == 0) {
                  uVar18 = 0x80000002;
                  uVar17 = 0xb;
                  pcVar23 = (char *)0x0;
                  uVar19 = local_8c & 0xffff0000;
                  uVar24 = uVar25;
                }
                else {
                  local_44 = 0;
                  if (uVar7 == 0x19) {
                    local_4c = uVar24;
                    uVar25 = FUN_0192fac8(&local_4c,4);
                    puVar13 = (uint *)uVar25;
                    uVar17 = 0xc;
                    uVar19 = 0;
                    pcVar23 = (char *)0x3;
                    if ((puVar13 != (uint *)0x0) && ((int)((ulonglong)uVar25 >> 0x20) == 4)) {
                      if (local_4c._4_4_ <= local_44) {
                        uVar17 = *puVar13;
                        puVar13 = (uint *)(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
                        pcVar15 = local_a4;
                        uVar18 = 0x80000001;
                        goto LAB_018e81b8;
                      }
                      uVar18 = 0x80000002;
                      uVar17 = 0xf;
                      pcVar15 = 
                      "NewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
                      ;
                      pcVar23 = (char *)0x19;
                      goto LAB_018e81c8;
                    }
                    puVar13 = (uint *)0x0;
                    pcVar15 = "u32";
                    uVar18 = 0x80000002;
                  }
                  else {
                    local_30 = 0x80000000;
                    local_4c._0_4_ = iVar12;
                    local_44 = uVar17;
                    local_2c = iVar12;
                    local_28 = uVar17;
                    FUN_01935918(&local_40,&local_30);
                    local_34 = (char *)CONCAT22(uVar3,uVar7);
                    puVar13 = (uint *)CONCAT13(uStack_39,
                                               CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c)));
                    pcVar15 = local_38;
                    local_a0 = local_34;
                    uVar18 = local_40;
LAB_018e81b8:
                    uVar17 = (uint)puVar13 & 0xff;
                    pcVar23 = local_a0;
                    local_a4 = pcVar15;
LAB_018e81c8:
                    uVar19 = (uint)puVar13 & 0xffff0000;
                  }
                  uVar25 = uVar24;
                  uVar24 = CONCAT44(pcVar15,puVar13);
                }
                pcVar15 = (char *)((ulonglong)uVar24 >> 0x20);
                uVar17 = uVar19 | (uint)uVar24 & 0xff00 | uVar17;
                if (uVar18 == 0x80000002) goto LAB_018e82ec;
                uVar24 = local_64;
                if (iVar6 == local_58) {
                  FUN_018fa978(&local_58);
                  local_84 = local_54;
                  uVar24 = local_64;
                }
                local_64._4_4_ = (uint)((ulonglong)uVar24 >> 0x20);
                puVar13 = (uint *)(local_84 + iVar6 * 0x10);
                *puVar13 = uVar18;
                local_50 = iVar6 + 1;
                puVar13[1] = uVar17;
                puVar14 = (undefined4 *)(local_84 + iVar16);
                *puVar14 = pcVar15;
                iVar16 = iVar16 + 0x10;
                puVar14[1] = pcVar23;
              } while (local_5c < local_64._4_4_);
            }
            param_1[2] = pcVar9;
            param_1[3] = local_58;
            param_1[6] = piVar11;
            param_1[4] = local_54;
            param_1[5] = local_50;
            param_1[7] = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18;
            *param_1 = uVar4;
            param_1[1] = pcVar8;
            param_1[8] = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                         (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18;
            return;
          }
          uVar17 = 0xb;
LAB_018e82f8:
          local_40 = uVar17;
          local_38 = pcVar23;
        }
        else {
          pcVar15 = (char *)CONCAT13(uStack_39,CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c)));
        }
        param_1[2] = pcVar15;
        param_1[3] = local_38;
        *param_1 = 0x80000000;
        param_1[1] = local_40;
        DataMemoryBarrier(0xb);
        do {
          iVar16 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar16 + -1;
        if (iVar16 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa118(piVar11);
        }
      }
      FUN_0134bd64(uVar4,pcVar8);
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = 0x80000000;
  param_1[2] = "u32";
  param_1[3] = 3;
  return;
}

