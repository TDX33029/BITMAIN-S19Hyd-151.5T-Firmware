// FUN_011a14b4 @ 011a14b4 size=160 calls_out=4 calls_in=4
// strings: 

void FUN_011a14b4(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x7c)) {
  case 0:
    uVar2 = **(undefined4 **)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 0x60) = uVar2;
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x78);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  }
  FUN_011a15ac(param_1,param_2);
  uVar3 = 3;
  if (*param_1 != 2) {
    cVar1 = *(char *)(param_2 + 0x6c);
    uVar3 = 1;
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_2 + 0x58);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01192a14(param_2);
    }
  }
  *(undefined1 *)(param_2 + 0x7c) = uVar3;
  return;
}

