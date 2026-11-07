// FUN_01316638 @ 01316638 size=2148 calls_out=14 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01316638(uint *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *local_70;
  uint *local_6c;
  uint *local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint *local_2c;
  
  local_30 = (uint *)CONCAT13(local_30._3_1_,CONCAT21(local_30._1_2_,(undefined1)local_30));
  local_34 = (uint *)CONCAT22(local_34._2_2_,CONCAT11(local_34._1_1_,(undefined1)local_34));
  puVar1 = (uint *)(param_3 + 0x30);
LAB_013166a8:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_38,param_3);
    if (local_38 != (uint *)0x4) {
      param_1[2] = (uint)local_30;
      *param_1 = (uint)local_38;
      *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
      *(char *)((int)param_1 + 7) = (char)((uint)local_34 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)((uint)local_34 >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_38,param_3);
  uVar5 = (uint)local_30 & 0xff;
  if (local_38 != (uint *)0x4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_30._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_30;
    *param_1 = (uint)local_38;
    param_1[1] = (uint)local_34;
    return;
  }
  puVar8 = &switchD_0131670c::switchdataD_01316710;
  switch(local_34) {
  case (uint *)0x1:
    if (uVar5 == 2) {
      param_2[6] = 0;
      *(undefined1 *)(param_2 + 7) = 1;
      puVar13 = param_2 + 4;
LAB_0131693c:
      FUN_0132e8a8(&local_38,param_3,puVar13);
      goto joined_r0x01316998;
    }
    break;
  case (uint *)0x2:
    if (uVar5 == 2) {
      param_2[0xe] = 0;
      *(undefined1 *)(param_2 + 0xf) = 1;
      puVar13 = param_2 + 0xc;
      goto LAB_0131693c;
    }
    break;
  case (uint *)0x3:
    if (uVar5 != 0) goto LAB_01316d64;
    FUN_0132e394(&local_38,param_3);
    if (local_38 != (uint *)0x4) goto LAB_01316d4c;
    *param_2 = 1;
    param_2[1] = local_34;
    goto LAB_013166a8;
  case (uint *)0x4:
    if (uVar5 != 0) {
LAB_01316d7c:
      uVar3 = 1;
      uVar4 = 0;
      local_38 = (uint *)0x1;
LAB_01316d9c:
      *param_1 = (uint)local_38;
      param_1[2] = (uint)puVar8;
      param_1[1] = uVar4 | (uVar5 & 0xff) << 8 | uVar3;
      return;
    }
    FUN_0132e394(&local_38,param_3);
    if (local_38 != (uint *)0x4) {
LAB_01316d8c:
      uVar3 = (uint)local_34 & 0xff;
      uVar5 = (uint)local_34 >> 8;
      uVar4 = (uint)local_34 & 0xffff0000;
      puVar8 = local_30;
      goto LAB_01316d9c;
    }
    if (2 < (int)local_34 - 1U) {
      uVar2 = 4;
      goto LAB_013169b4;
    }
    *(undefined1 *)((int)param_2 + 0x71) = (undefined1)local_34;
    goto LAB_013166a8;
  case (uint *)0x5:
    if (uVar5 != 0) goto LAB_01316d7c;
    FUN_0132e394(&local_38,param_3);
    if (local_38 != (uint *)0x4) goto LAB_01316d8c;
    if ((int)local_34 - 1U < 0x12) {
      *(undefined1 *)((int)param_2 + 0x72) = (undefined1)local_34;
    }
    else {
      uVar2 = 5;
LAB_013169b4:
      puVar8 = local_34;
      iVar6 = FUN_013353bc(param_2 + 0x1a,uVar2);
      iVar11 = *(int *)(iVar6 + 0x20);
      if (iVar11 == *(int *)(iVar6 + 0x18)) {
        FUN_0132f4a4(iVar6 + 0x18);
      }
      puVar14 = (uint *)(*(int *)(iVar6 + 0x1c) + iVar11 * 8);
      *puVar14 = (uint)puVar8;
      puVar14[1] = (int)puVar8 >> 0x1f;
      *(int *)(iVar6 + 0x20) = iVar11 + 1;
    }
    goto LAB_013166a8;
  case (uint *)0x6:
    if (uVar5 == 2) {
      param_2[10] = 0;
      *(undefined1 *)(param_2 + 0xb) = 1;
      puVar13 = param_2 + 8;
      goto LAB_0131693c;
    }
    break;
  case (uint *)0x7:
    if (uVar5 == 2) {
      param_2[0x12] = 0;
      *(undefined1 *)(param_2 + 0x13) = 1;
      puVar13 = param_2 + 0x10;
      goto LAB_0131693c;
    }
    break;
  case (uint *)0x8:
    if (uVar5 != 2) {
      local_6c = (uint *)((uint)local_6c & 0xffff0000 | uVar5 << 8 | 1);
LAB_01316de4:
      local_34 = (uint *)0x1;
      goto LAB_01316e58;
    }
    uVar5 = *(uint *)(param_3 + 0x40);
    if (*(uint *)(param_3 + 0x44) <= uVar5) {
      local_6c = (uint *)((uint)local_6c & 0xffffff00 | 7);
      goto LAB_01316de4;
    }
    puVar13 = (undefined4 *)param_2[0x18];
    *(undefined1 *)(param_2 + 0x19) = 1;
    *(uint *)(param_3 + 0x40) = uVar5 + 1;
    if (puVar13 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar13 + 0x1d) = 3;
      *(undefined1 *)(puVar13 + 6) = 2;
      puVar13[3] = 0;
      *(undefined4 *)((int)puVar13 + 0x19) = 0x3020202;
      FUN_0133497c(puVar13[4]);
      iVar6 = *(int *)(param_3 + 0x38);
      uVar5 = *(int *)(param_3 + 0x3c) - iVar6;
      if (uVar5 == 0) goto LAB_01316b30;
LAB_01316a38:
      pcVar9 = (char *)(*(int *)(param_3 + 0x20) + iVar6);
      puVar8 = (uint *)(int)*pcVar9;
      if (-1 < (int)puVar8) {
        puVar14 = (uint *)((int)puVar8 >> 0x1f);
        uVar3 = 1;
        goto LAB_01316a58;
      }
      if (uVar5 < 2) goto LAB_01316b30;
      uVar3 = (uint)pcVar9[1];
      if (-1 < (int)uVar3) {
        puVar14 = (uint *)(((int)uVar3 >> 0x1f) << 7 | uVar3 >> 0x19);
        puVar8 = (uint *)((uint)puVar8 & 0x7f | uVar3 << 7);
        uVar3 = 2;
        goto LAB_01316a58;
      }
      if (uVar5 < 10) goto LAB_01316b30;
      puVar14 = (uint *)0x0;
      puVar8 = (uint *)((uint)puVar8 & 0x7f | (uVar3 & 0x7f) << 7 | ((int)pcVar9[2] & 0x7fU) << 0xe)
      ;
      uVar3 = 3;
      if ((uint)(int)pcVar9[2] < 0x80000000) {
LAB_01316a58:
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                       &DAT_01890e80);
        }
        uVar3 = uVar3 + iVar6;
        *(uint *)(param_3 + 0x38) = uVar3;
        goto LAB_01316b94;
      }
      puVar8 = (uint *)((uint)puVar8 | ((int)pcVar9[3] & 0x7fU) << 0x15);
      uVar3 = 4;
      if ((uint)(int)pcVar9[3] < 0x80000000) goto LAB_01316a58;
      uVar3 = (uint)pcVar9[4];
      puVar8 = (uint *)((uint)puVar8 | uVar3 << 0x1c);
      puVar14 = (uint *)((uVar3 & 0x7f) >> 4);
      if (-1 < (int)uVar3) {
        uVar3 = 5;
        goto LAB_01316a58;
      }
      puVar14 = (uint *)((uint)puVar14 | ((int)pcVar9[5] & 0x7fU) << 3);
      uVar3 = 6;
      if ((uint)(int)pcVar9[5] < 0x80000000) goto LAB_01316a58;
      puVar14 = (uint *)((uint)puVar14 | ((int)pcVar9[6] & 0x7fU) << 10);
      uVar3 = 7;
      if ((uint)(int)pcVar9[6] < 0x80000000) goto LAB_01316a58;
      puVar14 = (uint *)((uint)puVar14 | ((int)pcVar9[7] & 0x7fU) << 0x11);
      uVar3 = 8;
      if ((uint)(int)pcVar9[7] < 0x80000000) goto LAB_01316a58;
      puVar14 = (uint *)((uint)puVar14 | ((int)pcVar9[8] & 0x7fU) << 0x18);
      uVar3 = 9;
      if ((uint)(int)pcVar9[8] < 0x80000000) goto LAB_01316a58;
      if (-1 < pcVar9[9]) {
        puVar14 = (uint *)((uint)puVar14 | (int)pcVar9[9] << 0x1f);
        uVar3 = 10;
        goto LAB_01316a58;
      }
      local_30 = (uint *)CONCAT31(local_30._1_3_,4);
      local_6c = local_30;
      local_70 = local_2c;
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
LAB_01316e28:
      local_34 = (uint *)0x1;
      goto LAB_01316e58;
    }
    puVar13 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *(undefined2 *)(puVar13 + 7) = 0x303;
    puVar13[1] = 8;
    puVar13[2] = 0;
    *puVar13 = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0x2020202;
    param_2[0x18] = puVar13;
    iVar6 = *(int *)(param_3 + 0x38);
    uVar5 = *(int *)(param_3 + 0x3c) - iVar6;
    if (uVar5 != 0) goto LAB_01316a38;
