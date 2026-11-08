// FUN_013ce6bc @ 013ce6bc size=2412 calls_out=7 calls_in=2
// strings: 

void FUN_013ce6bc(undefined4 *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  uint uVar23;
  bool bVar24;
  uint *local_5c;
  uint local_58;
  uint local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  puVar14 = (undefined4 *)*param_2;
  if (puVar14 != (undefined4 *)0x0) {
    iVar3 = param_2[1];
    do {
      uVar17 = (uint)*(ushort *)((int)puVar14 + 0xb6);
      iVar10 = uVar17 << 2;
      iVar2 = 1;
      do {
        iVar4 = iVar2;
        if (iVar10 == 0) goto LAB_013ce738;
        iVar10 = iVar10 + -4;
        bVar24 = param_3 < (uint)puVar14[iVar4];
        bVar13 = !bVar24 && param_3 != puVar14[iVar4];
        iVar2 = iVar4 + 1;
      } while ((char)(bVar13 - bVar24) == '\x01');
      if (bVar13 == bVar24) {
        iVar4 = iVar4 + -1;
        uVar17 = *param_4;
        uVar19 = param_4[1];
        uVar22 = param_4[2];
        uVar18 = puVar14[iVar4 * 3 + 0xd];
        uVar16 = puVar14[iVar4 * 3 + 0xe];
        *param_1 = puVar14[iVar4 * 3 + 0xc];
        param_1[1] = uVar18;
        param_1[2] = uVar16;
        puVar14[iVar4 * 3 + 0xc] = uVar17;
        puVar14[iVar4 * 3 + 0xd] = uVar19;
        puVar14[iVar4 * 3 + 0xe] = uVar22;
        return;
      }
      uVar17 = iVar4 - 1;
LAB_013ce738:
      if (iVar3 == 0) goto LAB_013ce788;
      iVar3 = iVar3 + -1;
      puVar14 = (undefined4 *)puVar14[uVar17 + 0x2e];
    } while( true );
  }
LAB_013ce7c8:
  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xb8);
  if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xb8);
  }
  uVar17 = *param_4;
  uVar19 = param_4[1];
  uVar22 = param_4[2];
  *(undefined2 *)((int)puVar14 + 0xb6) = 1;
  *param_2 = puVar14;
  param_2[1] = 0;
  *puVar14 = 0;
  puVar14[1] = param_3;
  puVar14[0xc] = uVar17;
  puVar14[0xd] = uVar19;
  puVar14[0xe] = uVar22;
LAB_013ce7f8:
  iVar3 = param_2[2];
  *param_1 = 0x80000000;
  param_2[2] = iVar3 + 1;
  return;
