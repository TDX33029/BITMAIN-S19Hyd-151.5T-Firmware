// FUN_006bc774 @ 006bc774 size=244 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code

undefined4
FUN_006bc774(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  if ((char)local_28 != '\x04') {
LAB_006bc824:
    uVar1 = FUN_01966f50(local_28,uStack_24);
    return uVar1;
  }
  FUN_01ac6cbc(*puVar2,":",1);
  if (param_4 == 0) {
    FUN_01ac6cbc(*puVar2,&DAT_0056d030,4);
  }
  else {
    FUN_006bc51c(&local_28,*puVar2,param_4,param_5);
    if ((char)local_28 != '\x04') goto LAB_006bc824;
  }
  return 0;
}

