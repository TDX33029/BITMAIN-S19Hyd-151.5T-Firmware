// FUN_0096b2b0 @ 0096b2b0 size=356 calls_out=1 calls_in=102
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_0096b2b0(char *param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  
  FUN_00a5208c(param_1,param_2,"\"",1);
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 != '\x04') {
      return;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      if (param_4 == uVar4) {
        if (param_4 == 0) {
          *param_1 = '\x04';
        }
        else {
          FUN_00a5208c(param_1,param_2,param_3,param_4);
          if (*param_1 != '\x04') {
            return;
          }
        }
        FUN_00a5208c(param_1,param_2,"\"",1);
        return;
      }
      bVar2 = *(byte *)(param_3 + uVar4);
      cVar1 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2];
      uVar3 = uVar4 + 1;
    } while (cVar1 == '\0');
    if ((uVar4 != 0) && (FUN_00a5208c(param_1,param_2,param_3,uVar4), *param_1 != '\x04')) break;
    if (cVar1 == 'u') {
      uVar6 = 6;
      local_2c = 0x3030755c;
      puVar5 = &local_2c;
      local_27 = (&DAT_005679b8)[bVar2 & 0xf];
      local_28 = (&DAT_005679b8)[bVar2 >> 4];
    }
    else {
      puVar5 = (undefined4 *)&local_26;
      local_26 = 0x5c;
      uVar6 = 2;
      local_25 = cVar1;
    }
    FUN_00a5208c(param_1,param_2,puVar5,uVar6);
    param_4 = param_4 + ~uVar4;
    param_3 = param_3 + uVar4 + 1;
    cVar1 = *param_1;
  }
  return;
}

