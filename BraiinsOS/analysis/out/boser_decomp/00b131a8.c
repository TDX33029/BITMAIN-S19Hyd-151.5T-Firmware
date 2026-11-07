// FUN_00b131a8 @ 00b131a8 size=152 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00b131a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[2] == '\0') {
    (**(code **)(param_1[1] + 0x14))(*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*param_1,param_1[1]);
    }
    *(undefined1 *)(param_1 + 2) = 1;
    return 0;
  }
  if ((char)param_1[2] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c11a80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c11a80);
}

