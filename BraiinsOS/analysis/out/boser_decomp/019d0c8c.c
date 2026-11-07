// FUN_019d0c8c @ 019d0c8c size=136 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_019d0c8c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  
  if (*param_1 == 1) {
    unaff_r4 = param_1[1];
    piVar1 = (int *)FUN_019d0d20(param_2,unaff_r4,&DAT_01d28b34);
    iVar2 = *piVar1;
    iVar5 = piVar1[1];
    *param_1 = iVar2;
    param_1[1] = iVar5;
    if (iVar2 == 1) {
      iVar2 = FUN_019d0d20(param_2,iVar5,&DAT_01d28b44);
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    puVar3 = (undefined4 *)FUN_019d0d20(param_2,unaff_r4,&DAT_01d28b54);
    *puVar3 = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(unaff_r4,uVar4);
}

