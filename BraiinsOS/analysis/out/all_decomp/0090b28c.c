// FUN_0090b28c @ 0090b28c size=2152 calls_out=15 calls_in=1
// strings: cooldown_fan_speed | cooldown_fan_speed | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements | cooldown_fan_speed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0090b28c(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  int local_f4;
  uint local_d8;
  uint local_d4;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int *local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint *local_90;
  uint *local_8c;
  uint local_88;
  uint *local_84;
  int local_80;
  uint local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar17 = *param_2;
  uVar3 = 0x15;
  if ((int)uVar17 < 0) {
    uVar3 = uVar17 ^ 0x80000000;
  }
  if (uVar3 == 0x14) {
    piVar18 = (int *)param_2[2];
    iVar21 = 0;
    uVar3 = param_2[3];
    piVar19 = (int *)param_2[1];
    bVar23 = uVar3 != 0;
    iVar14 = 0x14;
    piVar7 = piVar18;
    if (bVar23) {
      piVar7 = piVar18 + 4;
      iVar14 = *piVar18;
    }
    piVar20 = piVar18 + uVar3 * 4;
    local_c4 = piVar18;
    if (bVar23) {
      local_c4 = piVar7;
    }
    local_b8 = 0;
    local_c8 = piVar18;
    local_c0 = piVar19;
    local_bc = piVar20;
    if (!bVar23 || iVar14 == -0x7fffffeb) goto LAB_0090b764;
    iStack_ac = piVar18[1];
    iStack_a8 = piVar18[2];
    iStack_a4 = piVar18[3];
    local_b8 = 1;
    local_b0 = iVar14;
    FUN_0093fcfc(&local_58,&local_b0);
    iVar14 = local_58;
    uVar2 = (undefined1)local_54;
    if (local_58 != 2) {
      FUN_016dd1aa((int)param_1 + 5,(int)&local_54 + 1,0x2b);
      *(undefined1 *)(param_1 + 1) = uVar2;
      *param_1 = iVar14;
LAB_0090b900:
      iVar14 = ((uint)((int)piVar20 - (int)piVar7) >> 4) + 1;
      while (iVar14 = iVar14 + -1, iVar14 != 0) {
        FUN_008f7448(piVar7);
        piVar7 = piVar7 + 4;
      }
      if (piVar19 != (int *)0x0) {
        thunk_FUN_016d3fb4(piVar18);
      }
      goto LAB_0090ba50;
    }
    iVar21 = 1;
    if (uVar3 == 1) {
LAB_0090b764:
      FUN_00f3cf48(param_1,iVar21,&DAT_01867348,&DAT_018ab990);
      if (*param_1 != 2) goto LAB_0090b900;
    }
    else {
      piVar7 = piVar18 + 8;
      local_c4 = piVar7;
      if (piVar18[4] == -0x7fffffeb) goto LAB_0090b764;
      iStack_ac = piVar18[5];
      iStack_a8 = piVar18[6];
      iStack_a4 = piVar18[7];
      local_b8 = 2;
      local_b0 = piVar18[4];
      FUN_0094170c(&local_58,&local_b0);
      if (local_58 != 2) {
        param_1[3] = local_4c;
        param_1[4] = iStack_48;
        param_1[5] = iStack_44;
        param_1[6] = local_40;
        param_1[7] = local_3c;
        param_1[8] = iStack_38;
        param_1[9] = iStack_34;
        param_1[10] = iStack_30;
        param_1[0xb] = iStack_2c;
        *param_1 = local_58;
        param_1[1] = local_54;
        param_1[2] = local_50;
        goto LAB_0090b900;
      }
      param_1[1] = local_54;
      iVar21 = 2;
      *(undefined1 *)(param_1 + 3) = uVar2;
      param_1[2] = local_50;
    }
    iVar14 = ((uint)((int)piVar20 - (int)piVar7) >> 4) + 1;
    piVar8 = piVar7;
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_008f7448(piVar8);
      piVar8 = piVar8 + 4;
    }
    if (piVar19 != (int *)0x0) {
      thunk_FUN_016d3fb4(piVar18);
    }
    if (piVar20 != piVar7) {
      local_b0 = iVar21;
      FUN_00f3cf48(&local_58,((uint)((int)piVar20 - (int)piVar7) >> 4) + iVar21,&local_b0,
                   &DAT_01887234);
      goto LAB_0090b994;
    }
  }
  else {
    if (uVar3 != 0x15) {
      FUN_008f73e8(param_1,param_2,&local_b0,&DAT_018670d8);
      return;
    }
    local_90 = (uint *)param_2[1];
    local_80 = 0;
    local_a0 = (int *)0x80000015;
    puVar11 = local_90 + param_2[2] * 8;
    local_8c = local_90;
    local_88 = uVar17;
    local_84 = puVar11;
    if (param_2[2] == 0) {
      uVar2 = 3;
      local_d8 = 2;
      local_f4 = param_4;
    }
    else {
      puVar4 = (undefined4 *)((uint)&local_c8 | 4);
      puVar5 = (undefined4 *)((uint)&local_a0 | 4);
      puVar6 = (uint *)((uint)&local_78 | 4);
      local_d4 = 4;
      iVar14 = 0;
      local_d8 = 2;
      iVar21 = 1;
      puVar1 = local_90;
      do {
        iVar22 = iVar21;
        piVar19 = local_6c;
        piVar18 = local_70;
        piVar7 = local_74;
        puVar9 = puVar1 + 8;
        uVar3 = *puVar1;
        if (uVar3 == 0x80000015) goto LAB_0090b948;
        uVar12 = puVar1[2];
        uVar15 = puVar1[3];
        local_a0 = (int *)puVar1[4];
        local_9c = puVar1[5];
        local_98 = puVar1[6];
        local_94 = puVar1[7];
        *puVar6 = puVar1[1];
        puVar6[1] = uVar12;
        puVar6[2] = uVar15;
        uVar12 = 0x15;
        if ((int)uVar3 < 0) {
          uVar12 = uVar3 ^ 0x80000000;
        }
        local_78 = uVar3;
        switch(uVar12) {
        case 1:
          piVar7 = (int *)((uint)local_74 & 0xff);
          if (piVar7 == (int *)0x0) {
LAB_0090b518:
            uVar2 = 0;
          }
          else {
            if (piVar7 != (int *)&DAT_00000001) {
              local_bc = (int *)0x0;
              local_c8 = (int *)CONCAT31(local_c8._1_3_,1);
              local_c0 = piVar7;
              FUN_00924358(&local_58,&local_c8,&DAT_01867d78,&DAT_018ab990);
              break;
            }
LAB_0090b57c:
            uVar2 = 1;
          }
          local_58 = 2;
          local_54 = CONCAT31(local_54._1_3_,uVar2);
          break;
        default:
          FUN_008f73e8(&local_58,&local_78,&local_b0,&DAT_01867178);
          goto LAB_0090b5dc;
        case 4:
          if (local_70 == (int *)0x0 && local_6c == (int *)0x0) goto LAB_0090b518;
          if (local_70 == (int *)&DAT_00000001 && local_6c == (int *)0x0) goto LAB_0090b57c;
          local_c0 = local_70;
          local_bc = local_6c;
          local_c8 = (int *)CONCAT31(local_c8._1_3_,1);
          FUN_00924358(&local_58,&local_c8,&DAT_01867d78,&DAT_018ab990);
          break;
        case 0xc:
          if (local_6c == (int *)&DAT_00000004) {
            uVar2 = 0;
            if (*local_70 == 0x65646f6d) {
LAB_0090b5c0:
              local_54 = CONCAT31(local_54._1_3_,uVar2);
              local_58 = 2;
              goto joined_r0x0090b4c0;
            }
          }
          else if (local_6c == (int *)&DAT_00000012) {
            iVar21 = thunk_FUN_016dd50a(local_70,"cooldown_fan_speed",0x12);
            uVar2 = 1;
            if (iVar21 == 0) goto LAB_0090b5c0;
          }
          FUN_00924444(&local_58,piVar18,piVar19,&DAT_018679a8,2);
          goto joined_r0x0090b4c0;
        case 0xd:
          if (local_70 == (int *)&DAT_00000004) {
            if (*local_74 == 0x65646f6d) goto LAB_0090b518;
          }
          else if ((local_70 == (int *)&DAT_00000012) &&
                  (iVar21 = thunk_FUN_016dd50a(local_74,"cooldown_fan_speed",0x12), iVar21 == 0))
          goto LAB_0090b57c;
          FUN_00924444(&local_58,piVar7,piVar18,&DAT_018679a8,2);
          break;
        case 0xe:
          FUN_008fc3e8(&local_58,local_70,local_6c);
joined_r0x0090b4c0:
          if (piVar7 != (int *)0x0) {
            thunk_FUN_016d3fb4(piVar18);
          }
          goto LAB_0090b5dc;
        case 0xf:
          FUN_008fc3e8(&local_58,local_74,local_70);
        }
        FUN_008f7448(&local_78);
LAB_0090b5dc:
        iVar21 = local_58;
        piVar7 = local_a0;
        uVar2 = (undefined1)local_54;
        if (local_58 != 2) {
          local_8c = puVar9;
          local_80 = iVar22;
          FUN_016dd1aa((int)param_1 + 5,(int)&local_54 + 1,0x2b);
          *(undefined1 *)(param_1 + 1) = uVar2;
LAB_0090b9e8:
          *param_1 = iVar21;
LAB_0090ba34:
          FUN_00927214(&local_90);
          if (local_a0 != (int *)0x80000015) {
            FUN_008f7448(&local_a0);
          }
          goto LAB_0090ba50;
        }
        if ((local_54 & 1) == 0) {
          if (local_d4 == 4) {
            local_a0 = (int *)0x80000015;
            if (piVar7 == (int *)0x80000015) goto LAB_0090baa0;
            local_c8 = piVar7;
            uVar13 = puVar5[1];
            uVar16 = puVar5[2];
            *puVar4 = *puVar5;
            puVar4[1] = uVar13;
            puVar4[2] = uVar16;
            FUN_0093fcfc(&local_58,&local_c8);
            iVar21 = local_58;
            uVar2 = (undefined1)local_54;
            local_d4 = local_54 & 0xff;
            if (local_58 == 2) goto LAB_0090b35c;
            local_8c = puVar9;
            local_80 = iVar22;
            FUN_016dd1aa((int)param_1 + 5,(int)&local_54 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = uVar2;
            goto LAB_0090b9e8;
          }
          uVar13 = 4;
          pcVar10 = &DAT_005675d0;
LAB_0090baec:
          local_8c = puVar9;
          local_80 = iVar22;
          FUN_009244cc(param_1,pcVar10,uVar13);
          if (*param_1 != 2) goto LAB_0090ba34;
          goto LAB_0090b984;
        }
        if (local_d8 != 2) {
          uVar13 = 0x12;
          pcVar10 = "cooldown_fan_speed";
          goto LAB_0090baec;
        }
        local_a0 = (int *)0x80000015;
        if (piVar7 == (int *)0x80000015) {
LAB_0090baa0:
          local_a0 = (int *)0x80000015;
          local_8c = puVar9;
          local_80 = iVar22;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                       ,0x2c,&DAT_01887244);
        }
        local_c8 = piVar7;
        uVar13 = puVar5[1];
        uVar16 = puVar5[2];
        *puVar4 = *puVar5;
        puVar4[1] = uVar13;
        puVar4[2] = uVar16;
        FUN_0094170c(&local_58,&local_c8);
        local_d8 = local_54;
        local_f4 = local_50;
        if (local_58 != 2) {
          param_1[3] = local_4c;
          param_1[4] = iStack_48;
          param_1[5] = iStack_44;
          param_1[6] = local_40;
          param_1[7] = local_3c;
          param_1[8] = iStack_38;
          param_1[9] = iStack_34;
          param_1[10] = iStack_30;
          param_1[0xb] = iStack_2c;
          *param_1 = local_58;
          param_1[1] = local_54;
          param_1[2] = local_50;
          local_8c = puVar9;
          local_80 = iVar22;
          goto LAB_0090ba34;
        }
LAB_0090b35c:
        iVar14 = iVar14 + 1;
        iVar21 = iVar22 + 1;
        puVar1 = puVar9;
      } while (puVar9 != puVar11);
      iVar14 = iVar22;
LAB_0090b948:
      uVar2 = (undefined1)local_d4;
      local_8c = puVar9;
      local_80 = iVar14;
      if (local_d4 == 4) {
        uVar2 = 3;
      }
    }
    *(undefined1 *)(param_1 + 3) = uVar2;
    uVar3 = 0;
    if (local_d8 != 2) {
      uVar3 = local_d8;
    }
    param_1[1] = uVar3;
    param_1[2] = local_f4;
LAB_0090b984:
    FUN_008f78f0(&local_58,&local_a0);
LAB_0090b994:
    if (local_58 != 2) {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      goto LAB_0090ba50;
    }
  }
  *param_1 = 2;
LAB_0090ba50:
  if ((0x7fffffff < uVar17) && ((uVar17 & 0xfffffffe) != 0x80000014)) {
    FUN_008f7448(param_2);
  }
  return;
}

