// FUN_00ec0518 @ 00ec0518 size=440 calls_out=4 calls_in=2
// strings: `DateTime + TimeDelta` overflowed | overflow converting from core::time::Duration to TimeDelta

void FUN_00ec0518(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r2;
  undefined *puVar4;
  int extraout_r3;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uStack_21;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar4 = *(undefined **)(param_2 + 0x34);
  if ((&UNK_0020c49a < puVar4 &&
       (uint)(uVar3 < 0xa5e353f8) <= (uint)((int)&UNK_0020c49b - (int)puVar4)) ||
     ((uVar1 = *(uint *)(param_2 + 0x38), uVar3 == 0xa5e353f7 && puVar4 == &UNK_0020c49b &&
      (807000000 < uVar1)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("overflow converting from core::time::Duration to TimeDelta",0x3a,&uStack_21,
                 &DAT_0187bba8);
  }
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(uint *)(param_2 + 0x50);
  iVar5 = *(int *)(param_2 + 0x54);
  if (iVar5 < 1000000000) {
LAB_00ec05b4:
    uVar8 = uVar3 + uVar7;
    puVar4 = puVar4 + CARRY4(uVar3,uVar7);
    puVar6 = (undefined1 *)(iVar5 + uVar1);
    if ((int)puVar6 < 0) {
      bVar10 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + -(uint)bVar10;
      puVar6 = &DAT_3b9aca00 + (int)puVar6;
    }
    else if ((undefined1 *)0x3b9ac9ff < puVar6) {
      bVar10 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + -1000000000;
      puVar4 = puVar4 + bVar10;
    }
    FUN_01846048(uVar8,puVar4,0x15180,0);
    uVar7 = extraout_r2 + 0x15180;
    iVar5 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
    if (-1 < extraout_r3) {
      iVar5 = extraout_r3;
      uVar7 = extraout_r2;
    }
    uVar3 = uVar8 - uVar7;
    iVar5 = (int)puVar4 - (iVar5 + (uint)(uVar8 < uVar7));
    if (iVar5 - 0xa8c0U < 0xfffeae80 && (uint)(0xfffeae80 < uVar3) <= iVar5 + 0xa8c1U)
    goto LAB_00ec0680;
  }
  else {
    if ((uVar3 != 0 || puVar4 != (undefined *)0x0) ||
       ((uVar1 != 0 && ((int)(2000000000 - uVar1) <= iVar5)))) {
      iVar5 = iVar5 + -1000000000;
      goto LAB_00ec05b4;
    }
    puVar6 = (undefined1 *)(uVar1 + iVar5);
    uVar3 = 0;
    iVar5 = 0;
  }
  uVar2 = FUN_01846048(uVar3,iVar5,0x15180,0);
  iVar5 = FUN_00f6b010(uVar9,uVar2);
  if (iVar5 != 0) {
    *param_1 = iVar5;
    param_1[1] = uVar7;
    param_1[2] = (int)puVar6;
    return;
  }
LAB_00ec0680:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("`DateTime + TimeDelta` overflowed",0x21,&DAT_0187b59c);
}

