// FUN_012b5da8 @ 012b5da8 size=2212 calls_out=23 calls_in=3
// strings: 

void FUN_012b5da8(int *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  int *local_f4;
  int *local_d0;
  undefined4 *local_c8;
  undefined1 auStack_c4 [12];
  int local_b8;
  undefined4 *local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 *local_90;
  int local_8c;
  undefined1 auStack_88 [12];
  undefined4 local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  
  puVar13 = (undefined1 *)param_2[2];
  iVar2 = *param_2;
  puVar14 = puVar13;
  if (puVar13 == (undefined1 *)0x0) {
    puVar14 = auStack_c4;
    FUN_012a7ff8(puVar14,iVar2);
  }
  iVar9 = *(int *)(puVar14 + 8);
  iVar26 = *(int *)(puVar14 + 4);
  local_b0 = 0;
  local_b4 = (undefined4 *)&SUB_00000004;
  local_b8 = 0;
  if (iVar9 != 0) {
    iVar23 = iVar26;
    do {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
      uVar10 = *(undefined4 *)(iVar2 + 0x4c);
      local_34 = (undefined4 *)0x0;
      local_3c = 0;
      local_38 = (int *)0x4;
      local_d0 = (int *)thunk_FUN_01be5118(4);
      if (local_d0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,4);
      }
      iVar15 = 0;
      *local_d0 = iVar23 + 0xc;
      local_28 = 1;
      piVar18 = (int *)0x4;
      iVar11 = iVar23 + 0x14;
      local_30 = 1;
      local_5c = (undefined4 *)0x0;
      local_60 = (undefined4 *)&SUB_00000004;
      local_64 = (undefined4 *)0x0;
      local_2c = local_d0;
      do {
        local_28 = local_28 + -1;
        puVar20 = (undefined4 *)local_d0[local_28];
        iVar4 = FUN_012b9274(puVar20,piVar18,iVar15);
        if (iVar4 == 0) {
          if (iVar15 == local_3c) {
            FUN_01a54b48(&local_3c);
            piVar18 = local_38;
          }
          *(undefined4 **)((int)piVar18 + iVar15 * 4) = puVar20;
          iVar15 = iVar15 + 1;
          local_34 = (undefined4 *)iVar15;
          iVar4 = FUN_012a4878(uVar3,uVar10,*puVar20,puVar20[1]);
          if (iVar4 != 0) {
            piVar16 = *(int **)(iVar4 + 100);
            iVar4 = *(int *)(iVar4 + 0x68);
            piVar8 = piVar16;
LAB_012b5f00:
            piVar17 = piVar8;
            if (piVar17 != piVar16 + iVar4 * 4) {
              piVar8 = piVar17 + 4;
              if (*piVar17 != 0) goto code_r0x012b5f18;
              goto LAB_012b5f4c;
            }
          }
        }
        puVar7 = local_5c;
        puVar6 = local_60;
        puVar20 = local_64;
      } while (local_28 != 0);
      FUN_0134aee0(local_30,local_2c,4,4);
      FUN_0134aee0(local_3c,local_38,4,4);
      if (puVar7 != (undefined4 *)0x0) {
        puVar19 = puVar6;
        do {
          iVar15 = local_b0;
          uVar3 = *puVar19;
          uVar10 = puVar19[1];
          if (local_b0 == local_b8) {
            FUN_015f5ab8(&local_b8);
          }
          puVar19 = puVar19 + 2;
          local_b4[iVar15 * 2] = uVar3;
          local_b0 = iVar15 + 1;
          (local_b4 + iVar15 * 2)[1] = uVar10;
        } while (puVar19 != puVar6 + (int)puVar7 * 2);
      }
      iVar15 = local_b0;
      FUN_0134aee0(puVar20,puVar6,4,8);
      uVar10 = *(undefined4 *)(iVar23 + 0xc);
      uVar3 = *(undefined4 *)(iVar23 + 0x10);
      if (iVar15 == local_b8) {
        FUN_015f5ab8(&local_b8);
      }
      local_b4[iVar15 * 2] = uVar10;
      (local_b4 + iVar15 * 2)[1] = uVar3;
      local_b0 = iVar15 + 1;
      iVar23 = iVar11;
    } while (iVar11 != iVar26 + iVar9 * 0x14);
  }
  puVar6 = local_b4;
  puVar19 = local_b4 + local_b0 * 2;
  local_a4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 4;
  puVar12 = param_3 + param_4 * 2;
  local_9c = (undefined4 *)0x4;
  local_c8 = param_3;
  puVar20 = puVar12;
  puVar7 = local_b4;
