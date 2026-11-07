// FUN_01734d9c @ 01734d9c size=112 calls_out=1 calls_in=0
// strings: 

void FUN_01734d9c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  iVar1 = *param_2;
  bVar2 = iVar1 != 2;
  if (bVar2) {
    iVar1 = param_2[0x8b];
  }
  if (((bVar2 && iVar1 != -0x80000000) && (param_2[0x8d] == 2)) &&
     (*(short *)param_2[0x8c] == 0x3268)) {
    FUN_01443004(&local_20);
    local_14 = local_14 & 0xffffff00;
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    param_1[3] = local_14;
  }
  else {
    FUN_01443004(param_1);
  }
  return;
}

