// FUN_016ae0e0 @ 016ae0e0 size=224 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_016ae0e0(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 local_1c [4];
  
  puVar2 = local_1c + 4;
  if (param_2 < 0x80) {
    puVar2 = (undefined1 *)((uint)local_1c | 1);
  }
  else if (param_2 < 0x800) {
    puVar2 = (undefined1 *)((uint)local_1c | 2);
  }
  else if (param_2 >> 0x10 == 0) {
    puVar2 = (undefined1 *)((uint)local_1c | 3);
  }
  iVar1 = param_1[1];
  puVar3 = (undefined1 *)((uint)local_1c | 1);
  do {
    iVar1 = *(int *)(*(int *)(*param_1 + 0x54) +
                    (iVar1 + (uint)*(byte *)(*param_1 + 0x5c + (uint)(byte)puVar3[-1])) * 4);
    if (iVar1 == 0) break;
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar3 + 1;
  } while (bVar4);
  param_1[1] = iVar1;
  return 0;
}

