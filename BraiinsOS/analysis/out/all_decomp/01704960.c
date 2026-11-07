// FUN_01704960 @ 01704960 size=148 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01704960(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  *puVar1 = 0x800;
  iVar3 = *piVar2;
  puVar1[5] = 0xfffffffe;
  puVar1[6] = 0xffffffff;
  if (iVar3 == 0x390) {
    uVar4 = 6;
  }
  else {
    uVar4 = 1;
  }
  puVar1[2] = uVar4;
  param_1[5] = puVar1;
  return 1;
}

