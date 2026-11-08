// FUN_013b1240 @ 013b1240 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_013b1240(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[2];
  if (iVar4 == *param_1) {
    uVar3 = 0xaaaaaaa;
    if ((uint)(param_1[5] + param_1[6]) < 0xaaaaaaa) {
      uVar3 = param_1[5] + param_1[6];
    }
    if (1 < uVar3 - iVar4) {
      iVar1 = FUN_01651c4c(param_1,iVar4,uVar3 - iVar4,0xc);
      iVar4 = param_1[2];
      if (iVar1 == -0x7fffffff) goto LAB_013b12bc;
    }
    FUN_01651c38(param_1,iVar4,1,0xc);
    iVar4 = param_1[2];
  }
LAB_013b12bc:
  if (iVar4 == *param_1) {
    FUN_019ee178(param_1);
  }
  param_1[2] = iVar4 + 1;
  puVar2 = (undefined4 *)(param_1[1] + iVar4 * 0xc);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  return;
}

