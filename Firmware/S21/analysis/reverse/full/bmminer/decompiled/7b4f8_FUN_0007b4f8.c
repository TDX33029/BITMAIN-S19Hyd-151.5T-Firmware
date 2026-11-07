// FUN_0007b4f8 @ 0007b4f8  size=684  callers=2
// program: bmminer


uint FUN_0007b4f8(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if (param_1[5] != 0) {
    return param_1[5];
  }
  if (*(char *)((int)param_1 + param_1[4] + 8) == '\0') {
    uVar2 = (*(code *)*param_1)(param_1[1]);
    if (uVar2 == 0xffffffff) {
      param_1[5] = 0xffffffff;
      return 0xffffffff;
    }
    *(char *)(param_1 + 2) = (char)uVar2;
    param_1[4] = 0;
    if ((0x7f < (int)uVar2) && ((int)uVar2 < 0x100)) {
      uVar3 = FUN_0007e428(uVar2 & 0xff);
      if (uVar3 != 0) {
        if (uVar3 < 2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("count >= 2","load.c",0xbd,"stream_get");
        }
        for (local_c = 1; local_c < uVar3; local_c = local_c + 1) {
          uVar1 = (*(code *)*param_1)(param_1[1]);
          *(undefined1 *)((int)param_1 + local_c + 8) = uVar1;
        }
        iVar4 = FUN_0007e50c(param_1 + 2,uVar3,0);
        if (iVar4 != 0) {
          *(undefined1 *)((int)param_1 + uVar3 + 8) = 0;
          goto LAB_0007b6ac;
        }
      }
      param_1[5] = 0xfffffffe;
      FUN_0007b2bc(param_2,param_1,5,"unable to decode byte 0x%x",uVar2);
      return 0xfffffffe;
    }
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
LAB_0007b6ac:
  iVar4 = param_1[4];
  param_1[4] = iVar4 + 1;
  uVar2 = (uint)*(byte *)((int)param_1 + iVar4 + 8);
  param_1[9] = param_1[9] + 1;
  if (uVar2 == 10) {
    param_1[6] = param_1[6] + 1;
    param_1[8] = param_1[7];
    param_1[7] = 0;
  }
  else {
    iVar4 = FUN_0007e428(uVar2);
    if (iVar4 != 0) {
      param_1[7] = param_1[7] + 1;
    }
  }
  return uVar2;
}

