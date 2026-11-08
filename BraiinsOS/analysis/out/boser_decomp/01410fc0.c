// FUN_01410fc0 @ 01410fc0 size=108 calls_out=2 calls_in=1
// strings: internal error: entered unreachable code

void FUN_01410fc0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == '\x01') {
    puVar2 = &DAT_0056dc34;
    uVar1 = 4;
    if (param_1[1] != '\0') {
      uVar1 = 5;
      puVar2 = (undefined4 *)&DAT_0053278b;
    }
    FUN_012fb170(puVar2,uVar1,param_2,param_3);
    return;
  }
  if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3fe0);
  }
  FUN_012fb170(*(undefined4 *)(*(int *)(param_1 + 4) + 4),*(undefined4 *)(*(int *)(param_1 + 4) + 8)
               ,param_2,param_3);
  return;
}

