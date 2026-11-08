// FUN_006677c4 @ 006677c4 size=104 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_006677c4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_r7;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      unaff_r7 = param_1[2];
      uVar3 = (**(code **)(unaff_r7 + 0x18))(iVar2);
      *(undefined8 *)(param_1 + 1) = uVar3;
      goto LAB_00667820;
    }
  }
  else {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)param_1[3]) {
      iVar2 = *piVar1;
      unaff_r7 = piVar1[1];
      param_1[1] = (int)(piVar1 + 2);
      goto LAB_00667820;
    }
  }
  iVar2 = 0;
LAB_00667820:
  return CONCAT44(unaff_r7,iVar2);
}

