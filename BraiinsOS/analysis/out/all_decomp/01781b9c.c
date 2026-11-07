// FUN_01781b9c @ 01781b9c size=180 calls_out=3 calls_in=1
// strings: 

undefined4 * FUN_01781b9c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_0177a9c0(0x14), puVar1 != (undefined4 *)0x0)) {
    iVar2 = FUN_0177b624(param_1[1],param_1[3] << 2);
    puVar1[1] = iVar2;
    if (iVar2 != 0) {
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar5 = *param_1;
      puVar1[4] = param_1[4];
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *puVar1 = uVar5;
      return puVar1;
    }
    FUN_01781944(puVar1);
  }
  return (undefined4 *)0x0;
}

