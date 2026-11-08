// FUN_01acb888 @ 01acb888 size=428 calls_out=3 calls_in=3
// strings: 

undefined4
FUN_01acb888(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar6 = param_1[2];
  local_28 = param_5;
  local_2c = param_4;
  puVar2 = (undefined1 *)FUN_01ac9ff4(&local_2c);
  uVar1 = local_28;
  uVar3 = local_2c;
  if ((param_2 & 0xff) != 2) {
    if ((puVar2 == (undefined1 *)0x5c) && (param_1[6] != 0)) {
      (**(code **)(param_1[7] + 0x14))(param_1[6],0);
    }
    iVar4 = param_1[1];
    if ((iVar6 == 0) || (*(char *)(iVar4 + iVar6 + -1) != '/')) {
      iVar5 = iVar6;
      if (*param_1 == iVar6) {
        FUN_01af7b44(param_1,iVar6,1,1,1);
        iVar4 = param_1[1];
        iVar5 = param_1[2];
      }
      *(undefined1 *)(iVar4 + iVar5) = 0x2f;
      param_1[2] = iVar6 + 1;
      if (!(puVar2 != (undefined1 *)0x2f && puVar2 != (undefined1 *)0x5c)) {
        param_4 = uVar3;
        param_5 = uVar1;
      }
    }
    goto LAB_01acb9c4;
  }
  if ((int)puVar2 < 0x3f) {
    if (puVar2 == (undefined1 *)0x23) {
      return param_4;
    }
    if (puVar2 != (undefined1 *)0x2f) goto LAB_01acb984;
  }
  else {
    if (puVar2 == (undefined1 *)0x3f) {
      return param_4;
    }
    if (puVar2 != &DAT_00110000) {
LAB_01acb984:
      iVar4 = iVar6;
      if (*param_1 == iVar6) {
        FUN_01af7b44(param_1,iVar6,1,1,1);
        iVar4 = param_1[2];
      }
      *(undefined1 *)(param_1[1] + iVar4) = 0x2f;
      param_1[2] = iVar6 + 1;
    }
  }
  param_2 = 2;
LAB_01acb9c4:
  uVar3 = FUN_01aca0cc(param_1,param_2,param_3,iVar6,param_4,param_5);
  return uVar3;
}

