// FUN_00e83ebc @ 00e83ebc size=260 calls_out=7 calls_in=1
// strings: 

char FUN_00e83ebc(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[3] = *param_1 + 0x18;
    param_1[4] = -1;
  case '\x03':
    iVar3 = FUN_00e442f8(param_1 + 3);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 2) = 3;
      return '\x02';
    }
    param_1[1] = iVar3;
    if (param_1[3] != 0) {
      FUN_00e44660(param_1[3],param_1[4],1);
      iVar3 = param_1[1];
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[3] = iVar3 + 0x20;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b0d4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b0d4);
  }
  cVar2 = FUN_00e847e4(param_1 + 3,param_2);
  if (cVar2 == '\x02') {
    *(undefined1 *)(param_1 + 2) = 4;
    return '\x02';
  }
  cVar1 = (char)param_1[0x14];
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = (char)param_1[0x13];
  }
  if (bVar4 && cVar1 == '\x03') {
    FUN_00de3884(param_1 + 5);
  }
  FUN_00e44900(param_1[1]);
  *(undefined1 *)(param_1 + 2) = 1;
  return cVar2;
}

