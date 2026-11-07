// FUN_00736dd4 @ 00736dd4 size=184 calls_out=0 calls_in=2
// strings: 

void FUN_00736dd4(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (uint *)(param_2 + 0x1000);
  iVar3 = 8;
  do {
    uVar4 = *puVar2;
    puVar1 = puVar2 + 1;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
    uVar4 = uVar4 ^ param_3;
    param_4 = *puVar1 ^ param_4 ^
              (*(int *)(param_2 + 0x400 + ((uVar4 & 0xffffff) >> 0x10) * 4) +
               *(int *)(param_2 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(param_2 + 0x800 + ((uVar4 & 0xffff) >> 8) * 4)) +
              *(int *)(param_2 + 0xc00 + (uVar4 & 0xff) * 4);
    param_3 = (*(int *)(param_2 + 0x400 + ((param_4 & 0xffffff) >> 0x10) * 4) +
               *(int *)(param_2 + (param_4 >> 0x18) * 4) ^
              *(uint *)(param_2 + 0x800 + ((param_4 & 0xffff) >> 8) * 4)) +
              *(int *)(param_2 + 0xc00 + (param_4 & 0xff) * 4) ^ uVar4;
  } while (iVar3 != 0);
  uVar4 = *(uint *)(param_2 + 0x1040);
  *param_1 = *(uint *)(param_2 + 0x1044) ^ param_4;
  param_1[1] = uVar4 ^ param_3;
  return;
}

