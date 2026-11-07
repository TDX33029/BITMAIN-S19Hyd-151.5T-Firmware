// FUN_01ae1940 @ 01ae1940 size=324 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01ae1940(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_2 == param_4) && (uVar4 = 1, param_2 != 0)) {
    iVar3 = 0;
    do {
      if (*(char *)(param_1 + iVar3) != *(char *)(param_3 + iVar3)) {
        return 0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(char *)(param_1 + iVar3)) {
      case '\x01':
        if (*(char *)(param_1 + iVar3 + 1) != *(char *)(param_3 + iVar3 + 1)) {
          return 0;
        }
        break;
      case '\x02':
        iVar1 = param_1 + iVar3;
        iVar2 = param_3 + iVar3;
        if (*(int *)(iVar1 + 8) != *(int *)(iVar2 + 8)) {
          return 0;
        }
        if (*(int *)(iVar1 + 8) == 2) {
          if (*(double *)(iVar1 + 0x10) != *(double *)(iVar2 + 0x10)) {
            return 0;
          }
        }
        else if (*(int *)(iVar1 + 0x10) != *(int *)(iVar2 + 0x10) ||
                 *(int *)(iVar1 + 0x14) != *(int *)(iVar2 + 0x14)) {
          return 0;
        }
        break;
      case '\x03':
        if (*(int *)(param_1 + iVar3 + 0xc) != *(int *)(param_3 + iVar3 + 0xc)) {
          return 0;
        }
        iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + iVar3 + 8),
                                   *(undefined4 *)(param_3 + iVar3 + 8));
        if (iVar1 != 0) {
          return 0;
        }
        break;
      case '\x04':
        iVar1 = FUN_01ae1940(*(undefined4 *)(param_1 + iVar3 + 8),
                             *(undefined4 *)(param_1 + iVar3 + 0xc),
                             *(undefined4 *)(param_3 + iVar3 + 8),
                             *(undefined4 *)(param_3 + iVar3 + 0xc));
        goto LAB_01ae1a64;
      case '\x05':
        iVar1 = FUN_01ad9898(param_1 + iVar3 + 4,param_3 + iVar3 + 4);
LAB_01ae1a64:
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (param_2 * 0x18 != iVar3);
  }
  return uVar4;
}

