// FUN_0140163c @ 0140163c size=188 calls_out=3 calls_in=2
// strings: 

void FUN_0140163c(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [112];
  int *local_28;
  undefined1 local_24;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[2] == '\0') {
    FUN_013f4708(param_3);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(param_2);
      return;
    }
  }
  else {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    FUN_01bed4e2(auStack_98,param_3 + 2,0x70);
    local_24 = (undefined1)param_4;
    local_a0 = uVar3;
    uStack_9c = uVar4;
    local_28 = param_2;
    (**(code **)(param_1[1] + 0x14))
              (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,param_2,&local_a0,param_4
              );
  }
  return;
}

