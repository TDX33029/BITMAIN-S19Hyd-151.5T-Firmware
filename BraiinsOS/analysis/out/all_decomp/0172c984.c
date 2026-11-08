// FUN_0172c984 @ 0172c984 size=180 calls_out=5 calls_in=7
// strings: 

undefined4 FUN_0172c984(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_0177ea78(param_1 + 5,0,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1[6] != 0) && (pcVar3 = *(code **)(param_1[6] + 4), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1,0,0);
  }
  FUN_016f19e8(&DAT_018df028,param_1,param_1 + 8);
  FUN_0172c494(*param_1);
  FUN_0172c788(param_1[1]);
  FUN_0177aafc(param_1[2]);
  uVar2 = FUN_0177aafc(param_1);
  return uVar2;
}

