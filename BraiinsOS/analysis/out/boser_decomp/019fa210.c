// FUN_019fa210 @ 019fa210 size=172 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_019fa210(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined8 local_68 [9];
  undefined1 local_1c;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined4 *)param_1[1];
  local_68[0] = (*(code *)puVar4[3])(puVar3);
  if ((int)local_68[0] == 0) {
    uVar2 = 2;
  }
  else {
    iVar1 = puVar4[1];
    bVar5 = iVar1 == 0x50;
    if (bVar5) {
      iVar1 = puVar4[2];
    }
    if (bVar5 && iVar1 == 4) {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(puVar3);
      }
      *puVar3 = local_68[0];
      *(undefined1 *)((int)puVar3 + 0x4c) = 0;
    }
    else {
      local_1c = 0;
      iVar1 = FUN_019d849c(local_68);
      FUN_019d87c0(puVar3,puVar4);
      *param_1 = iVar1;
    }
    param_1[1] = (int)&DAT_01d28cf4;
    uVar2 = 1;
  }
  return uVar2;
}

