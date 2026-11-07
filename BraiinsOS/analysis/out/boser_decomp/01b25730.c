// FUN_01b25730 @ 01b25730 size=172 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b25730(int param_1,undefined1 *param_2,int param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar4 = 0;
  uVar3 = 0;
  param_1 = param_1 * (param_5 + 2);
  do {
    uVar1 = FUN_01b0c688(param_4 ^ uVar3);
    puVar6 = (undefined1 *)(param_3 + iVar4);
    for (puVar5 = param_2; puVar5 != param_2 + param_1 * 4; puVar5 = puVar5 + 1) {
      uVar2 = FUN_01b0c6a4(uVar1,*puVar6,*puVar5);
      *puVar5 = uVar2;
      puVar6 = puVar6 + 1;
    }
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + param_1 * 4;
  } while (uVar3 != 0x10);
  return 0;
}

