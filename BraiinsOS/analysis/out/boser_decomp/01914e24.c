// FUN_01914e24 @ 01914e24 size=192 calls_out=1 calls_in=2
// strings: 

uint FUN_01914e24(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*param_1 == 1) {
    uVar3 = param_1[5];
    uVar6 = param_1[1];
    uVar1 = 0;
    uVar2 = 0;
    iVar4 = 0;
    if (uVar3 != 0) {
      uVar2 = param_1[2];
      uVar5 = param_1[4];
      uVar1 = uVar5 - uVar2;
      if (uVar5 < uVar2) {
        uVar1 = uVar5;
      }
      if (uVar2 - uVar1 < uVar3) {
        iVar4 = uVar3 - (uVar2 - uVar1);
      }
      else {
        iVar4 = 0;
        uVar2 = uVar1 + uVar3;
      }
    }
    local_20 = param_1[3];
    local_28 = local_20 + uVar1 * 0xc;
    local_1c = local_20 + iVar4 * 0xc;
    local_24 = local_20 + uVar2 * 0xc;
    iVar4 = FUN_01908284(&local_28);
    uVar1 = 0;
    if ((uint)(iVar4 - param_1[6]) <= uVar6) {
      uVar1 = uVar6 - (iVar4 - param_1[6]);
    }
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    param_2 = uVar1;
  }
  return param_2;
}

