// FUN_0143d3a0 @ 0143d3a0 size=240 calls_out=2 calls_in=0
// strings: 

void FUN_0143d3a0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_r7;
  undefined4 uVar7;
  undefined4 in_r12;
  uint uVar8;
  undefined1 auStack_f8 [216];
  
  piVar3 = *(int **)(param_2 + 0xe4);
  if (piVar3 != (int *)0x0) {
    do {
      iVar4 = *piVar3;
      param_4 = (int *)(iVar4 + 1);
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = (int)param_4;
    unaff_r7 = 0;
    if (iVar4 < 0) goto LAB_0143d48c;
  }
  uVar8 = *(uint *)(param_2 + 0xd8);
  if (1 < uVar8) {
    param_4 = *(int **)(param_2 + 0xdc);
    do {
      iVar4 = *param_4;
      unaff_r7 = iVar4 + 1;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = unaff_r7;
    if (iVar4 < 0) goto LAB_0143d48c;
    in_r12 = *(undefined4 *)(param_2 + 0xe0);
  }
  piVar6 = *(int **)(param_2 + 0xf0);
  uVar7 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_0143d48c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x143d48c);
      (*pcVar1)();
    }
    unaff_r7 = *(int *)(param_2 + 0xf4);
  }
  FUN_0142c098(auStack_f8);
  *(uint *)(param_1 + 0xd8) = uVar8;
  *(int **)(param_1 + 0xdc) = param_4;
  *(undefined4 *)(param_1 + 0xe0) = in_r12;
  *(int **)(param_1 + 0xe4) = piVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar7;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(int **)(param_1 + 0xf0) = piVar6;
  *(int *)(param_1 + 0xf4) = unaff_r7;
  FUN_016dd1aa(param_1,auStack_f8,0xd8);
  return;
}

