// FUN_01283524 @ 01283524 size=176 calls_out=3 calls_in=126
// strings: 

void FUN_01283524(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_24;
  int local_20;
  uint local_1c;
  
  uVar5 = *param_2;
  iVar4 = (int)*(ulonglong *)(param_2 + 1);
  uVar6 = *(ulonglong *)(param_2 + 1);
  if (param_2[2] == uVar5) {
    local_24 = uVar5;
    local_20 = iVar4;
    local_1c = uVar5;
    uVar6 = FUN_01284400(&local_24);
    ppuVar2 = &PTR_FUN_01d06d34;
    if ((uVar6 & 1) != 0) {
      ppuVar2 = &PTR_FUN_01d06d48;
    }
    ppuVar3 = (undefined **)&DAT_01c25b04;
    if ((int)(uVar6 >> 0x20) == 0) {
      uVar6 = 1;
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)((uint)uVar6 | 1);
      ppuVar3 = ppuVar2;
    }
  }
  else {
    piVar1 = (int *)thunk_FUN_01be5118(0xc);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *piVar1 = iVar4;
    piVar1[1] = uVar5;
    piVar1[2] = 1;
    ppuVar3 = (undefined **)&DAT_01c25ae0;
  }
  *param_1 = ppuVar3;
  *(ulonglong *)(param_1 + 1) = uVar6;
  param_1[3] = piVar1;
  return;
}

