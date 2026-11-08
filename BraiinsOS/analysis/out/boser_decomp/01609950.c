// FUN_01609950 @ 01609950 size=272 calls_out=6 calls_in=2
// strings: 

void FUN_01609950(uint *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  local_38 = 1;
  local_34 = 0;
  iVar2 = FUN_01bf053e(param_2,&local_38,8);
  if (iVar2 != -1) {
    *(undefined1 *)param_1 = 4;
    return;
  }
  puVar3 = (uint *)FUN_01be3244();
  uVar5 = *puVar3;
  local_30 = local_30 & 0xffffff00;
  local_2c = uVar5;
  cVar1 = FUN_005ef5e8(&local_30);
  if (cVar1 != '\r') {
    *param_1 = local_30;
    param_1[1] = local_2c;
    return;
  }
  local_24 = 0;
  local_28 = 0;
  iVar2 = FUN_01bf0424(param_2,&local_28,8);
  if (iVar2 == -1) {
    uVar4 = *puVar3;
    local_20 = local_20 & 0xffffff00;
    local_1c = uVar4;
    cVar1 = FUN_005ef5e8(&local_20);
    if (cVar1 == '\r') {
      FUN_0069d8a4(0,uVar4);
    }
    else if ((local_20 & 0xff) != 4) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      goto LAB_01609a40;
    }
  }
  FUN_01609950(param_1,param_2);
LAB_01609a40:
  FUN_0069d8a4(0,uVar5);
  return;
}

