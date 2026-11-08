// FUN_0122167c @ 0122167c size=308 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_0122167c(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
LAB_0122178c:
    uVar6 = 0;
LAB_01221798:
    return CONCAT44(param_2,uVar6);
  }
  puVar5 = (undefined4 *)param_3[1];
  iVar4 = *param_1;
  piVar8 = (int *)*param_3;
LAB_012216bc:
  iVar7 = iVar4 + 0x2e0;
  *param_1 = iVar7;
  piVar2 = (int *)FUN_01220dcc(iVar4);
  if (piVar8 != (int *)0x0) {
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(piVar8);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(piVar8);
    }
  }
  uVar6 = 1;
  *param_3 = piVar2;
  param_3[1] = &DAT_01c245a8;
  if (param_2 != 0) {
    iVar4 = param_2;
    do {
      if (*piVar2 == 1) {
        iVar3 = piVar2[1];
        piVar2[1] = 0;
        if (iVar3 == 0) {
          *piVar2 = 0;
          goto LAB_0122174c;
        }
      }
      else {
LAB_0122174c:
        if ((piVar2[2] != 1) || (iVar3 = FUN_0122143c(piVar2 + 3), iVar3 == 0)) goto LAB_01221774;
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) goto LAB_01221798;
    } while( true );
  }
  param_2 = 0;
  goto LAB_01221798;
LAB_01221774:
  param_2 = iVar4;
  puVar5 = (undefined4 *)&DAT_01c245a8;
  iVar4 = iVar7;
  piVar8 = piVar2;
  if (iVar7 == iVar1) goto LAB_0122178c;
  goto LAB_012216bc;
}

