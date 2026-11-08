// FUN_01b85170 @ 01b85170 size=164 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b85170(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_2 <= param_4) {
    uVar3 = param_1 + ((int)param_4 - (int)param_2);
    FUN_01b84e04();
    if (0x10 < (int)param_4 - (int)param_2) {
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
      do {
        FUN_01b84e04(param_1,param_2);
        iVar1 = param_1 + 0x10;
        param_1 = param_1 + 0x20;
        FUN_01b84e04(iVar1,param_2 + 0x10);
        param_2 = param_2 + 0x20;
      } while (param_1 < uVar3);
    }
    param_2 = param_4;
  }
  puVar2 = (undefined1 *)(uVar3 - 1);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    puVar2 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  return 0;
}

