// FUN_01447618 @ 01447618 size=88 calls_out=1 calls_in=2
// strings: 

undefined1 * FUN_01447618(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_01446eec(param_1,param_3);
  puVar3 = &DAT_00110000;
  if ((iVar1 == 1) &&
     (uVar4 = FUN_01446eec(param_1,param_2), puVar2 = (undefined1 *)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 == 2)) {
    if (((uint)puVar2 ^ 0xd800) - 0x110000 < 0xffef0800) {
      puVar2 = &DAT_00110000;
    }
    puVar3 = puVar2;
  }
  return puVar3;
}

