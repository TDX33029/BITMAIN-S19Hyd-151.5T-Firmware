// FUN_017a9408 @ 017a9408 size=7724 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_017a9408(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int local_40;
  int local_3c;
  
  puVar8 = (uint *)(param_2 + -8);
  local_40 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 100);
  iVar9 = *(int *)(param_1 + 4);
  puVar10 = (uint *)(iVar9 + local_40);
  iVar14 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xbc);
  if (param_4 == 1) {
    if ((uint *)((int)puVar10 + 2) <= puVar8) {
      iVar17 = -*(int *)(param_1 + 0xc0);
      uVar5 = iVar17 + 0x38;
      if (param_3 != 0) {
        uVar11 = *puVar10;
        uVar3 = puVar10[1];
        uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
        uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                 (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
        switch(iVar13) {
        case 5:
          uVar19 = 0x20 - uVar5;
          uVar20 = iVar17 + 0x18;
          break;
        case 6:
          uVar19 = 0x20 - uVar5;
          uVar20 = iVar17 + 0x18;
          do {
            while( true ) {
              uVar15 = uVar15 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                       uVar16 >> (uVar20 & 0xff);
              uVar16 = uVar3 * -0x40650000 + uVar11 * -0x30e44324 +
                       (int)((ulonglong)uVar11 * 0xbf9b0000 >> 0x20);
              uVar11 = (uint)((ulonglong)uVar11 * 0xbf9b0000) >> (0x38U - iVar2 & 0xff) |
                       uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
              uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                       uVar16 >> (uVar20 & 0xff);
              *(uint *)(iVar4 + (uVar11 >> 8) * 4) = uVar11 & 0xff | local_40 << 8;
              *(uint *)(iVar14 + (uVar15 >> 8) * 4) = uVar15 & 0xff | local_40 << 8;
              uVar11 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) break;
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
              uVar11 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
              }
LAB_017a9ba8:
              if (puVar8 < (uint *)((int)puVar10 + 5)) {
                return 0;
              }
              uVar11 = *(uint *)((int)puVar10 + 3);
              uVar3 = *(uint *)((int)puVar10 + 7);
              local_40 = ((int)puVar10 + 3) - iVar9;
              uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
              uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                       (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
              puVar10 = (uint *)((int)puVar10 + 3);
            }
            uVar15 = *(uint *)((int)puVar10 + 2);
            iVar13 = *(int *)((int)puVar10 + 6);
            *(uint *)(iVar14 + uVar11 * 4) = uVar16 & 0xff | (local_40 + 1) * 0x100;
            lVar1 = (ulonglong)uVar15 * 0xb7a56463;
            uVar11 = iVar13 * -0x485a9b9d + uVar15 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
              goto LAB_017a9ba8;
            }
            if (puVar8 < (uint *)((int)puVar10 + 5)) {
              return 0;
            }
            iVar13 = (int)puVar10 + (3 - iVar9);
            uVar3 = *(uint *)((int)puVar10 + 3);
            lVar1 = (ulonglong)puVar10[1] * 0xb7a56463;
            uVar11 = puVar10[2] * -0x485a9b9d + puVar10[1] * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            uVar16 = *(int *)((int)puVar10 + 7) * -0x40650000 + uVar3 * -0x30e44324 +
                     (int)((ulonglong)uVar3 * 0xbf9b0000 >> 0x20);
            uVar16 = (uint)((ulonglong)uVar3 * 0xbf9b0000) >> (0x38U - iVar2 & 0xff) |
                     uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
            uVar7 = *(int *)((int)puVar10 + 7) * -0x485a9b9d + uVar3 * -0x30e44324 +
                    (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
            uVar3 = (uint)((ulonglong)uVar3 * 0xb7a56463) >> (uVar5 & 0xff) |
                    uVar7 << (uVar19 & 0xff) | uVar7 >> (uVar20 & 0xff);
            *(uint *)(iVar4 + (uVar16 >> 8) * 4) = uVar16 & 0xff | iVar13 * 0x100;
            *(uint *)(iVar14 + (uVar3 >> 8) * 4) = uVar3 & 0xff | iVar13 * 0x100;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              uVar16 = *(uint *)((int)puVar10 + 5);
              iVar17 = *(int *)((int)puVar10 + 9);
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 1) * 0x100;
              lVar1 = (ulonglong)uVar16 * 0xb7a56463;
              uVar11 = iVar17 * -0x485a9b9d + uVar16 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
              ;
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            else {
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 5) * 0xb7a56463;
              uVar11 = *(int *)((int)puVar10 + 9) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            if (puVar8 < puVar10 + 2) {
              return 0;
            }
            uVar11 = *(uint *)((int)puVar10 + 6);
            uVar3 = *(uint *)((int)puVar10 + 10);
            local_40 = ((int)puVar10 + 6) - iVar9;
            uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
            uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                     (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
            puVar10 = (uint *)((int)puVar10 + 6);
          } while( true );
        case 7:
          uVar19 = 0x20 - uVar5;
          uVar20 = iVar17 + 0x18;
          do {
            while( true ) {
              uVar15 = uVar15 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                       uVar16 >> (uVar20 & 0xff);
              uVar16 = uVar3 * -0x405a9d00 + uVar11 * -0x30e44324 +
                       (int)((ulonglong)uVar11 * 0xbfa56300 >> 0x20);
              uVar11 = (uint)((ulonglong)uVar11 * 0xbfa56300) >> (0x38U - iVar2 & 0xff) |
                       uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
              uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                       uVar16 >> (uVar20 & 0xff);
              *(uint *)(iVar4 + (uVar11 >> 8) * 4) = uVar11 & 0xff | local_40 << 8;
              *(uint *)(iVar14 + (uVar15 >> 8) * 4) = uVar15 & 0xff | local_40 << 8;
              uVar11 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) break;
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
              uVar11 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
              }
LAB_017a9a3c:
              if (puVar8 < (uint *)((int)puVar10 + 5)) {
                return 0;
              }
              uVar11 = *(uint *)((int)puVar10 + 3);
              uVar3 = *(uint *)((int)puVar10 + 7);
              local_40 = ((int)puVar10 + 3) - iVar9;
              uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
              uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                       (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
              puVar10 = (uint *)((int)puVar10 + 3);
            }
            uVar15 = *(uint *)((int)puVar10 + 2);
            iVar13 = *(int *)((int)puVar10 + 6);
            *(uint *)(iVar14 + uVar11 * 4) = uVar16 & 0xff | (local_40 + 1) * 0x100;
            lVar1 = (ulonglong)uVar15 * 0xb7a56463;
            uVar11 = iVar13 * -0x485a9b9d + uVar15 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
              goto LAB_017a9a3c;
            }
            if (puVar8 < (uint *)((int)puVar10 + 5)) {
              return 0;
            }
            iVar13 = (int)puVar10 + (3 - iVar9);
            uVar3 = *(uint *)((int)puVar10 + 3);
            lVar1 = (ulonglong)puVar10[1] * 0xb7a56463;
            uVar11 = puVar10[2] * -0x485a9b9d + puVar10[1] * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            uVar16 = *(int *)((int)puVar10 + 7) * -0x405a9d00 + uVar3 * -0x30e44324 +
                     (int)((ulonglong)uVar3 * 0xbfa56300 >> 0x20);
            uVar16 = (uint)((ulonglong)uVar3 * 0xbfa56300) >> (0x38U - iVar2 & 0xff) |
                     uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
            uVar7 = *(int *)((int)puVar10 + 7) * -0x485a9b9d + uVar3 * -0x30e44324 +
                    (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
            uVar3 = (uint)((ulonglong)uVar3 * 0xb7a56463) >> (uVar5 & 0xff) |
                    uVar7 << (uVar19 & 0xff) | uVar7 >> (uVar20 & 0xff);
            *(uint *)(iVar4 + (uVar16 >> 8) * 4) = uVar16 & 0xff | iVar13 * 0x100;
            *(uint *)(iVar14 + (uVar3 >> 8) * 4) = uVar3 & 0xff | iVar13 * 0x100;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              uVar16 = *(uint *)((int)puVar10 + 5);
              iVar17 = *(int *)((int)puVar10 + 9);
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 1) * 0x100;
              lVar1 = (ulonglong)uVar16 * 0xb7a56463;
              uVar11 = iVar17 * -0x485a9b9d + uVar16 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
              ;
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            else {
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 5) * 0xb7a56463;
              uVar11 = *(int *)((int)puVar10 + 9) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                       uVar11 >> (uVar20 & 0xff);
              uVar11 = uVar15 >> 8;
              if (*(int *)(iVar14 + uVar11 * 4) == 0) {
                *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            if (puVar8 < puVar10 + 2) {
              return 0;
            }
            uVar11 = *(uint *)((int)puVar10 + 6);
            uVar3 = *(uint *)((int)puVar10 + 10);
            local_40 = ((int)puVar10 + 6) - iVar9;
            uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
            uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                     (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
            puVar10 = (uint *)((int)puVar10 + 6);
          } while( true );
        case 8:
          uVar3 = iVar17 + 0x18;
          uVar11 = 0x20 - uVar5;
          local_3c = local_40;
          do {
            while( true ) {
              uVar19 = uVar15 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                       uVar16 >> (uVar3 & 0xff);
              uVar15 = uVar15 >> (0x38U - iVar2 & 0xff) | uVar16 << (iVar2 - 0x18U & 0xff) |
                       uVar16 >> (0x18U - iVar2 & 0xff);
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
              uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                       uVar16 >> (uVar3 & 0xff);
              *(uint *)(iVar4 + (uVar15 >> 8) * 4) = uVar15 & 0xff | local_3c << 8;
              uVar15 = uVar16 >> 8;
              *(uint *)(iVar14 + (uVar19 >> 8) * 4) = uVar19 & 0xff | local_3c << 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) break;
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
              uVar15 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                       uVar15 >> (uVar3 & 0xff);
              uVar15 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (local_3c + 2) * 0x100;
              }
LAB_017a98cc:
              if (puVar8 < (uint *)((int)puVar10 + 5)) {
                return 0;
              }
              local_3c = ((int)puVar10 + 3) - iVar9;
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 3) * 0xb7a56463;
              uVar15 = (uint)lVar1;
              uVar16 = *(int *)((int)puVar10 + 7) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 3) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              puVar10 = (uint *)((int)puVar10 + 3);
            }
            uVar19 = *(uint *)((int)puVar10 + 2);
            iVar13 = *(int *)((int)puVar10 + 6);
            *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (local_3c + 1) * 0x100;
            lVar1 = (ulonglong)uVar19 * 0xb7a56463;
            uVar15 = iVar13 * -0x485a9b9d + uVar19 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                     uVar15 >> (uVar3 & 0xff);
            uVar15 = uVar16 >> 8;
            if (*(int *)(iVar14 + uVar15 * 4) == 0) {
              *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (local_3c + 2) * 0x100;
              goto LAB_017a98cc;
            }
            if (puVar8 < (uint *)((int)puVar10 + 5)) {
              return 0;
            }
            iVar13 = (int)puVar10 + (3 - iVar9);
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 3) * 0xb7a56463;
            uVar20 = (uint)lVar1;
            uVar7 = *(int *)((int)puVar10 + 7) * -0x485a9b9d +
                    *(uint *)((int)puVar10 + 3) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            lVar1 = (ulonglong)puVar10[1] * 0xb7a56463;
            uVar15 = puVar10[2] * -0x485a9b9d + puVar10[1] * -0x30e44324 +
                     (int)((ulonglong)lVar1 >> 0x20);
            uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                     uVar15 >> (uVar3 & 0xff);
            uVar19 = uVar20 >> (0x38U - iVar2 & 0xff) | uVar7 << (iVar2 - 0x18U & 0xff) |
                     uVar7 >> (0x18U - iVar2 & 0xff);
            uVar20 = uVar20 >> (uVar5 & 0xff) | uVar7 << (uVar11 & 0xff) | uVar7 >> (uVar3 & 0xff);
            uVar15 = uVar16 >> 8;
            *(uint *)(iVar4 + (uVar19 >> 8) * 4) = uVar19 & 0xff | iVar13 * 0x100;
            *(uint *)(iVar14 + (uVar20 >> 8) * 4) = uVar20 & 0xff | iVar13 * 0x100;
            if (*(int *)(iVar14 + uVar15 * 4) == 0) {
              uVar19 = *(uint *)((int)puVar10 + 5);
              iVar17 = *(int *)((int)puVar10 + 9);
              *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (iVar13 + 1) * 0x100;
              lVar1 = (ulonglong)uVar19 * 0xb7a56463;
              uVar15 = iVar17 * -0x485a9b9d + uVar19 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
              ;
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                       uVar15 >> (uVar3 & 0xff);
              uVar15 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            else {
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 5) * 0xb7a56463;
              uVar15 = *(int *)((int)puVar10 + 9) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                       uVar15 >> (uVar3 & 0xff);
              uVar15 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (iVar13 + 2) * 0x100;
              }
            }
            if (puVar8 < puVar10 + 2) {
              return 0;
            }
            local_3c = ((int)puVar10 + 6) - iVar9;
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 6) * 0xb7a56463;
            uVar15 = (uint)lVar1;
            uVar16 = *(int *)((int)puVar10 + 10) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 6) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            puVar10 = (uint *)((int)puVar10 + 6);
          } while( true );
        default:
          uVar11 = 0x20 - uVar5;
          uVar3 = iVar17 + 0x18;
          do {
            while( true ) {
              uVar19 = uVar15 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                       uVar16 >> (uVar3 & 0xff);
              uVar15 = *puVar10 * -0x61c8864f >> (0x18U - iVar2 & 0xff);
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
              uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                       uVar16 >> (uVar3 & 0xff);
              *(uint *)(iVar4 + (uVar15 >> 8) * 4) = uVar15 & 0xff | local_40 << 8;
              *(uint *)(iVar14 + (uVar19 >> 8) * 4) = uVar19 & 0xff | local_40 << 8;
              uVar15 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) break;
              lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
              uVar15 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                       *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
              uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                       uVar15 >> (uVar3 & 0xff);
              uVar15 = uVar16 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) != 0) goto joined_r0x017ab1e0;
              *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (local_40 + 2) * 0x100;
              if (puVar8 < (uint *)((int)puVar10 + 5)) {
                return 0;
              }
              uVar16 = *(uint *)((int)puVar10 + 3);
              iVar13 = (int)puVar10 + (3 - iVar9);
              lVar1 = (ulonglong)puVar10[1] * 0xb7a56463;
              uVar15 = puVar10[2] * -0x485a9b9d + puVar10[1] * -0x30e44324 +
                       (int)((ulonglong)lVar1 >> 0x20);
              uVar19 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                       uVar15 >> (uVar3 & 0xff);
              uVar15 = uVar16 * -0x61c8864f >> (0x18U - iVar2 & 0xff);
              uVar20 = *(int *)((int)puVar10 + 7) * -0x485a9b9d + uVar16 * -0x30e44324 +
                       (int)((ulonglong)uVar16 * 0xb7a56463 >> 0x20);
              uVar16 = (uint)((ulonglong)uVar16 * 0xb7a56463) >> (uVar5 & 0xff) |
                       uVar20 << (uVar11 & 0xff) | uVar20 >> (uVar3 & 0xff);
              *(uint *)(iVar4 + (uVar15 >> 8) * 4) = uVar15 & 0xff | iVar13 * 0x100;
              *(uint *)(iVar14 + (uVar16 >> 8) * 4) = uVar16 & 0xff | iVar13 * 0x100;
              uVar15 = uVar19 >> 8;
              if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                uVar16 = *(uint *)((int)puVar10 + 5);
                iVar17 = *(int *)((int)puVar10 + 9);
                *(uint *)(iVar14 + uVar15 * 4) = uVar19 & 0xff | (iVar13 + 1) * 0x100;
                lVar1 = (ulonglong)uVar16 * 0xb7a56463;
                uVar15 = iVar17 * -0x485a9b9d + uVar16 * -0x30e44324 +
                         (int)((ulonglong)lVar1 >> 0x20);
                uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                         uVar15 >> (uVar3 & 0xff);
                uVar15 = uVar16 >> 8;
                if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                  *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (iVar13 + 2) * 0x100;
                }
              }
              else {
                lVar1 = (ulonglong)*(uint *)((int)puVar10 + 5) * 0xb7a56463;
                uVar15 = *(int *)((int)puVar10 + 9) * -0x485a9b9d +
                         *(uint *)((int)puVar10 + 5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20)
                ;
                uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                         uVar15 >> (uVar3 & 0xff);
                uVar15 = uVar16 >> 8;
                if (*(int *)(iVar14 + uVar15 * 4) == 0) {
                  *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (iVar13 + 2) * 0x100;
                }
              }
              if (puVar8 < puVar10 + 2) {
                return 0;
              }
              puVar6 = (uint *)((int)puVar10 + 6);
              uVar16 = *(uint *)((int)puVar10 + 6);
              iVar13 = *(int *)((int)puVar10 + 10);
