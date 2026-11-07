// FUN_00b52ab0 @ 00b52ab0 size=116 calls_out=0 calls_in=1
// strings: 

uint FUN_00b52ab0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x12);
  uVar1 = 0;
  bVar5 = uVar2 == 2;
  if (bVar5) {
    uVar2 = param_1[0xc];
  }
  if (bVar5 && uVar2 == 0) {
    iVar3 = param_1[0xe];
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *param_1;
      param_4 = param_1[1];
    }
    if (bVar5 && (iVar3 == 0 && param_4 == 0)) {
      piVar4 = param_1 + 4;
      if (*piVar4 != 0 || param_1[5] != 0) {
        return 0;
      }
      uVar2 = (uint)*(byte *)((int)param_1 + 0x49);
      bVar5 = uVar2 == 2;
      if (bVar5) {
        piVar4 = (int *)param_1[8];
        uVar2 = param_1[9];
      }
      if (bVar5 && (piVar4 == (int *)0x0 && uVar2 == 0)) {
        if (*(char *)((int)param_1 + 0x4a) == '\x02') {
          uVar1 = param_1[0x10] ^ 1;
        }
        return uVar1;
      }
    }
  }
  return 0;
}

