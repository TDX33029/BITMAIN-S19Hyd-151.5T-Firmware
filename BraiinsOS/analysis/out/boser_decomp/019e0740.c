// FUN_019e0740 @ 019e0740 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_019e0740(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 *local_c;
  
  puVar6 = (undefined4 *)*param_1;
  if (param_2 != puVar6) {
    *param_2 = 0;
    param_2[1] = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = param_2;
    }
    *param_1 = param_2;
    if (param_1[1] == 0) {
      param_1[1] = param_2;
    }
    return;
  }
  local_c = param_2;
  uVar8 = FUN_019f14c0(param_1,&local_c);
  puVar2 = (uint *)((ulonglong)uVar8 >> 0x20);
  uVar1 = puVar2[1];
  uVar3 = *puVar2;
  puVar2 = (uint *)((int)uVar8 + 8);
  DataMemoryBarrier(0xb);
  uVar7 = *(uint *)((int)uVar8 + 8);
  do {
    if ((uint)(byte)uVar1 != (uVar7 & 0xffffff) >> 0x10) {
      return;
    }
    uVar4 = *puVar2;
    if (uVar4 == uVar7) {
      DataMemoryBarrier(0xb);
      bVar5 = (bool)hasExclusiveAccess(puVar2);
      if (bVar5) {
        *puVar2 = uVar7 & (uVar3 & 0x33 ^ 0xff003f);
      }
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar7 = uVar4;
  } while (!bVar5);
  return;
}

