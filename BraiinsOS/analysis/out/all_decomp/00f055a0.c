// FUN_00f055a0 @ 00f055a0 size=276 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00f055a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar2 = *param_2;
  iVar3 = param_2[1];
  pcVar4 = *(code **)(iVar3 + 0xc);
  iVar1 = (*pcVar4)(uVar2,&DAT_0035b6ce,0xe);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar2,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar2,iVar3);
  }
  else {
    iVar1 = (*pcVar4)(uVar2,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar2;
    iStack_2c = iVar3;
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                         &DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar2 = (*pcVar4)(uVar2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}

