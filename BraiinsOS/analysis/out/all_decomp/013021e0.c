// FUN_013021e0 @ 013021e0 size=380 calls_out=6 calls_in=7
// strings: 

void FUN_013021e0(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  
  if (((*(byte *)(param_2 + 0x18) == 2) ||
      (FUN_01329168(&local_30,param_3,0x21,*(byte *)(param_2 + 0x18) & 1), local_30 == 4)) &&
     ((cVar1 = *(char *)(param_2 + 0x19), cVar1 == '\x03' ||
      ((FUN_01328ef8(&local_30,param_3,0x110), local_30 == 4 &&
       (FUN_0132901c(&local_30,param_3,cVar1,0), local_30 == 4)))))) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_2 + 8) < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,*(uint *)(param_2 + 8),&DAT_01890988);
    }
    if (uVar2 != 0) {
      iVar4 = *(int *)(param_2 + 4);
      iVar3 = uVar2 * 0x78;
      do {
        FUN_01328ef8(&local_30,param_3,0x1f3a);
        if (((local_30 != 4) ||
            (FUN_01328ef8(&local_30,param_3,*(undefined4 *)(iVar4 + 0x74)), local_30 != 4)) ||
           (FUN_012fb034(&local_30,iVar4,param_3), local_30 != 4)) goto LAB_01302338;
        iVar4 = iVar4 + 0x78;
        iVar3 = iVar3 + -0x78;
      } while (iVar3 != 0);
    }
    FUN_01328b10(&local_30,param_3,*(undefined4 *)(param_2 + 0x10));
    if (local_30 == 4) {
      *param_1 = 4;
      return;
    }
  }
LAB_01302338:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

