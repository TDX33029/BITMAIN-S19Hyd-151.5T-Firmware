// FUN_0133934c @ 0133934c size=1240 calls_out=9 calls_in=2
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf | assertion failed: limit >= self.limit

void FUN_0133934c(uint *param_1,char param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 != '\x02') {
    *(char *)((int)param_1 + 5) = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 1;
    return;
  }
  if (*(uint *)(param_3 + 0x44) <= *(uint *)(param_3 + 0x40)) {
    *(undefined1 *)(param_1 + 1) = 7;
    *param_1 = 1;
    return;
  }
  uVar4 = param_4[2];
  uVar11 = param_4[3];
  *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
  if (uVar11 == uVar4) {
    local_c4 = 1;
    local_34 = 0;
    local_38 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 4;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 4;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 4;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 4;
    local_98 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 4;
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 4;
    local_b8 = 0;
    local_bc = local_bc & 0xffffff00;
    local_c0 = 0;
    local_c8 = 0;
    local_2c = 0;
    local_30 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 4;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 4;
    local_58 = 0;
    uVar8 = uVar11;
    if (uVar11 == *param_4) {
      FUN_0132f508(param_4);
      uVar8 = param_4[3];
    }
    uVar10 = param_4[1];
    FUN_016dd1aa(uVar10 + uVar11 * 0xa0,&local_c8,0xa0);
    uVar4 = uVar11 + 1;
    param_4[2] = uVar4;
    uVar11 = uVar8;
  }
  else {
    if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,uVar4,&DAT_01890558);
    }
    uVar10 = param_4[1];
    iVar2 = uVar10 + uVar11 * 0xa0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    FUN_0133497c(*(undefined4 *)(iVar2 + 0x98));
  }
  uVar8 = uVar11 + 1;
  param_4[3] = uVar8;
  if (uVar4 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar8,uVar4,&DAT_01890578);
  }
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890568);
  }
  iVar2 = *(int *)(param_3 + 0x38);
  uVar4 = *(int *)(param_3 + 0x3c) - iVar2;
  if (*(int *)(param_3 + 0x3c) == iVar2) {
LAB_0133952c:
    FUN_0132d5a8(&local_c8,param_3);
    if (local_c8 != 1) {
      uVar1 = *(uint *)(param_3 + 0x38);
      uVar8 = local_c0;
      uVar9 = local_bc;
      goto LAB_013395a0;
    }
LAB_01339548:
    local_c8 = local_c4;
    local_c4 = local_c0;
LAB_013396b0:
    param_1[1] = local_c4;
    *param_1 = local_c8;
    param_1[2] = local_bc;
  }
  else {
    pcVar5 = (char *)(*(int *)(param_3 + 0x20) + iVar2);
    uVar8 = (uint)*pcVar5;
    if (-1 < (int)uVar8) {
      uVar9 = (int)uVar8 >> 0x1f;
      uVar1 = 1;
      goto LAB_01339574;
    }
    if (uVar4 < 2) goto LAB_0133952c;
    uVar1 = (uint)pcVar5[1];
    if (-1 < (int)uVar1) {
      uVar8 = uVar8 & 0x7f | uVar1 << 7;
      uVar9 = ((int)uVar1 >> 0x1f) << 7 | uVar1 >> 0x19;
      uVar1 = 2;
      goto LAB_01339574;
    }
    if (uVar4 < 10) goto LAB_0133952c;
    uVar9 = 0;
    uVar8 = uVar8 & 0x7f | (uVar1 & 0x7f) << 7 | ((int)pcVar5[2] & 0x7fU) << 0xe;
    uVar1 = 3;
    if (0x7fffffff < (uint)(int)pcVar5[2]) {
      uVar8 = uVar8 | ((int)pcVar5[3] & 0x7fU) << 0x15;
      uVar1 = 4;
      if (0x7fffffff < (uint)(int)pcVar5[3]) {
        uVar1 = (uint)pcVar5[4];
        uVar8 = uVar8 | uVar1 << 0x1c;
        uVar9 = (uVar1 & 0x7f) >> 4;
        if ((int)uVar1 < 0) {
          uVar9 = uVar9 | ((int)pcVar5[5] & 0x7fU) << 3;
          uVar1 = 6;
          if (0x7fffffff < (uint)(int)pcVar5[5]) {
            uVar9 = uVar9 | ((int)pcVar5[6] & 0x7fU) << 10;
            uVar1 = 7;
            if (0x7fffffff < (uint)(int)pcVar5[6]) {
              uVar9 = uVar9 | ((int)pcVar5[7] & 0x7fU) << 0x11;
              uVar1 = 8;
              if (0x7fffffff < (uint)(int)pcVar5[7]) {
                uVar9 = uVar9 | ((int)pcVar5[8] & 0x7fU) << 0x18;
                uVar1 = 9;
                if (0x7fffffff < (uint)(int)pcVar5[8]) {
                  if (pcVar5[9] < 0) {
                    local_c0 = CONCAT31(local_c0._1_3_,4);
                    local_c4 = 1;
                    goto LAB_01339548;
                  }
                  uVar9 = uVar9 | (int)pcVar5[9] << 0x1f;
                  uVar1 = 10;
                }
              }
            }
          }
        }
        else {
          uVar1 = 5;
        }
      }
    }
LAB_01339574:
    if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    uVar1 = uVar1 + iVar2;
    *(uint *)(param_3 + 0x38) = uVar1;
LAB_013395a0:
    uVar3 = *(uint *)(param_3 + 0x28);
    uVar6 = uVar3 + uVar1;
    uVar1 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar3,uVar1);
    uVar4 = uVar6 + uVar8;
    uVar12 = uVar1 + uVar9 + (uint)CARRY4(uVar6,uVar8);
    if (!CARRY4(uVar1,uVar9) && !CARRY4(uVar1 + uVar9,(uint)CARRY4(uVar6,uVar8))) {
      puVar7 = (uint *)(param_3 + 0x30);
      uVar8 = *puVar7;
      uVar1 = *(uint *)(param_3 + 0x34);
      if (uVar12 < uVar1 || uVar1 - uVar12 < (uint)(uVar4 <= uVar8)) {
        *puVar7 = uVar4;
        *(uint *)(param_3 + 0x34) = uVar12;
        uVar9 = *(uint *)(param_3 + 0x24);
        uVar6 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar3,uVar9);
        bVar13 = uVar3 + uVar9 <= uVar4;
        if (uVar12 <= uVar6 && (uint)bVar13 <= uVar12 - uVar6) {
          uVar9 = uVar4 - uVar3;
        }
        *(uint *)(param_3 + 0x3c) = uVar9;
        FUN_01308804(&local_c8,uVar10 + uVar11 * 0xa0,param_3,uVar12 - (uVar6 + !bVar13));
        if (local_c8 == 4) {
          if (uVar1 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar7 <= uVar8) <= uVar1 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
          }
          uVar11 = *(uint *)(param_3 + 0x28);
          iVar2 = *(int *)(param_3 + 0x2c);
          *param_1 = 4;
          uVar10 = *(uint *)(param_3 + 0x24);
          *puVar7 = uVar8;
          *(uint *)(param_3 + 0x34) = uVar1;
          uVar4 = iVar2 + (uint)CARRY4(uVar11,uVar10);
          if (uVar1 <= uVar4 && (uint)(uVar11 + uVar10 <= uVar8) <= uVar1 - uVar4) {
            uVar10 = uVar8 - uVar11;
          }
          *(uint *)(param_3 + 0x3c) = uVar10;
          goto LAB_013396bc;
        }
        local_bc = local_c0;
        goto LAB_013396b0;
      }
    }
    *param_1 = 1;
    param_1[1] = 9;
    param_1[2] = 0;
  }
LAB_013396bc:
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
  return;
}

