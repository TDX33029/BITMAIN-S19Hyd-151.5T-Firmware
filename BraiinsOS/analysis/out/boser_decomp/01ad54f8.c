// FUN_01ad54f8 @ 01ad54f8 size=232 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code

int FUN_01ad54f8(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
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
  FUN_012650dc(&local_18,uVar2,&DAT_00532588,7);
  if ((char)local_18 != '\x04') {
    iVar1 = FUN_01966f50(local_18,uStack_14);
    return iVar1;
  }
  FUN_01ac6cbc(*puVar3,":",1);
  if (*param_2 == '\x06') {
    FUN_01ac6cbc(*puVar3,&DAT_0056d030,4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01ad4f50(param_2,puVar3);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

