// FUN_006d5eb0 @ 006d5eb0 size=2628 calls_out=22 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d5eb0(int param_1,int param_2,uint ****param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint ******ppppppuVar3;
  uint ******ppppppuVar4;
  undefined1 *puVar5;
  int iVar6;
  uint *puVar7;
  uint ******ppppppuVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint ***pppuVar15;
  uint *****pppppuVar16;
  int *piVar17;
  uint ***pppuVar18;
  uint ***pppuVar19;
  uint ***pppuVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint local_f4;
  int local_d8;
  uint ****local_c0;
  uint ****local_bc;
  uint ******local_b8;
  uint *local_b4;
  uint ******local_b0;
  uint *****local_88 [4];
  uint ****local_78;
  uint *local_74;
  undefined4 local_70;
  uint ******local_68;
  uint *local_64;
  uint ******local_60;
  uint ******local_58;
  uint *local_54;
  uint ******local_50;
  uint *local_4c;
  uint ******local_48;
  undefined1 *local_44;
  uint ******local_40;
  undefined1 *local_3c;
  
  pppuVar19 = param_3[3];
  pppuVar15 = param_3[2] + 2;
  local_78 = param_3;
  iVar6 = FUN_006e6200(param_1,pppuVar15,pppuVar19);
  if (iVar6 != 0) {
    puVar7 = (uint *)thunk_FUN_01be5118(8);
    if (puVar7 == (uint *)0x0) goto LAB_006d6aa0;
    local_b4 = (uint *)&LAB_006dffb8;
    local_b8 = (uint ******)&local_78;
    pppuVar20 = param_3[1];
    *puVar7 = (uint)*param_3;
    puVar7[1] = (uint)pppuVar20;
    local_60 = (uint ******)&DAT_00000001;
    local_68 = (uint ******)&DAT_00000001;
    local_64 = puVar7;
    FUN_00664898(&local_58,&DAT_005a5408,&local_b8);
    local_b8 = local_58;
    local_b4 = local_54;
    local_b0 = local_50;
    FUN_006d6c3c(param_2,&local_68,&local_b8);
  }
  if (*(int *)(param_1 + 0x80) != 2) {
    local_b8 = *(uint *******)(param_1 + 0x80);
    local_b4 = *(uint **)(param_1 + 0x84);
    local_b0 = *(uint *******)(param_1 + 0x88);
    FUN_006e55e0(&local_58,param_1 + 0x40);
    puVar5 = local_44;
    ppppppuVar3 = local_50;
    puVar7 = local_54;
    ppppppuVar8 = local_58;
    if (local_50 == (uint ******)0x2) {
    }
    else {
      local_50 = local_48;
      local_54 = local_4c;
      local_44 = (undefined1 *)0x0;
      local_48 = (uint ******)&SUB_00000004;
      local_4c = (uint *)0x0;
      local_58 = ppppppuVar3;
      ppppppuVar8 = (uint ******)FUN_006b447c(puVar5,ppppppuVar3,ppppppuVar8,puVar7,&local_58);
    }
    FUN_006bd59c(&local_58,param_4 + 8);
    ppppppuVar3 = local_50;
    puVar7 = local_54;
    pppppuVar16 = ppppppuVar8[-1];
    if ((uint ******)((int)ppppppuVar8[-3] - (int)pppppuVar16) < local_50) {
      FUN_006520b4(ppppppuVar8 + -3,pppppuVar16,local_50,4,8);
      pppppuVar16 = ppppppuVar8[-1];
    }
    FUN_01bed4e2(ppppppuVar8[-2] + (int)pppppuVar16 * 2,puVar7,(int)ppppppuVar3 << 3);
    ppppppuVar8[-1] = (uint *****)((int)ppppppuVar8[-1] + (int)ppppppuVar3);
    local_50 = (uint ******)0x0;
    FUN_0134aee0(local_58,puVar7,4,8);
  }
  if (*(int *)(param_1 + 400) != 2) {
    local_58 = *(uint *******)(param_1 + 400);
    local_54 = *(uint **)(param_1 + 0x194);
    local_50 = *(uint *******)(param_1 + 0x198);
    puVar9 = (uint *)FUN_006c4c10(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164),
                                  *(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),
                                  &local_58);
    ppppppuVar3 = local_50;
    puVar7 = local_54;
    ppppppuVar8 = local_58;
    puVar10 = (uint *)((uint)&local_58 | 4);
    local_d8 = 0;
    piVar17 = (int *)(param_1 + 0x150);
    iVar6 = *piVar17;
    uVar22 = *(uint *)(param_1 + 0x154);
    puVar12 = puVar9;
    do {
      uVar23 = uVar22 & (uint)puVar12;
      uVar21 = *(uint *)(iVar6 + uVar23);
      uVar11 = uVar21 ^ ((uint)puVar9 >> 0x19) * 0x1010101;
      for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
          uVar11 = uVar11 - 1 & uVar11) {
        puVar12 = (uint *)(iVar6 + (uVar23 + ((uint)LZCOUNT(uVar11 << 0x18 |
                                                            (uVar11 >> 8 & 0xff) << 0x10 |
                                                            (uVar11 >> 0x10 & 0xff) << 8 |
                                                            uVar11 >> 0x18) >> 3) & uVar22) * -0x30)
        ;
        if ((uint ******)puVar12[-0xc] == ppppppuVar8) {
          if (((uint)ppppppuVar8 & 1) == 0) {
            uVar13 = puVar12[-0xb];
            if (puVar7 == (uint *)0x0 || uVar13 == 0) {
              if (puVar7 == (uint *)0x0 && uVar13 == 0) goto LAB_006d636c;
            }
            else if ((uint ******)puVar12[-10] == ppppppuVar3) goto LAB_006d619c;
          }
          else if ((uint ******)puVar12[-10] == ppppppuVar3) {
            uVar13 = puVar12[-0xb];
LAB_006d619c:
            iVar14 = thunk_FUN_01bed842(uVar13,puVar7);
            if (iVar14 == 0) goto LAB_006d636c;
          }
        }
      }
      if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) goto LAB_006d6230;
      local_d8 = local_d8 + 4;
      puVar12 = (uint *)(uVar23 + local_d8);
    } while( true );
  }
  goto LAB_006d660c;
