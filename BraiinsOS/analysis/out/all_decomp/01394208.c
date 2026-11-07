// FUN_01394208 @ 01394208 size=204 calls_out=1 calls_in=0
// strings: 

int FUN_01394208(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_013942d4();
  iVar2 = (**(code **)(*(int *)(param_1 + 0x1154) + 0x18))
                    (*(int *)(param_1 + 0x1150) +
                     (*(int *)(*(int *)(param_1 + 0x1154) + 8) - 1U & 0xfffffff8) + 8);
  iVar3 = *(int *)(param_1 + 0x1160);
  iVar4 = 0;
  iVar5 = *(int *)(iVar3 + 0x13c);
  if (*(int *)(param_1 + 0x1020) != 2) {
    iVar4 = (*(int *)(param_1 + 0x1040) + *(int *)(param_1 + 0xef0) + *(int *)(param_1 + 0x1000) +
             *(int *)(param_1 + 0x100c) + *(int *)(param_1 + 0x101c)) * 4;
  }
  return iVar1 + iVar2 + *(int *)(iVar3 + 0x148) * 0x14 + *(int *)(iVar3 + 0x154) * 4 +
         *(int *)(iVar5 + 0x10) * 8 + *(int *)(iVar5 + 0x1c) * 0x20 + *(int *)(iVar5 + 0x28) * 0xc +
         *(int *)(iVar5 + 0x2c) + *(int *)(iVar3 + 0x138) + iVar4 + 0x180;
}

