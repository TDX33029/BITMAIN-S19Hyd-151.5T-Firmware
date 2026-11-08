// FUN_01646f04 @ 01646f04 size=336 calls_out=6 calls_in=1
// strings: threads should not terminate unexpectedly

undefined8 FUN_01646f04(undefined4 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 *local_18;
  code *local_14;
  
  local_1c = FUN_016debbe(param_1[2],0);
  if (local_1c != 0) {
    local_20[0] = 0;
    local_14 = FUN_015ef5b4;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057902e,&local_18,&DAT_018aae1c);
  }
  piVar3 = (int *)param_1[1];
  piVar5 = piVar3 + 1;
  do {
    if (*piVar5 != 1) {
      ClearExclusiveLocal();
      goto LAB_01647044;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = -1;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  piVar3[1] = 1;
  if (*piVar3 == 1) {
    iVar4 = param_1[1];
    uVar6 = *(uint *)(iVar4 + 0xc);
    uVar2 = *(undefined8 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0xc) = 0;
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018acac0);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*param_1);
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659070(param_1[1]);
    }
    return uVar2;
  }
LAB_01647044:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("threads should not terminate unexpectedly",0x29,&DAT_018acab0);
}

