// FUN_00bd09bc @ 00bd09bc size=152 calls_out=4 calls_in=1
// strings: 

void FUN_00bd09bc(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xe]) {
  case '\0':
    iVar2 = *(int *)(*param_2 + 0x14);
    iVar3 = *(int *)(*param_2 + 0x18);
    *(undefined1 *)(param_2 + 0xd) = 0;
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(0x1c201e4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(0x1c201e4);
  }
  FUN_00bd30b0(param_1,param_2 + 1);
  uVar4 = 3;
  if (*(int *)(param_1 + 8) != 0x3b9aca01) {
    cVar1 = (char)param_2[0xd];
    uVar4 = 1;
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = (char)param_2[0xc];
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00b71be0(param_2 + 7);
    }
  }
  *(undefined1 *)(param_2 + 0xe) = uVar4;
  return;
}

