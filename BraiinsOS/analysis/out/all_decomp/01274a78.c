// FUN_01274a78 @ 01274a78 size=140 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01274a78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_24;
  undefined1 *local_20;
  uint local_1c;
  
  FUN_01278e50(&local_24,param_1,param_2);
  uVar2 = local_1c >> 1;
  if (uVar2 != 0) {
    puVar4 = local_20 + local_1c;
    puVar5 = local_20;
    do {
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
      uVar2 = uVar2 - 1;
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0);
  }
  uVar3 = FUN_00fa9698(param_3,1,1,0,local_20,local_1c);
  if (local_24 != 0) {
    thunk_FUN_016d3fb4(local_20);
  }
  return uVar3;
}

