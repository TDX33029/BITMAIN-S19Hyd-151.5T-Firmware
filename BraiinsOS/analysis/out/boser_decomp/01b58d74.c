// FUN_01b58d74 @ 01b58d74 size=236 calls_out=8 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b58ccc) */

int * FUN_01b58d74(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01b6b0a8(0x90);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar2 = FUN_01b58c50();
      *piVar1 = iVar2;
    }
    piVar1[0xb] = 1;
    piVar1[0xc] = *(int *)(iVar2 + 0x28);
    FUN_01b7067c(piVar1 + 0xd);
    FUN_01b0c4fc(piVar1 + 10);
    if (*(code **)(*piVar1 + 4) == (code *)0x0) {
      return piVar1;
    }
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1);
    if (iVar2 != 0) {
      return piVar1;
    }
    FUN_01b0c518(&DAT_01d51b94,piVar1,piVar1 + 10);
    FUN_01b70758(piVar1 + 0xd);
    FUN_01b6b1c4(piVar1);
  }
  return (int *)0x0;
}

