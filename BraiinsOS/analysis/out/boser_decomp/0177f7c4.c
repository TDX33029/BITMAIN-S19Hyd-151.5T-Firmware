// FUN_0177f7c4 @ 0177f7c4 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_0177f7c4(undefined4 *param_1,int *param_2)

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
    if (((param_2[0x24] != -0x80000000) && (param_2[0x26] == 2)) &&
       (*(short *)param_2[0x25] == 0x3268)) {
      FUN_01432cb4(&local_20,param_2[3]);
      local_14 = local_14 & 0xffffff00;
      *param_1 = local_20;
      param_1[1] = uStack_1c;
      param_1[2] = uStack_18;
      param_1[3] = local_14;
      return;
    }
    iVar1 = param_2[3];
  }
  FUN_01432cb4(param_1,iVar1);
  return;
}

