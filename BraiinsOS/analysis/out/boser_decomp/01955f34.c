// FUN_01955f34 @ 01955f34 size=188 calls_out=4 calls_in=0
// strings: 

void FUN_01955f34(ushort *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  undefined4 local_14;
  
  sVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    sVar1 = 2;
  }
  if (sVar1 == 0) {
    iVar2 = 4;
  }
  else {
    if (sVar1 == 1) {
      if ((char)param_1[8] == '\0') {
        FUN_019cccd8(&local_18,param_1 + 2);
        if ((local_18 & 0xff) != 4) {
          FUN_0069d8a4(local_18 & 0xff,local_14);
        }
      }
    }
    else {
      if (sVar1 == 2) {
        iVar2 = 0x20;
        goto LAB_01955fe0;
      }
      if ((char)param_1[8] == '\0') {
        FUN_019ccf60(&local_18,param_1 + 2);
        if ((local_18 & 0xff) != 4) {
          FUN_0069d8a4(local_18 & 0xff,local_14);
        }
      }
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4));
    iVar2 = 0x14;
  }
LAB_01955fe0:
  uVar3 = FUN_01beaf68(*(undefined4 *)((int)param_1 + iVar2));
  local_14 = 0;
  local_18 = 0;
  iVar2 = thunk_FUN_01bee080(6,uVar3,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

