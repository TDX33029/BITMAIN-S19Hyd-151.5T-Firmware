// FUN_014bee88 @ 014bee88 size=320 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_014bee88(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_28;
  int iStack_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014beef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar3;
  }
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_00569804,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar2)(uVar3,&DAT_00418607,5);
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
    iVar1 = FUN_00fb1f64(&local_28,&DAT_00418607,5);
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

