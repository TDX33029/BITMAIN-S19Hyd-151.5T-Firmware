// FUN_0131dbfc @ 0131dbfc size=156 calls_out=2 calls_in=1
// strings: 

void FUN_0131dbfc(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                 undefined1 *param_5,uint param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = param_4 << 3 | 2;
  uVar3 = uVar1 / 3;
  if (param_6 < uVar1 / 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,param_6,&DAT_01ce4dc0);
  }
  FUN_0131da54(param_1,param_3,param_4,param_5,uVar3);
  puVar2 = param_5;
  do {
    if (uVar3 == 0) {
      if (puVar2 == param_5 + param_6) {
        return;
      }
    }
    else {
      if ((uint)((int)(param_5 + param_6) - (int)puVar2) <= uVar3) {
        return;
      }
      puVar2 = puVar2 + uVar3;
    }
    *puVar2 = param_2;
    uVar3 = 0;
    puVar2 = puVar2 + 1;
  } while( true );
}

