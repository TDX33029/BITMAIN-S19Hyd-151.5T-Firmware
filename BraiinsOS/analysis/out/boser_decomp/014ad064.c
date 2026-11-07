// FUN_014ad064 @ 014ad064 size=212 calls_out=4 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_014ad064(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
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
  FUN_006bc51c(&local_28,uVar1,param_2,param_3);
  if ((char)local_28 == '\x04') {
    FUN_01ac6cbc(*puVar2,":",1);
    FUN_006bc51c(&local_28,*puVar2,param_4,param_5);
    if ((char)local_28 == '\x04') {
      return 0;
    }
  }
  uVar1 = FUN_01966f50(local_28,uStack_24);
  return uVar1;
}

