// FUN_018947e4 @ 018947e4 size=316 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_018947e4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint *extraout_r2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_30 [3];
  int local_24;
  
  iVar5 = param_1[1];
  uVar6 = *param_1;
  FUN_0189ba04(local_30,iVar5);
  uVar8 = FUN_0189b9a4(local_30);
  local_30[0] = (int)((ulonglong)uVar8 >> 0x20);
  iVar1 = (int)uVar8;
  local_24 = iVar5;
  if (iVar5 != local_30[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_24,local_30,0);
  }
  FUN_01895fcc(iVar1,iVar5,uVar6,iVar5);
  iVar2 = param_1[4];
  if (iVar5 * 0x20 != iVar2) {
    bVar7 = iVar5 == 0;
    puVar3 = extraout_r2;
    if (!bVar7) {
      puVar3 = (uint *)(iVar1 + iVar5 * 4 + -4);
      bVar7 = puVar3 == (uint *)0x0;
    }
    if (bVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d211c4);
    }
    iVar4 = iVar2 + iVar5 * -0x20;
    *puVar3 = *puVar3 & 0xffffffffU >> (iVar5 * 0x20 - iVar2 & 0x1fU);
    do {
      FUN_01895e88(iVar1,iVar5,uVar6,iVar5);
      bVar7 = iVar4 != -1;
      iVar4 = iVar4 + 1;
    } while (bVar7);
  }
  iVar2 = -1;
  while (iVar2 = iVar2 + 1, iVar5 != iVar2) {
    FUN_01895e88(iVar1,iVar5,uVar6,iVar5);
  }
  iVar2 = 5;
  do {
    FUN_01bda5e0(iVar1,iVar1,iVar1,uVar6,param_1 + 2,iVar5);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar8;
}

