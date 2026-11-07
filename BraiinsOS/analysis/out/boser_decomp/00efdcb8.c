// FUN_00efdcb8 @ 00efdcb8 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_00efdcb8(char param_1,double *param_2,undefined4 param_3)

{
  byte in_Q;
  double dVar1;
  double dVar2;
  double dVar3;
  byte local_2a;
  char local_29;
  
  local_2a = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_2a,1);
  dVar3 = *param_2;
  local_29 = '\0';
  dVar2 = param_2[1];
  dVar1 = param_2[2];
  if (dVar3 != 0.0) {
    local_29 = '\t';
  }
  if (dVar2 != 0.0) {
    local_29 = local_29 + '\t';
  }
  if (dVar1 != 0.0) {
    local_29 = local_29 + '\t';
  }
  FUN_01284394(param_3,&local_29,1);
  if ((((byte)((dVar3 == 0.0) << 3 | in_Q) & 0x1f) >> 3 & 1) == 0) {
    FUN_01016b28(SUB84(dVar3,0),1,param_3);
  }
  if (dVar2 != 0.0) {
    FUN_01016b28(SUB84(dVar2,0),2,param_3);
  }
  if (dVar1 == 0.0) {
    return;
  }
  FUN_01016b28(SUB84(dVar1,0),3,param_3);
  return;
}

