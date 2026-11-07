// FUN_01a367d8 @ 01a367d8 size=256 calls_out=4 calls_in=5
// strings: 

void FUN_01a367d8(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint local_140 [74];
  
  piVar2 = (int *)(param_2 + 8);
  if (*piVar2 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_01a3680c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar2);
LAB_01a3680c:
  uVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar3 = FUN_0197ac0c();
    uVar3 = uVar3 ^ 1;
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    (**(code **)(*(int *)(param_2 + 0x18) + 0x50))(local_140,*(undefined4 *)(param_2 + 0x14));
    if ((local_140[0] & 3) == 2 || local_140[0] == 3) {
      *param_1 = 2;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0xf;
    }
    else {
      FUN_01bed4e2(param_1,local_140,0x128);
    }
    FUN_01ac2a34(piVar2,uVar3);
  }
  else {
    FUN_01ac2a34(piVar2,uVar3);
    *param_1 = 2;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0xf;
  }
  return;
}

