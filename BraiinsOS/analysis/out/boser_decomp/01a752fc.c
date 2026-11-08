// FUN_01a752fc @ 01a752fc size=56 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_01a752fc(byte *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (2 < *param_1) {
    return 2;
  }
  if (*(uint *)(param_1 + *(int *)(&DAT_005396a0 + (uint)*param_1 * 4)) < 0xd) {
    uVar1 = (&DAT_005396ac)[*(uint *)(param_1 + *(int *)(&DAT_005396a0 + (uint)*param_1 * 4))];
  }
  return uVar1;
}

