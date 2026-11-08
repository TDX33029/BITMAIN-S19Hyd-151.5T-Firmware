// FUN_014bf120 @ 014bf120 size=344 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_014bf120(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = (uint)*param_1;
  if (uVar4 == 0xb) {
                    /* WARNING: Could not recover jumptable at 0x014bf154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_00569804,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar3)(uVar1,(&PTR_DAT_018b34cc)[uVar4],*(undefined4 *)(&DAT_004220e4 + uVar4 * 4));
  }
  else {
    iVar2 = (*pcVar3)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar1;
    iStack_2c = iVar5;
    iVar2 = FUN_00fb1f64(&local_30,(&PTR_DAT_018b34f8)[uVar4],
                         *(undefined4 *)(&DAT_00422110 + uVar4 * 4));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    uVar1 = (*pcVar3)(uVar1,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}

