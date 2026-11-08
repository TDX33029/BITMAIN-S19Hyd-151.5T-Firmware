// FUN_0131d9c4 @ 0131d9c4 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_0131d9c4(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4,
                 undefined1 *param_5,uint param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = (param_4 & 0x1fffffff) * 4;
  if (param_6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,param_6,&DAT_01ce4dc0);
  }
  FUN_0131d928(param_1,param_3,param_4,param_5,uVar2);
  puVar1 = param_5;
  do {
    if (uVar2 == 0) {
      if (puVar1 == param_5 + param_6) {
        return;
      }
    }
    else {
      if ((uint)((int)(param_5 + param_6) - (int)puVar1) <= uVar2) {
        return;
      }
      puVar1 = puVar1 + uVar2;
    }
    *puVar1 = param_2;
    uVar2 = 0;
    puVar1 = puVar1 + 1;
  } while( true );
}

