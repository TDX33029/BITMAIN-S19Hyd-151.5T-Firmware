// FUN_0126e120 @ 0126e120 size=396 calls_out=7 calls_in=1
// strings: 

void FUN_0126e120(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_100 [112];
  undefined2 local_90 [56];
  
  iVar1 = FUN_016d997a(1,0x80801,0);
  if (iVar1 < 0) {
    puVar4 = (undefined4 *)FUN_016d2bc8();
    uVar8 = *puVar4;
    *param_1 = 0;
    param_1[1] = uVar8;
    return;
  }
  FUN_016dd606((uint)local_90 | 2,0,0x6c);
  local_90[0] = 1;
  pcVar7 = (char *)((int)param_2 + 6);
  iVar2 = *param_2;
  iVar10 = 2;
  uVar9 = iVar2 - 2;
  if (uVar9 != 0) {
    if (*pcVar7 == '\0') {
      if (0x6c < uVar9) {
        iVar3 = 1;
        puVar6 = &DAT_018aabc4;
        goto LAB_0126e2a0;
      }
      if (*pcVar7 != '\0') goto LAB_0126e1fc;
      pcVar7 = (char *)((int)param_2 + 7);
      iVar3 = 1;
    }
    else {
      uVar9 = iVar2 - 3;
      iVar3 = 0;
      if (0x6c < uVar9) {
        puVar6 = &DAT_018aabd4;
LAB_0126e2a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(iVar3,uVar9,0x6c,puVar6);
      }
    }
    iVar2 = iVar2 + -3;
    FUN_016dd1aa(((uint)local_90 | 2) + iVar3,pcVar7,iVar2);
    if (iVar2 != 0) {
      iVar10 = 3;
      if (*pcVar7 == '\0') {
        iVar10 = 2;
      }
      iVar10 = iVar10 + iVar2;
    }
  }
LAB_0126e1fc:
  FUN_016dd1aa(auStack_100,local_90,0x6e);
  FUN_016dd1aa(local_90,auStack_100,0x6e);
  uVar9 = FUN_016d6ed2(iVar1,local_90,iVar10);
  if (0x7fffffff < uVar9) {
    piVar5 = (int *)FUN_016d2bc8();
    iVar2 = *piVar5;
    if (iVar2 != 0x73) {
      FUN_016dffb2(iVar1);
      *param_1 = 0;
      param_1[1] = iVar2;
      return;
    }
  }
  param_1[1] = iVar1;
  *(undefined1 *)param_1 = 4;
  return;
}

