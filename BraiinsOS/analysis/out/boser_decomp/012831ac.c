// FUN_012831ac @ 012831ac size=108 calls_out=2 calls_in=0
// strings: 

void FUN_012831ac(int *param_1,uint *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 1) == 0) {
    puVar2 = (uint *)(uVar3 + 8);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 + 1;
    if (uVar4 < 0x80000000) {
      puVar2 = (uint *)0x9a28e8;
      param_1[3] = uVar3;
    }
    if (-1 < (int)uVar4) {
      *param_1 = (int)(puVar2 + 0x4a0c7e);
      param_1[1] = param_3;
      param_1[2] = param_4;
      return;
    }
    FUN_0128479c();
  }
  FUN_0128301c();
  return;
}

