// FUN_014b5780 @ 014b5780 size=204 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_014b5780(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  piVar1 = param_1 + 2;
  if (*param_1 == 1) {
    iVar3 = *piVar1;
    local_20 = *(undefined8 *)piVar1;
    if (param_1[3] != 0) {
      uVar2 = 1;
      local_28[0] = 1;
      iVar3 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9934);
      goto LAB_014b57e0;
    }
LAB_014b57dc:
    uVar2 = 0;
  }
  else {
    if (*param_1 == 2) {
      iVar3 = *piVar1;
      local_20 = *(undefined8 *)piVar1;
      if (param_1[3] == 0) goto LAB_014b57dc;
      local_28[0] = 2;
      iVar3 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9934);
    }
    else {
      local_20 = *(undefined8 *)piVar1;
      local_28[0] = 3;
      iVar3 = FUN_01967538(local_28,&uStack_11,&DAT_01cf9934);
    }
    uVar2 = 1;
  }
LAB_014b57e0:
  return CONCAT44(iVar3,uVar2);
}

