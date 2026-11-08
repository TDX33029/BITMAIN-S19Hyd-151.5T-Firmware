// FUN_01593fac @ 01593fac size=328 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01593fac(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  iVar1 = param_3;
  if (param_4 == 0) {
LAB_01594048:
    uVar5 = 0;
    param_3 = param_3 + param_4 * 0xc;
    if (iVar1 != param_3) {
      pcVar3 = *(code **)(param_2 + 0xc);
      do {
        local_30 = iVar1;
        iVar2 = (*pcVar3)(param_1,&DAT_00533bc1,2);
        if (iVar2 != 0) goto LAB_01594034;
        pcVar4 = *(code **)(param_2 + 0x10);
        iVar2 = (*pcVar4)(param_1,0x27);
        if (iVar2 != 0) goto LAB_01594034;
        local_28 = &LAB_0193a90c;
        local_2c = (undefined1 *)&local_30;
        iVar2 = FUN_012fa178(param_1,param_2,&DAT_00590e5f,&local_2c);
        if ((iVar2 != 0) || (iVar2 = (*pcVar4)(param_1,0x27), iVar2 != 0)) goto LAB_01594034;
        iVar1 = iVar1 + 0xc;
      } while (iVar1 != param_3);
    }
  }
  else {
    pcVar3 = *(code **)(param_2 + 0x10);
    local_30 = param_3;
    iVar1 = (*pcVar3)(param_1,0x27);
    if (iVar1 == 0) {
      local_28 = &LAB_0193a90c;
      local_2c = (undefined1 *)&local_30;
      iVar1 = FUN_012fa178(param_1,param_2,&DAT_00590e5f,&local_2c);
      if ((iVar1 == 0) && (iVar1 = (*pcVar3)(param_1,0x27), iVar1 == 0)) {
        iVar1 = param_3 + 0xc;
        goto LAB_01594048;
      }
    }
LAB_01594034:
    uVar5 = 1;
  }
  return uVar5;
}

