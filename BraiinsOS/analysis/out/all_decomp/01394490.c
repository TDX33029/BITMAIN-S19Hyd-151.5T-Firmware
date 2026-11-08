// FUN_01394490 @ 01394490 size=60 calls_out=1 calls_in=0
// strings: 

int FUN_01394490(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_013942d4();
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc14) + 0x18))
                    (*(int *)(param_1 + 0xc10) +
                     (*(int *)(*(int *)(param_1 + 0xc14) + 8) - 1U & 0xfffffff8) + 8);
  return iVar2 + iVar1;
}

