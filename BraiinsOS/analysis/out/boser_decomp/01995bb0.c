// FUN_01995bb0 @ 01995bb0 size=116 calls_out=0 calls_in=1
// strings: 

longlong FUN_01995bb0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 - 2;
  uVar2 = uVar1;
  if (5 < uVar1) {
LAB_01995c10:
    return (ulonglong)uVar2 << 0x20;
  }
  uVar2 = (&switchD_01995bd0::switchdataD_01995bd4)[uVar1];
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
    goto LAB_01995c28;
  case 4:
    uVar1 = param_1[3];
    if ((int)uVar1 < 0) goto LAB_01995c10;
    uVar2 = param_1[2];
    goto LAB_01995c28;
  }
  uVar1 = 0;
LAB_01995c28:
  return CONCAT44(uVar2,(uint)(uVar1 == 0 && (0xffff < uVar2) <= uVar1));
}

