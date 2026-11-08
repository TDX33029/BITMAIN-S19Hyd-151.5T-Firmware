// FUN_0140b080 @ 0140b080 size=184 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code

int * FUN_0140b080(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[1] == '\0') {
    DataMemoryBarrier(0xb);
    if (DAT_01d4cfe8 != 0) {
      FUN_0131a640();
    }
    iVar1 = FUN_0131a8cc(DAT_01d4cfec);
    iVar2 = *param_1;
    iVar3 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = iVar1;
    if ((char)iVar3 == '\x01') {
      iVar3 = *(int *)(iVar2 + 0x410);
      *(int *)(iVar2 + 0x410) = iVar3 + -1;
      if (*(int *)(iVar2 + 0x40c) == 0 && iVar3 == 1) {
        FUN_0131a408();
      }
    }
    else {
      if ((char)iVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2f25c);
      }
      FUN_019a2bcc(param_1,FUN_0140b148);
    }
  }
  else if ((char)param_1[1] != '\x01') {
    param_1 = (int *)0x0;
  }
  return param_1;
}

