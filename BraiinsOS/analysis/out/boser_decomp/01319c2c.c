// FUN_01319c2c @ 01319c2c size=180 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code

int * FUN_01319c2c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((char)param_1[1] != '\x01') {
    if ((char)param_1[1] == '\x02') {
      param_1 = (int *)0x0;
    }
    else {
      iVar2 = FUN_01319a98();
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
            FUN_01319d44();
          }
        }
      }
      else {
        if ((char)iVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
        }
        FUN_019a2bcc(param_1,&LAB_01319cec);
      }
    }
  }
  return param_1;
}

