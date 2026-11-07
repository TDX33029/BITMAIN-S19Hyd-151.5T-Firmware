// FUN_015f65e8 @ 015f65e8 size=312 calls_out=3 calls_in=2
// strings: 

void FUN_015f65e8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = *param_1;
  local_30 = (uint)(iVar1 != -0x80000000);
  FUN_015f5e7c(param_2,&local_30,4);
  if (iVar1 == -0x80000000) {
    local_30 = param_1[4];
    FUN_014543d8(param_2,&local_30,4);
    iVar1 = param_1[2];
    uVar3 = param_1[3];
    local_30 = uVar3;
    FUN_015f5e7c(param_2,&local_30,4);
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)(iVar1 + 8);
      iVar1 = uVar3 << 4;
      do {
        FUN_015df058(param_2,puVar2[-1],*puVar2);
        local_30 = CONCAT31(local_30._1_3_,0xff);
        FUN_015df058(param_2,&local_30,1);
        local_30 = puVar2[1];
        FUN_015df058(param_2,&local_30,4);
        puVar2 = puVar2 + 4;
        iVar1 = iVar1 + -0x10;
      } while (iVar1 != 0);
    }
  }
  else {
    local_30 = param_1[4];
    iStack_2c = param_1[5];
    iStack_28 = param_1[6];
    iStack_24 = param_1[7];
    FUN_014543d8(param_2,&local_30,0x10);
    FUN_015f5e7c(param_2,param_1[1],param_1[2]);
    local_30 = CONCAT31(local_30._1_3_,0xff);
    FUN_015f5e7c(param_2,&local_30,1);
    local_30 = param_1[3];
    FUN_015f5e7c(param_2,&local_30,4);
  }
  return;
}

