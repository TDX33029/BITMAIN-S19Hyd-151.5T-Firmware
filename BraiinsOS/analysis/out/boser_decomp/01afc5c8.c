// FUN_01afc5c8 @ 01afc5c8 size=60 calls_out=0 calls_in=4
// strings: 

undefined4 FUN_01afc5c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar1 = param_1 + 2;
  }
  else {
    puVar1 = (undefined4 *)param_1[2];
  }
  *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) | 2;
  *param_1 = 0;
  return 0;
}

