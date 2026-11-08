// FUN_008d6afc @ 008d6afc size=460 calls_out=5 calls_in=2
// strings: `DateTime + TimeDelta` overflowed | overflow converting from core::time::Duration to TimeDelta

void FUN_008d6afc(undefined4 *param_1,undefined4 param_2,uint param_3,undefined *param_4,
                 uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r2;
  int extraout_r3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  undefined1 uStack_21;
  
  FUN_00f6f318(&local_30);
  if ((&UNK_0020c49a < param_4 &&
       (uint)(param_3 < 0xa5e353f8) <= (uint)((int)&UNK_0020c49b - (int)param_4)) ||
     ((param_3 == 0xa5e353f7 && param_4 == &UNK_0020c49b && (807000000 < param_5)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("overflow converting from core::time::Duration to TimeDelta",0x3a,&uStack_21,
                 &DAT_018651bc);
  }
  if (local_28 < 1000000000) {
LAB_008d6ba4:
    uVar5 = param_3 + local_2c;
    param_4 = param_4 + CARRY4(param_3,local_2c);
    puVar4 = (undefined1 *)(local_28 + param_5);
    if ((int)puVar4 < 0) {
      bVar6 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      param_4 = param_4 + -(uint)bVar6;
      puVar4 = &DAT_3b9aca00 + (int)puVar4;
    }
    else if ((undefined1 *)0x3b9ac9ff < puVar4) {
      bVar6 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + -1000000000;
      param_4 = param_4 + bVar6;
    }
    FUN_01846048(uVar5,param_4,0x15180,0);
    local_2c = extraout_r2 + 0x15180;
    iVar3 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
    if (-1 < extraout_r3) {
      iVar3 = extraout_r3;
      local_2c = extraout_r2;
    }
    uVar1 = uVar5 - local_2c;
    iVar3 = (int)param_4 - (iVar3 + (uint)(uVar5 < local_2c));
    if (iVar3 - 0xa8c0U < 0xfffeae80 && (uint)(0xfffeae80 < uVar1) <= iVar3 + 0xa8c1U)
    goto LAB_008d6c78;
  }
  else {
    if ((param_3 != 0 || param_4 != (undefined *)0x0) ||
       ((param_5 != 0 && ((int)(2000000000 - param_5) <= local_28)))) {
      local_28 = local_28 + -1000000000;
      goto LAB_008d6ba4;
    }
    puVar4 = (undefined1 *)(param_5 + local_28);
    uVar1 = 0;
    iVar3 = 0;
  }
  uVar2 = FUN_01846048(uVar1,iVar3,0x15180,0);
  iVar3 = FUN_00f6b010(local_30,uVar2);
  if (iVar3 != 0) {
    param_1[1] = iVar3;
    param_1[2] = local_2c;
    *param_1 = 2;
    param_1[3] = puVar4;
    return;
  }
LAB_008d6c78:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("`DateTime + TimeDelta` overflowed",0x21,&DAT_0187b59c);
}

