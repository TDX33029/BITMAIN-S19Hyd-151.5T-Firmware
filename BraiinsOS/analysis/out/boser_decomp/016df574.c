// FUN_016df574 @ 016df574 size=692 calls_out=6 calls_in=2
// strings: 

void FUN_016df574(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint local_44;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 **local_34;
  code *local_30;
  undefined1 **local_2c;
  code *local_28;
  
  if ((char)param_1[3] == '\0') {
    uVar6 = param_1[2];
    if (uVar6 != 0) {
      uVar10 = 0;
      uVar13 = uVar6;
      do {
        if (uVar13 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar10,uVar13,&DAT_01d18828);
        }
        uVar1 = param_1[1];
        puVar2 = (undefined4 *)(uVar1 + uVar10 * 8);
        puVar14 = (undefined1 *)*puVar2;
        puVar11 = (undefined1 *)puVar2[1];
        iVar3 = FUN_016f3f64(&DAT_01d0a4c8,0xb7a,puVar14,puVar11);
        if (iVar3 != 0) {
          uVar4 = ((uint)puVar11 ^ 0xd800) - 0x110000;
          puVar5 = puVar11;
          if (uVar4 < 0xffef0800) {
            puVar5 = &DAT_00110000;
          }
          local_44 = 0;
          local_38 = &DAT_00110000;
          do {
            if (puVar11 < puVar14) break;
            do {
              puVar15 = puVar14;
              if (puVar11 == puVar15) {
                puVar14 = puVar11;
                puVar17 = puVar5;
                if (uVar4 < 0xffef0800) goto LAB_016df790;
                goto LAB_016df674;
              }
              puVar14 = puVar15 + 1;
            } while (((uint)puVar15 ^ 0xd800) - 0x110000 < 0xffef0800);
            puVar17 = puVar15;
LAB_016df674:
            if ((local_38 != &DAT_00110000) && (puVar17 <= local_38)) {
              local_2c = &local_38;
              local_34 = &local_3c;
              local_28 = FUN_012fdbc0;
              local_30 = FUN_012fdbc0;
              local_3c = puVar17;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005aa7f4,&local_34,&DAT_01d16ae8);
            }
            if (local_44 < 0xb7a) {
              puVar2 = (undefined4 *)(&DAT_01d0a4c8 + local_44 * 0xc);
              if ((undefined1 *)*puVar2 != puVar17) {
                uVar16 = 0;
                uVar7 = 0xb7a;
                do {
                  uVar9 = uVar16 + (uVar7 >> 1);
                  uVar7 = uVar7 - (uVar7 >> 1);
                  if (*(undefined1 **)(&DAT_01d0a4c8 + uVar9 * 0xc) <= puVar17) {
                    uVar16 = uVar9;
                  }
                } while (1 < uVar7);
                if (*(undefined1 **)(&DAT_01d0a4c8 + uVar16 * 0xc) != puVar17) {
                  if (*(undefined1 **)(&DAT_01d0a4c8 + uVar16 * 0xc) < puVar17) {
                    uVar16 = uVar16 + 1;
                  }
                  local_44 = uVar16;
                  goto LAB_016df77c;
                }
                if (uVar16 <= local_44) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_004ea1f3,0x1f,&DAT_01d16af8);
                }
                puVar2 = (undefined4 *)(&DAT_01d0a4c8 + uVar16 * 0xc);
                local_44 = uVar16;
              }
              local_44 = local_44 + 1;
              if (puVar2[2] != 0) {
                uVar16 = uVar13 << 3 | 4;
                iVar3 = puVar2[2] << 2;
                puVar2 = (undefined4 *)puVar2[1];
                do {
                  uVar12 = *puVar2;
                  if (uVar13 == *param_1) {
                    FUN_015f5ab8();
                    uVar1 = param_1[1];
                  }
                  uVar13 = uVar13 + 1;
                  param_1[2] = uVar13;
                  iVar3 = iVar3 + -4;
                  puVar8 = (undefined4 *)(uVar1 + uVar16);
                  *puVar8 = uVar12;
                  uVar16 = uVar16 + 8;
                  puVar8[-1] = uVar12;
                  puVar2 = puVar2 + 1;
                } while (iVar3 != 0);
              }
            }
LAB_016df77c:
            local_38 = puVar17;
          } while (puVar11 != puVar15);
        }
LAB_016df790:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar6);
    }
    FUN_016f5e30();
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}

