// FUN_01b70408 @ 01b70408 size=300 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/stack/stack.c

uint FUN_01b70408(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  if (param_1 != (uint *)0x0) {
    if (*param_1 < 0x7fffffff) {
      uVar3 = param_1[3];
      if (uVar3 <= *param_1 + 1) {
        uVar4 = uVar3 * 2;
        if ((uVar3 * 2 < uVar3) || (iVar1 = uVar3 << 3, uVar4 != (uVar3 & 0x1fffffff) * 2)) {
          uVar4 = uVar3 + 1;
          iVar1 = uVar4 * 4;
          if ((uVar4 & 0xc0000000) != 0) {
            return 0;
          }
        }
        uVar3 = FUN_01b6b414(param_1[1],iVar1);
        if (uVar3 == 0) {
          return 0;
        }
        param_1[1] = uVar3;
        param_1[3] = uVar4;
      }
      uVar4 = *param_1;
      uVar3 = param_1[1];
      if (uVar2 < uVar4) {
        if ((uVar4 - uVar2 & 0x3fffffff) != 0) {
          FUN_01b70158(uVar3 + uVar2 * 4 + 4,uVar3 + uVar2 * 4);
        }
        *(undefined4 *)(param_1[1] + uVar2 * 4) = param_2;
      }
      else {
        *(undefined4 *)(uVar3 + uVar4 * 4) = param_2;
      }
      uVar2 = *param_1;
      param_1[2] = 0;
      *param_1 = uVar2 + 1;
      return uVar2 + 1;
    }
    FUN_01b053d4(0xe,0,0x45,"/aws-lc/crypto/stack/stack.c",0x7e);
  }
  return 0;
}

