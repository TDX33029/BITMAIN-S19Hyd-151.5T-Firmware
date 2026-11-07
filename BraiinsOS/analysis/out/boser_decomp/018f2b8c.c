// FUN_018f2b8c @ 018f2b8c size=384 calls_out=6 calls_in=7
// strings: 

uint FUN_018f2b8c(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x234) = 0x80000000;
  if (iVar1 != -0x80000000) {
    local_50 = iVar1;
    local_4c = *(undefined4 *)(param_1 + 0x238);
    local_48 = *(undefined4 *)(param_1 + 0x23c);
    FUN_01914ee4(param_1 + 500,&local_50);
  }
  if (*(char *)(param_1 + 0x252) == '\x01') {
    uVar2 = FUN_018f2a40(param_1,param_2,0);
    return uVar2;
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar5 = param_2[2];
    uVar3 = FUN_01914e24(param_3,uVar5);
    local_4c = param_2[1];
    uVar2 = uVar3;
    if (uVar5 < uVar3) {
      uVar2 = uVar5;
    }
    local_38 = uVar5 - uVar2;
    local_3c = local_4c + uVar2;
    iVar1 = 0;
  }
  else {
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    uVar3 = FUN_01914e24(param_3,uVar5 - uVar2);
    local_4c = param_2[1];
    local_38 = uVar2 + uVar3;
    if (uVar5 < uVar2 + uVar3) {
      local_38 = uVar5;
    }
    local_3c = local_4c;
    local_44 = local_38;
    local_34 = uVar5;
  }
  uVar5 = uVar2;
  if (iVar1 != 0) {
    uVar5 = local_38 - uVar2;
  }
  uVar4 = 0;
  local_50 = iVar1;
  local_48 = uVar2;
  local_40 = iVar1;
  if ((int)uVar5 < 0) {
LAB_018f2c94:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,uVar5);
  }
  if (uVar5 == 0) {
    local_2c = 1;
    uVar5 = 0;
  }
  else {
    uVar4 = 1;
    local_2c = FUN_01298504(uVar5,1);
    if (local_2c == 0) goto LAB_018f2c94;
  }
  local_28 = 0;
  local_30 = uVar5;
  FUN_019311e4(&local_50,&local_30);
  FUN_01914ee4(param_3);
  return uVar3;
}

