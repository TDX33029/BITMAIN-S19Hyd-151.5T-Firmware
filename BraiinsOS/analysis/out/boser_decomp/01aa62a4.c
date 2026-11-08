// FUN_01aa62a4 @ 01aa62a4 size=300 calls_out=1 calls_in=1
// strings: 

undefined4
FUN_01aa62a4(undefined4 param_1,int param_2,byte *param_3,int param_4,undefined4 param_5,int param_6
            ,int param_7,char param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  code *local_24;
  
  if (*param_3 == 2) {
    bVar1 = false;
    if (param_4 != 0) {
      iVar2 = (**(code **)(param_2 + 0x10))(param_1,0x2f);
      if (iVar2 != 0) {
        return 1;
      }
      bVar1 = param_6 == 0;
    }
    *param_3 = bVar1;
  }
  else {
    if ((param_7 == 0) && ((*param_3 & 1) != 0)) {
      iVar2 = (**(code **)(param_2 + 0xc))(param_1,&DAT_00531149,2);
      if (iVar2 != 0) {
        return 1;
      }
      *param_3 = 0;
    }
    iVar2 = (**(code **)(param_2 + 0x10))(param_1,0x2f);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (param_8 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01aa63cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2 + 0xc))(param_1,param_5,param_6);
    return uVar3;
  }
  local_2c = param_6;
  local_24 = FUN_014fa97c;
  local_30 = param_5;
  local_28 = (undefined1 *)&local_30;
  uVar3 = FUN_012fa178(param_1,param_2,&DAT_00590e5f,&local_28);
  return uVar3;
}

