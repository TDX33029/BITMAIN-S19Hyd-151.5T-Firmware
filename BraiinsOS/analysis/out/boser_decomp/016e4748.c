// FUN_016e4748 @ 016e4748 size=108 calls_out=2 calls_in=1
// strings: 

int FUN_016e4748(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  if (iVar3 == *param_1) {
    FUN_018c4418(param_1);
  }
  iVar1 = param_1[3];
  param_1[2] = iVar3 + 1;
  iVar4 = param_1[5];
  puVar2 = (undefined4 *)(param_1[1] + iVar3 * 0xc);
  *puVar2 = 0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  if (iVar4 == iVar1) {
    FUN_01a54b48();
  }
  *(undefined4 *)(param_1[4] + iVar4 * 4) = 0;
  param_1[5] = iVar4 + 1;
  return iVar3;
}