LAB_01316b30:
    FUN_0132d5a8(&local_38,param_3);
    if (local_38 != (uint *)0x0) goto code_r0x01316b48;
    uVar3 = *(uint *)(param_3 + 0x38);
    puVar8 = local_30;
    puVar14 = local_2c;
LAB_01316b94:
    uVar7 = *(uint *)(param_3 + 0x28);
    uVar4 = uVar7 + uVar3;
    uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar3);
    uVar5 = uVar4 + (int)puVar8;
    uVar3 = (int)puVar14 + CARRY4(uVar4,(uint)puVar8) + uVar12;
    if (!CARRY4(uVar12,(uint)puVar14) &&
        !CARRY4(uVar12 + (int)puVar14,(uint)CARRY4(uVar4,(uint)puVar8))) {
      uVar4 = *puVar1;
      uVar12 = *(uint *)(param_3 + 0x34);
      if (uVar3 < uVar12 || uVar12 - uVar3 < (uint)(uVar5 <= uVar4)) {
        uVar10 = *(uint *)(param_3 + 0x24);
        *puVar1 = uVar5;
        *(uint *)(param_3 + 0x34) = uVar3;
        uVar15 = uVar7 + uVar10;
        uVar16 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar7,uVar10);
        if (uVar3 <= uVar16 && (uint)(uVar15 <= uVar5) <= uVar3 - uVar16) {
          uVar10 = uVar5 - uVar7;
        }
        *(uint *)(param_3 + 0x3c) = uVar10;
        FUN_012fef00(&local_38,puVar13,param_3,uVar5 - uVar15);
        if (local_38 != (uint *)0x4) {
          local_6c = local_34;
          local_70 = local_30;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_34 = local_38;
          goto LAB_01316e58;
        }
        if (uVar12 <= *(uint *)(param_3 + 0x34) &&
            (uint)(*puVar1 <= uVar4) <= uVar12 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
        }
        uVar7 = *(uint *)(param_3 + 0x24);
        uVar5 = *(uint *)(param_3 + 0x28);
        *puVar1 = uVar4;
        *(uint *)(param_3 + 0x34) = uVar12;
        uVar3 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar5,uVar7);
        if (uVar12 <= uVar3 && (uint)(uVar5 + uVar7 <= uVar4) <= uVar12 - uVar3) {
          uVar7 = uVar4 - uVar5;
        }
        *(uint *)(param_3 + 0x3c) = uVar7;
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        goto LAB_013166a8;
      }
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    local_70 = (uint *)0x0;
    local_6c = (uint *)0x9;
    goto LAB_01316e28;
  case (uint *)0x9:
    if (uVar5 != 0) goto LAB_01316d64;
    FUN_0132e394(&local_38,param_3);
    if (local_38 != (uint *)0x4) goto LAB_01316d4c;
    param_2[2] = 1;
    param_2[3] = local_34;
    goto LAB_013166a8;
  case (uint *)0xa:
    if (uVar5 == 2) {
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x17) = 1;
      puVar13 = param_2 + 0x14;
      goto LAB_0131693c;
    }
    break;
  default:
    FUN_01337f28(&local_38,local_34,uVar5,param_3,param_2 + 0x1a);
