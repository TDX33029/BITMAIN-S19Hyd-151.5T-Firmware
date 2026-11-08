// FUN_018b8440 @ 018b8440 size=2096 calls_out=19 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018b8440(char *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *extraout_r2;
  uint *****pppppuVar8;
  uint *****extraout_r2_00;
  uint uVar9;
  int iVar10;
  uint ****ppppuVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  short *psVar16;
  uint *****pppppuVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  ushort *puVar22;
  uint uVar23;
  undefined8 uVar24;
  uint *****local_3d8;
  uint *local_3d4;
  uint *****local_3d0;
  undefined4 *local_3cc;
  int *local_3c8;
  uint local_3c4;
  uint *****pppppuStack_3c0;
  uint *puStack_3bc;
  uint *****pppppuStack_3b8;
  uint *****local_3b0;
  uint *puStack_3ac;
  uint *****pppppuStack_3a8;
  undefined4 local_3a0;
  int *local_39c;
  uint local_398;
  undefined4 local_394;
  uint uStack_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [60];
  undefined2 local_324;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [232];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint *****local_5c;
  uint *puStack_58;
  uint *****pppppuStack_54;
  undefined4 *puStack_50;
  int *piStack_4c;
  uint uStack_48;
  uint *****pppppuStack_44;
  uint *puStack_40;
  uint *****pppppuStack_3c;
  uint *****local_38;
  uint *local_34;
  uint *****local_30;
  
  if ((*param_4 < 0) || ((undefined1 *)param_4[3] != &DAT_80000005)) {
    FUN_018c5504(&local_3a0,param_4,&DAT_0052389f,1,&DAT_00523837,1);
    local_3d8._0_3_ = (undefined3)((uint)local_3a0 >> 8);
    if ((char)local_3a0 != '\x14') {
      param_1[3] = local_3a0._3_1_;
      *(undefined2 *)(param_1 + 1) = local_3a0._1_2_;
      *(int **)(param_1 + 4) = local_39c;
      *(uint *)(param_1 + 8) = local_398;
      *(undefined4 *)(param_1 + 0xc) = local_394;
      *param_1 = (char)local_3a0;
      goto LAB_018b88e8;
    }
    puVar4 = param_2 + 0x90;
    piVar12 = local_39c;
    if (-1 < *param_4) goto LAB_018b84dc;
  }
  else {
    piVar12 = param_4 + 4;
LAB_018b84dc:
    puVar4 = (undefined4 *)FUN_018dc0bc(param_2 + 0x90,param_4[1],param_4[2]);
  }
  if (piVar12[2] == 0) {
    iVar14 = piVar12[4];
    iVar13 = iVar14 + piVar12[5] * 0x18;
    uVar24 = thunk_FUN_01bee35a(iVar13,0x2c0,&uStack_390);
    puVar15 = (uint *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
LAB_018b85c8:
    if (iVar14 != iVar13) goto code_r0x018b85d4;
    iVar13 = piVar12[5];
    if (iVar13 == 0) goto LAB_018b891c;
    iVar18 = piVar12[4];
    iVar14 = iVar13 * 0x18;
    iVar20 = iVar18;
    do {
      if (*(int *)(iVar20 + 0x14) != 0) {
        iVar10 = *(int *)(iVar20 + 0x14) << 4;
        psVar16 = (short *)(*(int *)(iVar20 + 0x10) + 0xc);
        do {
          if ((-0x7fffffff < *(int *)(psVar16 + -6)) && (*psVar16 != 0x11 && *psVar16 != 5))
          goto LAB_018b8884;
          psVar16 = psVar16 + 8;
          iVar10 = iVar10 + -0x10;
        } while (iVar10 != 0);
      }
      iVar20 = iVar20 + 0x18;
    } while (iVar20 != iVar18 + iVar13 * 0x18);
    iVar20 = 0;
    puVar15 = (uint *)&SUB_00000004;
    local_30 = (uint *****)0x0;
    local_34 = (uint *)&SUB_00000004;
    local_38 = (uint *****)0x0;
    if (iVar13 == 0) {
LAB_018b891c:
      local_30 = (uint *****)0x0;
      local_34 = (uint *)&SUB_00000004;
      local_38 = (uint *****)0x0;
      pppppuVar8 = (uint *****)0x0;
      local_3b0 = (uint *****)0x0;
      puStack_3ac = (uint *)0x4;
      pppppuStack_3a8 = (uint *****)0x0;
LAB_018b8934:
      piVar19 = (int *)&DAT_00000001;
      puVar7 = (undefined4 *)0x0;
      uVar5 = 0;
      local_3b0 = local_38;
      puStack_3ac = local_34;
      pppppuStack_3a8 = local_30;
    }
    else {
      do {
        pppppuVar8 = local_30;
        iVar13 = iVar18 + iVar20 * 2;
        FUN_015e8ad4(&local_3a0,*(undefined4 *)(iVar13 + 4),*(undefined4 *)(iVar13 + 8));
        if (pppppuVar8 == local_38) {
          FUN_018c4418(&local_38);
          puVar15 = local_34;
        }
        puVar7 = (undefined4 *)((int)puVar15 + iVar20);
        local_30 = (uint *****)((int)pppppuVar8 + 1);
        iVar20 = iVar20 + 0xc;
        iVar14 = iVar14 + -0x18;
        *puVar7 = local_3a0;
        puVar7[1] = local_39c;
        puVar7[2] = local_398;
      } while (iVar14 != 0);
      pppppuVar8 = (uint *****)&local_3b0;
      local_3b0 = local_38;
      puStack_3ac = local_34;
      pppppuStack_3a8 = local_30;
      if (piVar12[5] == 0) goto LAB_018b8934;
      iVar13 = *(int *)(piVar12[4] + 0x14);
      piVar19 = (int *)&DAT_00000001;
      puVar7 = (undefined4 *)0x0;
      if (iVar13 == 0) {
LAB_018b8c28:
        uVar5 = 0;
      }
      else {
        iVar13 = iVar13 << 4;
        pppppuVar17 = *(uint ******)(piVar12[4] + 0x10);
        while( true ) {
          pppppuVar8 = pppppuVar17 + 4;
          ppppuVar11 = *pppppuVar17;
          uVar5 = 2;
          if ((int)ppppuVar11 < 0) {
            uVar5 = (uint)ppppuVar11 ^ 0x80000000;
          }
          if ((uVar5 != 1) && ((uVar5 != 2 || (*(short *)(pppppuVar17 + 3) == 5)))) break;
          iVar13 = iVar13 + -0x10;
          pppppuVar17 = pppppuVar8;
          if (iVar13 == 0) goto LAB_018b8c28;
        }
        if (ppppuVar11 != (uint ****)0x80000000) goto LAB_018b8c28;
        FUN_015e8ad4(&local_3a0,pppppuVar17[2],pppppuVar17[3]);
        pppppuVar8 = extraout_r2_00;
        uVar5 = 0;
        if (local_3a0 != (undefined4 *)0x80000000) {
          piVar19 = local_39c;
          puVar7 = local_3a0;
          uVar5 = local_398;
        }
      }
    }
    pppppuStack_3c0 = (uint *****)&DAT_80000000;
    puStack_3bc = (uint *)0x0;
    if (piVar12[5] != 0) {
      puStack_3bc = (uint *)piVar12[4];
      pppppuVar8 = (uint *****)puStack_3bc[5];
    }
    if (piVar12[5] != 0 && pppppuVar8 != (uint *****)0x0) {
      pppppuVar8 = (uint *****)((int)pppppuVar8 << 4);
      puVar15 = (uint *)puStack_3bc[4];
      do {
        puStack_3bc = puVar15 + 4;
        uVar23 = *puVar15;
        uVar9 = 2;
        if ((int)uVar23 < 0) {
          uVar9 = uVar23 ^ 0x80000000;
        }
        if ((uVar9 != 0) && ((uVar9 != 2 || ((short)puVar15[3] == 0x11)))) {
          puStack_3bc = puVar15;
          if (uVar23 == 0x80000001) {
            pppppuVar8 = (uint *****)puVar15[3];
            if ((uint *****)0xaaaaaaa < pppppuVar8) {
              uVar6 = 0;
              piVar12 = piVar19;
LAB_018b89c4:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar6,piVar12);
            }
            piVar12 = (int *)((int)pppppuVar8 * 0xc);
            if (piVar12 == (int *)0x0) {
              local_34 = (uint *)&SUB_00000004;
              pppppuStack_3c0 = (uint *****)0x0;
              local_38 = (uint *****)0x0;
              goto LAB_018b8c50;
            }
            uVar9 = puVar15[2];
            uVar6 = 4;
            puVar15 = (uint *)FUN_01298504(piVar12,4);
            if (puVar15 == (uint *)0x0) goto LAB_018b89c4;
            local_34 = puVar15;
            local_38 = pppppuVar8;
            pppppuStack_3c0 = pppppuVar8;
            if (pppppuVar8 == (uint *****)0x0) goto LAB_018b8c50;
            pppppuVar17 = (uint *****)0x0;
            goto LAB_018b8b9c;
          }
          break;
        }
        pppppuVar8 = pppppuVar8 + -4;
        puVar15 = puStack_3bc;
      } while (pppppuVar8 != (uint *****)0x0);
    }
LAB_018b89dc:
    local_3d8 = local_3b0;
    local_3d4 = puStack_3ac;
    local_3d0 = pppppuStack_3a8;
    local_3cc = puVar7;
    local_3c8 = piVar19;
    local_3c4 = uVar5;
    pppppuStack_3b8 = pppppuVar8;
    if (pppppuStack_3c0 == (uint *****)&DAT_80000000) {
LAB_018b8a08:
      uVar6 = param_2[0xca];
      local_70 = param_2[0xcc];
      uStack_6c = param_2[0xcd];
      uStack_68 = param_2[0xce];
      uStack_64 = param_2[0xcf];
      uStack_60 = param_2[0xd0];
      local_3a0 = (undefined4 *)*param_2;
      local_39c = (int *)param_2[1];
      local_398 = param_2[2];
      local_394 = param_2[3];
      uStack_390 = param_2[4];
      local_38c = param_2[5];
      uStack_388 = param_2[6];
      uStack_384 = param_2[7];
      uStack_380 = param_2[8];
      uStack_37c = param_2[9];
      local_378 = param_2[10];
      uStack_374 = param_2[0xb];
      uStack_370 = param_2[0xc];
      uStack_36c = param_2[0xd];
      uStack_368 = param_2[0xe];
      uStack_364 = param_2[0xf];
      uVar21 = param_2[0xcb];
      FUN_01bed4e2(auStack_160,puVar4,0xe8);
      FUN_01bed4e2(auStack_360,param_2 + 0x10,0x1e8);
      local_5c = local_3d8;
      puStack_58 = local_3d4;
      pppppuStack_54 = local_3d0;
      puStack_50 = local_3cc;
      piStack_4c = local_3c8;
      uStack_48 = local_3c4;
      pppppuStack_44 = pppppuStack_3c0;
      puStack_40 = puStack_3bc;
      pppppuStack_3c = pppppuStack_3b8;
      local_178 = param_2[0x8a];
      uStack_174 = param_2[0x8b];
      uStack_170 = param_2[0x8c];
      uStack_16c = param_2[0x8d];
      uStack_168 = param_2[0x8e];
      uStack_164 = param_2[0x8f];
      local_78 = uVar6;
      local_74 = uVar21;
      iVar13 = thunk_FUN_01be5118(0x368);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x368);
      }
      FUN_01bed4e2(iVar13,&local_3a0,0x368);
      *(int *)(param_1 + 4) = iVar13;
      *(undefined **)(param_1 + 8) = &DAT_01d225cc;
      *param_1 = '\x14';
      FUN_018b7074(param_4);
      goto LAB_018b88f8;
    }
    cVar2 = '\x19';
    if (pppppuVar8 != (uint *****)0x0) {
      iVar13 = (int)pppppuVar8 * 0xc;
      puVar15 = puStack_3bc;
      do {
        if (iVar13 == 0) {
          cVar2 = '?';
          if (*(char *)(param_2 + 0xd1) != '\0') goto LAB_018b8a08;
          break;
        }
        puVar1 = puVar15 + 2;
        iVar13 = iVar13 + -0xc;
        puVar15 = puVar15 + 3;
      } while (*puVar1 != 0);
    }
    param_1[1] = cVar2;
    *param_1 = '\b';
    FUN_018b8ec0(&local_3d8);
    goto LAB_018b88e8;
  }
  iVar13 = *param_3;
  local_39c = (int *)0x100001;
  local_324 = 4;
  local_3a0 = (undefined4 *)0x80000000;
  FUN_018e077c(iVar13,&local_3a0,*(char *)(iVar13 + 0x28) == '\x02');
  param_1[4] = '\x04';
  *param_1 = '\x02';
