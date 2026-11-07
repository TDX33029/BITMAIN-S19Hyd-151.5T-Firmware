// FUN_00efda4c @ 00efda4c size=256 calls_out=2 calls_in=1
// strings: 

void FUN_00efda4c(char param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte local_32;
  char local_31;
  
  cVar5 = '\x02';
  local_32 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_32,1);
  dVar8 = *(double *)(param_2 + 2);
  local_31 = '\x02';
  dVar7 = *(double *)(param_2 + 6);
  uVar2 = *param_2;
  uVar4 = param_2[8];
  dVar6 = *(double *)(param_2 + 10);
  uVar3 = param_2[4];
  if (dVar8 != 0.0) {
    local_31 = '\v';
  }
  cVar1 = '\x02';
  if ((uVar2 & 1) == 0) {
    local_31 = '\0';
  }
  if (dVar7 != 0.0) {
    cVar1 = '\v';
  }
  if ((uVar3 & 1) != 0) {
    local_31 = local_31 + cVar1;
  }
  if (dVar6 != 0.0) {
    cVar5 = '\v';
  }
  if ((uVar4 & 1) != 0) {
    local_31 = local_31 + cVar5;
  }
  FUN_01284394(param_3,&local_31,1);
  if ((uVar2 & 1) != 0) {
    FUN_00efe1c0(SUB84(dVar8,0),1,param_3);
  }
  if ((uVar3 & 1) != 0) {
    FUN_00efe1c0(SUB84(dVar7,0),2,param_3);
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  FUN_00efe1c0(SUB84(dVar6,0),3,param_3);
  return;
}

