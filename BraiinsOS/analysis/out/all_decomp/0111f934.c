// FUN_0111f934 @ 0111f934 size=400 calls_out=0 calls_in=2
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_0111f934(char *param_1,undefined4 param_2,code *param_3,int param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  
  (*param_3)(param_1,param_2,&DAT_004144ec,1);
  if (*param_1 == '\x04') {
    do {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        if (param_5 == uVar4) {
          if (param_5 == 0) {
            *param_1 = '\x04';
          }
          else {
            (*param_3)(param_1,param_2,param_4,param_5);
            if (*param_1 != '\x04') {
              return;
            }
          }
          (*param_3)(param_1,param_2,&DAT_004144ec,1);
          return;
        }
        bVar1 = *(byte *)(param_4 + uVar4);
        cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
        uVar3 = uVar4 + 1;
      } while (cVar2 == '\0');
      if ((uVar4 != 0) && ((*param_3)(param_1,param_2,param_4,uVar4), *param_1 != '\x04')) {
        return;
      }
      if (cVar2 == 'u') {
        local_2c = 0x3030755c;
        puVar5 = &local_2c;
        local_27 = (&DAT_00563e90)[bVar1 & 0xf];
        uVar6 = 6;
        local_28 = (&DAT_00563e90)[bVar1 >> 4];
      }
      else {
        puVar5 = (undefined4 *)&local_26;
        local_26 = 0x5c;
        uVar6 = 2;
        local_25 = cVar2;
      }
      (*param_3)(param_1,param_2,puVar5,uVar6);
      param_5 = param_5 + ~uVar4;
      param_4 = param_4 + uVar4 + 1;
    } while (*param_1 == '\x04');
  }
  return;
}

