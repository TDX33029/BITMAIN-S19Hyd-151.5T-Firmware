// FUN_00d5a03c @ 00d5a03c size=212 calls_out=2 calls_in=1
// strings: 

void FUN_00d5a03c(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf48);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\0') {
    piVar2 = (int *)*puVar3;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00d653ec(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
    piVar2[2] = iVar1 + 1;
  }
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00d653ec(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
  piVar2[2] = iVar1 + 1;
  return;
}

