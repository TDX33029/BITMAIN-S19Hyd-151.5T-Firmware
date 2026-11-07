// FUN_01b05104 @ 01b05104 size=408 calls_out=4 calls_in=2
// strings: get_error_values | /aws-lc/crypto/err/err.c | get_error_values | /aws-lc/crypto/err/err.c

undefined4
FUN_01b05104(int param_1,int param_2,int *param_3,uint *param_4,int *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_01b05020();
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(iVar1 + 0x100);
  if (*(uint *)(iVar1 + 0x104) == uVar5) {
    return 0;
  }
  if (param_2 == 0) {
    uVar5 = *(uint *)(iVar1 + 0x104) + 1 & 0xf;
  }
  else if (param_1 != 0) {
    uVar4 = 0xa0;
    puVar2 = &DAT_00578c17;
    goto LAB_01b0517c;
  }
  iVar6 = iVar1 + uVar5 * 0x10;
  uVar4 = *(undefined4 *)(iVar6 + 8);
  if (param_3 != (int *)0x0 && param_4 != (uint *)0x0) {
    iVar3 = *(int *)(iVar1 + uVar5 * 0x10);
    if (iVar3 == 0) {
      *param_3 = (int)&DAT_0058e148;
      *param_4 = 0;
    }
    else {
      *param_3 = iVar3;
      *param_4 = (uint)*(ushort *)(iVar6 + 0xc);
    }
  }
  if (param_5 == (int *)0x0) {
LAB_01b051f4:
    if (param_1 == 0) {
      return uVar4;
    }
  }
  else {
    iVar6 = iVar1 + uVar5 * 0x10;
    if (*(int *)(iVar6 + 4) == 0) {
      *param_5 = (int)&DAT_005a7ea4;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
      }
      goto LAB_01b051f4;
    }
    *param_5 = *(int *)(iVar6 + 4);
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 3;
    }
    if (param_1 == 0) {
      return uVar4;
    }
    thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x108));
    *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(iVar6 + 4) = 0;
  }
  if (param_2 == 0) {
    FUN_01b04f90(iVar1 + uVar5 * 0x10);
    *(uint *)(iVar1 + 0x104) = uVar5;
    return uVar4;
  }
  uVar4 = 0xd2;
  puVar2 = &DAT_0057c3e4;
LAB_01b0517c:
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(puVar2,"/aws-lc/crypto/err/err.c",uVar4,"get_error_values");
}

