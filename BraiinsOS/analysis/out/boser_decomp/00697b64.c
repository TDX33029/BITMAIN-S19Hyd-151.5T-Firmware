// FUN_00697b64 @ 00697b64 size=228 calls_out=5 calls_in=4
// strings: internal error: entered unreachable code

undefined4
FUN_00697b64(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  
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
  FUN_006bc51c(&local_48,uVar1,param_2,param_3);
  if ((char)local_48 == '\x04') {
    FUN_01ac6cbc(*puVar2,":",1);
    uVar3 = FUN_01415f98(&local_48,extraout_r1,param_5,param_6);
    FUN_01ac6cbc(*puVar2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    return 0;
  }
  uVar1 = FUN_01966f50(local_48,uStack_44);
  return uVar1;
}

