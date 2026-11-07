// FUN_01aacc4c @ 01aacc4c size=256 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01aacc4c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int *local_2c;
  undefined1 *local_28;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar2 = *(code **)(iVar6 + 0x10);
  iVar1 = (*pcVar2)(uVar5,0x5b);
  uVar4 = 1;
  if (iVar1 == 0) {
    iVar7 = *param_1;
    iVar3 = param_1[1];
    iVar1 = iVar7;
    if (iVar3 != 0) {
      local_28 = &LAB_0161d65c;
      local_2c = &local_30;
      local_30 = iVar7;
      iVar1 = FUN_012fa178(uVar5,iVar6,&DAT_0056ff60,&local_2c);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = iVar7 + 1;
    }
    iVar7 = iVar7 + iVar3;
    if (iVar1 != iVar7) {
      do {
        local_28 = &LAB_0161d65c;
        local_30 = iVar1;
        local_2c = &local_30;
        iVar3 = FUN_012fa178(uVar5,iVar6,&DAT_005314b6,&local_2c);
        if (iVar3 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != iVar7);
    }
    uVar4 = (*pcVar2)(uVar5,0x5d);
  }
  return uVar4;
}

