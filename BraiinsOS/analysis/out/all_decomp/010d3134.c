// FUN_010d3134 @ 010d3134 size=208 calls_out=1 calls_in=2
// strings: 

undefined1 * FUN_010d3134(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (0xffff < param_3) {
    uVar1 = FUN_010d2a9c(param_1,(param_3 >> 10) - 0x2840);
    if ((uVar1 | 2) != 3) {
      return &DAT_00110000;
    }
    param_3 = param_3 & 0x3ff | 0xffffdc00;
  }
  iVar2 = FUN_010d2a9c(param_1,param_3);
  puVar4 = &DAT_00110000;
  if (iVar2 == 1) {
    if (0xffff < param_2) {
      uVar1 = FUN_010d2a9c(param_1,(param_2 >> 10) - 0x2840);
      if ((uVar1 | 2) != 3) {
        return &DAT_00110000;
      }
      param_2 = param_2 & 0x3ff | 0xffffdc00;
    }
    uVar5 = FUN_010d2a9c(param_1,param_2);
    puVar3 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 2) {
      if (((uint)puVar3 ^ 0xd800) - 0x110000 < 0xffef0800) {
        puVar3 = &DAT_00110000;
      }
      puVar4 = puVar3;
    }
  }
  return puVar4;
}

