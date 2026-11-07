// FUN_014b6190 @ 014b6190 size=120 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_014b6190(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  piVar2 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  iVar8 = *piVar2;
  iVar1 = piVar2[1];
  iVar3 = piVar2[2];
  iVar4 = piVar2[3];
  iVar5 = piVar2[4];
  iVar6 = piVar2[5];
  puVar7 = (undefined4 *)param_1[1];
  *piVar2 = -0x80000000;
  piVar2 = (int *)*puVar7;
  if (*piVar2 != -0x80000000) {
    FUN_0134bd64(*piVar2,piVar2[1]);
    FUN_0134bd64(piVar2[3],piVar2[4]);
    piVar2 = (int *)*puVar7;
  }
  *piVar2 = iVar8;
  piVar2[1] = iVar1;
  piVar2[2] = iVar3;
  piVar2[3] = iVar4;
  piVar2[4] = iVar5;
  piVar2[5] = iVar6;
  return 1;
}

