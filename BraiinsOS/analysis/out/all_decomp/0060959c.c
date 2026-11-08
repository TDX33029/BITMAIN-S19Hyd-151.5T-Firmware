// FUN_0060959c @ 0060959c size=116 calls_out=0 calls_in=1
// strings: 

longlong FUN_0060959c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 - 2;
  uVar2 = uVar1;
  if (5 < uVar1) {
LAB_006095fc:
    return (ulonglong)uVar2 << 0x20;
  }
  uVar2 = (&switchD_006095bc::switchdataD_006095c0)[uVar1];
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
    goto LAB_00609614;
  case 4:
    uVar1 = param_1[3];
    if ((int)uVar1 < 0) goto LAB_006095fc;
    uVar2 = param_1[2];
    goto LAB_00609614;
  }
  uVar1 = 0;
LAB_00609614:
  return CONCAT44(uVar2,(uint)(uVar1 == 0 && (0xff < uVar2) <= uVar1));
}

