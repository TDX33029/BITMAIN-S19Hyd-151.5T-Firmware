// FUN_006e6d34 @ 006e6d34 size=232 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code

int FUN_006e6d34(char *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
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
  FUN_006bc51c(&local_20,uVar2,param_2,10);
  if ((char)local_20 != '\x04') {
    iVar1 = FUN_01966f50(local_20,uStack_1c);
    return iVar1;
  }
  FUN_01ac6cbc(*puVar3,":",1);
  if (*param_3 == 0) {
    FUN_01ac6cbc(*puVar3,&DAT_0056d030,4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006e6a00(puVar3,param_3 + 1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

