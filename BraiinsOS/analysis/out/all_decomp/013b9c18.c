// FUN_013b9c18 @ 013b9c18 size=96 calls_out=1 calls_in=1
// strings: 

bool FUN_013b9c18(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_3 != param_2) {
    if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,param_2,&DAT_01893cb0);
    }
    cVar1 = *(char *)(param_1 + param_3);
    if (cVar1 == '\n') {
      if (param_3 == 0) {
        return true;
      }
      return ((char *)(param_1 + param_3))[-1] != '\r';
    }
    bVar2 = cVar1 == '\r';
    if (!bVar2) {
      return false;
    }
  }
  return bVar2;
}

