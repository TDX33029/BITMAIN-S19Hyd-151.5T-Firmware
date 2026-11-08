// FUN_00f31854 @ 00f31854 size=3060 calls_out=27 calls_in=1
// strings: models | models | models | models | models | BUG: Input vector is not within permitted length boundsRpc

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f31854(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ushort *******pppppppuVar9;
  ushort *******pppppppuVar10;
  undefined1 *puVar11;
  ushort ******ppppppuVar12;
  ushort *******pppppppuVar13;
  ushort *******pppppppuVar14;
  char *pcVar15;
  int iVar16;
  ushort *****pppppuVar17;
  ushort *******pppppppuVar18;
  ushort ****ppppuVar19;
  ushort ****ppppuVar20;
  ushort *******pppppppuVar21;
  ushort ****ppppuVar22;
  ushort ****ppppuVar23;
  bool bVar24;
  ushort ****ppppuVar25;
  ushort *******unaff_r8;
  ushort *******unaff_r9;
  ushort *******pppppppuVar26;
  ushort ****unaff_r10;
  ushort *******pppppppuVar27;
  ushort ****unaff_r11;
  ushort *******local_108;
  byte local_f4;
  ushort *******local_f0;
  ushort *******local_e0;
  ushort *******local_d4;
  ushort *******local_c0;
  ushort *******local_bc;
  ushort *******local_b8;
  ushort *******local_b4;
  uint uStack_b0;
  uint uStack_ac;
  ushort ******local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  ushort ******local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  ushort *******local_80;
  ushort *******local_7c;
  ushort *******local_78;
  ushort *******local_74;
  ushort *******local_70;
  ushort *******local_6c;
  ushort *******local_68;
  ushort *******local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ushort ******local_50;
  undefined1 *local_4c;
  char *local_48;
  ushort *******local_40;
  ushort *******local_3c;
  ushort *******local_38;
  ushort *******local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_a0 = *(int *)(param_2 + 4);
      local_9c = *(undefined4 *)(param_2 + 8);
      iVar16 = *(int *)(param_2 + 0xc);
      local_c0 = (ushort *******)CONCAT31(local_c0._1_3_,6);
      local_88 = 0;
      if (local_a0 != 0) {
        local_88 = iVar16;
      }
      local_a8 = (ushort ******)(uint)(local_a0 != 0);
      uVar4 = (uint)&local_40 | 1;
      puVar5 = (uint *)((uint)&local_70 | 4);
      puVar6 = (undefined4 *)((uint)&local_40 | 4);
      local_e0 = (ushort *******)0x0;
      local_94 = 0;
      local_a4 = 0;
      local_d4 = (ushort *******)0x0;
      local_98 = local_a8;
      local_90 = local_a0;
      local_8c = local_9c;
LAB_00f31918:
      FUN_00f2cd78(&local_50,&local_a8);
      pppppppuVar26 = unaff_r9;
      if (local_50 != (ushort ******)0x0) {
        pppppuVar17 = (ushort *****)(local_50 + (int)local_48 * 6);
        pppppppuVar26 = (ushort *******)local_50[(int)local_48 * 3 + 0x43];
        unaff_r11 = (ushort ****)local_50[(int)local_48 * 3 + 0x44];
        unaff_r10 = (ushort ****)local_50[(int)local_48 * 3 + 0x45];
        ppppuVar19 = pppppuVar17[1];
        ppppuVar20 = pppppuVar17[2];
        ppppuVar22 = pppppuVar17[3];
        ppppuVar23 = pppppuVar17[4];
        ppppuVar25 = pppppuVar17[5];
        *puVar6 = *pppppuVar17;
        puVar6[1] = ppppuVar19;
        puVar6[2] = ppppuVar20;
        puVar6[3] = ppppuVar22;
        puVar6[4] = ppppuVar23;
        puVar6[5] = ppppuVar25;
        local_70 = local_40;
        local_6c = local_3c;
        local_68 = local_38;
        local_64 = local_34;
        uStack_60 = uStack_30;
        uStack_5c = uStack_2c;
        uStack_58 = uStack_28;
        unaff_r8 = unaff_r9;
      }
      if (local_50 == (ushort ******)0x0 || pppppppuVar26 == (ushort *******)&DAT_80000000) {
LAB_00f31bd0:
        if (local_d4 == (ushort *******)0x0) {
          FUN_00f33aec(&local_40);
          pppppppuVar26 = local_3c;
          if (local_40 == (ushort *******)0x0) {
            local_d4 = (ushort *******)0x0;
            goto joined_r0x00f31e0c;
          }
          pppppppuVar21 = local_3c;
          pppppppuVar14 = local_40;
          if (local_e0 == (ushort *******)0x0) goto LAB_00f31c98;
        }
        else {
          pppppppuVar21 = local_f0;
          pppppppuVar26 = local_f0;
          pppppppuVar14 = local_d4;
          if (local_e0 == (ushort *******)0x0) {
LAB_00f31c98:
            bVar24 = local_d4 == (ushort *******)0x0;
            local_6c = (ushort *******)&DAT_00000006;
            local_3c = (ushort *******)&DAT_0157d360;
            local_40 = (ushort *******)&local_70;
            local_70 = (ushort *******)0x35beb5;
            pppppppuVar26 = (ushort *******)FUN_00f56780(&DAT_0057a25d,&local_40);
            if (pppppppuVar21 != (ushort *******)0x0) {
              pppppppuVar13 = (ushort *******)0x0;
              do {
                *(char *)((int)pppppppuVar14 + (int)pppppppuVar13) = '\0';
                pppppppuVar13 = (ushort *******)((int)pppppppuVar13 + 1);
              } while (pppppppuVar21 != pppppppuVar13);
              pppppppuVar13 = (ushort *******)0x0;
              do {
                *(char *)((int)pppppppuVar14 + (int)pppppppuVar13) = '\0';
                pppppppuVar13 = (ushort *******)((int)pppppppuVar13 + 1);
              } while (pppppppuVar21 != pppppppuVar13);
              thunk_FUN_016d3fb4(pppppppuVar14);
            }
            goto LAB_00f31f6c;
          }
        }
        local_74 = local_108;
        local_80 = pppppppuVar14;
        local_7c = pppppppuVar26;
        local_78 = local_e0;
        if (local_88 != 0) {
          pppppppuVar26 = (ushort *******)FUN_00f2c2f0(iVar16,&DAT_01887430,&DAT_018ab990);
          FUN_00f301bc(&local_80);
          pppppppuVar14 = (ushort *******)0x0;
        }
        while( true ) {
          FUN_00f2cd78(&local_40,&local_a8);
          pppppppuVar13 = local_38;
          pppppppuVar21 = local_40;
          if (local_40 == (ushort *******)0x0) break;
          local_70 = &local_a8;
          if (local_40[(int)local_38 * 3 + 0x43] != (ushort ******)0x0) {
            thunk_FUN_016d3fb4(local_40[(int)local_38 * 3 + 0x44]);
          }
          FUN_00f2cf28(pppppppuVar21 + (int)pppppppuVar13 * 6);
        }
        if ((char)local_c0 == '\x06') goto LAB_00f32024;
        goto LAB_00f3201c;
      }
      FUN_00f30340(&local_c0);
      local_c0 = (ushort *******)*puVar5;
      local_bc = (ushort *******)puVar5[1];
      local_b8 = (ushort *******)puVar5[2];
      local_b4 = (ushort *******)puVar5[3];
      uStack_b0 = puVar5[4];
      uStack_ac = puVar5[5];
      if (unaff_r10 == (ushort ****)0x2) {
        bVar24 = false;
        bVar3 = 0;
        if (*(short *)unaff_r11 != 0x6469) goto LAB_00f31aec;
      }
      else if ((unaff_r10 == (ushort ****)0x6) &&
              (iVar8 = thunk_FUN_016dd50a(unaff_r11,"models",6), iVar8 == 0)) {
        bVar24 = false;
        bVar3 = 1;
      }
      else {
LAB_00f31aec:
        unaff_r8 = (ushort *******)FUN_00f2c294(unaff_r11,unaff_r10,&DAT_0187e870,2);
        bVar24 = true;
        bVar3 = local_f4;
      }
      local_f4 = bVar3;
      if (pppppppuVar26 != (ushort *******)0x0) {
        thunk_FUN_016d3fb4(unaff_r11);
      }
      pppppppuVar26 = unaff_r8;
      if (bVar24) {
joined_r0x00f31e0c:
        if (local_e0 == (ushort *******)0x0) {
LAB_00f31f68:
          bVar24 = true;
        }
        else {
LAB_00f31ea4:
          bVar24 = true;
          FUN_00f30238(local_e0,local_108);
        }
        goto LAB_00f31f6c;
      }
      if (local_f4 == 2) goto LAB_00f31bd0;
      cVar2 = (char)local_c0;
      unaff_r9 = unaff_r8;
      if ((local_f4 & 1) != 0) goto LAB_00f31a8c;
      if (local_d4 != (ushort *******)0x0) {
        local_3c = (ushort *******)&DAT_0157d360;
        local_40 = (ushort *******)&local_70;
        local_6c = (ushort *******)&SUB_00000002;
        local_70 = (ushort *******)0x40c32a;
        pppppppuVar26 = (ushort *******)FUN_00f56780(&DAT_00582dbd,&local_40);
        if (local_e0 != (ushort *******)0x0) goto LAB_00f31ea4;
        goto LAB_00f31f68;
      }
      uVar7 = (uint)local_c0 & 0xff;
      local_c0 = (ushort *******)CONCAT31(local_c0._1_3_,6);
      if (uVar7 == 6) {
        pppppppuVar26 = (ushort *******)FUN_00f2c790();
      }
      else {
        local_40 = (ushort *******)CONCAT31(local_40._1_3_,cVar2);
        FUN_016dd1aa(uVar4,(uint)&local_c0 | 1,0x17);
        FUN_00f3354c(&local_70,&local_40);
        local_d4 = local_70;
        if (local_70 != (ushort *******)0x0) {
          local_f0 = local_6c;
          goto LAB_00f31918;
        }
        pppppppuVar26 = local_6c;
      }
      local_d4 = (ushort *******)0x0;
      goto joined_r0x00f31e0c;
    }
    pppppppuVar26 = (ushort *******)FUN_00f36124(param_2,&local_c0,&DAT_0187e978);
    pppppppuVar14 = (ushort *******)0x0;
    local_108 = unaff_r8;
    goto LAB_00f32024;
  }
  iVar16 = *(int *)(param_2 + 0xc);
  pppppppuVar21 = *(ushort ********)(param_2 + 8);
  pppppppuVar13 = *(ushort ********)(param_2 + 4);
  pppppppuVar27 = pppppppuVar21 + iVar16 * 6;
  local_6c = pppppppuVar21;
  local_70 = pppppppuVar21;
  local_68 = pppppppuVar13;
  local_64 = pppppppuVar27;
  if (iVar16 == 0) {
LAB_00f31b60:
    pppppppuVar9 = local_6c;
    pppppppuVar26 = (ushort *******)FUN_00f2c2f0(0,&DAT_0187e808,&DAT_018ab990);
LAB_00f31b7c:
    pppppppuVar14 = (ushort *******)0x0;
    local_108 = unaff_r8;
  }
  else {
    pppppppuVar9 = pppppppuVar21 + 6;
    local_6c = pppppppuVar9;
    if (*(char *)pppppppuVar21 == '\x06') goto LAB_00f31b60;
    local_c0 = (ushort *******)CONCAT31(local_c0._1_3_,*(char *)pppppppuVar21);
    unaff_r8 = (ushort *******)((uint)&local_c0 | 1);
    FUN_016dd1aa(unaff_r8,(char *)((int)pppppppuVar21 + 1),0x17);
    FUN_00f3354c(&local_40,&local_c0);
    pppppppuVar26 = local_3c;
    pppppppuVar14 = local_40;
    if (local_40 == (ushort *******)0x0) goto LAB_00f31b7c;
    if (iVar16 == 1) {
LAB_00f31d84:
      pppppppuVar10 = (ushort *******)FUN_00f2c2f0(1,&DAT_0187e808,&DAT_018ab990);
joined_r0x00f31dac:
      local_108 = unaff_r8;
      if (pppppppuVar26 == (ushort *******)0x0) {
        pppppppuVar14 = (ushort *******)0x0;
        pppppppuVar26 = pppppppuVar10;
      }
      else {
        pppppppuVar18 = (ushort *******)0x0;
        do {
          *(char *)((int)pppppppuVar14 + (int)pppppppuVar18) = '\0';
          pppppppuVar18 = (ushort *******)((int)pppppppuVar18 + 1);
        } while (pppppppuVar26 != pppppppuVar18);
        pppppppuVar18 = (ushort *******)0x0;
        do {
          *(char *)((int)pppppppuVar14 + (int)pppppppuVar18) = '\0';
          pppppppuVar18 = (ushort *******)((int)pppppppuVar18 + 1);
        } while (pppppppuVar26 != pppppppuVar18);
        thunk_FUN_016d3fb4(pppppppuVar14);
        pppppppuVar14 = (ushort *******)0x0;
        pppppppuVar26 = pppppppuVar10;
      }
    }
    else {
      pppppppuVar9 = pppppppuVar21 + 0xc;
      local_6c = pppppppuVar9;
      if (*(char *)(pppppppuVar21 + 6) == '\x06') goto LAB_00f31d84;
      local_c0 = (ushort *******)CONCAT31(local_c0._1_3_,*(char *)(pppppppuVar21 + 6));
      FUN_016dd1aa(unaff_r8,(char *)((int)pppppppuVar21 + 0x19),0x17);
      FUN_00f2d3ac(&local_80,&local_c0);
      local_108 = local_7c;
      pppppppuVar10 = local_7c;
      if (local_80 == (ushort *******)0x0) goto joined_r0x00f31dac;
      local_34 = local_7c;
      local_e0 = local_80;
      local_38 = local_80;
      local_40 = pppppppuVar14;
      local_3c = pppppppuVar26;
      if (iVar16 != 2) {
        pppppppuVar26 = (ushort *******)FUN_00f2c2f0(iVar16,&DAT_0188738c,&DAT_018ab990);
        FUN_00f301bc(&local_40);
        pppppppuVar14 = (ushort *******)0x0;
      }
    }
  }
  iVar16 = ((uint)((int)pppppppuVar27 - (int)pppppppuVar9) >> 3) * -0x55555555 + 1;
  while (iVar16 = iVar16 + -1, iVar16 != 0) {
    FUN_00f3615c(pppppppuVar9);
    pppppppuVar9 = pppppppuVar9 + 6;
  }
  if (pppppppuVar13 != (ushort *******)0x0) {
    thunk_FUN_016d3fb4(pppppppuVar21);
  }
