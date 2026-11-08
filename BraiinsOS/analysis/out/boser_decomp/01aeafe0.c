// FUN_01aeafe0 @ 01aeafe0 size=560 calls_out=3 calls_in=3
// strings: 

uint FUN_01aeafe0(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if ((~*param_2 & 0x1f) == 0 || param_3 == 1) {
    return 0;
  }
  uVar2 = (uint)param_2[1];
  if ((char)param_2[1] < '\0') {
    switch(uVar2) {
    case 0x81:
      if (param_3 < 3) {
        return 0;
      }
      if ((uint)(int)(char)param_2[2] < 0x80000000) {
        return 0;
      }
      uVar2 = (uint)param_2[2];
      iVar4 = 3;
      goto LAB_01aeb03c;
    case 0x82:
      if (param_3 < 4) {
        return 0;
      }
      if (param_2[2] == 0) {
        return 0;
      }
      iVar4 = 4;
      uVar2 = (uint)CONCAT11(param_2[2],param_2[3]);
      break;
    case 0x83:
      if (param_3 < 5) {
        return 0;
      }
      if (param_2[2] == 0) {
        return 0;
      }
      iVar4 = 5;
      uVar2 = (uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4];
      break;
    case 0x84:
      if (param_3 < 3) {
        return 0;
      }
      if (param_3 == 3) {
        return 0;
      }
      if ((param_3 < 6) && ((0x37U >> (param_3 & 0xff) & 1) != 0)) {
        return 0;
      }
      if (param_2[2] == 0) {
        return 0;
      }
      iVar4 = 6;
      uVar2 = (uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 | (uint)param_2[4] << 8 |
              (uint)param_2[5];
      break;
    default:
      return 0;
    }
    if (0xfffe < uVar2) {
      return 0;
    }
  }
  else {
    iVar4 = 2;
  }
LAB_01aeb03c:
  local_30 = uVar2 + iVar4;
  if ((local_30 <= param_3) && (*param_2 == 0x30)) {
    local_38 = param_2;
    local_34 = param_3;
    FUN_01aea258(&local_2c,&local_38);
    if (local_2c == 0) {
      uVar1 = local_28 & 0xff;
    }
    else if (((local_30 == local_34) && (uVar1 = 0x25, uVar2 == param_1[1])) &&
            (iVar4 = thunk_FUN_01bed842(param_2 + iVar4,*param_1,uVar2), iVar4 == 0)) {
      iVar4 = param_1[5];
      uVar3 = param_1[4];
      DataMemoryBarrier(0xb);
      if (DAT_01d51afc != '\x02') {
        FUN_0188ff90();
      }
      iVar4 = (**(code **)(iVar4 + 0x10))(uVar3,local_2c,local_28,param_4,param_5,param_6,param_7);
      uVar1 = 0x26;
      if (iVar4 != 0) {
        uVar1 = 0xe;
      }
    }
  }
  return uVar1;
}

