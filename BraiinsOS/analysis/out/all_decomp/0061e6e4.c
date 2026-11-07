// FUN_0061e6e4 @ 0061e6e4 size=204 calls_out=3 calls_in=0
// strings: 

void FUN_0061e6e4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int extraout_r2;
  ulonglong uVar4;
  
  if ((param_2 & 0xff) == 2) {
    return;
  }
  uVar4 = thunk_FUN_016de0ee(param_2 & 0xff,param_2,0xa8);
  pcVar2 = (char *)((int)uVar4 + extraout_r2);
  if (pcVar2[1] == '\0') {
    pcVar2[0] = '\0';
    pcVar2[1] = '\x01';
  }
  if (*pcVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0033db1e,0x1c,&DAT_018578e0);
  }
  *pcVar2 = '\0';
  if ((((uVar4 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  if (iVar3 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,param_5);
    return;
  }
  return;
}

