// FUN_0131aeb4 @ 0131aeb4 size=1664 calls_out=11 calls_in=2
// strings: assertion failed: limit >= self.limit | assertion failed: amt <= self.limit_within_buf - self.pos_within_buf

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0131aeb4(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint local_64;
  uint local_60;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  local_30 = CONCAT13(local_30._3_1_,CONCAT21(local_30._1_2_,(undefined1)local_30));
  local_34 = CONCAT22(local_34._2_2_,CONCAT11(local_34._1_1_,(undefined1)local_34));
  puVar1 = (uint *)(param_3 + 0x30);
LAB_0131af10:
  if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
    FUN_0132e9b8(&local_38,param_3);
    if (local_38 != 4) {
      param_1[2] = local_30;
      *param_1 = local_38;
      *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
      *(char *)((int)param_1 + 7) = (char)(local_34 >> 0x18);
      *(short *)((int)param_1 + 5) = (short)(local_34 >> 8);
      return;
    }
    if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
      *param_1 = 4;
      return;
    }
  }
  FUN_0129a648(&local_38,param_3);
  uVar4 = local_30 & 0xff;
  if (local_38 != 4) {
    *(undefined1 *)((int)param_1 + 0xb) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 9) = local_30._1_2_;
    *(undefined1 *)(param_1 + 2) = (undefined1)local_30;
    *param_1 = local_38;
    param_1[1] = local_34;
    return;
  }
  switch(local_34) {
  case 1:
    if (uVar4 != 2) {
LAB_0131b3fc:
      local_34 = CONCAT31(CONCAT21(local_34._2_2_,(undefined1)local_30),1);
      local_38 = 1;
      goto LAB_0131b40c;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    iVar5 = param_2;
    break;
  case 2:
    if (uVar4 != 2) goto LAB_0131b3fc;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    iVar5 = param_2 + 0x10;
    break;
  case 3:
    if (uVar4 != 2) goto LAB_0131b3fc;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    iVar5 = param_2 + 0x20;
    break;
  case 4:
    if (uVar4 != 2) {
      local_60 = local_60 & 0xffff0000 | uVar4 << 8 | 1;
LAB_0131b480:
      local_34 = 1;
      goto LAB_0131b4d0;
    }
    uVar4 = *(uint *)(param_3 + 0x40);
    if (*(uint *)(param_3 + 0x44) <= uVar4) {
      local_60 = local_60 & 0xffffff00 | 7;
      goto LAB_0131b480;
    }
    puVar11 = *(undefined4 **)(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(uint *)(param_3 + 0x40) = uVar4 + 1;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x1c);
      }
      *puVar11 = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[1] = 8;
      *(undefined2 *)(puVar11 + 6) = 0x302;
      *(undefined4 **)(param_2 + 0x30) = puVar11;
      iVar5 = *(int *)(param_3 + 0x38);
      uVar4 = *(int *)(param_3 + 0x3c) - iVar5;
      if (uVar4 == 0) goto LAB_0131b1ec;
LAB_0131b120:
      pcVar7 = (char *)(*(int *)(param_3 + 0x20) + iVar5);
      uVar8 = (uint)*pcVar7;
      if (-1 < (int)uVar8) {
        uVar10 = (int)uVar8 >> 0x1f;
        uVar2 = 1;
        goto LAB_0131b13c;
      }
      if (uVar4 < 2) goto LAB_0131b1ec;
      uVar2 = (uint)pcVar7[1];
      if (-1 < (int)uVar2) {
        uVar10 = ((int)uVar2 >> 0x1f) << 7 | uVar2 >> 0x19;
        uVar8 = uVar8 & 0x7f | uVar2 << 7;
        uVar2 = 2;
        goto LAB_0131b13c;
      }
      if (uVar4 < 10) goto LAB_0131b1ec;
      uVar10 = 0;
      uVar8 = uVar8 & 0x7f | (uVar2 & 0x7f) << 7 | ((int)pcVar7[2] & 0x7fU) << 0xe;
      uVar2 = 3;
      if ((uint)(int)pcVar7[2] < 0x80000000) {
LAB_0131b13c:
        if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: amt <= self.limit_within_buf - self.pos_within_buf",0x44,
                       &DAT_01890e80);
        }
        uVar2 = uVar2 + iVar5;
        *(uint *)(param_3 + 0x38) = uVar2;
        goto LAB_0131b24c;
      }
      uVar8 = uVar8 | ((int)pcVar7[3] & 0x7fU) << 0x15;
      uVar2 = 4;
      if ((uint)(int)pcVar7[3] < 0x80000000) goto LAB_0131b13c;
      uVar2 = (uint)pcVar7[4];
      uVar8 = uVar8 | uVar2 << 0x1c;
      uVar10 = (uVar2 & 0x7f) >> 4;
      if (-1 < (int)uVar2) {
        uVar2 = 5;
        goto LAB_0131b13c;
      }
      uVar10 = uVar10 | ((int)pcVar7[5] & 0x7fU) << 3;
      uVar2 = 6;
      if ((uint)(int)pcVar7[5] < 0x80000000) goto LAB_0131b13c;
      uVar10 = uVar10 | ((int)pcVar7[6] & 0x7fU) << 10;
      uVar2 = 7;
      if ((uint)(int)pcVar7[6] < 0x80000000) goto LAB_0131b13c;
      uVar10 = uVar10 | ((int)pcVar7[7] & 0x7fU) << 0x11;
      uVar2 = 8;
      if ((uint)(int)pcVar7[7] < 0x80000000) goto LAB_0131b13c;
      uVar10 = uVar10 | ((int)pcVar7[8] & 0x7fU) << 0x18;
      uVar2 = 9;
      if ((uint)(int)pcVar7[8] < 0x80000000) goto LAB_0131b13c;
      if (-1 < pcVar7[9]) {
        uVar10 = uVar10 | (int)pcVar7[9] << 0x1f;
        uVar2 = 10;
        goto LAB_0131b13c;
      }
      local_30._0_1_ = 4;
      local_30 = CONCAT31(local_30._1_3_,4);
      local_64 = local_2c;
      local_60 = local_30;
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
LAB_0131b4a4:
      local_34 = 1;
      goto LAB_0131b4d0;
    }
    puVar11[3] = 0;
    *(undefined2 *)(puVar11 + 6) = 0x302;
    FUN_0133497c(puVar11[4]);
    iVar5 = *(int *)(param_3 + 0x38);
    uVar4 = *(int *)(param_3 + 0x3c) - iVar5;
    if (uVar4 != 0) goto LAB_0131b120;
