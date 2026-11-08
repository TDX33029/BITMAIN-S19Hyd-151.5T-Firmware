// FUN_01b33afc @ 01b33afc size=224 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b33afc(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_2[1];
  if (param_1 == param_2) {
    iVar2 = FUN_01b2b248(param_1,iVar2 + 1);
    if (iVar2 != 0) goto LAB_01b33b6c;
  }
  else {
    param_1[3] = param_2[3];
    iVar2 = FUN_01b2b248(param_1,iVar2 + 1);
    if (iVar2 != 0) {
      param_1[1] = param_2[1];
LAB_01b33b6c:
      iVar5 = *param_2;
      uVar4 = 0;
      puVar3 = (uint *)*param_1;
      for (iVar2 = 0; iVar2 < param_2[1]; iVar2 = iVar2 + 1) {
        uVar1 = *(uint *)(iVar5 + iVar2 * 4);
        *puVar3 = uVar4 | uVar1 << 1;
        uVar4 = uVar1 >> 0x1f;
        puVar3 = puVar3 + 1;
      }
      if (uVar4 != 0) {
        *puVar3 = 1;
        param_1[1] = param_1[1] + 1;
      }
      return 1;
    }
  }
  return 0;
}

