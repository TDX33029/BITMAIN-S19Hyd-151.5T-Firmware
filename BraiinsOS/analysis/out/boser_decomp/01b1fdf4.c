// FUN_01b1fdf4 @ 01b1fdf4 size=128 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01b1fdf4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_01b6b0a8(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  if (*(int *)*param_1 == 0x390) {
    uVar2 = 6;
  }
  else {
    uVar2 = 1;
  }
  puVar1[2] = uVar2;
  puVar1[5] = 0xfffffffe;
  puVar1[6] = 0xffffffff;
  param_1[5] = puVar1;
  return 1;
}

