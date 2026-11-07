// FUN_007603a4 @ 007603a4 size=288 calls_out=5 calls_in=1
// strings: 

void FUN_007603a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int local_158;
  ushort *local_154;
  undefined1 auStack_e4 [192];
  
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  iVar4 = *(int *)(param_2 + 0x160);
  while( true ) {
    puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    uVar3 = (undefined4)uVar6;
    (*(code *)puVar5[3])(&local_158,uVar3,param_3);
    puVar1 = local_154;
    if (local_158 != -0x80000000) {
      FUN_016dd1aa(param_1,&local_158,0x74);
      return;
    }
    if (iVar4 == 0) break;
    sVar2 = 7;
    if (1 < *local_154) {
      sVar2 = *local_154 - 2;
    }
    if (sVar2 != 1) {
      if (sVar2 == 0x13 || sVar2 == 0x10) break;
      iVar4 = iVar4 + -1;
      *(int *)(param_2 + 0x160) = iVar4;
    }
    FUN_0075fe18(auStack_e4,param_2 + 0x98);
    uVar6 = FUN_006b37f4(param_2,auStack_e4);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    *(undefined8 *)(param_2 + 0x158) = uVar6;
    FUN_01036ca0(puVar1);
    thunk_FUN_016d3fb4(puVar1);
  }
  *param_1 = 0x80000000;
  param_1[1] = local_154;
  return;
}

