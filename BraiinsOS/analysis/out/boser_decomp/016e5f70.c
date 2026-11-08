// FUN_016e5f70 @ 016e5f70 size=208 calls_out=1 calls_in=1
// strings: 

void FUN_016e5f70(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  if ((param_2 & 1) == 0) {
    iVar1 = *param_3;
    bVar4 = iVar1 != -0x80000000;
    if (bVar4) {
      iVar1 = param_3[2];
    }
    if (bVar4 && iVar1 != 0) {
      iVar1 = iVar1 << 4;
      puVar2 = (uint *)(param_3[1] + 8);
      do {
        if (param_1 < *puVar2) {
          *puVar2 = param_1;
          *(undefined1 *)(puVar2 + 1) = 0;
        }
        puVar2 = puVar2 + 4;
        iVar1 = iVar1 + -0x10;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = *param_3;
    bVar4 = iVar1 != -0x80000000;
    if (bVar4) {
      iVar1 = param_3[2];
    }
    if (bVar4 && iVar1 != 0) {
      iVar3 = param_3[1];
      iVar1 = iVar1 << 4;
      do {
        if (param_1 < *(uint *)(iVar3 + 8)) {
          local_2c = *(int *)(iVar3 + 4);
          local_20 = *(uint *)(iVar3 + 8) - param_1;
          local_28 = local_2c + local_20;
          *(undefined1 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 8) = 0;
          local_24 = iVar3;
          local_1c = param_1;
          FUN_01445cc0(&local_2c);
        }
        iVar3 = iVar3 + 0x10;
        iVar1 = iVar1 + -0x10;
      } while (iVar1 != 0);
    }
  }
  return;
}

