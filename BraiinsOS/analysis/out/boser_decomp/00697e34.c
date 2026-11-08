// FUN_00697e34 @ 00697e34 size=220 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_00697e34(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar3,",",1);
  }
  uVar2 = *puVar3;
  param_1[1] = '\x02';
  FUN_006bc51c(&local_20,uVar2,param_2,param_3);
  if ((char)local_20 != '\x04') {
    uVar2 = FUN_01966f50(local_20,uStack_1c);
    return uVar2;
  }
  FUN_01ac6cbc(*puVar3,":",1);
  uVar2 = 5;
  pcVar1 = "f";
  if ((param_4 & 1) != 0) {
    uVar2 = 4;
    pcVar1 = "true\x1e\x05";
  }
  FUN_01ac6cbc(*puVar3,pcVar1,uVar2);
  return 0;
}

