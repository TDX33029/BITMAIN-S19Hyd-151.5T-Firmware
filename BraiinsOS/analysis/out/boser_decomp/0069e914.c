// FUN_0069e914 @ 0069e914 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_0069e914(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *local_a0;
  int local_9c;
  
  do {
    FUN_0069eafc(&local_a0,param_2);
    if (local_a0 == (int *)0x0) {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    piVar1 = *(int **)(param_2 + 0x20);
    bVar3 = *piVar1 <= *(int *)(local_9c + 0x68);
    if ((*(int *)(local_9c + 0x68) == *piVar1) &&
       (bVar3 = (uint)piVar1[1] <= *(uint *)(local_9c + 0x6c),
       *(uint *)(local_9c + 0x6c) == piVar1[1])) {
      if (*(uint *)(local_9c + 0x70) < (uint)piVar1[2]) {
LAB_0069e9d4:
        FUN_0069ed40(&local_a0);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *local_a0;
          bVar3 = (bool)hasExclusiveAccess(local_a0);
        } while (!bVar3);
        *local_a0 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0068c8e0(local_a0);
        }
        FUN_01bed4e2(param_1,&local_a0,0x88);
        return;
      }
    }
    else if (!bVar3) goto LAB_0069e9d4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_a0;
      bVar3 = (bool)hasExclusiveAccess(local_a0);
    } while (!bVar3);
    *local_a0 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0068c8e0(local_a0);
    }
  } while( true );
}