LAB_006d6544:
  uVar23 = (uint)*(char *)((int)puVar10 + uVar24);
  if (-1 < (int)uVar23) {
    uVar23 = *puVar10 & 0x80808080;
    uVar24 = LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                     uVar23 >> 0x18);
    uVar23 = (uint)*(byte *)((int)puVar10 + (uVar24 >> 3));
    uVar24 = uVar24 >> 3;
  }
  uVar25 = puVar12[-6];
  uVar26 = puVar12[-5];
  bVar1 = (byte)(uVar22 >> 0x19);
  *(byte *)((int)puVar10 + uVar24) = bVar1;
  puVar12[-6] = uVar25 - (uVar23 & 1);
  puVar12[-5] = uVar26 + 1;
  *(byte *)((int)puVar10 + (uVar24 - 4 & uVar13) + 4) = bVar1;
  puVar10[uVar24 * -4 + -4] = uVar21;
  puVar10[uVar24 * -4 + -2] = (uint)pppuVar20;
  puVar10[uVar24 * -4 + -3] = uVar11;
  puVar10[uVar24 * -4 + -1] = (uint)pppuVar18;
LAB_006d65a8:
  puVar9 = puVar9 + 2;
  if (puVar9 == puVar7 + (int)ppppppuVar4 * 2) goto LAB_006d65ec;
  goto LAB_006d63f0;
