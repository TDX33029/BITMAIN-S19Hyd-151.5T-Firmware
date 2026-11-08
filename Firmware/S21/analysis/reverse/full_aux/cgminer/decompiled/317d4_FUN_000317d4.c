// FUN_000317d4 @ 000317d4  size=804  callers=3
// program: cgminer


void FUN_000317d4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *__format;
  int param3;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  int local_824;
  char acStack_820 [2048];
  
  iVar2 = pthread_mutex_lock(DAT_00068b30);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar10 = 0x1d2f;
    goto LAB_00031a80;
  }
  local_824 = DAT_00068c14;
  if (DAT_00068c14 != 0) {
    piVar4 = *(int **)(DAT_00068c14 + 0x104);
    param3 = 0;
    iVar1 = *(int *)(DAT_00068c14 + 0x160);
    local_824 = DAT_00068c14;
    iVar2 = DAT_00068c14;
    do {
      DAT_00068c14 = iVar2;
      if (piVar4 == param_1) {
        iVar8 = *(int *)(local_824 + 0x15c);
        puVar3 = *(undefined4 **)(iVar2 + 0x158);
        if (iVar8 == 0) {
          iVar7 = *(int *)(local_824 + 0x160);
          if (iVar7 != 0) {
            iVar5 = puVar3[5];
            if (local_824 == puVar3[4] - iVar5) goto LAB_000319f0;
LAB_000319e4:
            iVar2 = iVar7;
            iVar8 = iVar2;
            DAT_00068c14 = iVar2;
            goto LAB_0003187c;
          }
          free((void *)*puVar3);
          free(*(void **)(DAT_00068c14 + 0x158));
          DAT_00068c14 = iVar7;
        }
        else {
          iVar5 = puVar3[5];
          if (local_824 == puVar3[4] - iVar5) {
LAB_000319f0:
            puVar3[4] = iVar8 + iVar5;
            iVar8 = *(int *)(local_824 + 0x15c);
            if (iVar8 == 0) {
              iVar7 = *(int *)(local_824 + 0x160);
              goto LAB_000319e4;
            }
            iVar5 = *(int *)(*(int *)(iVar2 + 0x158) + 0x14);
          }
          *(undefined4 *)(iVar8 + iVar5 + 8) = *(undefined4 *)(local_824 + 0x160);
          iVar8 = *(int *)(local_824 + 0x160);
LAB_0003187c:
          piVar4 = *(int **)(iVar2 + 0x158);
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + piVar4[5] + 4) = *(undefined4 *)(local_824 + 0x15c);
            piVar4 = *(int **)(iVar2 + 0x158);
          }
          uVar6 = piVar4[1] - 1U & *(uint *)(local_824 + 0x174);
          iVar8 = *piVar4 + uVar6 * 0xc;
          *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + -1;
          puVar3 = (undefined4 *)(iVar2 + 0x158);
          bVar9 = *(int *)(*(int *)*puVar3 + uVar6 * 0xc) == local_824 + 0x158;
          if (bVar9) {
            iVar2 = *(int *)(local_824 + 0x168);
            *(int *)(*(int *)*puVar3 + uVar6 * 0xc) = iVar2;
          }
          iVar8 = *(int *)(local_824 + 0x168);
          if (bVar9) {
            iVar2 = DAT_00068c14;
          }
          if (*(int *)(local_824 + 0x164) != 0) {
            *(int *)(*(int *)(local_824 + 0x164) + 0x10) = iVar8;
            iVar8 = *(int *)(local_824 + 0x168);
          }
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(local_824 + 0x164);
          }
          *(int *)(*(int *)(iVar2 + 0x158) + 0xc) = *(int *)(*(int *)(iVar2 + 0x158) + 0xc) + -1;
        }
        param3 = param3 + 1;
        FUN_0002a76c(&local_824,"cgminer.c","clear_pool_work",0x1d35);
      }
      local_824 = iVar1;
      if (iVar1 == 0) goto LAB_00031934;
      piVar4 = *(int **)(iVar1 + 0x104);
      iVar1 = *(int *)(iVar1 + 0x160);
      iVar2 = DAT_00068c14;
    } while( true );
  }
  iVar2 = pthread_mutex_unlock(DAT_00068b30);
  if (iVar2 == 0) {
    (*DAT_0006796c)();
    return;
  }
  goto LAB_00031aa4;
LAB_00031934:
  iVar2 = pthread_mutex_unlock(DAT_00068b30);
  if (iVar2 == 0) {
    (*DAT_0006796c)();
    if ((param3 != 0) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (5 < DAT_00067848))))
    {
      snprintf(acStack_820,0x800,"Cleared %d work items due to stratum disconnect on pool %d",param3
               ,*param_1);
      FUN_0001dd98(6,acStack_820,0);
    }
    return;
  }
LAB_00031aa4:
  piVar4 = __errno_location();
  iVar2 = *piVar4;
  __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  uVar10 = 0x1d39;
LAB_00031a80:
  snprintf(acStack_820,0x800,__format,iVar2,"cgminer.c","clear_pool_work",uVar10);
  FUN_0001dd98(3,acStack_820,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

