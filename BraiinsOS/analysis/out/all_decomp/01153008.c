// FUN_01153008 @ 01153008 size=236 calls_out=3 calls_in=3
// strings: 

void FUN_01153008(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  
  iVar3 = *param_2;
  iVar2 = param_2[2];
  if (iVar3 == iVar2) {
    iVar3 = 8;
    if (8 < (uint)(iVar2 * 2)) {
      iVar3 = iVar2 << 1;
    }
    FUN_01150958(&local_2c,iVar2,param_2[1],iVar3,1,1);
    if (local_2c != 0) {
      *param_1 = 0x2601;
      param_1[1] = 0;
      return;
    }
    iVar2 = param_2[2];
    *param_2 = iVar3;
    param_2[1] = local_28;
  }
  uVar1 = FUN_011530f4(param_3,param_4);
  if (iVar3 == iVar2) {
    FUN_01150aa8(param_2,iVar3,1);
    iVar2 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar2) = uVar1;
  iVar3 = param_2[2];
  *(undefined1 *)param_1 = 4;
  param_2[2] = iVar3 + 1;
  return;
}

