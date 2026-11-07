// FUN_0195a2e8 @ 0195a2e8 size=232 calls_out=3 calls_in=3
// strings: 

int FUN_0195a2e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar6 = *(uint *)(param_1 + 8);
  local_28 = param_5;
  if (uVar6 == 0) {
    uVar2 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    uVar2 = 0;
    iVar3 = iVar5;
    local_34 = param_2;
    local_30 = param_3;
    local_2c = param_4;
    do {
      iVar1 = FUN_019603fc(&local_34,iVar3);
      uVar4 = uVar2 + 1;
      if (iVar1 == 0) {
        FUN_005f6b0c(iVar3);
        if (uVar4 < uVar6) {
          uVar4 = uVar2 + 1;
          do {
            iVar3 = iVar3 + 0xd0;
            iVar1 = FUN_019603fc(&local_34,iVar3);
            if (iVar1 == 0) {
              FUN_005f6b0c(iVar3);
            }
            else {
              FUN_01bed4e2(uVar2 * 0xd0 + iVar5,iVar3,0xd0);
              uVar2 = uVar2 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
        *(uint *)(param_1 + 8) = uVar2;
        goto LAB_0195a358;
      }
      iVar3 = iVar3 + 0xd0;
      uVar2 = uVar4;
    } while (uVar6 != uVar4);
    uVar2 = uVar6;
  }
LAB_0195a358:
  return uVar6 - uVar2;
}