LAB_00f32024:
  if ((bVar1 & 6) != 4) {
    FUN_00f3615c(param_2);
  }
  if (pppppppuVar14 == (ushort *******)0x0) {
    *param_1 = 0x80000002;
    param_1[1] = pppppppuVar26;
    return;
  }
  local_b8 = local_e0;
  local_c0 = pppppppuVar14;
  local_bc = pppppppuVar26;
  local_b4 = local_108;
  puVar11 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_78 = (ushort *******)0x0;
  local_80 = (ushort *******)0x80;
  local_7c = (ushort *******)puVar11;
  FUN_00f2fe50(&local_70,pppppppuVar14,pppppppuVar26);
  pppppppuVar26 = local_68;
  if (&DAT_0000ffff < local_68) {
    if (local_70 != (ushort *******)0x0) {
      thunk_FUN_016d3fb4(local_6c);
    }
    local_38 = (ushort *******)0xffff;
    local_3c = (ushort *******)0x0;
    local_40 = pppppppuVar26;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,&local_40,
                 &DAT_0187e6c0,&DAT_018886ac);
  }
  if (local_68 < local_70) {
    if (local_68 == (ushort *******)0x0) {
      thunk_FUN_016d3fb4(local_6c);
      pppppppuVar14 = (ushort *******)&DAT_00000001;
    }
    else {
      pppppppuVar14 = (ushort *******)thunk_FUN_016d4ea4(local_6c,local_68);
      if (pppppppuVar14 == (ushort *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,pppppppuVar26);
      }
    }
  }
  else {
    pppppppuVar14 = local_6c;
  }
  if ((uint)((int)local_80 - (int)local_78) < 2) {
    FUN_00f304e0(&local_80,local_78,2);
  }
  iVar16 = (int)local_78 + 2;
  *(short *)((int)local_7c + (int)local_78) = (short)pppppppuVar26;
  local_78 = (ushort *******)iVar16;
  if ((ushort *******)((int)local_80 - iVar16) < pppppppuVar26) {
    FUN_00f304e0(&local_80,iVar16,pppppppuVar26);
  }
  pppppppuVar21 = local_78;
  FUN_016dd1aa((undefined1 *)((int)local_7c + (int)local_78),pppppppuVar14,pppppppuVar26);
  local_78 = (ushort *******)((int)pppppppuVar21 + (int)pppppppuVar26);
  if (pppppppuVar26 != (ushort *******)0x0) {
    thunk_FUN_016d3fb4(pppppppuVar14);
  }
  local_40 = (ushort *******)0x80000002;
  FUN_00f2cc28(&local_40);
  if ((uint)((int)local_80 - (int)local_78) < 2) {
    FUN_00f304e0(&local_80,local_78,2);
  }
  pppppppuVar26 = local_7c;
  pcVar15 = (char *)((int)local_78 + 2);
  *(short *)((int)local_7c + (int)local_78) = (short)local_108;
  local_78 = (ushort *******)pcVar15;
  if (local_108 != (ushort *******)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f3220c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00f32210 + *(int *)(&DAT_00f32210 + (uint)*(ushort *)local_e0 * 4)))
              (*(ushort *)((int)local_e0 + 2));
    return;
  }
  local_50 = (ushort ******)local_80;
  local_4c = (undefined1 *)local_7c;
  local_48 = pcVar15;
  FUN_00fddb4c(&local_40,param_3,local_7c,pcVar15,param_2 + 0xd8);
  if (local_40 == (ushort *******)0x0) {
    *param_1 = 0x80000005;
    param_1[1] = local_c0;
    param_1[2] = local_bc;
    param_1[3] = local_b8;
    param_1[4] = local_b4;
    if (pcVar15 != (char *)0x0) {
      pppppppuVar14 = pppppppuVar26;
      do {
        *(undefined1 *)pppppppuVar14 = 0;
        pcVar15 = pcVar15 + -1;
        pppppppuVar14 = (ushort *******)((int)pppppppuVar14 + 1);
      } while (pcVar15 != (char *)0x0);
    }
    local_48 = (char *)0x0;
    for (ppppppuVar12 = local_50; ppppppuVar12 != (ushort ******)0x0;
        ppppppuVar12 = (ushort ******)((int)ppppppuVar12 + -1)) {
      *(undefined1 *)pppppppuVar26 = 0;
      pppppppuVar26 = (ushort *******)((int)pppppppuVar26 + 1);
    }
    if (local_50 != (ushort ******)0x0) {
      thunk_FUN_016d3fb4(local_4c);
      return;
    }
  }
  else {
    *param_1 = 0x80000003;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    if (pcVar15 != (char *)0x0) {
      pppppppuVar14 = pppppppuVar26;
      do {
        *(undefined1 *)pppppppuVar14 = 0;
        pcVar15 = pcVar15 + -1;
        pppppppuVar14 = (ushort *******)((int)pppppppuVar14 + 1);
      } while (pcVar15 != (char *)0x0);
    }
    local_48 = (char *)0x0;
    for (ppppppuVar12 = local_50; ppppppuVar12 != (ushort ******)0x0;
        ppppppuVar12 = (ushort ******)((int)ppppppuVar12 + -1)) {
      *(undefined1 *)pppppppuVar26 = 0;
      pppppppuVar26 = (ushort *******)((int)pppppppuVar26 + 1);
    }
    if (local_50 != (ushort ******)0x0) {
      thunk_FUN_016d3fb4(local_4c);
    }
    FUN_00f32e14(&local_c0);
  }
  return;
