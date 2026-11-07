// FUN_00a337fc @ 00a337fc size=568 calls_out=6 calls_in=1
// strings: overflow converting from core::time::Duration to TimeDelta | `DateTime + TimeDelta` overflowed

void FUN_00a337fc(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r2;
  undefined *puVar4;
  int extraout_r3;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  int local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 auStack_2c [12];
  
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar4 = *(undefined **)(param_2 + 0x34);
  if ((&UNK_0020c49a < puVar4 &&
       (uint)(uVar3 < 0xa5e353f8) <= (uint)((int)&UNK_0020c49b - (int)puVar4)) ||
     ((uVar1 = *(uint *)(param_2 + 0x38), uVar3 == 0xa5e353f7 && puVar4 == &UNK_0020c49b &&
      (807000000 < uVar1)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("overflow converting from core::time::Duration to TimeDelta",0x3a,&local_48,
                 &DAT_0186bfc8,&DAT_0187b58c);
  }
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  local_34 = *(uint *)(param_2 + 0x50);
  iVar5 = *(int *)(param_2 + 0x54);
  if (iVar5 < 1000000000) {
LAB_00a3389c:
    uVar7 = uVar3 + local_34;
    puVar4 = puVar4 + CARRY4(uVar3,local_34);
    puVar6 = (undefined1 *)(iVar5 + uVar1);
    if ((int)puVar6 < 0) {
      bVar9 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      puVar6 = &DAT_3b9aca00 + (int)puVar6;
      puVar4 = puVar4 + -(uint)bVar9;
    }
    else if ((undefined1 *)0x3b9ac9ff < puVar6) {
      bVar9 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + -1000000000;
      puVar4 = puVar4 + bVar9;
    }
    FUN_01846048(uVar7,puVar4,0x15180,0);
    local_34 = extraout_r2 + 0x15180;
    iVar5 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
    if (-1 < extraout_r3) {
      iVar5 = extraout_r3;
      local_34 = extraout_r2;
    }
    uVar3 = uVar7 - local_34;
    iVar5 = (int)puVar4 - (iVar5 + (uint)(uVar7 < local_34));
    if (iVar5 - 0xa8c0U < 0xfffeae80 && (uint)(0xfffeae80 < uVar3) <= iVar5 + 0xa8c1U)
    goto LAB_00a33a1c;
  }
  else {
    if ((uVar3 != 0 || puVar4 != (undefined *)0x0) ||
       ((uVar1 != 0 && ((int)(2000000000 - uVar1) <= iVar5)))) {
      iVar5 = iVar5 + -1000000000;
      goto LAB_00a3389c;
    }
    puVar6 = (undefined1 *)(uVar1 + iVar5);
    uVar3 = 0;
    iVar5 = 0;
  }
  uVar2 = FUN_01846048(uVar3,iVar5,0x15180,0);
  local_38 = FUN_00f6b010(uVar8,uVar2);
  if (local_38 != 0) {
    local_30 = puVar6;
    FUN_00f6f318(auStack_2c);
    FUN_00f6ba94(&local_48,&local_38,auStack_2c);
    if ((int)local_44 < 0) {
      local_40 = &DAT_3b9aca00;
      local_48 = extraout_r1;
    }
    else if ((undefined1 *)0x3b9ac9ff < local_40) {
      uVar1 = (uint)((ulonglong)((uint)local_40 >> 9) * 0x44b83 >> 0x20);
      uVar3 = uVar1 >> 7;
      bVar9 = CARRY4(local_48,uVar3);
      local_48 = local_48 + uVar3;
      local_40 = local_40 + (uVar1 >> 7) * -1000000000;
      local_44 = local_44 + bVar9;
    }
    if (local_40 == &DAT_3b9aca00) {
      local_40 = (undefined1 *)0x0;
      local_44 = 0;
      local_48 = 0;
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = (uint)local_40;
    return;
  }
LAB_00a33a1c:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("`DateTime + TimeDelta` overflowed",0x21,&DAT_0187b59c);
}