LAB_013ce788:
  if (puVar14 != (undefined4 *)0x0) {
    uVar1 = *(ushort *)((int)puVar14 + 0xb6);
    uVar19 = (uint)uVar1;
    if (uVar19 < 0xb) {
      uVar22 = uVar17 + 1;
      if (uVar19 < uVar22) {
        puVar14[uVar17 + 1] = param_3;
        local_30 = *param_4;
        local_2c = param_4[1];
        local_28 = param_4[2];
      }
      else {
        FUN_016dd52c(puVar14 + uVar17 + 2,puVar14 + uVar17 + 1,(uVar19 - uVar17) * 4);
        local_30 = *param_4;
        local_2c = param_4[1];
        local_28 = param_4[2];
        puVar14[uVar17 + 1] = param_3;
        FUN_016dd52c(puVar14 + uVar22 * 3 + 0xc,puVar14 + uVar17 * 3 + 0xc,(uVar19 - uVar17) * 0xc);
        in_r12 = extraout_r12;
      }
      uVar23 = 0;
      puVar11 = puVar14 + uVar17 * 3 + 0xc;
      *puVar11 = local_30;
      puVar14[uVar17 * 3 + 0xd] = local_2c;
      puVar14[uVar17 * 3 + 0xe] = local_28;
      puVar7 = &local_34;
      *(ushort *)((int)puVar14 + 0xb6) = uVar1 + 1;
      uVar19 = 0x80000000;
    }
    else {
      uVar19 = 4;
      if (uVar17 < 5) {
        bVar13 = false;
      }
      else if (uVar17 == 5) {
        bVar13 = false;
        uVar19 = 5;
      }
      else {
        if (uVar17 == 6) {
          uVar19 = 5;
          uVar17 = 0;
        }
        else {
          uVar17 = uVar17 - 7;
          uVar19 = 6;
        }
        bVar13 = true;
      }
      in_r12 = (undefined4 *)thunk_FUN_016d4a50(0xb8);
      if (in_r12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xb8);
      }
      *(undefined2 *)((int)in_r12 + 0xb6) = 0;
      *in_r12 = 0;
      puVar7 = puVar14 + uVar19 * 3 + 0xc;
      uVar21 = *puVar7;
      puVar11 = (uint *)puVar14[uVar19 + 1];
      uVar8 = (uint)*(ushort *)((int)puVar14 + 0xb6) + ~uVar19;
      *(short *)((int)in_r12 + 0xb6) = (short)uVar8;
      uVar22 = puVar7[1];
      if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar8,0xb,&DAT_018ac47c);
      }
      uVar23 = puVar7[2];
      FUN_016dd1aa(in_r12 + 1,puVar14 + uVar19 + 2,uVar8 * 4);
      FUN_016dd1aa(in_r12 + 0xc,puVar14 + (uVar19 + 1) * 3 + 0xc,uVar8 * 0xc);
      *(short *)((int)puVar14 + 0xb6) = (short)uVar19;
      puVar20 = in_r12;
      if (!bVar13) {
        puVar20 = puVar14;
      }
      uVar1 = *(ushort *)((int)puVar20 + 0xb6);
      puVar7 = puVar20 + uVar17 + 1;
      if (uVar17 < uVar1) {
        iVar3 = uVar1 - uVar17;
        FUN_016dd52c(puVar7 + 1,puVar7,iVar3 * 4);
        local_30 = *param_4;
        local_2c = param_4[1];
        local_28 = param_4[2];
        FUN_016dd52c(puVar20 + uVar17 * 3 + 0xf,puVar20 + uVar17 * 3 + 0xc,iVar3 * 0xc);
      }
      else {
        local_30 = *param_4;
        local_2c = param_4[1];
        local_28 = param_4[2];
      }
      puVar20[uVar17 * 3 + 0xc] = local_30;
      *puVar7 = param_3;
      puVar7 = &local_38;
      puVar20[uVar17 * 3 + 0xd] = local_2c;
      puVar20[uVar17 * 3 + 0xe] = local_28;
      *(ushort *)((int)puVar20 + 0xb6) = uVar1 + 1;
      uVar19 = 0;
      local_34 = uVar21;
    }
    *puVar7 = uVar19;
    if (local_34 != 0x80000000) {
      puVar20 = (undefined4 *)*puVar14;
      if (puVar20 == (undefined4 *)0x0) {
        uVar19 = local_34;
        uVar17 = uVar22;
        uVar21 = local_38;
        puVar5 = in_r12;
        local_5c = puVar11;
        local_58 = uVar23;
      }
      else {
        local_58 = 0;
        local_3c = 0;
        uVar19 = local_34;
        puVar5 = param_2;
        do {
          if (local_38 != local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00413145,0x35,&DAT_018ac49c);
          }
          uVar8 = (uint)*(ushort *)((int)puVar20 + 0xb6);
          uVar21 = (uint)*(ushort *)(puVar14 + 0x2d);
          if (uVar8 < 0xb) {
            if (uVar21 < uVar8) {
              FUN_016dd52c(puVar20 + uVar21 + 2,puVar20 + uVar21 + 1);
              puVar12 = puVar20 + uVar21 * 3 + 0xc;
              FUN_016dd52c(puVar20 + (uVar21 + 1) * 3 + 0xc,puVar12,(uVar8 - uVar21) * 0xc);
              puVar20[uVar21 * 3 + 0xc] = uVar19;
              puVar12[1] = uVar22;
              puVar12[2] = uVar23;
              FUN_016dd52c(puVar20 + uVar21 + 0x30,puVar20 + uVar21 + 0x2f,(uVar8 - uVar21) * 4);
            }
            else {
              puVar20[uVar21 * 3 + 0xc] = uVar19;
              puVar20[uVar21 * 3 + 0xd] = uVar22;
              puVar20[uVar21 * 3 + 0xe] = uVar23;
            }
            puVar20[uVar21 + 1] = puVar11;
            puVar20[uVar21 + 0x2f] = in_r12;
            puVar11 = &local_30;
            uVar9 = 0x80000000;
            *(short *)((int)puVar20 + 0xb6) = (short)(uVar8 + 1);
            if (uVar21 + 1 < uVar8 + 2) {
              do {
                uVar19 = uVar21 + 1;
                puVar12 = (undefined4 *)puVar20[uVar21 + 0x2f];
                *(short *)(puVar12 + 0x2d) = (short)uVar19;
                *puVar12 = puVar20;
                uVar21 = uVar19;
              } while (uVar8 + 1 != uVar19);
            }
            else {
            }
          }
          else {
            bVar13 = false;
            local_48 = 4;
            if (4 < uVar21) {
              if (uVar21 == 5) {
                local_48 = 5;
              }
              else {
                if (uVar21 == 6) {
                  uVar21 = 0;
                  local_48 = 5;
                }
                else {
                  uVar21 = uVar21 - 7;
                  local_48 = 6;
                }
                bVar13 = true;
              }
            }
            puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xe8);
            if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xe8);
            }
            *(undefined2 *)((int)puVar5 + 0xb6) = 0;
            *puVar5 = 0;
            puVar7 = puVar20 + local_48 * 3 + 0xc;
            uVar6 = *puVar7;
            local_5c = (uint *)puVar20[local_48 + 1];
            uVar15 = (uint)*(ushort *)((int)puVar20 + 0xb6) + ~local_48;
            uVar17 = puVar7[1];
            local_58 = puVar7[2];
            *(short *)((int)puVar5 + 0xb6) = (short)uVar15;
            if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar15,0xb,&DAT_018ac47c);
            }
            FUN_016dd1aa(puVar5 + 1,puVar20 + local_48 + 2,uVar15 * 4);
            FUN_016dd1aa(puVar5 + 0xc,puVar20 + (local_48 + 1) * 3 + 0xc,uVar15 * 0xc);
            *(short *)((int)puVar20 + 0xb6) = (short)local_48;
            uVar15 = (uint)*(ushort *)((int)puVar5 + 0xb6);
            iVar3 = uVar15 + 1;
            if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,iVar3,0xc,&DAT_018ac48c);
            }
            if (uVar8 - local_48 != iVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
            }
            uVar9 = local_3c + 1;
            FUN_016dd1aa(puVar5 + 0x2e,puVar20 + local_48 + 0x2f,iVar3 * 4);
            uVar8 = 0;
            do {
              puVar14 = (undefined4 *)(puVar5 + 0x2e)[uVar8];
              *(short *)(puVar14 + 0x2d) = (short)uVar8;
              *puVar14 = puVar5;
              if (uVar15 <= uVar8) break;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= uVar15);
            puVar14 = puVar5;
            if (!bVar13) {
              puVar14 = puVar20;
            }
            uVar8 = (uint)*(ushort *)((int)puVar14 + 0xb6);
            if (uVar21 < uVar8) {
              FUN_016dd52c(puVar14 + uVar21 + 2,puVar14 + uVar21 + 1);
              puVar12 = puVar14 + uVar21 * 3 + 0xc;
              FUN_016dd52c(puVar14 + (uVar21 + 1) * 3 + 0xc,puVar12,(uVar8 - uVar21) * 0xc);
              puVar14[uVar21 * 3 + 0xc] = uVar19;
              puVar12[1] = uVar22;
              puVar12[2] = uVar23;
              FUN_016dd52c(puVar14 + uVar21 + 0x30,puVar14 + uVar21 + 0x2f,(uVar8 - uVar21) * 4);
            }
            else {
              puVar14[uVar21 * 3 + 0xc] = uVar19;
              puVar14[uVar21 * 3 + 0xd] = uVar22;
              puVar14[uVar21 * 3 + 0xe] = uVar23;
            }
            puVar14[uVar21 + 1] = puVar11;
            puVar14[uVar21 + 0x2f] = in_r12;
            *(short *)((int)puVar14 + 0xb6) = (short)(uVar8 + 1);
            if (uVar21 + 1 < uVar8 + 2) {
              do {
                uVar19 = uVar21 + 1;
                puVar12 = (undefined4 *)puVar14[uVar21 + 0x2f];
                *(short *)(puVar12 + 0x2d) = (short)uVar19;
                *puVar12 = puVar14;
                uVar21 = uVar19;
              } while (uVar8 + 1 != uVar19);
            }
            puVar11 = &local_34;
            puVar14 = puVar20;
            local_3c = uVar9;
            local_30 = uVar6;
          }
          *puVar11 = uVar9;
          if (local_30 == 0x80000000) goto LAB_013ce7f8;
          puVar20 = (undefined4 *)*puVar14;
          puVar11 = local_5c;
          uVar19 = local_30;
          local_38 = local_34;
          uVar21 = local_34;
          uVar22 = uVar17;
          in_r12 = puVar5;
          uVar23 = local_58;
        } while (puVar20 != (undefined4 *)0x0);
      }
      puVar14 = (undefined4 *)*param_2;
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac44c);
      }
      uVar22 = param_2[1];
      puVar20 = (undefined4 *)thunk_FUN_016d4a50(0xe8);
      if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xe8);
      }
      puVar20[0x2e] = puVar14;
      *(undefined2 *)((int)puVar20 + 0xb6) = 0;
      *puVar20 = 0;
      if (0xfffffffe < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af438);
      }
      *(undefined2 *)(puVar14 + 0x2d) = 0;
      *puVar14 = puVar20;
      *param_2 = puVar20;
      param_2[1] = uVar22 + 1;
      if (uVar21 != uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
      }
      puVar20[0xe] = local_58;
      puVar20[1] = local_5c;
      puVar20[0x2f] = puVar5;
      puVar20[0xc] = uVar19;
      puVar20[0xd] = uVar17;
      *(undefined2 *)((int)puVar20 + 0xb6) = 1;
      *(undefined2 *)(puVar5 + 0x2d) = 1;
      *puVar5 = puVar20;
    }
    goto LAB_013ce7f8;
  }
  goto LAB_013ce7c8;
}

