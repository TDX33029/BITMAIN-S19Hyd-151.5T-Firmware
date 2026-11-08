// FUN_01b2a350 @ 01b2a350 size=2024 calls_out=5 calls_in=3
// strings: 

void FUN_01b2a350(int param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  uint *puVar19;
  bool bVar20;
  undefined8 uVar21;
  byte *local_c8;
  uint *local_c4;
  uint local_bc [4];
  uint auStack_ac [4];
  uint local_9c [4];
  uint local_8c [4];
  undefined4 local_7c [4];
  uint local_6c [4];
  uint local_5c [4];
  uint auStack_4c [4];
  undefined1 auStack_3c [8];
  undefined4 auStack_34 [2];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_2 == 0xc0) {
    param_3[0x3c] = 0xc;
    FUN_01b29b5c(local_9c,param_1);
    if (((local_9c <= param_3) || (param_3 + 4 <= local_9c)) &&
       (local_8c <= param_3 || param_3 <= local_9c)) {
      puVar9 = param_3;
      puVar11 = local_9c;
      do {
        uVar3 = *puVar11;
        uVar6 = puVar11[1];
        puVar11 = puVar11 + 2;
        *puVar9 = uVar3;
        puVar9[1] = uVar6;
        puVar9 = puVar9 + 2;
      } while (puVar11 != local_8c);
      puVar5 = (undefined4 *)FUN_01bed93e(auStack_3c,0,0x10);
      puVar8 = (undefined4 *)(param_1 + 0x10);
      if ((auStack_34 <= puVar8 || puVar8 <= puVar5) &&
         ((puVar5 <= puVar8 || ((undefined4 *)(param_1 + 0x18) <= puVar5)))) {
        uVar4 = *(undefined4 *)(param_1 + 0x14);
        puVar16 = param_3 + 0xc;
        puVar17 = param_3 + 8;
        *puVar5 = *(undefined4 *)(param_1 + 0x10);
        puVar5[1] = uVar4;
        FUN_01b29b5c(local_8c,puVar5,puVar5 + 2);
        local_c8 = &DAT_0055e898;
        local_c4 = param_3 + 4;
        puVar9 = local_8c;
        puVar11 = local_9c;
        do {
          puVar15 = puVar9;
          FUN_01b25338(local_7c,puVar15);
          uVar3 = 0;
          bVar2 = *local_c8;
          puVar9 = puVar11 + -1;
          puVar13 = puVar15 + -1;
          do {
            uVar10 = puVar9[1];
            uVar6 = uVar3 & 0xff;
            puVar14 = puVar13 + 1;
            uVar12 = *puVar14;
            iVar7 = uVar3 * 2;
            uVar3 = uVar3 + 2;
            uVar21 = FUN_01b0cc3c(*(undefined4 *)((int)local_7c + iVar7));
            puVar9 = (uint *)((ulonglong)uVar21 >> 0x20);
            uVar6 = (uVar12 | (uVar10 ^ (int)(uint)bVar2 >> uVar6 & 3U) << 0x10) ^
                    ((uint)uVar21 & 0xff00) << 8;
            *puVar14 = (uVar6 & 0xff0000) << 8 ^ uVar6;
            *puVar9 = (uint)*(ushort *)((int)puVar9 + 2);
            uVar6 = (uint)*(ushort *)((int)puVar9 + 2) | *puVar14 << 0x10;
            *puVar9 = uVar6;
            uVar6 = *(byte *)((int)puVar13 + 7) ^ uVar6;
            *puVar9 = uVar6 << 0x10 ^ uVar6 << 8 ^ uVar6 ^ uVar6 << 0x18;
            puVar13 = puVar14;
          } while (uVar3 != 8);
          if (local_c4 < puVar15) {
            bVar20 = puVar17 <= puVar15;
LAB_01b2a700:
            if (!bVar20) break;
          }
          else if (local_c4 != puVar15) {
            bVar20 = puVar15 + 4 <= local_c4;
            goto LAB_01b2a700;
          }
          puVar9 = local_c4;
          puVar13 = puVar15;
          do {
            uVar3 = *puVar13;
            uVar6 = puVar13[1];
            puVar13 = puVar13 + 2;
            *puVar9 = uVar3;
            puVar9[1] = uVar6;
            puVar9 = puVar9 + 2;
          } while (puVar13 != puVar15 + 4);
          if (puVar17 < puVar11) {
            bVar20 = puVar16 <= puVar11;
LAB_01b2a73c:
            if (!bVar20) break;
          }
          else if (puVar17 != puVar11) {
            bVar20 = puVar11 + 4 <= puVar17;
            goto LAB_01b2a73c;
          }
          puVar9 = puVar17;
          puVar13 = puVar11;
          do {
            uVar3 = *puVar13;
            uVar6 = puVar13[1];
            puVar13 = puVar13 + 2;
            *puVar9 = uVar3;
            puVar9[1] = uVar6;
            puVar9 = puVar9 + 2;
          } while (puVar13 != puVar11 + 4);
          FUN_01b25338(local_7c,puVar11);
          uVar3 = 0;
          bVar2 = local_c8[1];
          puVar9 = puVar11 + -1;
          puVar13 = puVar15 + -1;
          do {
            puVar19 = puVar13 + 1;
            uVar6 = *puVar19;
            *puVar19 = uVar6 >> 0x10;
            puVar14 = puVar9 + 1;
            uVar21 = FUN_01b0cc3c(*(undefined4 *)((int)local_7c + uVar3 * 2),
                                  uVar6 >> 0x10 | *puVar14 << 0x10);
            uVar6 = uVar3 & 0xff;
            uVar3 = uVar3 + 2;
            uVar6 = (uint)((ulonglong)uVar21 >> 0x20) ^ (uint)uVar21 >> 0x18 ^
                    (int)(uint)bVar2 >> uVar6 & 3U;
            *puVar19 = uVar6 << 0x10 ^ uVar6 << 8 ^ uVar6 ^ uVar6 << 0x18;
            *puVar14 = (uint)*(ushort *)((int)puVar9 + 6);
            uVar6 = (uint)*(byte *)((int)puVar13 + 7) ^ (uint)*(ushort *)((int)puVar9 + 6);
            *puVar14 = (uVar6 ^ uVar6 << 8) & 0xffff;
            puVar9 = puVar14;
            puVar13 = puVar19;
          } while (uVar3 != 8);
          if (puVar16 < puVar15) {
            bVar20 = puVar16 + 4 <= puVar15;
LAB_01b2a808:
            if (!bVar20) break;
          }
          else if (puVar16 != puVar15) {
            bVar20 = puVar15 + 4 <= puVar16;
            goto LAB_01b2a808;
          }
          puVar9 = puVar16;
          puVar13 = puVar15;
          do {
            uVar3 = *puVar13;
            param_2 = puVar13[1];
            puVar13 = puVar13 + 2;
            *puVar9 = uVar3;
            puVar9[1] = param_2;
            puVar9 = puVar9 + 2;
          } while (puVar13 != puVar15 + 4);
          puVar16 = puVar16 + 0xc;
          puVar17 = puVar17 + 0xc;
          local_c8 = local_c8 + 2;
          local_c4 = local_c4 + 0xc;
          if (param_3 + 0x3c == puVar16) goto LAB_01b2a4fc;
          puVar9 = puVar11;
          puVar11 = puVar15;
        } while( true );
      }
    }
  }
  else {
    if (param_2 != 0x100) {
      if (param_2 == 0x80) {
        param_3[0x3c] = 10;
        FUN_01b29b5c(local_bc,param_1);
        if (((param_3 < local_bc) && (local_bc < param_3 + 4)) ||
           (local_bc < param_3 && param_3 < auStack_ac)) goto LAB_01b2a3d0;
        puVar9 = param_3;
        puVar11 = local_bc;
        do {
          uVar3 = *puVar11;
          uVar6 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar9 = uVar3;
          puVar9[1] = uVar6;
          puVar9 = puVar9 + 2;
        } while (puVar11 != auStack_ac);
        puVar9 = param_3 + 4;
        pbVar18 = &DAT_0055e898;
        do {
          FUN_01b25338(auStack_ac,local_bc);
          bVar2 = *pbVar18;
          iVar7 = 0;
          puVar11 = local_bc;
          puVar16 = auStack_ac;
          do {
            uVar6 = *puVar11;
            uVar21 = FUN_01b0cc3c(*puVar16,iVar7);
            uVar3 = (uint)((ulonglong)uVar21 >> 0x20);
            iVar7 = uVar3 + 2;
            uVar3 = (int)(uint)bVar2 >> (uVar3 & 0xff) & 3U ^ uVar6 ^ (uint)uVar21 >> 0x18;
            *puVar11 = uVar3 << 0x10 ^ uVar3 << 8 ^ uVar3 ^ uVar3 << 0x18;
            puVar11 = puVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (iVar7 != 8);
          if (((puVar9 < local_bc) && (local_bc < puVar9 + 4)) ||
             (pbVar18 = pbVar18 + 1, local_bc < puVar9 && puVar9 < auStack_ac)) goto LAB_01b2a3d0;
          puVar11 = puVar9;
          puVar16 = local_bc;
          do {
            uVar3 = *puVar16;
            param_2 = puVar16[1];
            puVar16 = puVar16 + 2;
            *puVar11 = uVar3;
            puVar11[1] = param_2;
            puVar11 = puVar11 + 2;
          } while (puVar16 != auStack_ac);
          puVar9 = puVar9 + 4;
        } while (param_3 + 0x2c != puVar9);
LAB_01b2a4fc:
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4(uVar4,param_2,local_2c ^ DAT_01d53560,0);
      }
      return;
    }
    param_3[0x3c] = 0xe;
    FUN_01b29b5c(local_6c,param_1);
    if (((local_6c <= param_3) || (param_3 + 4 <= local_6c)) &&
       (local_5c <= param_3 || param_3 <= local_6c)) {
      puVar9 = param_3;
      puVar11 = local_6c;
      do {
        uVar3 = *puVar11;
        uVar6 = puVar11[1];
        puVar11 = puVar11 + 2;
        *puVar9 = uVar3;
        puVar9[1] = uVar6;
        puVar9 = puVar9 + 2;
      } while (puVar11 != local_5c);
      FUN_01b29b5c(local_5c,param_1 + 0x10);
      puVar9 = param_3 + 4;
      if (((local_5c <= puVar9) || (param_3 + 8 <= local_5c)) &&
         (auStack_4c <= puVar9 || puVar9 <= local_5c)) {
        puVar11 = local_5c;
        do {
          uVar3 = *puVar11;
          uVar6 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar9 = uVar3;
          puVar9[1] = uVar6;
          puVar9 = puVar9 + 2;
        } while (puVar11 != auStack_4c);
        uVar3 = 2;
        puVar9 = param_3 + 0xc;
        while( true ) {
          param_3 = param_3 + 8;
          FUN_01b25338(auStack_4c,local_5c);
          bVar2 = (&UNK_0055e897)[uVar3 >> 1];
          uVar6 = 0;
          puVar11 = local_6c;
          local_c4 = auStack_4c;
          do {
            uVar21 = FUN_01b0cc3c(*local_c4,*puVar11);
            uVar10 = uVar6 & 0xff;
            uVar6 = uVar6 + 2;
            uVar10 = (uint)((ulonglong)uVar21 >> 0x20) ^ (uint)uVar21 >> 0x18 ^
                     (int)(uint)bVar2 >> uVar10 & 3U;
            *puVar11 = uVar10 << 0x10 ^ uVar10 << 8 ^ uVar10 ^ uVar10 << 0x18;
            puVar11 = puVar11 + 1;
            local_c4 = local_c4 + 1;
          } while (uVar6 != 8);
          if (((param_3 < local_6c) && (local_6c < puVar9)) ||
             (param_3 < local_5c && local_6c < param_3)) break;
          puVar11 = param_3;
          puVar16 = local_6c;
          do {
            uVar6 = *puVar16;
            param_2 = puVar16[1];
            puVar16 = puVar16 + 2;
            *puVar11 = uVar6;
            puVar11[1] = param_2;
            puVar11 = puVar11 + 2;
          } while (puVar16 != local_5c);
          if (uVar3 == 0xe) goto LAB_01b2a4fc;
          FUN_01b25338(auStack_4c,local_6c);
          iVar7 = 0;
          puVar11 = local_5c;
          puVar16 = auStack_4c;
          do {
            iVar7 = iVar7 + 1;
            uVar6 = *puVar11 ^ *puVar16 >> 0x18;
            *puVar11 = uVar6 << 0x10 ^ uVar6 << 8 ^ uVar6 ^ uVar6 << 0x18;
            puVar11 = puVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (iVar7 != 4);
          if (((puVar9 < local_5c) && (local_5c < puVar9 + 4)) ||
             (puVar9 < auStack_4c && local_5c < puVar9)) break;
          puVar11 = puVar9;
          puVar16 = local_5c;
          do {
            uVar6 = *puVar16;
            uVar10 = puVar16[1];
            puVar16 = puVar16 + 2;
            *puVar11 = uVar6;
            puVar11[1] = uVar10;
            puVar11 = puVar11 + 2;
          } while (puVar16 != auStack_4c);
          uVar3 = uVar3 + 2;
          puVar9 = puVar9 + 8;
        }
      }
    }
  }
LAB_01b2a3d0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1b2a3d0);
  (*pcVar1)();
}

