// FUN_019a25c4 @ 019a25c4 size=184 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_019a25c4(char *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  piVar3 = *(int **)(param_1 + 8);
  uVar8 = 0;
  uVar1 = piVar3[1];
  uVar4 = piVar3[2];
  iVar5 = piVar3[3];
  uVar2 = uVar4;
  if (iVar5 != 0) {
    uVar2 = 0xffffffff;
  }
  uVar7 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
    uVar7 = 0;
  }
  uVar2 = uVar1;
  if ((uint)-iVar5 < (uint)(uVar4 <= uVar1)) {
    uVar2 = uVar4;
  }
  uVar6 = param_3;
  if (uVar7 < param_3) {
    uVar6 = uVar7;
  }
  FUN_01bed4e2(*piVar3 + uVar2,param_2,uVar6,-(iVar5 + (uint)(uVar4 > uVar1)));
  piVar3[2] = uVar4 + uVar6;
  piVar3[3] = iVar5 + (uint)CARRY4(uVar4,uVar6);
  if (uVar7 < param_3) {
    if (*param_1 != '\x04') {
      FUN_0197acb4(param_1);
    }
    uVar8 = 1;
    param_1[0] = '\x02';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    *(undefined4 **)(param_1 + 4) = &DAT_01d2e7b8;
  }
  return uVar8;
}

