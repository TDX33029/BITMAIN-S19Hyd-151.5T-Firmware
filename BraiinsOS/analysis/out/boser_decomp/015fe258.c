// FUN_015fe258 @ 015fe258 size=160 calls_out=0 calls_in=0
// strings: 

void FUN_015fe258(undefined4 *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_3 < 4) {
    uVar2 = param_3;
    do {
      if (uVar2 == 0) {
        uVar3 = 0;
        goto LAB_015fe2ec;
      }
      iVar1 = uVar2 - 1;
      uVar2 = uVar2 - 1;
    } while ((uint)(int)*(char *)((int)param_2 + iVar1) < 0x80000000);
    uVar3 = 1;
  }
  else {
    uVar3 = 1;
    if ((*param_2 & 0x80808080) == 0) {
      uVar2 = ((int)param_2 + 3U & 0xfffffffc) - (int)param_2;
      if (uVar2 == 0) {
        uVar2 = 4;
      }
      for (; uVar2 < param_3 - 4; uVar2 = uVar2 + 4) {
        if ((*(uint *)((int)param_2 + uVar2) & 0x80808080) != 0) goto LAB_015fe2ec;
      }
      if ((*(uint *)((int)param_2 + (param_3 - 4)) & 0x80808080) == 0) {
        uVar3 = 0;
      }
    }
  }
LAB_015fe2ec:
  *param_1 = uVar3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}