LAB_0131b1ec:
    FUN_0132d5a8(&local_38,param_3);
    if (local_38 != 0) goto code_r0x0131b204;
    uVar2 = *(uint *)(param_3 + 0x38);
    uVar8 = local_30;
    uVar10 = local_2c;
LAB_0131b24c:
    uVar6 = *(uint *)(param_3 + 0x28);
    uVar3 = uVar6 + uVar2;
    uVar9 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar2);
    uVar4 = uVar3 + uVar8;
    uVar2 = uVar9 + uVar10 + (uint)CARRY4(uVar3,uVar8);
    if (!CARRY4(uVar9,uVar10) && !CARRY4(uVar9 + uVar10,(uint)CARRY4(uVar3,uVar8))) {
      uVar8 = *puVar1;
      uVar10 = *(uint *)(param_3 + 0x34);
      if (uVar2 < uVar10 || uVar10 - uVar2 < (uint)(uVar4 <= uVar8)) {
        uVar3 = *(uint *)(param_3 + 0x24);
        *puVar1 = uVar4;
        *(uint *)(param_3 + 0x34) = uVar2;
        uVar9 = uVar6 + uVar3;
        uVar12 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar6,uVar3);
        if (uVar2 <= uVar12 && (uint)(uVar9 <= uVar4) <= uVar2 - uVar12) {
          uVar3 = uVar4 - uVar6;
        }
        *(uint *)(param_3 + 0x3c) = uVar3;
        FUN_01301f84(&local_38,puVar11,param_3,uVar4 - uVar9);
        if (local_38 != 4) {
          local_60 = local_34;
          local_64 = local_30;
          *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
          local_34 = local_38;
          goto LAB_0131b4d0;
        }
        if (uVar10 <= *(uint *)(param_3 + 0x34) &&
            (uint)(*puVar1 <= uVar8) <= uVar10 - *(uint *)(param_3 + 0x34)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: limit >= self.limit",0x25,&DAT_01890650);
        }
        uVar3 = *(uint *)(param_3 + 0x24);
        uVar4 = *(uint *)(param_3 + 0x28);
        *puVar1 = uVar8;
        *(uint *)(param_3 + 0x34) = uVar10;
        uVar2 = *(int *)(param_3 + 0x2c) + (uint)CARRY4(uVar4,uVar3);
        if (uVar10 <= uVar2 && (uint)(uVar4 + uVar3 <= uVar8) <= uVar10 - uVar2) {
          uVar3 = uVar8 - uVar4;
        }
        *(uint *)(param_3 + 0x3c) = uVar3;
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
        goto LAB_0131af10;
      }
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
    local_64 = 0;
    local_60 = 9;
    goto LAB_0131b4a4;
  case 5:
    if (uVar4 != 0) {
LAB_0131b420:
      *(undefined1 *)((int)param_1 + 5) = (undefined1)local_30;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 1;
      return;
    }
    FUN_0132d400(&local_38,param_3);
    if (local_38 != 4) goto LAB_0131b438;
    *(undefined1 *)(param_2 + 0x40) = (undefined1)local_34;
    goto LAB_0131af10;
  case 6:
    if (uVar4 != 0) goto LAB_0131b420;
    FUN_0132d400(&local_38,param_3);
    if (local_38 != 4) {
LAB_0131b438:
      param_1[2] = local_30;
      *(uint *)((int)param_1 + 5) = CONCAT13((undefined1)local_30,(int3)(local_34 >> 8));
      *(undefined1 *)(param_1 + 1) = (undefined1)local_34;
      *param_1 = local_38;
      return;
    }
    *(undefined1 *)(param_2 + 0x41) = (undefined1)local_34;
    goto LAB_0131af10;
  default:
    FUN_01337f28(&local_38,local_34,uVar4,param_3,param_2 + 0x38);
    goto joined_r0x0131b0c8;
  }
  FUN_0132e8a8(&local_38,param_3,iVar5);
joined_r0x0131b0c8:
  if (local_38 != 4) {
LAB_0131b40c:
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
    return;
  }
  goto LAB_0131af10;
code_r0x0131b204:
  local_64 = local_2c;
  local_60 = local_30;
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
  if (local_34 != 4) {
LAB_0131b4d0:
    *param_1 = local_34;
    param_1[1] = local_60;
    param_1[2] = local_64;
    return;
  }
  goto LAB_0131af10;
}