joined_r0x01316998:
    if (local_38 != (uint *)0x4) goto LAB_01316d4c;
    goto LAB_013166a8;
  case (uint *)0x11:
    if (uVar5 != 0) {
LAB_01316d64:
      *(undefined1 *)((int)param_1 + 5) = (undefined1)local_30;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 1;
      return;
    }
    FUN_0132d400(&local_38,param_3);
    if (local_38 != (uint *)0x4) {
      param_1[2] = (uint)local_30;
      *(uint *)((int)param_1 + 5) = CONCAT13((undefined1)local_30,(int3)((uint)local_34 >> 8));
      *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
      *param_1 = (uint)local_38;
      return;
    }
    *(undefined1 *)(param_2 + 0x1c) = (undefined1)local_34;
    goto LAB_013166a8;
  }
  local_34 = (uint *)CONCAT31(CONCAT21(local_34._2_2_,(undefined1)local_30),1);
  local_38 = (uint *)0x1;
LAB_01316d4c:
  param_1[1] = (uint)local_34;
  *param_1 = (uint)local_38;
  param_1[2] = (uint)local_30;
  return;
code_r0x01316b48:
  local_6c = local_30;
  local_70 = local_2c;
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
  if (local_34 != (uint *)0x4) {
LAB_01316e58:
    *param_1 = (uint)local_34;
    param_1[1] = (uint)local_6c;
    param_1[2] = (uint)local_70;
    return;
  }
  goto LAB_013166a8;
}