LAB_012b612c:
  iVar9 = local_a8;
  if (puVar7 != (undefined4 *)0x0) {
    puVar20 = puVar19;
  }
  if (puVar7 != (undefined4 *)0x0 && puVar7 != puVar20) {
    puVar21 = puVar7;
    puVar7 = puVar7 + 2;
  }
  else {
    if (local_c8 == puVar12) goto LAB_012b62a4;
    puVar21 = local_c8;
    puVar7 = (undefined4 *)0x0;
    local_c8 = local_c8 + 2;
  }
  uVar3 = *puVar21;
  iVar23 = puVar21[1];
  puVar20 = *(undefined4 **)(iVar2 + 0x70);
  iVar26 = *(int *)(iVar2 + 0x6c);
  puVar28 = (undefined4 *)(iVar26 + 0x24);
  for (iVar9 = (int)puVar20 * 0x30; iVar9 != 0; iVar9 = iVar9 + -0x30) {
    if (*(int *)(iVar26 + 0x28) == iVar23) {
      uVar29 = thunk_FUN_01bed842(*puVar28,uVar3,iVar23);
      puVar20 = (undefined4 *)((ulonglong)uVar29 >> 0x20);
      if ((int)uVar29 == 0) {
        FUN_012a7da0(&local_94,iVar2,puVar21);
        puVar20 = local_90;
        if (param_5 == 0) goto LAB_012b626c;
        iVar9 = local_8c << 3;
        puVar28 = local_90;
        goto LAB_012b6208;
      }
    }
    iVar26 = iVar26 + 0x30;
    puVar28 = puVar28 + 0xc;
  }
  goto LAB_012b612c;
code_r0x012b5f18:
  if (param_5 != 0) {
    iVar5 = FUN_012b1930(param_5 + 0x20,*(undefined4 *)(iVar23 + 0xc),*(undefined4 *)(iVar23 + 0x10)
                        );
    if (iVar5 != 0) {
      iVar5 = FUN_012bf928(iVar5,piVar17);
      if (iVar5 != 0) {
LAB_012b5f4c:
        iVar27 = piVar17[3];
        iVar24 = piVar17[2];
        puVar6 = (undefined4 *)FUN_012a4878(uVar3,uVar10,iVar24,iVar27);
        iVar1 = local_28;
        iVar5 = 0;
        if (puVar6 != (undefined4 *)0x0) {
          iVar5 = puVar6[0x1a];
          puVar20 = puVar6;
        }
        if (puVar6 != (undefined4 *)0x0 && iVar5 != 0) {
          if (local_28 == local_30) {
            FUN_01a54b48(&local_30);
          }
          local_d0 = local_2c;
          local_2c[iVar1] = (int)(puVar20 + 0x45);
          local_28 = iVar1 + 1;
        }
        puVar20 = local_5c;
        if (local_5c == local_64) {
          FUN_015f5ab8(&local_64);
        }
        local_60[(int)puVar20 * 2] = iVar24;
        (local_60 + (int)puVar20 * 2)[1] = iVar27;
        local_5c = (undefined4 *)((int)puVar20 + 1);
        piVar8 = piVar17 + 4;
      }
    }
  }
  goto LAB_012b5f00;
LAB_012b62a4:
  puVar21 = (undefined4 *)0x0;
  local_f4 = (int *)&SUB_00000004;
  piVar18 = (int *)(local_a8 + 4);
  iVar26 = local_a4 << 3;
  puVar28 = (undefined4 *)param_2[1];
  local_74 = 0;
  local_78 = (undefined4 *)0x4;
  local_7c = 0;
  local_34 = (undefined4 *)0x0;
  local_38 = (int *)&SUB_00000004;
  local_3c = 0;
  puVar7 = puVar6;
  puVar20 = puVar28;
