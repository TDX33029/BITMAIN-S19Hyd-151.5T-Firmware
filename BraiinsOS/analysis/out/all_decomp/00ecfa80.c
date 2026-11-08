// FUN_00ecfa80 @ 00ecfa80 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_00ecfa80(char *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9514);
  }
  if (param_1[1] != '\0') {
    piVar2 = (int *)**(undefined4 **)(param_1 + 4);
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
    piVar2[2] = iVar1 + 1;
  }
  return;
}

