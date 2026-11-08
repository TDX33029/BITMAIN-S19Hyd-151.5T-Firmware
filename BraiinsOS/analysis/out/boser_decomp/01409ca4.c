// FUN_01409ca4 @ 01409ca4 size=340 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

char * FUN_01409ca4(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (*param_2 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3c04);
  }
  uVar5 = *(uint *)(*(int *)(param_2 + 4) + 0x28);
  uVar6 = *(uint *)(*(int *)(param_2 + 4) + 0x2c);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if ((uVar5 & uVar6) == 0xffffffff) {
    if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3ba4);
    }
    param_2[1] = '\0';
    FUN_01409e30(1,*(undefined4 *)(param_2 + 8));
    return param_2;
  }
  uVar7 = FUN_01409ee8(param_1[2],param_1[3],param_1[4],param_1[5],uVar5,uVar6);
  uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3b94);
  }
  uVar4 = param_1[1];
  param_2[3] = (char)((ulonglong)uVar7 >> 0x20);
  param_2[2] = (char)uVar7;
  param_2[1] = '\x01';
  if (uVar5 < uVar4) {
    piVar3 = (int *)(*param_1 + uVar5 * 8);
    uVar4 = piVar3[1];
    uVar5 = uVar6;
    if (uVar6 < uVar4) {
      iVar1 = *piVar3 + uVar6 * 0x18;
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      iVar2 = *(int *)(iVar1 + 0x10);
      *(int *)(param_2 + 0x10) = iVar2;
      if (iVar2 == 0) {
        iVar2 = iVar1;
      }
      *(char **)(iVar2 + 0xc) = param_2;
      *(char **)(iVar1 + 0x10) = param_2;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      return (char *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,uVar4,&DAT_01cf3bf4);
}

