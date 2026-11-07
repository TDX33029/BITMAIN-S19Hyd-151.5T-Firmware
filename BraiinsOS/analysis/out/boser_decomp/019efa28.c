// FUN_019efa28 @ 019efa28 size=168 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code

undefined4 * FUN_019efa28(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar3 = FUN_019ee374();
    piVar4 = (int *)*param_1;
    cVar1 = *(char *)(param_1 + 1);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar3;
    if (cVar1 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db20c();
      }
    }
    else {
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
      }
      FUN_019a2bcc(param_1,&LAB_019efadc);
    }
  }
  else if (*(char *)(param_1 + 1) != '\x01') {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

