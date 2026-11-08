// FUN_00f1d938 @ 00f1d938 size=264 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00f1d938(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1[2];
  uVar6 = 1;
  if (0x7f < param_2) {
    uVar6 = 2;
  }
  if ((0x7ff < param_2) && (uVar6 = 4, param_2 < 0x10000)) {
    uVar6 = 3;
  }
  if ((uint)(*param_1 - iVar5) < uVar6) {
    FUN_00edff4c(param_1,iVar5,uVar6,1,1);
    puVar4 = (undefined1 *)(param_1[1] + param_1[2]);
  }
  else {
    puVar4 = (undefined1 *)(param_1[1] + iVar5);
  }
  if (0x7f < param_2) {
    bVar2 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      puVar4[1] = bVar2;
      param_2 = param_2 >> 6 | 0xc0;
    }
    else {
      bVar3 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      uVar1 = param_2 >> 0xc;
      if (param_2 >> 0x10 == 0) {
        puVar4[2] = bVar2;
        param_2 = uVar1 | 0xe0;
        puVar4[1] = bVar3;
      }
      else {
        param_2 = param_2 >> 0x12 | 0xfffffff0;
        puVar4[3] = bVar2;
        puVar4[2] = bVar3;
        puVar4[1] = (byte)uVar1 & 0x3f | 0x80;
      }
    }
  }
  *puVar4 = (char)param_2;
  param_1[2] = uVar6 + iVar5;
  return 0;
}

