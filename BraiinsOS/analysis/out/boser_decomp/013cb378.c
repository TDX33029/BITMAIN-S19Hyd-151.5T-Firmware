// FUN_013cb378 @ 013cb378 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_013cb378(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [160];
  
  FUN_013cac08(auStack_100,*(undefined4 *)(param_2 + 2));
  uVar3 = *(undefined4 *)(param_2 + 6);
  uVar1 = param_2[1];
  uVar2 = *param_2;
  FUN_013cb3f8(auStack_b8,*(undefined4 *)(param_2 + 4));
  FUN_01bed4e2(param_1,auStack_100,0x44);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined2 *)(param_1 + 0xe2) = uVar1;
  *(undefined2 *)(param_1 + 0xe0) = uVar2;
  FUN_01bed4e2(param_1 + 0x44,auStack_b8,0x9c);
  return;
}

