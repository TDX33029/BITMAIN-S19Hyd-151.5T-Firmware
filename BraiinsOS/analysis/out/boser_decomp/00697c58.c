// FUN_00697c58 @ 00697c58 size=224 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_00697c58(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  
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
  FUN_006bc51c(&local_40,uVar1,param_2,param_3);
  if ((char)local_40 == '\x04') {
    FUN_01ac6cbc(*puVar2,":",1);
    uVar3 = FUN_01415f98(&local_40,extraout_r1,param_4,0);
    FUN_01ac6cbc(*puVar2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    return 0;
  }
  uVar1 = FUN_01966f50(local_40,uStack_3c);
  return uVar1;
}

