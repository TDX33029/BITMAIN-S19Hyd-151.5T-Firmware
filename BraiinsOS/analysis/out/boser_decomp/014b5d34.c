// FUN_014b5d34 @ 014b5d34 size=288 calls_out=1 calls_in=2
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_014b5d34(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  
  FUN_01ac6cbc(param_2,"\"",1);
  do {
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      if (param_4 == uVar4) {
        if (param_4 != 0) {
          FUN_01ac6cbc(param_2,param_3,param_4);
        }
        *param_1 = 4;
        FUN_01ac6cbc(param_2,"\"",1);
        return;
      }
      bVar1 = *(byte *)(param_3 + uVar4);
      cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      uVar3 = uVar4 + 1;
    } while (cVar2 == '\0');
    if (uVar4 != 0) {
      FUN_01ac6cbc(param_2,param_3,uVar4);
    }
    param_4 = param_4 + ~uVar4;
    param_3 = param_3 + uVar4 + 1;
    if (cVar2 == 'u') {
      local_2c = 0x3030755c;
      local_27 = (&DAT_005679b8)[bVar1 & 0xf];
      local_28 = (&DAT_005679b8)[bVar1 >> 4];
      FUN_01ac6cbc(param_2,&local_2c,6);
    }
    else {
      local_26 = 0x5c;
      local_25 = cVar2;
      FUN_01ac6cbc(param_2,&local_26,2);
    }
  } while( true );
}

