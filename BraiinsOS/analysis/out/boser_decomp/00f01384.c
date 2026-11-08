// FUN_00f01384 @ 00f01384 size=304 calls_out=4 calls_in=2
// strings: 

void FUN_00f01384(char param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  byte local_22;
  char local_21;
  
  local_22 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_22,1);
  uVar4 = param_2[4];
  local_21 = '\0';
  cVar1 = '\0';
  if (uVar4 == 1) {
    cVar1 = (char)((LZCOUNT(param_2[5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  }
  uVar3 = param_2[6];
  if (uVar3 != 0) {
    uVar2 = LZCOUNT(uVar3 | 1) | 0x20;
    if ((int)uVar3 < 0) {
      uVar2 = LZCOUNT((int)uVar3 >> 0x1f);
    }
    local_21 = (char)((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
  }
  dVar5 = *(double *)(param_2 + 2);
  local_21 = local_21 + cVar1;
  uVar2 = *param_2;
  cVar1 = '\x02';
  if (dVar5 != 0.0) {
    cVar1 = '\v';
  }
  if ((uVar2 & 1) != 0) {
    local_21 = local_21 + cVar1;
  }
  FUN_01284394(param_3,&local_21,1);
  if (uVar4 != 0) {
    FUN_00efc9fc(1,param_2[5],param_3);
  }
  if (uVar3 != 0) {
    FUN_00efca88(2,uVar3,param_3);
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_00efe06c(SUB84(dVar5,0),3,param_3);
  return;
}

