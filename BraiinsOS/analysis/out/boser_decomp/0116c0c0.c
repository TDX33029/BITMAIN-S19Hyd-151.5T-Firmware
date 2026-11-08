// FUN_0116c0c0 @ 0116c0c0 size=204 calls_out=4 calls_in=1
// strings: dns server

void FUN_0116c0c0(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_7c [92];
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  uVar3 = 0;
  if (puVar1 != *(undefined4 **)(param_2 + 0xc)) {
    piVar4 = *(int **)(param_2 + 0x10);
    uVar6 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = puVar1[2];
    *(undefined4 **)(param_2 + 4) = puVar1 + 3;
    FUN_00a214b0(&local_88,"dns server",10,uVar5,uVar2);
    FUN_019bb7e0(uVar6,uVar5);
    if (local_88 == 3 && local_84 == 0) {
      uVar3 = 1;
      *(int *)(param_1 + 1) = local_80;
    }
    else {
      if (*piVar4 != 3 || piVar4[1] != 0) {
        FUN_005f6588(piVar4);
      }
      *piVar4 = local_88;
      piVar4[1] = local_84;
      piVar4[2] = local_80;
      FUN_01bed4e2(piVar4 + 3,auStack_7c,0x5c);
    }
  }
  *param_1 = uVar3;
  return;
}

