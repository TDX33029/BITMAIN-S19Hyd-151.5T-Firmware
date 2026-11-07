// FUN_00f6b9a0 @ 00f6b9a0 size=244 calls_out=2 calls_in=1
// strings: 

void FUN_00f6b9a0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint extraout_r2;
  int extraout_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  uVar5 = param_2[1];
  puVar6 = (undefined1 *)param_2[2];
  if ((int)puVar6 < 1000000000) {
    if ((int)puVar6 < 0) {
      bVar7 = uVar5 < 2;
      uVar5 = uVar5 - 2;
      uVar4 = -(uint)bVar7;
      puVar6 = &DAT_3b9aca00 + (int)puVar6;
    }
    else {
      bVar7 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      uVar4 = -(uint)bVar7;
    }
  }
  else if (puVar6 + -1000000000 < &DAT_3b9aca00) {
    uVar4 = 0;
    puVar6 = puVar6 + -1000000000;
  }
  else {
    bVar7 = 0xfffffffe < uVar5;
    uVar5 = uVar5 + 1;
    uVar4 = (uint)bVar7;
    puVar6 = puVar6 + -2000000000;
  }
  FUN_01846048(uVar5,uVar4,0x15180,0);
  uVar3 = extraout_r2 + 0x15180;
  iVar2 = extraout_r3 + (uint)(0xfffeae7f < extraout_r2);
  if (-1 < extraout_r3) {
    iVar2 = extraout_r3;
    uVar3 = extraout_r2;
  }
  uVar1 = FUN_01846048(uVar5 - uVar3,uVar4 - (iVar2 + (uint)(uVar5 < uVar3)),0x15180,0);
  iVar2 = FUN_00f6b010(*param_2,uVar1);
  if (iVar2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = iVar2;
    param_1[1] = uVar3;
    param_1[2] = (int)puVar6;
  }
  return;
}

