// FUN_018403cc @ 018403cc size=128 calls_out=3 calls_in=2
// strings: 

void FUN_018403cc(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar3;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return;
    }
    if (iVar1 == 2) {
      FUN_0183cf38(param_1 + 2);
      FUN_016f940c(param_1 + 0xbe);
    }
    else {
      FUN_0183cf38(param_1 + 2);
    }
    FUN_0183a528(param_1 + 0xbc);
    return;
  }
  FUN_0183cf38(param_1 + 0xb4);
  if (param_1[0x9c] == -0x7fffffd7) {
    puVar3 = (undefined4 *)param_1[0x9e];
    iVar1 = param_1[0x9d];
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar1);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar1);
    }
  }
  else {
    FUN_0183ab04();
  }
  FUN_016f92fc(param_1);
  FUN_0134aee0(param_1[0x98],param_1[0x99],4,0x14,unaff_r4,unaff_r5);
  FUN_019bb7e0(param_1[0xa8],param_1[0xa9]);
  FUN_016f940c(param_1 + 0xac);
  return;
}

