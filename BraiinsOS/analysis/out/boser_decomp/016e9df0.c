// FUN_016e9df0 @ 016e9df0 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_016e9df0(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int extraout_r12;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint *puStack_30;
  code *pcStack_2c;
  
  bVar12 = *param_2 == 0;
  if (bVar12) {
    *param_2 = -1;
    if (param_2[3] == 0) {
      *param_1 = 0x10;
    }
    else {
      iVar3 = param_2[3] + -1;
      param_2[3] = iVar3;
      puVar4 = (undefined4 *)(param_2[2] + iVar3 * 0x1c);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      *param_1 = *puVar4;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      uVar9 = puVar4[4];
      uVar10 = puVar4[5];
      uVar11 = puVar4[6];
      param_1[3] = puVar4[3];
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      param_1[6] = uVar11;
    }
    *param_2 = 0;
    return;
  }
  uVar13 = FUN_01306fc8(&DAT_01d0a428);
  puVar2 = (uint *)((ulonglong)uVar13 >> 0x20);
  puVar1 = (uint *)uVar13;
  if (bVar12) {
    puVar1 = (uint *)((extraout_r12 >> 0xb) - extraout_r2);
  }
  uVar7 = *puVar2;
  iVar3 = uVar7 - 7;
  if (uVar7 < 7) {
    iVar3 = 0;
  }
  if (iVar3 == 1) {
    uVar13 = FUN_016571c0();
    uVar5 = (uint)((ulonglong)uVar13 >> 0x20);
    if (uVar5 == 0) {
      uVar6 = FUN_016dee1c();
      *puVar1 = 0;
    }
    else {
      uVar6 = FUN_016df13c((uint)uVar13,uVar5);
      puVar1[2] = uVar5;
      *puVar1 = 1;
      puVar1[1] = (uint)uVar13;
    }
    puVar1[6] = uVar6;
  }
  else {
    if (iVar3 != 0) {
      pcStack_2c = FUN_016ea744;
      puStack_30 = puVar2;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005a3230,&puStack_30,&DAT_01d0a468);
    }
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    uVar5 = puVar2[4];
    uVar6 = puVar2[5];
    uVar8 = puVar2[6];
    puVar1[3] = puVar2[3];
    puVar1[4] = uVar5;
    puVar1[5] = uVar6;
    puVar1[6] = uVar8;
  }
  if (uVar7 < 9) {
    return;
  }
  iVar3 = *puVar2 - 7;
  if (*puVar2 < 7) {
    iVar3 = 0;
  }
  switch(iVar3) {
  case 0:
    FUN_016df204();
    FUN_016eada0(puVar2);
    thunk_FUN_01be4678(puVar2[6]);
    return;
  case 1:
    FUN_0134bd64(puVar2[1],puVar2[2]);
    return;
  case 2:
    FUN_0134aee0(puVar2[1],puVar2[2],4,8);
    return;
  case 3:
    FUN_0134aee0(puVar2[1],puVar2[2],1,2);
    return;
  default:
    return;
  }
}

