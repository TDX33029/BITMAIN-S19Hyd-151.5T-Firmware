// FUN_01204600 @ 01204600 size=128 calls_out=0 calls_in=1
// strings: 

void FUN_01204600(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
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
    iVar3 = *(int *)(param_1 + 8);
    puVar4 = *(undefined4 **)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 8) = 0;
    if (iVar3 != 0 && puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0120467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4);
      return;
    }
  }
  return;
}

