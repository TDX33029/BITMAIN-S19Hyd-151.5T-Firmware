// FUN_016009c0 @ 016009c0 size=2740 calls_out=9 calls_in=1
// strings: 

void FUN_016009c0(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  puVar14 = (undefined4 *)*param_2;
  if (puVar14 != (undefined4 *)0x0) {
    uVar20 = param_3[2];
    puVar25 = (undefined4 *)param_3[1];
    iVar21 = param_2[1];
    do {
      puVar23 = puVar14 + 1;
      uVar1 = *(ushort *)((int)puVar14 + 0x10e);
      puVar3 = (undefined4 *)(uint)uVar1;
      puVar12 = (undefined4 *)0xffffffff;
      iVar18 = (int)puVar3 * 0xc;
      puVar9 = puVar23;
      do {
        if (iVar18 == 0) {
          puVar12 = puVar3;
          goto LAB_01600a94;
        }
        uVar15 = puVar9[2];
        uVar24 = uVar15;
        if (uVar20 < uVar15) {
          uVar24 = uVar20;
        }
        iVar4 = FUN_016dd50a(puVar25,puVar9[1],uVar24);
        if (iVar4 == 0) {
          iVar4 = uVar20 - uVar15;
        }
        iVar18 = iVar18 + -0xc;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar9 = puVar9 + 3;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) {
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(puVar25);
        }
        goto LAB_01600ac8;
      }
LAB_01600a94:
      if (iVar21 == 0) goto LAB_01600b8c;
      iVar21 = iVar21 + -1;
      puVar14 = (undefined4 *)puVar14[(int)(puVar12 + 0x11)];
    } while( true );
  }
  iVar21 = *param_3;
  puVar14 = (undefined4 *)param_3[1];
  if (iVar21 != -0x80000000) {
    iVar18 = param_3[2];
    uVar6 = *param_4;
    uVar10 = param_4[1];
    uVar13 = param_4[2];
    puVar25 = (undefined4 *)thunk_FUN_016d4a50(0x110);
    if (puVar25 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x110);
    }
    *(undefined2 *)((int)puVar25 + 0x10e) = 1;
    *param_2 = puVar25;
    param_2[1] = 0;
    *puVar25 = 0;
    puVar25[1] = iVar21;
    puVar25[2] = puVar14;
    puVar25[0x22] = uVar6;
    puVar25[0x23] = uVar10;
    puVar25[0x24] = uVar13;
    puVar25[3] = iVar18;
    goto LAB_01600b70;
  }
LAB_01600ae4:
  uVar19 = param_4[1];
  uVar16 = param_4[2];
  uVar6 = puVar14[(int)param_2 * 3 + 0x22];
  uVar10 = puVar14[(int)param_2 * 3 + 0x23];
  uVar13 = puVar14[(int)param_2 * 3 + 0x24];
  puVar14[(int)param_2 * 3 + 0x22] = *param_4;
  puVar14[(int)param_2 * 3 + 0x23] = uVar19;
  puVar14[(int)param_2 * 3 + 0x24] = uVar16;
  *param_1 = uVar6;
  param_1[1] = uVar10;
  param_1[2] = uVar13;
  return;
