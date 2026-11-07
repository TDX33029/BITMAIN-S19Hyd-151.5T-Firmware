// FUN_012a2600 @ 012a2600 size=1808 calls_out=13 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012a2600(uint *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_94;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  
  puVar9 = (uint *)(param_3 + 0x30);
LAB_012a2660:
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
        FUN_0132e9b8(&local_58,param_3);
        if (local_58 != 4) {
          param_1[2] = local_50;
          *param_1 = local_58;
          *(char *)(param_1 + 1) = (char)local_54;
          *(char *)((int)param_1 + 7) = (char)(local_54 >> 0x18);
          *(short *)((int)param_1 + 5) = (short)(local_54 >> 8);
          return;
        }
        if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
          *param_1 = 4;
          return;
        }
      }
      FUN_0129a648(&local_58,param_3);
      uVar5 = local_50 & 0xff;
      if (local_58 != 4) {
        *(undefined1 *)((int)param_1 + 0xb) = local_50._3_1_;
        *(undefined2 *)((int)param_1 + 9) = local_50._1_2_;
        *(undefined1 *)(param_1 + 2) = (undefined1)local_50;
        *param_1 = local_58;
        param_1[1] = local_54;
        return;
      }
      if (local_54 != 1) break;
      if (uVar5 != 0) {
LAB_012a2b48:
        *(undefined1 *)((int)param_1 + 5) = (undefined1)local_50;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132e710(&local_58,param_3);
      if (local_58 != 0) {
        param_1[1] = local_50;
        param_1[2] = uStack_4c;
        *param_1 = local_54;
        return;
      }
      param_2[2] = local_50;
      param_2[3] = uStack_4c;
      *param_2 = 1;
      param_2[1] = 0;
    }
    if (local_54 == 2) {
      if (uVar5 != 1) goto LAB_012a2b48;
      FUN_0132e008(&local_58,param_3,&local_30,8);
      if (local_58 != 4) goto LAB_012a2be8;
      *(undefined8 *)(param_2 + 6) = local_30;
      param_2[4] = 1;
      param_2[5] = 0;
      goto LAB_012a2660;
    }
    if (local_54 != 3) {
      FUN_01337f28(&local_58,local_54,uVar5,param_3,param_2 + 0xc);
      if (local_58 != 4) {
LAB_012a2be8:
        param_1[1] = local_54;
        *param_1 = local_58;
        param_1[2] = local_50;
        return;
      }
      goto LAB_012a2660;
    }
    if (uVar5 != 2) {
      local_a8 = local_a8 & 0xffff0000 | uVar5 << 8 | 1;
LAB_012a2c24:
      uVar5 = 1;
      goto LAB_012a2c6c;
    }
    if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
      local_a8 = local_a8 & 0xffffff00 | 7;
      goto LAB_012a2c24;
    }
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
    if (uVar5 == uVar1) {
      local_48 = 0;
      local_44 = 0;
      local_54 = 0;
      local_58 = 0;
      local_34 = 0;
      local_38 = 0;
      uVar12 = uVar5;
      if (uVar5 == param_2[8]) {
        FUN_012bd868(param_2 + 8);
        uVar12 = param_2[0xb];
      }
      local_94 = param_2[9];
      puVar11 = (uint *)(local_94 + uVar5 * 0x28);
      *puVar11 = local_58;
      puVar11[1] = local_54;
      puVar11[2] = local_50;
      puVar11[3] = uStack_4c;
      puVar11[4] = local_48;
      puVar11[5] = local_44;
      puVar11[6] = uStack_40;
      puVar11[7] = uStack_3c;
      puVar11[8] = local_38;
      puVar11[9] = local_34;
      uVar1 = uVar5 + 1;
      param_2[10] = uVar1;
      uVar5 = uVar12;
    }
    else {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,uVar1,&DAT_01890558);
      }
      local_94 = param_2[9];
      puVar2 = (undefined4 *)(local_94 + uVar5 * 0x28);
      *puVar2 = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[1] = 0;
      FUN_0133497c(puVar2[8]);
    }
    uVar12 = uVar5 + 1;
    param_2[0xb] = uVar12;
    if (uVar1 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar12,uVar1,&DAT_01890578);
    }
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890568);
    }
    iVar6 = *(int *)(param_3 + 0x38);
    uVar1 = *(int *)(param_3 + 0x3c) - iVar6;
    if (*(int *)(param_3 + 0x3c) != iVar6) {
      pcVar13 = (char *)(*(int *)(param_3 + 0x20) + iVar6);
      uVar12 = (uint)*pcVar13;
      if ((int)uVar12 < 0) {
        if (uVar1 < 2) goto LAB_012a288c;
        uVar3 = (uint)pcVar13[1];
        if ((int)uVar3 < 0) {
          if (uVar1 < 10) goto LAB_012a288c;
          uVar10 = 0;
          uVar12 = uVar12 & 0x7f | (uVar3 & 0x7f) << 7 | ((int)pcVar13[2] & 0x7fU) << 0xe;
          uVar3 = 3;
          if (0x7fffffff < (uint)(int)pcVar13[2]) {
            uVar12 = uVar12 | ((int)pcVar13[3] & 0x7fU) << 0x15;
            uVar3 = 4;
            if (pcVar13[3] < 0) {
              uVar3 = (uint)pcVar13[4];
              uVar12 = uVar12 | uVar3 << 0x1c;
              uVar10 = (uVar3 & 0x7f) >> 4;
              if ((int)uVar3 < 0) {
                uVar10 = uVar10 | ((int)pcVar13[5] & 0x7fU) << 3;
                uVar3 = 6;
                if (0x7fffffff < (uint)(int)pcVar13[5]) {
                  uVar10 = uVar10 | ((int)pcVar13[6] & 0x7fU) << 10;
                  uVar3 = 7;
                  if (0x7fffffff < (uint)(int)pcVar13[6]) {
                    uVar10 = uVar10 | ((int)pcVar13[7] & 0x7fU) << 0x11;
                    uVar3 = 8;
                    if (0x7fffffff < (uint)(int)pcVar13[7]) {
                      uVar10 = uVar10 | ((int)pcVar13[8] & 0x7fU) << 0x18;
                      uVar3 = 9;
                      if (0x7fffffff < (uint)(int)pcVar13[8]) {
                        if (pcVar13[9] < 0) {
                          local_50 = CONCAT31(local_50._1_3_,4);
                          local_a8 = local_50;
                          local_ac = uStack_4c;
                          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                          uVar5 = 1;
                          goto LAB_012a2c6c;
                        }
                        uVar10 = uVar10 | (int)pcVar13[9] << 0x1f;
                        uVar3 = 10;
                      }
                    }
                  }
                }
              }
              else {
                uVar3 = 5;
              }
            }
          }
        }
        else {
          uVar12 = uVar12 & 0x7f | uVar3 << 7;
          uVar10 = ((int)uVar3 >> 0x1f) << 7 | uVar3 >> 0x19;
          uVar3 = 2;
        }
      }
      else {
        uVar10 = (int)uVar12 >> 0x1f;
        uVar3 = 1;
      }
      if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                     &DAT_01890e80);
      }
      uVar3 = uVar3 + iVar6;
      *(uint *)(param_3 + 0x38) = uVar3;
