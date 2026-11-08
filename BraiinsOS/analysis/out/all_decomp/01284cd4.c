// FUN_01284cd4 @ 01284cd4 size=180 calls_out=4 calls_in=1
// strings: 

int * FUN_01284cd4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((char)param_1[1] != '\x01') {
    if ((char)param_1[1] == '\x02') {
      return (int *)0x0;
    }
    iVar2 = FUN_015f7d2c();
    piVar3 = (int *)*param_1;
    iVar4 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = iVar2;
    if ((char)iVar4 == '\x01') {
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01284dec(piVar3);
        }
      }
    }
    else {
      if ((char)iVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
      }
      FUN_015e8e6c(param_1,&LAB_01284d94);
    }
  }
  return param_1;
}

