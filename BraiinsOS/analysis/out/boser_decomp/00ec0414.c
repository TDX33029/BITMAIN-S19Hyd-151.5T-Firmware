// FUN_00ec0414 @ 00ec0414 size=184 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code

void FUN_00ec0414(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
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
  FUN_012650dc(&local_18,uVar1,&DAT_00532588,7);
  if ((char)local_18 == '\x04') {
    FUN_01ac6cbc(*puVar2,":",1);
    FUN_006e71e4(param_2,puVar2);
    return;
  }
  FUN_01966f50(local_18,uStack_14);
  return;
}

