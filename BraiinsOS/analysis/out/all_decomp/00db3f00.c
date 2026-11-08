// FUN_00db3f00 @ 00db3f00 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_00db3f00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(char *)((int)param_1 + 0x169) != '\x03') {
    return;
  }
  FUN_00db2428(param_1 + 4);
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    *puVar2 = *param_1;
    puVar2[1] = uVar1;
  }
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}

