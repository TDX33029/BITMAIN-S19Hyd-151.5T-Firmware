// FUN_01339858 @ 01339858 size=1200 calls_out=9 calls_in=2
// strings: assertion failed: amt <= self.limit_within_buf - self.pos_within_buf | assertion failed: limit >= self.limit

void FUN_01339858(uint *param_1,char param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined2 local_27;
  
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
  uVar5 = param_4[2];
  uVar12 = param_4[3];
  *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) + 1;
  if (uVar12 == uVar5) {
    local_84 = 1;
    local_54 = 1;
    local_64 = 1;
    local_74 = 1;
    local_44 = 1;
    local_7c = 0;
    local_80 = 0;
    local_88 = 0;
    local_27 = 0;
    local_98 = 0;
    local_4c = 0;
    local_50 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_78 = 0;
    local_28 = 2;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    local_90 = 0;
    local_2c = 0;
    local_30 = 0;
    uVar9 = uVar12;
    if (uVar12 == *param_4) {
      FUN_0132f74c(param_4);
      uVar9 = param_4[3];
    }
    uVar11 = param_4[1];
    FUN_016dd1aa(uVar12 * 0x74 + uVar11,&local_98,0x74);
    uVar5 = uVar12 + 1;
    param_4[2] = uVar5;
    uVar12 = uVar9;
  }
  else {
    if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar12,uVar5,&DAT_01890558);
    }
    uVar11 = param_4[1];
    puVar2 = (undefined4 *)(uVar11 + uVar12 * 0x74);
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 0x1c) = 2;
    *(undefined1 *)(puVar2 + 7) = 0;
    *(undefined1 *)((int)puVar2 + 0x72) = 0;
    *(undefined1 *)(puVar2 + 0x13) = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *(undefined1 *)(puVar2 + 0xb) = 0;
    *(undefined1 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)(puVar2 + 0x17) = 0;
    puVar2[2] = 0;
    FUN_0133497c(puVar2[0x1a]);
  }
  uVar9 = uVar12 + 1;
  param_4[3] = uVar9;
  if (uVar5 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar9,uVar5,&DAT_01890578);
  }
  if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890568);
  }
  iVar3 = *(int *)(param_3 + 0x38);
  uVar5 = *(int *)(param_3 + 0x3c) - iVar3;
  if (*(int *)(param_3 + 0x3c) == iVar3) {
LAB_01339a10:
    FUN_0132d5a8(&local_98,param_3);
    if (local_98 != 1) {
      uVar1 = *(uint *)(param_3 + 0x38);
      uVar9 = local_90;
      uVar10 = local_8c;
      goto LAB_01339a84;
    }
LAB_01339a2c:
    local_98 = local_94;
    local_94 = local_90;
LAB_01339b94:
    param_1[1] = local_94;
    *param_1 = local_98;
    param_1[2] = local_8c;
  }
  else {
    pcVar6 = (char *)(*(int *)(param_3 + 0x20) + iVar3);
    uVar9 = (uint)*pcVar6;
    if (-1 < (int)uVar9) {
      uVar10 = (int)uVar9 >> 0x1f;
      uVar1 = 1;
      goto LAB_01339a58;
    }
    if (uVar5 < 2) goto LAB_01339a10;
    uVar1 = (uint)pcVar6[1];
    if (-1 < (int)uVar1) {
      uVar10 = ((int)uVar1 >> 0x1f) << 7 | uVar1 >> 0x19;
      uVar9 = uVar9 & 0x7f | uVar1 << 7;
      uVar1 = 2;
      goto LAB_01339a58;
    }
    if (uVar5 < 10) goto LAB_01339a10;
    uVar10 = 0;
    uVar9 = uVar9 & 0x7f | (uVar1 & 0x7f) << 7 | ((int)pcVar6[2] & 0x7fU) << 0xe;
    uVar1 = 3;
    if (0x7fffffff < (uint)(int)pcVar6[2]) {
      uVar9 = uVar9 | ((int)pcVar6[3] & 0x7fU) << 0x15;
      uVar1 = 4;
      if (0x7fffffff < (uint)(int)pcVar6[3]) {
        uVar1 = (uint)pcVar6[4];
        uVar9 = uVar9 | uVar1 << 0x1c;
        uVar10 = (uVar1 & 0x7f) >> 4;
        if ((int)uVar1 < 0) {
          uVar10 = uVar10 | ((int)pcVar6[5] & 0x7fU) << 3;
          uVar1 = 6;
          if (0x7fffffff < (uint)(int)pcVar6[5]) {
            uVar10 = uVar10 | ((int)pcVar6[6] & 0x7fU) << 10;
            uVar1 = 7;
            if (0x7fffffff < (uint)(int)pcVar6[6]) {
              uVar10 = uVar10 | ((int)pcVar6[7] & 0x7fU) << 0x11;
              uVar1 = 8;
              if (0x7fffffff < (uint)(int)pcVar6[7]) {
                uVar10 = uVar10 | ((int)pcVar6[8] & 0x7fU) << 0x18;
                uVar1 = 9;
                if (0x7fffffff < (uint)(int)pcVar6[8]) {
                  if (pcVar6[9] < 0) {
                    local_90 = CONCAT31(local_90._1_3_,4);
                    local_94 = 1;
                    goto LAB_01339a2c;
                  }
                  uVar10 = uVar10 | (int)pcVar6[9] << 0x1f;
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
LAB_01339a58:
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                   &DAT_01890e80);
    }
    uVar1 = uVar1 + iVar3;
    *(uint *)(param_3 + 0x38) = uVar1;
LAB_01339a84:
    uVar4 = *(uint *)(param_3 + 0x28);
    uVar7 = uVar4 + uVar1;
    uVar1 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar4,uVar1);
    uVar5 = uVar7 + uVar9;
    uVar13 = uVar1 + uVar10 + (uint)CARRY4(uVar7,uVar9);
    if (!CARRY4(uVar1,uVar10) && !CARRY4(uVar1 + uVar10,(uint)CARRY4(uVar7,uVar9))) {
      puVar8 = (uint *)(param_3 + 0x30);
      uVar9 = *puVar8;
      uVar1 = *(uint *)(param_3 + 0x34);
      if (uVar13 < uVar1 || uVar1 - uVar13 < (uint)(uVar5 <= uVar9)) {
        *puVar8 = uVar5;
        *(uint *)(param_3 + 0x34) = uVar13;
        uVar10 = *(uint *)(param_3 + 0x24);
        uVar7 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar4,uVar10);
        bVar14 = uVar4 + uVar10 <= uVar5;
        if (uVar13 <= uVar7 && (uint)bVar14 <= uVar13 - uVar7) {
          uVar10 = uVar5 - uVar4;
        }
        *(uint *)(param_3 + 0x3c) = uVar10;
        FUN_01316638(&local_98,uVar12 * 0x74 + uVar11,param_3,uVar13 - (uVar7 + !bVar14));
        if (local_98 == 4) {
          if (uVar1 <= *(uint *)(param_3 + 0x34) &&
              (uint)(*puVar8 <= uVar9) <= uVar1 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
          }
          uVar12 = *(uint *)(param_3 + 0x28);
          iVar3 = *(int *)(param_3 + 0x2c);
          *param_1 = 4;
          uVar11 = *(uint *)(param_3 + 0x24);
          *puVar8 = uVar9;
          *(uint *)(param_3 + 0x34) = uVar1;
          uVar5 = iVar3 + (uint)CARRY4(uVar12,uVar11);
          if (uVar1 <= uVar5 && (uint)(uVar12 + uVar11 <= uVar9) <= uVar1 - uVar5) {
            uVar11 = uVar9 - uVar12;
          }
          *(uint *)(param_3 + 0x3c) = uVar11;
          goto LAB_01339ba0;
        }
        local_8c = local_90;
        goto LAB_01339b94;
      }
    }
    *param_1 = 1;
    param_1[1] = 9;
    param_1[2] = 0;
  }
LAB_01339ba0:
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
  return;
}

