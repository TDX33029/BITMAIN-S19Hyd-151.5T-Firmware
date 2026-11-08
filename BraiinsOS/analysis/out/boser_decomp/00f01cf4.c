// FUN_00f01cf4 @ 00f01cf4 size=336 calls_out=2 calls_in=0
// strings: 

void FUN_00f01cf4(int param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte local_3b;
  byte local_3a;
  char local_39;
  
  iVar4 = 10;
  uVar3 = param_1 << 3 | 2;
  do {
    if (uVar3 >> 7 == 0) {
      local_3a = (byte)uVar3;
      FUN_01284394(param_3,&local_3a,1);
      break;
    }
    local_3b = (byte)uVar3 | 0x80;
    FUN_01284394(param_3,&local_3b,1);
    iVar4 = iVar4 + -1;
    uVar3 = uVar3 >> 7;
  } while (iVar4 != 0);
  dVar9 = *(double *)(param_2 + 2);
  local_39 = '\x02';
  dVar8 = *(double *)(param_2 + 6);
  cVar1 = '\x02';
  uVar3 = *param_2;
  uVar5 = param_2[4];
  uVar6 = param_2[8];
  dVar7 = *(double *)(param_2 + 10);
  if (dVar9 != 0.0) {
    local_39 = '\v';
  }
  cVar2 = '\x02';
  if ((uVar3 & 1) == 0) {
    local_39 = '\0';
  }
  if (dVar8 != 0.0) {
    cVar2 = '\v';
  }
  if ((uVar5 & 1) != 0) {
    local_39 = local_39 + cVar2;
  }
  if (dVar7 != 0.0) {
    cVar1 = '\v';
  }
  if ((uVar6 & 1) != 0) {
    local_39 = local_39 + cVar1;
  }
  FUN_01284394(param_3,&local_39,1);
  if ((uVar3 & 1) != 0) {
    FUN_00efe06c(SUB84(dVar9,0),1,param_3);
  }
  if ((uVar5 & 1) != 0) {
    FUN_00efe06c(SUB84(dVar8,0),2,param_3);
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  FUN_00efe06c(SUB84(dVar7,0),3,param_3);
  return;
}

