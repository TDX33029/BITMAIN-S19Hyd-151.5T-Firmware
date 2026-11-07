// FUN_01211290 @ 01211290 size=208 calls_out=1 calls_in=0
// strings: 

bool FUN_01211290(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = *(uint *)(param_1 + 0x478);
  uVar7 = thunk_FUN_01bee35a(param_1,0x60);
  puVar2 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  uVar3 = *puVar2;
  uVar5 = *(uint *)(param_1 + 0x47c);
  uVar4 = puVar2[1];
  if ((uVar3 & uVar6) == 0 && (uVar4 & uVar5) == 0) {
    if (uVar6 != 0xffffffff || uVar5 != 0xffffffff) {
      uVar3 = uVar3 & ~uVar6;
      uVar4 = uVar4 & ~uVar5;
    }
  }
  else if (uVar6 != 0xffffffff || uVar5 != 0xffffffff) {
    uVar4 = uVar4 | uVar5;
    uVar3 = uVar3 | uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x8f8);
  uVar5 = *(uint *)(param_1 + 0x8fc);
  if ((uVar3 & uVar6) == 0 && (uVar4 & uVar5) == 0) {
    if (uVar6 != 0xffffffff || uVar5 != 0xffffffff) {
      uVar3 = uVar3 & ~uVar6;
      uVar4 = uVar4 & ~uVar5;
    }
  }
  else if (uVar6 != 0xffffffff || uVar5 != 0xffffffff) {
    uVar4 = uVar4 | uVar5;
    uVar3 = uVar3 | uVar6;
  }
  cVar1 = *(char *)(param_1 + 0x98c);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  return cVar1 == '\0' || (uVar3 != 0xffffffff || uVar4 != 0xffffffff);
}