LAB_012a28ec:
      uVar7 = *(uint *)(param_3 + 0x28);
      uVar4 = uVar7 + uVar3;
      uVar3 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar3);
      uVar1 = uVar4 + uVar12;
      uVar8 = uVar3 + uVar10 + (uint)CARRY4(uVar4,uVar12);
      if (CARRY4(uVar3,uVar10) || CARRY4(uVar3 + uVar10,(uint)CARRY4(uVar4,uVar12))) {
LAB_012a2c30:
        local_54 = local_a0 & 0xffffff00 | 9;
        local_58 = 1;
        local_50 = local_a4;
      }
      else {
        uVar10 = *puVar9;
        uVar12 = *(uint *)(param_3 + 0x34);
        if (uVar12 <= uVar8 && (uint)(uVar1 <= uVar10) <= uVar12 - uVar8) goto LAB_012a2c30;
        *puVar9 = uVar1;
        *(uint *)(param_3 + 0x34) = uVar8;
        uVar3 = *(uint *)(param_3 + 0x24);
        uVar4 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar3);
        bVar14 = uVar7 + uVar3 <= uVar1;
        if (uVar8 <= uVar4 && (uint)bVar14 <= uVar8 - uVar4) {
          uVar3 = uVar1 - uVar7;
        }
        *(uint *)(param_3 + 0x3c) = uVar3;
        FUN_012a4414(&local_58,local_94 + uVar5 * 0x28,param_3,uVar8 - (uVar4 + !bVar14));
        if (local_58 == 4) {
          if (uVar12 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar9 <= uVar10) <= uVar12 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
          }
          uVar3 = *(uint *)(param_3 + 0x24);
          uVar5 = *(uint *)(param_3 + 0x28);
          *puVar9 = uVar10;
          *(uint *)(param_3 + 0x34) = uVar12;
          uVar1 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar5,uVar3);
          if (uVar12 <= uVar1 && (uint)(uVar5 + uVar3 <= uVar10) <= uVar12 - uVar1) {
            uVar3 = uVar10 - uVar5;
          }
          *(uint *)(param_3 + 0x3c) = uVar3;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_a4 = uVar12;
          local_a0 = uVar10;
          goto LAB_012a2660;
        }
      }
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
      uVar5 = local_58;
      local_ac = local_50;
      local_a8 = local_54;
      goto LAB_012a2c6c;
    }
LAB_012a288c:
    FUN_0132d5a8(&local_58,param_3);
    if (local_58 == 0) {
      uVar3 = *(uint *)(param_3 + 0x38);
      uVar12 = local_50;
      uVar10 = uStack_4c;
      goto LAB_012a28ec;
    }
    local_a8 = local_50;
    local_ac = uStack_4c;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    uVar5 = local_54;
    if (local_54 != 4) {
LAB_012a2c6c:
      *param_1 = uVar5;
      param_1[1] = local_a8;
      param_1[2] = local_ac;
      return;
    }
  } while( true );
}

