// FUN_00c40da4 @ 00c40da4 size=2932 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c40da4(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  ushort *puVar21;
  uint uVar22;
  int local_74;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  int local_50;
  uint local_4c;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_44 = (undefined4 *)*param_2;
  if (local_44 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)param_3[1];
    uVar22 = param_3[2];
    iVar12 = param_2[1];
    do {
      puVar5 = local_44 + 1;
      uVar1 = *(ushort *)((int)local_44 + 0x10e);
      puVar20 = (undefined4 *)0xffffffff;
      iVar18 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar18 == 0) {
          puVar20 = (undefined4 *)(uint)uVar1;
          goto LAB_00c40e70;
        }
        uVar14 = puVar5[2];
        uVar19 = uVar14;
        if (uVar22 < uVar14) {
          uVar19 = uVar22;
        }
        iVar3 = FUN_016dd50a(puVar11,puVar5[1],uVar19);
        if (iVar3 == 0) {
          iVar3 = uVar22 - uVar14;
        }
        iVar18 = iVar18 + -0xc;
        puVar20 = (undefined4 *)((int)puVar20 + 1);
        puVar5 = puVar5 + 3;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        param_2 = puVar20;
        puVar5 = local_44;
        if (*param_3 != 0) {
          thunk_FUN_016d3fb4(puVar11);
        }
        goto LAB_00c40ec0;
      }
LAB_00c40e70:
      if (iVar12 == 0) goto LAB_00c40f54;
      iVar12 = iVar12 + -1;
      local_44 = (undefined4 *)local_44[(int)(puVar20 + 0x11)];
    } while( true );
  }
  iVar12 = *param_3;
  puVar5 = (undefined4 *)param_3[1];
  if (iVar12 != -0x80000000) {
    iVar18 = param_3[2];
    puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x110);
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x110);
    }
    uVar4 = *param_4;
    uVar10 = param_4[1];
    uVar6 = param_4[2];
    *(undefined2 *)((int)puVar11 + 0x10e) = 1;
    *param_2 = puVar11;
    param_2[1] = 0;
    *puVar11 = 0;
    puVar11[1] = iVar12;
    puVar11[2] = puVar5;
    puVar11[3] = iVar18;
    puVar11[0x22] = uVar4;
    puVar11[0x23] = uVar10;
    puVar11[0x24] = uVar6;
    goto LAB_00c40f38;
  }
LAB_00c40ec0:
  uVar4 = *param_4;
  uVar6 = param_4[1];
  uVar10 = param_4[2];
  uVar16 = puVar5[(int)param_2 * 3 + 0x23];
  uVar15 = puVar5[(int)param_2 * 3 + 0x24];
  *param_1 = puVar5[(int)param_2 * 3 + 0x22];
  param_1[1] = uVar16;
  param_1[2] = uVar15;
  puVar5[(int)param_2 * 3 + 0x22] = uVar4;
  puVar5[(int)param_2 * 3 + 0x23] = uVar6;
  puVar5[(int)param_2 * 3 + 0x24] = uVar10;
  return;