LAB_012b62fc:
  do {
    if (puVar7 != (undefined4 *)0x0) {
      puVar20 = puVar19;
    }
    if (puVar7 != (undefined4 *)0x0 && puVar7 != puVar20) {
      puVar20 = puVar7;
      puVar7 = puVar7 + 2;
    }
    else {
      if (param_3 == puVar12) break;
      puVar20 = param_3;
      puVar7 = (undefined4 *)0x0;
      param_3 = param_3 + 2;
    }
    uVar3 = *puVar20;
    uVar10 = puVar20[1];
    uVar29 = FUN_012a4878(*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x4c),uVar3,uVar10);
    puVar20 = (undefined4 *)((ulonglong)uVar29 >> 0x20);
    iVar23 = (int)uVar29;
    if (iVar23 != 0) {
      uVar22 = *(undefined4 *)(iVar23 + 0x114);
      iVar15 = *(int *)(iVar23 + 0x118);
      piVar8 = piVar18;
      for (iVar11 = iVar26; iVar11 != 0; iVar11 = iVar11 + -8) {
        if (*piVar8 == iVar15) {
          uVar29 = thunk_FUN_01bed842(piVar8[-1],uVar22,iVar15);
          puVar20 = (undefined4 *)((ulonglong)uVar29 >> 0x20);
          if ((int)uVar29 == 0) goto LAB_012b62fc;
        }
        piVar8 = piVar8 + 2;
      }
      if ((param_5 != 0) && (iVar11 = FUN_012b1930(param_5 + 0x20,uVar3,uVar10), iVar11 != 0)) {
        uVar29 = FUN_012bf928(iVar11,"");
        puVar20 = (undefined4 *)((ulonglong)uVar29 >> 0x20);
        if ((int)uVar29 != 0) goto LAB_012b62fc;
      }
      FUN_012bafb0(&local_70,iVar23,puVar28,1);
      if (*(int *)(iVar23 + 0x14) == 0) {
        FUN_012b1c8c(&local_7c,&local_70);
        puVar20 = extraout_r1_01;
      }
      else {
        puVar25 = *(undefined4 **)(iVar23 + 0x18);
        puVar20 = (undefined4 *)((int)puVar25 + 1);
        if (puVar21 < puVar20) {
          local_64 = (undefined4 *)&DAT_80000000;
          FUN_01298fcc(&local_3c,puVar20,&local_64);
          puVar20 = extraout_r1_02;
          puVar21 = local_34;
        }
        iVar15 = local_68;
        iVar11 = local_6c;
        iVar23 = local_70;
        if (puVar21 <= puVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar25,puVar21,&DAT_01ce264c);
        }
        local_f4 = local_38;
        piVar8 = local_38 + (int)puVar25 * 3;
        if (*piVar8 != -0x80000000) {
          FUN_0134bd64();
          puVar20 = extraout_r1_03;
        }
        *piVar8 = iVar23;
        piVar8[1] = iVar11;
        piVar8[2] = iVar15;
      }
    }
  } while( true );
  local_5c = (undefined4 *)local_7c;
  local_28 = 0;
  local_58 = local_78 + local_74 * 3;
  local_2c = (int *)0x4;
  local_30 = 0;
  local_64 = local_78;
  local_60 = local_78;
  FUN_01298d48(&local_30,&local_64);
  local_5c = (undefined4 *)local_a0;
  local_64 = local_9c;
  local_58 = local_9c + local_98 * 3;
  local_60 = local_9c;
  FUN_01298d48(&local_30,&local_64);
  local_44 = local_3c;
  local_58 = (undefined4 *)0x80000001;
  local_64 = (undefined4 *)0x80000001;
  local_4c = local_f4;
  piVar18 = local_f4 + (int)puVar21 * 3;
  local_40 = piVar18;
  do {
    iVar2 = local_28;
    if (local_f4 == piVar18) {
LAB_012b65d0:
      local_48 = local_f4;
      FUN_012b5bc4(&local_64);
      *param_1 = local_30;
      param_1[1] = (int)local_2c;
      param_1[2] = local_28;
      FUN_0134aee0(local_ac,iVar9,4,8);
      FUN_0134aee0(local_b8,puVar6,4,8);
      if (puVar13 == (undefined1 *)0x0) {
        FUN_012a34d4(auStack_c4);
      }
      return;
    }
    while( true ) {
      piVar8 = local_f4;
      local_f4 = piVar8 + 3;
      iVar26 = *piVar8;
      if (iVar26 != -0x80000000) break;
      if (local_f4 == piVar18) goto LAB_012b65cc;
    }
    if (iVar26 == -0x7fffffff) {
LAB_012b65cc:
      local_f4 = piVar8 + 3;
      goto LAB_012b65d0;
    }
    iVar23 = piVar8[1];
    iVar11 = piVar8[2];
    if (local_28 == local_30) {
      local_48 = local_f4;
      FUN_018c4418(&local_30);
    }
    piVar8 = (int *)((int)local_2c + iVar2 * 0xc);
    *piVar8 = iVar26;
    piVar8[1] = iVar23;
    piVar8[2] = iVar11;
    local_28 = iVar2 + 1;
  } while( true );
  while( true ) {
    iVar26 = FUN_012b1930(param_5 + 0x20,*puVar28,puVar28[1]);
    if (iVar26 == 0) {
      iVar26 = 0;
    }
    else {
      iVar26 = FUN_012bf928(iVar26,"");
    }
    iVar9 = iVar9 + -8;
    puVar28 = puVar28 + 2;
    if (iVar26 != 0) break;
LAB_012b6208:
    if (iVar9 == 0) goto LAB_012b626c;
  }
  FUN_0134aee0(local_94,puVar20,4,8);
  puVar20 = extraout_r1;
  goto LAB_012b612c;
LAB_012b626c:
  FUN_012a7aa8(auStack_88,iVar2,puVar21);
  FUN_012b1c8c(&local_a0,auStack_88);
  FUN_012b1244(&local_ac,&local_94);
  puVar20 = extraout_r1_00;
  goto LAB_012b612c;
}

