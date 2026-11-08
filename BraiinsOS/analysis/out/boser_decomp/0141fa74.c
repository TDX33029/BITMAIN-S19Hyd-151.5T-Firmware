// FUN_0141fa74 @ 0141fa74 size=252 calls_out=0 calls_in=3
// strings: 

longlong FUN_0141fa74(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = *param_1;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar6 + 0x28) == '\0') {
    uVar7 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    pcVar3 = (char *)(iVar6 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar2 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar2);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      uVar4 = 0;
      if (*(int *)(iVar6 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar6 + 0x10) + 0xc))(*(undefined4 *)(iVar6 + 0x14));
        uVar4 = extraout_r1;
      }
      *(undefined8 *)(iVar6 + 0x10) = uVar7;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar6 + 0x28) == '\0') {
        return CONCAT44(uVar4,1);
      }
    }
    else {
      (**(code **)((int)uVar7 + 0xc))((int)((ulonglong)uVar7 >> 0x20));
    }
  }
  pcVar3 = (char *)(iVar6 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar3;
    bVar2 = (bool)hasExclusiveAccess(pcVar3);
  } while (!bVar2);
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    uVar5 = *(uint *)(iVar6 + 8);
    *(undefined4 *)(iVar6 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    return (ulonglong)uVar5 << 0x20;
  }
  return 0;
}

