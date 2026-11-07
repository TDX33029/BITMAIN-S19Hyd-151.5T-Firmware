// FUN_012975a0 @ 012975a0 size=1916 calls_out=16 calls_in=1
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012975a0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint extraout_r3;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar9 = (uint *)(param_3 + 0x30);
LAB_01297624:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_78,param_3);
    if (local_78 != 4) {
      param_1[2] = local_70;
      *param_1 = local_78;
      *(char *)(param_1 + 1) = (char)local_74;
      *(char *)((int)param_1 + 7) = (char)(local_74 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_74 >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_78,param_3);
  uVar7 = local_70 & 0xff;
  if (local_78 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_70._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_70._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_70;
    *param_1 = local_78;
    param_1[1] = local_74;
    return;
  }
  switch(local_74) {
  case 1:
    if (uVar7 != 2) {
LAB_01297bbc:
      local_74 = CONCAT31(CONCAT21(local_74._2_2_,(undefined1)local_70),1);
      local_78 = 1;
      goto LAB_01297bcc;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    iVar11 = param_2;
    break;
  case 2:
    if (uVar7 != 2) goto LAB_01297bbc;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    iVar11 = param_2 + 0x10;
    break;
  case 3:
    if (uVar7 == 0) {
      FUN_0132e394(&local_78,param_3);
      uVar7 = local_74;
      if (local_78 == 4) {
        if (local_74 < 5) {
          *(char *)(param_2 + 0x38) = (char)local_74;
        }
        else {
          iVar11 = FUN_013353bc(param_2 + 0x30,3);
          iVar8 = *(int *)(iVar11 + 0x20);
          if (iVar8 == *(int *)(iVar11 + 0x18)) {
            FUN_0132f4a4(iVar11 + 0x18);
          }
          puVar2 = (uint *)(*(int *)(iVar11 + 0x1c) + iVar8 * 8);
          *puVar2 = uVar7;
          puVar2[1] = (int)uVar7 >> 0x1f;
          *(int *)(iVar11 + 0x20) = iVar8 + 1;
        }
        goto LAB_01297624;
      }
      uVar12 = local_74 & 0xff;
      uVar7 = local_74 >> 8;
      local_74 = local_74 & 0xffff0000;
    }
    else {
      uVar12 = 1;
      local_74 = 0;
      local_78 = 1;
      local_70 = extraout_r3;
    }
    *param_1 = local_78;
    param_1[1] = local_74 | (uVar7 & 0xff) << 8 | uVar12;
    param_1[2] = local_70;
    return;
  case 4:
    if (uVar7 != 2) {
      local_b0 = local_b0 & 0xffff0000 | uVar7 << 8 | 1;
LAB_01297c48:
      local_74 = 1;
      goto LAB_01297c88;
    }
    if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
      local_b0 = local_b0 & 0xffffff00 | 7;
      goto LAB_01297c48;
    }
    uVar7 = *(uint *)(param_2 + 0x2c);
    uVar12 = *(uint *)(param_2 + 0x28);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
    if (uVar7 == uVar12) {
      local_74 = 0;
      local_78 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_64 = 4;
      local_68 = 0;
      local_2c = 0;
      local_30 = 0;
      uVar1 = uVar7;
      if (uVar7 == *(uint *)(param_2 + 0x20)) {
        FUN_012bdaf0((uint *)(param_2 + 0x20));
        uVar1 = *(uint *)(param_2 + 0x2c);
      }
      iVar11 = *(int *)(param_2 + 0x24);
      FUN_016dd1aa(iVar11 + uVar7 * 0x50,&local_78,0x50);
      uVar12 = uVar7 + 1;
      *(uint *)(param_2 + 0x28) = uVar12;
      uVar7 = uVar1;
    }
    else {
      if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar12,&DAT_01890558);
      }
      iVar11 = *(int *)(param_2 + 0x24);
      puVar3 = (undefined4 *)(iVar11 + uVar7 * 0x50);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 0x11) = 0;
      *(undefined1 *)(puVar3 + 0xf) = 0;
      *(undefined1 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      puVar3[7] = 0;
      FUN_0133497c(puVar3[0x12]);
    }
    uVar1 = uVar7 + 1;
    *(uint *)(param_2 + 0x2c) = uVar1;
    if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,uVar12,&DAT_01890578);
    }
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890568);
    }
    iVar8 = *(int *)(param_3 + 0x38);
    uVar12 = *(int *)(param_3 + 0x3c) - iVar8;
    if (*(int *)(param_3 + 0x3c) != iVar8) {
      pcVar14 = (char *)(*(int *)(param_3 + 0x20) + iVar8);
      uVar1 = (uint)*pcVar14;
      if ((int)uVar1 < 0) {
        if (uVar12 < 2) goto LAB_012978bc;
        uVar4 = (uint)pcVar14[1];
        if ((int)uVar4 < 0) {
          if (uVar12 < 10) goto LAB_012978bc;
          uVar6 = 0;
          uVar1 = uVar1 & 0x7f | (uVar4 & 0x7f) << 7 | ((int)pcVar14[2] & 0x7fU) << 0xe;
          uVar4 = 3;
          if (0x7fffffff < (uint)(int)pcVar14[2]) {
            uVar1 = uVar1 | ((int)pcVar14[3] & 0x7fU) << 0x15;
            uVar4 = 4;
            if (0x7fffffff < (uint)(int)pcVar14[3]) {
              uVar4 = (uint)pcVar14[4];
              uVar1 = uVar1 | uVar4 << 0x1c;
              uVar6 = (uVar4 & 0x7f) >> 4;
              if ((int)uVar4 < 0) {
                uVar6 = uVar6 | ((int)pcVar14[5] & 0x7fU) << 3;
                uVar4 = 6;
                if (0x7fffffff < (uint)(int)pcVar14[5]) {
                  uVar6 = uVar6 | ((int)pcVar14[6] & 0x7fU) << 10;
                  uVar4 = 7;
                  if (0x7fffffff < (uint)(int)pcVar14[6]) {
                    uVar6 = uVar6 | ((int)pcVar14[7] & 0x7fU) << 0x11;
                    uVar4 = 8;
                    if (0x7fffffff < (uint)(int)pcVar14[7]) {
                      uVar6 = uVar6 | ((int)pcVar14[8] & 0x7fU) << 0x18;
                      uVar4 = 9;
                      if (0x7fffffff < (uint)(int)pcVar14[8]) {
                        if (pcVar14[9] < 0) {
                          local_70 = CONCAT31(local_70._1_3_,4);
                          local_b0 = local_70;
                          local_b4 = uStack_6c;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          goto LAB_01297c48;
                        }
                        uVar6 = uVar6 | (int)pcVar14[9] << 0x1f;
                        uVar4 = 10;
                      }
                    }
                  }
                }
              }
              else {
                uVar4 = 5;
              }
            }
          }
        }
        else {
          uVar6 = ((int)uVar4 >> 0x1f) << 7 | uVar4 >> 0x19;
          uVar1 = uVar1 & 0x7f | uVar4 << 7;
          uVar4 = 2;
        }
      }
      else {
        uVar6 = (int)uVar1 >> 0x1f;
        uVar4 = 1;
      }
      if (uVar12 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                     &DAT_01890e80);
      }
      uVar4 = uVar4 + iVar8;
      *(uint *)(param_3 + 0x38) = uVar4;