LAB_017ab1a0:
              local_40 = (int)puVar6 - iVar9;
              uVar15 = (uint)((ulonglong)uVar16 * 0xb7a56463);
              uVar16 = iVar13 * -0x485a9b9d + uVar16 * -0x30e44324 +
                       (int)((ulonglong)uVar16 * 0xb7a56463 >> 0x20);
              puVar10 = puVar6;
            }
            *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | (local_40 + 1) * 0x100;
            iVar13 = local_40 + 2;
            local_40 = ((int)puVar10 + 3) - iVar9;
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
            uVar15 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar15 << (uVar11 & 0xff) |
                     uVar15 >> (uVar3 & 0xff);
            uVar15 = uVar16 >> 8;
            if (*(int *)(iVar14 + uVar15 * 4) != 0) {
joined_r0x017ab1e0:
              if (puVar8 < (uint *)((int)puVar10 + 5U)) {
                return 0;
              }
              puVar6 = (uint *)((int)puVar10 + 3);
              uVar16 = *(uint *)((int)puVar10 + 3);
              iVar13 = *(int *)((int)puVar10 + 7);
              goto LAB_017ab1a0;
            }
            *(uint *)(iVar14 + uVar15 * 4) = uVar16 & 0xff | iVar13 * 0x100;
            if (puVar8 < (uint *)((int)puVar10 + 5)) {
              return 0;
            }
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 3) * 0xb7a56463;
            uVar15 = (uint)lVar1;
            uVar16 = *(int *)((int)puVar10 + 7) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 3) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            puVar10 = (uint *)((int)puVar10 + 3);
          } while( true );
        }
        do {
          while( true ) {
            uVar15 = uVar15 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                     uVar16 >> (uVar20 & 0xff);
            uVar16 = uVar3 * -0x45000000 + uVar11 * -0x30e44324 +
                     (int)((ulonglong)uVar11 * 0xbb000000 >> 0x20);
            uVar11 = (uint)((ulonglong)uVar11 * 0xbb000000) >> (0x38U - iVar2 & 0xff) |
                     uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
            uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar19 & 0xff) |
                     uVar16 >> (uVar20 & 0xff);
            *(uint *)(iVar4 + (uVar11 >> 8) * 4) = uVar11 & 0xff | local_40 << 8;
            *(uint *)(iVar14 + (uVar15 >> 8) * 4) = uVar15 & 0xff | local_40 << 8;
            uVar11 = uVar16 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) break;
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
            uVar11 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
            }
