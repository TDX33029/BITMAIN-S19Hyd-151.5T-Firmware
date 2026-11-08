// FUN_00e766c8 @ 00e766c8 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_00e766c8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  piVar2 = param_2 + 2;
  if (*param_2 == 0) {
    iVar4 = *piVar2;
    iVar5 = param_2[3];
    *param_1 = 0;
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    return;
  }
  if (*param_2 == 1) {
    uVar3 = param_2[3];
    if (uVar3 < 0x80000000) {
      param_1[2] = *piVar2;
      param_1[3] = uVar3;
    }
    if (-1 < (int)uVar3) {
      *param_1 = 0;
      return;
    }
    uVar1 = FUN_0157cd6c(local_28,&uStack_11,&DAT_0187be88);
  }
  else {
    local_20 = *(undefined8 *)piVar2;
    local_28[0] = 3;
    uVar1 = FUN_0157cc00(local_28,&uStack_11,&DAT_0187be88);
  }
  *param_1 = 1;
  param_1[1] = uVar1;
  return;
}

