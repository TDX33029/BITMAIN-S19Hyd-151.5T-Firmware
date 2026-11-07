// FUN_015767e8 @ 015767e8 size=220 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015767e8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_30;
  undefined1 *local_2c;
  code *local_28;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *param_1;
  uVar4 = *param_2;
  iVar5 = param_2[1];
  local_30 = iVar3;
  iVar1 = (**(code **)(iVar5 + 0xc))(uVar4,"0x",2);
  if (iVar1 == 0) {
    local_28 = FUN_01576770;
    local_2c = (undefined1 *)&local_30;
    iVar1 = FUN_00fa948c(uVar4,iVar5,&DAT_00569c68,&local_2c);
    if (iVar1 == 0) {
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        return 0;
      }
      do {
        iVar3 = iVar3 + 1;
        local_28 = FUN_01576770;
        local_30 = iVar3;
        local_2c = (undefined1 *)&local_30;
        iVar1 = FUN_00fa948c(uVar4,iVar5,&DAT_00569c68,&local_2c);
        if (iVar1 != 0) {
          return 1;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  return 1;
}

