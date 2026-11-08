// FUN_01403810 @ 01403810 size=280 calls_out=3 calls_in=4
// strings: 

void FUN_01403810(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = *(undefined4 **)(param_1 + 0x10);
  local_18 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1c = param_1 + 0xc;
  local_14 = 0;
  local_20 = local_24 + local_18 * 3;
  puVar2 = local_24;
  if (local_18 != 0) {
    do {
      puVar2 = local_24 + 3;
      piVar5 = (int *)*local_24;
      if (piVar5 == (int *)0x0) break;
      piVar4 = piVar5 + 5;
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
LAB_0140387c:
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) goto code_r0x01403888;
        *piVar4 = local_24[1];
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar4 = (int *)(piVar5[4] + 0x18);
        do {
          iVar3 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = 1;
        local_24 = puVar2;
        if (iVar3 == -1) {
          FUN_01be6c3c(0xf0,piVar4,0x81,1);
        }
        goto LAB_0140389c;
      }
LAB_01403894:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      local_24 = puVar2;
LAB_0140389c:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01319d44(piVar5);
      }
      puVar2 = local_24;
    } while (local_24 != local_20);
  }
  local_24 = puVar2;
  FUN_01409afc(&local_24);
  return;
code_r0x01403888:
  if (*piVar4 != 0) goto LAB_01403894;
  goto LAB_0140387c;
}

