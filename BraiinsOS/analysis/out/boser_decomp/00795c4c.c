// FUN_00795c4c @ 00795c4c size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00795c4c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_006665a4(8,param_1);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if (iVar3 == 0) {
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined4 *)FUN_01298504(iVar3,puVar1);
  }
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(puVar1,iVar3);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  return;
}

