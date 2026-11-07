// FUN_00e61cc8 @ 00e61cc8 size=180 calls_out=4 calls_in=0
// strings: 

bool FUN_00e61cc8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar3 = *param_1;
  iVar5 = param_1[5];
  iVar6 = param_1[6];
  iVar2 = param_1[1];
  local_28 = param_1[2];
  iVar4 = param_1[3];
  local_38 = 2;
  if (iVar3 == -0x80000000) {
    local_38 = 8;
  }
  *param_1 = -0x80000000;
  local_34 = iVar5;
  local_30 = iVar3;
  local_2c = iVar2;
  local_24 = iVar6;
  iVar1 = FUN_0167459c(iVar4);
  if (iVar1 == 0) {
    uVar8 = FUN_00e68114(&local_38,iVar4);
  }
  else {
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar2);
    }
    uVar8 = CONCAT44(iVar1,1);
  }
  bVar7 = (uVar8 & 1) != 0;
  if (bVar7) {
    FUN_0196bf0c(iVar6,iVar5);
  }
  return bVar7;
}

