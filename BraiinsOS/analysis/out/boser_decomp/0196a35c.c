// FUN_0196a35c @ 0196a35c size=252 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0196a35c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)*puVar6;
  uVar2 = 1;
  pcVar1 = "\n";
  if (param_1[1] != '\x01') {
    uVar2 = 2;
    pcVar1 = &DAT_005312e2;
  }
  FUN_01968ab4(&local_30,*puVar3,pcVar1,uVar2);
  if ((char)local_30 == '\x04') {
    uVar4 = puVar6[1];
    uVar2 = puVar6[2];
    iVar5 = puVar6[3] + 1;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar2 = *puVar6;
        param_1[1] = '\x02';
        FUN_0196a1e4(&local_30,uVar2,param_2,param_3);
        if ((char)local_30 == '\x04') {
          return 0;
        }
        break;
      }
      FUN_01968ab4(&local_30,*puVar3,uVar4,uVar2);
    } while ((char)local_30 == '\x04');
  }
  uVar2 = FUN_01966f50(local_30,local_2c);
  return uVar2;
}