LAB_017a9d08:
            if (puVar8 < (uint *)((int)puVar10 + 5)) {
              return 0;
            }
            uVar11 = *(uint *)((int)puVar10 + 3);
            uVar3 = *(uint *)((int)puVar10 + 7);
            local_40 = ((int)puVar10 + 3) - iVar9;
            uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
            uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                     (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
            puVar10 = (uint *)((int)puVar10 + 3);
          }
          uVar15 = *(uint *)((int)puVar10 + 2);
          iVar13 = *(int *)((int)puVar10 + 6);
          *(uint *)(iVar14 + uVar11 * 4) = uVar16 & 0xff | (local_40 + 1) * 0x100;
          lVar1 = (ulonglong)uVar15 * 0xb7a56463;
          uVar11 = iVar13 * -0x485a9b9d + uVar15 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                   uVar11 >> (uVar20 & 0xff);
          uVar11 = uVar15 >> 8;
          if (*(int *)(iVar14 + uVar11 * 4) == 0) {
            *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (local_40 + 2) * 0x100;
            goto LAB_017a9d08;
          }
          if (puVar8 < (uint *)((int)puVar10 + 5)) {
            return 0;
          }
          iVar13 = (int)puVar10 + (3 - iVar9);
          uVar3 = *(uint *)((int)puVar10 + 3);
          lVar1 = (ulonglong)puVar10[1] * 0xb7a56463;
          uVar11 = puVar10[2] * -0x485a9b9d + puVar10[1] * -0x30e44324 +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                   uVar11 >> (uVar20 & 0xff);
          uVar11 = uVar15 >> 8;
          uVar16 = *(int *)((int)puVar10 + 7) * -0x45000000 + uVar3 * -0x30e44324 +
                   (int)((ulonglong)uVar3 * 0xbb000000 >> 0x20);
          uVar16 = (uint)((ulonglong)uVar3 * 0xbb000000) >> (0x38U - iVar2 & 0xff) |
                   uVar16 << (iVar2 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar2 & 0xff);
          uVar7 = *(int *)((int)puVar10 + 7) * -0x485a9b9d + uVar3 * -0x30e44324 +
                  (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
          uVar3 = (uint)((ulonglong)uVar3 * 0xb7a56463) >> (uVar5 & 0xff) | uVar7 << (uVar19 & 0xff)
                  | uVar7 >> (uVar20 & 0xff);
          *(uint *)(iVar4 + (uVar16 >> 8) * 4) = uVar16 & 0xff | iVar13 * 0x100;
          *(uint *)(iVar14 + (uVar3 >> 8) * 4) = uVar3 & 0xff | iVar13 * 0x100;
          if (*(int *)(iVar14 + uVar11 * 4) == 0) {
            uVar16 = *(uint *)((int)puVar10 + 5);
            iVar17 = *(int *)((int)puVar10 + 9);
            *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 1) * 0x100;
            lVar1 = (ulonglong)uVar16 * 0xb7a56463;
            uVar11 = iVar17 * -0x485a9b9d + uVar16 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
            }
          }
          else {
            lVar1 = (ulonglong)*(uint *)((int)puVar10 + 5) * 0xb7a56463;
            uVar11 = *(int *)((int)puVar10 + 9) * -0x485a9b9d +
                     *(uint *)((int)puVar10 + 5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
            uVar15 = (uint)lVar1 >> (uVar5 & 0xff) | uVar11 << (uVar19 & 0xff) |
                     uVar11 >> (uVar20 & 0xff);
            uVar11 = uVar15 >> 8;
            if (*(int *)(iVar14 + uVar11 * 4) == 0) {
              *(uint *)(iVar14 + uVar11 * 4) = uVar15 & 0xff | (iVar13 + 2) * 0x100;
            }
          }
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          uVar11 = *(uint *)((int)puVar10 + 6);
          uVar3 = *(uint *)((int)puVar10 + 10);
          local_40 = ((int)puVar10 + 6) - iVar9;
          uVar15 = (uint)((ulonglong)uVar11 * 0xb7a56463);
          uVar16 = uVar3 * -0x485a9b9d + uVar11 * -0x30e44324 +
                   (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        } while( true );
      }
      if (iVar13 == 5) {
        do {
          uVar16 = *puVar10;
          puVar6 = (uint *)((int)puVar10 + 5);
          uVar11 = ((int)puVar10 - iVar9) * 0x100;
          uVar15 = puVar10[1] * -0x45000000 + uVar16 * -0x30e44324 +
                   (int)((ulonglong)uVar16 * 0xbb000000 >> 0x20);
          uVar15 = (uint)((ulonglong)uVar16 * 0xbb000000) >> (0x38U - iVar2 & 0xff) |
                   uVar15 << (iVar2 - 0x18U & 0xff) | uVar15 >> (0x18U - iVar2 & 0xff);
          uVar3 = puVar10[1] * -0x485a9b9d + uVar16 * -0x30e44324 +
                  (int)((ulonglong)uVar16 * 0xb7a56463 >> 0x20);
          uVar16 = (uint)((ulonglong)uVar16 * 0xb7a56463) >> (uVar5 & 0xff) |
                   uVar3 << (0x20 - uVar5 & 0xff) | uVar3 >> (iVar17 + 0x18U & 0xff);
          *(uint *)(iVar4 + (uVar15 >> 8) * 4) = uVar15 & 0xff | uVar11;
          *(uint *)(iVar14 + (uVar16 >> 8) * 4) = uVar16 & 0xff | uVar11;
          puVar10 = (uint *)((int)puVar10 + 3);
        } while (puVar6 <= puVar8);
      }
      else if (iVar13 == 6) {
        do {
          uVar16 = *puVar10;
          puVar6 = (uint *)((int)puVar10 + 5);
          uVar11 = ((int)puVar10 - iVar9) * 0x100;
          uVar15 = puVar10[1] * -0x40650000 + uVar16 * -0x30e44324 +
                   (int)((ulonglong)uVar16 * 0xbf9b0000 >> 0x20);
          uVar15 = (uint)((ulonglong)uVar16 * 0xbf9b0000) >> (0x38U - iVar2 & 0xff) |
                   uVar15 << (iVar2 - 0x18U & 0xff) | uVar15 >> (0x18U - iVar2 & 0xff);
          uVar3 = puVar10[1] * -0x485a9b9d + uVar16 * -0x30e44324 +
                  (int)((ulonglong)uVar16 * 0xb7a56463 >> 0x20);
          uVar16 = (uint)((ulonglong)uVar16 * 0xb7a56463) >> (uVar5 & 0xff) |
                   uVar3 << (0x20 - uVar5 & 0xff) | uVar3 >> (iVar17 + 0x18U & 0xff);
          *(uint *)(iVar4 + (uVar15 >> 8) * 4) = uVar15 & 0xff | uVar11;
          *(uint *)(iVar14 + (uVar16 >> 8) * 4) = uVar16 & 0xff | uVar11;
          puVar10 = (uint *)((int)puVar10 + 3);
        } while (puVar6 <= puVar8);
      }
      else {
        uVar11 = 0x18 - iVar2;
        do {
          uVar3 = *puVar10;
          uVar16 = (uint)((ulonglong)uVar3 * 0xb7a56463);
          uVar15 = puVar10[1] * -0x485a9b9d + uVar3 * -0x30e44324 +
                   (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
          if (iVar13 == 7) {
            uVar19 = puVar10[1] * -0x405a9d00 + uVar3 * -0x30e44324 +
                     (int)((ulonglong)uVar3 * 0xbfa56300 >> 0x20);
            uVar3 = (uint)((ulonglong)uVar3 * 0xbfa56300) >> (0x38U - iVar2 & 0xff) |
                    uVar19 << (iVar2 - 0x18U & 0xff) | uVar19 >> (uVar11 & 0xff);
          }
          else if (iVar13 == 8) {
            uVar3 = uVar16 >> (0x38U - iVar2 & 0xff) | uVar15 << (iVar2 - 0x18U & 0xff) |
                    uVar15 >> (uVar11 & 0xff);
          }
          else {
            uVar3 = uVar3 * -0x61c8864f >> (uVar11 & 0xff);
          }
          uVar19 = ((int)puVar10 - iVar9) * 0x100;
          uVar15 = uVar16 >> (uVar5 & 0xff) | uVar15 << (0x20 - uVar5 & 0xff) |
                   uVar15 >> (iVar17 + 0x18U & 0xff);
          *(uint *)(iVar4 + (uVar3 >> 8) * 4) = uVar3 & 0xff | uVar19;
          *(uint *)(iVar14 + (uVar15 >> 8) * 4) = uVar15 & 0xff | uVar19;
          puVar6 = (uint *)((int)puVar10 + 5);
          puVar10 = (uint *)((int)puVar10 + 3);
        } while (puVar6 <= puVar8);
      }
    }
  }
  else if ((uint *)((int)puVar10 + 2) <= puVar8) {
    iVar17 = -*(int *)(param_1 + 0xc0);
    uVar5 = iVar17 + 0x40;
    if (param_3 == 0) {
      uVar15 = *puVar10;
      uVar3 = puVar10[1];
      uVar16 = (uint)((ulonglong)uVar15 * 0xb7a56463);
      uVar11 = uVar3 * -0x485a9b9d + uVar15 * -0x30e44324 +
               (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
      switch(iVar13) {
      case 5:
        while( true ) {
          uVar3 = uVar3 * -0x45000000 + uVar15 * -0x30e44324 +
                  (int)((ulonglong)uVar15 * 0xbb000000 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbb000000) >> (0x40U - iVar2 & 0xff) |
                            uVar3 << (iVar2 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar2 & 0xff)) * 4)
               = local_40;
          *(int *)(iVar14 + (uVar16 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = local_40;
          if (puVar8 < (uint *)((int)puVar10 + 5)) break;
          uVar15 = *(uint *)((int)puVar10 + 3);
          iVar13 = (int)puVar10 + (3 - iVar9);
          iVar18 = *(int *)((int)puVar10 + 7);
          local_40 = ((int)puVar10 + 6) - iVar9;
          uVar11 = iVar18 * -0x45000000 + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xbb000000 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbb000000) >> (0x40U - iVar2 & 0xff) |
                            uVar11 << (iVar2 - 0x20U & 0xff) | uVar11 >> (0x20U - iVar2 & 0xff)) * 4
                  ) = iVar13;
          uVar11 = iVar18 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          *(int *)(iVar14 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar5 & 0xff) |
                             uVar11 << (0x20 - uVar5 & 0xff) | uVar11 >> (iVar17 + 0x20U & 0xff)) *
                            4) = iVar13;
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          uVar15 = *(uint *)((int)puVar10 + 6);
          uVar3 = *(uint *)((int)puVar10 + 10);
          uVar16 = (uint)((ulonglong)uVar15 * 0xb7a56463);
          uVar11 = uVar3 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        }
        break;
      case 6:
        while( true ) {
          uVar3 = uVar3 * -0x40650000 + uVar15 * -0x30e44324 +
                  (int)((ulonglong)uVar15 * 0xbf9b0000 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbf9b0000) >> (0x40U - iVar2 & 0xff) |
                            uVar3 << (iVar2 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar2 & 0xff)) * 4)
               = local_40;
          *(int *)(iVar14 + (uVar16 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = local_40;
          if (puVar8 < (uint *)((int)puVar10 + 5)) break;
          uVar15 = *(uint *)((int)puVar10 + 3);
          iVar13 = (int)puVar10 + (3 - iVar9);
          iVar18 = *(int *)((int)puVar10 + 7);
          local_40 = ((int)puVar10 + 6) - iVar9;
          uVar11 = iVar18 * -0x40650000 + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xbf9b0000 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbf9b0000) >> (0x40U - iVar2 & 0xff) |
                            uVar11 << (iVar2 - 0x20U & 0xff) | uVar11 >> (0x20U - iVar2 & 0xff)) * 4
                  ) = iVar13;
          uVar11 = iVar18 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          *(int *)(iVar14 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar5 & 0xff) |
                             uVar11 << (0x20 - uVar5 & 0xff) | uVar11 >> (iVar17 + 0x20U & 0xff)) *
                            4) = iVar13;
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          uVar15 = *(uint *)((int)puVar10 + 6);
          uVar3 = *(uint *)((int)puVar10 + 10);
          uVar16 = (uint)((ulonglong)uVar15 * 0xb7a56463);
          uVar11 = uVar3 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        }
        break;
      case 7:
        while( true ) {
          uVar3 = uVar3 * -0x405a9d00 + uVar15 * -0x30e44324 +
                  (int)((ulonglong)uVar15 * 0xbfa56300 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbfa56300) >> (0x40U - iVar2 & 0xff) |
                            uVar3 << (iVar2 - 0x20U & 0xff) | uVar3 >> (0x20U - iVar2 & 0xff)) * 4)
               = local_40;
          *(int *)(iVar14 + (uVar16 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = local_40;
          if (puVar8 < (uint *)((int)puVar10 + 5)) break;
          uVar15 = *(uint *)((int)puVar10 + 3);
          iVar13 = (int)puVar10 + (3 - iVar9);
          iVar18 = *(int *)((int)puVar10 + 7);
          local_40 = ((int)puVar10 + 6) - iVar9;
          uVar11 = iVar18 * -0x405a9d00 + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xbfa56300 >> 0x20);
          *(int *)(iVar4 + ((uint)((ulonglong)uVar15 * 0xbfa56300) >> (0x40U - iVar2 & 0xff) |
                            uVar11 << (iVar2 - 0x20U & 0xff) | uVar11 >> (0x20U - iVar2 & 0xff)) * 4
                  ) = iVar13;
          uVar11 = iVar18 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          *(int *)(iVar14 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar5 & 0xff) |
                             uVar11 << (0x20 - uVar5 & 0xff) | uVar11 >> (iVar17 + 0x20U & 0xff)) *
                            4) = iVar13;
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          uVar15 = *(uint *)((int)puVar10 + 6);
          uVar3 = *(uint *)((int)puVar10 + 10);
          uVar16 = (uint)((ulonglong)uVar15 * 0xb7a56463);
          uVar11 = uVar3 * -0x485a9b9d + uVar15 * -0x30e44324 +
                   (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        }
        break;
      case 8:
        while( true ) {
          *(int *)(iVar4 + (uVar16 >> (0x40U - iVar2 & 0xff) | uVar11 << (iVar2 - 0x20U & 0xff) |
                           uVar11 >> (0x20U - iVar2 & 0xff)) * 4) = local_40;
          *(int *)(iVar14 + (uVar16 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = local_40;
          if (puVar8 < (uint *)((int)puVar10 + 5)) break;
          iVar13 = (int)puVar10 + (3 - iVar9);
          local_40 = ((int)puVar10 + 6) - iVar9;
          lVar1 = (ulonglong)*(uint *)((int)puVar10 + 3) * 0xb7a56463;
          uVar15 = (uint)lVar1;
          uVar11 = *(int *)((int)puVar10 + 7) * -0x485a9b9d +
                   *(uint *)((int)puVar10 + 3) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          *(int *)(iVar4 + (uVar15 >> (0x40U - iVar2 & 0xff) | uVar11 << (iVar2 - 0x20U & 0xff) |
                           uVar11 >> (0x20U - iVar2 & 0xff)) * 4) = iVar13;
          *(int *)(iVar14 + (uVar15 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = iVar13;
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          lVar1 = (ulonglong)*(uint *)((int)puVar10 + 6) * 0xb7a56463;
          uVar16 = (uint)lVar1;
          uVar11 = *(int *)((int)puVar10 + 10) * -0x485a9b9d +
                   *(uint *)((int)puVar10 + 6) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        }
        break;
      default:
        while( true ) {
          iVar13 = (int)puVar10 + (3 - iVar9);
          *(int *)(iVar4 + (*puVar10 * -0x61c8864f >> (0x20U - iVar2 & 0xff)) * 4) = local_40;
          *(int *)(iVar14 + (uVar16 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff) |
                            uVar11 >> (iVar17 + 0x20U & 0xff)) * 4) = local_40;
          if (puVar8 < (uint *)((int)puVar10 + 5U)) break;
          uVar11 = *(uint *)((int)puVar10 + 3);
          iVar18 = *(int *)((int)puVar10 + 7);
          local_40 = ((int)puVar10 + 6) - iVar9;
          *(int *)(iVar4 + (uVar11 * -0x61c8864f >> (0x20U - iVar2 & 0xff)) * 4) = iVar13;
          uVar15 = iVar18 * -0x485a9b9d + uVar11 * -0x30e44324 +
                   (int)((ulonglong)uVar11 * 0xb7a56463 >> 0x20);
          *(int *)(iVar14 + ((uint)((ulonglong)uVar11 * 0xb7a56463) >> (uVar5 & 0xff) |
                             uVar15 << (0x20 - uVar5 & 0xff) | uVar15 >> (iVar17 + 0x20U & 0xff)) *
                            4) = iVar13;
          if (puVar8 < puVar10 + 2) {
            return 0;
          }
          lVar1 = (ulonglong)*(uint *)((int)puVar10 + 6) * 0xb7a56463;
          uVar16 = (uint)lVar1;
          uVar11 = *(int *)((int)puVar10 + 10) * -0x485a9b9d +
                   *(uint *)((int)puVar10 + 6) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
          puVar10 = (uint *)((int)puVar10 + 6);
        }
      }
    }
    else if (iVar13 == 5) {
      uVar11 = 0x20 - uVar5;
      uVar15 = iVar17 + 0x20;
      do {
        uVar3 = *puVar10;
        uVar19 = puVar10[1];
        iVar13 = (int)puVar10 - iVar9;
        lVar1 = (ulonglong)*(uint *)((int)puVar10 + 1) * 0xb7a56463;
        uVar16 = *(int *)((int)puVar10 + 5) * -0x485a9b9d +
                 *(uint *)((int)puVar10 + 1) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                 uVar16 >> (uVar15 & 0xff);
        uVar16 = uVar19 * -0x45000000 + uVar3 * -0x30e44324 +
                 (int)((ulonglong)uVar3 * 0xbb000000 >> 0x20);
        *(int *)(iVar4 + ((uint)((ulonglong)uVar3 * 0xbb000000) >> (0x40U - iVar2 & 0xff) |
                          uVar16 << (iVar2 - 0x20U & 0xff) | uVar16 >> (0x20U - iVar2 & 0xff)) * 4)
             = iVar13;
        uVar16 = uVar19 * -0x485a9b9d + uVar3 * -0x30e44324 +
                 (int)((ulonglong)uVar3 * 0xb7a56463 >> 0x20);
        *(int *)(iVar14 + ((uint)((ulonglong)uVar3 * 0xb7a56463) >> (uVar5 & 0xff) |
                           uVar16 << (uVar11 & 0xff) | uVar16 >> (uVar15 & 0xff)) * 4) = iVar13;
        if (*(int *)(iVar14 + uVar20 * 4) == 0) {
          *(int *)(iVar14 + uVar20 * 4) = iVar13 + 1;
        }
        lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
        uVar16 = *(int *)((int)puVar10 + 6) * -0x485a9b9d +
                 *(uint *)((int)puVar10 + 2) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar16 = (uint)lVar1 >> (uVar5 & 0xff) | uVar16 << (uVar11 & 0xff) |
                 uVar16 >> (uVar15 & 0xff);
        if (*(int *)(iVar14 + uVar16 * 4) == 0) {
          *(int *)(iVar14 + uVar16 * 4) = iVar13 + 2;
        }
        puVar6 = (uint *)((int)puVar10 + 5);
        puVar10 = (uint *)((int)puVar10 + 3);
      } while (puVar6 <= puVar8);
    }
    else {
      uVar11 = 0x20 - uVar5;
      uVar15 = iVar17 + 0x20;
      uVar16 = 0x20 - iVar2;
      do {
        uVar19 = *puVar10;
        iVar17 = (int)puVar10 - iVar9;
        uVar3 = (uint)((ulonglong)uVar19 * 0xb7a56463);
        uVar20 = puVar10[1] * -0x485a9b9d + uVar19 * -0x30e44324 +
                 (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
        if (iVar13 == 7) {
          uVar7 = 0xbfa56300;
LAB_017a9728:
          uVar12 = uVar7 * puVar10[1] + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar7 * (ulonglong)uVar19 >> 0x20);
          uVar19 = (uint)((ulonglong)uVar7 * (ulonglong)uVar19) >> (0x40U - iVar2 & 0xff) |
                   uVar12 << (iVar2 - 0x20U & 0xff) | uVar12 >> (uVar16 & 0xff);
        }
        else if (iVar13 == 8) {
          uVar19 = uVar3 >> (0x40U - iVar2 & 0xff) | uVar20 << (iVar2 - 0x20U & 0xff) |
                   uVar20 >> (uVar16 & 0xff);
        }
        else {
          if (iVar13 == 6) {
            uVar7 = 0xbf9b0000;
            goto LAB_017a9728;
          }
          uVar19 = uVar19 * -0x61c8864f >> (uVar16 & 0xff);
        }
        iVar18 = *(int *)((int)puVar10 + 5);
        *(int *)(iVar4 + uVar19 * 4) = iVar17;
        uVar19 = *(uint *)((int)puVar10 + 1);
        *(int *)(iVar14 + (uVar3 >> (uVar5 & 0xff) | uVar20 << (uVar11 & 0xff) |
                          uVar20 >> (uVar15 & 0xff)) * 4) = iVar17;
        lVar1 = (ulonglong)uVar19 * 0xb7a56463;
        uVar3 = iVar18 * -0x485a9b9d + uVar19 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar3 = (uint)lVar1 >> (uVar5 & 0xff) | uVar3 << (uVar11 & 0xff) | uVar3 >> (uVar15 & 0xff);
        iVar18 = *(int *)((int)puVar10 + 6);
        if (*(int *)(iVar14 + uVar3 * 4) == 0) {
          *(int *)(iVar14 + uVar3 * 4) = iVar17 + 1;
        }
        lVar1 = (ulonglong)*(uint *)((int)puVar10 + 2) * 0xb7a56463;
        uVar3 = iVar18 * -0x485a9b9d + *(uint *)((int)puVar10 + 2) * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar3 = (uint)lVar1 >> (uVar5 & 0xff) | uVar3 << (uVar11 & 0xff) | uVar3 >> (uVar15 & 0xff);
        if (*(int *)(iVar14 + uVar3 * 4) == 0) {
          *(int *)(iVar14 + uVar3 * 4) = iVar17 + 2;
        }
        puVar6 = (uint *)((int)puVar10 + 5);
        puVar10 = (uint *)((int)puVar10 + 3);
      } while (puVar6 <= puVar8);
    }
  }
  return 0;
}

