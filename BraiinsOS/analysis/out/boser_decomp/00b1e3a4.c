// FUN_00b1e3a4 @ 00b1e3a4 size=224 calls_out=4 calls_in=0
// strings: 

void FUN_00b1e3a4(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_1a8;
  int local_1a4;
  undefined1 auStack_198 [376];
  
  pcVar6 = *(char **)(param_2 + 8);
  uVar5 = 0;
  iVar2 = (int)pcVar6 * 0x178;
  if ("d5ab09ee9d583b888f934adbbe8d0/tokio-1.49.0/src/runtime/signal/mod.rs" < pcVar6) {
LAB_00b1e3d0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar2);
  }
  if (iVar2 == 0) {
    local_1a4 = 8;
    local_1a8 = (char *)0x0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    uVar5 = 8;
    local_1a4 = FUN_01298504(iVar2,8);
    if (local_1a4 == 0) goto LAB_00b1e3d0;
    local_1a8 = pcVar6;
    if (pcVar6 != (char *)0x0) {
      pcVar1 = (char *)0x0;
      iVar4 = local_1a4;
      do {
        if (iVar2 == 0) break;
        FUN_00b1e4a0(auStack_198,iVar3);
        FUN_01bed4e2(iVar4,auStack_198,0x178);
        pcVar1 = pcVar1 + 1;
        iVar4 = iVar4 + 0x178;
        iVar2 = iVar2 + -0x178;
        iVar3 = iVar3 + 0x178;
      } while (pcVar6 != pcVar1);
    }
  }
  *param_1 = local_1a8;
  param_1[1] = local_1a4;
  param_1[2] = pcVar6;
  return;
}

