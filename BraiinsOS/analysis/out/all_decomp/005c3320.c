// FUN_005c3320 @ 005c3320 size=164 calls_out=1 calls_in=110
// strings: 

int * FUN_005c3320(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (uVar5 != 2) {
    iVar2 = param_1[3];
    if ((uVar5 & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(param_1[4] + 8) - 1U & 0xfffffff8) + 8;
    }
    pcVar4 = *(code **)(param_1[4] + 0x40);
    (*pcVar4)(iVar2,pcVar4,*param_1,param_1[1]);
    if (uVar5 != 0) {
      piVar3 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        piVar3 = (int *)FUN_015614d8(param_1[3],param_1[4]);
        return piVar3;
      }
      return piVar3;
    }
  }
  return (int *)(uint)DAT_018dd947;
}

