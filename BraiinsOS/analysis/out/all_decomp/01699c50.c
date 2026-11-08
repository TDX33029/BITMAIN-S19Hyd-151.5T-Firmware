// FUN_01699c50 @ 01699c50 size=260 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01699c50(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_30;
  undefined1 *local_2c;
  code *local_28;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0x10);
  iVar1 = (*pcVar4)(uVar5,0x5b);
  uVar2 = 1;
  if (iVar1 == 0) {
    iVar7 = *param_1;
    iVar3 = param_1[1];
    iVar1 = iVar7;
    if (iVar3 != 0) {
      local_28 = FUN_01576770;
      local_30 = iVar7;
      local_2c = (undefined1 *)&local_30;
      iVar1 = FUN_00fa948c(uVar5,iVar6,&DAT_00569c68,&local_2c);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = iVar7 + 1;
    }
    iVar7 = iVar7 + iVar3;
    if (iVar1 != iVar7) {
      do {
        local_28 = FUN_01576770;
        local_30 = iVar1;
        local_2c = (undefined1 *)&local_30;
        iVar3 = FUN_00fa948c(uVar5,iVar6,&DAT_00414a6f,&local_2c);
        if (iVar3 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != iVar7);
    }
    uVar2 = (*pcVar4)(uVar5,0x5d);
  }
  return uVar2;
}

