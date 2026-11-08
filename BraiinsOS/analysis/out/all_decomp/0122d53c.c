// FUN_0122d53c @ 0122d53c size=460 calls_out=0 calls_in=2
// strings: 

bool FUN_0122d53c(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 != 10) {
    return false;
  }
  cVar3 = (char)param_1[1];
  bVar5 = cVar3 == '-';
  if (bVar5) {
    cVar3 = *(char *)((int)param_1 + 7);
  }
  if (!bVar5 || cVar3 != '-') {
    return false;
  }
  if (((((*param_1 + 0xd5d5d5d6U & 0xf0f0f0f0) != 0) ||
       ((*(short *)((int)param_1 + 5) + 0xd5d6U & 0xf0f0) != 0)) ||
      (uVar4 = (short)(*(short *)((int)param_1 + 5) + 0xfd0U & 0xf0f) * 0xa01 & 0xffff,
      0xb < (uVar4 >> 8) - 1)) ||
     ((((short)param_1[2] + 0xd5d6U & 0xf0f0) != 0 ||
      (uVar1 = ((short)((short)param_1[2] + 0xfd0U & 0xf0f) * 0xa01 & 0xffffU) >> 8, uVar1 == 0))))
  {
    return false;
  }
  uVar4 = uVar4 >> 8;
  uVar2 = ((*param_1 + 0xfcfcfd0U & 0xf0f0f0f) * 0xa01 >> 8 & 0xff00ff) * 0x640001 >> 0x10;
  if ((1 << uVar4 & 0x15aaU) != 0) {
    return uVar1 < 0x20;
  }
  if ((1 << uVar4 & 0xa50U) != 0) {
    return uVar1 < 0x1f;
  }
  if ((uVar2 & 3) == 0) {
    if (((uVar2 * -0x3d70a3d7 >> 2 | uVar2 * 0x40000000) < 0x28f5c29) && (uVar2 % 400 != 0))
    goto LAB_0122d6e0;
  }
  else if (&UNK_00a3d70a < (undefined *)(uVar2 * -0x3d70a3d7 >> 4 | uVar2 * -0x70000000)) {
LAB_0122d6e0:
    return uVar1 < 0x1d;
  }
  return uVar1 < 0x1e;
}

