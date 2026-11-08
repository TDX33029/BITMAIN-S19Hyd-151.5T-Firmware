// FUN_010cdb54 @ 010cdb54 size=148 calls_out=2 calls_in=0
// strings: 

bool FUN_010cdb54(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint local_20;
  uint uStack_1c;
  
  FUN_010cbfdc(&local_20,param_1[2],param_2,param_3);
  uVar3 = local_20 & 0xff;
  if (uVar3 != 4) {
    puVar2 = (undefined4 *)param_1[1];
    if ((4 < (byte)*param_1) || ((byte)*param_1 == 3)) {
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

