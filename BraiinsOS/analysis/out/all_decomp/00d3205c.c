// FUN_00d3205c @ 00d3205c size=208 calls_out=3 calls_in=1
// strings: 

void FUN_00d3205c(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_878;
  int iStack_874;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    puVar2 = (uint *)(piVar4 + 0x21c);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(piVar4[0x218] + 8))(piVar4[0x219]);
    }
    if ((uVar5 & 2) != 0) {
      FUN_016dd1aa(&local_878,piVar4 + 2,0x858);
      piVar4[2] = 2;
      piVar4[3] = 0;
      if (local_878 != 2 || iStack_874 != 0) {
        FUN_00d054d0(&local_878);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d0554c(*param_1);
    }
  }
  return;
}

