// FUN_019d1834 @ 019d1834 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_019d1834(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_28;
  int iStack_24;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  puVar5 = (uint *)param_1[2];
  do {
    FUN_019cfff0(&local_28,uVar3,uVar4);
    if ((local_28 == 2 && iStack_24 == 0) || ((local_28 & 1) != 0)) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 - 2;
  } while (1 < uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

