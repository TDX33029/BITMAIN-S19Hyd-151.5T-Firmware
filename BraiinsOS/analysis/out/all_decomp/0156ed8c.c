// FUN_0156ed8c @ 0156ed8c size=2660 calls_out=5 calls_in=2
// strings: 

void FUN_0156ed8c(int *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  uint uVar28;
  bool bVar29;
  int *local_27c [4];
  uint local_26c [13];
  undefined1 auStack_238 [48];
  undefined1 local_208 [48];
  undefined1 auStack_1d8 [420];
  uint local_34;
  
  local_27c[0] = param_4;
  do {
    if (param_2 < 0x21) {
      puVar21 = (uint *)(param_2 >> 1);
      if (puVar21 != (uint *)0x0) {
        local_27c[3] = (int *)puVar21;
        local_27c[1] = param_1;
        if (param_2 < 0x10) {
          puVar22 = (uint *)(param_1 + (int)puVar21 * 3);
          if (param_2 < 8) {
            local_26c[3] = param_1[2];
            local_26c[2] = param_1[1];
            uVar4 = puVar22[1];
            uVar17 = puVar22[2];
            local_26c[1] = *param_1;
            local_26c[(int)puVar21 * 3 + 1] = *puVar22;
            local_26c[(int)puVar21 * 3 + 2] = uVar4;
            local_26c[(int)puVar21 * 3 + 3] = uVar17;
            puVar22 = (uint *)&DAT_00000001;
          }
          else {
            FUN_01571f24(param_1);
            FUN_01571f24(puVar22,local_26c + (int)puVar21 * 3 + 1);
            puVar22 = (uint *)&DAT_00000004;
          }
        }
        else {
          puVar23 = local_26c + 1;
          iVar5 = param_2 * 0xc;
          FUN_01571f24(param_1,puVar23 + param_2 * 3);
          FUN_01571f24(param_1 + 0xc,auStack_238 + iVar5);
          puVar22 = (uint *)&DAT_00000008;
          FUN_015720d0(puVar23 + param_2 * 3,8,puVar23);
          piVar24 = local_27c[3];
          iVar3 = (int)local_27c[3] * 3;
          FUN_01571f24(param_1 + iVar3,local_208 + iVar5);
          FUN_01571f24(param_1 + iVar3 + 0xc,auStack_1d8 + iVar5);
          puVar21 = (uint *)local_27c[3];
          FUN_015720d0(local_208 + iVar5,8,puVar23 + (int)piVar24 * 3);
        }
        local_27c[2] = (int *)(param_2 - (int)puVar21);
        if (puVar22 < puVar21) {
          puVar15 = local_26c + 1;
          local_26c[0] = (int)puVar22 * 0xc;
          puVar23 = puVar22;
          do {
            puVar21 = (uint *)(local_27c[1] + (int)puVar23 * 3);
            piVar24 = local_27c[(int)puVar23 * 3 + 3];
            uVar26 = local_26c[(int)puVar23 * 3];
            uVar17 = puVar21[1];
            uVar28 = puVar21[2];
            puVar15[(int)puVar23 * 3] = *puVar21;
            uVar4 = uVar26;
            if (uVar28 < uVar26) {
              uVar4 = uVar28;
            }
            local_26c[(int)puVar23 * 3 + 2] = uVar17;
            local_26c[(int)puVar23 * 3 + 3] = uVar28;
            uVar4 = FUN_016dd50a(uVar17,piVar24,uVar4);
            if (uVar4 == 0) {
              uVar4 = uVar28 - uVar26;
            }
            if (0x7fffffff < uVar4) {
              local_27c[0] = (int *)puVar15[(int)puVar23 * 3];
              uVar4 = local_26c[0];
              do {
                uVar26 = uVar4;
                uVar12 = *(undefined4 *)((int)local_26c + uVar26);
                uVar11 = *(undefined4 *)((int)local_27c + uVar26 + 0xc);
                *(undefined4 *)((int)puVar15 + uVar26) =
                     *(undefined4 *)((int)local_27c + uVar26 + 8);
                *(undefined4 *)((int)local_26c + uVar26 + 8) = uVar11;
                *(undefined4 *)((int)local_26c + uVar26 + 0xc) = uVar12;
                if (uVar26 == 0xc) {
                  puVar21 = puVar15;
                  goto LAB_0156f464;
                }
                uVar20 = *(uint *)((int)local_27c + uVar26 + 4);
                uVar4 = uVar20;
                if (uVar28 < uVar20) {
                  uVar4 = uVar28;
                }
                iVar5 = FUN_016dd50a(uVar17,*(undefined4 *)((int)local_27c + uVar26),uVar4);
                if (iVar5 == 0) {
                  iVar5 = uVar28 - uVar20;
                }
                uVar4 = uVar26 - 0xc;
              } while (iVar5 < 0);
              puVar21 = (uint *)((int)puVar15 + (uVar26 - 0xc));
LAB_0156f464:
              *puVar21 = (uint)local_27c[0];
              *(uint *)((int)local_27c + uVar26 + 0xc) = uVar17;
              *(uint *)((int)local_26c + uVar26) = uVar28;
            }
            puVar23 = (uint *)((int)puVar23 + 1);
            local_26c[0] = local_26c[0] + 0xc;
            puVar21 = (uint *)local_27c[3];
          } while (puVar23 != (uint *)local_27c[3]);
        }
        if (puVar22 < local_27c[2]) {
          puVar23 = local_26c + (int)puVar21 * 3 + 1;
          local_27c[0] = local_27c[1] + (int)puVar21 * 3;
          local_26c[0] = 0xc;
          puVar21 = puVar22;
          local_27c[3] = (int *)puVar23;
          do {
            puVar15 = (uint *)(local_27c[0] + (int)puVar21 * 3);
            uVar17 = puVar15[1];
            uVar26 = puVar15[2];
            puVar16 = (uint *)(local_27c[3] + (int)puVar21 * 3);
            *puVar16 = *puVar15;
            uVar28 = puVar16[-1];
            puVar16[1] = uVar17;
            puVar16[2] = uVar26;
            uVar4 = uVar28;
            if (uVar26 < uVar28) {
              uVar4 = uVar26;
            }
            uVar4 = FUN_016dd50a(uVar17,puVar16[-2],uVar4);
            if (uVar4 == 0) {
              uVar4 = uVar26 - uVar28;
            }
            if (0x7fffffff < uVar4) {
              uVar28 = *puVar16;
              puVar15 = puVar23;
              uVar4 = local_26c[0];
              do {
                puVar16 = puVar15;
                uVar13 = puVar16[(int)puVar22 * 3 + -1];
                uVar20 = puVar16[(int)puVar22 * 3 + -2];
                puVar16[(int)puVar22 * 3] = puVar16[(int)puVar22 * 3 + -3];
                puVar16[(int)puVar22 * 3 + 1] = uVar20;
                puVar16[(int)puVar22 * 3 + 2] = uVar13;
                if ((int)puVar22 * 0xc == uVar4) {
                  puVar15 = (uint *)local_27c[3];
                  goto LAB_0156f584;
                }
                uVar13 = puVar16[(int)puVar22 * 3 + -4];
                uVar20 = uVar13;
                if (uVar26 < uVar13) {
                  uVar20 = uVar26;
                }
                iVar5 = FUN_016dd50a(uVar17,puVar16[(int)puVar22 * 3 + -5],uVar20);
                uVar4 = uVar4 + 0xc;
                if (iVar5 == 0) {
                  iVar5 = uVar26 - uVar13;
                }
                puVar15 = puVar16 + -3;
              } while (iVar5 < 0);
              puVar15 = puVar16 + -3 + (int)puVar22 * 3;
LAB_0156f584:
              *puVar15 = uVar28;
              puVar16[(int)puVar22 * 3 + -2] = uVar17;
              puVar16[(int)puVar22 * 3 + -1] = uVar26;
            }
            puVar23 = puVar23 + 3;
            puVar21 = (uint *)((int)puVar21 + 1);
            local_26c[0] = local_26c[0] - 0xc;
          } while (puVar21 != (uint *)local_27c[2]);
        }
        FUN_015720d0(local_26c + 1,param_2,local_27c[1]);
      }
      return;
    }
    if (local_27c[0] == (int *)0x0) {
      uVar4 = param_2 + (param_2 >> 1);
      local_27c[0] = (int *)0x0;
      local_34 = param_2;
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 < local_34) {
          uVar11 = *param_1;
          uVar12 = param_1[1];
          uVar7 = param_1[2];
          puVar14 = param_1 + uVar4 * 3;
          uVar6 = puVar14[1];
          uVar8 = puVar14[2];
          *param_1 = *puVar14;
          param_1[1] = uVar6;
          param_1[2] = uVar8;
          *puVar14 = uVar11;
          puVar14[1] = uVar12;
          puVar14[2] = uVar7;
          uVar17 = 0;
        }
        else {
          uVar17 = uVar4 - local_34;
        }
        uVar26 = uVar17 << 1 | 1;
        uVar28 = uVar4;
        if (local_34 < uVar4) {
          uVar28 = local_34;
        }
        if (uVar26 < uVar28) {
          do {
            uVar20 = uVar17 * 2 + 2;
            if (uVar20 < uVar28) {
              uVar25 = param_1[uVar20 * 3 + 2];
              uVar18 = param_1[uVar26 * 3 + 2];
              uVar13 = uVar25;
              if (uVar18 < uVar25) {
                uVar13 = uVar18;
              }
              iVar5 = FUN_016dd50a(param_1[uVar26 * 3 + 1],param_1[uVar20 * 3 + 1],uVar13);
              if (iVar5 == 0) {
                iVar5 = uVar18 - uVar25;
              }
              uVar26 = uVar26 - (iVar5 >> 0x1f);
            }
            puVar10 = param_1 + uVar26 * 3;
            puVar14 = param_1 + uVar17 * 3;
            uVar20 = puVar10[2];
            uVar13 = puVar14[2];
            uVar17 = uVar20;
            if (uVar13 < uVar20) {
              uVar17 = uVar13;
            }
            uVar17 = FUN_016dd50a(puVar14[1],puVar10[1],uVar17);
            if (uVar17 == 0) {
              uVar17 = uVar13 - uVar20;
            }
            if (uVar17 < 0x80000000) break;
            uVar11 = puVar14[1];
            uVar8 = puVar14[2];
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            uVar12 = puVar10[2];
            *puVar10 = *puVar14;
            puVar10[1] = uVar11;
            puVar10[2] = uVar8;
            uVar20 = uVar26 << 1 | 1;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar12;
            uVar17 = uVar26;
            uVar26 = uVar20;
          } while (uVar20 < uVar28);
        }
        if (uVar4 == 0) {
          return;
        }
      } while( true );
    }
    puVar10 = param_1 + (param_2 >> 3) * 0x15;
    puVar14 = param_1 + (param_2 >> 3) * 0xc;
    local_27c[1] = param_1;
    if (param_2 < 0x40) {
      uVar17 = puVar14[2];
      local_26c[0] = puVar14[1];
      uVar11 = param_1[1];
      uVar26 = param_1[2];
      uVar4 = uVar17;
      if (uVar26 < uVar17) {
        uVar4 = uVar26;
      }
      uVar4 = FUN_016dd50a(uVar11,local_26c[0],uVar4);
      param_1 = local_27c[1];
      uVar28 = puVar10[2];
      uVar12 = puVar10[1];
      if (uVar4 == 0) {
        uVar4 = uVar26 - uVar17;
      }
      uVar20 = uVar28;
      if (uVar26 < uVar28) {
        uVar20 = uVar26;
      }
      uVar20 = FUN_016dd50a(uVar11,uVar12,uVar20);
      if (uVar20 == 0) {
        uVar20 = uVar26 - uVar28;
      }
      piVar24 = param_1;
      if (-1 < (int)(uVar20 ^ uVar4)) {
        uVar26 = uVar28;
        if (uVar17 < uVar28) {
          uVar26 = uVar17;
        }
        uVar26 = FUN_016dd50a(local_26c[0],uVar12,uVar26);
        if (uVar26 == 0) {
          uVar26 = uVar17 - uVar28;
        }
        piVar24 = puVar14;
        if ((int)(uVar26 ^ uVar4) < 0) {
          piVar24 = puVar10;
        }
      }
    }
    else {
      piVar24 = (int *)FUN_0156f90c(param_1,puVar14,puVar10);
    }
    piVar2 = local_27c[1];
    local_27c[0] = (int *)((int)local_27c[0] + -1);
    piVar27 = param_1;
    if (param_3 == (undefined4 *)0x0) {
LAB_0156f0b8:
      uVar11 = *piVar27;
      uVar12 = piVar27[1];
      uVar6 = piVar27[2];
      puVar22 = (uint *)(piVar27 + 6);
      puVar14 = (undefined4 *)((int)piVar27 + ((int)piVar24 - (int)param_1));
      uVar7 = puVar14[1];
      uVar8 = puVar14[2];
      *piVar27 = *puVar14;
      piVar27[1] = uVar7;
      piVar27[2] = uVar8;
      *puVar14 = uVar11;
      puVar14[1] = uVar12;
      puVar14[2] = uVar6;
      puVar21 = (uint *)(piVar27 + 3);
      local_26c[1] = *puVar21;
      local_26c[2] = piVar27[4];
      uVar17 = piVar27[2];
      puVar23 = (uint *)(piVar27 + param_2 * 3);
      uVar4 = 0;
      local_26c[3] = piVar27[5];
      local_26c[0] = piVar27[1];
      if (puVar22 < puVar23 + -3) {
        local_27c[2] = (int *)(puVar23 + -3);
        local_27c[3] = (int *)puVar21;
        do {
          puVar21 = puVar22;
          uVar28 = puVar21[2];
          uVar26 = uVar17;
          if (uVar28 < uVar17) {
            uVar26 = uVar28;
          }
          iVar5 = FUN_016dd50a(puVar21[1],local_26c[0],uVar26);
          piVar24 = local_27c[3];
          uVar26 = puVar21[1];
          uVar20 = puVar21[2];
          if (iVar5 == 0) {
            iVar5 = uVar28 - uVar17;
          }
          puVar22 = (uint *)(local_27c[3] + uVar4 * 3);
          uVar28 = *puVar22;
          iVar5 = uVar4 - (iVar5 >> 0x1f);
          uVar4 = puVar22[1];
          puVar21[-1] = puVar22[2];
          puVar21[-2] = uVar4;
          puVar21[-3] = uVar28;
          *puVar22 = *puVar21;
          puVar22[1] = uVar26;
          puVar22[2] = uVar20;
          uVar26 = puVar21[5];
          uVar4 = uVar17;
          if (uVar26 < uVar17) {
            uVar4 = uVar26;
          }
          iVar3 = FUN_016dd50a(puVar21[4],local_26c[0],uVar4);
          puVar15 = (uint *)(piVar24 + iVar5 * 3);
          uVar28 = *puVar15;
          if (iVar3 == 0) {
            iVar3 = uVar26 - uVar17;
          }
          uVar4 = iVar5 - (iVar3 >> 0x1f);
          uVar26 = puVar15[1];
          puVar21[2] = puVar15[2];
          uVar20 = puVar21[4];
          uVar13 = puVar21[5];
          *puVar21 = uVar28;
          puVar21[1] = uVar26;
          puVar22 = puVar21 + 6;
          *puVar15 = puVar21[3];
          puVar15[1] = uVar20;
          puVar15[2] = uVar13;
        } while (puVar22 < local_27c[2]);
        puVar21 = puVar21 + 3;
        puVar15 = (uint *)local_27c[3];
      }
      else {
        puVar15 = puVar21;
      }
      do {
        puVar16 = puVar22;
        if (puVar22 == puVar23) {
          puVar16 = local_26c + 1;
        }
        uVar28 = puVar16[2];
        uVar26 = uVar17;
        if (uVar28 < uVar17) {
          uVar26 = uVar28;
        }
        iVar5 = FUN_016dd50a(puVar16[1],local_26c[0],uVar26);
        puVar9 = puVar15 + uVar4 * 3;
        if (iVar5 == 0) {
          iVar5 = uVar28 - uVar17;
        }
        bVar29 = puVar22 != puVar23;
        uVar26 = puVar9[1];
        uVar4 = uVar4 - (iVar5 >> 0x1f);
        uVar28 = puVar9[2];
        *puVar21 = *puVar9;
        puVar21[1] = uVar26;
        puVar21[2] = uVar28;
        uVar26 = *puVar16;
        uVar28 = puVar16[1];
        puVar9[2] = puVar16[2];
        *puVar9 = uVar26;
        puVar9[1] = uVar28;
        puVar21 = puVar22;
        puVar22 = puVar22 + 3;
      } while (bVar29);
      if (param_2 <= uVar4) {
LAB_0156f694:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x156f694);
        (*pcVar1)();
      }
      local_26c[2] = local_27c[1][1];
      local_26c[3] = local_27c[1][2];
      local_26c[1] = *local_27c[1];
      puVar10 = local_27c[1] + uVar4 * 3;
      uVar11 = puVar10[1];
      uVar12 = puVar10[2];
      *local_27c[1] = *puVar10;
      local_27c[1][1] = uVar11;
      local_27c[1][2] = uVar12;
      puVar10[1] = local_26c[2];
      puVar10[2] = local_26c[3];
      *puVar10 = local_26c[1];
      FUN_0156ed8c(local_27c[1],uVar4,param_3,local_27c[0]);
      puVar14 = puVar10;
    }
    else {
      puVar14 = (undefined4 *)((int)param_1 + ((int)piVar24 - (int)param_1));
      uVar17 = param_3[2];
      uVar26 = puVar14[2];
      uVar4 = uVar26;
      if (uVar17 < uVar26) {
        uVar4 = uVar17;
      }
      iVar5 = FUN_016dd50a(param_3[1],puVar14[1],uVar4);
      if (iVar5 == 0) {
        iVar5 = uVar17 - uVar26;
      }
      piVar27 = piVar2;
      if (iVar5 < 0) goto LAB_0156f0b8;
      uVar11 = *piVar2;
      uVar12 = piVar2[1];
      uVar7 = piVar2[2];
      puVar22 = (uint *)(piVar2 + 6);
      uVar6 = puVar14[1];
      uVar8 = puVar14[2];
      *piVar2 = *puVar14;
      piVar2[1] = uVar6;
      piVar2[2] = uVar8;
      *puVar14 = uVar11;
      puVar14[1] = uVar12;
      puVar14[2] = uVar7;
      local_26c[2] = piVar2[4];
      puVar15 = (uint *)piVar2[2];
      puVar21 = (uint *)(piVar2 + 3);
      local_26c[3] = piVar2[5];
      puVar23 = (uint *)(piVar2 + param_2 * 3);
      uVar17 = 0;
      local_26c[1] = *puVar21;
      local_26c[0] = piVar2[1];
      if (puVar22 < puVar23 + -3) {
        local_27c[2] = (int *)puVar21;
        do {
          puVar16 = puVar22;
          puVar22 = (uint *)puVar16[2];
          puVar21 = puVar22;
          if (puVar15 < puVar22) {
            puVar21 = puVar15;
          }
          uVar4 = FUN_016dd50a(local_26c[0],puVar16[1],puVar21);
          piVar24 = local_27c[2];
          uVar26 = puVar16[1];
          uVar28 = puVar16[2];
          if (uVar4 == 0) {
            uVar4 = (int)puVar15 - (int)puVar22;
          }
          puVar21 = (uint *)(local_27c[2] + uVar17 * 3);
          if (uVar4 < 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar20 = puVar21[1];
          uVar4 = puVar21[2];
          puVar16[-3] = *puVar21;
          puVar16[-2] = uVar20;
          puVar16[-1] = uVar4;
          *puVar21 = *puVar16;
          puVar21[1] = uVar26;
          puVar21[2] = uVar28;
          puVar22 = (uint *)puVar16[5];
          puVar21 = puVar22;
          if (puVar15 < puVar22) {
            puVar21 = puVar15;
          }
          uVar4 = FUN_016dd50a(local_26c[0],puVar16[4],puVar21);
          puVar21 = (uint *)(piVar24 + uVar17 * 3);
          if (uVar4 == 0) {
            uVar4 = (int)puVar15 - (int)puVar22;
          }
          uVar26 = puVar21[2];
          uVar28 = puVar16[4];
          uVar20 = puVar16[5];
          if (uVar4 < 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar4 = puVar21[1];
          *puVar16 = *puVar21;
          puVar16[1] = uVar4;
          puVar16[2] = uVar26;
          puVar22 = puVar16 + 6;
          *puVar21 = puVar16[3];
          puVar21[1] = uVar28;
          puVar21[2] = uVar20;
        } while (puVar22 < puVar23 + -3);
        puVar21 = (uint *)local_27c[2];
        puVar16 = puVar16 + 3;
      }
      else {
        puVar16 = puVar21;
      }
      local_27c[3] = (int *)puVar15;
      do {
        puVar15 = puVar22;
        if (puVar22 == puVar23) {
          puVar15 = local_26c + 1;
        }
        puVar19 = (uint *)puVar15[2];
        puVar9 = puVar19;
        if (local_27c[3] < puVar19) {
          puVar9 = (uint *)local_27c[3];
        }
        uVar26 = FUN_016dd50a(local_26c[0],puVar15[1],puVar9);
        if (uVar26 == 0) {
          uVar26 = (int)local_27c[3] - (int)puVar19;
        }
        uVar4 = uVar17;
        if (uVar26 < 0x80000000) {
          uVar4 = uVar17 + 1;
        }
        puVar9 = puVar21 + uVar17 * 3;
        bVar29 = puVar22 != puVar23;
        uVar17 = puVar9[1];
        uVar26 = puVar9[2];
        *puVar16 = *puVar9;
        puVar16[1] = uVar17;
        puVar16[2] = uVar26;
        uVar17 = puVar15[1];
        uVar26 = puVar15[2];
        *puVar9 = *puVar15;
        puVar9[1] = uVar17;
        puVar9[2] = uVar26;
        puVar16 = puVar22;
        puVar22 = puVar22 + 3;
        uVar17 = uVar4;
      } while (bVar29);
      if (param_2 <= uVar4) goto LAB_0156f694;
      local_26c[1] = *local_27c[1];
      local_26c[2] = local_27c[1][1];
      local_26c[3] = local_27c[1][2];
      puVar14 = local_27c[1] + uVar4 * 3;
      uVar11 = puVar14[1];
      uVar12 = puVar14[2];
      *local_27c[1] = *puVar14;
      local_27c[1][1] = uVar11;
      local_27c[1][2] = uVar12;
      *puVar14 = local_26c[1];
      puVar14[1] = local_26c[2];
      puVar14[2] = local_26c[3];
      puVar10 = (undefined4 *)0x0;
    }
    param_2 = ~uVar4 + param_2;
    param_1 = puVar14 + 3;
    param_3 = puVar10;
  } while( true );
}