LAB_018b88e0:
  *(undefined1 *)(iVar13 + 0xb1) = 1;
LAB_018b88e8:
  FUN_018b7074(param_4);
  FUN_018b9638(param_2);
LAB_018b88f8:
  thunk_FUN_01be4678(param_2);
  return;
code_r0x018b85d4:
  iVar18 = *(int *)(iVar14 + 0x10);
  iVar20 = *(int *)(iVar14 + 0x14);
  if ((char)puVar15[4] == '\0') {
    FUN_019ae6ac(&local_3d8);
    *puVar15 = (uint)local_3d8;
    puVar15[1] = (uint)local_3d4;
    puVar15[2] = (uint)local_3d0;
    puVar15[3] = (uint)local_3cc;
    *(undefined1 *)(puVar15 + 4) = 1;
  }
  uVar5 = *puVar15;
  uVar9 = puVar15[1];
  iVar14 = iVar14 + 0x18;
  *puVar15 = uVar5 + 1;
  puVar22 = (ushort *)(iVar18 + 0xe);
  uVar23 = puVar15[3];
  puVar15[1] = uVar9 + (0xfffffffe < uVar5);
  local_3a0 = &DAT_0056d238;
  local_39c = (int *)0x0;
  local_398 = 0;
  local_394 = 0;
  extraout_r2[2] = puVar15[2];
  extraout_r2[3] = uVar23;
  *extraout_r2 = uVar5;
  extraout_r2[1] = uVar9;
  for (iVar20 = iVar20 << 4; iVar20 != 0; iVar20 = iVar20 + -0x10) {
    uVar9 = *(uint *)(puVar22 + -7);
    uVar5 = 2;
    if ((int)uVar9 < 0) {
      uVar5 = uVar9 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      uVar3 = 5;
    }
    else if (uVar5 == 1) {
      uVar3 = 0x11;
    }
    else {
      uVar9 = (uint)*puVar22;
      uVar3 = puVar22[-1];
    }
    uVar6 = FUN_018bd358(uVar3,uVar9);
    iVar18 = FUN_018ca3a0(&local_3a0,uVar6);
    if (iVar18 != 0) break;
    puVar22 = puVar22 + 8;
    FUN_018ca480(&local_3a0,uVar6);
  }
  if ((local_39c != (int *)0x0) &&
     (uVar5 = (int)local_39c * 2 + 5U & 0xfffffffc,
     (undefined1 *)((int)local_39c + uVar5) != (undefined1 *)0xfffffffb)) {
    thunk_FUN_01be4678((int)local_3a0 - uVar5);
  }
  if (iVar20 != 0) goto LAB_018b8884;
  goto LAB_018b85c8;
LAB_018b8884:
  iVar13 = *param_3;
  local_324 = 4;
  local_39c = (int *)0x1a0001;
  local_3a0 = (undefined4 *)0x80000000;
  FUN_018e077c(iVar13,&local_3a0,*(char *)(iVar13 + 0x28) == '\x02');
  param_1[0] = '\b';
  param_1[1] = '\x01';
  goto LAB_018b88e0;
  while( true ) {
    FUN_015e8ad4(&local_3a0,*(undefined4 *)(uVar9 + 4),*(undefined4 *)(uVar9 + 8));
    pppppuVar17 = (uint *****)((int)pppppuVar17 + 1);
    piVar12 = piVar12 + -3;
    uVar9 = uVar9 + 0xc;
    *puVar15 = (uint)local_3a0;
    puVar15[1] = (uint)local_39c;
    puVar15[2] = local_398;
    puVar15 = puVar15 + 3;
    if (pppppuVar8 == pppppuVar17) break;
LAB_018b8b9c:
    if (piVar12 == (int *)0x0) break;
  }
LAB_018b8c50:
  local_30 = pppppuVar8;
  puStack_3bc = local_34;
  goto LAB_018b89dc;
}

