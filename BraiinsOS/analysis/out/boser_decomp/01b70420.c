// FUN_01b70420 @ 01b70420 size=140 calls_out=3 calls_in=1
// strings: 

undefined4 * FUN_01b70420(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_01b6b0a8(0x14), puVar1 != (undefined4 *)0x0)) {
    iVar2 = FUN_01b6bc20(param_1[1],param_1[3] << 2);
    puVar1[1] = iVar2;
    if (iVar2 != 0) {
      *puVar1 = *param_1;
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      return puVar1;
    }
    FUN_01b7023c(puVar1);
  }
  return (undefined4 *)0x0;
}

