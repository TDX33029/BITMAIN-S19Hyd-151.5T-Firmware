// FUN_01425390 @ 01425390 size=384 calls_out=5 calls_in=2
// strings: 

void FUN_01425390(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;
  undefined1 auStack_58 [24];
  char local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = *(int *)(param_1 + 0x40);
  piVar5 = (int *)(iVar2 + 8);
  iVar3 = *piVar5;
  if (iVar3 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (bVar1) {
        *piVar5 = 1;
        goto LAB_014253d4;
      }
      iVar3 = *piVar5;
    } while (iVar3 == 0);
  }
  ClearExclusiveLocal();
LAB_014253d4:
  DataMemoryBarrier(0xb);
  if (iVar3 == 0) {
    puVar4 = (uint *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x10));
      }
    }
LAB_014254e4:
    FUN_01421a04(&local_28,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0xc) = uStack_24;
    *(undefined4 *)(param_1 + 0x10) = uStack_20;
  }
  else {
    if (iVar3 == 4) {
      local_28 = CONCAT22(local_28._2_2_,0xb01);
      FUN_01386464(local_40,&local_28);
      if (local_40[0] == '\x04') goto LAB_014254e4;
      if (local_40[0] == '\x03') goto LAB_01425414;
      FUN_013b8db0(&local_28,local_40);
      cVar7 = (char)local_28;
      FUN_01bed4e2(auStack_58,(uint)&local_28 | 1,0x17);
      if (cVar7 == '\x05') goto LAB_014254e4;
    }
    else {
LAB_01425414:
      local_28._0_2_ = CONCAT11(9,(char)local_28);
      FUN_01bed4e2(auStack_58,(uint)&local_28 | 1,0x17);
      cVar7 = '\x03';
    }
    local_28 = CONCAT31(local_28._1_3_,cVar7);
    FUN_01bed4e2((uint)&local_28 | 1,auStack_58,0x17);
    FUN_01431954(&local_28);
  }
  return;
}

