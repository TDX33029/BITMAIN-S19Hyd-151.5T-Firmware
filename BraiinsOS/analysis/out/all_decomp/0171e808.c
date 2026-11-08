// FUN_0171e808 @ 0171e808 size=228 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0171e808(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = param_2[1];
  if (param_1 == param_2) {
    iVar3 = FUN_0171464c(param_1,iVar3 + 1);
    if (iVar3 != 0) goto LAB_0171e850;
  }
  else {
    param_1[3] = param_2[3];
    iVar3 = FUN_0171464c(param_1,iVar3 + 1);
    if (iVar3 != 0) {
      param_1[1] = param_2[1];
LAB_0171e850:
      if (0 < (int)param_2[1]) {
        iVar3 = 0;
        uVar5 = 0;
        puVar1 = (uint *)*param_1;
        piVar6 = (int *)*param_2;
        do {
          iVar4 = *piVar6;
          iVar3 = iVar3 + 1;
          puVar2 = puVar1 + 1;
          *puVar1 = uVar5 | iVar4 << 1;
          uVar5 = -(iVar4 >> 0x1f);
          puVar1 = puVar2;
          piVar6 = piVar6 + 1;
        } while (iVar3 < (int)param_2[1]);
        if (uVar5 != 0) {
          *puVar2 = 1;
          param_1[1] = param_1[1] + 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

