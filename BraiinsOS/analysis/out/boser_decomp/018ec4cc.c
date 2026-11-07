// FUN_018ec4cc @ 018ec4cc size=1592 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018ec4cc(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  char *local_100;
  uint local_f0;
  uint local_ec;
  char *local_dc;
  char *local_d8;
  int local_d0;
  undefined1 *local_c8;
  undefined4 local_c4;
  char *local_c0;
  char *local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char local_a0;
  byte bStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  ushort local_9c;
  ushort uStack_9a;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 local_94;
  char *pcStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char *pcStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  
  FUN_018ed6b4(&local_a0);
  if (CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(bStack_9f,local_a0))) == 1) {
    param_1[1] = CONCAT22(uStack_9a,local_9c);
    param_1[2] = CONCAT22(uStack_96,local_98);
    param_1[3] = local_94;
  }
  else {
    local_c8 = (undefined1 *)CONCAT22(uStack_9a,local_9c);
    local_c4 = CONCAT22(uStack_96,local_98);
    local_c0 = local_94;
    local_bc = pcStack_90;
    local_b8 = local_8c;
    uStack_b4 = uStack_88;
    uStack_b0 = uStack_84;
    uStack_ac = uStack_80;
    uStack_a8 = uStack_7c;
    pcStack_70 = local_94;
    pcStack_6c = pcStack_90;
    local_68 = local_8c;
    uStack_64 = uStack_88;
    uStack_60 = uStack_84;
    uStack_5c = uStack_80;
    uStack_58 = uStack_7c;
    local_78 = local_c8;
    uStack_74 = local_c4;
    FUN_0190b98c(&local_a0,param_2);
    uVar4 = local_9c;
    if (local_a0 == '\x18') {
      pcVar13 = &local_a0;
      uVar2 = CONCAT11(uStack_9d,uStack_9e);
      FUN_0190d438(pcVar13,param_2);
      if (local_a0 == '\x18') {
        if (bStack_9f != 0) {
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = 0x12;
          return;
        }
        FUN_01930f74(&local_a0,&DAT_0056a6b8,param_2);
        if (local_a0 == '\x18') {
          uVar17 = FUN_0192fac8(param_2,CONCAT22(uStack_9a,local_9c));
          local_50 = (uint)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 != 0) {
            local_54 = (undefined1)uVar17;
            local_d0 = 4;
            local_4c = 0;
            local_51 = (undefined1)((ulonglong)uVar17 >> 0x18);
            local_53 = (undefined2)((ulonglong)uVar17 >> 8);
            local_40 = 0;
            local_44 = 4;
            local_48 = 0;
            if (local_50 == 0) {
              uVar14 = 0;
              local_48._0_1_ = 0;
            }
            else {
              puVar9 = (undefined2 *)((uint)&local_3c | 1);
              local_d0 = 4;
              do {
                uVar11 = local_40;
                FUN_0190d660(&local_a0,&local_54);
                uVar5 = local_9c;
                if (local_a0 != '\x18') {
                  local_ec = (uint)CONCAT11(uStack_9d,uStack_9e);
                  pcVar13 = (char *)((uint)local_9c | CONCAT22(local_98,uStack_9a) << 0x10);
                  uVar14 = (uint)bStack_9f;
                  local_d8 = (char *)CONCAT22(uStack_96,local_98);
                  cVar15 = local_a0;
LAB_018eca10:
                  uVar14 = uVar14 | local_ec << 8;
LAB_018ecac0:
                  FUN_018e3e1c(&local_48);
                  local_a0 = cVar15;
                  goto LAB_018ecad0;
                }
                uVar3 = CONCAT11(uStack_9d,uStack_9e);
                uVar17 = FUN_0192fac8(&local_54,2);
                if (((ushort *)uVar17 == (ushort *)0x0) || ((int)((ulonglong)uVar17 >> 0x20) != 2))
                {
                  uVar14 = 3;
                  local_d8 = &DAT_00000003;
                  pcVar13 = "u16";
                  cVar15 = '\f';
                  goto LAB_018eca10;
                }
                uVar1 = *(ushort *)uVar17;
                local_ec = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
                lVar18 = FUN_0192fac8(&local_54);
                pcVar10 = (char *)((ulonglong)lVar18 >> 0x20);
                if ((uint)lVar18 == 0) {
                  cVar15 = '\v';
                  local_d8 = (char *)0x0;
                  uVar14 = local_f0 >> 0x10;
                  uVar11 = local_f0 >> 8;
LAB_018ecab8:
                  uVar14 = uVar11 & 0xff | uVar14 << 8;
                  goto LAB_018ecac0;
                }
                *puVar9 = (short)((ulonglong)lVar18 >> 8);
                *(char *)(puVar9 + 1) = (char)((ulonglong)lVar18 >> 0x18);
                local_3c = CONCAT31(local_3c._1_3_,(char)lVar18);
                uVar6 = local_3c;
                *(char **)((int)puVar9 + 3) = pcVar10;
                *(undefined4 *)((int)puVar9 + 7) = 0;
                if (uVar3 < 0x22) {
                  if (uVar3 == 0x1a) {
                    FUN_0190ceb8(&local_a0,&local_3c);
                    if (local_a0 != '\x18') {
LAB_018eca7c:
                      uVar11 = (uint)bStack_9f;
                      uVar14 = (uint)CONCAT11(uStack_9d,uStack_9e);
                      pcVar13 = (char *)((uint)local_9c | CONCAT22(local_98,uStack_9a) << 0x10);
                      local_d8 = (char *)CONCAT22(uStack_96,local_98);
                      cVar15 = local_a0;
                      goto LAB_018ecab8;
                    }
                    pcVar12 = (char *)CONCAT22(local_9c,CONCAT11(uStack_9d,uStack_9e));
                    puVar7 = (undefined1 *)0x80000003;
                  }
                  else if (uVar3 == 0x1b) {
                    FUN_01935ea0(&local_a0,&local_3c);
                    pcVar12 = (char *)CONCAT22(uStack_9a,local_9c);
                    pcVar13 = (char *)CONCAT22(uStack_96,local_98);
                    local_d8 = local_94;
                    if (CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(bStack_9f,local_a0))) != 0) {
                      uVar14 = (uint)uStack_9a;
                      uVar11 = (uint)pcVar12 >> 8;
                      cVar15 = (char)local_9c;
                      goto LAB_018ecab8;
                    }
                    puVar7 = (undefined1 *)0x80000002;
                    local_dc = pcVar13;
                  }
                  else {
LAB_018ec7dc:
                    local_2c = local_3c;
                    local_30 = 0x80000000;
                    local_34 = pcVar10;
                    local_28 = pcVar10;
                    FUN_01935918(&local_a0,&local_30);
                    local_dc = (char *)CONCAT22(uStack_96,local_98);
                    local_94 = (char *)CONCAT22(uVar5,uVar3);
                    puVar7 = (undefined1 *)
                             CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(bStack_9f,local_a0)));
                    pcVar12 = (char *)CONCAT22(uStack_9a,local_9c);
                    local_d8 = local_94;
                  }
                }
                else if (uVar3 == 0x22) {
                  FUN_0190d2b4(&local_a0,&local_3c);
                  if (local_a0 != '\x18') goto LAB_018eca7c;
                  pcVar12 = (char *)CONCAT22(local_9c,CONCAT11(uStack_9d,uStack_9e));
                  puVar7 = (undefined1 *)0x80000001;
                }
                else {
                  if (uVar3 != 0x28) goto LAB_018ec7dc;
                  uVar16 = 0;
                  local_34 = pcVar10;
                  if (lVar18 < 0) {
LAB_018ecaf8:
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(uVar16,local_100);
                  }
                  if (pcVar10 == (char *)0x0) {
                    local_100 = &DAT_00000001;
                    pcVar12 = (char *)0x0;
                  }
                  else {
                    uVar16 = 1;
                    local_100 = (char *)FUN_01298504(pcVar10,1);
                    pcVar12 = pcVar10;
                    if (local_100 == (char *)0x0) {
                      local_100 = pcVar10;
                      goto LAB_018ecaf8;
                    }
                  }
                  FUN_01bed4e2(local_100,uVar6,pcVar10);
                  puVar7 = &DAT_80000004;
                  local_dc = local_100;
                  local_d8 = pcVar10;
                }
                if (local_34 < local_38) {
                  local_a0 = (char)puVar7;
                  bStack_9f = (byte)((uint)puVar7 >> 8);
                  uStack_9e = (undefined1)((uint)puVar7 >> 0x10);
                  uStack_9d = (undefined1)((uint)puVar7 >> 0x18);
                  local_94 = local_d8;
                  local_98 = SUB42(local_dc,0);
                  uStack_96 = (undefined2)((uint)local_dc >> 0x10);
                  local_9c = (ushort)pcVar12;
                  uStack_9a = (ushort)((uint)pcVar12 >> 0x10);
                  FUN_018e3e98(&local_a0);
                  cVar15 = '\x0f';
                  uVar14 = 0;
                  pcVar13 = 
                  "HelloRetryExtensionCertificateExtensionNewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
                  ;
                  local_d8 = &DAT_00000013;
                  goto LAB_018ecac0;
                }
                uVar14 = (uint)pcVar12 >> 8;
                cVar15 = (char)pcVar12;
                if (puVar7 == &DAT_80000005) {
                  pcVar13 = local_dc;
                  goto LAB_018ecac0;
                }
                local_bc = local_d8;
                local_c0 = local_dc;
                *(undefined2 *)((uint)&local_c8 | 5) = (short)((uint)pcVar12 >> 8);
                *(char *)((undefined2 *)((uint)&local_c8 | 5) + 1) = (char)((uint)pcVar12 >> 0x18);
                local_c4 = CONCAT31(local_c4._1_3_,cVar15);
                local_c8 = puVar7;
                if (uVar11 == local_48) {
                  FUN_018fa978(&local_48);
                  local_d0 = local_44;
                }
                puVar8 = (undefined4 *)(local_d0 + uVar11 * 0x10);
                local_40 = uVar11 + 1;
                *puVar8 = local_c8;
                puVar8[1] = local_c4;
                puVar8[2] = local_c0;
                puVar8[3] = local_bc;
                pcVar13 = pcVar10;
                local_f0 = (uint)lVar18;
              } while (local_4c < local_50);
              uVar14 = local_48 >> 8;
            }
            *(undefined1 *)param_1 = (undefined1)local_48;
            param_1[2] = local_40;
            *(char *)((int)param_1 + 3) = (char)(uVar14 >> 0x10);
            *(short *)((int)param_1 + 1) = (short)uVar14;
            param_1[1] = local_d0;
            param_1[5] = local_78;
            param_1[6] = uStack_74;
            param_1[7] = pcStack_70;
            param_1[8] = pcStack_6c;
            param_1[9] = local_68;
            param_1[10] = uStack_64;
            param_1[0xb] = uStack_60;
            param_1[0xc] = uStack_5c;
            param_1[0xd] = uStack_58;
            *(ushort *)((int)param_1 + 0x12) = uVar4;
            *(undefined2 *)(param_1 + 4) = uVar2;
            param_1[3] = 9;
            return;
          }
          local_a0 = '\v';
          uVar14 = 0;
          local_d8 = (char *)0x0;
        }
        else {
          local_d8 = (char *)CONCAT22(uStack_96,local_98);
          pcVar13 = (char *)CONCAT22(uStack_9a,local_9c);
          uVar14 = (uint)CONCAT12(uStack_9d,CONCAT11(uStack_9e,bStack_9f));
        }
LAB_018ecad0:
        param_1[2] = pcVar13;
        *param_1 = 0x80000000;
        *(short *)((int)param_1 + 5) = (short)uVar14;
        *(char *)(param_1 + 1) = local_a0;
        param_1[3] = local_d8;
        *(char *)((int)param_1 + 7) = (char)(uVar14 >> 0x10);
        return;
      }
      FUN_01bed4e2((int)param_1 + 7,(uint)pcVar13 | 3,9);
      *(undefined1 *)((int)param_1 + 6) = uStack_9e;
      *(byte *)((int)param_1 + 5) = bStack_9f;
      *(char *)(param_1 + 1) = local_a0;
    }
    else {
      *(uint *)((int)param_1 + 10) = CONCAT22(local_98,uStack_9a);
      *(undefined2 *)((int)param_1 + 0xe) = uStack_96;
      *(uint *)((int)param_1 + 6) = CONCAT22(local_9c,CONCAT11(uStack_9d,uStack_9e));
      *(byte *)((int)param_1 + 5) = bStack_9f;
      *(char *)(param_1 + 1) = local_a0;
    }
  }
  *param_1 = 0x80000000;
  return;
}

