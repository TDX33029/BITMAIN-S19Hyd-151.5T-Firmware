// FUN_00d47df0 @ 00d47df0 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_00d47df0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((char)param_1[1] != '\0') {
    return;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18d912c);
  } while (!bVar1);
  if (DAT_018d912c == 0) {
    DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
  }
  iVar2 = DAT_018d912c + 1;
  *param_1 = DAT_018d912c;
  DAT_018d912c = iVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

