// FUN_01117488 @ 01117488 size=304 calls_out=2 calls_in=1
// strings: 

longlong FUN_01117488(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_28 [8];
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  uVar2 = 0x15;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 1:
    return (ulonglong)(byte)param_1[1] << 0x20;
  case 2:
    return (ulonglong)(ushort)param_1[1] << 0x20;
  case 3:
    return (ulonglong)param_1[1] << 0x20;
  case 4:
    local_20 = param_1[2];
    local_1c = param_1[3];
    if (local_1c == 0) goto LAB_01117578;
    local_28[0] = 1;
    goto LAB_011175a4;
  case 5:
    local_20 = (uint)(char)param_1[1];
    break;
  case 6:
    local_20 = (uint)(short)param_1[1];
    break;
  case 7:
    local_20 = param_1[1];
    break;
  case 8:
    local_20 = param_1[2];
    local_1c = param_1[3];
    if (local_1c == 0) goto LAB_01117578;
    local_28[0] = 2;
    goto LAB_011175a4;
  default:
    uVar1 = FUN_011173bc(param_1,&uStack_11,&DAT_018871fc);
    goto LAB_011175b0;
  }
  if (-1 < (int)local_20) {
LAB_01117578:
    return (ulonglong)local_20 << 0x20;
  }
  local_28[0] = 2;
  local_1c = (int)local_20 >> 0x1f;
LAB_011175a4:
  uVar1 = FUN_0157cd6c(local_28,&uStack_11,&DAT_018871fc);
LAB_011175b0:
  return CONCAT44(uVar1,1);
}

