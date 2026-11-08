// FUN_008f069c @ 008f069c size=160 calls_out=4 calls_in=1
// strings: 

int FUN_008f069c(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
    iVar3 = *(int *)*param_1;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[1] = iVar3 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f190);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f190);
  }
  iVar3 = FUN_00617650(param_1 + 1);
  if (iVar3 == 0) {
    uVar2 = 3;
    iVar3 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xc);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xb);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 3);
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  return iVar3;
}

