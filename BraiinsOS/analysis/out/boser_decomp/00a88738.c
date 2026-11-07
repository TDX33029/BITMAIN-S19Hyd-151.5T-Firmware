// FUN_00a88738 @ 00a88738 size=128 calls_out=1 calls_in=0
// strings: 

bool FUN_00a88738(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x60);
  puVar2 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  uVar4 = *puVar2;
  uVar3 = *(uint *)(param_1 + 0x420);
  uVar6 = *(uint *)(param_1 + 0x424);
  uVar5 = puVar2[1];
  if ((uVar4 & uVar3) == 0 && (uVar5 & uVar6) == 0) {
    if ((uVar3 ^ 0xffffffff) != 0 || (uVar6 ^ 0xffffffff) != 0) {
      uVar4 = uVar4 & ~uVar3;
      uVar5 = uVar5 & ~uVar6;
    }
  }
  else if ((uVar3 ^ 0xffffffff) != 0 || (uVar6 ^ 0xffffffff) != 0) {
    uVar5 = uVar5 | uVar6;
    uVar4 = uVar4 | uVar3;
  }
  cVar1 = *(char *)(param_1 + 0x4b4);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  return cVar1 == '\0' || (uVar4 != 0xffffffff || uVar5 != 0xffffffff);
}