LAB_006d6230:
  if (*(int *)(param_1 + 0x158) == 0) {
    FUN_006b63fc(piVar17,(undefined4 *)(param_1 + 0x160));
  }
  puVar12 = puVar9;
  if (ppppppuVar8 != (uint ******)0x2) {
    uVar11 = *puVar10;
    uVar22 = puVar10[1];
    uVar28 = thunk_FUN_01bee35a(uVar22,0x2c0);
    puVar7 = (uint *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
    if ((char)puVar7[4] == '\0') {
      FUN_019ae6ac(&local_58);
      *puVar7 = (uint)local_58;
      puVar7[1] = (uint)local_54;
      puVar7[2] = (uint)local_50;
      puVar7[3] = (uint)local_4c;
      *(undefined1 *)(puVar7 + 4) = 1;
    }
    uVar13 = *puVar7;
    uVar25 = puVar7[1];
    uVar27 = puVar7[2];
    uVar26 = puVar7[3];
    *puVar7 = uVar13 + 1;
    puVar7[1] = uVar25 + (0xfffffffe < uVar13);
    *puVar10 = (uint)&DAT_0056d238;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar12 = (uint *)*piVar17;
    uVar24 = *(uint *)(param_1 + 0x154);
    uVar23 = uVar24 & (uint)puVar9;
    uVar21 = *(uint *)((int)puVar12 + uVar23) & 0x80808080;
    if (uVar21 == 0) {
      iVar6 = 4;
      do {
        uVar23 = uVar23 + iVar6 & uVar24;
        iVar6 = iVar6 + 4;
        uVar21 = *(uint *)((int)puVar12 + uVar23) & 0x80808080;
      } while (uVar21 == 0);
    }
    uVar21 = uVar23 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                     (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) & uVar24;
    uVar23 = (uint)*(char *)((int)puVar12 + uVar21);
    if (-1 < (int)uVar23) {
      uVar21 = *puVar12 & 0x80808080;
      uVar21 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                       (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18);
      uVar23 = (uint)*(byte *)((int)puVar12 + (uVar21 >> 3));
      uVar21 = uVar21 >> 3;
    }
    iVar6 = *(int *)(param_1 + 0x158);
    bVar1 = (byte)((uint)puVar9 >> 0x19);
    *(byte *)((int)puVar12 + uVar21) = bVar1;
    *(uint *)(param_1 + 0x158) = iVar6 - (uVar23 & 1);
    *(byte *)((int)puVar12 + (uVar21 - 4 & uVar24) + 4) = bVar1;
    puVar12 = puVar12 + uVar21 * -0xc;
    puVar12[-0xc] = (uint)ppppppuVar8;
    puVar12[-0xb] = uVar11;
    puVar12[-10] = uVar22;
    puVar12[-9] = (uint)local_58;
    puVar12[-8] = (uint)local_54;
    puVar12[-7] = (uint)local_50;
    puVar12[-6] = (uint)local_4c;
    puVar12[-5] = (uint)local_48;
    puVar12[-1] = uVar26;
    puVar12[-2] = uVar27;
    iVar6 = *(int *)(param_1 + 0x15c);
    puVar12[-3] = uVar25;
    puVar12[-4] = uVar13;
    *(int *)(param_1 + 0x15c) = iVar6 + 1;
  }
LAB_006d636c:
  FUN_006bd59c(&local_58,param_4 + 8);
  ppppppuVar4 = local_50;
  puVar7 = local_54;
  ppppppuVar3 = local_58;
  ppppppuVar8 = local_50;
  if (puVar12[-5] != 0) {
    ppppppuVar8 = (uint ******)((uint)((int)local_50 + 1) >> 1);
  }
  if ((uint ******)puVar12[-6] < ppppppuVar8) {
    FUN_006b9364(puVar12 + -8,ppppppuVar8,puVar12 + -4);
  }
  if (ppppppuVar4 != (uint ******)0x0) {
    pppuVar20 = *param_3;
    pppuVar18 = param_3[1];
    puVar9 = puVar7;
LAB_006d63f0:
    uVar21 = *puVar9;
    uVar11 = puVar9[1];
    uVar22 = FUN_006c561c(puVar12[-4],puVar12[-3],puVar12[-2],puVar12[-1],uVar21,uVar11);
    if (puVar12[-6] == 0) {
      FUN_006b9364(puVar12 + -8,1,puVar12 + -4);
    }
    uVar13 = puVar12[-7];
    puVar10 = (uint *)puVar12[-8];
    bVar2 = false;
    iVar6 = 0;
    uVar23 = uVar22;
    do {
      uVar23 = uVar13 & uVar23;
      uVar25 = *(uint *)((int)puVar10 + uVar23);
      uVar24 = uVar25 ^ (uVar22 >> 0x19) * 0x1010101;
      for (uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff; uVar24 != 0;
          uVar24 = uVar24 - 1 & uVar24) {
        uVar26 = uVar23 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                         (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                 uVar13;
        if ((uVar11 == puVar10[uVar26 * -4 + -3]) &&
           (iVar14 = thunk_FUN_01bed842(uVar21,puVar10[uVar26 * -4 + -4]), iVar14 == 0)) {
          puVar10[uVar26 * -4 + -2] = (uint)pppuVar20;
          puVar10[uVar26 * -4 + -1] = (uint)pppuVar18;
          goto LAB_006d65a8;
        }
      }
      uVar26 = uVar25 & 0x80808080;
      uVar24 = local_f4;
      if (bVar2) {
LAB_006d64f8:
        if ((uVar26 & uVar25 << 1) != 0) goto LAB_006d6544;
        bVar2 = true;
        local_f4 = uVar24;
      }
      else {
        if (uVar26 != 0) {
          uVar24 = uVar23 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                           (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                   uVar13;
          goto LAB_006d64f8;
        }
        bVar2 = false;
      }
      iVar6 = iVar6 + 4;
      uVar23 = iVar6 + uVar23;
    } while( true );
  }
LAB_006d65ec:
  FUN_0134aee0(ppppppuVar3,puVar7,4,8);
LAB_006d660c:
  piVar17 = (int *)(param_1 + 0xe0);
  local_c0 = param_3;
  if ((*piVar17 != 0) && (iVar6 = FUN_006e0428(*piVar17,pppuVar15,pppuVar19), iVar6 == 0)) {
    if (*(uint ****)(param_1 + 0xe4) == (uint ***)0x0) {
      local_88[0] = (uint *****)(param_1 + 0xe8);
      local_74 = (uint *)thunk_FUN_01be5118(8);
      if (local_74 == (uint *)0x0) goto LAB_006d6aa0;
      pppuVar20 = param_3[1];
      *local_74 = (uint)*param_3;
      local_74[1] = (uint)pppuVar20;
      local_70 = 1;
      local_78 = (uint ****)&DAT_00000001;
      FUN_006bfc14(&local_b8,piVar17,pppuVar15,pppuVar19);
      local_50 = local_88;
      local_58 = (uint ******)&local_c0;
      local_44 = &LAB_00632348;
      local_4c = (uint *)&LAB_01963050;
      local_54 = (uint *)&LAB_006dffb8;
      local_48 = (uint ******)&local_b8;
      FUN_00664898(&local_68,&DAT_005b5fac,&local_58);
    }
    else {
      local_88[0] = (uint *****)(param_1 + 0xec);
      local_bc = (uint ****)(param_1 + 0xe4);
      local_74 = (uint *)thunk_FUN_01be5118(8);
      if (local_74 == (uint *)0x0) {
LAB_006d6aa0:
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      pppuVar20 = param_3[1];
      *local_74 = (uint)*param_3;
      local_74[1] = (uint)pppuVar20;
      local_70 = 1;
      local_78 = (uint ****)&DAT_00000001;
      if (*(char *)(*(int *)(param_2 + 0x24) + 0x7f) == '\0') {
        local_b4 = (uint *)&DAT_00000001;
        local_b0 = (uint ******)0x0;
        local_b8 = (uint ******)0x0;
      }
      else {
        FUN_006bfc14(&local_b8,piVar17,pppuVar15,pppuVar19);
      }
      local_40 = (uint ******)&local_b8;
      local_48 = local_88;
      local_50 = (uint ******)&local_bc;
      local_58 = (uint ******)&local_c0;
      local_3c = &LAB_00632348;
      local_44 = &LAB_01963050;
      local_4c = (uint *)&LAB_01963050;
      local_54 = (uint *)&LAB_006dffb8;
      FUN_00664898(&local_68,&DAT_005b3f80,&local_58);
    }
    FUN_019bb7e0(local_b8,local_b4);
    local_58 = local_68;
    local_54 = local_64;
    local_50 = local_60;
    FUN_006d6c3c(param_2,&local_78,&local_58);
  }
  if ((*(int *)(param_1 + 0xf4) == 0) ||
     (iVar6 = FUN_006e0794(*(int *)(param_1 + 0xf4),pppuVar15,pppuVar19), iVar6 == 0)) {
    return;
  }
  iVar6 = 8;
  if (*(int *)(param_4 + 0x18) < 0) {
    iVar6 = *(int *)(param_4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x006d6834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_006d6838 + *(int *)(&DAT_006d6838 + iVar6 * 4)))();
  return;
}

