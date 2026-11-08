// FUN_0144733c @ 0144733c size=304 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0144733c(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 4;
  uVar3 = param_2;
  if (param_2 <= param_3) goto LAB_0144745c;
  uVar5 = param_3 + 1;
  uVar1 = *(ushort *)(param_1 + param_3 * 2);
  uVar3 = (uint)uVar1;
  if ((short)uVar1 < 0) {
    uVar3 = uVar3 & 0x7fff;
    if (0x3fff < uVar3) {
      if (uVar3 == 0x7fff) {
        if ((param_2 <= uVar5) || (param_2 <= param_3 + 2)) goto LAB_0144745c;
        uVar3 = (uint)*(ushort *)(param_1 + uVar5 * 2);
        uVar5 = param_3 + 2;
      }
      else {
        if (param_2 <= uVar5) goto LAB_0144745c;
        uVar3 = uVar3 - 0x4000;
      }
      uVar3 = (uint)*(ushort *)(param_1 + uVar5 * 2) | uVar3 << 0x10;
    }
    iVar4 = 2;
    goto LAB_0144745c;
  }
  if (uVar3 < 0x4040) {
    uVar3 = (uVar1 >> 6) - 1 & 0xffff;
LAB_01447380:
    iVar4 = 1;
  }
  else if (uVar3 < 0x7fc0) {
    if (uVar5 < param_2) {
      uVar3 = (uint)*(ushort *)(param_1 + uVar5 * 2) | ((uVar3 & 0x7fc0) - 0x4040 & 0xffff) << 10;
      goto LAB_01447380;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if ((uVar5 < param_2) && (param_3 + 2 < param_2)) {
      uVar3 = CONCAT22(*(undefined2 *)(param_1 + uVar5 * 2),
                       *(undefined2 *)(param_1 + (param_3 + 2) * 2));
      goto LAB_01447380;
    }
  }
  iVar4 = 4 - iVar4;
LAB_0144745c:
  iVar2 = 0;
  if (iVar4 != 4) {
    iVar2 = iVar4;
  }
  return CONCAT44(uVar3,iVar2);
}

