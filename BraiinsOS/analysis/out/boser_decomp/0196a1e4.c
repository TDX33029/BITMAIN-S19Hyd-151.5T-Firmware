// FUN_0196a1e4 @ 0196a1e4 size=360 calls_out=1 calls_in=4
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_0196a1e4(char *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  
  FUN_01968ab4(param_1,*param_2,"\"",1);
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
          FUN_01968ab4(param_1,*param_2,param_3,param_4);
          if (*param_1 != '\x04') {
            return;
          }
        }
        FUN_01968ab4(param_1,*param_2,"\"",1);
        return;
      }
      bVar2 = *(byte *)(param_3 + uVar4);
      cVar1 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2];
      uVar3 = uVar4 + 1;
    } while (cVar1 == '\0');
    if ((uVar4 != 0) && (FUN_01968ab4(param_1,*param_2,param_3,uVar4), *param_1 != '\x04')) break;
    if (cVar1 == 'u') {
      local_2c = 0x3030755c;
      uVar7 = 6;
      local_28 = (&DAT_005679b8)[bVar2 >> 4];
      local_27 = (&DAT_005679b8)[bVar2 & 0xf];
      uVar5 = *param_2;
      puVar6 = &local_2c;
    }
    else {
      uVar5 = *param_2;
      puVar6 = (undefined4 *)&local_26;
      local_26 = 0x5c;
      uVar7 = 2;
      local_25 = cVar1;
    }
    FUN_01968ab4(param_1,uVar5,puVar6,uVar7);
    param_4 = param_4 + ~uVar4;
    param_3 = param_3 + uVar4 + 1;
    cVar1 = *param_1;
  }
  return;
}

