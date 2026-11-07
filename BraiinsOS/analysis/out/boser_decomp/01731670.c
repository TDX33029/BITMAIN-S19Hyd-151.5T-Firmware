// FUN_01731670 @ 01731670 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_01731670(int param_1,int param_2,undefined4 param_3,int *param_4)

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
  undefined1 auStack_110 [240];
  
  piVar3 = *(int **)(param_2 + 0xfc);
  if (piVar3 != (int *)0x0) {
    do {
      iVar4 = *piVar3;
      param_4 = (int *)(iVar4 + 1);
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = (int)param_4;
    unaff_r7 = 0;
    if (iVar4 < 0) goto LAB_0173175c;
  }
  uVar8 = *(uint *)(param_2 + 0xf0);
  if (1 < uVar8) {
    param_4 = *(int **)(param_2 + 0xf4);
    do {
      iVar4 = *param_4;
      unaff_r7 = iVar4 + 1;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = unaff_r7;
    if (iVar4 < 0) goto LAB_0173175c;
    in_r12 = *(undefined4 *)(param_2 + 0xf8);
  }
  piVar6 = *(int **)(param_2 + 0x108);
  uVar7 = *(undefined4 *)(param_2 + 0x100);
  uVar5 = *(undefined4 *)(param_2 + 0x104);
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_0173175c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x173175c);
      (*pcVar1)();
    }
    unaff_r7 = *(int *)(param_2 + 0x10c);
  }
  FUN_017435fc(auStack_110);
  *(uint *)(param_1 + 0xf0) = uVar8;
  *(int **)(param_1 + 0xf4) = param_4;
  *(undefined4 *)(param_1 + 0xf8) = in_r12;
  *(int **)(param_1 + 0xfc) = piVar3;
  *(undefined4 *)(param_1 + 0x100) = uVar7;
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  *(int **)(param_1 + 0x108) = piVar6;
  *(int *)(param_1 + 0x10c) = unaff_r7;
  FUN_01bed4e2(param_1,auStack_110,0xf0);
  return;
}

