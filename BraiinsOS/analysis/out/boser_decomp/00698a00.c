// FUN_00698a00 @ 00698a00 size=188 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

void FUN_00698a00(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar2,",",1);
  }
  uVar1 = *puVar2;
  param_1[1] = '\x02';
  FUN_006bc51c(&local_20,uVar1,param_2,param_3);
  if ((char)local_20 == '\x04') {
    FUN_01ac6cbc(*puVar2,":",1);
    FUN_0069c3f8(param_4,puVar2);
    return;
  }
  FUN_01966f50(local_20,uStack_1c);
  return;
}

