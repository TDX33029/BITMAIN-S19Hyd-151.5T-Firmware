// FUN_008b5144 @ 008b5144 size=312 calls_out=3 calls_in=0
// strings: 

void FUN_008b5144(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c [9];
  
  iVar5 = DAT_018d8000;
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess((int *)(DAT_018d8000 + 8));
    } while (!bVar1);
    *(int *)(DAT_018d8000 + 8) = param_2;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    iVar5 = DAT_018d8004;
    do {
      bVar1 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8004 + 8));
    } while (!bVar1);
    *(undefined4 *)(DAT_018d8004 + 8) = param_3;
    *(undefined4 *)(iVar5 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) + 8);
    iVar5 = *(int *)(param_1 + 0x38) * 0x18;
    do {
      uVar6 = FUN_0113c98c(puVar4 + 1);
      iVar3 = (int)(uVar6 >> 0x20);
      if ((uVar6 & 1) == 0) {
        iVar3 = FUN_0113ce68(puVar4[-1],*puVar4,(uint)(param_2 * iVar3) / 100);
        if (iVar3 != 0) {
          local_48 = &DAT_00349283;
          local_40 = iVar3;
          goto LAB_009d93ec;
        }
      }
      else {
        local_48 = &DAT_00349216;
        local_40 = iVar3;
LAB_009d93ec:
        local_3c[0] = 3;
        local_44 = 0x19;
        puVar2 = (undefined4 *)FUN_0099eff8(&local_48,local_3c);
        (**(code **)*puVar2)();
      }
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -0x18;
    } while (iVar5 != 0);
  }
  return;
}

