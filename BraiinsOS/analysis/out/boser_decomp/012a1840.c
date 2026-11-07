// FUN_012a1840 @ 012a1840 size=196 calls_out=1 calls_in=1
// strings: 

void FUN_012a1840(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = *(uint *)(param_3 + 0x120);
  if (((uVar6 != 0) && (uVar3 = *(uint *)(param_3 + 0x124), (uint)param_2[1] <= uVar3)) &&
     (iVar1 = thunk_FUN_01bed842(*param_2,uVar6), iVar1 == 0)) {
    *param_1 = uVar6;
    param_1[1] = uVar3;
LAB_012a18f8:
    param_1[2] = param_3;
    return;
  }
  if (*(int *)(param_3 + 0xa4) != 0) {
    uVar7 = *param_2;
    uVar6 = param_2[1];
    iVar1 = *(int *)(param_3 + 0xa4) * 0xc;
    puVar4 = (uint *)(*(int *)(param_3 + 0xa0) + 4);
    do {
      uVar3 = *puVar4;
      if (uVar6 <= uVar3) {
        uVar5 = puVar4[-1];
        iVar2 = thunk_FUN_01bed842(uVar7,uVar5,uVar6);
        if (iVar2 == 0) {
          *param_1 = uVar5;
          param_1[1] = uVar3;
          goto LAB_012a18f8;
        }
      }
      iVar1 = iVar1 + -0xc;
      puVar4 = puVar4 + 3;
    } while (iVar1 != 0);
  }
  *param_1 = 0;
  return;
}