LAB_01600b8c:
  iVar21 = *param_3;
  if (iVar21 != -0x80000000) {
    puVar11 = (ushort *)((int)puVar14 + 0x10e);
    uVar13 = *param_4;
    uVar6 = param_4[1];
    uVar10 = param_4[2];
    if (puVar3 < &DAT_0000000b) {
      piVar17 = puVar23 + (int)puVar12 * 3;
      if (puVar12 < puVar3) {
        iVar18 = ((int)puVar3 - (int)puVar12) * 0xc;
        FUN_016dd52c(puVar23 + (int)puVar12 * 3 + 3,piVar17,iVar18);
        FUN_016dd52c(puVar14 + (int)puVar12 * 3 + 0x25,puVar14 + (int)puVar12 * 3 + 0x22,iVar18);
      }
      *piVar17 = iVar21;
      piVar17[1] = (int)puVar25;
      piVar17[2] = uVar20;
      puVar14[(int)puVar12 * 3 + 0x22] = uVar13;
      puVar14[(int)puVar12 * 3 + 0x23] = uVar6;
      puVar14[(int)puVar12 * 3 + 0x24] = uVar10;
      *puVar11 = uVar1 + 1;
    }
    else {
      uVar24 = 4;
      if (&DAT_00000004 < puVar12) {
        if (puVar12 == (undefined4 *)&DAT_00000005) {
          bVar2 = false;
          uVar24 = 5;
        }
        else {
          if (puVar12 == (undefined4 *)&DAT_00000006) {
            uVar24 = 5;
            puVar12 = (undefined4 *)0x0;
          }
          else {
            puVar12 = (undefined4 *)((int)puVar12 + -7);
            uVar24 = 6;
          }
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      local_70 = (undefined4 *)thunk_FUN_016d4a50(0x110);
      if (local_70 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x110);
      }
      *local_70 = 0;
      piVar17 = puVar23 + uVar24 * 3;
      iVar4 = *piVar17;
      puVar9 = puVar14 + uVar24 * 3 + 0x22;
      local_68 = *puVar9;
      uVar15 = (uint)*puVar11 + ~uVar24;
      local_6c = puVar9[1];
      *(short *)((int)local_70 + 0x10e) = (short)uVar15;
      iVar18 = piVar17[1];
      if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar15,0xb,&DAT_018ab358);
      }
      local_78 = piVar17[2];
      local_74 = puVar9[2];
      FUN_016dd1aa(local_70 + 1,puVar23 + uVar24 * 3 + 3,uVar15 * 0xc);
      FUN_016dd1aa(local_70 + 0x22,puVar14 + uVar24 * 3 + 0x25,uVar15 * 0xc);
      *puVar11 = (ushort)uVar24;
      puVar9 = local_70;
      if (!bVar2) {
        puVar9 = puVar14;
      }
      piVar17 = puVar9 + (int)puVar12 * 3 + 1;
      uVar1 = *(ushort *)((int)puVar9 + 0x10e);
      if (puVar12 < (undefined4 *)(uint)uVar1) {
        iVar22 = ((int)(uint)uVar1 - (int)puVar12) * 0xc;
        FUN_016dd52c(puVar9 + (int)puVar12 * 3 + 4,piVar17,iVar22);
        FUN_016dd52c(puVar9 + (int)puVar12 * 3 + 0x25,puVar9 + (int)puVar12 * 3 + 0x22,iVar22);
      }
      *piVar17 = iVar21;
      piVar17[1] = (int)puVar25;
      puVar9[(int)puVar12 * 3 + 0x22] = uVar13;
      puVar9[(int)puVar12 * 3 + 0x23] = uVar6;
      puVar9[(int)puVar12 * 3 + 0x24] = uVar10;
      *(ushort *)((int)puVar9 + 0x10e) = uVar1 + 1;
      piVar17[2] = uVar20;
      if (iVar4 != -0x80000000) {
        local_7c = 0;
        do {
          puVar25 = (undefined4 *)*puVar14;
          if (puVar25 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)*param_2;
            if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ab2e8);
            }
            uVar20 = param_2[1];
            puVar25 = (undefined4 *)thunk_FUN_016d4a50(0x140);
            if (puVar25 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x140);
            }
            puVar25[0x44] = puVar14;
            *puVar25 = 0;
            *(undefined2 *)((int)puVar25 + 0x10e) = 0;
            if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ab318);
            }
            *param_2 = puVar25;
            param_2[1] = uVar20 + 1;
            *puVar14 = puVar25;
            *(undefined2 *)(puVar14 + 0x43) = 0;
            if (local_7c != uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00413115,0x30,&DAT_018ab308);
            }
            puVar25[0x22] = local_68;
            puVar25[0x23] = local_6c;
            puVar25[0x45] = local_70;
            puVar25[0x24] = local_74;
            *local_70 = puVar25;
            puVar25[3] = local_78;
            *(undefined2 *)(local_70 + 0x43) = 1;
            puVar25[1] = iVar4;
            puVar25[2] = iVar18;
            *(undefined2 *)((int)puVar25 + 0x10e) = 1;
            break;
          }
          puVar11 = (ushort *)((int)puVar25 + 0x10e);
          uVar24 = (uint)*puVar11;
          uVar20 = (uint)*(ushort *)(puVar14 + 0x43);
          if (uVar24 < 0xb) {
            uVar15 = uVar20 + 1;
            piVar17 = puVar25 + uVar20 * 3 + 1;
            if (uVar20 < uVar24) {
              iVar21 = (uVar24 - uVar20) * 0xc;
              FUN_016dd52c(puVar25 + uVar15 * 3 + 1,piVar17,iVar21);
              FUN_016dd52c(puVar25 + uVar15 * 3 + 0x22,puVar25 + uVar20 * 3 + 0x22,iVar21);
            }
            piVar17[1] = iVar18;
            piVar17[2] = local_78;
            *piVar17 = iVar4;
            puVar25[uVar20 * 3 + 0x22] = local_68;
            puVar25[uVar20 * 3 + 0x23] = local_6c;
            puVar25[uVar20 * 3 + 0x24] = local_74;
            if (uVar20 < uVar24) {
              FUN_016dd52c(puVar25 + uVar20 + 0x46,puVar25 + uVar20 + 0x45,(uVar24 - uVar20) * 4);
            }
            puVar25[uVar20 + 0x45] = local_70;
            *puVar11 = (ushort)(uVar24 + 1);
            if (uVar15 < uVar24 + 2) {
              do {
                puVar14 = (undefined4 *)puVar25[uVar20 + 0x45];
                uVar20 = uVar20 + 1;
                *puVar14 = puVar25;
                *(short *)(puVar14 + 0x43) = (short)uVar20;
              } while (uVar24 + 1 != uVar20);
            }
            break;
          }
          if (uVar20 < 5) {
            uVar15 = 4;
            bVar2 = false;
          }
          else if (uVar20 == 5) {
            bVar2 = false;
            uVar15 = 5;
          }
          else if (uVar20 == 6) {
            uVar20 = 0;
            uVar15 = 5;
            bVar2 = true;
          }
          else {
            uVar20 = uVar20 - 7;
            bVar2 = true;
            uVar15 = 6;
          }
          puVar12 = (undefined4 *)thunk_FUN_016d4a50(0x140);
          if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x140);
          }
          *puVar12 = 0;
          piVar17 = puVar25 + uVar15 * 3 + 1;
          iVar21 = *piVar17;
          uVar7 = (uint)*puVar11 + ~uVar15;
          *(ushort *)((int)puVar12 + 0x10e) = (ushort)uVar7;
          puVar14 = puVar25 + uVar15 * 3 + 0x22;
          uVar6 = *puVar14;
          iVar22 = piVar17[1];
          uVar10 = puVar14[1];
          if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar7,0xb,&DAT_018ab358);
          }
          iVar5 = piVar17[2];
          uVar13 = puVar14[2];
          FUN_016dd1aa(puVar12 + 1,puVar25 + uVar15 * 3 + 4);
          FUN_016dd1aa(puVar12 + 0x22,puVar25 + uVar15 * 3 + 0x25,uVar7 * 0xc);
          *puVar11 = (ushort)uVar15;
          uVar7 = (uint)*(ushort *)((int)puVar12 + 0x10e);
          iVar8 = uVar7 + 1;
          if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,iVar8,0xc,&DAT_018ab368);
          }
          if (uVar24 - uVar15 != iVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_004194bf,0x28,&DAT_018ab348);
          }
          local_7c = local_7c + 1;
          FUN_016dd1aa(puVar12 + 0x44,puVar25 + uVar15 + 0x45,iVar8 * 4);
          uVar24 = 0;
          do {
            puVar14 = (undefined4 *)(puVar12 + 0x44)[uVar24];
            *puVar14 = puVar12;
            *(short *)(puVar14 + 0x43) = (short)uVar24;
            if (uVar7 <= uVar24) break;
            uVar24 = uVar24 + 1;
          } while (uVar24 <= uVar7);
          uVar24 = uVar20 + 1;
          puVar14 = puVar12;
          if (!bVar2) {
            puVar14 = puVar25;
          }
          piVar17 = puVar14 + uVar20 * 3 + 1;
          uVar15 = (uint)*(ushort *)((int)puVar14 + 0x10e);
          if (uVar20 < uVar15) {
            FUN_016dd52c(puVar14 + uVar24 * 3 + 1,piVar17);
            *piVar17 = iVar4;
            piVar17[1] = iVar18;
            piVar17[2] = local_78;
            puVar9 = puVar14 + uVar20 * 3 + 0x22;
            FUN_016dd52c(puVar14 + uVar24 * 3 + 0x22,puVar9,(uVar15 - uVar20) * 0xc);
            puVar14[uVar20 * 3 + 0x22] = local_68;
            puVar9[1] = local_6c;
            puVar9[2] = local_74;
            FUN_016dd52c(puVar14 + uVar20 + 0x46,puVar14 + uVar20 + 0x45,(uVar15 - uVar20) * 4);
          }
          else {
            *piVar17 = iVar4;
            piVar17[1] = iVar18;
            piVar17[2] = local_78;
            puVar14[uVar20 * 3 + 0x22] = local_68;
            puVar14[uVar20 * 3 + 0x23] = local_6c;
            puVar14[uVar20 * 3 + 0x24] = local_74;
          }
          puVar14[uVar20 + 0x45] = local_70;
          *(ushort *)((int)puVar14 + 0x10e) = (ushort)(uVar15 + 1);
          if (uVar24 < uVar15 + 2) {
            do {
              uVar24 = uVar20 + 1;
              puVar9 = (undefined4 *)puVar14[uVar20 + 0x45];
              *puVar9 = puVar14;
              *(short *)(puVar9 + 0x43) = (short)uVar24;
              uVar20 = uVar24;
            } while (uVar15 + 1 != uVar24);
          }
          puVar14 = puVar25;
          iVar18 = iVar22;
          iVar4 = iVar21;
          local_78 = iVar5;
          local_74 = uVar13;
          local_70 = puVar12;
          local_6c = uVar10;
          local_68 = uVar6;
        } while (iVar21 != -0x80000000);
      }
    }
LAB_01600b70:
    iVar21 = param_2[2];
    *param_1 = 0x80000000;
    param_2[2] = iVar21 + 1;
    return;
  }
  puVar12 = param_2;
  puVar14 = puVar25;
LAB_01600ac8:
  param_2 = puVar12;
  goto LAB_01600ae4;
}

