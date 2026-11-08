// FUN_01acf07c @ 01acf07c size=204 calls_out=1 calls_in=1
// strings: 

bool FUN_01acf07c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  puVar1 = (undefined1 *)FUN_01ac9ff4(&local_18);
  puVar2 = (undefined1 *)FUN_01ac9ff4(&local_18);
  puVar3 = (undefined1 *)FUN_01ac9ff4(&local_18);
  bVar5 = false;
  if (puVar1 != &DAT_00110000 && puVar2 != &DAT_00110000) {
    uVar4 = ((uint)puVar1 & 0xffffffdf) - 0x41;
    if (puVar3 == &DAT_00110000) {
      if (uVar4 < 0x1a) {
        bVar5 = puVar2 == (undefined1 *)0x3a || puVar2 == (undefined1 *)0x7c;
      }
    }
    else if ((uVar4 < 0x1a) && (puVar2 == (undefined1 *)0x7c || puVar2 == (undefined1 *)0x3a)) {
      if ((puVar3 + -0x23 < (undefined1 *)0x1d) &&
         ((1 << ((uint)(puVar3 + -0x23) & 0xff) & 0x10001001U) != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = puVar3 == (undefined1 *)0x5c;
      }
    }
  }
  return bVar5;
}

