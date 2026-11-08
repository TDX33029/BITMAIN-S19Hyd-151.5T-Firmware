// FUN_00a89368 @ 00a89368 size=212 calls_out=3 calls_in=0
// strings: 

bool FUN_00a89368(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_01ab095c(param_1 + 800);
  if (iVar1 == 0) {
    uVar6 = *(uint *)(param_1 + 0x420);
    uVar7 = *(uint *)(param_1 + 0x424);
    uVar8 = thunk_FUN_01bee35a(0,0x60);
    puVar2 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    if (uVar6 == 0xffffffff && uVar7 == 0xffffffff) goto LAB_00a89404;
  }
  else {
    uVar8 = FUN_01267898(param_1,param_2);
    uVar6 = *(uint *)(param_1 + 0x420);
    uVar7 = *(uint *)(param_1 + 0x424);
    iVar1 = thunk_FUN_01bee35a((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x60);
    puVar2 = (uint *)(iVar1 + extraout_r2);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    if (uVar6 == 0xffffffff && uVar7 == 0xffffffff) goto LAB_00a89404;
    if ((int)uVar8 != 0) {
      uVar4 = uVar4 & ~uVar6;
      uVar5 = uVar5 & ~uVar7;
      goto LAB_00a89404;
    }
  }
  uVar4 = uVar4 | uVar6;
  uVar5 = uVar5 | uVar7;
LAB_00a89404:
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  uVar8 = thunk_FUN_01bee35a(puVar2,0x60);
  piVar3 = (int *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  return *(char *)(param_1 + 0x4b4) == '\0' || (*piVar3 != -1 || piVar3[1] != -1);
}

