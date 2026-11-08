// FUN_009f4834 @ 009f4834 size=264 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_009f4834(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar5 = (int *)*param_1;
  uVar7 = 1;
  if (0x7f < param_2) {
    uVar7 = 2;
  }
  iVar6 = piVar5[2];
  if ((0x7ff < param_2) && (uVar7 = 4, param_2 < 0x10000)) {
    uVar7 = 3;
  }
  if ((uint)(*piVar5 - iVar6) < uVar7) {
    FUN_009f4d18(piVar5,iVar6,uVar7,1,1);
    puVar4 = (undefined1 *)(piVar5[1] + piVar5[2]);
  }
  else {
    puVar4 = (undefined1 *)(piVar5[1] + iVar6);
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
  piVar5[2] = uVar7 + iVar6;
  return 0;
}

