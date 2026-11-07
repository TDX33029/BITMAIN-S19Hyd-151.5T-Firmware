// FUN_01221538 @ 01221538 size=292 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01221538(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    uVar5 = 0;
LAB_01221644:
    return CONCAT44(param_2,uVar5);
  }
  puVar8 = (undefined *)param_3[1];
  uVar5 = (uint)((int *)*param_3 == (int *)0x0);
  piVar4 = (int *)*param_3;
  iVar6 = param_2;
  iVar3 = *param_1;
LAB_01221570:
  iVar7 = iVar3 + 0x2e0;
  *param_1 = iVar7;
  piVar2 = (int *)FUN_0121f8ac(iVar3);
  if (uVar5 == 0) {
    FUN_00f80320(piVar4,puVar8);
  }
  uVar5 = 1;
  *param_3 = (int)piVar2;
  param_3[1] = (int)&DAT_01c24570;
  if (iVar6 != 0) {
    param_2 = iVar6;
    do {
      if (piVar2[7] == 2) {
LAB_012215f4:
        if ((*piVar2 != 1) || (iVar3 = FUN_0121ff68(piVar2 + 1), iVar3 == 0)) goto LAB_0122161c;
      }
      else if (((piVar2[7] & 1U) == 0) || (iVar3 = piVar2[8], piVar2[8] = 0, iVar3 == 0)) {
        piVar2[7] = 2;
        goto LAB_012215f4;
      }
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        param_2 = iVar6;
        goto LAB_01221644;
      }
    } while( true );
  }
  param_2 = 0;
  goto LAB_01221644;
LAB_0122161c:
  uVar5 = 0;
  puVar8 = &DAT_01c24570;
  piVar4 = piVar2;
  iVar6 = param_2;
  iVar3 = iVar7;
  if (iVar7 == iVar1) goto LAB_01221644;
  goto LAB_01221570;
}

