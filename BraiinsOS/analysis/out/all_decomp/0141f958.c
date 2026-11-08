// FUN_0141f958 @ 0141f958 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_0141f958(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_1 != 5 || param_1[1] != 0) {
    FUN_0141fa98(param_1);
    iVar2 = param_1[0x66];
    if (iVar2 != 0) {
      puVar4 = (uint *)(iVar2 + 0x18);
      uVar6 = *(uint *)(iVar2 + 0x18);
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_0141f9e0;
          uVar6 = *puVar4;
          if (uVar6 == uVar5) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar5 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar1);
LAB_0141f9e0:
      if ((uVar5 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
      }
      piVar3 = (int *)param_1[0x66];
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143f388(param_1[0x66]);
          return;
        }
        return;
      }
    }
  }
  return;
}