LAB_01297920:
      uVar13 = *(uint *)(param_3 + 0x28);
      uVar5 = uVar13 + uVar4;
      uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar13,uVar4);
      uVar12 = uVar5 + uVar1;
      uVar10 = uVar4 + uVar6 + (uint)CARRY4(uVar5,uVar1);
      if (CARRY4(uVar4,uVar6) || CARRY4(uVar4 + uVar6,(uint)CARRY4(uVar5,uVar1))) {
LAB_01297c50:
        local_b0 = local_a8 & 0xffffff00 | 9;
        local_78 = 1;
        local_70 = local_ac;
      }
      else {
        uVar4 = *puVar9;
        uVar1 = *(uint *)(param_3 + 0x34);
        if (uVar1 <= uVar10 && (uint)(uVar12 <= uVar4) <= uVar1 - uVar10) goto LAB_01297c50;
        *puVar9 = uVar12;
        *(uint *)(param_3 + 0x34) = uVar10;
        uVar5 = *(uint *)(param_3 + 0x24);
        uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar13,uVar5);
        if (uVar10 <= uVar6 && (uint)(uVar13 + uVar5 <= uVar12) <= uVar10 - uVar6) {
          uVar5 = uVar12 - uVar13;
        }
        *(uint *)(param_3 + 0x3c) = uVar5;
        FUN_0129f2e8(&local_78,iVar11 + uVar7 * 0x50,param_3);
        if (local_78 == 4) {
          if (uVar1 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar9 <= uVar4) <= uVar1 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
          }
          uVar6 = *(uint *)(param_3 + 0x24);
          uVar7 = *(uint *)(param_3 + 0x28);
          *puVar9 = uVar4;
          *(uint *)(param_3 + 0x34) = uVar1;
          uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar6);
          if (uVar1 <= uVar12 && (uint)(uVar7 + uVar6 <= uVar4) <= uVar1 - uVar12) {
            uVar6 = uVar4 - uVar7;
          }
          *(uint *)(param_3 + 0x3c) = uVar6;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_ac = uVar1;
          local_a8 = uVar4;
          goto LAB_01297624;
        }
        local_b0 = local_74;
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      local_74 = local_78;
      local_b4 = local_70;
      goto LAB_01297c88;
    }
LAB_012978bc:
    FUN_0132d5a8(&local_78,param_3);
    if (local_78 == 0) {
      uVar4 = *(uint *)(param_3 + 0x38);
      uVar1 = local_70;
      uVar6 = uStack_6c;
      goto LAB_01297920;
    }
    local_b0 = local_70;
    local_b4 = uStack_6c;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    if (local_74 != 4) {
LAB_01297c88:
      *param_1 = local_74;
      param_1[1] = local_b0;
      param_1[2] = local_b4;
      return;
    }
    goto LAB_01297624;
  default:
    FUN_01337f28(&local_78,local_74,uVar7,param_3,param_2 + 0x30);
    goto joined_r0x01297620;
  }
  FUN_0132e8a8(&local_78,param_3,iVar11);
joined_r0x01297620:
  if (local_78 != 4) {
LAB_01297bcc:
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    return;
  }
  goto LAB_01297624;
}

