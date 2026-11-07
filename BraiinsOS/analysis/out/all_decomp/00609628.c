// FUN_00609628 @ 00609628 size=116 calls_out=0 calls_in=1
// strings: 

longlong FUN_00609628(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 - 2;
  uVar2 = uVar1;
  if (5 < uVar1) {
LAB_00609688:
    return (ulonglong)uVar2 << 0x20;
  }
  uVar2 = (&switchD_00609648::switchdataD_0060964c)[uVar1];
  switch(uVar1) {
  case 0:
    uVar2 = (uint)*(byte *)(param_1 + 2);
    break;
  case 1:
    uVar2 = (uint)*(ushort *)(param_1 + 2);
    break;
  case 2:
    uVar2 = param_1[2];
    break;
  default:
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    goto LAB_006096a0;
  case 4:
    uVar1 = param_1[3];
    if ((int)uVar1 < 0) goto LAB_00609688;
    uVar2 = param_1[2];
    goto LAB_006096a0;
  }
  uVar1 = 0;
LAB_006096a0:
  return CONCAT44(uVar2,(uint)(uVar1 == 0 && (0xffff < uVar2) <= uVar1));
}

