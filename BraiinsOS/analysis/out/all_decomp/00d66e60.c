// FUN_00d66e60 @ 00d66e60 size=204 calls_out=5 calls_in=1
// strings: 

void FUN_00d66e60(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  
  if (*param_2 == '\x06') {
    local_20[0] = 0xd;
    uVar1 = FUN_0157cc00(local_20,&DAT_01878148,&DAT_018ab990);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
  if (*param_2 != '\x02') {
    uVar1 = FUN_00f36124(param_2,local_20,&DAT_01873d48);
    *param_1 = 1;
    param_1[1] = uVar1;
    FUN_00c01f94(param_2);
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_2 + 8) == 0) {
    uVar2 = FUN_01845f30();
  }
  else if (*(int *)(param_2 + 8) == 1) {
    uVar2 = FUN_01845d5c();
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = uVar2;
  return;
}

