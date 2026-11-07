// FUN_0070153c @ 0070153c size=136 calls_out=5 calls_in=6
// strings: 

undefined8 FUN_0070153c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_006665a4(1);
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
  FUN_01bed4e2(puVar2 + 2,param_1,param_2);
  if (param_2 != 0) {
    thunk_FUN_01be4678(param_1);
  }
  return CONCAT44(param_2,puVar2);
}

