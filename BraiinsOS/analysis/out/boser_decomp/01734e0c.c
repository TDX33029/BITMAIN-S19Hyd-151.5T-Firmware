// FUN_01734e0c @ 01734e0c size=132 calls_out=1 calls_in=1
// strings: 

void FUN_01734e0c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  if (*param_2 == 2) {
    iVar1 = param_2[4];
  }
  else {
    if (((param_2[0x8b] != -0x80000000) && (param_2[0x8d] == 2)) &&
       (*(short *)param_2[0x8c] == 0x3268)) {
      FUN_014435a8(&local_20,param_2[3]);
      local_14 = local_14 & 0xffffff00;
      *param_1 = local_20;
      param_1[1] = uStack_1c;
      param_1[2] = uStack_18;
      param_1[3] = local_14;
      return;
    }
    iVar1 = param_2[3];
  }
  FUN_014435a8(param_1,iVar1);
  return;
}

