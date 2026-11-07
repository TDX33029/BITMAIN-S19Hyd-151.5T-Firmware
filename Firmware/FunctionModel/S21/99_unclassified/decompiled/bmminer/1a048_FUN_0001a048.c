// FUN_0001a048 @ 0001a048  size=128  callers=1
// program: bmminer


uint FUN_0001a048(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  *param_1 = 0;
  do {
    iVar1 = FUN_0002a6f0(uVar3);
    if (iVar1 != 0) {
      if (param_3 <= uVar3) {
        return uVar4;
      }
      *(undefined4 *)(param_2 + uVar3 * 4) = 0;
      uVar2 = FUN_00017628(uVar3,4,7);
      if (uVar4 < uVar2) {
        *param_1 = uVar3;
        uVar4 = uVar2;
      }
      if (*(uint *)(param_2 + uVar3 * 4) < uVar2) {
        *(uint *)(param_2 + uVar3 * 4) = uVar2;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  return uVar4;
}

