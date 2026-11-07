// FUN_008a2080 @ 008a2080 size=132 calls_out=2 calls_in=1
// strings: 

bool FUN_008a2080(uint *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint local_20;
  uint uStack_1c;
  
  FUN_008bbe24(&local_20);
  uVar3 = local_20 & 0xff;
  if (uVar3 != 4) {
    if (((char)*param_1 != '\x04') && ((char)*param_1 == '\x03')) {
      puVar2 = (undefined4 *)param_1[1];
      uVar4 = *puVar2;
      puVar5 = (undefined4 *)puVar2[1];
      pcVar1 = (code *)*puVar5;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
    *param_1 = local_20;
    param_1[1] = uStack_1c;
  }
  return uVar3 != 4;
}

