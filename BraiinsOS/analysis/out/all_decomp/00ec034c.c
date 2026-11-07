// FUN_00ec034c @ 00ec034c size=440 calls_out=4 calls_in=1
// strings: `DateTime + TimeDelta` overflowed | overflow converting from core::time::Duration to TimeDelta

void FUN_00ec034c(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r2;
  undefined *puVar5;
  int extraout_r3;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uStack_21;
  
  uVar4 = *param_2;
  puVar5 = (undefined *)param_2[1];
  if ((&UNK_0020c49a < puVar5 &&
       (uint)(uVar4 < 0xa5e353f8) <= (uint)((int)&UNK_0020c49b - (int)puVar5)) ||
     ((uVar1 = param_2[2], uVar4 == 0xa5e353f7 && puVar5 == &UNK_0020c49b && (807000000 < uVar1))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("overflow converting from core::time::Duration to TimeDelta",0x3a,&uStack_21,
                 &DAT_0187bba8);
  }
  uVar10 = param_2[4];
  uVar8 = param_2[5];
  uVar6 = param_2[6];
  if ((int)uVar6 < 1000000000) {
LAB_00ec03e8:
    uVar9 = uVar4 + uVar8;
    puVar5 = puVar5 + CARRY4(uVar4,uVar8);
    puVar7 = (undefined1 *)(uVar6 + uVar1);
    if ((int)puVar7 < 0) {
      bVar11 = uVar9 == 0;
      uVar9 = uVar9 - 1;
      puVar5 = puVar5 + -(uint)bVar11;
      puVar7 = &DAT_3b9aca00 + (int)puVar7;
    }
    else if ((undefined1 *)0x3b9ac9ff < puVar7) {
      bVar11 = 0xfffffffe < uVar9;
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + -1000000000;
      puVar5 = puVar5 + bVar11;
    }
    FUN_01846048(uVar9,puVar5,0x15180,0);
    uVar8 = extraout_r2 + 0x15180;
    iVar3 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
    if (-1 < extraout_r3) {
      iVar3 = extraout_r3;
      uVar8 = extraout_r2;
    }
    uVar4 = uVar9 - uVar8;
    iVar3 = (int)puVar5 - (iVar3 + (uint)(uVar9 < uVar8));
    if (iVar3 - 0xa8c0U < 0xfffeae80 && (uint)(0xfffeae80 < uVar4) <= iVar3 + 0xa8c1U)
    goto LAB_00ec04b4;
  }
  else {
    if ((uVar4 != 0 || puVar5 != (undefined *)0x0) ||
       ((uVar1 != 0 && ((int)(2000000000 - uVar1) <= (int)uVar6)))) {
      uVar6 = uVar6 + 0xc4653600;
      goto LAB_00ec03e8;
    }
    puVar7 = (undefined1 *)(uVar1 + uVar6);
    uVar4 = 0;
    iVar3 = 0;
  }
  uVar2 = FUN_01846048(uVar4,iVar3,0x15180,0);
  iVar3 = FUN_00f6b010(uVar10,uVar2);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    param_1[1] = uVar8;
    param_1[2] = (int)puVar7;
    return;
  }
LAB_00ec04b4:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("`DateTime + TimeDelta` overflowed",0x21,&DAT_0187b59c);
}