LAB_00f31a8c:
  if (local_e0 != (ushort *******)0x0) {
    local_6c = (ushort *******)&DAT_00000006;
    local_3c = (ushort *******)&DAT_0157d360;
    local_40 = (ushort *******)&local_70;
    local_70 = (ushort *******)0x35beb5;
    pppppppuVar26 = (ushort *******)FUN_00f56780(&DAT_00582dbd,&local_40);
    goto LAB_00f31ea4;
  }
  local_c0 = (ushort *******)CONCAT31(local_c0._1_3_,6);
  if (cVar2 == '\x06') {
    local_e0 = (ushort *******)0x0;
    pppppppuVar26 = (ushort *******)FUN_00f2c790();
  }
  else {
    local_40 = (ushort *******)CONCAT31(local_40._1_3_,cVar2);
    FUN_016dd1aa(uVar4,(uint)&local_c0 | 1,0x17);
    FUN_00f2d3ac(&local_70,&local_40);
    local_e0 = local_70;
    if (local_70 != (ushort *******)0x0) goto code_r0x00f31adc;
    pppppppuVar26 = local_6c;
  }
  bVar24 = true;
LAB_00f31f6c:
  if ((bVar24) && (local_d4 != (ushort *******)0x0 && local_f0 != (ushort *******)0x0)) {
    pppppppuVar14 = (ushort *******)0x0;
    do {
      *(char *)((int)local_d4 + (int)pppppppuVar14) = '\0';
      pppppppuVar14 = (ushort *******)((int)pppppppuVar14 + 1);
    } while (local_f0 != pppppppuVar14);
    pppppppuVar14 = (ushort *******)0x0;
    do {
      *(char *)((int)local_d4 + (int)pppppppuVar14) = '\0';
      pppppppuVar14 = (ushort *******)((int)pppppppuVar14 + 1);
    } while (local_f0 != pppppppuVar14);
    thunk_FUN_016d3fb4();
  }
  while( true ) {
    FUN_00f2cd78(&local_40,&local_a8);
    pppppppuVar21 = local_38;
    pppppppuVar14 = local_40;
    if (local_40 == (ushort *******)0x0) break;
    local_70 = &local_a8;
    if (local_40[(int)local_38 * 3 + 0x43] != (ushort ******)0x0) {
      thunk_FUN_016d3fb4(local_40[(int)local_38 * 3 + 0x44]);
    }
    FUN_00f2cf28(pppppppuVar14 + (int)pppppppuVar21 * 6);
  }
  pppppppuVar14 = (ushort *******)0x0;
  if ((char)local_c0 != '\x06') {
LAB_00f3201c:
    FUN_00f33f88(&local_c0);
  }
  goto LAB_00f32024;
code_r0x00f31adc:
  local_108 = local_6c;
  goto LAB_00f31918;
}

