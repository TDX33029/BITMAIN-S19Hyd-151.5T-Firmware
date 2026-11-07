// FUN_00ec08a8 @ 00ec08a8 size=212 calls_out=4 calls_in=1
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00ec08a8(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  uVar2 = 1;
  pcVar1 = "\n";
  if (param_1[1] != '\x01') {
    uVar2 = 2;
    pcVar1 = &DAT_005312e2;
  }
  FUN_01ac6cbc(*puVar3,pcVar1,uVar2);
  iVar4 = puVar3[3];
  uVar2 = *puVar3;
  if (iVar4 != 0) {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    do {
      FUN_01ac6cbc(uVar2,uVar5,uVar6);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar2 = *puVar3;
  }
  param_1[1] = '\x02';
  FUN_014b5d34(&local_30,uVar2,param_2,param_3);
  if ((char)local_30 == '\x04') {
    return 0;
  }
  uVar2 = FUN_01966f50(local_30,uStack_2c);
  return uVar2;
}

