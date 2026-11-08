// FUN_01b6b9fc @ 01b6b9fc size=152 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b6b9fc(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined1 *)(param_2 + -1);
  puVar4 = param_1 + param_3;
  do {
    if (param_1 == puVar4) {
      return 0;
    }
    iVar1 = FUN_01b6b9e0(*param_1);
    puVar3 = puVar3 + 1;
    iVar2 = FUN_01b6b9e0(*puVar3);
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) {
      return 1;
    }
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return 0;
}

