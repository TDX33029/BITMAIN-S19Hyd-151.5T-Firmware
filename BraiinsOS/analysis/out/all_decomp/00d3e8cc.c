// FUN_00d3e8cc @ 00d3e8cc size=136 calls_out=0 calls_in=3
// strings: 

void FUN_00d3e8cc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x20);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 0x14));
    }
    if ((uVar5 & 2) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 8) = 0;
    if (iVar4 != 0 && puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d3e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3);
      return;
    }
  }
  return;
}

