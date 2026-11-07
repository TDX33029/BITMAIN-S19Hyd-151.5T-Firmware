// FUN_0169c4f4 @ 0169c4f4 size=288 calls_out=2 calls_in=0
// strings: SetGloba | a global default trace dispatcher has already been set | a global default trace dispatcher has already been set

undefined4 FUN_0169c4f4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_28;
  int iStack_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,s_SetGloba_00414c05,0x15);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8("a global default trace dispatcher has already been set",0x36,uVar3,iVar4);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_20 = &local_19;
    local_19 = 1;
    local_28 = uVar3;
    iStack_24 = iVar4;
    iVar1 = FUN_00faa4e8("a global default trace dispatcher has already been set",0x36,&local_28,
                         &DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