LAB_00c40f54:
  iVar12 = *param_3;
  puVar5 = puVar11;
  if (iVar12 != -0x80000000) {
    puVar21 = (ushort *)((int)local_44 + 0x10e);
    uVar1 = *puVar21;
    uVar19 = (uint)uVar1;
    if (uVar19 < 0xb) {
      uVar14 = (int)puVar20 + 1;
      piVar17 = local_44 + (int)puVar20 * 3 + 1;
      if (uVar19 < uVar14) {
        piVar17[1] = (int)puVar11;
        piVar17[2] = uVar22;
        local_40 = *param_4;
        local_3c = param_4[1];
        local_38 = param_4[2];
        *piVar17 = iVar12;
      }
      else {
        FUN_016dd52c(local_44 + uVar14 * 3 + 1,piVar17);
        *piVar17 = iVar12;
        piVar17[1] = (int)puVar11;
        piVar17[2] = uVar22;
        local_40 = *param_4;
        local_3c = param_4[1];
        local_38 = param_4[2];
        FUN_016dd52c(local_44 + uVar14 * 3 + 0x22,local_44 + (int)puVar20 * 3 + 0x22,
                     (uVar19 - (int)puVar20) * 0xc);
      }
      local_44[(int)puVar20 * 3 + 0x22] = local_40;
      local_44[(int)puVar20 * 3 + 0x23] = local_3c;
      local_44[(int)puVar20 * 3 + 0x24] = local_38;
      *puVar21 = uVar1 + 1;
    }
    else {
      uVar19 = 4;
      if (&DAT_00000004 < puVar20) {
        if (puVar20 == (undefined4 *)&DAT_00000005) {
          bVar2 = false;
          uVar19 = 5;
        }
        else {
          if (puVar20 == (undefined4 *)&DAT_00000006) {
            uVar19 = 5;
            puVar20 = (undefined4 *)0x0;
          }
          else {
            puVar20 = (undefined4 *)((int)puVar20 + -7);
            uVar19 = 6;
          }
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      local_5c = (undefined4 *)thunk_FUN_016d4a50(0x110);
      if (local_5c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x110);
      }
      *local_5c = 0;
      *(undefined2 *)((int)local_5c + 0x10e) = 0;
      piVar17 = local_44 + uVar19 * 3 + 1;
      local_50 = *piVar17;
      puVar5 = local_44 + uVar19 * 3 + 0x22;
      local_60 = *puVar5;
      uVar14 = (uint)*puVar21 + ~uVar19;
      *(undefined2 *)((int)local_5c + 0x10e) = (short)uVar14;
      local_68 = puVar5[1];
      iVar18 = piVar17[1];
      if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar14,0xb,&DAT_018ac47c);
      }
      local_64 = puVar5[2];
      iVar3 = piVar17[2];
      FUN_016dd1aa(local_5c + 1,local_44 + uVar19 * 3 + 4,uVar14 * 0xc);
      FUN_016dd1aa(local_5c + 0x22,local_44 + uVar19 * 3 + 0x25,uVar14 * 0xc);
      *puVar21 = (ushort)uVar19;
      puVar5 = local_5c;
      if (!bVar2) {
        puVar5 = local_44;
      }
      piVar17 = puVar5 + (int)puVar20 * 3 + 1;
      uVar1 = *(ushort *)((int)puVar5 + 0x10e);
      if (puVar20 < (undefined4 *)(uint)uVar1) {
        iVar8 = ((int)(uint)uVar1 - (int)puVar20) * 0xc;
        FUN_016dd52c(puVar5 + (int)puVar20 * 3 + 4,piVar17,iVar8);
        *piVar17 = iVar12;
        piVar17[1] = (int)puVar11;
        piVar17[2] = uVar22;
        local_40 = *param_4;
        local_3c = param_4[1];
        local_38 = param_4[2];
        FUN_016dd52c(puVar5 + (int)puVar20 * 3 + 0x25,puVar5 + (int)puVar20 * 3 + 0x22,iVar8);
      }
      else {
        *piVar17 = iVar12;
        piVar17[1] = (int)puVar11;
        piVar17[2] = uVar22;
        local_40 = *param_4;
        local_3c = param_4[1];
        local_38 = param_4[2];
      }
      puVar5[(int)puVar20 * 3 + 0x22] = local_40;
      puVar5[(int)puVar20 * 3 + 0x23] = local_3c;
      puVar5[(int)puVar20 * 3 + 0x24] = local_38;
      *(ushort *)((int)puVar5 + 0x10e) = uVar1 + 1;
      if (local_50 != -0x80000000) {
        if ((undefined4 *)*local_44 == (undefined4 *)0x0) {
          local_4c = 0;
        }
        else {
          local_4c = 0;
          puVar11 = (undefined4 *)*local_44;
          local_74 = iVar3;
          local_6c = iVar18;
          do {
            puVar20 = puVar11;
            puVar21 = (ushort *)((int)puVar20 + 0x10e);
            uVar19 = (uint)*puVar21;
            uVar22 = (uint)*(ushort *)(local_44 + 0x43);
            if (uVar19 < 0xb) {
              uVar14 = uVar22 + 1;
              piVar17 = puVar20 + uVar22 * 3 + 1;
              if (uVar22 < uVar19) {
                FUN_016dd52c(puVar20 + uVar14 * 3 + 1,piVar17);
                piVar17[1] = local_6c;
                piVar17[2] = local_74;
                *piVar17 = local_50;
                puVar11 = puVar20 + uVar22 * 3 + 0x22;
                FUN_016dd52c(puVar20 + uVar14 * 3 + 0x22,puVar11,(uVar19 - uVar22) * 0xc);
                puVar20[uVar22 * 3 + 0x22] = local_60;
                puVar11[1] = local_68;
                puVar11[2] = local_64;
                FUN_016dd52c(puVar20 + uVar22 + 0x46,puVar20 + uVar22 + 0x45,(uVar19 - uVar22) * 4);
              }
              else {
                piVar17[1] = local_6c;
                piVar17[2] = local_74;
                *piVar17 = local_50;
                puVar20[uVar22 * 3 + 0x22] = local_60;
                puVar20[uVar22 * 3 + 0x23] = local_68;
                puVar20[uVar22 * 3 + 0x24] = local_64;
              }
              *puVar21 = (ushort)(uVar19 + 1);
              puVar20[uVar22 + 0x45] = local_5c;
              if (uVar14 < uVar19 + 2) {
                do {
                  puVar11 = (undefined4 *)puVar20[uVar22 + 0x45];
                  uVar22 = uVar22 + 1;
                  *puVar11 = puVar20;
                  *(short *)(puVar11 + 0x43) = (short)uVar22;
                } while (uVar19 + 1 != uVar22);
              }
              goto LAB_00c40f38;
            }
            uVar14 = 4;
            if (uVar22 < 5) {
              bVar2 = false;
            }
            else if (uVar22 == 5) {
              bVar2 = false;
              uVar14 = 5;
            }
            else if (uVar22 == 6) {
              uVar22 = 0;
              uVar14 = 5;
              bVar2 = true;
            }
            else {
              uVar22 = uVar22 - 7;
              bVar2 = true;
              uVar14 = 6;
            }
            puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x140);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x140);
            }
            *puVar5 = 0;
            puVar13 = (ushort *)((int)puVar5 + 0x10e);
            *puVar13 = 0;
            piVar17 = puVar20 + uVar14 * 3 + 1;
            iVar12 = *piVar17;
            puVar11 = puVar20 + uVar14 * 3 + 0x22;
            uVar4 = *puVar11;
            uVar7 = (uint)*puVar21 + ~uVar14;
            uVar6 = puVar11[2];
            uVar10 = puVar11[1];
            iVar18 = piVar17[1];
            *puVar13 = (ushort)uVar7;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar7,0xb,&DAT_018ac47c);
            }
            iVar3 = piVar17[2];
            FUN_016dd1aa(puVar5 + 1,puVar20 + uVar14 * 3 + 4,uVar7 * 0xc);
            FUN_016dd1aa(puVar5 + 0x22,puVar20 + uVar14 * 3 + 0x25,uVar7 * 0xc);
            *puVar21 = (ushort)uVar14;
            uVar7 = (uint)*puVar13;
            iVar8 = uVar7 + 1;
            if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar8,0xc,&DAT_018ac48c);
            }
            if (uVar19 - uVar14 != iVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            local_4c = local_4c + 1;
            FUN_016dd1aa(puVar5 + 0x44,puVar20 + uVar14 + 0x45,iVar8 * 4);
            uVar19 = 0;
            do {
              puVar11 = (undefined4 *)(puVar5 + 0x44)[uVar19];
              *puVar11 = puVar5;
              *(short *)(puVar11 + 0x43) = (short)uVar19;
              if (uVar7 <= uVar19) break;
              uVar19 = uVar19 + 1;
            } while (uVar19 <= uVar7);
            puVar11 = puVar5;
            if (!bVar2) {
              puVar11 = puVar20;
            }
            piVar17 = puVar11 + uVar22 * 3 + 1;
            uVar14 = (uint)*(ushort *)((int)puVar11 + 0x10e);
            uVar19 = uVar22 + 1;
            if (uVar22 < uVar14) {
              FUN_016dd52c(puVar11 + uVar19 * 3 + 1,piVar17);
              *piVar17 = local_50;
              piVar17[1] = local_6c;
              piVar17[2] = local_74;
              puVar9 = puVar11 + uVar22 * 3 + 0x22;
              FUN_016dd52c(puVar11 + uVar19 * 3 + 0x22,puVar9,(uVar14 - uVar22) * 0xc);
              puVar11[uVar22 * 3 + 0x22] = local_60;
              puVar9[1] = local_68;
              puVar9[2] = local_64;
              FUN_016dd52c(puVar11 + uVar22 + 0x46,puVar11 + uVar22 + 0x45,(uVar14 - uVar22) * 4);
            }
            else {
              *piVar17 = local_50;
              piVar17[1] = local_6c;
              piVar17[2] = local_74;
              puVar11[uVar22 * 3 + 0x22] = local_60;
              puVar11[uVar22 * 3 + 0x23] = local_68;
              puVar11[uVar22 * 3 + 0x24] = local_64;
            }
            *(ushort *)((int)puVar11 + 0x10e) = (ushort)(uVar14 + 1);
            puVar11[uVar22 + 0x45] = local_5c;
            if (uVar19 < uVar14 + 2) {
              do {
                uVar19 = uVar22 + 1;
                puVar9 = (undefined4 *)puVar11[uVar22 + 0x45];
                *puVar9 = puVar11;
                *(short *)(puVar9 + 0x43) = (short)uVar19;
                uVar22 = uVar19;
              } while (uVar14 + 1 != uVar19);
            }
            if (iVar12 == -0x80000000) goto LAB_00c40f38;
            puVar11 = (undefined4 *)*puVar20;
            local_74 = iVar3;
            local_6c = iVar18;
            local_68 = uVar10;
            local_64 = uVar6;
            local_60 = uVar4;
            local_5c = puVar5;
            local_50 = iVar12;
            local_44 = puVar20;
          } while ((undefined4 *)*puVar20 != (undefined4 *)0x0);
        }
        puVar11 = (undefined4 *)*param_2;
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac44c);
        }
        uVar22 = param_2[1];
        puVar20 = (undefined4 *)thunk_FUN_016d4a50(0x140);
        if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x140);
        }
        puVar20[0x44] = puVar11;
        *puVar20 = 0;
        *(undefined2 *)((int)puVar20 + 0x10e) = 0;
        if (0xfffffffe < uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af438);
        }
        *param_2 = puVar20;
        param_2[1] = uVar22 + 1;
        *puVar11 = puVar20;
        *(undefined2 *)(puVar11 + 0x43) = 0;
        if (local_4c != uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
        }
        puVar20[0x23] = local_68;
        puVar20[0x45] = local_5c;
        puVar20[0x24] = local_64;
        *local_5c = puVar20;
        puVar20[2] = iVar18;
        puVar20[0x22] = local_60;
        puVar20[1] = local_50;
        puVar20[3] = iVar3;
        *(undefined2 *)((int)puVar20 + 0x10e) = 1;
        *(undefined2 *)(local_5c + 0x43) = 1;
      }
    }
LAB_00c40f38:
    iVar12 = param_2[2];
    *param_1 = 0x80000000;
    param_2[2] = iVar12 + 1;
    return;
  }
  goto LAB_00c40ec0;
}

