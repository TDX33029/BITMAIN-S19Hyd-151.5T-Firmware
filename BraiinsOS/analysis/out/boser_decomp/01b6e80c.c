// FUN_01b6e80c @ 01b6e80c size=312 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_01b6e80c(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_3 == -2 && (param_1 == 0 && param_2 == 0)) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_01b6e238();
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    *puVar1 = 0;
  }
  else {
    uVar2 = FUN_01b3b4c8(param_1);
    iVar3 = FUN_01b6e168(uVar2,puVar1);
    if (iVar3 == 0) goto LAB_01b6e908;
  }
  if ((param_2 == 0) || (iVar3 = FUN_01b3b4c8(param_2), iVar3 == 0x40)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_01b6e224();
    if (iVar3 == 0) goto LAB_01b6e908;
    uVar2 = FUN_01b3b4c8(param_2);
    iVar5 = FUN_01b6e168(uVar2,iVar3 + 4);
    if (iVar5 == 0) {
      FUN_01b6e278(iVar3);
      goto LAB_01b6e908;
    }
  }
  puVar1[1] = iVar3;
  if (param_3 < 0) {
LAB_01b6e908:
    FUN_01b6e7b8(puVar1);
    return 0;
  }
  if (param_3 != 0x14) {
    piVar4 = (int *)FUN_01b6e064();
    puVar1[2] = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_01b6e908;
    *piVar4 = param_3;
    piVar4[1] = param_3 >> 0x1f;
  }
  *param_4 = puVar1;
  return 1;
}

