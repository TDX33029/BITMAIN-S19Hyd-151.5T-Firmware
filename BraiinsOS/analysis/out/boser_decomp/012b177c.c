// FUN_012b177c @ 012b177c size=108 calls_out=2 calls_in=4
// strings: 

void FUN_012b177c(int *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar5 = param_1[2];
  if (iVar5 == *param_1) {
    FUN_018faa08(param_1);
  }
  iVar2 = param_1[3];
  iVar7 = param_1[5];
  *(undefined1 *)(param_1[1] + iVar5) = param_2;
  param_1[2] = iVar5 + 1;
  if (iVar7 == iVar2) {
    FUN_018fa978();
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(param_1[4] + iVar7 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar6;
  param_1[5] = iVar7 + 1;
  return;
}

