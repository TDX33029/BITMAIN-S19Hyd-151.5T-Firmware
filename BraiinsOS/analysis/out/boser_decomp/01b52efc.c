// FUN_01b52efc @ 01b52efc size=472 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c | /aws-lc/crypto/fipsmodule/bn/random.c

undefined4 FUN_01b52efc(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar5 = param_3;
  if (param_3 != 1) {
    uVar5 = param_3 + 1;
  }
  if (uVar5 != 0 && (param_3 != 1 && param_3 + 1 != 1)) {
    uVar8 = 0x19;
    uVar2 = 0x42;
LAB_01b52f58:
    FUN_01b053d4(3,0,uVar2,"/aws-lc/crypto/fipsmodule/bn/random.c",uVar8);
    return 0;
  }
  if (1 < param_4) {
    uVar8 = 0x1e;
    uVar2 = 0x42;
    goto LAB_01b52f58;
  }
  if (param_2 == 0) {
    FUN_01b2af70(param_1,0);
    return 1;
  }
  if (0x7fffffe0 < param_2) {
    uVar8 = 0x28;
    uVar2 = 0x66;
    goto LAB_01b52f58;
  }
  uVar5 = param_2 - 1;
  iVar4 = param_2 + 0x1f;
  if (iVar4 < 0) {
    iVar4 = param_2 + 0x3e;
  }
  uVar6 = uVar5 & 0x1f;
  if (-1 < (int)-uVar5) {
    uVar6 = -(-uVar5 & 0x1f);
  }
  iVar4 = iVar4 >> 5;
  if (uVar6 == 0x1f) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = ~(-1 << (uVar6 + 1 & 0xff));
  }
  iVar1 = FUN_01b2b248(param_1,iVar4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_01b52ea0(*param_1);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  puVar3 = (uint *)*param_1;
  uVar7 = puVar3[iVar4 + -1] & uVar7;
  if (param_3 != 0xffffffff) {
    if (param_2 < 2) {
      param_3 = 0;
    }
    else {
      param_3 = param_3 & 1;
    }
    if (param_3 != 0) {
      if ((uVar5 & 0x1f) == 0) {
        puVar3[iVar4 + -1] = uVar7 | 1;
        puVar3[iVar4 + -2] = puVar3[iVar4 + -2] | 0x80000000;
      }
      else {
        puVar3[iVar4 + -1] = uVar7 | 3 << (uVar6 - 1 & 0xff);
      }
      goto LAB_01b53094;
    }
    uVar7 = uVar7 | 1 << (uVar5 & 0x1f);
  }
  puVar3[iVar4 + -1] = uVar7;
LAB_01b53094:
  if (param_4 == 1) {
    *puVar3 = *puVar3 | 1;
  }
  param_1[1] = iVar4;
  param_1[3] = 0;
  return 1;
}

