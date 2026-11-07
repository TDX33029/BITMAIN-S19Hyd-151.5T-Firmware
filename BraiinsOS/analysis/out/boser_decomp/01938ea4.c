// FUN_01938ea4 @ 01938ea4 size=180 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01938ea4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    local_30 = param_3 + iVar2;
    if ((iVar2 == 0) && (iVar1 = (**(code **)(param_2 + 0xc))(param_1,"0x",2), iVar1 != 0)) {
      return 1;
    }
    local_28 = &LAB_0161d65c;
    local_2c = (undefined1 *)&local_30;
    iVar1 = FUN_012fa178(param_1,param_2,&DAT_0056ff60,&local_2c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (param_4 != iVar2);
  return 0;
}

